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
    sub_B2C434(this, method);
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
  const MethodInfo *v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x21
  System_Int32_array **v56; // x1
  _DWORD *v57; // x22
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
  System_String_array **v268; // x2
  System_String_array **v269; // x3
  System_Boolean_array **v270; // x4
  System_Int32_array **v271; // x5
  System_Int32_array *v272; // x6
  System_Int32_array *v273; // x7
  System_Int32_array **v274; // x1
  System_String_array **v275; // x2
  System_String_array **v276; // x3
  System_Boolean_array **v277; // x4
  System_Int32_array **v278; // x5
  System_Int32_array *v279; // x6
  System_Int32_array *v280; // x7
  System_Int32_array **v281; // x1
  System_String_array **v282; // x2
  System_String_array **v283; // x3
  System_Boolean_array **v284; // x4
  System_Int32_array **v285; // x5
  System_Int32_array *v286; // x6
  System_Int32_array *v287; // x7
  System_Int32_array **v288; // x1
  System_String_array **v289; // x2
  System_String_array **v290; // x3
  System_Boolean_array **v291; // x4
  System_Int32_array **v292; // x5
  System_Int32_array *v293; // x6
  System_Int32_array *v294; // x7
  System_Int32_array **v295; // x1
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  System_Int32_array **v302; // x1
  System_String_array **v303; // x2
  System_String_array **v304; // x3
  System_Boolean_array **v305; // x4
  System_Int32_array **v306; // x5
  System_Int32_array *v307; // x6
  System_Int32_array *v308; // x7
  System_Int32_array **v309; // x1
  __int64 v310; // x8
  unsigned __int64 v311; // x23
  signed __int64 v312; // x24
  __int64 v313; // x0
  Il2CppObject *v314; // x0
  CrashReporter_o *v315; // x19
  __int64 v316; // x0

  if ( (byte_418A6D9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_B2C35C(&string___TypeInfo, v6);
    sub_B2C35C(&StringLiteral_14107/*"The request timed out."*/, v7);
    sub_B2C35C(&StringLiteral_20055/*"java.net.SocketException"*/, v8);
    sub_B2C35C(&StringLiteral_12319/*"SSL CA certificate error"*/, v9);
    sub_B2C35C(&StringLiteral_1181/*"404: Not Found"*/, v10);
    sub_B2C35C(&StringLiteral_14039/*"The network connection was lost."*/, v11);
    sub_B2C35C(&StringLiteral_1176/*"400: Bad Request"*/, v12);
    sub_B2C35C(&StringLiteral_14784/*"Unable to complete SSL connection"*/, v13);
    sub_B2C35C(&StringLiteral_14819/*"Unable to read data"*/, v14);
    sub_B2C35C(&StringLiteral_17650/*"connect failed"*/, v15);
    sub_B2C35C(&StringLiteral_7103/*"HTTP/1.1 500 Internal Server Error"*/, v16);
    sub_B2C35C(&StringLiteral_20057/*"java.net.UnknownHostException"*/, v17);
    sub_B2C35C(&StringLiteral_1189/*"500: Internal Server Error"*/, v18);
    sub_B2C35C(&StringLiteral_1191/*"502:"*/, v19);
    sub_B2C35C(&StringLiteral_11426/*"Request timeout"*/, v20);
    sub_B2C35C(&StringLiteral_4244/*"Connection reset by peer"*/, v21);
    sub_B2C35C(&StringLiteral_4605/*"DLErrorType"*/, v22);
    sub_B2C35C(&StringLiteral_4604/*"DLErrorAsset"*/, v23);
    sub_B2C35C(&StringLiteral_1203/*"504: Gateway Timeout"*/, v24);
    sub_B2C35C(&StringLiteral_14973/*"Unknown Error"*/, v25);
    sub_B2C35C(&StringLiteral_1193/*"503 Auto retry count"*/, v26);
    sub_B2C35C(&StringLiteral_20038/*"java.io.EOFException"*/, v27);
    sub_B2C35C(&StringLiteral_20052/*"java.net.ConnectException"*/, v28);
    sub_B2C35C(&StringLiteral_1179/*"403: Forbidden"*/, v29);
    sub_B2C35C(&StringLiteral_4243/*"Connection refused"*/, v30);
    sub_B2C35C(&StringLiteral_7104/*"HTTP/1.1 504 Gateway Timeout"*/, v31);
    sub_B2C35C(&StringLiteral_1178/*"401: Authorization Required"*/, v32);
    sub_B2C35C(&StringLiteral_20039/*"java.io.IOException"*/, v33);
    sub_B2C35C(&StringLiteral_9482/*"No address associated with hostname"*/, v34);
    sub_B2C35C(&StringLiteral_20054/*"java.net.ProtocolException"*/, v35);
    sub_B2C35C(&StringLiteral_2096/*"AssetBundle file download time over"*/, v36);
    sub_B2C35C(&StringLiteral_1182/*"408: Request Time-out"*/, v37);
    sub_B2C35C(&StringLiteral_14514/*"Too many redirects"*/, v38);
    sub_B2C35C(&StringLiteral_12914/*"Software caused connection abort"*/, v39);
    sub_B2C35C(&StringLiteral_2095/*"AssetBundle file check sum error"*/, v40);
    sub_B2C35C(&StringLiteral_20053/*"java.net.NoRouteToHostException"*/, v41);
    sub_B2C35C(&StringLiteral_5271/*"Destination host has an erroneous SSL certificate"*/, v42);
    sub_B2C35C(&StringLiteral_4245/*"Connection timed out"*/, v43);
    sub_B2C35C(&StringLiteral_3799/*"Cannot resolve destination host"*/, v44);
    sub_B2C35C(&StringLiteral_20056/*"java.net.SocketTimeoutException"*/, v45);
    sub_B2C35C(&StringLiteral_2099/*"AssetLoadError"*/, v46);
    byte_418A6D9 = 1;
  }
  Instance = sub_B2C374(string___TypeInfo, 37LL);
  if ( !Instance )
    goto LABEL_210;
  v55 = Instance;
  Instance = StringLiteral_9482/*"No address associated with hostname"*/;
  if ( StringLiteral_9482/*"No address associated with hostname"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_9482/*"No address associated with hostname"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v56 = (System_Int32_array **)StringLiteral_9482/*"No address associated with hostname"*/;
  }
  else
  {
    v56 = 0LL;
  }
  v57 = (_DWORD *)(v55 + 24);
  if ( !*(_DWORD *)(v55 + 24) )
    goto LABEL_195;
  *(_QWORD *)(v55 + 32) = v56;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 32), v56, v49, v50, v51, v52, v53, v54);
  Instance = StringLiteral_2096/*"AssetBundle file download time over"*/;
  if ( StringLiteral_2096/*"AssetBundle file download time over"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_2096/*"AssetBundle file download time over"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v64 = (System_Int32_array **)StringLiteral_2096/*"AssetBundle file download time over"*/;
  }
  else
  {
    v64 = 0LL;
  }
  if ( *v57 <= 1u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 40) = v64;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 40), v64, v58, v59, v60, v61, v62, v63);
  Instance = StringLiteral_14039/*"The network connection was lost."*/;
  if ( StringLiteral_14039/*"The network connection was lost."*/ )
  {
    Instance = sub_B2C41C(StringLiteral_14039/*"The network connection was lost."*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v71 = (System_Int32_array **)StringLiteral_14039/*"The network connection was lost."*/;
  }
  else
  {
    v71 = 0LL;
  }
  if ( *v57 <= 2u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 48) = v71;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 48), v71, v65, v66, v67, v68, v69, v70);
  Instance = StringLiteral_4244/*"Connection reset by peer"*/;
  if ( StringLiteral_4244/*"Connection reset by peer"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_4244/*"Connection reset by peer"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v78 = (System_Int32_array **)StringLiteral_4244/*"Connection reset by peer"*/;
  }
  else
  {
    v78 = 0LL;
  }
  if ( *v57 <= 3u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 56) = v78;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 56), v78, v72, v73, v74, v75, v76, v77);
  Instance = StringLiteral_12914/*"Software caused connection abort"*/;
  if ( StringLiteral_12914/*"Software caused connection abort"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_12914/*"Software caused connection abort"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v85 = (System_Int32_array **)StringLiteral_12914/*"Software caused connection abort"*/;
  }
  else
  {
    v85 = 0LL;
  }
  if ( *v57 <= 4u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 64) = v85;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 64), v85, v79, v80, v81, v82, v83, v84);
  Instance = StringLiteral_4245/*"Connection timed out"*/;
  if ( StringLiteral_4245/*"Connection timed out"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_4245/*"Connection timed out"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v92 = (System_Int32_array **)StringLiteral_4245/*"Connection timed out"*/;
  }
  else
  {
    v92 = 0LL;
  }
  if ( *v57 <= 5u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 72) = v92;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 72), v92, v86, v87, v88, v89, v90, v91);
  Instance = StringLiteral_4243/*"Connection refused"*/;
  if ( StringLiteral_4243/*"Connection refused"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_4243/*"Connection refused"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v99 = (System_Int32_array **)StringLiteral_4243/*"Connection refused"*/;
  }
  else
  {
    v99 = 0LL;
  }
  if ( *v57 <= 6u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 80) = v99;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 80), v99, v93, v94, v95, v96, v97, v98);
  Instance = StringLiteral_14107/*"The request timed out."*/;
  if ( StringLiteral_14107/*"The request timed out."*/ )
  {
    Instance = sub_B2C41C(StringLiteral_14107/*"The request timed out."*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v106 = (System_Int32_array **)StringLiteral_14107/*"The request timed out."*/;
  }
  else
  {
    v106 = 0LL;
  }
  if ( *v57 <= 7u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 88) = v106;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 88), v106, v100, v101, v102, v103, v104, v105);
  Instance = StringLiteral_3799/*"Cannot resolve destination host"*/;
  if ( StringLiteral_3799/*"Cannot resolve destination host"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_3799/*"Cannot resolve destination host"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v113 = (System_Int32_array **)StringLiteral_3799/*"Cannot resolve destination host"*/;
  }
  else
  {
    v113 = 0LL;
  }
  if ( *v57 <= 8u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 96) = v113;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 96), v113, v107, v108, v109, v110, v111, v112);
  Instance = StringLiteral_14784/*"Unable to complete SSL connection"*/;
  if ( StringLiteral_14784/*"Unable to complete SSL connection"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_14784/*"Unable to complete SSL connection"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v120 = (System_Int32_array **)StringLiteral_14784/*"Unable to complete SSL connection"*/;
  }
  else
  {
    v120 = 0LL;
  }
  if ( *v57 <= 9u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 104) = v120;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 104), v120, v114, v115, v116, v117, v118, v119);
  Instance = StringLiteral_14973/*"Unknown Error"*/;
  if ( StringLiteral_14973/*"Unknown Error"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_14973/*"Unknown Error"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v127 = (System_Int32_array **)StringLiteral_14973/*"Unknown Error"*/;
  }
  else
  {
    v127 = 0LL;
  }
  if ( *v57 <= 0xAu )
    goto LABEL_195;
  *(_QWORD *)(v55 + 112) = v127;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 112), v127, v121, v122, v123, v124, v125, v126);
  Instance = StringLiteral_11426/*"Request timeout"*/;
  if ( StringLiteral_11426/*"Request timeout"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_11426/*"Request timeout"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v134 = (System_Int32_array **)StringLiteral_11426/*"Request timeout"*/;
  }
  else
  {
    v134 = 0LL;
  }
  if ( *v57 <= 0xBu )
    goto LABEL_195;
  *(_QWORD *)(v55 + 120) = v134;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 120), v134, v128, v129, v130, v131, v132, v133);
  Instance = StringLiteral_2095/*"AssetBundle file check sum error"*/;
  if ( StringLiteral_2095/*"AssetBundle file check sum error"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_2095/*"AssetBundle file check sum error"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v141 = (System_Int32_array **)StringLiteral_2095/*"AssetBundle file check sum error"*/;
  }
  else
  {
    v141 = 0LL;
  }
  if ( *v57 <= 0xCu )
    goto LABEL_195;
  *(_QWORD *)(v55 + 128) = v141;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 128), v141, v135, v136, v137, v138, v139, v140);
  Instance = StringLiteral_12319/*"SSL CA certificate error"*/;
  if ( StringLiteral_12319/*"SSL CA certificate error"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_12319/*"SSL CA certificate error"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v148 = (System_Int32_array **)StringLiteral_12319/*"SSL CA certificate error"*/;
  }
  else
  {
    v148 = 0LL;
  }
  if ( *v57 <= 0xDu )
    goto LABEL_195;
  *(_QWORD *)(v55 + 136) = v148;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 136), v148, v142, v143, v144, v145, v146, v147);
  Instance = StringLiteral_7103/*"HTTP/1.1 500 Internal Server Error"*/;
  if ( StringLiteral_7103/*"HTTP/1.1 500 Internal Server Error"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_7103/*"HTTP/1.1 500 Internal Server Error"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v155 = (System_Int32_array **)StringLiteral_7103/*"HTTP/1.1 500 Internal Server Error"*/;
  }
  else
  {
    v155 = 0LL;
  }
  if ( *v57 <= 0xEu )
    goto LABEL_195;
  *(_QWORD *)(v55 + 144) = v155;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 144), v155, v149, v150, v151, v152, v153, v154);
  Instance = StringLiteral_7104/*"HTTP/1.1 504 Gateway Timeout"*/;
  if ( StringLiteral_7104/*"HTTP/1.1 504 Gateway Timeout"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_7104/*"HTTP/1.1 504 Gateway Timeout"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v162 = (System_Int32_array **)StringLiteral_7104/*"HTTP/1.1 504 Gateway Timeout"*/;
  }
  else
  {
    v162 = 0LL;
  }
  if ( *v57 <= 0xFu )
    goto LABEL_195;
  *(_QWORD *)(v55 + 152) = v162;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 152), v162, v156, v157, v158, v159, v160, v161);
  Instance = StringLiteral_5271/*"Destination host has an erroneous SSL certificate"*/;
  if ( StringLiteral_5271/*"Destination host has an erroneous SSL certificate"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_5271/*"Destination host has an erroneous SSL certificate"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v169 = (System_Int32_array **)StringLiteral_5271/*"Destination host has an erroneous SSL certificate"*/;
  }
  else
  {
    v169 = 0LL;
  }
  if ( *v57 <= 0x10u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 160) = v169;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 160), v169, v163, v164, v165, v166, v167, v168);
  Instance = StringLiteral_14514/*"Too many redirects"*/;
  if ( StringLiteral_14514/*"Too many redirects"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_14514/*"Too many redirects"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v176 = (System_Int32_array **)StringLiteral_14514/*"Too many redirects"*/;
  }
  else
  {
    v176 = 0LL;
  }
  if ( *v57 <= 0x11u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 168) = v176;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 168), v176, v170, v171, v172, v173, v174, v175);
  Instance = StringLiteral_20038/*"java.io.EOFException"*/;
  if ( StringLiteral_20038/*"java.io.EOFException"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_20038/*"java.io.EOFException"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v183 = (System_Int32_array **)StringLiteral_20038/*"java.io.EOFException"*/;
  }
  else
  {
    v183 = 0LL;
  }
  if ( *v57 <= 0x12u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 176) = v183;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 176), v183, v177, v178, v179, v180, v181, v182);
  Instance = StringLiteral_20055/*"java.net.SocketException"*/;
  if ( StringLiteral_20055/*"java.net.SocketException"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_20055/*"java.net.SocketException"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v190 = (System_Int32_array **)StringLiteral_20055/*"java.net.SocketException"*/;
  }
  else
  {
    v190 = 0LL;
  }
  if ( *v57 <= 0x13u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 184) = v190;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 184), v190, v184, v185, v186, v187, v188, v189);
  Instance = StringLiteral_20056/*"java.net.SocketTimeoutException"*/;
  if ( StringLiteral_20056/*"java.net.SocketTimeoutException"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_20056/*"java.net.SocketTimeoutException"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v197 = (System_Int32_array **)StringLiteral_20056/*"java.net.SocketTimeoutException"*/;
  }
  else
  {
    v197 = 0LL;
  }
  if ( *v57 <= 0x14u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 192) = v197;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 192), v197, v191, v192, v193, v194, v195, v196);
  Instance = StringLiteral_20053/*"java.net.NoRouteToHostException"*/;
  if ( StringLiteral_20053/*"java.net.NoRouteToHostException"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_20053/*"java.net.NoRouteToHostException"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v204 = (System_Int32_array **)StringLiteral_20053/*"java.net.NoRouteToHostException"*/;
  }
  else
  {
    v204 = 0LL;
  }
  if ( *v57 <= 0x15u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 200) = v204;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 200), v204, v198, v199, v200, v201, v202, v203);
  Instance = StringLiteral_20039/*"java.io.IOException"*/;
  if ( StringLiteral_20039/*"java.io.IOException"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_20039/*"java.io.IOException"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v211 = (System_Int32_array **)StringLiteral_20039/*"java.io.IOException"*/;
  }
  else
  {
    v211 = 0LL;
  }
  if ( *v57 <= 0x16u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 208) = v211;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 208), v211, v205, v206, v207, v208, v209, v210);
  Instance = StringLiteral_20052/*"java.net.ConnectException"*/;
  if ( StringLiteral_20052/*"java.net.ConnectException"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_20052/*"java.net.ConnectException"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v218 = (System_Int32_array **)StringLiteral_20052/*"java.net.ConnectException"*/;
  }
  else
  {
    v218 = 0LL;
  }
  if ( *v57 <= 0x17u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 216) = v218;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 216), v218, v212, v213, v214, v215, v216, v217);
  Instance = StringLiteral_17650/*"connect failed"*/;
  if ( StringLiteral_17650/*"connect failed"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_17650/*"connect failed"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v225 = (System_Int32_array **)StringLiteral_17650/*"connect failed"*/;
  }
  else
  {
    v225 = 0LL;
  }
  if ( *v57 <= 0x18u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 224) = v225;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 224), v225, v219, v220, v221, v222, v223, v224);
  Instance = StringLiteral_20054/*"java.net.ProtocolException"*/;
  if ( StringLiteral_20054/*"java.net.ProtocolException"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_20054/*"java.net.ProtocolException"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v232 = (System_Int32_array **)StringLiteral_20054/*"java.net.ProtocolException"*/;
  }
  else
  {
    v232 = 0LL;
  }
  if ( *v57 <= 0x19u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 232) = v232;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 232), v232, v226, v227, v228, v229, v230, v231);
  Instance = StringLiteral_20057/*"java.net.UnknownHostException"*/;
  if ( StringLiteral_20057/*"java.net.UnknownHostException"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_20057/*"java.net.UnknownHostException"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v239 = (System_Int32_array **)StringLiteral_20057/*"java.net.UnknownHostException"*/;
  }
  else
  {
    v239 = 0LL;
  }
  if ( *v57 <= 0x1Au )
    goto LABEL_195;
  *(_QWORD *)(v55 + 240) = v239;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 240), v239, v233, v234, v235, v236, v237, v238);
  Instance = StringLiteral_1176/*"400: Bad Request"*/;
  if ( StringLiteral_1176/*"400: Bad Request"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_1176/*"400: Bad Request"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v246 = (System_Int32_array **)StringLiteral_1176/*"400: Bad Request"*/;
  }
  else
  {
    v246 = 0LL;
  }
  if ( *v57 <= 0x1Bu )
    goto LABEL_195;
  *(_QWORD *)(v55 + 248) = v246;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 248), v246, v240, v241, v242, v243, v244, v245);
  Instance = StringLiteral_1178/*"401: Authorization Required"*/;
  if ( StringLiteral_1178/*"401: Authorization Required"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_1178/*"401: Authorization Required"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v253 = (System_Int32_array **)StringLiteral_1178/*"401: Authorization Required"*/;
  }
  else
  {
    v253 = 0LL;
  }
  if ( *v57 <= 0x1Cu )
    goto LABEL_195;
  *(_QWORD *)(v55 + 256) = v253;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 256), v253, v247, v248, v249, v250, v251, v252);
  Instance = StringLiteral_1179/*"403: Forbidden"*/;
  if ( StringLiteral_1179/*"403: Forbidden"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_1179/*"403: Forbidden"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v260 = (System_Int32_array **)StringLiteral_1179/*"403: Forbidden"*/;
  }
  else
  {
    v260 = 0LL;
  }
  if ( *v57 <= 0x1Du )
    goto LABEL_195;
  *(_QWORD *)(v55 + 264) = v260;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 264), v260, v254, v255, v256, v257, v258, v259);
  Instance = StringLiteral_1181/*"404: Not Found"*/;
  if ( StringLiteral_1181/*"404: Not Found"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_1181/*"404: Not Found"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v267 = (System_Int32_array **)StringLiteral_1181/*"404: Not Found"*/;
  }
  else
  {
    v267 = 0LL;
  }
  if ( *v57 <= 0x1Eu )
    goto LABEL_195;
  *(_QWORD *)(v55 + 272) = v267;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 272), v267, v261, v262, v263, v264, v265, v266);
  Instance = StringLiteral_1182/*"408: Request Time-out"*/;
  if ( StringLiteral_1182/*"408: Request Time-out"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_1182/*"408: Request Time-out"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v274 = (System_Int32_array **)StringLiteral_1182/*"408: Request Time-out"*/;
  }
  else
  {
    v274 = 0LL;
  }
  if ( *v57 <= 0x1Fu )
    goto LABEL_195;
  *(_QWORD *)(v55 + 280) = v274;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 280), v274, v268, v269, v270, v271, v272, v273);
  Instance = StringLiteral_1189/*"500: Internal Server Error"*/;
  if ( StringLiteral_1189/*"500: Internal Server Error"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_1189/*"500: Internal Server Error"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v281 = (System_Int32_array **)StringLiteral_1189/*"500: Internal Server Error"*/;
  }
  else
  {
    v281 = 0LL;
  }
  if ( *v57 <= 0x20u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 288) = v281;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 288), v281, v275, v276, v277, v278, v279, v280);
  Instance = StringLiteral_1191/*"502:"*/;
  if ( StringLiteral_1191/*"502:"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_1191/*"502:"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v288 = (System_Int32_array **)StringLiteral_1191/*"502:"*/;
  }
  else
  {
    v288 = 0LL;
  }
  if ( *v57 <= 0x21u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 296) = v288;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 296), v288, v282, v283, v284, v285, v286, v287);
  Instance = StringLiteral_1193/*"503 Auto retry count"*/;
  if ( StringLiteral_1193/*"503 Auto retry count"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_1193/*"503 Auto retry count"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v295 = (System_Int32_array **)StringLiteral_1193/*"503 Auto retry count"*/;
  }
  else
  {
    v295 = 0LL;
  }
  if ( *v57 <= 0x22u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 304) = v295;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 304), v295, v289, v290, v291, v292, v293, v294);
  Instance = StringLiteral_1203/*"504: Gateway Timeout"*/;
  if ( StringLiteral_1203/*"504: Gateway Timeout"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_1203/*"504: Gateway Timeout"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_209;
    v302 = (System_Int32_array **)StringLiteral_1203/*"504: Gateway Timeout"*/;
  }
  else
  {
    v302 = 0LL;
  }
  if ( *v57 <= 0x23u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 312) = v302;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 312), v302, v296, v297, v298, v299, v300, v301);
  Instance = StringLiteral_14819/*"Unable to read data"*/;
  if ( StringLiteral_14819/*"Unable to read data"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_14819/*"Unable to read data"*/, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( Instance )
    {
      v309 = (System_Int32_array **)StringLiteral_14819/*"Unable to read data"*/;
      goto LABEL_188;
    }
LABEL_209:
    v316 = sub_B2C454(Instance);
    sub_B2C400(v316, 0LL);
  }
  v309 = 0LL;
LABEL_188:
  if ( *v57 <= 0x24u )
    goto LABEL_195;
  *(_QWORD *)(v55 + 320) = v309;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 320), v309, v303, v304, v305, v306, v307, v308);
  v310 = *(_QWORD *)(v55 + 24);
  if ( (int)v310 < 1 )
  {
LABEL_196:
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    v314 = (Il2CppObject *)errorCode;
    goto LABEL_208;
  }
  v311 = 0LL;
  v312 = (int)v310;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_210;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v55 + 32 + 8 * v311), 0LL);
    if ( (Instance & 1) != 0 )
      break;
    if ( (__int64)++v311 >= v312 )
      goto LABEL_196;
    if ( v311 >= (unsigned int)*v57 )
      goto LABEL_195;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v315 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, v48), !v315) )
  {
LABEL_210:
    sub_B2C434(Instance, v48);
  }
  CrashReporter__AddCustomKey(v315, (System_String_o *)StringLiteral_4604/*"DLErrorAsset"*/, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v311 >= *v57 )
  {
LABEL_195:
    v313 = sub_B2C460(Instance);
    sub_B2C400(v313, 0LL);
  }
  if ( !Instance )
    goto LABEL_210;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4605/*"DLErrorType"*/,
    *(System_String_o **)(v55 + 32 + 8 * v311),
    0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  v314 = (Il2CppObject *)StringLiteral_2099/*"AssetLoadError"*/;
LABEL_208:
  UnityEngine_Debug__LogError(v314, 0LL);
}


void __fastcall AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  AssetLoader_LoadEndHandler_o *endCallback; // x0
  AssetLoader_LoadEndDataHandler_o *endCallback2; // x0

  if ( (byte_418A6D6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A6D6 = 1;
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
  UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)this, 0LL);
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
  sub_B2C2F8(
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
    sub_B2C434(0LL, name);
  return System_String__Equals_44292872(v4, name, 0LL);
}


bool __fastcall AssetLoader__IsSame_30141784(
        AssetLoader_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_30133532(data, type, name, method);
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

  if ( (byte_418A6D5 & 1) == 0 )
  {
    sub_B2C35C(&AssetLoader__LoadDataCR_d__29_TypeInfo, resourceNames);
    byte_418A6D5 = 1;
  }
  v5 = sub_B2C42C(AssetLoader__LoadDataCR_d__29_TypeInfo);
  AssetLoader__LoadDataCR_d__29___ctor((AssetLoader__LoadDataCR_d__29_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_B2C2F8(
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

  if ( (byte_418A6D7 & 1) == 0 )
  {
    sub_B2C35C(&CatAndMouseGame_TypeInfo, method);
    byte_418A6D7 = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)p_decData, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v20; // x1

  if ( (byte_418A6D8 & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v9);
    byte_418A6D8 = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
    this->fields.loader = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.loader, 0LL, v11, v12, v13, v14, v15, v16);
  }
  this->fields.readData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_4185D97 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, v17);
    byte_4185D97 = 1;
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
    UnityEngine_Application__Quit_40611620(0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v20);
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
  sub_B2C2F8(
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
    sub_B2C434(v11, v12);
  v15 = *(_DWORD *)(v14 + 40) != *(_DWORD *)(v14 + 44);
  this->fields.isDownload = v15;
  this->fields.isRequestDownload = v15;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, DataCR, 0LL);
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
      sub_B2C434(0LL, v10);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0LL);
  }
  *p_threadDecrypt = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)p_threadDecrypt, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_418A6D1 & 1) == 0 )
  {
    sub_B2C35C(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_418A6D1 = 1;
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
    v9 = sub_B20D74(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418A6D3 & 1) == 0 )
  {
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_418A6D3 = 1;
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
    v9 = sub_B20D74(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
  return data->fields.name;
}


int32_t __fastcall AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B2C434(this, method);
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

  if ( (byte_418A6D2 & 1) == 0 )
  {
    sub_B2C35C(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_418A6D2 = 1;
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
    v9 = sub_B20D74(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418A6D4 & 1) == 0 )
  {
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_418A6D4 = 1;
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
    v9 = sub_B20D74(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  sub_B2C2F8(
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  AssetData_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(AssetData_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, AssetData_o *, _QWORD); // x0
  AssetLoader_LoadEndDataHandler_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(AssetData_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  AssetData_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  AssetLoader_LoadEndDataHandler_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
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
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(AssetData_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, data, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = data->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&data->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&data->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(data, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&data->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(AssetData_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(data, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = data->klass;
                if ( *(_WORD *)&data->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&data->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(data, class_0, v10, v12);
                }
                (*(void (__fastcall **)(AssetData_o *, _QWORD))v16)(data, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(AssetData_o *, _QWORD))&data->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  data,
                  *((_QWORD *)&data->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(data, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, AssetData_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, data, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, AssetData_o *, _QWORD))v24)(v32, data, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, AssetData_o *, _QWORD))(*v32
                                                                       + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                       + 312))(
                v32,
                data,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, AssetData_o *, __int64))v33)(v32, data, v31);
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
  sub_B2C2F8(
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  AssetLoader_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(AssetLoader_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, AssetLoader_o *, _QWORD); // x0
  AssetLoader_LoadEndHandler_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(AssetLoader_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  AssetLoader_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  AssetLoader_LoadEndHandler_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
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
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(AssetLoader_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, loader, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = loader->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&loader->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&loader->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(loader, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&loader->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(AssetLoader_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(loader, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = loader->klass;
                if ( *(_WORD *)&loader->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&loader->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(loader, class_0, v10, v12);
                }
                (*(void (__fastcall **)(AssetLoader_o *, _QWORD))v16)(loader, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(AssetLoader_o *, _QWORD))&loader->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  loader,
                  *((_QWORD *)&loader->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(loader, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, AssetLoader_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, loader, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, AssetLoader_o *, _QWORD))v24)(v32, loader, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, AssetLoader_o *, _QWORD))(*v32
                                                                         + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                         + 312))(
                v32,
                loader,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, AssetLoader_o *, __int64))v33)(v32, loader, v31);
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
  BattleServantConfConponent_o *p_errorCode_5__6; // x22
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  float unscaledTime; // s8
  ManagerConfig_c *v125; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v127; // x23
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  int64_t v142; // x23
  ManagerConfig_c *v143; // x0
  System_Int32_array **v144; // x1
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  BattleServantConfConponent_o *p_errorLocalizeCode_5__7; // x0
  System_Int32_array **v152; // x1
  System_Int32_array **Url; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_String_o *url_5__11; // x21
  struct AssetData_o *v161; // x8
  System_String_o *v162; // x22
  bool v163; // w23
  System_String_o *Key; // x0
  System_Int32_array **v165; // x0
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  System_Int32_array **v172; // x0
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  float progress; // s0
  float loadProgress_5__9; // s9
  float v181; // s8
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  float v188; // s0
  bool v189; // zf
  float v190; // s8
  UnityEngine_Networking_DownloadHandler_o *v191; // x0
  __int64 v192; // x10
  UnityEngine_Networking_DownloadHandler_o *v193; // x23
  System_String_o *v194; // x0
  int v195; // w8
  System_Int32_array **v196; // x0
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_String_array **v203; // x2
  System_String_array **v204; // x3
  System_Boolean_array **v205; // x4
  System_Int32_array **v206; // x5
  System_Int32_array *v207; // x6
  System_Int32_array *v208; // x7
  UnityEngine_Networking_DownloadHandler_c *v209; // x0
  __int64 (**image)(void); // x8
  __int64 v211; // x10
  UnityEngine_Networking_DownloadHandler_c *v212; // x8
  System_String_o *v213; // x22
  System_String_o *v214; // x0
  System_Int32_array **v215; // x1
  System_String_array **v216; // x2
  System_String_array **v217; // x3
  System_Boolean_array **v218; // x4
  System_Int32_array **v219; // x5
  System_Int32_array *v220; // x6
  System_Int32_array *v221; // x7
  System_String_o *v222; // x22
  System_String_o *v223; // x0
  System_Int32_array **v224; // x0
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v232; // x23
  System_String_o *v233; // x23
  AssetLoader__LoadDataCR_d__29_o *v234; // x23
  System_String_o *v235; // x24
  int v236; // w8
  System_String_o *v237; // x0
  System_String_array **v238; // x2
  System_String_array **v239; // x3
  System_Boolean_array **v240; // x4
  System_Int32_array **v241; // x5
  System_Int32_array *v242; // x6
  System_Int32_array *v243; // x7
  AssetLoader__LoadDataCR_d__29_o *v244; // x22
  System_Int32_array **v245; // x1
  System_String_array **v246; // x2
  System_String_array **v247; // x3
  System_Boolean_array **v248; // x4
  System_Int32_array **v249; // x5
  System_Int32_array *v250; // x6
  System_Int32_array *v251; // x7
  System_Int32_array **v252; // x23
  System_String_array **v253; // x2
  System_String_array **v254; // x3
  System_Boolean_array **v255; // x4
  System_Int32_array **v256; // x5
  System_Int32_array *v257; // x6
  System_Int32_array *v258; // x7
  System_Int32_array **v259; // x1
  struct AssetData_o *v260; // x8
  System_String_array **v261; // x2
  System_String_array **v262; // x3
  System_Boolean_array **v263; // x4
  System_Int32_array **v264; // x5
  System_Int32_array *v265; // x6
  System_Int32_array *v266; // x7
  System_Int32_array **v267; // x23
  System_String_array **v268; // x2
  System_String_array **v269; // x3
  System_Boolean_array **v270; // x4
  System_Int32_array **v271; // x5
  System_Int32_array *v272; // x6
  System_Int32_array *v273; // x7
  System_Int32_array **v274; // x1
  System_String_array **v275; // x2
  System_String_array **v276; // x3
  System_Boolean_array **v277; // x4
  System_Int32_array **v278; // x5
  System_Int32_array *v279; // x6
  System_Int32_array *v280; // x7
  System_Int32_array **v281; // x23
  System_String_array **v282; // x2
  System_String_array **v283; // x3
  System_Boolean_array **v284; // x4
  System_Int32_array **v285; // x5
  System_Int32_array *v286; // x6
  System_Int32_array *v287; // x7
  System_Int32_array **v288; // x1
  System_Int32_array **v289; // x0
  System_String_array **v290; // x2
  System_String_array **v291; // x3
  System_Boolean_array **v292; // x4
  System_Int32_array **v293; // x5
  System_Int32_array *v294; // x6
  System_Int32_array *v295; // x7
  ManagerConfig_c *v296; // x0
  struct AssetData_o *v297; // x8
  CommonUI_o *v298; // x21
  System_String_o *v299; // x22
  ErrorDialog_ClickDelegate_o *v300; // x23
  ManagementManager_c *v301; // x0
  _BOOL4 isDuringStartup; // w19
  WebViewManager_o *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v305; // x22
  System_String_o *v306; // x21
  System_String_o *v307; // x23
  System_String_o *v308; // x23
  ErrorDialog_ClickDelegate_o *v309; // x24
  System_String_o *v310; // x23
  System_String_o *v311; // x23
  ErrorDialog_ClickDelegate_o *v312; // x24
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  System_String_array **v314; // x2
  System_String_array **v315; // x3
  System_Boolean_array **v316; // x4
  System_Int32_array **v317; // x5
  System_Int32_array *v318; // x6
  System_Int32_array *v319; // x7
  System_String_array **v320; // x2
  System_String_array **v321; // x3
  System_Boolean_array **v322; // x4
  System_Int32_array **v323; // x5
  System_Int32_array *v324; // x6
  System_Int32_array *v325; // x7
  System_Int32_array **ConfigFileAddress; // x0
  System_String_array **v327; // x2
  System_String_array **v328; // x3
  System_Boolean_array **v329; // x4
  System_Int32_array **v330; // x5
  System_Int32_array *v331; // x6
  System_Int32_array *v332; // x7
  System_String_o *v333; // x21
  System_String_o *UrlString; // x0
  System_String_array **v335; // x2
  System_String_array **v336; // x3
  System_Boolean_array **v337; // x4
  System_Int32_array **v338; // x5
  System_Int32_array *v339; // x6
  System_Int32_array *v340; // x7
  AssetLoader__LoadDataCR_d__29_o **v341; // x21
  float v342; // s8
  ManagerConfig_c *v343; // x0
  float v344; // s0
  System_Int32_array **v345; // x0
  System_String_array **v346; // x2
  System_String_array **v347; // x3
  System_Boolean_array **v348; // x4
  System_Int32_array **v349; // x5
  System_Int32_array *v350; // x6
  System_Int32_array *v351; // x7
  System_String_array **v352; // x2
  System_String_array **v353; // x3
  System_Boolean_array **v354; // x4
  System_Int32_array **v355; // x5
  System_Int32_array *v356; // x6
  System_Int32_array *v357; // x7
  float v358; // s0
  float v359; // s9
  float v360; // s8
  float v361; // s0
  float v362; // s8
  System_String_o **v363; // x21
  UnityEngine_Networking_UnityWebRequest_o **v364; // x22
  System_String_o *v365; // x0
  System_String_o *text; // x23
  System_String_o *v367; // x23
  System_String_array **v368; // x2
  System_String_array **v369; // x3
  System_Boolean_array **v370; // x4
  System_Int32_array **v371; // x5
  System_Int32_array *v372; // x6
  System_Int32_array *v373; // x7
  System_String_o *v374; // x23
  int v375; // w8
  int32_t v376; // w0
  int32_t v377; // w25
  System_String_o *v378; // x24
  System_String_o *v379; // x23
  System_Byte_array *v380; // x25
  uint32_t v381; // w25
  int v382; // w8
  Il2CppObject *v383; // x25
  AssetLoader__LoadDataCR_d__29_o *v384; // x21
  unsigned int v385; // w26
  System_String_o *v386; // x22
  Il2CppObject *v387; // x8
  AssetLoader__LoadDataCR_d__29_o *v388; // x22
  char v389; // w8
  System_String_o *v390; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v392; // x22
  System_String_o *v393; // x0
  int v394; // w23
  __int64 v395; // x0
  struct AssetData_o *v396; // x8
  ManagementManager_c *v397; // x0
  _BOOL4 v398; // w19
  CommonUI_o *v399; // x21
  System_String_o *v400; // x22
  ErrorDialog_ClickDelegate_o *v401; // x23
  ManagementManager_c *v402; // x0
  _BOOL4 v403; // w21
  CommonUI_o *v404; // x19
  __int64 *v405; // x8
  System_String_o *v406; // x21
  ErrorDialog_ClickDelegate_o *v407; // x22
  bool result; // w0
  __int64 *v409; // x8
  System_String_o *v410; // x22
  ErrorDialog_ClickDelegate_o *v411; // x23
  System_String_array **v412; // x2
  System_String_array **v413; // x3
  System_Boolean_array **v414; // x4
  System_Int32_array **v415; // x5
  System_Int32_array *v416; // x6
  System_Int32_array *v417; // x7
  System_String_array **v418; // x2
  System_String_array **v419; // x3
  System_Boolean_array **v420; // x4
  System_Int32_array **v421; // x5
  System_Int32_array *v422; // x6
  System_Int32_array *v423; // x7
  Il2CppObject *_2__current; // x21
  AssetData_o *v425; // x22
  AssetLoader__LoadDataCR_d__29_o **v426; // x21
  __int64 v427; // x10
  __int64 v428; // x10
  System_Byte_array *v429; // x0
  System_Int32_array **v430; // x0
  System_String_array **v431; // x2
  System_String_array **v432; // x3
  System_Boolean_array **v433; // x4
  System_Int32_array **v434; // x5
  System_Int32_array *v435; // x6
  System_Int32_array *v436; // x7
  System_String_array **v437; // x2
  System_String_array **v438; // x3
  System_Boolean_array **v439; // x4
  System_Int32_array **v440; // x5
  System_Int32_array *v441; // x6
  System_Int32_array *v442; // x7
  System_Int32_array **req_5__13; // x1
  System_String_array **v444; // x2
  System_String_array **v445; // x3
  System_Boolean_array **v446; // x4
  System_Int32_array **v447; // x5
  System_Int32_array *v448; // x6
  System_Int32_array *v449; // x7
  System_Int32_array **LoadRequest; // x0
  BattleServantConfConponent_o *v451; // x20
  System_String_array **v452; // x2
  System_String_array **v453; // x3
  System_Boolean_array **v454; // x4
  System_Int32_array **v455; // x5
  System_Int32_array *v456; // x6
  System_Int32_array *v457; // x7
  System_Int32_array **v458; // x0
  BattleServantConfConponent_o *p__2__current; // x26
  System_String_array **v460; // x2
  System_String_array **v461; // x3
  System_Boolean_array **v462; // x4
  System_Int32_array **v463; // x5
  System_Int32_array *v464; // x6
  System_Int32_array *v465; // x7
  int v466; // w8
  int autoRetryCount_5__3; // w19
  ManagerConfig_c *v468; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v470; // x20
  System_String_array **v471; // x2
  System_String_array **v472; // x3
  System_Boolean_array **v473; // x4
  System_Int32_array **v474; // x5
  System_Int32_array *v475; // x6
  System_Int32_array *v476; // x7
  System_Int32_array **v477; // x1
  System_String_array **v478; // x2
  System_String_array **v479; // x3
  System_Boolean_array **v480; // x4
  System_Int32_array **v481; // x5
  System_Int32_array *v482; // x6
  System_Int32_array *v483; // x7
  System_String_array **v484; // x2
  System_String_array **v485; // x3
  System_Boolean_array **v486; // x4
  System_Int32_array **v487; // x5
  System_Int32_array *v488; // x6
  System_Int32_array *v489; // x7
  System_Int32_array **v490; // x1
  System_Int32_array **v491; // x1
  System_Int32_array **v492; // x1
  System_String_array **v493; // x2
  System_String_array **v494; // x3
  System_Boolean_array **v495; // x4
  System_Int32_array **v496; // x5
  System_Int32_array *v497; // x6
  System_Int32_array *v498; // x7
  ManagerConfig_c *v499; // x0
  struct AssetData_o *v500; // x8
  CommonUI_o *v501; // x22
  System_String_o *v502; // x21
  ErrorDialog_ClickDelegate_o *v503; // x23
  System_Int32_array **v504; // x1
  ManagementManager_c *v505; // x0
  _BOOL4 v506; // w19
  CommonUI_o *v507; // x21
  System_String_o *v508; // x22
  ErrorDialog_ClickDelegate_o *v509; // x23
  System_String_o *v510; // x22
  ErrorDialog_ClickDelegate_o *v511; // x23
  System_Int32_array **v512; // x1
  UnityEngine_WaitForSeconds_o *v513; // x20
  System_String_array **v514; // x2
  System_String_array **v515; // x3
  System_Boolean_array **v516; // x4
  System_Int32_array **v517; // x5
  System_Int32_array *v518; // x6
  System_Int32_array *v519; // x7
  AssetLoader___c_c *v520; // x0
  struct AssetLoader___c_StaticFields *v521; // x8
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v523; // x21
  struct AssetLoader___c_StaticFields *v524; // x0
  System_String_array **v525; // x2
  System_String_array **v526; // x3
  System_Boolean_array **v527; // x4
  System_Int32_array **v528; // x5
  System_Int32_array *v529; // x6
  System_Int32_array *v530; // x7
  UnityEngine_WaitUntil_o *v531; // x21
  System_String_array **v532; // x2
  System_String_array **v533; // x3
  System_Boolean_array **v534; // x4
  System_Int32_array **v535; // x5
  System_Int32_array *v536; // x6
  System_Int32_array *v537; // x7
  UnityEngine_Networking_DownloadHandler_o *v538; // x0
  ManagerConfig_c *v539; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  System_Int32_array **wait_5__10; // x1
  ManagerConfig_c *v542; // x0
  struct ManagerConfig_StaticFields *v543; // x8
  System_Int32_array **v544; // x1
  __int64 v545; // x0
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-A0h]
  AssetLoader__LoadDataCR_d__29_o *v548; // [xsp+28h] [xbp-78h]
  __int64 v549; // [xsp+30h] [xbp-70h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+38h] [xbp-68h] BYREF

  v9 = this;
  if ( (byte_4186BAE & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetLoader_EndRebootDialog__, method);
    sub_B2C35C(&Method_AssetLoader_EndRetryDialog__, v10);
    sub_B2C35C(&Method_AssetLoader_EndWarningDialog__, v11);
    sub_B2C35C(&AssetManager_TypeInfo, v12);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v13);
    sub_B2C35C(&char___TypeInfo, v14);
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, v15);
    sub_B2C35C(&CommonServicePluginScript_TypeInfo, v16);
    sub_B2C35C(&Crc32_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v19);
    sub_B2C35C(&DownloadHandlerDecryptFileWithCrc_TypeInfo, v20);
    sub_B2C35C(&DownloadHandlerFileWithCrcCheck_TypeInfo, v21);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v22);
    sub_B2C35C(&System_Func_bool__TypeInfo, v23);
    sub_B2C35C(&System_IO_IOException_TypeInfo, v24);
    sub_B2C35C(&LocalizationManager_TypeInfo, v25);
    sub_B2C35C(&ManagementManager_TypeInfo, v26);
    sub_B2C35C(&ManagerConfig_TypeInfo, v27);
    sub_B2C35C(&NetworkManager_TypeInfo, v28);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29);
    sub_B2C35C(&string___TypeInfo, v30);
    sub_B2C35C(&Method_AssetLoader___c__LoadDataCR_b__29_0__, v31);
    sub_B2C35C(&AssetLoader___c_TypeInfo, v32);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v33);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v34);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v35);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v36);
    sub_B2C35C(&StringLiteral_9276/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/, v37);
    sub_B2C35C(&StringLiteral_7098/*"HTTP"*/, v38);
    sub_B2C35C(&StringLiteral_5320/*"Disk full"*/, v39);
    sub_B2C35C(&StringLiteral_2113/*"AssetStorageList download time over"*/, v40);
    sub_B2C35C(&StringLiteral_9285/*"NETWORK_ERROR_DISK_FULL"*/, v41);
    sub_B2C35C(&StringLiteral_80/*" "*/, v42);
    sub_B2C35C(&StringLiteral_2100/*"AssetName : "*/, v43);
    sub_B2C35C(&StringLiteral_655/*")\n\n503 Auto retry count "*/, v44);
    sub_B2C35C(&StringLiteral_658/*")\nfile crc ("*/, v45);
    sub_B2C35C(&StringLiteral_1192/*"503"*/, v46);
    sub_B2C35C(&StringLiteral_1741/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v47);
    sub_B2C35C(&StringLiteral_15745/*"[FFFF80]Download error for debug"*/, v48);
    sub_B2C35C(&StringLiteral_2110/*"AssetStorageList download data error"*/, v49);
    sub_B2C35C(&StringLiteral_23698/*"~"*/, v50);
    sub_B2C35C(&StringLiteral_12367/*"STATUS"*/, v51);
    sub_B2C35C(&StringLiteral_654/*")\n\n"*/, v52);
    sub_B2C35C(&StringLiteral_9275/*"NETWORK_ERROR_ASSET_UPDATE"*/, v53);
    sub_B2C35C(&StringLiteral_586/*"("*/, v54);
    sub_B2C35C(&StringLiteral_656/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v55);
    sub_B2C35C(&StringLiteral_652/*")"*/, v56);
    sub_B2C35C(&StringLiteral_18396/*"error "*/, v57);
    sub_B2C35C(&StringLiteral_1535/*"@"*/, v58);
    sub_B2C35C(&StringLiteral_1742/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v59);
    sub_B2C35C(&StringLiteral_2111/*"AssetStorageList download error"*/, v60);
    sub_B2C35C(&StringLiteral_657/*")\n\nAssetBundle file download time over"*/, v61);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_B2C35C(&StringLiteral_1/*""*/, v62);
    byte_4186BAE = 1;
  }
  v549 = 0LL;
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
      sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields._asyncOperater_5__12, 0LL, v2, v3, v4, v5, v6, v7);
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
          sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v91, v92, v93, v94, v95, v96);
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
        sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.readData, data, v98, v99, v100, v101, v102, v103);
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
      sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v105, v106, v107, v108, v109, v110);
      _4__this->fields.readData = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v111, v112, v113, v114, v115, v116);
      while ( 1 )
      {
LABEL_57:
        _4__this->fields.readData = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
        if ( !_4__this->fields.isDownload )
          goto LABEL_341;
        *(_WORD *)&v9->fields._isAutoRetry_5__4 = 0;
        v9->fields._errorCode_5__6 = 0LL;
        p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
        sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields._errorCode_5__6, 0LL, v2, v3, v4, v5, v6, v7);
        v9->fields._errorLocalizeCode_5__7 = 0LL;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v9->fields._errorLocalizeCode_5__7,
          0LL,
          v118,
          v119,
          v120,
          v121,
          v122,
          v123);
        unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
        v125 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v125 = ManagerConfig_TypeInfo;
        }
        TIMEOUT = v125->static_fields->TIMEOUT;
        v9->fields._loadProgress_5__9 = 0.0;
        v9->fields._requestTime_5__8 = unscaledTime + TIMEOUT;
        v127 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v127, 0LL);
        v9->fields._wait_5__10 = v127;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v9->fields._wait_5__10,
          (System_Int32_array **)v127,
          v128,
          v129,
          v130,
          v131,
          v132,
          v133);
        Path = AssetStorageCache__GetPath(0LL);
        if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
        }
        FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
        if ( FreeSize >= 1 )
        {
          v142 = FreeSize;
          v143 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v143 = ManagerConfig_TypeInfo;
          }
          if ( v142 < v143->static_fields->LIMIT_FREE_SIZE )
          {
            _4__this->fields.isErrorDialog = 1;
            v144 = (System_Int32_array **)StringLiteral_5320/*"Disk full"*/;
            p_errorCode_5__6->klass = (BattleServantConfConponent_c *)StringLiteral_5320/*"Disk full"*/;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
              v144,
              v136,
              v137,
              v138,
              v139,
              v140,
              v141);
            p_errorLocalizeCode_5__7 = (BattleServantConfConponent_o *)&v9->fields._errorLocalizeCode_5__7;
            v152 = (System_Int32_array **)StringLiteral_9285/*"NETWORK_ERROR_DISK_FULL"*/;
            v9->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9285/*"NETWORK_ERROR_DISK_FULL"*/;
            goto LABEL_165;
          }
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
        if ( !this )
          goto LABEL_438;
        Url = (System_Int32_array **)AssetData__get_Url((AssetData_o *)this, 0LL);
        v9->fields._url_5__11 = (struct System_String_o *)Url;
        sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields._url_5__11, Url, v154, v155, v156, v157, v158, v159);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
        if ( !this )
          goto LABEL_438;
        url_5__11 = v9->fields._url_5__11;
        this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, 0LL);
        v161 = _4__this->fields.data;
        v162 = (System_String_o *)this;
        if ( v9->fields._isEncrypted_5__2 )
        {
          if ( !v161 )
            goto LABEL_438;
          v163 = v161->fields.entryCount > 0;
        }
        else
        {
          if ( !v161 )
            goto LABEL_438;
          v163 = 0;
        }
        Key = AssetData__get_Key(_4__this->fields.data, 0LL);
        v165 = (System_Int32_array **)UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__11, v162, v163, Key, 0LL);
        _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)v165;
        sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.loader, v165, v166, v167, v168, v169, v170, v171);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        v172 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                        0LL);
        v9->fields._asyncOperater_5__12 = (struct UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)v172;
        p_asyncOperater_5__12 = (AssetLoader__LoadDataCR_d__29_o **)&v9->fields._asyncOperater_5__12;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v9->fields._asyncOperater_5__12,
          v172,
          v173,
          v174,
          v175,
          v176,
          v177,
          v178);
LABEL_79:
        this = *p_asyncOperater_5__12;
        if ( !*p_asyncOperater_5__12 )
LABEL_438:
          sub_B2C434(this, method);
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
          v181 = progress;
          v188 = UnityEngine_Time__get_unscaledTime(0LL);
          v189 = v181 == loadProgress_5__9;
          v190 = v188;
          if ( !v189 )
          {
            v539 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v539 = ManagerConfig_TypeInfo;
            }
            static_fields = v539->static_fields;
            this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__12;
            v9->fields._requestTime_5__8 = v190 + static_fields->TIMEOUT;
            if ( !this )
              goto LABEL_438;
            v9->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                              (UnityEngine_AsyncOperation_o *)this,
                                              0LL);
LABEL_431:
            wait_5__10 = (System_Int32_array **)v9->fields._wait_5__10;
            v9->fields.__2__current = (Il2CppObject *)wait_5__10;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v9->fields.__2__current,
              wait_5__10,
              v182,
              v183,
              v184,
              v185,
              v186,
              v187);
            result = 1;
            v9->fields.__1__state = 1;
            return result;
          }
          if ( v188 < v9->fields._requestTime_5__8 )
            goto LABEL_431;
        }
        if ( !_4__this )
          goto LABEL_438;
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        v191 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                 (UnityEngine_Networking_UnityWebRequest_o *)this,
                 0LL);
        if ( v191
          && (v192 = *(&DownloadHandlerFileWithCrcCheck_TypeInfo->_2.bitflags2 + 1),
              *(&v191->klass->_2.bitflags2 + 1) >= (unsigned int)v192) )
        {
          v193 = (DownloadHandlerFileWithCrcCheck_c *)v191->klass->_2.typeHierarchy[v192 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
               ? v191
               : 0LL;
        }
        else
        {
          v193 = 0LL;
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        {
          v196 = (System_Int32_array **)System_String__Concat_44307816(
                                          (System_String_o *)StringLiteral_586/*"("*/,
                                          v9->fields._url_5__11,
                                          (System_String_o *)StringLiteral_657/*")\n\nAssetBundle file download time over"*/,
                                          0LL);
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
          v9->fields._errorCode_5__6 = (struct System_String_o *)v196;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
            v196,
            v197,
            v198,
            v199,
            v200,
            v201,
            v202);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_438;
          UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          if ( v193 )
            DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v193, 0LL);
          goto LABEL_164;
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_438;
        v194 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        if ( System_String__IsNullOrEmpty(v194, 0LL) )
        {
          if ( !v193 )
          {
            v195 = 0;
LABEL_127:
            HIDWORD(v549) = v195;
            this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
            if ( !this )
              goto LABEL_438;
            if ( v195 == this->fields._autoRetryCount_5__3 )
            {
              AssetData__UpdateVersion((AssetData_o *)this, 0LL);
              p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
              _4__this->fields.isDownload = 0;
            }
            else
            {
              this = (AssetLoader__LoadDataCR_d__29_o *)sub_B2C374(string___TypeInfo, 7LL);
              if ( !this )
                goto LABEL_438;
              v244 = this;
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_586/*"("*/;
              if ( StringLiteral_586/*"("*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B2C41C(StringLiteral_586/*"("*/, v244->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v245 = (System_Int32_array **)StringLiteral_586/*"("*/;
              }
              else
              {
                v245 = 0LL;
              }
              if ( !LODWORD(v244->fields.__2__current) )
                goto LABEL_295;
              v244->fields.__4__this = (struct AssetLoader_o *)v245;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v244->fields.__4__this,
                v245,
                v238,
                v239,
                v240,
                v241,
                v242,
                v243);
              v252 = (System_Int32_array **)v9->fields._url_5__11;
              if ( v252 )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B2C41C(
                                                            v9->fields._url_5__11,
                                                            v244->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
              }
              if ( LODWORD(v244->fields.__2__current) <= 1 )
                goto LABEL_295;
              v244->fields.resourceNames = (struct System_String_array *)v252;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v244->fields.resourceNames,
                v252,
                v246,
                v247,
                v248,
                v249,
                v250,
                v251);
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_656/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              if ( StringLiteral_656/*")\n\nAssetBundle file check sum error\nlist crc ("*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B2C41C(StringLiteral_656/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v244->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v259 = (System_Int32_array **)StringLiteral_656/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              }
              else
              {
                v259 = 0LL;
              }
              if ( LODWORD(v244->fields.__2__current) <= 2 )
                goto LABEL_295;
              *(_QWORD *)&v244->fields._isEncrypted_5__2 = v259;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v244->fields._isEncrypted_5__2,
                v259,
                v253,
                v254,
                v255,
                v256,
                v257,
                v258);
              v260 = _4__this->fields.data;
              if ( !v260 )
                goto LABEL_438;
              LODWORD(v549) = v260->fields.crc;
              this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v549, 0LL);
              v267 = (System_Int32_array **)this;
              if ( this )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B2C41C(this, v244->klass->_1.element_class);
                if ( !this )
                {
LABEL_439:
                  v545 = sub_B2C454();
                  sub_B2C400(v545, 0LL);
                }
              }
              if ( LODWORD(v244->fields.__2__current) <= 3 )
                goto LABEL_295;
              *(_QWORD *)&v244->fields._isAutoRetry_5__4 = v267;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v244->fields._isAutoRetry_5__4,
                v267,
                v261,
                v262,
                v263,
                v264,
                v265,
                v266);
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_658/*")\nfile crc ("*/;
              if ( StringLiteral_658/*")\nfile crc ("*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B2C41C(StringLiteral_658/*")\nfile crc ("*/, v244->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v274 = (System_Int32_array **)StringLiteral_658/*")\nfile crc ("*/;
              }
              else
              {
                v274 = 0LL;
              }
              if ( LODWORD(v244->fields.__2__current) <= 4 )
                goto LABEL_295;
              v244->fields._errorCode_5__6 = (struct System_String_o *)v274;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v244->fields._errorCode_5__6,
                v274,
                v268,
                v269,
                v270,
                v271,
                v272,
                v273);
              this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v549 + 4, 0LL);
              v281 = (System_Int32_array **)this;
              if ( this )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B2C41C(this, v244->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
              }
              if ( LODWORD(v244->fields.__2__current) <= 5 )
                goto LABEL_295;
              v244->fields._errorLocalizeCode_5__7 = (struct System_String_o *)v281;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v244->fields._errorLocalizeCode_5__7,
                v281,
                v275,
                v276,
                v277,
                v278,
                v279,
                v280);
              this = (AssetLoader__LoadDataCR_d__29_o *)StringLiteral_652/*")"*/;
              if ( StringLiteral_652/*")"*/ )
              {
                this = (AssetLoader__LoadDataCR_d__29_o *)sub_B2C41C(StringLiteral_652/*")"*/, v244->klass->_1.element_class);
                if ( !this )
                  goto LABEL_439;
                v288 = (System_Int32_array **)StringLiteral_652/*")"*/;
              }
              else
              {
                v288 = 0LL;
              }
              if ( LODWORD(v244->fields.__2__current) <= 6 )
                goto LABEL_295;
              *(_QWORD *)&v244->fields._requestTime_5__8 = v288;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v244->fields._requestTime_5__8,
                v288,
                v282,
                v283,
                v284,
                v285,
                v286,
                v287);
              v289 = (System_Int32_array **)System_String__Concat_44385656((System_String_array *)v244, 0LL);
              v9->fields._errorCode_5__6 = (struct System_String_o *)v289;
              p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
                v289,
                v290,
                v291,
                v292,
                v293,
                v294,
                v295);
              v9->fields._isCrcError_5__5 = 1;
            }
            goto LABEL_164;
          }
          if ( !v193[4].klass )
          {
            v195 = (int)v193[1].klass;
            goto LABEL_127;
          }
        }
        else if ( !v193 )
        {
          goto LABEL_110;
        }
        DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v193, 0LL);
        v209 = v193[4].klass;
        if ( !v209 )
        {
LABEL_110:
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_438;
          v222 = v9->fields._url_5__11;
          v223 = UnityEngine_Networking_UnityWebRequest__get_error(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          v224 = (System_Int32_array **)System_String__Concat_44308944(
                                          (System_String_o *)StringLiteral_586/*"("*/,
                                          v222,
                                          (System_String_o *)StringLiteral_654/*")\n\n"*/,
                                          v223,
                                          0LL);
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
          v9->fields._errorCode_5__6 = (struct System_String_o *)v224;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
            v224,
            v225,
            v226,
            v227,
            v228,
            v229,
            v230);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_438;
          ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                              (UnityEngine_Networking_UnityWebRequest_o *)this,
                              0LL);
          if ( !ResponseHeaders )
            goto LABEL_164;
          v232 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders;
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders,
                 (const MethodInfo_2DB18BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
            || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                  v232,
                  (System_Xml_XmlQualifiedName_o *)StringLiteral_12367/*"STATUS"*/,
                  &value,
                  (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
          {
            goto LABEL_164;
          }
          v233 = (System_String_o *)value;
          this = (AssetLoader__LoadDataCR_d__29_o *)sub_B2C374(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_438;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_295;
          LOWORD(this->fields.__4__this) = 32;
          if ( !v233 )
            goto LABEL_438;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_44366316(
                                                      v233,
                                                      (System_Char_array *)this,
                                                      1,
                                                      0LL);
          if ( !this )
            goto LABEL_438;
          v234 = this;
          if ( SLODWORD(this->fields.__2__current) < 2 )
            goto LABEL_164;
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_438;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_7098/*"HTTP"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_164;
          if ( LODWORD(v234->fields.__2__current) <= 1 )
            goto LABEL_295;
          this = (AssetLoader__LoadDataCR_d__29_o *)v234->fields.resourceNames;
          if ( !this )
            goto LABEL_438;
          if ( !System_String__Equals_44292872((System_String_o *)this, (System_String_o *)StringLiteral_1192/*"503"*/, 0LL) )
            goto LABEL_164;
          v235 = v9->fields._url_5__11;
          v236 = v9->fields._autoRetryCount_5__3 + 1;
          v9->fields._isAutoRetry_5__4 = 1;
          v9->fields._autoRetryCount_5__3 = v236;
          v237 = System_Int32__ToString((int)v9 + 52, 0LL);
          v215 = (System_Int32_array **)System_String__Concat_44308944(
                                          (System_String_o *)StringLiteral_586/*"("*/,
                                          v235,
                                          (System_String_o *)StringLiteral_655/*")\n\n503 Auto retry count "*/,
                                          v237,
                                          0LL);
          v9->fields._errorCode_5__6 = (struct System_String_o *)v215;
          goto LABEL_109;
        }
        image = (__int64 (**)(void))v209->_1.image;
        v211 = *(&System_IO_IOException_TypeInfo->_2.bitflags2 + 1);
        if ( *((unsigned __int8 *)v209->_1.image + 300) >= (unsigned int)v211
          && *((System_IO_IOException_c **)image[25] + v211 - 1) == System_IO_IOException_TypeInfo )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)v193[4].klass;
          if ( !this )
            goto LABEL_438;
          v215 = (System_Int32_array **)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                          this,
                                          this->klass->vtable._6_MoveNext.methodPtr);
          v9->fields._errorCode_5__6 = (struct System_String_o *)v215;
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
        }
        else
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)image[45]();
          v212 = v193[4].klass;
          if ( !v212 )
            goto LABEL_438;
          v213 = (System_String_o *)this;
          v214 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v212->_1.image
                                     + 49))(
                                      v193[4].klass,
                                      *((_QWORD *)v212->_1.image + 50));
          v215 = (System_Int32_array **)System_String__Concat_44308944(
                                          (System_String_o *)StringLiteral_18396/*"error "*/,
                                          v213,
                                          (System_String_o *)StringLiteral_80/*" "*/,
                                          v214,
                                          0LL);
          v9->fields._errorCode_5__6 = (struct System_String_o *)v215;
          p_errorCode_5__6 = (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6;
        }
LABEL_109:
        sub_B2C2F8(p_errorCode_5__6, v215, v216, v217, v218, v219, v220, v221);
LABEL_164:
        v9->fields._url_5__11 = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields._url_5__11, 0LL, v203, v204, v205, v206, v207, v208);
        p_errorLocalizeCode_5__7 = (BattleServantConfConponent_o *)p_asyncOperater_5__12;
        v152 = 0LL;
        v9->fields._asyncOperater_5__12 = 0LL;
LABEL_165:
        sub_B2C2F8(p_errorLocalizeCode_5__7, v152, v145, v146, v147, v148, v149, v150);
        method = (const MethodInfo *)p_errorCode_5__6->klass;
        if ( p_errorCode_5__6->klass )
        {
          AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, 0LL);
          v296 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v296 = ManagerConfig_TypeInfo;
          }
          if ( v296->static_fields->UseDebugCommand )
          {
            _4__this->fields.isErrorDialog = 1;
            this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v297 = _4__this->fields.data;
            if ( !v297 )
              goto LABEL_438;
            v298 = (CommonUI_o *)this;
            v299 = System_String__Concat_44308944(
                     (System_String_o *)StringLiteral_2100/*"AssetName : "*/,
                     v297->fields.name,
                     (System_String_o *)StringLiteral_26/*"\n"*/,
                     (System_String_o *)p_errorCode_5__6->klass,
                     0LL);
            v300 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v300, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
            if ( !v298 )
              goto LABEL_438;
            v8 &= 0xFFFFFFFF00000000LL;
            *(_DWORD *)&effectDistance.fields.has_value = v8;
            effectDistance.fields.value = 0LL;
            CommonUI__OpenWarningDialog(
              v298,
              (System_String_o *)StringLiteral_15745/*"[FFFF80]Download error for debug"*/,
              v299,
              v300,
              1,
              0,
              -1.0,
              1,
              effectDistance,
              0LL);
LABEL_173:
            if ( _4__this->fields.isErrorDialog )
            {
              v491 = (System_Int32_array **)v9->fields._wait_5__10;
              v9->fields.__2__current = (Il2CppObject *)v491;
              sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.__2__current, v491, v2, v3, v4, v5, v6, v7);
              v80 = 2;
              goto LABEL_411;
            }
          }
          if ( v9->fields._isAutoRetry_5__4 )
          {
            autoRetryCount_5__3 = v9->fields._autoRetryCount_5__3;
            v468 = ManagerConfig_TypeInfo;
            if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v468 = ManagerConfig_TypeInfo;
            }
            DOWNLOAD_RETRY_DELAY_TIME = v468->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
            v470 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v470, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
            v9->fields.__2__current = (Il2CppObject *)v470;
            p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
            sub_B2C2F8(p__2__current, (System_Int32_array **)v470, v471, v472, v473, v474, v475, v476);
            v466 = 3;
LABEL_413:
            *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v466;
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
            if ( !byte_4185D97 )
            {
              sub_B2C35C(&ManagementManager_TypeInfo, method);
              byte_4185D97 = 1;
            }
            v301 = ManagementManager_TypeInfo;
            if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v301 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v301->static_fields->isDuringStartup;
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            errorLocalizeCode_5__7 = v9->fields._errorLocalizeCode_5__7;
            v305 = (CommonUI_o *)Instance;
            v306 = (System_String_o *)StringLiteral_1/*""*/;
            if ( isDuringStartup )
            {
              if ( errorLocalizeCode_5__7 )
                v307 = v9->fields._errorLocalizeCode_5__7;
              else
                v307 = (System_String_o *)StringLiteral_1741/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v308 = LocalizationManager__Get(v307, 0LL);
              v309 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(v309, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
              if ( !v305 )
                goto LABEL_438;
              CommonUI__OpenRetryBootDialog(v305, v306, v308, v309, 1, 0LL);
            }
            else
            {
              if ( errorLocalizeCode_5__7 )
                v310 = v9->fields._errorLocalizeCode_5__7;
              else
                v310 = (System_String_o *)StringLiteral_1742/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v311 = LocalizationManager__Get(v310, 0LL);
              v312 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(v312, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
              if ( !v305 )
                goto LABEL_438;
              CommonUI__OpenRetryDialog(v305, v306, v311, v312, 1, 0LL);
            }
LABEL_201:
            if ( _4__this->fields.isErrorDialog )
            {
              v477 = (System_Int32_array **)v9->fields._wait_5__10;
              v9->fields.__2__current = (Il2CppObject *)v477;
              sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.__2__current, v477, v2, v3, v4, v5, v6, v7);
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
        if ( !byte_4185CE0 )
        {
          sub_B2C35C(&NetworkManager_TypeInfo, method);
          byte_4185CE0 = 1;
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
          sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v478, v479, v480, v481, v482, v483);
          _4__this->fields.readData = 0LL;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&_4__this->fields.readData,
            0LL,
            v484,
            v485,
            v486,
            v487,
            v488,
            v489);
          return 0;
        }
        if ( !_4__this->fields.isDownload && !v9->fields._isEncrypted_5__2 )
          goto LABEL_348;
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v314, v315, v316, v317, v318, v319);
          _4__this->fields.readData = 0LL;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&_4__this->fields.readData,
            0LL,
            v320,
            v321,
            v322,
            v323,
            v324,
            v325);
        }
        if ( v9->fields._isCrcError_5__5 )
          break;
LABEL_340:
        v9->fields._errorCode_5__6 = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields._errorCode_5__6, 0LL, v2, v3, v4, v5, v6, v7);
        v9->fields._errorLocalizeCode_5__7 = 0LL;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v9->fields._errorLocalizeCode_5__7,
          0LL,
          v412,
          v413,
          v414,
          v415,
          v416,
          v417);
        v9->fields._wait_5__10 = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields._wait_5__10, 0LL, v418, v419, v420, v421, v422, v423);
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
            v451 = (BattleServantConfConponent_o *)&_4__this->fields.loader;
            sub_B2C2F8(v451, LoadRequest, v452, v453, v454, v455, v456, v457);
            this = (AssetLoader__LoadDataCR_d__29_o *)v451->klass;
            if ( !v451->klass )
              goto LABEL_438;
            v458 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
            v9->fields.__2__current = (Il2CppObject *)v458;
            p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
            sub_B2C2F8(p__2__current, v458, v460, v461, v462, v463, v464, v465);
            v466 = 11;
          }
          else
          {
            v520 = AssetLoader___c_TypeInfo;
            if ( (BYTE3(AssetLoader___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v520 = AssetLoader___c_TypeInfo;
            }
            v521 = v520->static_fields;
            _9__29_0 = v521->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( (BYTE3(v520->vtable._0_Equals.methodPtr) & 4) != 0 && !v520->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v520);
                v521 = AssetLoader___c_TypeInfo->static_fields;
              }
              v523 = (Il2CppObject *)v521->__9;
              _9__29_0 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                _9__29_0,
                v523,
                Method_AssetLoader___c__LoadDataCR_b__29_0__,
                (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
              v524 = AssetLoader___c_TypeInfo->static_fields;
              v524->__9__29_0 = _9__29_0;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v524->__9__29_0,
                (System_Int32_array **)_9__29_0,
                v525,
                v526,
                v527,
                v528,
                v529,
                v530);
            }
            v531 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v531, _9__29_0, 0LL);
            v9->fields.__2__current = (Il2CppObject *)v531;
            p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
            sub_B2C2F8(p__2__current, (System_Int32_array **)v531, v532, v533, v534, v535, v536, v537);
            v466 = 10;
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
        v425 = _4__this->fields.data;
        if ( !v425 )
          goto LABEL_438;
        if ( v425->fields.entryCount >= 1 )
        {
          v426 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v9->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_438;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0LL);
            if ( !this
              || (v427 = *(&DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.bitflags2 + 1),
                  *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v427)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v427 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v426;
              if ( !*v426 )
                goto LABEL_438;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0LL);
              if ( !this )
                goto LABEL_438;
              v428 = *(&DownloadHandlerFileWithCrcCheck_TypeInfo->_2.bitflags2 + 1);
              if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v428
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v428 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_438;
              }
            }
            v429 = UnityEngine_Networking_DownloadHandler__get_data(
                     (UnityEngine_Networking_DownloadHandler_o *)this,
                     0LL);
            v430 = (System_Int32_array **)UnityEngine_AssetBundle__LoadFromMemoryAsync(v429, 0LL);
            v9->fields._req_5__13 = (struct UnityEngine_AssetBundleCreateRequest_o *)v430;
            sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields._req_5__13, v430, v431, v432, v433, v434, v435, v436);
            this = *v426;
            if ( !*v426 )
              goto LABEL_438;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
            *v426 = 0LL;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&_4__this->fields.loader,
              0LL,
              v437,
              v438,
              v439,
              v440,
              v441,
              v442);
            req_5__13 = (System_Int32_array **)v9->fields._req_5__13;
            v9->fields.__2__current = (Il2CppObject *)req_5__13;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v9->fields.__2__current,
              req_5__13,
              v444,
              v445,
              v446,
              v447,
              v448,
              v449);
            v80 = 12;
            goto LABEL_411;
          }
          if ( !this )
            goto LABEL_438;
          v538 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          AssetData__SetData(v425, v538, 0LL);
        }
LABEL_37:
        v84 = _4__this->fields.loader;
        if ( v84 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(v84, 0LL);
          _4__this->fields.loader = 0LL;
          sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v85, v86, v87, v88, v89, v90);
        }
        _4__this->fields.readData = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v9->fields._url_5__11,
        ConfigFileAddress,
        v327,
        v328,
        v329,
        v330,
        v331,
        v332);
LABEL_221:
      v333 = *p_url_5__11;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      UrlString = AssetManager__getUrlString(v333, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      if ( !_4__this )
        goto LABEL_438;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v341 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&_4__this->fields.loader,
        (System_Int32_array **)this,
        v335,
        v336,
        v337,
        v338,
        v339,
        v340);
      v342 = UnityEngine_Time__get_unscaledTime(0LL);
      v343 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v343 = ManagerConfig_TypeInfo;
      }
      v344 = v343->static_fields->TIMEOUT;
      v9->fields._loadProgress_5__9 = 0.0;
      v9->fields._requestTime_5__8 = v342 + v344;
      this = *v341;
      if ( !*v341 )
        goto LABEL_438;
      v345 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                      (UnityEngine_Networking_UnityWebRequest_o *)this,
                                      0LL);
      v9->fields._asyncOperater_5__12 = (struct UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)v345;
      v82 = (AssetLoader__LoadDataCR_d__29_o **)&v9->fields._asyncOperater_5__12;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v9->fields._asyncOperater_5__12,
        v345,
        v346,
        v347,
        v348,
        v349,
        v350,
        v351);
LABEL_230:
      this = *v82;
      if ( !*v82 )
        goto LABEL_438;
      if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)this, 0LL) )
      {
        this = *v82;
        if ( !*v82 )
          goto LABEL_438;
        v358 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        v359 = v9->fields._loadProgress_5__9;
        v360 = v358;
        v361 = UnityEngine_Time__get_unscaledTime(0LL);
        v189 = v360 == v359;
        v362 = v361;
        if ( !v189 )
        {
          v542 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v542 = ManagerConfig_TypeInfo;
          }
          v543 = v542->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v9->fields._asyncOperater_5__12;
          v9->fields._requestTime_5__8 = v362 + v543->TIMEOUT;
          if ( !this )
            goto LABEL_438;
          v9->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
          goto LABEL_437;
        }
        if ( v361 < v9->fields._requestTime_5__8 )
        {
LABEL_437:
          v544 = (System_Int32_array **)v9->fields._wait_5__10;
          v9->fields.__2__current = (Il2CppObject *)v544;
          sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.__2__current, v544, v352, v353, v354, v355, v356, v357);
          v80 = 5;
          goto LABEL_411;
        }
      }
      v9->fields._errorCode_5__6 = 0LL;
      v363 = &v9->fields._errorCode_5__6;
      sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields._errorCode_5__6, 0LL, v352, v353, v354, v355, v356, v357);
      if ( !_4__this )
        goto LABEL_438;
      v364 = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_438;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                  0LL);
      if ( !*v364 )
        goto LABEL_438;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(*v364, 0LL);
        v409 = &StringLiteral_2113/*"AssetStorageList download time over"*/;
        goto LABEL_377;
      }
      v365 = UnityEngine_Networking_UnityWebRequest__get_error(*v364, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v365, 0LL);
      if ( !*v364 )
        goto LABEL_438;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v492 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__get_error(*v364, 0LL);
        *v363 = (System_String_o *)v492;
        goto LABEL_378;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*v364, 0LL);
      if ( !this )
        goto LABEL_438;
      text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      }
      v367 = CatAndMouseGame__MouseGame3(text, 0LL);
      if ( System_String__IsNullOrEmpty(v367, 0LL) )
      {
        v409 = &StringLiteral_2111/*"AssetStorageList download error"*/;
        goto LABEL_377;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_438;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_295;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v367 )
        goto LABEL_438;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim(v367, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_438;
      v374 = (System_String_o *)this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_23698/*"~"*/, 0LL) )
        goto LABEL_332;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_B2C374(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_438;
      v375 = (int)this->fields.__2__current;
      if ( !v375 )
        goto LABEL_295;
      LOWORD(this->fields.__4__this) = 13;
      if ( v375 == 1 )
        goto LABEL_295;
      WORD1(this->fields.__4__this) = 10;
      v376 = System_String__IndexOfAny(v374, (System_Char_array *)this, 0LL);
      if ( v376 < 2 )
        goto LABEL_332;
      v377 = v376;
      v378 = System_String__Substring_44369268(v374, 1, v376 - 1, 0LL);
      v379 = System_String__Substring(v374, v377 + 1, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0LL);
      if ( !this )
        goto LABEL_438;
      v380 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, Il2CppClass **))this->klass[1]._1.methods)(
                                    this,
                                    v379,
                                    this->klass[1]._1.nestedTypes);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v381 = Crc32__Compute(v380, 0LL);
      if ( System_UInt32__Parse(v378, 0LL) != v381 )
      {
LABEL_332:
        v409 = &StringLiteral_2110/*"AssetStorageList download data error"*/;
LABEL_377:
        v492 = (System_Int32_array **)*v409;
        *v363 = (System_String_o *)*v409;
LABEL_378:
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v9->fields._errorCode_5__6,
          v492,
          v368,
          v369,
          v370,
          v371,
          v372,
          v373);
        if ( *v364 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(*v364, 0LL);
          *v364 = 0LL;
          sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v493, v494, v495, v496, v497, v498);
        }
        if ( *v363 )
        {
          v499 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v499 = ManagerConfig_TypeInfo;
          }
          if ( v499->static_fields->UseDebugCommand )
          {
            _4__this->fields.isErrorDialog = 1;
            this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v500 = _4__this->fields.data;
            if ( !v500 )
              goto LABEL_438;
            v501 = (CommonUI_o *)this;
            v502 = System_String__Concat_44308944(
                     (System_String_o *)StringLiteral_2100/*"AssetName : "*/,
                     v500->fields.name,
                     (System_String_o *)StringLiteral_26/*"\n"*/,
                     *v363,
                     0LL);
            v503 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v503, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
            if ( !v501 )
              goto LABEL_438;
            effectDistancea.fields.value = 0LL;
            *(_DWORD *)&effectDistancea.fields.has_value = 0;
            CommonUI__OpenWarningDialog(
              v501,
              (System_String_o *)StringLiteral_15745/*"[FFFF80]Download error for debug"*/,
              v502,
              v503,
              1,
              0,
              -1.0,
              1,
              effectDistancea,
              0LL);
LABEL_388:
            if ( _4__this->fields.isErrorDialog )
            {
              v504 = (System_Int32_array **)v9->fields._wait_5__10;
              v9->fields.__2__current = (Il2CppObject *)v504;
              sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.__2__current, v504, v2, v3, v4, v5, v6, v7);
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
          if ( !byte_4185D97 )
          {
            sub_B2C35C(&ManagementManager_TypeInfo, method);
            byte_4185D97 = 1;
          }
          v505 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v505 = ManagementManager_TypeInfo;
          }
          v506 = v505->static_fields->isDuringStartup;
          v507 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v506 )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v508 = LocalizationManager__Get((System_String_o *)StringLiteral_1741/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
            v509 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v509, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v507 )
              goto LABEL_438;
            CommonUI__OpenRetryBootDialog(v507, (System_String_o *)StringLiteral_1/*""*/, v508, v509, 0, 0LL);
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v510 = LocalizationManager__Get((System_String_o *)StringLiteral_1742/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
            v511 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v511, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v507 )
              goto LABEL_438;
            CommonUI__OpenRetryDialog(v507, (System_String_o *)StringLiteral_1/*""*/, v510, v511, 0, 0LL);
          }
LABEL_409:
          if ( _4__this->fields.isErrorDialog )
          {
            v512 = (System_Int32_array **)v9->fields._wait_5__10;
            v9->fields.__2__current = (Il2CppObject *)v512;
            sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.__2__current, v512, v2, v3, v4, v5, v6, v7);
            v80 = 7;
            goto LABEL_411;
          }
        }
        v513 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v513, 1.0, 0LL);
        v9->fields.__2__current = (Il2CppObject *)v513;
        p__2__current = (BattleServantConfConponent_o *)&v9->fields.__2__current;
        sub_B2C2F8(p__2__current, (System_Int32_array **)v513, v514, v515, v516, v517, v518, v519);
        v466 = 8;
        goto LABEL_413;
      }
      v548 = v9;
      if ( !v379 )
      {
LABEL_312:
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        }
        if ( !byte_4185D97 )
        {
          sub_B2C35C(&ManagementManager_TypeInfo, method);
          byte_4185D97 = 1;
        }
        v402 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v402 = ManagementManager_TypeInfo;
        }
        v403 = v402->static_fields->isDuringStartup;
        v404 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( v403 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v405 = &StringLiteral_9276/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v405 = &StringLiteral_9275/*"NETWORK_ERROR_ASSET_UPDATE"*/;
        }
        v406 = LocalizationManager__Get((System_String_o *)*v405, 0LL);
        v407 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v407, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0LL);
        if ( !v404 )
          goto LABEL_438;
        CommonUI__OpenErrorDialog(v404, (System_String_o *)StringLiteral_1/*""*/, v406, v407, 0, 0LL);
        return 0;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_B2C374(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_438;
      v382 = (int)this->fields.__2__current;
      if ( !v382 || (LOWORD(this->fields.__4__this) = 13, v382 == 1) )
      {
LABEL_295:
        v395 = sub_B2C460(this);
        sub_B2C400(v395, 0LL);
      }
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_44366316(v379, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_438;
      v383 = this->fields.__2__current;
      v384 = this;
      if ( (int)v383 < 1 )
        goto LABEL_312;
      v385 = 0;
      while ( 1 )
      {
        v386 = (System_String_o *)*((_QWORD *)&v384->fields.__4__this + (int)v385);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_B2C374(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_438;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_295;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v386 )
          goto LABEL_438;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split(v386, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_438;
        v387 = this->fields.__2__current;
        v388 = this;
        if ( (int)v387 < 1 )
          break;
        this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
        if ( !this )
          goto LABEL_438;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_1535/*"@"*/,
                                                    0LL);
        if ( !LODWORD(v388->fields.__2__current) )
          goto LABEL_295;
        v389 = (char)this;
        this = (AssetLoader__LoadDataCR_d__29_o *)v388->fields.__4__this;
        if ( !this )
          goto LABEL_438;
        if ( (v389 & 1) != 0 )
        {
          v390 = System_String__Substring((System_String_o *)this, 1, 0LL);
          p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
          if ( SLODWORD(v388->fields.__2__current) > 1 )
            p_resourceNames = (System_String_o **)&v388->fields.resourceNames;
          v392 = *p_resourceNames;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v390, v392, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_312;
        }
        else
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_23698/*"~"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v388->fields.__2__current) )
              goto LABEL_295;
            this = (AssetLoader__LoadDataCR_d__29_o *)v388->fields.__4__this;
            if ( !this )
              goto LABEL_438;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0LL);
            if ( (_DWORD)this != 1 )
            {
              v387 = v388->fields.__2__current;
              break;
            }
          }
        }
LABEL_293:
        if ( (int)++v385 >= (int)v383 )
          goto LABEL_312;
        if ( v385 >= LODWORD(v384->fields.__2__current) )
          goto LABEL_295;
      }
      if ( (_DWORD)v387 != 5 )
        goto LABEL_312;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v388->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_438;
      v393 = System_String__Trim_44292864((System_String_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v393, 0LL);
      if ( LODWORD(v388->fields.__2__current) <= 4 )
        goto LABEL_295;
      v394 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetLoader__IsSame(_4__this, v388->fields._errorCode_5__6, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_293;
      v396 = _4__this->fields.data;
      if ( !v396 )
        goto LABEL_438;
      if ( v394 != v396->fields.crc )
        goto LABEL_312;
      _4__this->fields.isErrorDialog = 1;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      }
      if ( !byte_4185D97 )
      {
        sub_B2C35C(&ManagementManager_TypeInfo, method);
        byte_4185D97 = 1;
      }
      v397 = ManagementManager_TypeInfo;
      v9 = v548;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v397 = ManagementManager_TypeInfo;
      }
      v398 = v397->static_fields->isDuringStartup;
      v399 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v398 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v400 = LocalizationManager__Get((System_String_o *)StringLiteral_1741/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v401 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v401, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
        if ( v399 )
        {
          CommonUI__OpenRetryBootDialog(v399, (System_String_o *)StringLiteral_1/*""*/, v400, v401, 1, 0LL);
          goto LABEL_338;
        }
        goto LABEL_438;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v410 = LocalizationManager__Get((System_String_o *)StringLiteral_1742/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v411 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v411, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
      if ( !v399 )
        goto LABEL_438;
      CommonUI__OpenRetryDialog(v399, (System_String_o *)StringLiteral_1/*""*/, v410, v411, 1, 0LL);
LABEL_338:
      if ( !_4__this->fields.isErrorDialog )
      {
        v9->fields._url_5__11 = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields._url_5__11, 0LL, v2, v3, v4, v5, v6, v7);
        goto LABEL_340;
      }
      v490 = (System_Int32_array **)v9->fields._wait_5__10;
      v9->fields.__2__current = (Il2CppObject *)v490;
      sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.__2__current, v490, v2, v3, v4, v5, v6, v7);
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
      sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.__2__current, v73, v74, v75, v76, v77, v78, v79);
      v80 = 13;
      goto LABEL_411;
    case 0xD:
      this = (AssetLoader__LoadDataCR_d__29_o *)&v9->fields._req_5__13;
      v9->fields.__1__state = -1;
LABEL_36:
      this->klass = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186BAC & 1) == 0 )
  {
    sub_B2C35C(&AssetLoader___c_TypeInfo, v1);
    byte_4186BAC = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(AssetLoader___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssetLoader___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
}


void __fastcall AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4186BAD & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_4186BAD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  return BYTE4(Instance[1].monitor) == 0;
}