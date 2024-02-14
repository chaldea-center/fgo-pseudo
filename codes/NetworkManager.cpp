void __fastcall NetworkManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v14; // x1
  NetworkManager_c *v15; // x8
  struct NetworkManager_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct NetworkManager_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct NetworkManager_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct NetworkManager_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct NetworkManager_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct NetworkManager_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  NetworkManager_c *v58; // x8
  struct NetworkManager_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  NetworkManager_c *v66; // x8
  struct NetworkManager_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct NetworkManager_StaticFields *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct NetworkManager_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct NetworkManager_StaticFields *v88; // x0
  System_Int32_array **v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  NetworkManager_c *v96; // x8
  struct NetworkManager_StaticFields *v97; // x0
  System_Int32_array **v98; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x1
  struct NetworkManager_StaticFields *v106; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x1
  struct NetworkManager_StaticFields *v114; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Int32_array **v121; // x1
  struct NetworkManager_StaticFields *v122; // x0
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  NetworkManager_c *v129; // x8
  struct NetworkManager_StaticFields *v130; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  struct NetworkManager_StaticFields *v137; // x0
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  struct NetworkManager_StaticFields *v144; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  NetworkManager_c *v151; // x8
  System_Int32_array **v152; // x1
  BattleServantConfConponent_o *p_gameServerAddress; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_Int32_array **v160; // x1
  BattleServantConfConponent_o *p_dataServerAddress; // x0
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_Int32_array **v168; // x1
  BattleServantConfConponent_o *p_webServerAddress; // x0
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  System_Int32_array **v176; // x1
  BattleServantConfConponent_o *p_webViewBaseURL; // x0
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  __int64 v184; // x1
  __int64 v185; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v186; // x19
  BattleServantConfConponent_o *p_webViewAddress; // x0
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  System_Int32_array **v194; // x1
  BattleServantConfConponent_o *p_AUTHMD5_KEY_TYPE; // x0
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  System_Int32_array **v202; // x1
  BattleServantConfConponent_o *p_errorDialogResponseData; // x0
  System_String_array **v204; // x2
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7
  uint64_t v210; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v211; // 0:x0.8

  if ( (byte_4214F77 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_14337/*"TheCheckKey"*/, v10);
    sub_B0D8A4(&StringLiteral_18785/*"file://"*/, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4214F77 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)NetworkManager_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_18785/*"file://"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18785/*"file://"*/;
  sub_B0D840(static_fields, v14, v2, v3, v4, v5, v6, v7);
  v211.fields.dateData = (uint64_t)&v210;
  NetworkManager_TypeInfo->static_fields->WebCacheTime = 300LL;
  v210 = 0LL;
  System_DateTime___ctor_15034332(v211, 1970, 1, 1, 0, 0, 0, 1, 0LL);
  v15 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->dtUnixEpoch.fields.dateData = v210;
  v15->static_fields->serverTime = 0LL;
  v15->static_fields->serverOffsetTime = 0LL;
  v15->static_fields->isErrorServerTimeLimitOver = 0;
  v15->static_fields->serverTimeChkMovie = 0LL;
  v15->static_fields->nowTime = -1LL;
  v16 = v15->static_fields;
  v16->userAgent = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v16->userAgent, 0LL, v17, v18, v19, v20, v21, v22);
  v23 = NetworkManager_TypeInfo->static_fields;
  v23->userCreateServer = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v23->userCreateServer, 0LL, v24, v25, v26, v27, v28, v29);
  v30 = NetworkManager_TypeInfo->static_fields;
  v30->userId = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v30->userId, 0LL, v31, v32, v33, v34, v35, v36);
  v37 = NetworkManager_TypeInfo->static_fields;
  v37->authKey = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v37->authKey, 0LL, v38, v39, v40, v41, v42, v43);
  v44 = NetworkManager_TypeInfo->static_fields;
  v44->secretKey = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v44->secretKey, 0LL, v45, v46, v47, v48, v49, v50);
  v51 = NetworkManager_TypeInfo->static_fields;
  v51->userName = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v51->userName, 0LL, v52, v53, v54, v55, v56, v57);
  v58 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->genderType = 0;
  v58->static_fields->month = 0;
  v58->static_fields->day = 0;
  v59 = v58->static_fields;
  v59->sessionId = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v59->sessionId, 0LL, v60, v61, v62, v63, v64, v65);
  v66 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->isRebootBlock = 1;
  v66->static_fields->isLogin = 0;
  v67 = v66->static_fields;
  v67->friendCode = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v67->friendCode, 0LL, v68, v69, v70, v71, v72, v73);
  v74 = NetworkManager_TypeInfo->static_fields;
  v74->registrationVersion = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v74->registrationVersion, 0LL, v75, v76, v77, v78, v79, v80);
  v81 = NetworkManager_TypeInfo->static_fields;
  v81->registrationId = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v81->registrationId, 0LL, v82, v83, v84, v85, v86, v87);
  v88 = NetworkManager_TypeInfo->static_fields;
  v89 = (System_Int32_array **)StringLiteral_1/*""*/;
  v88->serverSettingType = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&v88->serverSettingType, v89, v90, v91, v92, v93, v94, v95);
  v96 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->serverSettingSecurity = 0;
  v97 = v96->static_fields;
  v98 = (System_Int32_array **)StringLiteral_1/*""*/;
  v97->gameServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&v97->gameServerSettingAddress, v98, v99, v100, v101, v102, v103, v104);
  v105 = (System_Int32_array **)StringLiteral_1/*""*/;
  v106 = NetworkManager_TypeInfo->static_fields;
  v106->dataServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&v106->dataServerSettingAddress, v105, v107, v108, v109, v110, v111, v112);
  v113 = (System_Int32_array **)StringLiteral_1/*""*/;
  v114 = NetworkManager_TypeInfo->static_fields;
  v114->webServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&v114->webServerSettingAddress, v113, v115, v116, v117, v118, v119, v120);
  v121 = (System_Int32_array **)StringLiteral_1/*""*/;
  v122 = NetworkManager_TypeInfo->static_fields;
  v122->dataServerFolder = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&v122->dataServerFolder, v121, v123, v124, v125, v126, v127, v128);
  v129 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->serverRedirectSecurity = 0;
  v130 = v129->static_fields;
  v130->gameServerRedirectAddress = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v130->gameServerRedirectAddress, 0LL, v131, v132, v133, v134, v135, v136);
  v137 = NetworkManager_TypeInfo->static_fields;
  v137->dataServerRedirectAddress = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v137->dataServerRedirectAddress, 0LL, v138, v139, v140, v141, v142, v143);
  v144 = NetworkManager_TypeInfo->static_fields;
  v144->webServerRedirectAddress = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v144->webServerRedirectAddress, 0LL, v145, v146, v147, v148, v149, v150);
  v151 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->serverSecurity = 0;
  v152 = (System_Int32_array **)StringLiteral_1/*""*/;
  p_gameServerAddress = (BattleServantConfConponent_o *)&v151->static_fields->gameServerAddress;
  p_gameServerAddress->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B0D840(p_gameServerAddress, v152, v154, v155, v156, v157, v158, v159);
  v160 = (System_Int32_array **)StringLiteral_1/*""*/;
  p_dataServerAddress = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->dataServerAddress;
  p_dataServerAddress->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B0D840(p_dataServerAddress, v160, v162, v163, v164, v165, v166, v167);
  v168 = (System_Int32_array **)StringLiteral_1/*""*/;
  p_webServerAddress = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->webServerAddress;
  p_webServerAddress->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B0D840(p_webServerAddress, v168, v170, v171, v172, v173, v174, v175);
  v176 = (System_Int32_array **)StringLiteral_1/*""*/;
  p_webViewBaseURL = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B0D840(p_webViewBaseURL, v176, v178, v179, v180, v181, v182, v183);
  v186 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                         System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                                         v184,
                                                                                         v185);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v186,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  p_webViewAddress = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->webViewAddress;
  p_webViewAddress->klass = (BattleServantConfConponent_c *)v186;
  sub_B0D840(p_webViewAddress, (System_Int32_array **)v186, v188, v189, v190, v191, v192, v193);
  v194 = (System_Int32_array **)StringLiteral_14337/*"TheCheckKey"*/;
  p_AUTHMD5_KEY_TYPE = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->AUTHMD5_KEY_TYPE;
  p_AUTHMD5_KEY_TYPE->klass = (BattleServantConfConponent_c *)StringLiteral_14337/*"TheCheckKey"*/;
  sub_B0D840(p_AUTHMD5_KEY_TYPE, v194, v196, v197, v198, v199, v200, v201);
  v202 = (System_Int32_array **)StringLiteral_1/*""*/;
  p_errorDialogResponseData = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->errorDialogResponseData;
  p_errorDialogResponseData->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B0D840(p_errorDialogResponseData, v202, v204, v205, v206, v207, v208, v209);
}


void __fastcall NetworkManager___ctor(NetworkManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array **v12; // x1
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v50; // x20
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_4214FF5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_RequestBase___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Queue_RequestBase__TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager___ctor__, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_4214FF5 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mAndroidApiKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mAndroidApiKey, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mAndroidProjectId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mAndroidProjectId, v13, v14, v15, v16, v17, v18, v19);
  v20 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mIosApplicationId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mIosApplicationId, v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mMk = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mMk, v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mCv = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mCv, v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mAuGameServerPublicKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mAuGameServerPublicKey, v41, v42, v43, v44, v45, v46, v47);
  v50 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B0D974(
                                                                        System_Collections_Generic_Queue_RequestBase__TypeInfo,
                                                                        v48,
                                                                        v49);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v50,
    (const MethodInfo_2B02AD0 *)Method_System_Collections_Generic_Queue_RequestBase___ctor__);
  this->fields.communicationWaitList = (struct System_Collections_Generic_Queue_RequestBase__o *)v50;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.communicationWaitList,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_NetworkManager___ctor__);
}


void __fastcall NetworkManager__AddWaitStatus(NetworkManager_o *this, RequestBase_o *request, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Queue_RequestBase__o *communicationWaitList; // x0
  int v10; // w21
  System_Collections_Generic_Queue_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4214FE7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__, request);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_RequestBase__Enqueue__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__, v8);
    byte_4214FE7 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.communicationWork != request )
  {
    communicationWaitList = this->fields.communicationWaitList;
    if ( !communicationWaitList )
      goto LABEL_14;
    System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
      &v11,
      (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)communicationWaitList,
      (const MethodInfo_2B03198 *)Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__);
    while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
              &v11,
              (const MethodInfo_2112764 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__) )
    {
      if ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
             &v11,
             (const MethodInfo_2112868 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__) == (AssetManager_LoadWaitStatus_o *)request )
      {
        v10 = 73;
        goto LABEL_10;
      }
    }
    v10 = 61;
LABEL_10:
    System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
      &v11,
      (const MethodInfo_2112754 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
    if ( v10 != 73 )
    {
      communicationWaitList = this->fields.communicationWaitList;
      if ( communicationWaitList )
      {
        System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
          (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)communicationWaitList,
          (Mono_Net_CFNetwork_GetProxyData_o *)request,
          (const MethodInfo_2B030C4 *)Method_System_Collections_Generic_Queue_RequestBase__Enqueue__);
        return;
      }
LABEL_14:
      sub_B0D97C(communicationWaitList);
    }
  }
}


bool __fastcall NetworkManager__CheckServerLimitTime(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_c *v9; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  int64_t Time; // x0
  NetworkManager_c *v12; // x8
  __int64 v13; // x21
  BalanceConfig_c *v14; // x0
  System_String_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x5

  if ( (byte_4214F89 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_NetworkManager_OnClickErrorReboot__, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_12608/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4214F89 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  if ( static_fields->isErrorServerTimeLimitOver )
    return 0;
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = NetworkManager_TypeInfo;
    static_fields = NetworkManager_TypeInfo->static_fields;
  }
  if ( static_fields->isLogin )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    Time = NetworkManager__getTime((const MethodInfo *)v9);
    v12 = NetworkManager_TypeInfo;
    v13 = Time - NetworkManager_TypeInfo->static_fields->serverTime;
    if ( v13 < 0 )
      goto LABEL_20;
    v14 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    if ( v13 > v14->static_fields->ServerTimeOverLimit )
    {
      v12 = NetworkManager_TypeInfo;
LABEL_20:
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = NetworkManager_TypeInfo;
      }
      v12->static_fields->isErrorServerTimeLimitOver = 1;
      v12->static_fields->isRebootBlock = 1;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12608/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, 0LL);
      v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
      NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1/*""*/, v15, 0LL, v18, v19);
      return 0;
    }
  }
  return 1;
}


bool __fastcall NetworkManager__CheckUserCreateServer(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  NetworkManager_c *v4; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *gameServerAddress; // x0

  if ( (byte_4214F71 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214F71 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v2->static_fields->userCreateServer, 0LL) )
    return 1;
  v4 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  gameServerAddress = static_fields->gameServerAddress;
  if ( !gameServerAddress )
    sub_B0D97C(0LL);
  return System_String__Equals_43837244(gameServerAddress, static_fields->userCreateServer, 0LL);
}


bool __fastcall NetworkManager__CheckUserCreateServerByPrefix(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  NetworkManager_c *v3; // x0
  NetworkManager_c *v4; // x0
  NetworkManager_c *v5; // x0
  System_String_o *gameServerAddress; // x19
  System_String_array *v7; // x0
  System_String_array *v8; // x19
  System_String_o *userCreateServer; // x20
  __int64 v10; // x8
  __int64 v11; // x9
  System_String_o *v12; // x8
  __int64 v14; // x0

  if ( (byte_4214F72 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, v1);
    sub_B0D8A4(&NetworkManager_TypeInfo, v2);
    byte_4214F72 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  if ( !System_String__IsNullOrEmpty(v3->static_fields->gameServerAddress, 0LL) )
  {
    v4 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v4 = NetworkManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v4->static_fields->userCreateServer, 0LL) )
    {
      v5 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v5 = NetworkManager_TypeInfo;
      }
      gameServerAddress = v5->static_fields->gameServerAddress;
      v7 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !v7 )
        goto LABEL_29;
      if ( !v7->max_length )
        goto LABEL_30;
      LOWORD(v7->m_Items[0]) = 45;
      if ( !gameServerAddress )
        goto LABEL_29;
      v8 = System_String__Split(gameServerAddress, (System_Char_array *)v7, 0LL);
      userCreateServer = NetworkManager_TypeInfo->static_fields->userCreateServer;
      v7 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !v7 )
        goto LABEL_29;
      if ( !v7->max_length )
      {
LABEL_30:
        v14 = sub_B0D9A8(v7);
        sub_B0D948(v14, 0LL);
      }
      LOWORD(v7->m_Items[0]) = 45;
      if ( !userCreateServer )
        goto LABEL_29;
      v7 = System_String__Split(userCreateServer, (System_Char_array *)v7, 0LL);
      if ( !v8 )
        goto LABEL_29;
      v10 = *(_QWORD *)&v8->max_length;
      if ( v10 )
      {
        if ( !v7 )
          goto LABEL_29;
        v11 = *(_QWORD *)&v7->max_length;
        if ( v11 )
        {
          if ( (_DWORD)v10 && (_DWORD)v11 )
          {
            v12 = v8->m_Items[0];
            if ( v12 )
              return System_String__Equals_43837244(v12, v7->m_Items[0], 0LL);
LABEL_29:
            sub_B0D97C(v7);
          }
          goto LABEL_30;
        }
      }
    }
  }
  return 0;
}


void __fastcall NetworkManager__ClearAuth(NetworkManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NetworkManager_c *v8; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  struct NetworkManager_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4214F8E & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214F8E = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->userId = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->userId, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = NetworkManager_TypeInfo->static_fields;
  v10->userCreateServer = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v10->userCreateServer, 0LL, v11, v12, v13, v14, v15, v16);
}


void __fastcall NetworkManager__ClearTopLoginResult(NetworkManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.loginResponseResult = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.loginResponseResult, 0LL, v2, v3, v4, v5, v6, v7);
}


bool __fastcall NetworkManager__CommunicationIsBusy(const MethodInfo *method)
{
  __int64 v1; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_4214F78 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v1);
    byte_4214F78 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return Instance->fields.errorMessage != 0LL;
}


bool __fastcall NetworkManager__CommunicationStart(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *communicationWaitList; // x0
  Mono_Net_CFNetwork_GetProxyData_o *ProxyData___Dequeue; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2
  System_Collections_IEnumerator_o *v14; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4214FE8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_RequestBase__Dequeue__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__, v3);
    byte_4214FE8 = 1;
  }
  communicationWaitList = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.communicationWaitList;
  if ( !communicationWaitList )
    sub_B0D97C(0LL);
  if ( communicationWaitList->fields._size < 1 || this->fields.communicationWork )
    return 0;
  ProxyData___Dequeue = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                          communicationWaitList,
                          (const MethodInfo_2B032DC *)Method_System_Collections_Generic_Queue_RequestBase__Dequeue__);
  this->fields.communicationWork = (struct RequestBase_o *)ProxyData___Dequeue;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.communicationWork,
    (System_Int32_array **)ProxyData___Dequeue,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v14 = NetworkManager__RequestCR(this, this->fields.communicationWork, 0.0, v13);
  started = UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v14, 0LL);
  this->fields.communicationCoroutine = started;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.communicationCoroutine,
    (System_Int32_array **)started,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  return 1;
}


void __fastcall NetworkManager__DeleteAuth(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  System_String_o *OldAuthFileName; // x21
  const MethodInfo *v4; // x1
  System_String_o *AuthFileName; // x20
  const MethodInfo *v6; // x1
  System_String_o *v7; // x19

  if ( (byte_4214FB9 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214FB9 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  OldAuthFileName = NetworkManager__getOldAuthFileName((const MethodInfo *)v2);
  AuthFileName = NetworkManager__getAuthFileName(0, v4);
  v7 = NetworkManager__getAuthFileName(1, v6);
  if ( System_IO_File__Exists(OldAuthFileName, 0LL) )
    System_IO_File__Delete(OldAuthFileName, 0LL);
  if ( System_IO_File__Exists(AuthFileName, 0LL) )
    System_IO_File__Delete(AuthFileName, 0LL);
  if ( System_IO_File__Exists(v7, 0LL) )
    System_IO_File__Delete(v7, 0LL);
}


void __fastcall NetworkManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4214FB8 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214FB8 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__DeleteAuth((const MethodInfo *)v2);
  NetworkManager__DeleteSignupData(v3);
}


void __fastcall NetworkManager__DeleteSignupData(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  System_String_o *OldSignupFileName; // x21
  System_String_o *SignupFileName; // x20
  System_String_o *FriendCodeFileName; // x19

  if ( (byte_4214FBA & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214FBA = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  OldSignupFileName = NetworkManager__getOldSignupFileName((const MethodInfo *)v2);
  SignupFileName = NetworkManager__getSignupFileName((const MethodInfo *)OldSignupFileName);
  FriendCodeFileName = NetworkManager__getFriendCodeFileName((const MethodInfo *)SignupFileName);
  if ( System_IO_File__Exists(OldSignupFileName, 0LL) )
    System_IO_File__Delete(OldSignupFileName, 0LL);
  if ( System_IO_File__Exists(SignupFileName, 0LL) )
    System_IO_File__Delete(SignupFileName, 0LL);
  if ( System_IO_File__Exists(FriendCodeFileName, 0LL) )
    System_IO_File__Delete(FriendCodeFileName, 0LL);
}


void __fastcall NetworkManager__EndCloseUserDelete(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  NetworkManager_c *v3; // x0
  ManagementManager_o *Instance; // x0

  if ( (byte_4214FB0 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v2);
    byte_4214FB0 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v3->static_fields->isRebootBlock = 1;
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  ManagementManager__reboot(Instance, 0, 0LL);
}


void __fastcall NetworkManager__EndErrorWebView(NetworkManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_errorCallbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *errorCallbackFunc; // t1

  errorCallbackFunc = this->fields.errorCallbackFunc;
  p_errorCallbackFunc = (BattleServantConfConponent_o *)&this->fields.errorCallbackFunc;
  v9 = errorCallbackFunc;
  if ( errorCallbackFunc )
  {
    p_errorCallbackFunc->klass = 0LL;
    sub_B0D840(p_errorCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall NetworkManager__EndGetStoreUrl(NetworkManager_o *this, System_String_o *url, const MethodInfo *method)
{
  if ( url )
    UnityEngine_Application__OpenURL(url, 0LL);
  UnityEngine_Application__Quit_40735960(0LL);
}


void __fastcall NetworkManager__EndLockSync(NetworkManager_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4214FF1 & 1) == 0 )
  {
    sub_B0D8A4(&UserServantLockManager_TypeInfo, result);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v5);
    byte_4214FF1 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL) )
  {
    if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantLockManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    }
    UserServantLockManager__DeleteSaveData(0LL);
    UserServantLockManager__ClearSaveDataList(0LL);
  }
  NetworkManager__OptionSync(this, v6);
}


void __fastcall NetworkManager__EndLogin(NetworkManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_loginCallbackFunc; // x19
  NetworkManager_LoginCallbackFunc_o *v10; // x20
  struct NetworkManager_LoginCallbackFunc_o *loginCallbackFunc; // t1
  System_String_o *monitor; // x21
  NetworkManager_c *v13; // x0

  if ( (byte_4214FF4 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214FF4 = 1;
  }
  loginCallbackFunc = this->fields.loginCallbackFunc;
  p_loginCallbackFunc = (BattleServantConfConponent_o *)&this->fields.loginCallbackFunc;
  v10 = loginCallbackFunc;
  monitor = (System_String_o *)p_loginCallbackFunc->monitor;
  v13 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v13 = NetworkManager_TypeInfo;
  }
  v13->static_fields->isLogin = 1;
  if ( v10 )
  {
    p_loginCallbackFunc->klass = 0LL;
    sub_B0D840(p_loginCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    NetworkManager_LoginCallbackFunc__Invoke(v10, monitor, 0LL);
  }
}


void __fastcall NetworkManager__EndOptionSync(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4214FF3 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4214FF3 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__DeleteOldLocal(0LL);
  NetworkManager__EndLogin(this, v3);
}


void __fastcall NetworkManager__EndTopLogin(NetworkManager_o *this, System_String_o *result, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  NetworkManager_o *v16; // x0
  const MethodInfo *v17; // x2
  ManagementManager_o *Instance; // x0
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  System_Int64_array *v22; // x20
  NetworkManager_ResultCallbackFunc_o *v23; // x21

  if ( (byte_4214FF0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_EndLockSync__, result);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardLockSyncRequest___, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v13);
    sub_B0D8A4(&UserServantLockManager_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v15);
    byte_4214FF0 = 1;
  }
  this->fields.loginResponseResult = result;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.loginResponseResult,
    (System_Int32_array **)result,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  NetworkManager__SetupObfuscatedAccountId(v16, this->fields.loginResponseResult, v17);
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  ManagementManager__BuildInfoDisp(Instance, 1, 0LL);
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  }
  if ( UserServantLockManager__ReadData(0LL) )
  {
    if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantLockManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    }
    Instance = (ManagementManager_o *)UserServantLockManager__GetLockList(0LL);
    if ( !Instance )
      goto LABEL_20;
    v22 = (System_Int64_array *)Instance;
    if ( *(_QWORD *)&Instance->fields.scenetype )
    {
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v20, v21);
      NetworkManager_ResultCallbackFunc___ctor(v23, (Il2CppObject *)this, Method_NetworkManager_EndLockSync__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (ManagementManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v23,
                                          (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardLockSyncRequest___);
      if ( Instance )
      {
        CardLockSyncRequest__beginRequest((CardLockSyncRequest_o *)Instance, v22, 0LL, 0, 0LL);
        return;
      }
LABEL_20:
      sub_B0D97C(Instance);
    }
    NetworkManager__EndLockSync(this, (System_String_o *)StringLiteral_21287/*"ok"*/, v21);
  }
  else
  {
    NetworkManager__OptionSync(this, v19);
  }
}


void __fastcall NetworkManager__ErrorDialog(
        NetworkManager_o *this,
        System_String_o *errorTitle,
        System_String_o *errorDetail,
        System_String_o *errorUrl,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x21
  CommonUI_o *Instance; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  ErrorDialog_ClickDelegate_o *v24; // x23
  __int64 v25; // x0

  if ( (byte_4214FA7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, errorTitle);
    sub_B0D8A4(&ErrorDialog_ClickDelegate_TypeInfo, v13);
    sub_B0D8A4(&Method_NetworkManager_EndErrorDialog__, v14);
    sub_B0D8A4(&Method_NetworkManager_EndErrorWebView__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B0D8A4(&WebViewManager_TypeInfo, v17);
    byte_4214FA7 = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.errorCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)errorDetail,
    (System_String_array **)errorUrl,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( errorUrl )
  {
    v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v18, v19);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0LL);
    if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WebViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    }
    WebViewManager__OpenView(errorTitle, errorUrl, v20, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v22, v23);
    ErrorDialog_ClickDelegate___ctor(v24, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0LL);
    if ( !Instance )
      sub_B0D97C(v25);
    CommonUI__OpenErrorDialog(Instance, errorTitle, errorDetail, v24, 0, 0LL);
  }
}


int32_t __fastcall NetworkManager__ExecuteCommand(ResponseData_o *data, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v5; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0

  if ( (byte_4214FE6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v3);
    byte_4214FE6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  if ( !data )
    sub_B0D97C(Instance);
  v5 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&Instance->fields.isButtonEnable;
  if ( !v5 )
    sub_B0D97C(0LL);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           v5,
           (System_Type_o *)data->fields.nid,
           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__);
  if ( !Item )
    sub_B0D97C(0LL);
  return ((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, ResponseData_o *, Il2CppMethodPointer))Item->klass->vtable[5].method)(
           Item,
           data,
           Item->klass->vtable[6].methodPtr);
}


System_String_o *__fastcall NetworkManager__GetApiCode(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  System_String_o *basePanel; // x19

  if ( (byte_4214FD0 & 1) == 0 )
  {
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4214FD0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  basePanel = (System_String_o *)Instance->fields.basePanel;
  if ( System_String__IsNullOrEmpty(basePanel, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  return CatAndMouseGame__MouseGame1(basePanel, 0, 0LL);
}


System_String_o *__fastcall NetworkManager__GetAuthCode(
        System_Collections_Generic_SortedDictionary_string__string__o *headers,
        const MethodInfo *method)
{
  System_Collections_Generic_SortedDictionary_string__string__o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
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
  System_Int32_array **v17; // x20
  System_String_o *v18; // x19
  System_Collections_Generic_KeyValuePair_TKey__TValue__o Current; // kr00_16
  __int64 v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x0
  System_Int32_array **v35; // x1
  __int64 v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0
  System_Int32_array **v50; // x1
  __int64 v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x2
  NetworkManager_c *v60; // x0
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v61; // x20
  __int64 v62; // x1
  __int64 v63; // x2
  System_Text_UTF8Encoding_o *v64; // x21
  NetworkManager_c *v65; // x0
  System_Byte_array *v66; // x19
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x0
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v78; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v79; // [xsp+30h] [xbp-80h] BYREF

  v2 = headers;
  if ( (byte_4214F8D & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__, v10);
    sub_B0D8A4(&string___TypeInfo, v11);
    sub_B0D8A4(&System_Text_UTF8Encoding_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_1513/*"="*/, v13);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v14);
    sub_B0D8A4(&StringLiteral_446/*"&"*/, v15);
    headers = (System_Collections_Generic_SortedDictionary_string__string__o *)sub_B0D8A4(&StringLiteral_1/*""*/, v16);
    byte_4214F8D = 1;
  }
  memset(&v79, 0, sizeof(v79));
  if ( !v2 )
    goto LABEL_55;
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  System_Collections_Generic_SortedDictionary_string__string___GetEnumerator(
    &v78,
    v2,
    (const MethodInfo_2A7230C *)Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__);
  v79 = v78;
  while ( 1 )
  {
    v18 = (System_String_o *)v17;
    if ( !System_Collections_Generic_SortedDictionary_Enumerator_string__string___MoveNext(
            &v79,
            (const MethodInfo_26C98E4 *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__) )
      break;
    Current = System_Collections_Generic_SortedDictionary_Enumerator_string__string___get_Current(
                &v79,
                (const MethodInfo_26C995C *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__);
    if ( System_String__op_Inequality((System_String_o *)v17, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v20 = sub_B0D8BC(string___TypeInfo, 5LL);
      v27 = (System_String_array *)v20;
      if ( !v20 )
        sub_B0D97C(0LL);
      if ( v17 )
      {
        v20 = sub_B0D964(v17, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
        if ( !v20 )
        {
          v73 = sub_B0D99C(0LL);
          sub_B0D948(v73, 0LL);
        }
      }
      if ( !v27->max_length )
      {
        v71 = sub_B0D9A8(v20);
        sub_B0D948(v71, 0LL);
      }
      v27->m_Items[0] = (System_String_o *)v17;
      sub_B0D840((BattleServantConfConponent_o *)v27->m_Items, v17, v21, v22, v23, v24, v25, v26);
      v34 = StringLiteral_446/*"&"*/;
      if ( StringLiteral_446/*"&"*/ )
      {
        v34 = sub_B0D964(StringLiteral_446/*"&"*/, v27->obj.klass->_1.element_class);
        if ( !v34 )
        {
          v74 = sub_B0D99C(0LL);
          sub_B0D948(v74, 0LL);
        }
        v35 = (System_Int32_array **)StringLiteral_446/*"&"*/;
      }
      else
      {
        v35 = 0LL;
      }
      if ( v27->max_length <= 1 )
      {
        v68 = sub_B0D9A8(v34);
        sub_B0D948(v68, 0LL);
      }
      v27->m_Items[1] = (System_String_o *)v35;
      sub_B0D840((BattleServantConfConponent_o *)&v27->m_Items[1], v35, v28, v29, v30, v31, v32, v33);
      if ( Current.fields.key )
      {
        v36 = sub_B0D964(Current.fields.key, v27->obj.klass->_1.element_class);
        if ( !v36 )
        {
          v76 = sub_B0D99C(0LL);
          sub_B0D948(v76, 0LL);
        }
      }
      if ( v27->max_length <= 2 )
      {
        v69 = sub_B0D9A8(v36);
        sub_B0D948(v69, 0LL);
      }
      v27->m_Items[2] = (System_String_o *)Current.fields.key;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v27->m_Items[2],
        (System_Int32_array **)Current.fields.key,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      v49 = StringLiteral_1513/*"="*/;
      if ( StringLiteral_1513/*"="*/ )
      {
        v49 = sub_B0D964(StringLiteral_1513/*"="*/, v27->obj.klass->_1.element_class);
        if ( !v49 )
        {
          v75 = sub_B0D99C(0LL);
          sub_B0D948(v75, 0LL);
        }
        v50 = (System_Int32_array **)StringLiteral_1513/*"="*/;
      }
      else
      {
        v50 = 0LL;
      }
      if ( v27->max_length <= 3 )
      {
        v72 = sub_B0D9A8(v49);
        sub_B0D948(v72, 0LL);
      }
      v27->m_Items[3] = (System_String_o *)v50;
      sub_B0D840((BattleServantConfConponent_o *)&v27->m_Items[3], v50, v43, v44, v45, v46, v47, v48);
      if ( Current.fields.value )
      {
        v51 = sub_B0D964(Current.fields.value, v27->obj.klass->_1.element_class);
        if ( !v51 )
        {
          v77 = sub_B0D99C(0LL);
          sub_B0D948(v77, 0LL);
        }
      }
      if ( v27->max_length <= 4 )
      {
        v70 = sub_B0D9A8(v51);
        sub_B0D948(v70, 0LL);
      }
      v27->m_Items[4] = (System_String_o *)Current.fields.value;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v27->m_Items[4],
        (System_Int32_array **)Current.fields.value,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      v17 = (System_Int32_array **)System_String__Concat_43930028(v27, 0LL);
    }
    else
    {
      v17 = (System_Int32_array **)System_String__Concat_43853316(
                                     (System_String_o *)v17,
                                     (System_String_o *)Current.fields.key,
                                     (System_String_o *)StringLiteral_1513/*"="*/,
                                     (System_String_o *)Current.fields.value,
                                     0LL);
    }
  }
  System_Collections_Generic_SortedDictionary_Enumerator_string__string___Dispose(
    &v79,
    (const MethodInfo_26C9920 *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__);
  v60 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v60 = NetworkManager_TypeInfo;
  }
  if ( !v60->static_fields->secretKey )
    return 0LL;
  v61 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_B0D974(
                                                                      System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo,
                                                                      v58,
                                                                      v59);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v61, 0LL);
  v64 = (System_Text_UTF8Encoding_o *)sub_B0D974(System_Text_UTF8Encoding_TypeInfo, v62, v63);
  System_Text_UTF8Encoding___ctor(v64, 0LL);
  v65 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v65 = NetworkManager_TypeInfo;
  }
  headers = (System_Collections_Generic_SortedDictionary_string__string__o *)System_String__Concat_43852188(
                                                                               v18,
                                                                               (System_String_o *)StringLiteral_1232/*":"*/,
                                                                               v65->static_fields->secretKey,
                                                                               0LL);
  if ( !v64
    || (headers = (System_Collections_Generic_SortedDictionary_string__string__o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_Collections_Generic_SortedDictionary_string__string__o *, Il2CppMethodPointer))v64->klass->vtable._18_GetBytes.method)(
                                                                                     v64,
                                                                                     headers,
                                                                                     v64->klass->vtable._19_GetBytes.methodPtr),
        !v61) )
  {
LABEL_55:
    sub_B0D97C(headers);
  }
  v66 = System_Security_Cryptography_HashAlgorithm__ComputeHash_43128996(
          (System_Security_Cryptography_HashAlgorithm_o *)v61,
          (System_Byte_array *)headers,
          0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v61, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToBase64String(v66, 0LL);
}


System_String_o *__fastcall NetworkManager__GetCv(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  System_String_o *commonCamera; // x19

  if ( (byte_4214FD2 & 1) == 0 )
  {
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4214FD2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  commonCamera = (System_String_o *)Instance->fields.commonCamera;
  if ( System_String__IsNullOrEmpty(commonCamera, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  return CatAndMouseGame__MouseGame1(commonCamera, 0, 0LL);
}


System_String_o *__fastcall NetworkManager__GetDataServerFolderName(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4214FBB & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214FBB = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->dataServerFolder;
}


System_String_o *__fastcall NetworkManager__GetDataServerSetting(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4214FC6 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214FC6 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->dataServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetDataServerSetting_25512220(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4214FC7 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    byte_4214FC7 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  return v2->static_fields->ReleaseDataServerAddress;
}


bool __fastcall NetworkManager__GetDebugSlowConnect(const MethodInfo *method)
{
  return 0;
}


System_String_o *__fastcall NetworkManager__GetDispFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  NetworkManager_c *v3; // x0
  System_String_o *friendCode; // x19

  if ( (byte_4214F88 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v2);
    byte_4214F88 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  friendCode = v3->static_fields->friendCode;
  if ( !friendCode )
    return 0LL;
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    friendCode = NetworkManager_TypeInfo->static_fields->friendCode;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__GetNumberFormat_32897236(friendCode, 0LL);
}


System_String_o *__fastcall NetworkManager__GetFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_4214F87 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214F87 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->friendCode;
}


System_String_o *__fastcall NetworkManager__GetGameServerSetting(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4214FC4 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214FC4 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->gameServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetGameServerSetting_25512020(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4214FC5 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    byte_4214FC5 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  return v2->static_fields->ReleaseGameServerAddress;
}


int64_t __fastcall NetworkManager__GetLastServerTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4214F8A & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214F8A = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->serverTime;
}


System_String_o *__fastcall NetworkManager__GetMk(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  System_String_o *webViewScreen; // x19

  if ( (byte_4214FD1 & 1) == 0 )
  {
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4214FD1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  webViewScreen = (System_String_o *)Instance->fields.webViewScreen;
  if ( System_String__IsNullOrEmpty(webViewScreen, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  return CatAndMouseGame__MouseGame1(webViewScreen, 0, 0LL);
}


bool __fastcall NetworkManager__GetSecurityServerSetting(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4214FC1 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214FC1 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->serverSettingSecurity;
}


bool __fastcall NetworkManager__GetSecurityServerSetting_25511820(System_String_o *type, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4214FC3 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    byte_4214FC3 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  return v2->static_fields->ReleaseNetworkSecurity;
}


System_String_o *__fastcall NetworkManager__GetServerNumber(System_String_o *serverName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 *v13; // x20

  v2 = serverName;
  if ( (byte_4214FDE & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_4594/*"DEV"*/, method);
    sub_B0D8A4(&StringLiteral_12367/*"STAGING"*/, v3);
    sub_B0D8A4(&StringLiteral_12414/*"STG"*/, v4);
    sub_B0D8A4(&StringLiteral_15160/*"VERUP"*/, v5);
    sub_B0D8A4(&StringLiteral_4593/*"DESIGN"*/, v6);
    sub_B0D8A4(&StringLiteral_7337/*"IPADDRESS"*/, v7);
    sub_B0D8A4(&StringLiteral_10875/*"QA"*/, v8);
    sub_B0D8A4(&StringLiteral_10470/*"PLAN"*/, v9);
    sub_B0D8A4(&StringLiteral_8399/*"LIMIT"*/, v10);
    sub_B0D8A4(&StringLiteral_10471/*"PLAY"*/, v11);
    serverName = (System_String_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4214FDE = 1;
  }
  if ( !v2 )
    sub_B0D97C(serverName);
  v13 = &StringLiteral_10875/*"QA"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10875/*"QA"*/, 0LL) )
    return System_String__Replace_43857140(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_10470/*"PLAN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10470/*"PLAN"*/, 0LL) )
    return System_String__Replace_43857140(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_4594/*"DEV"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4594/*"DEV"*/, 0LL) )
    return System_String__Replace_43857140(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_8399/*"LIMIT"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_8399/*"LIMIT"*/, 0LL) )
    return System_String__Replace_43857140(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_10471/*"PLAY"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10471/*"PLAY"*/, 0LL) )
    return System_String__Replace_43857140(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_4593/*"DESIGN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4593/*"DESIGN"*/, 0LL) )
    return System_String__Replace_43857140(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_15160/*"VERUP"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_15160/*"VERUP"*/, 0LL) )
    return System_String__Replace_43857140(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_12414/*"STG"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_12414/*"STG"*/, 0LL)
    && !System_String__Contains(v2, (System_String_o *)StringLiteral_12367/*"STAGING"*/, 0LL) )
  {
    return System_String__Replace_43857140(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v13 = &StringLiteral_7337/*"IPADDRESS"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_7337/*"IPADDRESS"*/, 0LL) )
    return System_String__Replace_43857140(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall NetworkManager__GetServerSettingType(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4214FC0 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214FC0 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->serverSettingType;
}


int64_t __fastcall NetworkManager__GetServerTimeChkMovie(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4214F8C & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214F8C = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->serverTimeChkMovie;
}


System_String_o *__fastcall NetworkManager__GetServerType(System_String_o *serverName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 *v12; // x20

  v2 = serverName;
  if ( (byte_4214FDD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_4594/*"DEV"*/, method);
    sub_B0D8A4(&StringLiteral_12367/*"STAGING"*/, v3);
    sub_B0D8A4(&StringLiteral_12414/*"STG"*/, v4);
    sub_B0D8A4(&StringLiteral_15160/*"VERUP"*/, v5);
    sub_B0D8A4(&StringLiteral_4593/*"DESIGN"*/, v6);
    sub_B0D8A4(&StringLiteral_7337/*"IPADDRESS"*/, v7);
    sub_B0D8A4(&StringLiteral_10875/*"QA"*/, v8);
    sub_B0D8A4(&StringLiteral_10470/*"PLAN"*/, v9);
    sub_B0D8A4(&StringLiteral_8399/*"LIMIT"*/, v10);
    serverName = (System_String_o *)sub_B0D8A4(&StringLiteral_10471/*"PLAY"*/, v11);
    byte_4214FDD = 1;
  }
  if ( !v2 )
    sub_B0D97C(serverName);
  v12 = &StringLiteral_10875/*"QA"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10875/*"QA"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_10470/*"PLAN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10470/*"PLAN"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_4594/*"DEV"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4594/*"DEV"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_8399/*"LIMIT"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_8399/*"LIMIT"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_10471/*"PLAY"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10471/*"PLAY"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_4593/*"DESIGN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4593/*"DESIGN"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_15160/*"VERUP"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_15160/*"VERUP"*/, 0LL) )
    return (System_String_o *)*v12;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_12414/*"STG"*/, 0LL)
    && !System_String__Contains(v2, (System_String_o *)StringLiteral_12367/*"STAGING"*/, 0LL) )
  {
    v12 = &StringLiteral_12414/*"STG"*/;
    return (System_String_o *)*v12;
  }
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_7337/*"IPADDRESS"*/, 0LL) )
    return (System_String_o *)StringLiteral_7337/*"IPADDRESS"*/;
  else
    return v2;
}


void __fastcall NetworkManager__GetSignup(
        NetworkManager_o *this,
        System_String_o **userName,
        int32_t *genderType,
        int32_t *month,
        int32_t *day,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NetworkManager_c *v12; // x0
  System_String_o *v13; // x1

  if ( (byte_4214F80 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, userName);
    byte_4214F80 = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  v13 = v12->static_fields->userName;
  *userName = v13;
  sub_B0D840(
    (BattleServantConfConponent_o *)userName,
    (System_Int32_array **)v13,
    (System_String_array **)genderType,
    (System_String_array **)month,
    (System_Boolean_array **)day,
    (System_Int32_array **)method,
    v6,
    v7);
  *genderType = NetworkManager_TypeInfo->static_fields->genderType;
  *month = NetworkManager_TypeInfo->static_fields->month;
  *day = NetworkManager_TypeInfo->static_fields->day;
}


void __fastcall NetworkManager__GetStoreUrl(
        NetworkManager_o *this,
        System_String_o *storeName,
        System_String_o *id,
        NetworkManager_StoreCallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *updated; // x1

  updated = NetworkManager__RequestApplicationUpdateCR(this, storeName, id, callback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
}


int32_t __fastcall NetworkManager__GetTerminalDispState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  TerminalPramsManager_c *v6; // x0

  if ( (byte_4214F79 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    byte_4214F79 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  if ( AvalonSceneManager__checkNowScene(Instance, 9, 0LL) )
    return 1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421083E )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v4);
    byte_421083E = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  return v6->static_fields->_DispState_k__BackingField != 2;
}


System_String_o *__fastcall NetworkManager__GetTopLoginResult(NetworkManager_o *this, const MethodInfo *method)
{
  return this->fields.loginResponseResult;
}


System_String_o *__fastcall NetworkManager__GetWarBoardRuleUrl(int32_t stageId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *BaseUrl; // x20
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4214FDC & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_23344/*"webview/warBoard?stageId="*/, v4);
    byte_4214FDC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = (Il2CppObject *)NetworkManager__getBaseUrl(0, method);
  v8 = stageId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Concat_43929608(BaseUrl, (Il2CppObject *)StringLiteral_23344/*"webview/warBoard?stageId="*/, v6, 0LL);
}


System_String_o *__fastcall NetworkManager__GetWebServerSetting(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4214FC8 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214FC8 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->webServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetWebServerSetting_25512420(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4214FC9 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    byte_4214FC9 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  return v2->static_fields->ReleaseWebServerAddress;
}


void __fastcall NetworkManager__GoToTitleDialog(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_c *v8; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  bool *p_isRebootBlock; // x8
  _BOOL4 isRebootBlock; // t1
  System_String_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x5

  if ( (byte_4214FA6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&Method_NetworkManager_OnClickErrorReboot__, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_12608/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4214FA6 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  isRebootBlock = static_fields->isRebootBlock;
  p_isRebootBlock = &static_fields->isRebootBlock;
  if ( !isRebootBlock )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      p_isRebootBlock = &NetworkManager_TypeInfo->static_fields->isRebootBlock;
    }
    *p_isRebootBlock = 1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12608/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, 0LL);
    v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
    NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1/*""*/, v12, 0LL, v15, v16);
  }
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__Initialize(
        NetworkManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4214F7B & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager__Initialize_d__82_TypeInfo, method);
    byte_4214F7B = 1;
  }
  v4 = sub_B0D974(NetworkManager__Initialize_d__82_TypeInfo, method, v2);
  NetworkManager__Initialize_d__82___ctor((NetworkManager__Initialize_d__82_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall NetworkManager__InitializeUserAgent(NetworkManager_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Int32_array **UserAgentString; // x19
  NetworkManager_c *v10; // x8
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4214F7C & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214F7C = 1;
  }
  this->fields._isWaitUserAgent_k__BackingField = 0;
  UserAgentString = (System_Int32_array **)NetworkServicePluginScript__GetUserAgentString(0LL);
  v10 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->userAgent = (struct System_String_o *)UserAgentString;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->userAgent, UserAgentString, v3, v4, v5, v6, v7, v8);
}


System_String_o *__fastcall NetworkManager__LoadAuthMd5(
        NetworkManager_o *this,
        System_String_o *fname,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x21
  System_IO_Stream_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_IO_BinaryReader_o *v10; // x19
  __int64 v11; // x0
  System_String_o *v12; // x20
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0

  if ( (byte_4214F92 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, fname);
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    byte_4214F92 = 1;
  }
  v6 = 0LL;
  if ( System_IO_File__Exists(fname, 0LL) )
  {
    v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(fname, 0LL);
    v10 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v8, v9);
    System_IO_BinaryReader___ctor(v10, v7, 0LL);
    if ( !v10 )
      sub_B0D97C(v11);
    v12 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._22_ReadString.method)(
                               v10,
                               v10->klass->vtable._23_ReadChars.methodPtr);
    if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    }
    v6 = EncryptedPlayerPrefs__Md5(v12, 0LL);
    klass = v10->klass;
    if ( *(_WORD *)&v10->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_12:
      v16 = sub_AA67A0(v10, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v16)(v10, *(_QWORD *)(v16 + 8));
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnApplicationPause(NetworkManager_o *this, bool isPause, const MethodInfo *method)
{
  if ( !isPause )
    NetworkManager__CheckServerLimitTime(this, (const MethodInfo *)isPause);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall NetworkManager__OnBackgroundErrorCommunication(
        NetworkManager_o *this,
        RequestBase_o *requestWork,
        System_String_o *errorCode,
        bool forceCommunication,
        const MethodInfo *method)
{
  NetworkManager_o *v8; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  v8 = this;
  if ( (byte_4214FEB & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_B0D8A4(&StringLiteral_4207/*"CommunicationStart"*/, requestWork);
    byte_4214FEB = 1;
  }
  if ( !requestWork )
    sub_B0D97C(this);
  if ( (((__int64 (__fastcall *)(RequestBase_o *, System_String_o *, Il2CppMethodPointer, bool, const MethodInfo *))requestWork->klass->vtable._11_backgroundErrorRequest.method)(
          requestWork,
          errorCode,
          requestWork->klass->vtable._12_backgroundErrorRetry.methodPtr,
          forceCommunication,
          method) & 1) == 0
    && !forceCommunication )
  {
    return 0;
  }
  if ( v8->fields.communicationWork == requestWork )
  {
    v8->fields.communicationWorkResponseList = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v8->fields.communicationWorkResponseList,
      0LL,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    v8->fields.communicationWork = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&v8->fields.communicationWork, 0LL, v16, v17, v18, v19, v20, v21);
    v8->fields.communicationCoroutine = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&v8->fields.communicationCoroutine, 0LL, v22, v23, v24, v25, v26, v27);
    if ( v8->fields.cacheRefreshWork )
    {
      v8->fields.cacheRefreshWork = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields.cacheRefreshWork, 0LL, v28, v29, v30, v31, v32, v33);
      v8->fields.cacheRefreshWorkResponseList = 0LL;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v8->fields.cacheRefreshWorkResponseList,
        0LL,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
  }
  ((void (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))requestWork->klass->vtable._12_backgroundErrorRetry.method)(
    requestWork,
    requestWork->klass->vtable._13_isAutoRetryRequest.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v8, (System_String_o *)StringLiteral_4207/*"CommunicationStart"*/, 0.0, 0LL);
  return 1;
}


void __fastcall NetworkManager__OnClickErrorDialog(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  UnityEngine_Application__Quit_40735960(0LL);
}


void __fastcall NetworkManager__OnClickErrorReboot(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  ManagementManager_c *v4; // x0
  NetworkManager_c *v5; // x0
  ManagementManager_o *Instance; // x0

  if ( (byte_4214FAB & 1) == 0 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v3);
    byte_4214FAB = 1;
  }
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
  v4 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  if ( v4->static_fields->isDuringStartup )
  {
    UnityEngine_Application__Quit_40735960(0LL);
  }
  else
  {
    v5 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v5 = NetworkManager_TypeInfo;
    }
    v5->static_fields->isRebootBlock = 1;
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    ManagementManager__reboot(Instance, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnClickErrorRetryDialog(
        NetworkManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Collections_IEnumerator_o *v14; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  ManagementManager_c *v22; // x0
  NetworkManager_c *v23; // x0
  ManagementManager_o *Instance; // x0

  if ( (byte_4214FA8 & 1) == 0 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, isDecide);
    sub_B0D8A4(&NetworkManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v11);
    byte_4214FA8 = 1;
  }
  this->fields.communicationWorkResponseList = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( isDecide )
  {
    v14 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v13);
    started = UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v14, 0LL);
    this->fields.communicationCoroutine = started;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.communicationCoroutine,
      (System_Int32_array **)started,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  else
  {
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    }
    if ( !byte_42124C8 )
    {
      sub_B0D8A4(&ManagementManager_TypeInfo, v12);
      byte_42124C8 = 1;
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
      UnityEngine_Application__Quit_40735960(0LL);
    }
    else
    {
      v23 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v23 = NetworkManager_TypeInfo;
      }
      v23->static_fields->isRebootBlock = 1;
      Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_B0D97C(0LL);
      ManagementManager__reboot(Instance, 0, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnClickErrorRetryDialog_UnityIap(
        NetworkManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2
  System_Collections_IEnumerator_o *v11; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_o *p_communicationCoroutine; // x0
  CommonUI_o *Instance; // x0
  const MethodInfo *v21; // x3

  if ( (byte_4214FA9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4214FA9 = 1;
  }
  if ( isDecide )
  {
    this->fields.communicationWorkResponseList = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v11 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v10);
    started = UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
    p_communicationCoroutine = (BattleServantConfConponent_o *)&this->fields.communicationCoroutine;
    this->fields.communicationCoroutine = started;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    CommonUI__CloseRetryDialog(Instance, 0LL);
    NetworkManager__OnEndCommunication(
      this,
      this->fields.communicationWork,
      this->fields.communicationWorkResponseList,
      v21);
    p_communicationCoroutine = (BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList;
    started = 0LL;
    this->fields.communicationWorkResponseList = 0LL;
  }
  sub_B0D840(p_communicationCoroutine, (System_Int32_array **)started, v13, v14, v15, v16, v17, v18);
}


void __fastcall NetworkManager__OnClickErrorStay(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  NetworkManager__OnEndCommunication(
    this,
    this->fields.communicationWork,
    this->fields.communicationWorkResponseList,
    v2);
}


void __fastcall NetworkManager__OnClickErrorTerminal(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  ManagementManager_c *v4; // x0
  NetworkManager_c *v5; // x0
  ManagementManager_o *Instance; // x0

  if ( (byte_4214FAC & 1) == 0 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v3);
    byte_4214FAC = 1;
  }
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
  v4 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  if ( v4->static_fields->isDuringStartup )
  {
    UnityEngine_Application__Quit_40735960(0LL);
  }
  else
  {
    v5 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v5 = NetworkManager_TypeInfo;
    }
    v5->static_fields->isRebootBlock = 1;
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    ManagementManager__reboot(Instance, 1, 0LL);
  }
}


void __fastcall NetworkManager__OnClickRefreshTerminal(NetworkManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Coroutine_o *communicationCoroutine; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4214FAD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13673/*"TerminalStart"*/, method);
    byte_4214FAD = 1;
  }
  this->fields.communicationWorkResponseList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList, 0LL, v2, v3, v4, v5, v6, v7);
  communicationCoroutine = this->fields.communicationCoroutine;
  if ( communicationCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_34930796((UnityEngine_MonoBehaviour_o *)this, communicationCoroutine, 0LL);
  this->fields.communicationWork = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.communicationWork, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.communicationCoroutine = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.communicationCoroutine, 0LL, v16, v17, v18, v19, v20, v21);
  if ( this->fields.cacheRefreshWork )
  {
    this->fields.cacheRefreshWork = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.cacheRefreshWork, 0LL, v22, v23, v24, v25, v26, v27);
    this->fields.cacheRefreshWorkResponseList = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.cacheRefreshWorkResponseList,
      0LL,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13673/*"TerminalStart"*/,
    0.0,
    0LL);
}


void __fastcall NetworkManager__OnClickReloadCache(NetworkManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  struct RequestBase_o *communicationWork; // x1
  RequestBase_o **p_communicationWork; // x20
  struct ResponseData_array *communicationWorkResponseList; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **Request_WarBoardWallAttackRequest; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x2
  System_Collections_IEnumerator_o *v33; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_4214FAA & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_TopRefreshRequest___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    byte_4214FAA = 1;
  }
  p_communicationWork = &this->fields.communicationWork;
  communicationWork = this->fields.communicationWork;
  this->fields.cacheRefreshWork = communicationWork;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.cacheRefreshWork,
    (System_Int32_array **)communicationWork,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  communicationWorkResponseList = this->fields.communicationWorkResponseList;
  this->fields.cacheRefreshWorkResponseList = communicationWorkResponseList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.cacheRefreshWorkResponseList,
    (System_Int32_array **)communicationWorkResponseList,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (System_Int32_array **)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               0LL,
                                                               (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TopRefreshRequest___);
  *p_communicationWork = (RequestBase_o *)Request_WarBoardWallAttackRequest;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.communicationWork,
    Request_WarBoardWallAttackRequest,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.communicationWorkResponseList = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList,
    0LL,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !*p_communicationWork )
    sub_B0D97C(0LL);
  RequestBase__addBaseField(*p_communicationWork, 0LL);
  v33 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v32);
  started = UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v33, 0LL);
  this->fields.communicationCoroutine = started;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.communicationCoroutine,
    (System_Int32_array **)started,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
}


void __fastcall NetworkManager__OnClickStore(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4214FB1 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    byte_4214FB1 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  WebViewPluginScript__LaunchStore(v2->static_fields->AndroidPackageName, 0LL);
  UnityEngine_Application__Quit_40735960(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnClickUserDelete(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_4214FAF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_NetworkManager_EndCloseUserDelete__, v5);
    sub_B0D8A4(&OptionManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4214FAF = 1;
  }
  if ( isDecide )
  {
    UserSaveData__DeleteSaveData(1, 0LL);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__Initialize(0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_NetworkManager_EndCloseUserDelete__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__CloseConfirmDialog_17017160(Instance, v11, 0LL);
}


void __fastcall NetworkManager__OnClickWaitDebugDialog(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isWaitDebugDialog = 0;
}


void __fastcall NetworkManager__OnEndCommunication(
        NetworkManager_o *this,
        RequestBase_o *requestWork,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ResponseData_array *cacheRefreshWorkResponseList; // x20
  RequestBase_o *v9; // x21
  NetworkManager_o *v10; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  RequestBase_o *cacheRefreshWork; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  cacheRefreshWorkResponseList = responseList;
  v9 = requestWork;
  v10 = this;
  if ( (byte_4214FEA & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_B0D8A4(&StringLiteral_4207/*"CommunicationStart"*/, requestWork);
    byte_4214FEA = 1;
  }
  if ( v10->fields.communicationWork != v9 )
    goto LABEL_4;
  v10->fields.communicationWorkResponseList = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v10->fields.communicationWorkResponseList,
    0LL,
    (System_String_array **)responseList,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v10->fields.communicationWork = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v10->fields.communicationWork, 0LL, v11, v12, v13, v14, v15, v16);
  v10->fields.communicationCoroutine = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v10->fields.communicationCoroutine, 0LL, v17, v18, v19, v20, v21, v22);
  this = (NetworkManager_o *)&v10->fields.cacheRefreshWork;
  cacheRefreshWork = v10->fields.cacheRefreshWork;
  if ( cacheRefreshWork )
  {
    cacheRefreshWorkResponseList = v10->fields.cacheRefreshWorkResponseList;
    v10->fields.cacheRefreshWork = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)this, 0LL, v23, v24, v25, v26, v27, v28);
    v10->fields.cacheRefreshWorkResponseList = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v10->fields.cacheRefreshWorkResponseList,
      0LL,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    v9 = cacheRefreshWork;
  }
  else
  {
LABEL_4:
    if ( !v9 )
      sub_B0D97C(this);
  }
  ((void (__fastcall *)(RequestBase_o *, ResponseData_array *, Il2CppMethodPointer))v9->klass->vtable._10_requestCompleted.method)(
    v9,
    cacheRefreshWorkResponseList,
    v9->klass->vtable._11_backgroundErrorRequest.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v10, (System_String_o *)StringLiteral_4207/*"CommunicationStart"*/, 0.0, 0LL);
}


bool __fastcall NetworkManager__OnErrorCommunication(
        NetworkManager_o *this,
        RequestBase_o *requestWork,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  NetworkManager_o *v6; // x19
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  v6 = this;
  if ( (byte_4214FEC & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_B0D8A4(&StringLiteral_4207/*"CommunicationStart"*/, requestWork);
    byte_4214FEC = 1;
  }
  if ( !requestWork )
    sub_B0D97C(this);
  if ( (((__int64 (__fastcall *)(RequestBase_o *, System_String_o *, Il2CppMethodPointer, const MethodInfo *))requestWork->klass->vtable._14_errorRequest.method)(
          requestWork,
          errorCode,
          requestWork->klass->vtable._15_errorRetry.methodPtr,
          method) & 1) == 0 )
    return 0;
  if ( v6->fields.communicationWork == requestWork )
  {
    v6->fields.communicationWorkResponseList = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v6->fields.communicationWorkResponseList,
      0LL,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v6->fields.communicationWork = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&v6->fields.communicationWork, 0LL, v13, v14, v15, v16, v17, v18);
    v6->fields.communicationCoroutine = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&v6->fields.communicationCoroutine, 0LL, v19, v20, v21, v22, v23, v24);
    if ( v6->fields.cacheRefreshWork )
    {
      v6->fields.cacheRefreshWork = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&v6->fields.cacheRefreshWork, 0LL, v25, v26, v27, v28, v29, v30);
      v6->fields.cacheRefreshWorkResponseList = 0LL;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v6->fields.cacheRefreshWorkResponseList,
        0LL,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
  }
  ((void (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))requestWork->klass->vtable._15_errorRetry.method)(
    requestWork,
    requestWork->klass->vtable._16_getParameterFileName.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v6, (System_String_o *)StringLiteral_4207/*"CommunicationStart"*/, 0.0, 0LL);
  return 1;
}


void __fastcall NetworkManager__OptionSync(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4214FF2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_NetworkManager_EndOptionSync__, v3);
    sub_B0D8A4(&OptionManager_TypeInfo, v4);
    byte_4214FF2 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__CheckOldLocal(0LL) )
  {
    v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_NetworkManager_EndOptionSync__, 0LL);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__SaveData(v7, 0LL);
  }
  else
  {
    NetworkManager__EndLogin(this, v5);
  }
}


int32_t __fastcall NetworkManager__ReadAuth(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ManagerConfig_c *v14; // x0
  NetworkManager_o *v15; // x0
  const MethodInfo *v16; // x1
  System_IO_BinaryReader_c **v17; // x22
  int v18; // w20
  int v19; // w24
  int v20; // w25
  int v21; // w27
  System_String_o *AuthFileName; // x21
  System_IO_FileStream_o *v23; // x0
  System_IO_BinaryReader_c *v24; // x8
  System_IO_BinaryReader_c **v25; // x19
  System_IO_Stream_o *v26; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  System_IO_BinaryReader_o *v29; // x21
  __int64 v30; // x0
  System_String_o *v31; // x22
  System_String_o *v32; // x23
  NetworkManager_c *v33; // x0
  System_String_o *String; // x1
  int v35; // w8
  char v36; // w23
  System_String_o *v37; // x22
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v39; // x22
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x23
  NetworkManager_c *v48; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v50; // x0
  System_Int32_array **v51; // x1
  struct NetworkManager_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v59; // x0
  System_Int32_array **v60; // x1
  struct NetworkManager_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v68; // x0
  System_Int32_array **v69; // x1
  struct NetworkManager_StaticFields *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v78; // x10
  int32_t *p_offset; // x11
  __int64 v80; // x0
  int v81; // w8
  int v82; // w9
  _DWORD v84[11]; // [xsp+10h] [xbp-90h]
  int v85; // [xsp+3Ch] [xbp-64h]
  int v86; // [xsp+48h] [xbp-58h]

  if ( (byte_4214F8F & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, method);
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, v5);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&JsonManager_TypeInfo, v7);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_23078/*"userCreateServer"*/, v10);
    sub_B0D8A4(&StringLiteral_16577/*"authKey"*/, v11);
    sub_B0D8A4(&StringLiteral_22019/*"secretKey"*/, v12);
    sub_B0D8A4(&StringLiteral_23118/*"userId"*/, v13);
    byte_4214F8F = 1;
  }
  v86 = 0;
  v85 = 0;
  v14 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( !v14->static_fields->UseMock )
  {
    v15 = (NetworkManager_o *)NetworkManager__SyncAuth(this, method);
    if ( (_DWORD)v15 == 2 )
    {
      LODWORD(v15) = 6;
      return (int)v15;
    }
    v17 = &System_IO_BinaryReader_TypeInfo;
    v18 = 0;
    v19 = 0;
    v20 = 5;
    v21 = 1;
    while ( 1 )
    {
      do
      {
        if ( v20 <= 0 )
        {
          NetworkManager__ClearAuth(v15, v16);
          LODWORD(v15) = v21;
          return (int)v15;
        }
        --v20;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        AuthFileName = NetworkManager__getAuthFileName(v19 & 1, v16);
        v19 ^= 1u;
        v15 = (NetworkManager_o *)System_IO_File__Exists(AuthFileName, 0LL);
      }
      while ( ((unsigned __int8)v15 & 1) == 0 );
      v23 = System_IO_File__OpenRead(AuthFileName, 0LL);
      v24 = *v17;
      v25 = v17;
      v26 = (System_IO_Stream_o *)v23;
      v29 = (System_IO_BinaryReader_o *)sub_B0D974(v24, v27, v28);
      System_IO_BinaryReader___ctor(v29, v26, 0LL);
      if ( !v29 )
        sub_B0D97C(v30);
      v31 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v29->klass->vtable._22_ReadString.method)(
                                 v29,
                                 v29->klass->vtable._23_ReadChars.methodPtr);
      if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      }
      v32 = EncryptedPlayerPrefs__Md5(v31, 0LL);
      v33 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v33 = NetworkManager_TypeInfo;
      }
      String = UnityEngine_PlayerPrefs__GetString(v33->static_fields->AUTHMD5_KEY_TYPE, v32, 0LL);
      if ( System_String__op_Inequality(v32, String, 0LL) )
        break;
      if ( v31 )
      {
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        v37 = CatAndMouseGame__MouseGame1(v31, 0, 0LL);
        if ( v37 )
        {
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          Dictionary = JsonManager__getDictionary(v37, 0LL);
          v39 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
          if ( !Dictionary )
            sub_B0D97C(0LL);
          Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                   (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary,
                   (System_Type_o *)StringLiteral_23078/*"userCreateServer"*/,
                   (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            sub_B0D97C(0LL);
          v47 = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                         Item,
                                         Item->klass->vtable[4].methodPtr);
          v48 = NetworkManager_TypeInfo;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v48 = NetworkManager_TypeInfo;
          }
          static_fields = v48->static_fields;
          static_fields->userCreateServer = (struct System_String_o *)v47;
          sub_B0D840(
            (BattleServantConfConponent_o *)&static_fields->userCreateServer,
            v47,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
          v50 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  v39,
                  (System_Type_o *)StringLiteral_23118/*"userId"*/,
                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v50 )
            sub_B0D97C(0LL);
          v51 = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v50->klass->vtable[3].method)(
                                         v50,
                                         v50->klass->vtable[4].methodPtr);
          v52 = NetworkManager_TypeInfo->static_fields;
          v52->userId = (struct System_String_o *)v51;
          sub_B0D840((BattleServantConfConponent_o *)&v52->userId, v51, v53, v54, v55, v56, v57, v58);
          v59 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  v39,
                  (System_Type_o *)StringLiteral_16577/*"authKey"*/,
                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v59 )
            sub_B0D97C(0LL);
          v60 = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v59->klass->vtable[3].method)(
                                         v59,
                                         v59->klass->vtable[4].methodPtr);
          v61 = NetworkManager_TypeInfo->static_fields;
          v61->authKey = (struct System_String_o *)v60;
          sub_B0D840((BattleServantConfConponent_o *)&v61->authKey, v60, v62, v63, v64, v65, v66, v67);
          v68 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  v39,
                  (System_Type_o *)StringLiteral_22019/*"secretKey"*/,
                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v68 )
            sub_B0D97C(0LL);
          v69 = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v68->klass->vtable[3].method)(
                                         v68,
                                         v68->klass->vtable[4].methodPtr);
          v70 = NetworkManager_TypeInfo->static_fields;
          v70->secretKey = (struct System_String_o *)v69;
          sub_B0D840((BattleServantConfConponent_o *)&v70->secretKey, v69, v71, v72, v73, v74, v75, v76);
          v84[v18] = 314;
          v35 = v85;
          v36 = 1;
        }
        else
        {
          v84[v18] = 320;
          v35 = v85;
          v36 = 0;
        }
        goto LABEL_49;
      }
      v84[v18] = 320;
      v18 = ++v85;
      v36 = 0;
LABEL_50:
      klass = v29->klass;
      if ( *(_WORD *)&v29->klass->_2.bitflags1 )
      {
        v78 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v78;
          p_offset += 4;
          if ( v78 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
            goto LABEL_54;
        }
        v80 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_54:
        v80 = sub_AA67A0(v29, System_IDisposable_TypeInfo, 0LL);
      }
      v15 = (NetworkManager_o *)(*(__int64 (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v80)(
                                  v29,
                                  *(_QWORD *)(v80 + 8));
      if ( !v18 )
      {
        v17 = v25;
        goto LABEL_62;
      }
      v81 = v18 - 1;
      v82 = v84[v18 - 1];
      v17 = v25;
      if ( v82 == 314 )
      {
        --v18;
        v85 = v81;
        goto LABEL_62;
      }
      if ( v82 == 320 )
      {
        v85 = --v18;
      }
      else
      {
LABEL_62:
        v15 = 0LL;
        if ( (v36 & 1) != 0 )
          return (int)v15;
      }
    }
    v84[v18] = 320;
    v35 = v85;
    v36 = 0;
    v21 = 2;
LABEL_49:
    v18 = v35 + 1;
    v85 = v35 + 1;
    goto LABEL_50;
  }
  LODWORD(v15) = 1;
  return (int)v15;
}


bool __fastcall NetworkManager__ReadFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  NetworkManager_c *v6; // x0
  System_String_o *FriendCodeFileName; // x19
  System_IO_Stream_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x20
  NetworkManager_c *v20; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v22; // w21
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0

  if ( (byte_4214F84 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, method);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    byte_4214F84 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v6 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  FriendCodeFileName = NetworkManager__getFriendCodeFileName((const MethodInfo *)v6);
  if ( !System_IO_File__Exists(FriendCodeFileName, 0LL) )
    return 0;
  v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(FriendCodeFileName, 0LL);
  v11 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v9, v10);
  System_IO_BinaryReader___ctor(v11, v8, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  v19 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._22_ReadString.method)(
                                 v11,
                                 v11->klass->vtable._23_ReadChars.methodPtr);
  v20 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v20 = NetworkManager_TypeInfo;
  }
  static_fields = v20->static_fields;
  static_fields->friendCode = (struct System_String_o *)v19;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->friendCode, v19, v13, v14, v15, v16, v17, v18);
  v22 = 1;
  klass = v11->klass;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v26 = sub_AA67A0(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v26)(v11, *(_QWORD *)(v26 + 8));
  return v22;
}


bool __fastcall NetworkManager__ReadOldSignup(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  NetworkManager_c *v6; // x0
  System_String_o *OldSignupFileName; // x19
  System_IO_Stream_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x20
  NetworkManager_c *v20; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v22; // w21
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0

  if ( (byte_4214F7E & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, method);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    byte_4214F7E = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v6 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  OldSignupFileName = NetworkManager__getOldSignupFileName((const MethodInfo *)v6);
  if ( !System_IO_File__Exists(OldSignupFileName, 0LL) )
    return 0;
  v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(OldSignupFileName, 0LL);
  v11 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v9, v10);
  System_IO_BinaryReader___ctor(v11, v8, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  v19 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._22_ReadString.method)(
                                 v11,
                                 v11->klass->vtable._23_ReadChars.methodPtr);
  v20 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v20 = NetworkManager_TypeInfo;
  }
  static_fields = v20->static_fields;
  static_fields->userName = (struct System_String_o *)v19;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->userName, v19, v13, v14, v15, v16, v17, v18);
  NetworkManager_TypeInfo->static_fields->genderType = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
                                                         v11,
                                                         v11->klass->vtable._16_ReadUInt32.methodPtr);
  NetworkManager_TypeInfo->static_fields->month = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
                                                    v11,
                                                    v11->klass->vtable._16_ReadUInt32.methodPtr);
  v22 = 1;
  NetworkManager_TypeInfo->static_fields->day = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
                                                  v11,
                                                  v11->klass->vtable._16_ReadUInt32.methodPtr);
  klass = v11->klass;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v26 = sub_AA67A0(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v26)(v11, *(_QWORD *)(v26 + 8));
  return v22;
}


bool __fastcall NetworkManager__ReadServerSetting(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  __int64 v4; // x1

  if ( (byte_4214FD3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_4585/*"DEFAULT"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4214FD3 = 1;
  }
  NetworkManager__SetServerSetting(
    this,
    (System_String_o *)StringLiteral_4585/*"DEFAULT"*/,
    0,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v2);
  return 0;
}


bool __fastcall NetworkManager__ReadSignup(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  NetworkManager_c *v6; // x0
  System_String_o *SignupFileName; // x19
  System_IO_Stream_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x20
  NetworkManager_c *v20; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v22; // w21
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0

  if ( (byte_4214F7F & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, method);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    byte_4214F7F = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v6 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  SignupFileName = NetworkManager__getSignupFileName((const MethodInfo *)v6);
  if ( !System_IO_File__Exists(SignupFileName, 0LL) )
    return 0;
  v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(SignupFileName, 0LL);
  v11 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v9, v10);
  System_IO_BinaryReader___ctor(v11, v8, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  v19 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._22_ReadString.method)(
                                 v11,
                                 v11->klass->vtable._23_ReadChars.methodPtr);
  v20 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v20 = NetworkManager_TypeInfo;
  }
  static_fields = v20->static_fields;
  static_fields->userName = (struct System_String_o *)v19;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->userName, v19, v13, v14, v15, v16, v17, v18);
  NetworkManager_TypeInfo->static_fields->genderType = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
                                                         v11,
                                                         v11->klass->vtable._16_ReadUInt32.methodPtr);
  NetworkManager_TypeInfo->static_fields->month = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
                                                    v11,
                                                    v11->klass->vtable._16_ReadUInt32.methodPtr);
  v22 = 1;
  NetworkManager_TypeInfo->static_fields->day = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
                                                  v11,
                                                  v11->klass->vtable._16_ReadUInt32.methodPtr);
  klass = v11->klass;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v26 = sub_AA67A0(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v26)(v11, *(_QWORD *)(v26 + 8));
  return v22;
}


void __fastcall NetworkManager__ReleseService(NetworkManager_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__ReplaceBaseField(RequestBase_o *request, bool isRefreshTime, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *Instance; // x0
  __int64 v14; // x1
  DataManager_c *v15; // x0
  __int64 v16; // x1
  DataManager_c *v17; // x0
  NetworkManager_c *v18; // x0
  int64_t Time; // x0
  const MethodInfo *v20; // x2
  System_String_o *v21; // x0
  System_Guid_o v22; // [xsp+0h] [xbp-30h] BYREF
  System_Guid_o v23; // 0:x0.16

  if ( (byte_4214FE3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Guid_TypeInfo, isRefreshTime);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_17949/*"dateVer"*/, v8);
    sub_B0D8A4(&StringLiteral_17933/*"dataVer"*/, v9);
    sub_B0D8A4(&StringLiteral_16422/*"appVer"*/, v10);
    sub_B0D8A4(&StringLiteral_19448/*"idempotencyKey"*/, v11);
    sub_B0D8A4(&StringLiteral_20244/*"lastAccessTime"*/, v12);
    byte_4214FE3 = 1;
  }
  v22 = (System_Guid_o)0LL;
  Instance = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !request )
    goto LABEL_28;
  RequestBase__replaceField_30436608(
    request,
    (System_String_o *)StringLiteral_16422/*"appVer"*/,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  if ( !byte_421507E )
  {
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    byte_421507E = 1;
  }
  v15 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v15 = DataManager_TypeInfo;
  }
  RequestBase__replaceField(request, (System_String_o *)StringLiteral_17933/*"dataVer"*/, v15->static_fields->dataVersion, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_B0D97C(Instance);
  if ( !byte_421507F )
  {
    sub_B0D8A4(&DataManager_TypeInfo, v16);
    byte_421507F = 1;
  }
  v17 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v17 = DataManager_TypeInfo;
  }
  RequestBase__replaceField_30436140(
    request,
    (System_String_o *)StringLiteral_17949/*"dateVer"*/,
    v17->static_fields->dateVersion,
    0LL);
  if ( isRefreshTime )
  {
    v18 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime((const MethodInfo *)v18);
    RequestBase__replaceField_30436140(request, (System_String_o *)StringLiteral_20244/*"lastAccessTime"*/, Time, 0LL);
    if ( (BYTE3(System_Guid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Guid_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Guid_TypeInfo);
    v22 = System_Guid__NewGuid(0LL);
    *(_QWORD *)&v23.fields._a = &v22;
    *(_QWORD *)&v23.fields._d = 0LL;
    v21 = System_Guid__ToString(v23, v20);
    RequestBase__replaceField_30436608(request, (System_String_o *)StringLiteral_19448/*"idempotencyKey"*/, v21, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__RequestApplicationUpdateCR(
        NetworkManager_o *this,
        System_String_o *storeName,
        System_String_o *id,
        NetworkManager_StoreCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v8; // x22
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4214FED & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager__RequestApplicationUpdateCR_d__217_TypeInfo, storeName);
    byte_4214FED = 1;
  }
  v8 = sub_B0D974(NetworkManager__RequestApplicationUpdateCR_d__217_TypeInfo, storeName, id);
  NetworkManager__RequestApplicationUpdateCR_d__217___ctor(
    (NetworkManager__RequestApplicationUpdateCR_d__217_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 32) = storeName;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)storeName, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 40) = id;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)id, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v8 + 48) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v8;
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__RequestCR(
        NetworkManager_o *this,
        RequestBase_o *work,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
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

  if ( (byte_4214FE9 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager__RequestCR_d__212_TypeInfo, work);
    byte_4214FE9 = 1;
  }
  v7 = sub_B0D974(NetworkManager__RequestCR_d__212_TypeInfo, work, method);
  NetworkManager__RequestCR_d__212___ctor((NetworkManager__RequestCR_d__212_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 40) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v7 + 32) = work;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)work, v15, v16, v17, v18, v19, v20);
  *(float *)(v7 + 48) = delay;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__RequestLogin(
        NetworkManager_o *this,
        NetworkManager_LoginCallbackFunc_o *callback,
        bool isEnforce,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  NetworkManager_ResultCallbackFunc_o *v16; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  TopLoginRequest_o *v18; // x21
  const MethodInfo *v19; // x1

  if ( (byte_4214FEE & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_EndTopLogin__, callback);
    sub_B0D8A4(&Method_NetworkManager_getRequest_TopLoginRequest___, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    byte_4214FEE = 1;
  }
  this->fields.loginCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.loginCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)isEnforce,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15);
  NetworkManager_ResultCallbackFunc___ctor(v16, (Il2CppObject *)this, Method_NetworkManager_EndTopLogin__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v16,
                                        (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TopLoginRequest___);
  v18 = (TopLoginRequest_o *)Request_WarBoardWallAttackRequest;
  if ( isEnforce )
  {
    if ( !Request_WarBoardWallAttackRequest )
LABEL_13:
      sub_B0D97C(Request_WarBoardWallAttackRequest);
  }
  else
  {
    if ( !Request_WarBoardWallAttackRequest )
      goto LABEL_13;
    if ( (((__int64 (__fastcall *)(WarBoardWallAttackRequest_o *, Il2CppMethodPointer))Request_WarBoardWallAttackRequest->klass->vtable._7_checkExpirationDate.method)(
            Request_WarBoardWallAttackRequest,
            Request_WarBoardWallAttackRequest->klass->vtable._8_isBackgroundRequest.methodPtr) & 1) != 0 )
    {
      NetworkManager__EndLogin(this, v19);
      return;
    }
  }
  TopLoginRequest__beginRequest(v18, 0LL);
}


void __fastcall NetworkManager__RequestStart(RequestBase_o *request, const MethodInfo *method)
{
  NetworkManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_4214FE5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, method);
    byte_4214FE5 = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( NetworkManager__CheckServerLimitTime(Instance, v4) )
  {
    Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
    {
      NetworkManager__AddWaitStatus(Instance, request, v5);
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( Instance )
      {
        NetworkManager__CommunicationStart(Instance, v6);
        return;
      }
    }
LABEL_9:
    sub_B0D97C(Instance);
  }
}


void __fastcall NetworkManager__SetAuth(
        NetworkManager_o *this,
        System_String_o *userId,
        System_String_o *authKey,
        System_String_o *secretKey,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NetworkManager_c *v11; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  struct NetworkManager_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct NetworkManager_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_4214F90 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, userId);
    byte_4214F90 = 1;
  }
  if ( userId )
  {
    v11 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v11 = NetworkManager_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->userId = userId;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->userId,
      (System_Int32_array **)userId,
      (System_String_array **)authKey,
      (System_String_array **)secretKey,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    v13 = NetworkManager_TypeInfo->static_fields;
    v13->authKey = authKey;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->authKey,
      (System_Int32_array **)authKey,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = NetworkManager_TypeInfo->static_fields;
    v20->secretKey = secretKey;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v20->secretKey,
      (System_Int32_array **)secretKey,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
}


void __fastcall NetworkManager__SetBaseField(RequestBase_o *request, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  _BYTE *Instance; // x0
  __int64 v15; // x1
  DataManager_c *v16; // x0
  __int64 v17; // x1
  DataManager_c *v18; // x0
  NetworkManager_c *v19; // x0
  int64_t Time; // x0
  const MethodInfo *v21; // x2
  System_String_o *v22; // x0
  System_Guid_o v23; // [xsp+0h] [xbp-40h] BYREF
  System_Guid_o v24; // 0:x0.16

  if ( (byte_4214FE1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Guid_TypeInfo, method);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_17949/*"dateVer"*/, v6);
    sub_B0D8A4(&StringLiteral_17933/*"dataVer"*/, v7);
    sub_B0D8A4(&StringLiteral_23208/*"verCode"*/, v8);
    sub_B0D8A4(&StringLiteral_16422/*"appVer"*/, v9);
    sub_B0D8A4(&StringLiteral_19448/*"idempotencyKey"*/, v10);
    sub_B0D8A4(&StringLiteral_16577/*"authKey"*/, v11);
    sub_B0D8A4(&StringLiteral_23118/*"userId"*/, v12);
    sub_B0D8A4(&StringLiteral_20244/*"lastAccessTime"*/, v13);
    byte_4214FE1 = 1;
  }
  v23 = (System_Guid_o)0LL;
  Instance = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( *(_QWORD *)(*((_QWORD *)Instance + 23) + 80LL) )
  {
    if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
      j_il2cpp_runtime_class_init_0(Instance);
    if ( !request )
LABEL_35:
      sub_B0D97C(Instance);
    RequestBase__addField_30435648(
      request,
      (System_String_o *)StringLiteral_23118/*"userId"*/,
      NetworkManager_TypeInfo->static_fields->userId,
      0LL);
    RequestBase__addField_30435648(
      request,
      (System_String_o *)StringLiteral_16577/*"authKey"*/,
      NetworkManager_TypeInfo->static_fields->authKey,
      0LL);
  }
  Instance = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !request )
    goto LABEL_35;
  RequestBase__addField_30435648(
    request,
    (System_String_o *)StringLiteral_16422/*"appVer"*/,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  if ( !byte_421507E )
  {
    sub_B0D8A4(&DataManager_TypeInfo, v15);
    byte_421507E = 1;
  }
  v16 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v16 = DataManager_TypeInfo;
  }
  RequestBase__addField(request, (System_String_o *)StringLiteral_17933/*"dataVer"*/, v16->static_fields->dataVersion, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  if ( !byte_421507F )
  {
    sub_B0D8A4(&DataManager_TypeInfo, v17);
    byte_421507F = 1;
  }
  v18 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v18 = DataManager_TypeInfo;
  }
  RequestBase__addField_30435180(request, (System_String_o *)StringLiteral_17949/*"dateVer"*/, v18->static_fields->dateVersion, 0LL);
  v19 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime((const MethodInfo *)v19);
  RequestBase__addField_30435180(request, (System_String_o *)StringLiteral_20244/*"lastAccessTime"*/, Time, 0LL);
  RequestBase__addField_30435648(
    request,
    (System_String_o *)StringLiteral_23208/*"verCode"*/,
    ManagerConfig_TypeInfo->static_fields->verCode,
    0LL);
  if ( (BYTE3(System_Guid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Guid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Guid_TypeInfo);
  v23 = System_Guid__NewGuid(0LL);
  *(_QWORD *)&v24.fields._a = &v23;
  *(_QWORD *)&v24.fields._d = 0LL;
  v22 = System_Guid__ToString(v24, v21);
  RequestBase__addField_30435648(request, (System_String_o *)StringLiteral_19448/*"idempotencyKey"*/, v22, 0LL);
}


void __fastcall NetworkManager__SetDataServerFolderName(System_String_o *folderName, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  NetworkManager_c *v10; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4214FBC & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4214FBC = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !folderName )
    folderName = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->dataServerFolder = folderName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->dataServerFolder,
    (System_Int32_array **)folderName,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall NetworkManager__SetDataServerRedirect(System_String_o *address, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NetworkManager_c *v9; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4214FBE & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214FBE = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->dataServerRedirectAddress = address;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->dataServerRedirectAddress,
    (System_Int32_array **)address,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall NetworkManager__SetDebugSlowConnect(bool flag, const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__SetDeviceInfoField(RequestBase_o *request, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *deviceModel; // x20
  Il2CppObject *operatingSystem; // x0
  System_String_o *v6; // x0

  if ( (byte_4214FE4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18059/*"deviceInfo"*/, method);
    sub_B0D8A4(&StringLiteral_23630/*"{0} / {1}"*/, v3);
    byte_4214FE4 = 1;
  }
  deviceModel = (Il2CppObject *)UnityEngine_SystemInfo__get_deviceModel(0LL);
  operatingSystem = (Il2CppObject *)UnityEngine_SystemInfo__get_operatingSystem(0LL);
  v6 = System_String__Format_43845440((System_String_o *)StringLiteral_23630/*"{0} / {1}"*/, deviceModel, operatingSystem, 0LL);
  if ( !request )
    sub_B0D97C(v6);
  RequestBase__addField_30435648(request, (System_String_o *)StringLiteral_18059/*"deviceInfo"*/, v6, 0LL);
}


void __fastcall NetworkManager__SetFriendCode(
        NetworkManager_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NetworkManager_c *v9; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4214F85 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, friendCode);
    byte_4214F85 = 1;
  }
  if ( friendCode )
  {
    v9 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->friendCode = friendCode;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->friendCode,
      (System_Int32_array **)friendCode,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__SetGameServerRedirect(
        System_String_o *address,
        bool isSecurity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NetworkManager_c *v10; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4214FBD & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, isSecurity);
    byte_4214FBD = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  v10->static_fields->serverRedirectSecurity = isSecurity;
  static_fields = v10->static_fields;
  static_fields->gameServerRedirectAddress = address;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->gameServerRedirectAddress,
    (System_Int32_array **)address,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall NetworkManager__SetSecurityServerSetting(bool security, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_4214FC2 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214FC2 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v3->static_fields->serverSettingSecurity = security;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__SetServerSetting(
        NetworkManager_o *this,
        System_String_o *type,
        bool isSecuritey,
        System_String_o *gameAddress,
        System_String_o *dataAddress,
        System_String_o *webAddress,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  NetworkManager_c *v14; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  NetworkManager_c *v16; // x8
  struct NetworkManager_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct NetworkManager_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct NetworkManager_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x1

  if ( (byte_4214FD4 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, type);
    byte_4214FD4 = 1;
  }
  v14 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v14 = NetworkManager_TypeInfo;
  }
  static_fields = v14->static_fields;
  static_fields->serverSettingType = type;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->serverSettingType,
    (System_Int32_array **)type,
    (System_String_array **)isSecuritey,
    (System_String_array **)gameAddress,
    (System_Boolean_array **)dataAddress,
    (System_Int32_array **)webAddress,
    (System_Int32_array *)method,
    v7);
  v16 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->serverSettingSecurity = isSecuritey;
  v17 = v16->static_fields;
  v17->gameServerSettingAddress = gameAddress;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->gameServerSettingAddress,
    (System_Int32_array **)gameAddress,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = NetworkManager_TypeInfo->static_fields;
  v24->dataServerSettingAddress = dataAddress;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v24->dataServerSettingAddress,
    (System_Int32_array **)dataAddress,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = NetworkManager_TypeInfo->static_fields;
  v31->webServerSettingAddress = webAddress;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v31->webServerSettingAddress,
    (System_Int32_array **)webAddress,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  NetworkManager__SetServerSetting_25515316(this, v38);
}


void __fastcall NetworkManager__SetServerSetting_25515316(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  NetworkManager_c *v4; // x0
  __int16 v5; // w8
  int v6; // w10
  struct NetworkManager_StaticFields **p_static_fields; // x8
  struct NetworkManager_StaticFields *static_fields; // x9
  System_String_o *gameServerRedirectAddress; // x0
  ManagerConfig_c *v10; // x0
  System_Int32_array **v11; // x1
  BattleServantConfConponent_o *p_gameServerAddress; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  NetworkManager_c *IsOnline; // x0
  const MethodInfo *v20; // x2
  int32_t v21; // w1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  NetworkManager_c *v28; // x0
  __int16 v29; // w8
  int v30; // w9
  struct NetworkManager_StaticFields *v31; // x8
  System_Int32_array **webServerRedirectAddress; // x1
  ManagerConfig_c *v33; // x0

  if ( (byte_4214FD5 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_4214FD5 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  v5 = WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v5 & 0x400) != 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v4 = NetworkManager_TypeInfo;
      v5 = WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v6 = v5 & 0x400;
  }
  else
  {
    v6 = 0;
  }
  p_static_fields = &v4->static_fields;
  static_fields = v4->static_fields;
  if ( static_fields->gameServerRedirectAddress )
  {
    if ( v6 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      p_static_fields = &NetworkManager_TypeInfo->static_fields;
      static_fields = NetworkManager_TypeInfo->static_fields;
    }
    static_fields->serverSecurity = static_fields->serverRedirectSecurity;
    gameServerRedirectAddress = (*p_static_fields)->gameServerRedirectAddress;
  }
  else
  {
    if ( v6 && !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    if ( !byte_421507A )
    {
      sub_B0D8A4(&ManagerConfig_TypeInfo, method);
      byte_421507A = 1;
    }
    v10 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v10 = ManagerConfig_TypeInfo;
    }
    NetworkManager_TypeInfo->static_fields->serverSecurity = v10->static_fields->ReleaseNetworkSecurity;
    if ( !byte_421507B )
    {
      sub_B0D8A4(&ManagerConfig_TypeInfo, method);
      v10 = ManagerConfig_TypeInfo;
      byte_421507B = 1;
    }
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ManagerConfig_TypeInfo;
    }
    gameServerRedirectAddress = v10->static_fields->ReleaseGameServerAddress;
  }
  v11 = (System_Int32_array **)System_String__Concat_43849904(
                                 gameServerRedirectAddress,
                                 (System_String_o *)StringLiteral_879/*"/"*/,
                                 0LL);
  p_gameServerAddress = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->gameServerAddress;
  p_gameServerAddress->klass = (BattleServantConfConponent_c *)v11;
  sub_B0D840(p_gameServerAddress, v11, v13, v14, v15, v16, v17, v18);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  IsOnline = (NetworkManager_c *)AssetManager__get_IsOnline(0LL);
  if ( ((unsigned __int8)IsOnline & 1) != 0 )
  {
    IsOnline = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      IsOnline = NetworkManager_TypeInfo;
    }
    if ( IsOnline->static_fields->dataServerRedirectAddress )
      v21 = 3;
    else
      v21 = 1;
  }
  else
  {
    v21 = 0;
  }
  NetworkManager__setupDataServerAddress((NetworkManager_o *)IsOnline, v21, v20);
  v28 = NetworkManager_TypeInfo;
  v29 = WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v29 & 0x400) != 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v28 = NetworkManager_TypeInfo;
      v29 = WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v30 = v29 & 0x400;
  }
  else
  {
    v30 = 0;
  }
  v31 = v28->static_fields;
  webServerRedirectAddress = (System_Int32_array **)v31->webServerRedirectAddress;
  if ( webServerRedirectAddress )
  {
    if ( v30 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v31 = NetworkManager_TypeInfo->static_fields;
      webServerRedirectAddress = (System_Int32_array **)v31->webServerRedirectAddress;
    }
  }
  else
  {
    if ( v30 && !v28->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v28);
    if ( !byte_421507C )
    {
      sub_B0D8A4(&ManagerConfig_TypeInfo, webServerRedirectAddress);
      byte_421507C = 1;
    }
    v33 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v33 = ManagerConfig_TypeInfo;
    }
    v31 = NetworkManager_TypeInfo->static_fields;
    webServerRedirectAddress = (System_Int32_array **)v33->static_fields->ReleaseWebServerAddress;
  }
  v31->webServerAddress = (struct System_String_o *)webServerRedirectAddress;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v31->webServerAddress,
    webServerRedirectAddress,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall NetworkManager__SetServerTimeChkMovie(int64_t serverTimeChkMovie, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_4214F8B & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214F8B = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v3->static_fields->serverTimeChkMovie = serverTimeChkMovie;
}


void __fastcall NetworkManager__SetSignatureField(RequestBase_o *request, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  SignedData_c *v7; // x0
  System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *SIGNED_PACK_QUEUE; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *key; // x20
  System_String_o *v10; // x0
  SignedData_SignedPackData_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4214FE2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v3);
    sub_B0D8A4(&SignedData_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_19448/*"idempotencyKey"*/, v5);
    sub_B0D8A4(&StringLiteral_19449/*"idempotencyKeySignature"*/, v6);
    byte_4214FE2 = 1;
  }
  result = 0LL;
  v7 = SignedData_TypeInfo;
  if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    v7 = SignedData_TypeInfo;
  }
  SIGNED_PACK_QUEUE = v7->static_fields->SIGNED_PACK_QUEUE;
  if ( !SIGNED_PACK_QUEUE )
    goto LABEL_21;
  SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___TryDequeue(SIGNED_PACK_QUEUE, &result, (const MethodInfo_265D164 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
  if ( ((unsigned __int8)SIGNED_PACK_QUEUE & 1) != 0 )
    goto LABEL_13;
  if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(1, 0LL);
  SIGNED_PACK_QUEUE = SignedData_TypeInfo->static_fields->SIGNED_PACK_QUEUE;
  if ( !SIGNED_PACK_QUEUE )
LABEL_21:
    sub_B0D97C(SIGNED_PACK_QUEUE);
  SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData___TryDequeue(SIGNED_PACK_QUEUE, &result, (const MethodInfo_265D164 *)Method_System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__TryDequeue__);
  if ( ((unsigned __int8)SIGNED_PACK_QUEUE & 1) == 0 )
    return;
LABEL_13:
  if ( !result )
    goto LABEL_21;
  key = result->fields.key;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  SIGNED_PACK_QUEUE = (System_Collections_Concurrent_ConcurrentQueue_SignedData_SignedPackData__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(key, 0LL);
  if ( !request )
    goto LABEL_21;
  RequestBase__replaceField_30436608(
    request,
    (System_String_o *)StringLiteral_19448/*"idempotencyKey"*/,
    (System_String_o *)SIGNED_PACK_QUEUE,
    0LL);
  if ( !result )
    goto LABEL_21;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(result->fields.value, 0LL);
  RequestBase__addField_30435648(request, (System_String_o *)StringLiteral_19449/*"idempotencyKeySignature"*/, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__SetSignup(
        NetworkManager_o *this,
        System_String_o *userName,
        int32_t genderType,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NetworkManager_c *v10; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4214F81 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, userName);
    byte_4214F81 = 1;
  }
  if ( userName )
  {
    v10 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->userName = userName;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->userName,
      (System_Int32_array **)userName,
      *(System_String_array ***)&genderType,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    NetworkManager_TypeInfo->static_fields->genderType = genderType;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__SetSignup_25491296(
        NetworkManager_o *this,
        System_String_o *userName,
        int32_t genderType,
        int32_t month,
        int32_t day,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NetworkManager_c *v12; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  NetworkManager_c *v14; // x8

  if ( (byte_4214F82 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, userName);
    byte_4214F82 = 1;
  }
  if ( userName )
  {
    v12 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v12 = NetworkManager_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->userName = userName;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->userName,
      (System_Int32_array **)userName,
      *(System_String_array ***)&genderType,
      *(System_String_array ***)&month,
      *(System_Boolean_array ***)&day,
      (System_Int32_array **)method,
      v6,
      v7);
    v14 = NetworkManager_TypeInfo;
    NetworkManager_TypeInfo->static_fields->genderType = genderType;
    v14->static_fields->month = month;
    v14->static_fields->day = day;
  }
}


void __fastcall NetworkManager__SetUserAgent(
        NetworkManager_o *this,
        System_String_o *userAgent,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NetworkManager_c *v10; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4214F7D & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, userAgent);
    byte_4214F7D = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->userAgent = userAgent;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->userAgent,
    (System_Int32_array **)userAgent,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields._isWaitUserAgent_k__BackingField = 0;
}


void __fastcall NetworkManager__SetWebServerRedirect(System_String_o *address, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NetworkManager_c *v9; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4214FBF & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214FBF = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->webServerRedirectAddress = address;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->webServerRedirectAddress,
    (System_Int32_array **)address,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall NetworkManager__SetupObfuscatedAccountId(
        NetworkManager_o *this,
        System_String_o *loginResultStr,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  bool IsObfuscatedAccountIdCached; // w0
  TerminalPramsManager_ClearData_o *v7; // x0
  System_String_o *questClearCostumeGetInfo; // x19

  if ( (byte_4214FEF & 1) == 0 )
  {
    sub_B0D8A4(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___, loginResultStr);
    sub_B0D8A4(&JsonManager_TypeInfo, v4);
    sub_B0D8A4(&PurchaseBehaviour_TypeInfo, v5);
    byte_4214FEF = 1;
  }
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  IsObfuscatedAccountIdCached = PurchaseBehaviour__IsObfuscatedAccountIdCached(0LL);
  if ( loginResultStr && !IsObfuscatedAccountIdCached )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v7 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
           (Il2CppObject *)loginResultStr,
           (const MethodInfo_1B68238 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
    if ( v7 )
    {
      questClearCostumeGetInfo = (System_String_o *)v7->fields.questClearCostumeGetInfo;
      if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      }
      PurchaseBehaviour__SetCachedObfuscatedAccountId(questClearCostumeGetInfo, 0LL);
    }
  }
}


void __fastcall NetworkManager__Start(NetworkManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = NetworkManager__TimeUpdate(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall NetworkManager__SwitchingDebugSlowConnect(const MethodInfo *method)
{
  ;
}


int32_t __fastcall NetworkManager__SyncAuth(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int v8; // w28
  const MethodInfo *v9; // x1
  System_String_o *v10; // x26
  const MethodInfo *v11; // x1
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  System_String_o *AuthMd5; // x26
  NetworkManager_c *v17; // x0
  System_String_o *String; // x24
  const MethodInfo *v19; // x1
  System_String_o *AuthFileName; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  System_String_o *v25; // x0
  const MethodInfo *v26; // x1
  System_String_o *v27; // x25
  System_String_o *v28; // x25
  const MethodInfo *v29; // x1
  System_String_o *v30; // x0
  const MethodInfo *v31; // x1
  System_String_o *v32; // x0
  const MethodInfo *v33; // x2
  NetworkManager_c *v34; // x0
  const MethodInfo *v35; // x1
  System_String_o *v36; // x24
  const MethodInfo *v37; // x1
  System_String_o *v38; // x0
  NetworkManager_c *v39; // x0
  System_String_o *OldAuthFileName; // x0
  const MethodInfo *v41; // x2
  NetworkManager_c *v42; // x0
  System_String_o *v43; // x24
  const MethodInfo *v44; // x1
  System_String_o *v45; // x0
  NetworkManager_o *v46; // x0
  const MethodInfo *v47; // x1
  _BOOL8 OldSignup; // x0
  const MethodInfo *v49; // x1
  NetworkManager_c *v50; // x0
  System_String_o *OldSignupFileName; // x0
  AccountingManager_o *Instance; // x0
  AccountingManager_o *v53; // x0
  System_String_o *OldPaymentFileName; // x0
  System_String_o *OldUnityPersistentDataPath; // x0
  System_String_o *v56; // x26
  System_String_o *FileNameNotConverted; // x1
  System_String_o *v58; // x0
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x1
  System_String_o *v61; // x24
  const MethodInfo *v62; // x1
  System_String_o *v63; // x0

  if ( (byte_4214F91 & 1) == 0 )
  {
    sub_B0D8A4(&AccountingManager_TypeInfo, method);
    sub_B0D8A4(&AndroidUtil_TypeInfo, v2);
    sub_B0D8A4(&DatFileName_TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AccountingManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4214F91 = 1;
  }
  v8 = -10;
  while ( 1 )
  {
    v17 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v17 = NetworkManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v17->static_fields->AUTHMD5_KEY_TYPE,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL);
    AuthFileName = NetworkManager__getAuthFileName(0, v19);
    AuthMd5 = NetworkManager__LoadAuthMd5((NetworkManager_o *)AuthFileName, AuthFileName, v21);
    v23 = NetworkManager__getAuthFileName(1, v22);
    v25 = NetworkManager__LoadAuthMd5((NetworkManager_o *)v23, v23, v24);
    v27 = v25;
    if ( AuthMd5 )
    {
      if ( !v25 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v28 = NetworkManager__getAuthFileName(0, v26);
        v30 = NetworkManager__getAuthFileName(1, v29);
        System_IO_File__Copy_43051052(v28, v30, 1, 0LL);
        v32 = NetworkManager__getAuthFileName(1, v31);
        v27 = NetworkManager__LoadAuthMd5((NetworkManager_o *)v32, v32, v33);
      }
      goto LABEL_20;
    }
    v39 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    OldAuthFileName = NetworkManager__getOldAuthFileName((const MethodInfo *)v39);
    if ( NetworkManager__LoadAuthMd5((NetworkManager_o *)OldAuthFileName, OldAuthFileName, v41) )
    {
      v42 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v43 = NetworkManager__getOldAuthFileName((const MethodInfo *)v42);
      v45 = NetworkManager__getAuthFileName(0, v44);
      System_IO_File__Copy_43051052(v43, v45, 1, 0LL);
      OldSignup = NetworkManager__ReadOldSignup(v46, v47);
      if ( OldSignup )
      {
        NetworkManager__WriteSignup((NetworkManager_o *)OldSignup, v49);
        v50 = NetworkManager_TypeInfo;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        OldSignupFileName = NetworkManager__getOldSignupFileName((const MethodInfo *)v50);
        System_IO_File__Delete(OldSignupFileName, 0LL);
      }
      Instance = (AccountingManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
      if ( !Instance )
        sub_B0D97C(0LL);
      if ( AccountingManager__ReadOldPayment(Instance, 0LL) )
      {
        v53 = (AccountingManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
        if ( !v53 )
          sub_B0D97C(0LL);
        AccountingManager__WritePayment(v53, 0LL);
        if ( (BYTE3(AccountingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AccountingManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
        }
        OldPaymentFileName = AccountingManager__GetOldPaymentFileName(0LL);
        System_IO_File__Delete(OldPaymentFileName, 0LL);
      }
      goto LABEL_69;
    }
    if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
    OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
    v56 = System_String__Concat_43849904(OldUnityPersistentDataPath, (System_String_o *)StringLiteral_879/*"/"*/, 0LL);
    if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    FileNameNotConverted = DatFileName__getFileNameNotConverted(16, 0LL);
    v58 = System_String__Concat_43849904(v56, FileNameNotConverted, 0LL);
    if ( NetworkManager__LoadAuthMd5((NetworkManager_o *)v58, v58, v59) )
    {
      if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AndroidUtil_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
      }
      AndroidUtil__TransitionDatFile(16, 0LL);
      AndroidUtil__TransitionDatFile(18, 0LL);
      AndroidUtil__TransitionDatFile(21, 0LL);
      goto LABEL_69;
    }
    if ( !v27 )
      return 1;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v10 = NetworkManager__getAuthFileName(1, v9);
    v12 = NetworkManager__getAuthFileName(0, v11);
    System_IO_File__Copy_43051052(v10, v12, 1, 0LL);
    v14 = NetworkManager__getAuthFileName(0, v13);
    AuthMd5 = NetworkManager__LoadAuthMd5((NetworkManager_o *)v14, v14, v15);
LABEL_20:
    if ( System_String__op_Equality(AuthMd5, v27, 0LL) && System_String__op_Equality(AuthMd5, String, 0LL) )
      return 0;
    if ( System_String__op_Equality(AuthMd5, v27, 0LL) && System_String__op_Inequality(AuthMd5, String, 0LL) )
    {
      v34 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v34 = NetworkManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v34->static_fields->AUTHMD5_KEY_TYPE, AuthMd5, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    else if ( System_String__op_Inequality(AuthMd5, v27, 0LL) )
    {
      if ( System_String__op_Equality(AuthMd5, String, 0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v36 = NetworkManager__getAuthFileName(0, v35);
        v38 = NetworkManager__getAuthFileName(1, v37);
        System_IO_File__Copy_43051052(v36, v38, 1, 0LL);
      }
      else
      {
        if ( !System_String__op_Equality(v27, String, 0LL) )
          return 2;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v61 = NetworkManager__getAuthFileName(1, v60);
        v63 = NetworkManager__getAuthFileName(0, v62);
        System_IO_File__Copy_43051052(v61, v63, 1, 0LL);
      }
    }
LABEL_69:
    if ( !++v8 )
      return 0;
  }
}


void __fastcall NetworkManager__TerminalStart(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_4214FAE & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_B0D8A4(&TopHomeRequest_TypeInfo, v3);
    byte_4214FAE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__InitConnect(Instance, 0LL);
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate(0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_9:
    sub_B0D97C(Instance);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__TimeUpdate(
        NetworkManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  NetworkManager__TimeUpdate_d__81_o *v3; // x19

  if ( (byte_4214F7A & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager__TimeUpdate_d__81_TypeInfo, method);
    byte_4214F7A = 1;
  }
  v3 = (NetworkManager__TimeUpdate_d__81_o *)sub_B0D974(NetworkManager__TimeUpdate_d__81_TypeInfo, method, v2);
  NetworkManager__TimeUpdate_d__81___ctor(v3, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__WarningDialog(
        NetworkManager_o *this,
        System_String_o *errorTitle,
        System_String_o *errorDetail,
        System_String_o *errorUrl,
        int32_t errorType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x20
  CommonUI_o *Instance; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  ErrorDialog_ClickDelegate_o *v25; // x24
  __int64 v26; // x0
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]

  if ( (byte_4214FA5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, errorTitle);
    sub_B0D8A4(&ErrorDialog_ClickDelegate_TypeInfo, v14);
    sub_B0D8A4(&Method_NetworkManager_EndErrorDialog__, v15);
    sub_B0D8A4(&Method_NetworkManager_EndErrorWebView__, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B0D8A4(&WebViewManager_TypeInfo, v18);
    byte_4214FA5 = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.errorCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)errorDetail,
    (System_String_array **)errorUrl,
    *(System_Boolean_array ***)&errorType,
    (System_Int32_array **)callback,
    (System_Int32_array *)method,
    v7);
  if ( errorUrl )
  {
    v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0LL);
    if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WebViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    }
    WebViewManager__OpenView(errorTitle, errorUrl, v21, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v23, v24);
    ErrorDialog_ClickDelegate___ctor(v25, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0LL);
    if ( !Instance )
      sub_B0D97C(v26);
    effectDistance.fields.value = 0LL;
    *(_DWORD *)&effectDistance.fields.has_value = 0;
    CommonUI__OpenWarningDialog(Instance, errorTitle, errorDetail, v25, errorType != 1, 0, -1.0, 1, effectDistance, 0LL);
  }
}


void __fastcall NetworkManager__WriteAuth(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0
  NetworkManager_c *v4; // x0
  System_String_o *AuthFileName; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  System_String_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4214F93 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v2);
    byte_4214F93 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v4 = NetworkManager_TypeInfo;
    }
    if ( v4->static_fields->userId )
    {
      if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v4);
      AuthFileName = NetworkManager__getAuthFileName(0, method);
      NetworkManager__WriteAuthFile((NetworkManager_o *)AuthFileName, AuthFileName, v6);
      v8 = NetworkManager__getAuthFileName(1, v7);
      NetworkManager__WriteAuthFile((NetworkManager_o *)v8, v8, v9);
    }
  }
}


bool __fastcall NetworkManager__WriteAuthFile(NetworkManager_o *this, System_String_o *fname, const MethodInfo *method)
{
  __int64 v4; // x1
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
  System_IO_Stream_o *v19; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  System_IO_BinaryWriter_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v25; // x24
  ManagerConfig_c *v26; // x0
  NetworkManager_c *v27; // x0
  System_String_o *v28; // x24
  System_String_o *v29; // x0
  System_String_o *v30; // x24
  int v31; // w28
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0
  System_String_o *v36; // x21
  NetworkManager_c *v37; // x0
  _DWORD v39[3]; // [xsp+10h] [xbp-70h]
  int v40; // [xsp+1Ch] [xbp-64h]
  int v41; // [xsp+28h] [xbp-58h]

  if ( (byte_4214F94 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, fname);
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, v8);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v9);
    sub_B0D8A4(&JsonManager_TypeInfo, v10);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_23078/*"userCreateServer"*/, v13);
    sub_B0D8A4(&StringLiteral_12633/*"SaveDataVer"*/, v14);
    sub_B0D8A4(&StringLiteral_16577/*"authKey"*/, v15);
    sub_B0D8A4(&StringLiteral_22019/*"secretKey"*/, v16);
    sub_B0D8A4(&StringLiteral_23118/*"userId"*/, v17);
    sub_B0D8A4(&StringLiteral_1/*""*/, v18);
    byte_4214F94 = 1;
  }
  v41 = 0;
  v40 = 0;
  v19 = (System_IO_Stream_o *)System_IO_File__OpenWrite(fname, 0LL);
  v22 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v20, v21);
  System_IO_BinaryWriter___ctor_39036700(v22, v19, 0LL);
  v25 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                        v23,
                                                                                        v24);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v25,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v26 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !v25 )
    sub_B0D97C(v26);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v25,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_12633/*"SaveDataVer"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)ManagerConfig_TypeInfo->static_fields->SaveDataVer,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v27 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v27 = NetworkManager_TypeInfo;
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v25,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23078/*"userCreateServer"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v27->static_fields->gameServerAddress,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v25,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23118/*"userId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->userId,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v25,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16577/*"authKey"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->authKey,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v25,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22019/*"secretKey"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->secretKey,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v28 = JsonManager__toJson((Il2CppObject *)v25, 0, 0, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v29 = CatAndMouseGame__CatGame1(v28, 0, 0LL);
  v30 = v29;
  if ( !v22 )
    sub_B0D97C(v29);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v22->klass->vtable._22_Write.method)(
    v22,
    v29,
    v22->klass[1]._1.image);
  v39[0] = 150;
  v31 = ++v40;
  klass = v22->klass;
  if ( *(_WORD *)&v22->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v35 = sub_AA67A0(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v35)(v22, *(_QWORD *)(v35 + 8));
  if ( v31 && v39[v31 - 1] == 150 )
    v40 = v31 - 1;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  v36 = EncryptedPlayerPrefs__Md5(v30, 0LL);
  v37 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v37 = NetworkManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v37->static_fields->AUTHMD5_KEY_TYPE, v36, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  return 1;
}


void __fastcall NetworkManager__WriteFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  NetworkManager_c *v6; // x0
  System_String_o *FriendCodeFileName; // x0
  System_IO_Stream_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_IO_BinaryWriter_o *v11; // x19
  long double v12; // q0
  NetworkManager_c *v13; // x0
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0

  if ( (byte_4214F86 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, method);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    byte_4214F86 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v6 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    if ( v6->static_fields->userId )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v6);
      FriendCodeFileName = NetworkManager__getFriendCodeFileName((const MethodInfo *)v6);
      v8 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FriendCodeFileName, 0LL);
      v11 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v9, v10);
      System_IO_BinaryWriter___ctor_39036700(v11, v8, 0LL);
      v13 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !v11 )
        sub_B0D97C(v13);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v11->klass->vtable._22_Write.method)(
        v11,
        NetworkManager_TypeInfo->static_fields->friendCode,
        v11->klass[1]._1.image,
        v12);
      klass = v11->klass;
      if ( *(_WORD *)&v11->klass->_2.bitflags1 )
      {
        v15 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v15;
          p_offset += 4;
          if ( v15 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
            goto LABEL_23;
        }
        v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_23:
        v17 = sub_AA67A0(v11, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v17)(v11, *(_QWORD *)(v17 + 8));
    }
  }
}


void __fastcall NetworkManager__WriteServerSetting(NetworkManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__WriteSignup(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  NetworkManager_c *v6; // x0
  System_String_o *SignupFileName; // x0
  System_IO_Stream_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_IO_BinaryWriter_o *v11; // x19
  long double v12; // q0
  NetworkManager_c *v13; // x0
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0

  if ( (byte_4214F83 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, method);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    byte_4214F83 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v6 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    if ( v6->static_fields->userId )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v6);
      SignupFileName = NetworkManager__getSignupFileName((const MethodInfo *)v6);
      v8 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SignupFileName, 0LL);
      v11 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v9, v10);
      System_IO_BinaryWriter___ctor_39036700(v11, v8, 0LL);
      v13 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !v11 )
        sub_B0D97C(v13);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v11->klass->vtable._22_Write.method)(
        v11,
        NetworkManager_TypeInfo->static_fields->userName,
        v11->klass[1]._1.image,
        v12);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._17_Write.method)(
        v11,
        (unsigned int)NetworkManager_TypeInfo->static_fields->genderType,
        v11->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._17_Write.method)(
        v11,
        (unsigned int)NetworkManager_TypeInfo->static_fields->month,
        v11->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._17_Write.method)(
        v11,
        (unsigned int)NetworkManager_TypeInfo->static_fields->day,
        v11->klass->vtable._18_Write.methodPtr);
      klass = v11->klass;
      if ( *(_WORD *)&v11->klass->_2.bitflags1 )
      {
        v15 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v15;
          p_offset += 4;
          if ( v15 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
            goto LABEL_23;
        }
        v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_23:
        v17 = sub_AA67A0(v11, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v17)(v11, *(_QWORD *)(v17 + 8));
    }
  }
}


void __fastcall NetworkManager___RequestCR_b__212_0(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  NetworkManager__OnBackgroundErrorCommunication(this, this->fields.communicationWork, 0LL, 1, v2);
}


System_String_o *__fastcall NetworkManager__getAuthFileName(bool isSlave, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *DatFileSavePath; // x19
  int32_t v6; // w0
  System_String_o *FileName; // x2

  if ( (byte_4214FB3 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, method);
    sub_B0D8A4(&DatFileName_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v4);
    byte_4214FB3 = 1;
  }
  if ( isSlave )
  {
    if ( (WORD1(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AndroidUtil_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
    }
    DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
    if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v6 = 17;
  }
  else
  {
    if ( (WORD1(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AndroidUtil_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
    }
    DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
    if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v6 = 16;
  }
  FileName = DatFileName__getFileName(v6, 0LL);
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall NetworkManager__getBaseMockUrl(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4214FCB & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214FCB = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->gameServerAddress;
}


System_String_o *__fastcall NetworkManager__getBaseUrl(bool isSecurity, const MethodInfo *method)
{
  __int64 v2; // x1
  NetworkManager_c *v3; // x0

  if ( (byte_4214FCA & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_19299/*"https://"*/, v2);
    byte_4214FCA = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_43849904(
           (System_String_o *)StringLiteral_19299/*"https://"*/,
           v3->static_fields->gameServerAddress,
           0LL);
}


System_String_o *__fastcall NetworkManager__getDataUrl(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4214FCC & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214FCC = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->dataServerAddress;
}


System_DateTime_o __fastcall NetworkManager__getDateTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  NetworkManager_c *v3; // x8
  uint64_t dateData; // [xsp+8h] [xbp-8h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_4214F99 & 1) == 0 )
  {
    sub_B0D8A4(&System_DateTime_TypeInfo, v1);
    sub_B0D8A4(&NetworkManager_TypeInfo, v2);
    byte_4214F99 = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  dateData = System_DateTime__get_Now(0LL).fields.dateData;
  v6.fields.dateData = (uint64_t)&dateData;
  dateData = System_DateTime__ToUniversalTime(v6, 0LL).fields.dateData;
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v7.fields.dateData = (uint64_t)&dateData;
  return System_DateTime__AddSeconds(v7, (double)v3->static_fields->serverOffsetTime, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getDateTime_25504560(int64_t t, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_4214F9A & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214F9A = 1;
  }
  dateData = 0LL;
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v6.fields.dateData = (uint64_t)&v3->static_fields->dtUnixEpoch;
  dateData = System_DateTime__AddSeconds(v6, (double)t, 0LL).fields.dateData;
  v7.fields.dateData = (uint64_t)&dateData;
  return System_DateTime__ToUniversalTime(v7, 0LL);
}


System_String_o *__fastcall NetworkManager__getFriendCodeFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4214FB7 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&DatFileName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_4214FB7 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(20, 0LL);
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getLocalDateTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  NetworkManager_c *v3; // x8
  uint64_t dateData; // [xsp+8h] [xbp-8h] BYREF
  System_DateTime_o v6; // 0:x0.8

  if ( (byte_4214F9B & 1) == 0 )
  {
    sub_B0D8A4(&System_DateTime_TypeInfo, v1);
    sub_B0D8A4(&NetworkManager_TypeInfo, v2);
    byte_4214F9B = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  dateData = System_DateTime__get_Now(0LL).fields.dateData;
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v6.fields.dateData = (uint64_t)&dateData;
  return System_DateTime__AddSeconds(v6, (double)v3->static_fields->serverOffsetTime, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getLocalDateTime_25504704(int64_t t, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_4214F9C & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214F9C = 1;
  }
  dateData = 0LL;
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v6.fields.dateData = (uint64_t)&v3->static_fields->dtUnixEpoch;
  dateData = System_DateTime__AddSeconds(v6, (double)t, 0LL).fields.dateData;
  v7.fields.dateData = (uint64_t)&dateData;
  return System_DateTime__ToLocalTime(v7, 0LL);
}


int64_t __fastcall NetworkManager__getLocalTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  const MethodInfo *v3; // x1
  System_DateTime_o v5; // 0:x0.8

  if ( (byte_4214F97 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214F97 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v5.fields.dateData = NetworkManager__getLocalDateTime((const MethodInfo *)v2).fields.dateData;
  return NetworkManager__getTime_25503776(v5, v3);
}


System_String_o *__fastcall NetworkManager__getMockFile(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  UnityEngine_Object_o *v6; // x0
  __int64 v7; // x10
  UnityEngine_Object_o *v8; // x19
  _BOOL8 v9; // x0
  System_String_o *text; // x20

  if ( (byte_4214FCF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_TextAsset_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_9177/*"Mock/"*/, v4);
    byte_4214FCF = 1;
  }
  if ( !path )
    return 0LL;
  v5 = System_String__Concat_43849904((System_String_o *)StringLiteral_9177/*"Mock/"*/, path, 0LL);
  v6 = UnityEngine_Resources__Load(v5, 0LL);
  if ( v6
    && (v7 = *(&UnityEngine_TextAsset_TypeInfo->_2.bitflags2 + 1), *(&v6->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
  {
    v8 = (UnityEngine_TextAsset_c *)v6->klass->_2.typeHierarchy[v7 - 1] == UnityEngine_TextAsset_TypeInfo ? v6 : 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( !v9 )
    return 0LL;
  if ( !v8 )
    sub_B0D97C(v9);
  text = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v8, 0LL);
  UnityEngine_Resources__UnloadAsset(v8, 0LL);
  return text;
}


int64_t __fastcall NetworkManager__getNextDayStartTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  int64_t Time; // x19
  int32_t Hour; // w20
  int32_t Minute; // w21
  const MethodInfo *dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x0.8

  if ( (byte_4214FA2 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214FA2 = 1;
  }
  dateData = 0LL;
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = (const MethodInfo *)NetworkManager__getServerDateTime((const MethodInfo *)v2).fields.dateData;
  Time = NetworkManager__getTime(dateData);
  v8.fields.dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v8, 0LL);
  v9.fields.dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v9, 0LL);
  v10.fields.dateData = (uint64_t)&dateData;
  return Time + 86400 - (System_DateTime__get_Second(v10, 0LL) + 60 * (Minute + 60 * Hour));
}


int64_t __fastcall NetworkManager__getNextDayTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  NetworkManager_c *v3; // x0
  int32_t Year; // w19
  int Month; // w20
  int v6; // w21
  const MethodInfo *v7; // x1
  System_DateTime_o dateTime; // [xsp+10h] [xbp-30h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8

  if ( (byte_4214FA0 & 1) == 0 )
  {
    sub_B0D8A4(&System_DateTime_TypeInfo, v1);
    sub_B0D8A4(&NetworkManager_TypeInfo, v2);
    byte_4214FA0 = 1;
  }
  dateData = 0LL;
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime((const MethodInfo *)v3).fields.dateData;
  v11.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v11, 0LL);
  v12.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v12, 0LL);
  v13.fields.dateData = (uint64_t)&dateData;
  v6 = System_DateTime__get_Day(v13, 0LL) + 1;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  if ( v6 > System_DateTime__DaysInMonth(Year, Month, 0LL) )
  {
    if ( Month >= 12 )
    {
      ++Year;
      v6 = 1;
      Month = 1;
    }
    else
    {
      ++Month;
      v6 = 1;
    }
  }
  v14.fields.dateData = (uint64_t)&dateTime;
  dateTime.fields.dateData = 0LL;
  System_DateTime___ctor_15034332(v14, Year, Month, v6, 0, 0, 0, 1, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v15.fields.dateData = dateTime.fields.dateData;
  return NetworkManager__getTime_25503776(v15, v7);
}


int64_t __fastcall NetworkManager__getNextDayTime_25505540(int32_t hour, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  int64_t Time; // x20
  bool v5; // cc
  int64_t v6; // x22
  int32_t v7; // w20
  int32_t Minute; // w21
  const MethodInfo *dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8

  if ( (byte_4214FA1 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214FA1 = 1;
  }
  dateData = 0LL;
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = (const MethodInfo *)NetworkManager__getServerDateTime((const MethodInfo *)v3).fields.dateData;
  Time = NetworkManager__getTime(dateData);
  v11.fields.dateData = (uint64_t)&dateData;
  v5 = System_DateTime__get_Hour(v11, 0LL) < hour;
  v12.fields.dateData = (uint64_t)&dateData;
  if ( v5 )
    v6 = Time;
  else
    v6 = Time + 86400;
  v7 = System_DateTime__get_Hour(v12, 0LL);
  v13.fields.dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v13, 0LL);
  v14.fields.dateData = (uint64_t)&dateData;
  return v6 - (System_DateTime__get_Second(v14, 0LL) + 60 * (Minute + 60 * (v7 - hour)));
}


int64_t __fastcall NetworkManager__getNextMonthTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  int32_t Year; // w19
  int32_t Month; // w0
  int32_t v5; // w2
  int32_t v6; // w1
  const MethodInfo *v7; // x1
  System_DateTime_o dateTime; // [xsp+10h] [xbp-20h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8

  if ( (byte_4214FA3 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214FA3 = 1;
  }
  dateData = 0LL;
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime((const MethodInfo *)v2).fields.dateData;
  v11.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v11, 0LL);
  v12.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v12, 0LL);
  if ( Month < 12 )
    v5 = Month + 1;
  else
    v5 = 1;
  if ( Month <= 11 )
    v6 = Year;
  else
    v6 = Year + 1;
  v13.fields.dateData = (uint64_t)&dateTime;
  dateTime.fields.dateData = 0LL;
  System_DateTime___ctor_15034332(v13, v6, v5, 1, 0, 0, 0, 1, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v14.fields.dateData = dateTime.fields.dateData;
  return NetworkManager__getTime_25503776(v14, v7);
}


int64_t __fastcall NetworkManager__getNextMonthTime_25506176(int32_t day, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t Year; // w20
  int Month; // w21
  const MethodInfo *v6; // x1
  System_DateTime_o dateTime; // [xsp+10h] [xbp-30h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v10; // 0:x0.8
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8

  if ( (byte_4214FA4 & 1) == 0 )
  {
    sub_B0D8A4(&System_DateTime_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    byte_4214FA4 = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  dateData = System_DateTime__get_Now(0LL).fields.dateData;
  v10.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v10, 0LL);
  v11.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v11, 0LL);
  v12.fields.dateData = (uint64_t)&dateData;
  if ( System_DateTime__get_Day(v12, 0LL) < day )
  {
    if ( Month >= 12 )
    {
      ++Year;
      Month = 1;
    }
    else
    {
      ++Month;
    }
  }
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  if ( System_DateTime__DaysInMonth(Year, Month, 0LL) < day )
  {
    if ( Month >= 12 )
    {
      ++Year;
      Month = 1;
    }
    else
    {
      ++Month;
    }
    day = 1;
  }
  v13.fields.dateData = (uint64_t)&dateTime;
  dateTime.fields.dateData = 0LL;
  System_DateTime___ctor_15034332(v13, Year, Month, day, 0, 0, 0, 1, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v14.fields.dateData = dateTime.fields.dateData;
  return NetworkManager__getTime_25503776(v14, v6);
}


System_String_o *__fastcall NetworkManager__getOldAuthFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4214FB2 & 1) == 0 )
  {
    sub_B0D8A4(&DatFileName_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v2);
    byte_4214FB2 = 1;
  }
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(16, 0LL);
  return System_String__Concat_43852188(temporaryCachePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall NetworkManager__getOldSignupFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4214FB4 & 1) == 0 )
  {
    sub_B0D8A4(&DatFileName_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v2);
    byte_4214FB4 = 1;
  }
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0LL);
  return System_String__Concat_43852188(temporaryCachePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


WarBoardWallAttackRequest_o *__fastcall NetworkManager__getRequest_WarBoardWallAttackRequest_(
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo_2049D98 *method)
{
  __int64 v4; // x0
  WarBoardWallAttackRequest_o *v5; // x19
  BattleServantConfConponent_o *v6; // x20
  System_Delegate_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Delegate_o *v14; // x21
  System_Int32_array **v15; // x1

  if ( (byte_4219F19 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, method);
    byte_4219F19 = 1;
  }
  v4 = ((__int64 (*)(void))method->rgctx_data->_0_System_Activator_CreateInstance_T_->methodPointer)();
  if ( !v4 )
    sub_B0D97C(0LL);
  v5 = (WarBoardWallAttackRequest_o *)v4;
  v6 = (BattleServantConfConponent_o *)(v4 + 16);
  v7 = System_Delegate__Combine(*(System_Delegate_o **)(v4 + 16), (System_Delegate_o *)func, 0LL);
  if ( !v7 )
    goto LABEL_7;
  v14 = v7;
  v15 = (System_Int32_array **)sub_B0D964(v7, NetworkManager_ResultCallbackFunc_TypeInfo);
  if ( !v15 )
  {
    sub_B0DC70(v14);
LABEL_7:
    v15 = 0LL;
  }
  v5->fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)v15;
  sub_B0D840(v6, v15, v8, v9, v10, v11, v12, v13);
  return v5;
}


System_DateTime_o __fastcall NetworkManager__getServerDateTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  NetworkManager_c *v3; // x8
  System_TimeSpan_o value; // [xsp+8h] [xbp-18h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-8h] BYREF
  System_DateTime_o v7; // 0:x0.8
  System_DateTime_o v8; // 0:x0.8
  System_TimeSpan_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x0.8
  System_TimeSpan_o v12; // 0:x1.8

  if ( (byte_4214F9D & 1) == 0 )
  {
    sub_B0D8A4(&System_DateTime_TypeInfo, v1);
    sub_B0D8A4(&NetworkManager_TypeInfo, v2);
    byte_4214F9D = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  dateData = System_DateTime__get_Now(0LL).fields.dateData;
  v7.fields.dateData = (uint64_t)&dateData;
  dateData = System_DateTime__ToUniversalTime(v7, 0LL).fields.dateData;
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v8.fields.dateData = (uint64_t)&dateData;
  dateData = System_DateTime__AddSeconds(v8, (double)v3->static_fields->serverOffsetTime, 0LL).fields.dateData;
  v9.fields._ticks = (int64_t)&value;
  value.fields._ticks = 0LL;
  System_TimeSpan___ctor_41497848(v9, 9, 0, 0, 0LL);
  v12.fields._ticks = value.fields._ticks;
  v10.fields.dateData = (uint64_t)&dateData;
  return System_DateTime__Add(v10, v12, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getServerDateTime_25504848(int64_t t, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  System_TimeSpan_o value; // [xsp+0h] [xbp-20h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v7; // 0:x0.8
  System_TimeSpan_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8
  System_TimeSpan_o v11; // 0:x1.8

  if ( (byte_4214F9E & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214F9E = 1;
  }
  dateData = 0LL;
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v7.fields.dateData = (uint64_t)&v3->static_fields->dtUnixEpoch;
  value.fields._ticks = 0LL;
  dateData = System_DateTime__AddSeconds(v7, (double)t, 0LL).fields.dateData;
  v8.fields._ticks = (int64_t)&value;
  System_TimeSpan___ctor_41497848(v8, 9, 0, 0, 0LL);
  v11.fields._ticks = value.fields._ticks;
  v9.fields.dateData = (uint64_t)&dateData;
  return System_DateTime__Add(v9, v11, 0LL);
}


System_String_o *__fastcall NetworkManager__getServerSettingFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4214FB6 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&DatFileName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_4214FB6 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(19, 0LL);
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


int64_t __fastcall NetworkManager__getServerTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  const MethodInfo *v3; // x1
  System_DateTime_o v5; // 0:x0.8

  if ( (byte_4214F98 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214F98 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v5.fields.dateData = NetworkManager__getServerDateTime((const MethodInfo *)v2).fields.dateData;
  return NetworkManager__getTime_25503776(v5, v3);
}


System_String_o *__fastcall NetworkManager__getSignupFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4214FB5 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&DatFileName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_4214FB5 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0LL);
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


void __fastcall NetworkManager__getStoreUrl(
        System_String_o *storeName,
        System_String_o *id,
        NetworkManager_StoreCallbackFunc_o *callback,
        const MethodInfo *method)
{
  NetworkManager_o *Instance; // x0
  const MethodInfo *v8; // x4
  UnityEngine_MonoBehaviour_o *v9; // x22
  System_Collections_IEnumerator_o *updated; // x1

  if ( (byte_4214FCE & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, id);
    byte_4214FCE = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  v9 = (UnityEngine_MonoBehaviour_o *)Instance;
  updated = NetworkManager__RequestApplicationUpdateCR(Instance, storeName, id, callback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128(v9, updated, 0LL);
}


System_String_o *__fastcall NetworkManager__getSummonDetailUrl(int32_t gachaId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_Object_array *v9; // x20
  System_String_o *BaseUrl; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  const MethodInfo *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x19
  __int64 v48; // x0
  __int64 v49; // x0
  int32_t v50; // [xsp+Ch] [xbp-24h] BYREF
  int64_t UserId; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4214FDB & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&long_TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&object___TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_462/*"&gachaId="*/, v6);
    sub_B0D8A4(&StringLiteral_23343/*"webview/summonDetail?userId="*/, v7);
    byte_4214FDB = 1;
  }
  v9 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 5LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(0, v8);
  if ( !v9 )
    sub_B0D97C(BaseUrl);
  v17 = (System_Int32_array **)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_B0D964(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_28;
  }
  if ( !v9->max_length )
    goto LABEL_27;
  v9->m_Items[0] = (Il2CppObject *)v17;
  sub_B0D840((BattleServantConfConponent_o *)v9->m_Items, v17, v11, v12, v13, v14, v15, v16);
  BaseUrl = (System_String_o *)StringLiteral_23343/*"webview/summonDetail?userId="*/;
  if ( StringLiteral_23343/*"webview/summonDetail?userId="*/ )
  {
    BaseUrl = (System_String_o *)sub_B0D964(StringLiteral_23343/*"webview/summonDetail?userId="*/, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_28;
    v24 = (System_Int32_array **)StringLiteral_23343/*"webview/summonDetail?userId="*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_27;
  v9->m_Items[1] = (Il2CppObject *)v24;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
  UserId = NetworkManager__get_UserId(v25);
  BaseUrl = (System_String_o *)j_il2cpp_value_box_0(long_TypeInfo, &UserId);
  v32 = (System_Int32_array **)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_B0D964(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_28;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_27;
  v9->m_Items[2] = (Il2CppObject *)v32;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  BaseUrl = (System_String_o *)StringLiteral_462/*"&gachaId="*/;
  if ( StringLiteral_462/*"&gachaId="*/ )
  {
    BaseUrl = (System_String_o *)sub_B0D964(StringLiteral_462/*"&gachaId="*/, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_28;
    v39 = (System_Int32_array **)StringLiteral_462/*"&gachaId="*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_27;
  v9->m_Items[3] = (Il2CppObject *)v39;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  v50 = gachaId;
  BaseUrl = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v46 = (System_Int32_array **)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_B0D964(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
    {
LABEL_28:
      v49 = sub_B0D99C(BaseUrl);
      sub_B0D948(v49, 0LL);
    }
  }
  if ( v9->max_length <= 4 )
  {
LABEL_27:
    v48 = sub_B0D9A8(BaseUrl);
    sub_B0D948(v48, 0LL);
  }
  v9->m_Items[4] = (Il2CppObject *)v46;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  return System_String__Concat_43859688(v9, 0LL);
}


int64_t __fastcall NetworkManager__getTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x8
  const MethodInfo *v3; // x1
  int64_t Time_25503776; // x0
  System_DateTime_o v6; // 0:x0.8

  if ( (byte_4214F95 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214F95 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  if ( (v2->static_fields->nowTime & 0x8000000000000000LL) != 0 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v2);
    v6.fields.dateData = NetworkManager__getDateTime(method).fields.dateData;
    Time_25503776 = NetworkManager__getTime_25503776(v6, v3);
    v2 = NetworkManager_TypeInfo;
    NetworkManager_TypeInfo->static_fields->nowTime = Time_25503776;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->nowTime;
}


int64_t __fastcall NetworkManager__getTime_25503776(System_DateTime_o dateTime, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  double TotalSeconds; // d0
  int64_t ticks; // [xsp+8h] [xbp-18h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-8h] BYREF
  System_DateTime_o v8; // 0:x0.8
  System_TimeSpan_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x1.8

  dateData = dateTime.fields.dateData;
  if ( (byte_4214F96 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214F96 = 1;
  }
  ticks = 0LL;
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  v8.fields.dateData = (uint64_t)&dateData;
  v10.fields.dateData = static_fields->dtUnixEpoch.fields.dateData;
  ticks = System_DateTime__Subtract(v8, v10, 0LL).fields._ticks;
  v9.fields._ticks = (int64_t)&ticks;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v9, 0LL);
  if ( TotalSeconds == INFINITY )
    return (__int64)-TotalSeconds;
  return (__int64)TotalSeconds;
}


int64_t __fastcall NetworkManager__getTodayStartTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  int64_t Time; // x19
  int32_t Hour; // w20
  int32_t Minute; // w21
  const MethodInfo *dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x0.8

  if ( (byte_4214F9F & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214F9F = 1;
  }
  dateData = 0LL;
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = (const MethodInfo *)NetworkManager__getServerDateTime((const MethodInfo *)v2).fields.dateData;
  Time = NetworkManager__getTime(dateData);
  v8.fields.dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v8, 0LL);
  v9.fields.dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v9, 0LL);
  v10.fields.dateData = (uint64_t)&dateData;
  return Time - (System_DateTime__get_Second(v10, 0LL) + 60 * (Minute + 60 * Hour));
}


System_String_o *__fastcall NetworkManager__getUserAgent(NetworkManager_o *this, const MethodInfo *method)
{
  return NetworkServicePluginScript__GetUserAgentString(0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NetworkManager__getWebUrl(
        System_String_o *path,
        bool isSecurity,
        bool isWebView,
        const MethodInfo *method)
{
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
  ManagerConfig_c *v21; // x0
  NetworkManager_c *v22; // x0
  _BOOL4 serverSettingSecurity; // w8
  NetworkManager_c *v24; // x0
  _BOOL4 v25; // w21
  System_String_o *v26; // x0
  __int64 *v27; // x8
  NetworkManager_c *v28; // x0
  System_String_o *v29; // x21
  System_String_o **v30; // x9
  __int64 *v31; // x8
  NetworkManager_c *v32; // x0
  System_String_o *v33; // x19
  System_String_o **v34; // x9
  NetworkManager_c *v35; // x0
  int64_t Time; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  int32_t v38; // w21
  int32_t v39; // w20
  System_String_o *v40; // x2
  __int64 *v41; // x8
  System_String_o *v42; // x0
  __int64 *v43; // x8
  System_String_o *v44; // x1
  int64_t v46; // [xsp+0h] [xbp-30h] BYREF
  int64_t v47; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4214FCD & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, isSecurity);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_20245/*"lastAccessTime="*/, v8);
    sub_B0D8A4(&StringLiteral_471/*"&v="*/, v9);
    sub_B0D8A4(&StringLiteral_19262/*"http://"*/, v10);
    sub_B0D8A4(&StringLiteral_959/*"/webview/"*/, v11);
    sub_B0D8A4(&StringLiteral_1530/*"?"*/, v12);
    sub_B0D8A4(&StringLiteral_1538/*"?lastAccessTime="*/, v13);
    sub_B0D8A4(&StringLiteral_19298/*"https:"*/, v14);
    sub_B0D8A4(&StringLiteral_465/*"&lastAccessTime="*/, v15);
    sub_B0D8A4(&StringLiteral_18783/*"file:"*/, v16);
    sub_B0D8A4(&StringLiteral_19299/*"https://"*/, v17);
    sub_B0D8A4(&StringLiteral_1/*""*/, v18);
    sub_B0D8A4(&StringLiteral_1541/*"?v="*/, v19);
    sub_B0D8A4(&StringLiteral_19261/*"http:"*/, v20);
    byte_4214FCD = 1;
  }
  v46 = 0LL;
  v47 = 0LL;
  v21 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v21 = ManagerConfig_TypeInfo;
  }
  if ( v21->static_fields->UseDebugCommand )
  {
    if ( isSecurity )
    {
      v22 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v22 = NetworkManager_TypeInfo;
      }
      serverSettingSecurity = v22->static_fields->serverSettingSecurity;
      goto LABEL_17;
    }
  }
  else if ( isSecurity )
  {
    v24 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v24 = NetworkManager_TypeInfo;
    }
    serverSettingSecurity = v24->static_fields->serverSecurity;
LABEL_17:
    v25 = serverSettingSecurity;
    if ( path )
      goto LABEL_18;
LABEL_30:
    v31 = &StringLiteral_19299/*"https://"*/;
    v32 = NetworkManager_TypeInfo;
    if ( !v25 )
      v31 = &StringLiteral_19262/*"http://"*/;
    v33 = (System_String_o *)*v31;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v32 = NetworkManager_TypeInfo;
    }
    v34 = (System_String_o **)&StringLiteral_959/*"/webview/"*/;
    if ( !isWebView )
      v34 = (System_String_o **)&StringLiteral_1/*""*/;
    v26 = System_String__Concat_43852188(v33, v32->static_fields->webServerAddress, *v34, 0LL);
    goto LABEL_38;
  }
  v25 = 0;
  if ( !path )
    goto LABEL_30;
LABEL_18:
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_18783/*"file:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_39;
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19261/*"http:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_39;
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19298/*"https:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_39;
  v27 = &StringLiteral_19299/*"https://"*/;
  v28 = NetworkManager_TypeInfo;
  if ( !v25 )
    v27 = &StringLiteral_19262/*"http://"*/;
  v29 = (System_String_o *)*v27;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v28 = NetworkManager_TypeInfo;
  }
  v30 = (System_String_o **)&StringLiteral_959/*"/webview/"*/;
  if ( !isWebView )
    v30 = (System_String_o **)&StringLiteral_1/*""*/;
  v26 = System_String__Concat_43853316(v29, v28->static_fields->webServerAddress, *v30, path, 0LL);
LABEL_38:
  path = v26;
LABEL_39:
  if ( isWebView )
  {
    if ( !path )
      sub_B0D97C(v26);
    if ( System_String__StartsWith(path, (System_String_o *)StringLiteral_19261/*"http:"*/, 0LL)
      || System_String__StartsWith(path, (System_String_o *)StringLiteral_19298/*"https:"*/, 0LL) )
    {
      v35 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime((const MethodInfo *)v35);
      static_fields = NetworkManager_TypeInfo->static_fields;
      v46 = Time / static_fields->WebCacheTime;
      v47 = Time;
      v38 = System_String__IndexOf_43922252(path, static_fields->webServerAddress, 0LL);
      v39 = System_String__IndexOf_43922252(path, (System_String_o *)StringLiteral_1530/*"?"*/, 0LL);
      if ( (v38 & 0x80000000) == 0 )
      {
        v40 = System_Int64__ToString((int64_t)&v46, 0LL);
        if ( (v39 & 0x80000000) != 0 )
          v41 = &StringLiteral_1541/*"?v="*/;
        else
          v41 = &StringLiteral_471/*"&v="*/;
        v44 = (System_String_o *)*v41;
        return System_String__Concat_43852188(path, v44, v40, 0LL);
      }
      if ( (v39 & 0x80000000) != 0 )
      {
        v42 = System_Int64__ToString((int64_t)&v47, 0LL);
        v43 = &StringLiteral_1538/*"?lastAccessTime="*/;
        goto LABEL_55;
      }
      if ( (~(System_String__IndexOf_43922252(path, (System_String_o *)StringLiteral_20245/*"lastAccessTime="*/, 0LL) >> 31) & 0x1F) == 0 )
      {
        v42 = System_Int64__ToString((int64_t)&v47, 0LL);
        v43 = &StringLiteral_465/*"&lastAccessTime="*/;
LABEL_55:
        v44 = (System_String_o *)*v43;
        v40 = v42;
        return System_String__Concat_43852188(path, v44, v40, 0LL);
      }
    }
  }
  return path;
}


System_String_o *__fastcall NetworkManager__getWebViewAddress(System_String_o *path, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_4214FD8 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214FD8 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_43849904(v3->static_fields->webViewBaseURL, path, 0LL);
}


System_String_o *__fastcall NetworkManager__getWebViewAddress_25518740(int32_t addressType, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 *v21; // x8
  BalanceConfig_c *v22; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_Xml_XmlQualifiedName_o *v25; // x19
  NetworkManager_c *v26; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *webViewAddress; // x0
  NetworkManager_c *v28; // x0

  if ( (byte_4214FDA & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_21905/*"rights"*/, v6);
    sub_B0D8A4(&StringLiteral_22510/*"summonDetail"*/, v7);
    sub_B0D8A4(&StringLiteral_17917/*"dBanner"*/, v8);
    sub_B0D8A4(&StringLiteral_22718/*"terms"*/, v9);
    sub_B0D8A4(&StringLiteral_16944/*"boxGacha"*/, v10);
    sub_B0D8A4(&StringLiteral_21129/*"news"*/, v11);
    sub_B0D8A4(&StringLiteral_17817/*"credit"*/, v12);
    sub_B0D8A4(&StringLiteral_19186/*"help"*/, v13);
    sub_B0D8A4(&StringLiteral_22279/*"spdeal"*/, v14);
    sub_B0D8A4(&StringLiteral_17719/*"contact"*/, v15);
    sub_B0D8A4(&StringLiteral_22654/*"tBanner"*/, v16);
    sub_B0D8A4(&StringLiteral_18014/*"deleteAccount"*/, v17);
    sub_B0D8A4(&StringLiteral_1/*""*/, v18);
    sub_B0D8A4(&StringLiteral_23276/*"warBoard"*/, v19);
    sub_B0D8A4(&StringLiteral_21603/*"privacyPolicy"*/, v20);
    byte_4214FDA = 1;
  }
  v21 = &StringLiteral_19186/*"help"*/;
  switch ( addressType )
  {
    case 0:
      v22 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v22 = BalanceConfig_TypeInfo;
      }
      static_fields = v22->static_fields;
      if ( !static_fields->IsIOS_Examination )
      {
        v21 = &StringLiteral_21129/*"news"*/;
LABEL_25:
        v25 = (System_Xml_XmlQualifiedName_o *)*v21;
        v26 = NetworkManager_TypeInfo;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v26 = NetworkManager_TypeInfo;
        }
        webViewAddress = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v26->static_fields->webViewAddress;
        if ( webViewAddress )
        {
          if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                  webViewAddress,
                  v25,
                  (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
            return (System_String_o *)StringLiteral_1/*""*/;
          v28 = NetworkManager_TypeInfo;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v28 = NetworkManager_TypeInfo;
          }
          webViewAddress = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v28->static_fields->webViewAddress;
          if ( webViewAddress )
            return (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                        (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)webViewAddress,
                                        (System_Type_o *)v25,
                                        (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        }
        sub_B0D97C(webViewAddress);
      }
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      return static_fields->IOS_ExaminationNewsUrl;
    case 1:
      v21 = &StringLiteral_22510/*"summonDetail"*/;
      goto LABEL_25;
    case 2:
      goto LABEL_25;
    case 3:
      v21 = &StringLiteral_17719/*"contact"*/;
      goto LABEL_25;
    case 4:
      v21 = &StringLiteral_22718/*"terms"*/;
      goto LABEL_25;
    case 5:
      v21 = &StringLiteral_17817/*"credit"*/;
      goto LABEL_25;
    case 6:
      v21 = &StringLiteral_21905/*"rights"*/;
      goto LABEL_25;
    case 7:
      v21 = &StringLiteral_22654/*"tBanner"*/;
      goto LABEL_25;
    case 8:
      v21 = &StringLiteral_22279/*"spdeal"*/;
      goto LABEL_25;
    case 9:
      v21 = &StringLiteral_16944/*"boxGacha"*/;
      goto LABEL_25;
    case 10:
      v21 = &StringLiteral_17917/*"dBanner"*/;
      goto LABEL_25;
    case 11:
      v21 = &StringLiteral_21603/*"privacyPolicy"*/;
      goto LABEL_25;
    case 12:
      v21 = &StringLiteral_18014/*"deleteAccount"*/;
      goto LABEL_25;
    case 13:
      v21 = &StringLiteral_23276/*"warBoard"*/;
      goto LABEL_25;
    default:
      return (System_String_o *)StringLiteral_1/*""*/;
  }
}


System_String_o *__fastcall NetworkManager__getWebViewFullAddress(System_String_o *path, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  v2 = path;
  if ( (byte_4214FD9 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_19298/*"https:"*/, v3);
    path = (System_String_o *)sub_B0D8A4(&StringLiteral_19261/*"http:"*/, v4);
    byte_4214FD9 = 1;
  }
  if ( !v2 )
    sub_B0D97C(path);
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_19261/*"http:"*/, 0LL)
    || System_String__StartsWith(v2, (System_String_o *)StringLiteral_19298/*"https:"*/, 0LL) )
  {
    return v2;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getWebViewAddress(v2, v5);
}


System_String_o *__fastcall NetworkManager__get_ErrorDialogResponseData(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4214FDF & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214FDF = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->errorDialogResponseData;
}


int64_t __fastcall NetworkManager__get_FriendCode(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  System_String_o *friendCode; // x8

  if ( (byte_4214F76 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214F76 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  friendCode = v2->static_fields->friendCode;
  if ( !friendCode )
    return -1LL;
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    friendCode = NetworkManager_TypeInfo->static_fields->friendCode;
  }
  return System_Int64__Parse(friendCode, 0LL);
}


bool __fastcall NetworkManager__get_IsLogin(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4214F74 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214F74 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->isLogin;
}


bool __fastcall NetworkManager__get_IsRebootBlock(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4214F70 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214F70 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->isRebootBlock;
}


System_String_o *__fastcall NetworkManager__get_UserCreateServer(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4214F73 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214F73 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->userCreateServer;
}


int64_t __fastcall NetworkManager__get_UserId(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  System_String_o *userId; // x8

  if ( (byte_4214F75 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_4214F75 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  userId = v2->static_fields->userId;
  if ( !userId )
    return -1LL;
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    userId = NetworkManager_TypeInfo->static_fields->userId;
  }
  return System_Int64__Parse(userId, 0LL);
}


bool __fastcall NetworkManager__get_isWaitUserAgent(NetworkManager_o *this, const MethodInfo *method)
{
  return this->fields._isWaitUserAgent_k__BackingField;
}


void __fastcall NetworkManager__set_ErrorDialogResponseData(System_String_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NetworkManager_c *v9; // x0
  struct NetworkManager_StaticFields *static_fields; // x8

  if ( (byte_4214FE0 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214FE0 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->errorDialogResponseData = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->errorDialogResponseData,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall NetworkManager__set_isWaitUserAgent(NetworkManager_o *this, bool value, const MethodInfo *method)
{
  this->fields._isWaitUserAgent_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__setupDataServerAddress(
        NetworkManager_o *this,
        int32_t addressType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *streamingAssetsPath; // x19
  ManagerConfig_c *v10; // x8
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x19
  NetworkManager_c *v18; // x8
  BattleServantConfConponent_o *p_dataServerAddress; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *dataServerAddress; // x0
  NetworkManager_c *v22; // x0
  struct NetworkManager_StaticFields *v23; // x8
  System_String_o *v24; // x19
  ManagerConfig_c *v25; // x0
  struct ManagerConfig_StaticFields *v26; // x8
  System_String_o *ReleaseDataServerAddress; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x19
  NetworkManager_c *v35; // x8
  System_Int32_array **dataServerRedirectAddress; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x20
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x20
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **dataServerFolder; // x20
  System_Int32_array **v79; // x20
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x1
  System_Int32_array **v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  NetworkManager_c *v94; // x8
  NetworkManager_c *v95; // x0
  struct NetworkManager_StaticFields *v96; // x8
  __int64 v97; // x0
  __int64 v98; // x0

  if ( (byte_4214FD6 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, *(_QWORD *)&addressType);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&string___TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_893/*"/AssetStorages/"*/, v6);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v7);
    sub_B0D8A4(&StringLiteral_20099/*"jar:"*/, v8);
    byte_4214FD6 = 1;
  }
  switch ( addressType )
  {
    case 0:
      streamingAssetsPath = UnityEngine_Application__get_streamingAssetsPath(0LL);
      v10 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v10 = ManagerConfig_TypeInfo;
      }
      v17 = (System_Int32_array **)System_String__Concat_43853316(
                                     streamingAssetsPath,
                                     (System_String_o *)StringLiteral_893/*"/AssetStorages/"*/,
                                     v10->static_fields->PlatformName,
                                     (System_String_o *)StringLiteral_879/*"/"*/,
                                     0LL);
      v18 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v18 = NetworkManager_TypeInfo;
      }
      p_dataServerAddress = (BattleServantConfConponent_o *)&v18->static_fields->dataServerAddress;
      p_dataServerAddress->klass = (BattleServantConfConponent_c *)v17;
      sub_B0D840(p_dataServerAddress, v17, v11, v12, v13, v14, v15, v16);
      static_fields = NetworkManager_TypeInfo->static_fields;
      dataServerAddress = static_fields->dataServerAddress;
      if ( !dataServerAddress )
        goto LABEL_89;
      if ( System_String__StartsWith(dataServerAddress, static_fields->FILE_URL_SCHEME, 0LL) )
        return;
      v22 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v22 = NetworkManager_TypeInfo;
      }
      v23 = v22->static_fields;
      v24 = v23->dataServerAddress;
      dataServerAddress = System_String__Concat_43849904(
                            (System_String_o *)StringLiteral_20099/*"jar:"*/,
                            v23->FILE_URL_SCHEME,
                            0LL);
      if ( !v24 )
LABEL_89:
        sub_B0D97C(dataServerAddress);
      if ( System_String__StartsWith(v24, dataServerAddress, 0LL) )
        return;
      v95 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v95 = NetworkManager_TypeInfo;
      }
      v87 = (System_Int32_array **)System_String__Concat_43849904(
                                     v95->static_fields->FILE_URL_SCHEME,
                                     v95->static_fields->dataServerAddress,
                                     0LL);
      goto LABEL_85;
    case 1:
      v34 = sub_B0D8BC(string___TypeInfo, 5LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !byte_421507D )
      {
        sub_B0D8A4(&ManagerConfig_TypeInfo, v44);
        byte_421507D = 1;
      }
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      }
      if ( !v34 )
        goto LABEL_89;
      v51 = *(System_Int32_array ***)(*(_QWORD *)&dataServerAddress[7].fields + 152LL);
      if ( v51 )
      {
        dataServerAddress = (System_String_o *)sub_B0D964(v51, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
        if ( !dataServerAddress )
          goto LABEL_88;
      }
      if ( !*(_DWORD *)(v34 + 24) )
        goto LABEL_87;
      *(_QWORD *)(v34 + 32) = v51;
      sub_B0D840((BattleServantConfConponent_o *)(v34 + 32), v51, v45, v46, v47, v48, v49, v50);
      dataServerAddress = (System_String_o *)StringLiteral_879/*"/"*/;
      if ( StringLiteral_879/*"/"*/ )
      {
        dataServerAddress = (System_String_o *)sub_B0D964(StringLiteral_879/*"/"*/, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
        if ( !dataServerAddress )
          goto LABEL_88;
        v58 = (System_Int32_array **)StringLiteral_879/*"/"*/;
      }
      else
      {
        v58 = 0LL;
      }
      if ( *(_DWORD *)(v34 + 24) <= 1u )
        goto LABEL_87;
      *(_QWORD *)(v34 + 40) = v58;
      sub_B0D840((BattleServantConfConponent_o *)(v34 + 40), v58, v52, v53, v54, v55, v56, v57);
      dataServerFolder = (System_Int32_array **)NetworkManager_TypeInfo->static_fields->dataServerFolder;
      if ( dataServerFolder )
      {
        dataServerAddress = (System_String_o *)sub_B0D964(dataServerFolder, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
        if ( !dataServerAddress )
          goto LABEL_88;
      }
      if ( *(_DWORD *)(v34 + 24) <= 2u )
        goto LABEL_87;
      *(_QWORD *)(v34 + 48) = dataServerFolder;
      sub_B0D840((BattleServantConfConponent_o *)(v34 + 48), dataServerFolder, v72, v73, v74, v75, v76, v77);
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
LABEL_67:
        j_il2cpp_runtime_class_init_0(dataServerAddress);
        dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      }
LABEL_68:
      v79 = *(System_Int32_array ***)(*(_QWORD *)&dataServerAddress[7].fields + 128LL);
      if ( v79 )
      {
        dataServerAddress = (System_String_o *)sub_B0D964(v79, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
        if ( !dataServerAddress )
          goto LABEL_88;
      }
      if ( *(_DWORD *)(v34 + 24) <= 3u )
        goto LABEL_87;
      *(_QWORD *)(v34 + 56) = v79;
      sub_B0D840((BattleServantConfConponent_o *)(v34 + 56), v79, v66, v67, v68, v69, v70, v71);
      dataServerAddress = (System_String_o *)StringLiteral_879/*"/"*/;
      if ( StringLiteral_879/*"/"*/ )
      {
        dataServerAddress = (System_String_o *)sub_B0D964(StringLiteral_879/*"/"*/, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
        if ( dataServerAddress )
        {
          v86 = (System_Int32_array **)StringLiteral_879/*"/"*/;
          goto LABEL_75;
        }
LABEL_88:
        v98 = sub_B0D99C(dataServerAddress);
        sub_B0D948(v98, 0LL);
      }
      v86 = 0LL;
LABEL_75:
      if ( *(_DWORD *)(v34 + 24) <= 4u )
      {
LABEL_87:
        v97 = sub_B0D9A8(dataServerAddress);
        sub_B0D948(v97, 0LL);
      }
      *(_QWORD *)(v34 + 64) = v86;
      sub_B0D840((BattleServantConfConponent_o *)(v34 + 64), v86, v80, v81, v82, v83, v84, v85);
      v87 = (System_Int32_array **)System_String__Concat_43930028((System_String_array *)v34, 0LL);
      v94 = NetworkManager_TypeInfo;
LABEL_86:
      v96 = v94->static_fields;
      v96->dataServerAddress = (struct System_String_o *)v87;
      sub_B0D840((BattleServantConfConponent_o *)&v96->dataServerAddress, v87, v88, v89, v90, v91, v92, v93);
      return;
    case 2:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !byte_421507D )
      {
        sub_B0D8A4(&ManagerConfig_TypeInfo, *(_QWORD *)&addressType);
        byte_421507D = 1;
      }
      v25 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
        v26 = ManagerConfig_TypeInfo->static_fields;
        ReleaseDataServerAddress = v26->ReleaseDataServerAddress;
        goto LABEL_84;
      }
      if ( ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        v26 = ManagerConfig_TypeInfo->static_fields;
        ReleaseDataServerAddress = v26->ReleaseDataServerAddress;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v25 = ManagerConfig_TypeInfo;
        v26 = ManagerConfig_TypeInfo->static_fields;
        ReleaseDataServerAddress = v26->ReleaseDataServerAddress;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_84;
      }
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v26 = ManagerConfig_TypeInfo->static_fields;
      }
LABEL_84:
      v87 = (System_Int32_array **)System_String__Concat_43853316(
                                     ReleaseDataServerAddress,
                                     (System_String_o *)StringLiteral_879/*"/"*/,
                                     v26->PlatformName,
                                     (System_String_o *)StringLiteral_879/*"/"*/,
                                     0LL);
LABEL_85:
      v94 = NetworkManager_TypeInfo;
      goto LABEL_86;
    case 3:
      dataServerAddress = (System_String_o *)sub_B0D8BC(string___TypeInfo, 5LL);
      v34 = (__int64)dataServerAddress;
      v35 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v35 = NetworkManager_TypeInfo;
      }
      if ( !v34 )
        goto LABEL_89;
      dataServerRedirectAddress = (System_Int32_array **)v35->static_fields->dataServerRedirectAddress;
      if ( dataServerRedirectAddress )
      {
        dataServerAddress = (System_String_o *)sub_B0D964(dataServerRedirectAddress, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
        if ( !dataServerAddress )
          goto LABEL_88;
      }
      if ( !*(_DWORD *)(v34 + 24) )
        goto LABEL_87;
      *(_QWORD *)(v34 + 32) = dataServerRedirectAddress;
      sub_B0D840((BattleServantConfConponent_o *)(v34 + 32), dataServerRedirectAddress, v28, v29, v30, v31, v32, v33);
      dataServerAddress = (System_String_o *)StringLiteral_879/*"/"*/;
      if ( StringLiteral_879/*"/"*/ )
      {
        dataServerAddress = (System_String_o *)sub_B0D964(StringLiteral_879/*"/"*/, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
        if ( !dataServerAddress )
          goto LABEL_88;
        v43 = (System_Int32_array **)StringLiteral_879/*"/"*/;
      }
      else
      {
        v43 = 0LL;
      }
      if ( *(_DWORD *)(v34 + 24) <= 1u )
        goto LABEL_87;
      *(_QWORD *)(v34 + 40) = v43;
      sub_B0D840((BattleServantConfConponent_o *)(v34 + 40), v43, v37, v38, v39, v40, v41, v42);
      v65 = (System_Int32_array **)NetworkManager_TypeInfo->static_fields->dataServerFolder;
      if ( v65 )
      {
        dataServerAddress = (System_String_o *)sub_B0D964(v65, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
        if ( !dataServerAddress )
          goto LABEL_88;
      }
      if ( *(_DWORD *)(v34 + 24) <= 2u )
        goto LABEL_87;
      *(_QWORD *)(v34 + 48) = v65;
      sub_B0D840((BattleServantConfConponent_o *)(v34 + 48), v65, v59, v60, v61, v62, v63, v64);
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_67;
      }
      goto LABEL_68;
    default:
      return;
  }
}


void __fastcall NetworkManager__setupWebViewAddress(
        System_String_o *baseURL,
        System_String_o *contactURL,
        System_Collections_Generic_Dictionary_string__object__o *filePassInfo,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  NetworkManager_c *v21; // x0
  BattleServantConfConponent_o *p_webViewBaseURL; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *webViewAddress; // x0
  _BOOL8 v24; // x0
  Il2CppObject *currentKey; // x21
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v27; // x0
  System_Xml_Schema_XmlSchemaObject_o *v28; // x22
  NetworkManager_c *v29; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v30; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v31; // x0
  System_String_o *v32; // x1
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v35; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4214FD7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__Add__, contactURL);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__, v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__,
      v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__, v15);
    sub_B0D8A4(&NetworkManager_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_17719/*"contact"*/, v17);
    sub_B0D8A4(&StringLiteral_18014/*"deleteAccount"*/, v18);
    sub_B0D8A4(&StringLiteral_1/*""*/, v19);
    sub_B0D8A4(&StringLiteral_21603/*"privacyPolicy"*/, v20);
    byte_4214FD7 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v21 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v21 = NetworkManager_TypeInfo;
  }
  p_webViewBaseURL = (BattleServantConfConponent_o *)&v21->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (BattleServantConfConponent_c *)baseURL;
  sub_B0D840(
    p_webViewBaseURL,
    (System_Int32_array **)baseURL,
    (System_String_array **)filePassInfo,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  webViewAddress = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)NetworkManager_TypeInfo->static_fields->webViewAddress;
  if ( !webViewAddress
    || (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
          webViewAddress,
          (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        !filePassInfo)
    || (webViewAddress = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys((System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)filePassInfo, (const MethodInfo_2E4A874 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__)) == 0LL )
  {
    sub_B0D97C(webViewAddress);
  }
  System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)webViewAddress,
    (const MethodInfo_201B210 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
            &v35,
            (const MethodInfo_26CA6D8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    if ( !v24 )
      break;
    currentKey = v35.fields.currentKey;
    if ( !v35.fields.currentKey )
      sub_B0D97C(v24);
    if ( System_String__Equals_43837244(
           (System_String_o *)v35.fields.currentKey,
           (System_String_o *)StringLiteral_17719/*"contact"*/,
           0LL)
      || System_String__Equals_43837244((System_String_o *)currentKey, (System_String_o *)StringLiteral_21603/*"privacyPolicy"*/, 0LL)
      || System_String__Equals_43837244((System_String_o *)currentKey, (System_String_o *)StringLiteral_18014/*"deleteAccount"*/, 0LL) )
    {
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)filePassInfo,
               (System_Type_o *)currentKey,
               (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        sub_B0D97C(0LL);
      v27 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
    }
    else
    {
      v31 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)filePassInfo,
              (System_Type_o *)currentKey,
              (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v31 )
        sub_B0D97C(0LL);
      v32 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v31->klass->vtable[3].method)(
                                 v31,
                                 v31->klass->vtable[4].methodPtr);
      v27 = System_String__Concat_43849904(baseURL, v32, 0LL);
    }
    v28 = (System_Xml_Schema_XmlSchemaObject_o *)v27;
    v29 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v29 = NetworkManager_TypeInfo;
    }
    v30 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v29->static_fields->webViewAddress;
    if ( !v30 )
      sub_B0D97C(0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v30,
      (System_Xml_XmlQualifiedName_o *)currentKey,
      v28,
      (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
    &v35,
    (const MethodInfo_26CA6D4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager_LoginCallbackFunc___ctor(
        NetworkManager_LoginCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


System_IAsyncResult_o *__fastcall NetworkManager_LoginCallbackFunc__BeginInvoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)result;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall NetworkManager_LoginCallbackFunc__EndInvoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall NetworkManager_LoginCallbackFunc__Invoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  NetworkManager_LoginCallbackFunc_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  System_String_c *v12; // x8
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
  void (__fastcall **v25)(System_String_o *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, System_String_o *, _QWORD); // x0
  NetworkManager_LoginCallbackFunc_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(System_String_o *, __int64); // x23
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
  System_String_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  NetworkManager_LoginCallbackFunc_o *v48; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (NetworkManager_LoginCallbackFunc_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(System_String_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, result, method, v3);
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
                klass = result->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AA67A0(result, v44, v45);
                }
                v16 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B0D954(v16, v29);
              (*v25)(result, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
                v12 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(result, class_0, v10);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(result, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v29 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v31(result, v29);
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
            v27 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, result, v27);
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
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v22)(v30, result, *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v30
                                                                           + 16LL * *(unsigned __int16 *)(v29 + 72)
                                                                           + 312))(
                v30,
                result,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v31)(v30, result, v29);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager_ResultCallbackFunc___ctor(
        NetworkManager_ResultCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


System_IAsyncResult_o *__fastcall NetworkManager_ResultCallbackFunc__BeginInvoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)result;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall NetworkManager_ResultCallbackFunc__EndInvoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall NetworkManager_ResultCallbackFunc__Invoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  NetworkManager_ResultCallbackFunc_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  System_String_c *v12; // x8
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
  void (__fastcall **v25)(System_String_o *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, System_String_o *, _QWORD); // x0
  NetworkManager_ResultCallbackFunc_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(System_String_o *, __int64); // x23
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
  System_String_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  NetworkManager_ResultCallbackFunc_o *v48; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (NetworkManager_ResultCallbackFunc_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(System_String_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, result, method, v3);
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
                klass = result->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AA67A0(result, v44, v45);
                }
                v16 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B0D954(v16, v29);
              (*v25)(result, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
                v12 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(result, class_0, v10);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(result, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v29 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v31(result, v29);
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
            v27 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, result, v27);
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
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v22)(v30, result, *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v30
                                                                           + 16LL * *(unsigned __int16 *)(v29 + 72)
                                                                           + 312))(
                v30,
                result,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v31)(v30, result, v29);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager_StoreCallbackFunc___ctor(
        NetworkManager_StoreCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


System_IAsyncResult_o *__fastcall NetworkManager_StoreCallbackFunc__BeginInvoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_String_o *url,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)url;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall NetworkManager_StoreCallbackFunc__EndInvoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall NetworkManager_StoreCallbackFunc__Invoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_String_o *url,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  NetworkManager_StoreCallbackFunc_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  System_String_c *v12; // x8
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
  void (__fastcall **v25)(System_String_o *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, System_String_o *, _QWORD); // x0
  NetworkManager_StoreCallbackFunc_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(System_String_o *, __int64); // x23
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
  System_String_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  NetworkManager_StoreCallbackFunc_o *v48; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (NetworkManager_StoreCallbackFunc_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(System_String_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, url, method, v3);
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
                klass = url->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&url->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&url->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AA67A0(url, v44, v45);
                }
                v16 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&url->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B0D954(v16, v29);
              (*v25)(url, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
                v12 = url->klass;
                if ( *(_WORD *)&url->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&url->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(url, class_0, v10);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(url, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&url->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v29 + 72)))(
                  url,
                  *((_QWORD *)&url->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v31(url, v29);
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
            v27 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, url, v27);
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
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v22)(v30, url, *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v30
                                                                           + 16LL * *(unsigned __int16 *)(v29 + 72)
                                                                           + 312))(
                v30,
                url,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v31)(v30, url, v29);
    }
  }
}


void __fastcall NetworkManager__Initialize_d__82___ctor(
        NetworkManager__Initialize_d__82_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NetworkManager__Initialize_d__82__MoveNext(
        NetworkManager__Initialize_d__82_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NetworkManager__Initialize_d__82_o *v8; // x20
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
  int32_t _1__state; // w8
  struct NetworkManager_o *_4__this; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  struct ResponseCommandBase_array **p_commandList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  PurchaseByBankResponseCommand_o *v34; // x23
  __int64 v35; // x1
  __int64 v36; // x2
  MissionNotifyResponseCommand_o *v37; // x23
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v47; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct ResponseCommandBase_array *commandList; // x8
  __int64 v55; // x25
  int max_length; // w9
  __int64 v57; // x8
  System_Xml_Schema_XmlSchemaObject_o *v58; // x23
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *commandLookup; // x24
  BattleServantConfConponent_o *p__2__current; // x20
  bool result; // w0
  ManagerConfig_c *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  UnityEngine_Coroutine_o *communicationCoroutine; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  NetworkManager_c *v100; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  struct NetworkManager_StaticFields *v102; // x0
  System_Int32_array **v103; // x1
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  __int64 v110; // x20
  __int64 v111; // x20
  UnityEngine_Object_o *v112; // x20
  __int64 v113; // x0

  v8 = this;
  if ( (byte_4217A79 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ResponseCommandBase__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ResponseCommandBase___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_ResponseCommandBase__TypeInfo, v15);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v16);
    sub_B0D8A4(&MissionNotifyResponseCommand_TypeInfo, v17);
    sub_B0D8A4(&NetworkManager_TypeInfo, v18);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v19);
    sub_B0D8A4(&PurchaseByBankResponseCommand_TypeInfo, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_RequestBase__Clear__, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__, v24);
    this = (NetworkManager__Initialize_d__82_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v25);
    byte_4217A79 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_15;
    goto LABEL_19;
  }
  if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_15;
    NetworkManager__ClearAuth(_4__this, 0LL);
    NetworkManager__ReadServerSetting(_4__this, 0LL);
    p_commandList = &_4__this->fields.commandList;
    if ( !_4__this->fields.commandList )
    {
      v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ResponseCommandBase__TypeInfo, v28, v29);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v31,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ResponseCommandBase___ctor__);
      v34 = (PurchaseByBankResponseCommand_o *)sub_B0D974(PurchaseByBankResponseCommand_TypeInfo, v32, v33);
      PurchaseByBankResponseCommand___ctor(v34, 0LL);
      if ( !v31 )
        goto LABEL_15;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v31,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ResponseCommandBase__Add__);
      v37 = (MissionNotifyResponseCommand_o *)sub_B0D974(MissionNotifyResponseCommand_TypeInfo, v35, v36);
      MissionNotifyResponseCommand___ctor(v37, 0LL);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v31,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ResponseCommandBase__Add__);
      v38 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v31,
                                     (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__);
      _4__this->fields.commandList = (struct ResponseCommandBase_array *)v38;
      sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.commandList, v38, v39, v40, v41, v42, v43, v44);
      v47 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                            System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo,
                                                                                            v45,
                                                                                            v46);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v47,
        (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__);
      _4__this->fields.commandLookup = (struct System_Collections_Generic_Dictionary_string__ResponseCommandBase__o *)v47;
      sub_B0D840(
        (BattleServantConfConponent_o *)&_4__this->fields.commandLookup,
        (System_Int32_array **)v47,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      commandList = _4__this->fields.commandList;
      if ( !commandList )
        goto LABEL_15;
      v55 = 0LL;
      while ( 1 )
      {
        max_length = commandList->max_length;
        if ( (int)v55 >= max_length )
          break;
        if ( (unsigned int)v55 >= max_length )
        {
          v113 = sub_B0D9A8(this);
          sub_B0D948(v113, 0LL);
        }
        v57 = (__int64)commandList + 8 * v55;
        v58 = *(System_Xml_Schema_XmlSchemaObject_o **)(v57 + 32);
        if ( v58 )
        {
          commandLookup = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.commandLookup;
          this = (NetworkManager__Initialize_d__82_o *)ResponseCommandBase__GetCommandName(
                                                         *(ResponseCommandBase_o **)(v57 + 32),
                                                         0LL);
          if ( commandLookup )
          {
            System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
              commandLookup,
              (System_Xml_XmlQualifiedName_o *)this,
              v58,
              (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__);
            commandList = *p_commandList;
            ++v55;
            if ( *p_commandList )
              continue;
          }
        }
        goto LABEL_15;
      }
    }
    NetworkManager__InitializeUserAgent(_4__this, 0LL);
LABEL_19:
    if ( _4__this->fields._isWaitUserAgent_k__BackingField )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B0D840(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
    v62 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v62 = ManagerConfig_TypeInfo;
    }
    if ( v62->static_fields->UseAppServer )
      NetworkServicePluginScript__CheckService(0LL);
    this = (NetworkManager__Initialize_d__82_o *)_4__this->fields.communicationWaitList;
    if ( this )
    {
      System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
        (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this,
        (const MethodInfo_2B02D64 *)Method_System_Collections_Generic_Queue_RequestBase__Clear__);
      communicationCoroutine = _4__this->fields.communicationCoroutine;
      if ( communicationCoroutine )
        UnityEngine_MonoBehaviour__StopCoroutine_34930796(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          communicationCoroutine,
          0LL);
      _4__this->fields.communicationWork = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.communicationWork, 0LL, v63, v64, v65, v66, v67, v68);
      _4__this->fields.communicationCoroutine = 0LL;
      sub_B0D840(
        (BattleServantConfConponent_o *)&_4__this->fields.communicationCoroutine,
        0LL,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
      _4__this->fields.communicationWorkResponseList = 0LL;
      sub_B0D840(
        (BattleServantConfConponent_o *)&_4__this->fields.communicationWorkResponseList,
        0LL,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81);
      _4__this->fields.cacheRefreshWork = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.cacheRefreshWork, 0LL, v82, v83, v84, v85, v86, v87);
      _4__this->fields.cacheRefreshWorkResponseList = 0LL;
      sub_B0D840(
        (BattleServantConfConponent_o *)&_4__this->fields.cacheRefreshWorkResponseList,
        0LL,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
      v100 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v100 = NetworkManager_TypeInfo;
      }
      v100->static_fields->isErrorServerTimeLimitOver = 0;
      v100->static_fields->isRebootBlock = 0;
      v100->static_fields->isLogin = 0;
      static_fields = v100->static_fields;
      static_fields->sessionId = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&static_fields->sessionId, 0LL, v94, v95, v96, v97, v98, v99);
      v102 = NetworkManager_TypeInfo->static_fields;
      v103 = (System_Int32_array **)StringLiteral_1/*""*/;
      v102->dataServerFolder = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B0D840((BattleServantConfConponent_o *)&v102->dataServerFolder, v103, v104, v105, v106, v107, v108, v109);
      v110 = *((_QWORD *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__ + 3);
      if ( (*(_BYTE *)(v110 + 306) & 1) == 0 )
        sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__ + 3));
      v111 = **(_QWORD **)(v110 + 192);
      if ( (*(_BYTE *)(v111 + 306) & 1) == 0 )
        sub_AA65A4(v111);
      v112 = **(UnityEngine_Object_o ***)(v111 + 184);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v112, 0LL, 0LL) )
      {
        this = (NetworkManager__Initialize_d__82_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)_4__this,
                                                       0LL);
        if ( !this )
          goto LABEL_15;
        UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___);
      }
      this = (NetworkManager__Initialize_d__82_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        DataManager__Initialize((DataManager_o *)this, 0LL);
        this = (NetworkManager__Initialize_d__82_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
        if ( this )
        {
          AvalonNotificationManager__Initialize((AvalonNotificationManager_o *)this, 0LL);
          return 0;
        }
      }
    }
LABEL_15:
    sub_B0D97C(this);
  }
  return 0;
}


Il2CppObject *__fastcall NetworkManager__Initialize_d__82__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__Initialize_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NetworkManager__Initialize_d__82__System_Collections_IEnumerator_Reset(
        NetworkManager__Initialize_d__82_o *this,
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
  v6 = sub_B0D8A8(&Method_NetworkManager__Initialize_d__82_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall NetworkManager__Initialize_d__82__System_Collections_IEnumerator_get_Current(
        NetworkManager__Initialize_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NetworkManager__Initialize_d__82__System_IDisposable_Dispose(
        NetworkManager__Initialize_d__82_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__RequestApplicationUpdateCR_d__217___ctor(
        NetworkManager__RequestApplicationUpdateCR_d__217_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NetworkManager__RequestApplicationUpdateCR_d__217__MoveNext(
        NetworkManager__RequestApplicationUpdateCR_d__217_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NetworkManager__RequestApplicationUpdateCR_d__217_o *v8; // x19
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
  struct System_String_o *storeName; // x8
  System_String_o **p_storeName; // x21
  System_Int32_array **v24; // x1
  ManagerConfig_c *v25; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  BattleServantConfConponent_o *p_id; // x0
  System_Int32_array **iOSApplicationID; // x1
  System_String_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  DelightWorks_Network_UnityWebRequestWWW_o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **www_5__3; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  NetworkManager_StoreCallbackFunc_o *callback; // x0
  struct DelightWorks_Network_UnityWebRequestWWW_o *v47; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v48; // x8
  System_String_o *v49; // x20
  NetworkManager__RequestApplicationUpdateCR_d__217_o *v50; // x20
  __int64 v51; // x1
  System_String_array **v52; // x2
  Il2CppObject *Item; // x20
  UserPresentBoxWindow_resData_array *v54; // x0
  __int64 v55; // x8
  UserPresentBoxWindow_resData_array *v56; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v57; // x0
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  BattleServantConfConponent_o *p_url_5__2; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  UnityEngine_WaitForSeconds_o *v68; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  int v76; // w8
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_o *id; // x1
  System_String_o **v83; // x21
  ManagerConfig_c *v84; // x0
  System_Int32_array **AndroidPackageName; // x1
  UnityEngine_WaitForSeconds_o *v86; // x20
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  __int64 v93; // x0

  v8 = this;
  if ( (byte_4217A7A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_Dictionary_string__object____, v10);
    sub_B0D8A4(&JsonManager_TypeInfo, v11);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v12);
    sub_B0D8A4(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo, v13);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_22842/*"trackViewUrl"*/, v15);
    sub_B0D8A4(&StringLiteral_459/*"&country=jp"*/, v16);
    sub_B0D8A4(&StringLiteral_19304/*"https://play.google.com/store/apps/details?id="*/, v17);
    sub_B0D8A4(&StringLiteral_1972/*"Android"*/, v18);
    sub_B0D8A4(&StringLiteral_21875/*"results"*/, v19);
    sub_B0D8A4(&StringLiteral_19302/*"https://itunes.apple.com/lookup?id="*/, v20);
    this = (NetworkManager__RequestApplicationUpdateCR_d__217_o *)sub_B0D8A4(&StringLiteral_19321/*"iOS"*/, v21);
    byte_4217A7A = 1;
  }
  switch ( v8->fields.__1__state )
  {
    case 0:
      p_storeName = &v8->fields.storeName;
      storeName = v8->fields.storeName;
      v8->fields.__1__state = -1;
      if ( !storeName )
      {
        v24 = (System_Int32_array **)StringLiteral_1972/*"Android"*/;
        *p_storeName = (System_String_o *)StringLiteral_1972/*"Android"*/;
        sub_B0D840((BattleServantConfConponent_o *)&v8->fields.storeName, v24, v2, v3, v4, v5, v6, v7);
      }
      v8->fields._url_5__2 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields._url_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      if ( System_String__op_Equality(v8->fields.storeName, (System_String_o *)StringLiteral_19321/*"iOS"*/, 0LL) )
      {
        if ( !v8->fields.id )
        {
          v25 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v25 = ManagerConfig_TypeInfo;
          }
          static_fields = v25->static_fields;
          p_id = (BattleServantConfConponent_o *)&v8->fields.id;
          iOSApplicationID = (System_Int32_array **)static_fields->iOSApplicationID;
          v8->fields.id = (struct System_String_o *)iOSApplicationID;
LABEL_13:
          sub_B0D840(p_id, iOSApplicationID, v2, v3, v4, v5, v6, v7);
        }
        v29 = System_String__Concat_43852188(
                (System_String_o *)StringLiteral_19302/*"https://itunes.apple.com/lookup?id="*/,
                v8->fields.id,
                (System_String_o *)StringLiteral_459/*"&country=jp"*/,
                0LL);
        v32 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_B0D974(
                                                             DelightWorks_Network_UnityWebRequestWWW_TypeInfo,
                                                             v30,
                                                             v31);
        DelightWorks_Network_UnityWebRequestWWW___ctor(v32, v29, 0LL);
        v8->fields._www_5__3 = v32;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v8->fields._www_5__3,
          (System_Int32_array **)v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        www_5__3 = (System_Int32_array **)v8->fields._www_5__3;
        v8->fields.__2__current = (Il2CppObject *)www_5__3;
        sub_B0D840((BattleServantConfConponent_o *)&v8->fields.__2__current, www_5__3, v40, v41, v42, v43, v44, v45);
        LOBYTE(callback) = 1;
        v8->fields.__1__state = 1;
        return (char)callback;
      }
      if ( !System_String__op_Equality(*p_storeName, (System_String_o *)StringLiteral_1972/*"Android"*/, 0LL) )
        goto LABEL_51;
      v83 = &v8->fields.id;
      id = v8->fields.id;
      if ( !id )
      {
        v84 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v84 = ManagerConfig_TypeInfo;
        }
        AndroidPackageName = (System_Int32_array **)v84->static_fields->AndroidPackageName;
        *v83 = (System_String_o *)AndroidPackageName;
        sub_B0D840((BattleServantConfConponent_o *)&v8->fields.id, AndroidPackageName, v52, v77, v78, v79, v80, v81);
        id = *v83;
      }
      v58 = (System_Int32_array **)System_String__Concat_43849904((System_String_o *)StringLiteral_19304/*"https://play.google.com/store/apps/details?id="*/, id, 0LL);
      v8->fields._url_5__2 = (struct System_String_o *)v58;
      p_url_5__2 = (BattleServantConfConponent_o *)&v8->fields._url_5__2;
      goto LABEL_50;
    case 1:
      v47 = v8->fields._www_5__3;
      v8->fields.__1__state = -1;
      if ( !v47 )
        goto LABEL_54;
      this = (NetworkManager__RequestApplicationUpdateCR_d__217_o *)System_String__IsNullOrEmpty(
                                                                      v47->fields._error_k__BackingField,
                                                                      0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_41;
      v48 = v8->fields._www_5__3;
      if ( !v48 )
        goto LABEL_54;
      if ( System_String__IsNullOrEmpty(v48->fields._error_k__BackingField, 0LL) )
      {
        this = (NetworkManager__RequestApplicationUpdateCR_d__217_o *)v8->fields._www_5__3;
        if ( !this )
          goto LABEL_54;
        this = (NetworkManager__RequestApplicationUpdateCR_d__217_o *)DelightWorks_Network_UnityWebRequestWWW__get_text(
                                                                        (DelightWorks_Network_UnityWebRequestWWW_o *)this,
                                                                        0LL);
        if ( !v8->fields._www_5__3 )
          goto LABEL_54;
        v49 = (System_String_o *)this;
        DelightWorks_Network_UnityWebRequestWWW__Dispose(v8->fields._www_5__3, 0LL);
        if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !JsonManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
        }
        this = (NetworkManager__RequestApplicationUpdateCR_d__217_o *)JsonManager__getDictionary(v49, 0LL);
        if ( !this )
          goto LABEL_54;
        v50 = this;
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
               (System_Xml_XmlQualifiedName_o *)StringLiteral_21875/*"results"*/,
               (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                   (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v50,
                                   (System_Type_o *)StringLiteral_21875/*"results"*/,
                                   (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v54 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                  Item,
                  (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_Dictionary_string__object____);
          if ( v54 )
          {
            v55 = *(_QWORD *)&v54->max_length;
            v56 = v54;
            if ( v55 )
            {
              if ( !(_DWORD)v55 )
                goto LABEL_55;
              v57 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v54->m_Items[0];
              if ( v57 )
              {
                v54 = (UserPresentBoxWindow_resData_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                              v57,
                                                              (System_Xml_XmlQualifiedName_o *)StringLiteral_22842/*"trackViewUrl"*/,
                                                              (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)v54 & 1) != 0 )
                {
                  if ( v56->max_length )
                  {
                    this = (NetworkManager__RequestApplicationUpdateCR_d__217_o *)v56->m_Items[0];
                    if ( this )
                    {
                      this = (NetworkManager__RequestApplicationUpdateCR_d__217_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this,
                                                                                      (System_Type_o *)StringLiteral_22842/*"trackViewUrl"*/,
                                                                                      (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                      if ( this )
                      {
                        v58 = (System_Int32_array **)((__int64 (__fastcall *)(NetworkManager__RequestApplicationUpdateCR_d__217_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                                       this,
                                                       this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
                        v8->fields._url_5__2 = (struct System_String_o *)v58;
                        p_url_5__2 = (BattleServantConfConponent_o *)&v8->fields._url_5__2;
LABEL_50:
                        sub_B0D840(p_url_5__2, v58, v59, v60, v61, v62, v63, v64);
                        goto LABEL_51;
                      }
                    }
LABEL_54:
                    sub_B0D97C(this);
                  }
LABEL_55:
                  v93 = sub_B0D9A8(v54);
                  sub_B0D948(v93, 0LL);
                }
              }
            }
          }
        }
LABEL_51:
        v86 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v51, v52);
        UnityEngine_WaitForSeconds___ctor(v86, 0.5, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v86;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B0D840(p__2__current, (System_Int32_array **)v86, v87, v88, v89, v90, v91, v92);
        v76 = 3;
        goto LABEL_52;
      }
LABEL_41:
      this = (NetworkManager__RequestApplicationUpdateCR_d__217_o *)v8->fields._www_5__3;
      if ( !this )
        goto LABEL_54;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      v68 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v66, v67);
      UnityEngine_WaitForSeconds___ctor(v68, 1.0, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v68;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B0D840(p__2__current, (System_Int32_array **)v68, v70, v71, v72, v73, v74, v75);
      v76 = 2;
LABEL_52:
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v76;
      LOBYTE(callback) = 1;
      return (char)callback;
    case 2:
      v8->fields._www_5__3 = 0LL;
      p_id = (BattleServantConfConponent_o *)&v8->fields._www_5__3;
      v8->fields.__1__state = -1;
      iOSApplicationID = 0LL;
      goto LABEL_13;
    case 3:
      callback = v8->fields.callback;
      v8->fields.__1__state = -1;
      if ( !callback )
        return (char)callback;
      NetworkManager_StoreCallbackFunc__Invoke(callback, v8->fields._url_5__2, 0LL);
LABEL_17:
      LOBYTE(callback) = 0;
      return (char)callback;
    default:
      goto LABEL_17;
  }
}


Il2CppObject *__fastcall NetworkManager__RequestApplicationUpdateCR_d__217__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__RequestApplicationUpdateCR_d__217_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NetworkManager__RequestApplicationUpdateCR_d__217__System_Collections_IEnumerator_Reset(
        NetworkManager__RequestApplicationUpdateCR_d__217_o *this,
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
  v6 = sub_B0D8A8(&Method_NetworkManager__RequestApplicationUpdateCR_d__217_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall NetworkManager__RequestApplicationUpdateCR_d__217__System_Collections_IEnumerator_get_Current(
        NetworkManager__RequestApplicationUpdateCR_d__217_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NetworkManager__RequestApplicationUpdateCR_d__217__System_IDisposable_Dispose(
        NetworkManager__RequestApplicationUpdateCR_d__217_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__RequestCR_d__212___ctor(
        NetworkManager__RequestCR_d__212_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NetworkManager__RequestCR_d__212__MoveNext(
        NetworkManager__RequestCR_d__212_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  NetworkManager__RequestCR_d__212_o *v3; // x19
  __int64 v4; // x1
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
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x1
  __int64 v89; // x1
  __int64 v90; // x1
  __int64 v91; // x1
  __int64 v92; // x1
  __int64 v93; // x1
  __int64 v94; // x1
  __int64 v95; // x1
  __int64 v96; // x1
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x1
  __int64 v100; // x1
  __int64 v101; // x1
  __int64 v102; // x1
  __int64 v103; // x1
  __int64 v104; // x1
  __int64 v105; // x1
  __int64 v106; // x1
  __int64 v107; // x1
  __int64 v108; // x1
  __int64 v109; // x1
  __int64 v110; // x1
  __int64 v111; // x1
  __int64 v112; // x1
  __int64 v113; // x1
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // x1
  __int64 v117; // x1
  __int64 v118; // x1
  __int64 v119; // x1
  __int64 v120; // x1
  __int64 v121; // x1
  __int64 v122; // x1
  struct NetworkManager_o *_4__this; // x20
  struct RequestBase_o *work; // x8
  NetworkManager__RequestCR_d__212_o **p_work; // x25
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_String_o **p_errorCode_5__3; // x21
  BattleServantConfConponent_o *p_errorLocalizeCode_5__4; // x23
  BattleServantConfConponent_o *p_errorAction_5__5; // x26
  BattleServantConfConponent_o *p_failData_5__6; // x24
  BattleServantConfConponent_o *p_responseList_5__7; // x22
  DelightWorks_Network_UnityWebRequestWWW_o **v137; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v138; // x8
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  DelightWorks_Network_UnityWebRequestWWW_o *v145; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v146; // x8
  NetworkManager__RequestCR_d__212_o **v147; // x21
  System_Int32_array **v148; // x0
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v162; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  uint64_t v170; // x21
  struct RequestBase_o *v171; // x8
  __int64 v172; // x11
  ManagerConfig_c *v173; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  __int64 v175; // x0
  __int64 v176; // x1
  __int64 v177; // x2
  System_String_o *v178; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v179; // x20
  BattleServantConfConponent_o *p_www_5__10; // x19
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  System_Int32_array **klass; // x1
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  System_String_o **p_data_5__2; // x21
  System_Int32_array **v195; // x0
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  UnityEngine_WWWForm_o *WWWForm; // x21
  __int64 v203; // x1
  __int64 v204; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v205; // x22
  Il2CppObject *v206; // x23
  Il2CppObject *key; // x24
  System_String_o *v208; // x24
  System_String_o *v209; // x0
  struct System_Collections_Generic_Queue_RequestBase__o *communicationWaitList; // x8
  float progress_k__BackingField; // s8
  float loadProgress_5__13; // s9
  System_String_array **v213; // x2
  System_String_array **v214; // x3
  System_Boolean_array **v215; // x4
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  float v219; // s0
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  struct System_Collections_Generic_Queue_RequestBase__o *v226; // x8
  System_Int32_array **v227; // x1
  struct System_String_o **v228; // x22
  System_String_array **v229; // x2
  System_String_array **v230; // x3
  System_Boolean_array **v231; // x4
  System_Int32_array **v232; // x5
  System_Int32_array *v233; // x6
  System_Int32_array *v234; // x7
  __int64 *v235; // x8
  System_Int32_array **error_k__BackingField; // x1
  System_String_array **v237; // x2
  System_String_array **v238; // x3
  System_Boolean_array **v239; // x4
  System_Int32_array **v240; // x5
  System_Int32_array *v241; // x6
  System_Int32_array *v242; // x7
  System_Int32_array **v243; // x1
  struct DelightWorks_Network_UnityWebRequestWWW_o *v244; // x8
  System_String_o *v245; // x24
  NetworkManager__RequestCR_d__212_o *v246; // x24
  System_String_o *v247; // x24
  uint32_t v248; // w0
  __int64 *v249; // x8
  System_Int32_array **v250; // x1
  System_Int32_array **v251; // x1
  BattleServantConfConponent_o *v252; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *responseHeaders_k__BackingField; // x0
  System_String_array **v254; // x2
  System_String_array **v255; // x3
  System_Boolean_array **v256; // x4
  System_Int32_array **v257; // x5
  System_Int32_array *v258; // x6
  System_Int32_array *v259; // x7
  System_String_array **v260; // x2
  System_String_array **v261; // x3
  System_Boolean_array **v262; // x4
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  System_String_array **v266; // x2
  System_String_array **v267; // x3
  System_Boolean_array **v268; // x4
  System_Int32_array **v269; // x5
  System_Int32_array *v270; // x6
  System_Int32_array *v271; // x7
  System_Int32_array **v272; // x1
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
  System_String_array **v287; // x2
  System_String_array **v288; // x3
  System_Boolean_array **v289; // x4
  System_Int32_array **v290; // x5
  System_Int32_array *v291; // x6
  System_Int32_array *v292; // x7
  BattleServantConfConponent_o *v293; // x0
  System_Int32_array **v294; // x1
  System_String_array **v295; // x2
  System_String_array **v296; // x3
  System_Boolean_array **v297; // x4
  System_Int32_array **v298; // x5
  System_Int32_array *v299; // x6
  System_Int32_array *v300; // x7
  System_Int32_array **v301; // x1
  System_Int32_array **v302; // x1
  System_String_array **v303; // x2
  System_String_array **v304; // x3
  System_Boolean_array **v305; // x4
  System_Int32_array **v306; // x5
  System_Int32_array *v307; // x6
  System_Int32_array *v308; // x7
  _BOOL4 v309; // w26
  System_String_array **v310; // x2
  System_String_array **v311; // x3
  System_Boolean_array **v312; // x4
  System_Int32_array **v313; // x5
  System_Int32_array *v314; // x6
  System_Int32_array *v315; // x7
  System_Int32_array **v316; // x1
  System_String_array **v317; // x2
  System_String_array **v318; // x3
  System_Boolean_array **v319; // x4
  System_Int32_array **v320; // x5
  System_Int32_array *v321; // x6
  System_Int32_array *v322; // x7
  __int64 v323; // x1
  System_String_array **v324; // x2
  System_String_array **v325; // x3
  System_Boolean_array **v326; // x4
  System_Int32_array **v327; // x5
  System_Int32_array *v328; // x6
  System_Int32_array *v329; // x7
  System_String_o *errorLocalizeCode_5__4; // x24
  System_String_o *data; // x28
  __int64 v332; // x1
  System_String_o *errorAction_5__5; // x24
  System_Int32_array ***v334; // x8
  System_String_o *data_5__2; // x22
  NetworkManager__RequestCR_d__212_o *v336; // x22
  System_String_array **v337; // x2
  System_String_array **v338; // x3
  System_Boolean_array **v339; // x4
  System_Int32_array **v340; // x5
  System_Int32_array *v341; // x6
  System_Int32_array *v342; // x7
  Il2CppObject *v343; // x23
  System_Int32_array **v344; // x0
  ResponseData_array **v345; // x23
  System_String_array **v346; // x2
  System_String_array **v347; // x3
  System_Boolean_array **v348; // x4
  System_Int32_array **v349; // x5
  System_Int32_array *v350; // x6
  System_Int32_array *v351; // x7
  struct ResponseData_array *responseList_5__7; // x8
  __int64 v353; // x25
  int v354; // w9
  Il2CppClass **v355; // x8
  ResponseData_o *v356; // x24
  System_String_o *v357; // x19
  System_String_o *v358; // x21
  System_String_o *v359; // x22
  System_String_o *v360; // x23
  __int64 v361; // x1
  __int64 v362; // x2
  System_Action_o *v363; // x22
  System_Collections_Generic_SortedDictionary_string__string__o *v364; // x23
  System_String_o *AuthCode; // x0
  NetworkManager_c *v366; // x8
  System_String_o *v367; // x23
  int32_t v368; // w8
  NetworkManager_c *v369; // x0
  __int64 *v370; // x8
  System_String_o *v371; // x24
  bool isNoRedirect_5__9; // w24
  __int64 v373; // x1
  __int64 v374; // x2
  DelightWorks_Network_UnityWebRequestWWW_o *v375; // x25
  System_String_array **v376; // x2
  System_String_array **v377; // x3
  System_Boolean_array **v378; // x4
  System_Int32_array **v379; // x5
  System_Int32_array *v380; // x6
  System_Int32_array *v381; // x7
  struct RequestBase_o *v382; // x8
  __int64 v383; // x10
  ManagerConfig_c *v384; // x0
  float *p_GAME_DATA_TIMEOUT; // x8
  float unscaledTime; // s0
  float timeout_5__11; // s1
  __int64 v388; // x1
  __int64 v389; // x2
  UnityEngine_WaitForEndOfFrame_o *v390; // x22
  System_String_array **v391; // x2
  System_String_array **v392; // x3
  System_Boolean_array **v393; // x4
  System_Int32_array **v394; // x5
  System_Int32_array *v395; // x6
  System_Int32_array *v396; // x7
  System_Int32_array **v397; // x1
  System_Int32_array **v398; // x1
  System_String_array **v399; // x2
  System_String_array **v400; // x3
  System_Boolean_array **v401; // x4
  System_Int32_array **v402; // x5
  System_Int32_array *v403; // x6
  System_Int32_array *v404; // x7
  System_Int32_array **v405; // x1
  System_String_array **v406; // x2
  System_String_array **v407; // x3
  System_Boolean_array **v408; // x4
  System_Int32_array **v409; // x5
  System_Int32_array *v410; // x6
  System_Int32_array *v411; // x7
  CommonUI_o *Instance; // x24
  __int64 v413; // x1
  __int64 v414; // x2
  ErrorDialog_ClickDelegate_o *v415; // x25
  struct DelightWorks_Network_UnityWebRequestWWW_o *www_5__10; // x8
  System_Int32_array **wait_5__14; // x1
  bool result; // w0
  System_Int32_array **text; // x0
  System_String_array **v420; // x2
  System_String_array **v421; // x3
  System_Boolean_array **v422; // x4
  System_Int32_array **v423; // x5
  System_Int32_array *v424; // x6
  System_Int32_array *v425; // x7
  struct RequestBase_o *v426; // x8
  __int64 v427; // x10
  int v428; // w22
  System_String_o *Item; // x22
  int _2__current; // w8
  System_String_array *v431; // x0
  System_String_array **v432; // x2
  System_String_array **v433; // x3
  System_Boolean_array **v434; // x4
  System_Int32_array **v435; // x5
  System_Int32_array *v436; // x6
  System_Int32_array *v437; // x7
  NetworkManager_c *v438; // x8
  System_String_array *v439; // x22
  struct NetworkManager_StaticFields *v440; // x0
  System_Int32_array **v441; // x1
  int max_length; // w8
  unsigned int v443; // w25
  Il2CppClass **v444; // x8
  System_String_o *v445; // x23
  NetworkManager_c *v446; // x0
  System_Int32_array **v447; // x0
  struct NetworkManager_StaticFields *v448; // x8
  System_String_array **v449; // x2
  System_String_array **v450; // x3
  System_Boolean_array **v451; // x4
  System_Int32_array **v452; // x5
  System_Int32_array *v453; // x6
  System_Int32_array *v454; // x7
  __int64 v455; // x1
  ManagementManager_c *v456; // x0
  _BOOL4 isDuringStartup; // w8
  __int64 *v458; // x9
  __int64 *v459; // x10
  System_String_array **v460; // x2
  System_String_array **v461; // x3
  System_Boolean_array **v462; // x4
  System_Int32_array **v463; // x5
  System_Int32_array *v464; // x6
  System_Int32_array *v465; // x7
  NetworkManager__RequestCR_d__212_o *v466; // x25
  System_Int32_array **v467; // x1
  ManagerConfig_c *v468; // x0
  ManagementManager_c *v469; // x0
  System_Int32_array **v470; // x1
  System_String_o *v471; // x27
  struct ResponseFailData_o *v472; // x8
  BattleServantConfConponent_c *v473; // x8
  System_String_o *v474; // x0
  System_String_o **v475; // x20
  System_String_o *v476; // x28
  bool v477; // w8
  System_String_o *v478; // x28
  uint32_t v479; // w0
  System_String_array **v480; // x2
  System_String_array **v481; // x3
  System_Boolean_array **v482; // x4
  System_Int32_array **v483; // x5
  System_Int32_array *v484; // x6
  System_Int32_array *v485; // x7
  __int64 v486; // x1
  __int64 v487; // x2
  NetworkManager_c *v488; // x0
  __int64 v489; // x1
  __int64 v490; // x2
  __int64 v491; // x1
  NetworkManager_c *v492; // x0
  __int64 v493; // x1
  __int64 v494; // x2
  NetworkManager_c *v495; // x0
  __int64 v496; // x1
  __int64 v497; // x2
  __int64 v498; // x1
  __int64 v499; // x2
  NetworkManager_c *v500; // x0
  System_Action_o *v501; // x26
  __int64 v502; // x1
  __int64 v503; // x2
  __int64 v504; // x1
  __int64 v505; // x2
  System_Action_o *v506; // x0
  __int64 *v507; // x8
  CommonUI_o *v508; // x26
  __int64 v509; // x1
  __int64 v510; // x2
  CommonConfirmDialog_ClickDelegate_o *v511; // x28
  BattleServantConfConponent_c *v512; // x8
  System_String_o *declaringType; // x26
  int castClass_low; // w28
  __int64 v515; // x1
  System_String_array **v516; // x2
  System_String_array **v517; // x3
  System_Boolean_array **v518; // x4
  System_Int32_array **v519; // x5
  System_Int32_array *v520; // x6
  System_Int32_array *v521; // x7
  System_Int32_array **parent; // x26
  NetworkManager_c *v523; // x0
  struct NetworkManager_StaticFields *v524; // x0
  __int64 v525; // x1
  System_String_array **v526; // x2
  System_String_array **v527; // x3
  System_Boolean_array **v528; // x4
  System_Int32_array **v529; // x5
  System_Int32_array *v530; // x6
  System_Int32_array *v531; // x7
  System_Int32_array **generic_class; // x26
  NetworkManager_c *v533; // x0
  struct NetworkManager_StaticFields *v534; // x0
  CommonUI_o *v535; // x28
  __int64 v536; // x1
  __int64 v537; // x2
  ErrorDialog_ClickDelegate_o *v538; // x26
  System_String_array **v539; // x2
  System_String_array **v540; // x3
  System_Boolean_array **v541; // x4
  System_Int32_array **v542; // x5
  System_Int32_array *v543; // x6
  System_Int32_array *v544; // x7
  System_String_array **v545; // x2
  System_String_array **v546; // x3
  System_Boolean_array **v547; // x4
  System_Int32_array **v548; // x5
  System_Int32_array *v549; // x6
  System_Int32_array *v550; // x7
  System_String_array **v551; // x2
  System_String_array **v552; // x3
  System_Boolean_array **v553; // x4
  System_Int32_array **v554; // x5
  System_Int32_array *v555; // x6
  System_Int32_array *v556; // x7
  System_String_array **v557; // x2
  System_String_array **v558; // x3
  System_Boolean_array **v559; // x4
  System_Int32_array **v560; // x5
  System_Int32_array *v561; // x6
  System_Int32_array *v562; // x7
  System_String_array **v563; // x2
  System_String_array **v564; // x3
  System_Boolean_array **v565; // x4
  System_Int32_array **v566; // x5
  System_Int32_array *v567; // x6
  System_Int32_array *v568; // x7
  __int64 v569; // x1
  __int64 v570; // x2
  UnityEngine_WaitForEndOfFrame_o *v571; // x20
  BattleServantConfConponent_o *v572; // x19
  System_String_array **v573; // x2
  System_String_array **v574; // x3
  System_Boolean_array **v575; // x4
  System_Int32_array **v576; // x5
  System_Int32_array *v577; // x6
  System_Int32_array *v578; // x7
  System_Int32_array **v579; // x19
  NetworkManager_c *v580; // x0
  BattleServantConfConponent_o *p_errorDialogResponseData; // x0
  System_String_array **v582; // x2
  System_String_array **v583; // x3
  System_Boolean_array **v584; // x4
  System_Int32_array **v585; // x5
  System_Int32_array *v586; // x6
  System_Int32_array *v587; // x7
  System_Int32_array **nid; // x26
  System_String_array **v589; // x2
  System_String_array **v590; // x3
  System_Boolean_array **v591; // x4
  System_Int32_array **v592; // x5
  System_Int32_array *v593; // x6
  System_Int32_array *v594; // x7
  System_Int32_array **v595; // x1
  System_String_array **v596; // x2
  System_String_array **v597; // x3
  System_Boolean_array **v598; // x4
  System_Int32_array **v599; // x5
  System_Int32_array *v600; // x6
  System_Int32_array *v601; // x7
  System_Int32_array **resCode; // x26
  System_String_array **v603; // x2
  System_String_array **v604; // x3
  System_Boolean_array **v605; // x4
  System_Int32_array **v606; // x5
  System_Int32_array *v607; // x6
  System_Int32_array *v608; // x7
  System_Int32_array **v609; // x1
  System_Int32_array **v610; // x0
  System_String_array **v611; // x2
  System_String_array **v612; // x3
  System_Boolean_array **v613; // x4
  System_Int32_array **v614; // x5
  System_Int32_array *v615; // x6
  System_Int32_array *v616; // x7
  __int64 v617; // x1
  __int64 v618; // x2
  ResponseFailData_o *v619; // x26
  struct ResponseFailData_o **v620; // x25
  System_String_array **v621; // x2
  System_String_array **v622; // x3
  System_Boolean_array **v623; // x4
  System_Int32_array **v624; // x5
  System_Int32_array *v625; // x6
  System_Int32_array *v626; // x7
  struct ResponseFailData_o *failData_5__6; // x8
  System_String_array **v628; // x2
  System_String_array **v629; // x3
  System_Boolean_array **v630; // x4
  System_Int32_array **v631; // x5
  System_Int32_array *v632; // x6
  System_Int32_array *v633; // x7
  System_Int32_array ***p_action; // x8
  System_Int32_array **v635; // x1
  struct RequestBase_o *v636; // x9
  PurchaseByBank_UnityIap_Request_c *v637; // x10
  __int64 v638; // x11
  int v639; // w8
  RequestBase_c *v640; // x9
  __int64 v641; // x11
  ResponseData_array *v642; // x23
  ResponseData_o *v643; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *fail; // x0
  System_String_o *v645; // x0
  System_String_o *v646; // x23
  System_String_array **v647; // x2
  System_String_array **v648; // x3
  System_Boolean_array **v649; // x4
  System_Int32_array **v650; // x5
  System_Int32_array *v651; // x6
  System_Int32_array *v652; // x7
  System_Int32_array **v653; // x1
  WebViewManager_o *v654; // x23
  struct ResponseData_array *v655; // x8
  unsigned __int64 v656; // x23
  unsigned __int64 v657; // x9
  ResponseData_o *v658; // x22
  System_Int32_array **v659; // x0
  System_String_array **v660; // x2
  System_String_array **v661; // x3
  System_Boolean_array **v662; // x4
  System_Int32_array **v663; // x5
  System_Int32_array *v664; // x6
  System_Int32_array *v665; // x7
  __int64 v666; // x1
  __int64 v667; // x2
  ResponseFailData_o *v668; // x23
  struct ResponseFailData_o **v669; // x22
  System_String_array **v670; // x2
  System_String_array **v671; // x3
  System_Boolean_array **v672; // x4
  System_Int32_array **v673; // x5
  System_Int32_array *v674; // x6
  System_Int32_array *v675; // x7
  struct ResponseFailData_o *v676; // x8
  System_String_array **v677; // x2
  System_String_array **v678; // x3
  System_Boolean_array **v679; // x4
  System_Int32_array **v680; // x5
  System_Int32_array *v681; // x6
  System_Int32_array *v682; // x7
  System_Int32_array ***v683; // x8
  System_Int32_array **v684; // x1
  System_Action_o *v685; // x28
  System_String_o *v686; // x1
  System_String_o *v687; // x3
  int32_t v688; // w4
  NetworkManager_o *v689; // x0
  System_String_o *v690; // x2
  System_Action_o *v691; // x5
  System_Action_o *v692; // x26
  __int64 *v693; // x8
  ManagementManager_c *v694; // x0
  _BOOL4 v695; // w28
  WebViewManager_o *v696; // x0
  __int64 v697; // x1
  __int64 v698; // x2
  CommonUI_o *v699; // x28
  ErrorDialog_ClickDelegate_o *v700; // x26
  bool v701; // w0
  __int64 *v702; // x8
  CommonUI_o *v703; // x28
  __int64 v704; // x1
  __int64 v705; // x2
  ErrorDialog_ClickDelegate_o *v706; // x26
  ErrorDialog_ClickDelegate_o *v707; // x26
  System_Int32_array **v708; // x1
  struct System_String_o **v709; // x23
  __int64 *v710; // x8
  System_Int32_array **v711; // x1
  __int64 v712; // x0
  __int64 v713; // x0
  int32_t cancleTxt; // [xsp+10h] [xbp-100h]
  int32_t cancleTxta; // [xsp+10h] [xbp-100h]
  System_String_o *cancleTxtb; // [xsp+10h] [xbp-100h]
  System_String_o *cancleTxtc; // [xsp+10h] [xbp-100h]
  System_String_o *value; // [xsp+18h] [xbp-F8h]
  System_String_o *valuea; // [xsp+18h] [xbp-F8h]
  System_String_o *valueb; // [xsp+18h] [xbp-F8h]
  System_String_o *title; // [xsp+20h] [xbp-F0h]
  NetworkManager_o *v722; // [xsp+28h] [xbp-E8h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v723; // [xsp+30h] [xbp-E0h] BYREF
  int v724[2]; // [xsp+58h] [xbp-B8h]
  int v725; // [xsp+60h] [xbp-B0h]
  System_Xml_Schema_XmlSchemaObject_o *v726; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v727; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_SortedDictionary_string__string__o *authParams; // [xsp+98h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+A0h] [xbp-70h] BYREF
  System_DateTime_o v730; // 0:x0.8
  System_DateTime_o v731; // 0:x0.8

  v3 = this;
  if ( (byte_4217A7B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&BattleData_TypeInfo, v4);
    sub_B0D8A4(&char___TypeInfo, v5);
    sub_B0D8A4(&ErrorDialog_ClickDelegate_TypeInfo, v6);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_B0D8A4(&System_Convert_TypeInfo, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&System_DateTime_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v19);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v23);
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_ResponseData___, v24);
    sub_B0D8A4(&JsonManager_TypeInfo, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v27);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v28);
    sub_B0D8A4(&ManagementManager_TypeInfo, v29);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v30);
    sub_B0D8A4(&Method_NetworkManager_OnClickErrorDialog__, v31);
    sub_B0D8A4(&Method_NetworkManager_OnClickErrorReboot__, v32);
    sub_B0D8A4(&Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__, v33);
    sub_B0D8A4(&Method_NetworkManager_OnClickErrorRetryDialog__, v34);
    sub_B0D8A4(&Method_NetworkManager_OnClickErrorStay__, v35);
    sub_B0D8A4(&Method_NetworkManager_OnClickErrorTerminal__, v36);
    sub_B0D8A4(&Method_NetworkManager_OnClickRefreshTerminal__, v37);
    sub_B0D8A4(&Method_NetworkManager_OnClickReloadCache__, v38);
    sub_B0D8A4(&Method_NetworkManager_OnClickStore__, v39);
    sub_B0D8A4(&Method_NetworkManager_OnClickUserDelete__, v40);
    sub_B0D8A4(&Method_NetworkManager__RequestCR_b__212_0__, v41);
    sub_B0D8A4(&NetworkManager_TypeInfo, v42);
    sub_B0D8A4(&PurchaseByBank_UnityIap_Request_TypeInfo, v43);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__, v44);
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, v45);
    sub_B0D8A4(&ResponseFailData_TypeInfo, v46);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v47);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v49);
    sub_B0D8A4(&string___TypeInfo, v50);
    sub_B0D8A4(&TopGameDataRequest_TypeInfo, v51);
    sub_B0D8A4(&TopLoginRequest_TypeInfo, v52);
    sub_B0D8A4(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo, v53);
    sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v54);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v55);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v56);
    sub_B0D8A4(&StringLiteral_15583/*"X-SERVER-TIME"*/, v57);
    sub_B0D8A4(&StringLiteral_17935/*"data_update"*/, v58);
    sub_B0D8A4(&StringLiteral_9312/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/, v59);
    sub_B0D8A4(&StringLiteral_19952/*"invalid_battle"*/, v60);
    sub_B0D8A4(&StringLiteral_21830/*"reload_cache"*/, v61);
    sub_B0D8A4(&StringLiteral_7118/*"HTTP"*/, v62);
    sub_B0D8A4(&StringLiteral_1182/*"400"*/, v63);
    sub_B0D8A4(&StringLiteral_21869/*"result"*/, v64);
    sub_B0D8A4(&StringLiteral_9311/*"NETWORK_ERROR_SERVER_AUTH_MESSAGE"*/, v65);
    sub_B0D8A4(&StringLiteral_19125/*"goto_login_access"*/, v66);
    sub_B0D8A4(&StringLiteral_19910/*"internal server error"*/, v67);
    sub_B0D8A4(&StringLiteral_21862/*"response error "*/, v68);
    sub_B0D8A4(&StringLiteral_21861/*"response"*/, v69);
    sub_B0D8A4(&StringLiteral_22391/*"stay"*/, v70);
    sub_B0D8A4(&StringLiteral_1184/*"401"*/, v71);
    sub_B0D8A4(&StringLiteral_9300/*"NETWORK_ERROR_BOOT_MESSAGE"*/, v72);
    sub_B0D8A4(&StringLiteral_7726/*"Internal Server Error"*/, v73);
    sub_B0D8A4(&StringLiteral_15139/*"User-Agent"*/, v74);
    sub_B0D8A4(&StringLiteral_21879/*"retry"*/, v75);
    sub_B0D8A4(&StringLiteral_9315/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/, v76);
    sub_B0D8A4(&StringLiteral_9313/*"NETWORK_ERROR_SERVER_CANCEL_MESSAGE"*/, v77);
    sub_B0D8A4(&StringLiteral_16630/*"background cancel"*/, v78);
    sub_B0D8A4(&StringLiteral_1195/*"500"*/, v79);
    sub_B0D8A4(&StringLiteral_9304/*"NETWORK_ERROR_CSID_CODE"*/, v80);
    sub_B0D8A4(&StringLiteral_21863/*"response execute error "*/, v81);
    sub_B0D8A4(&StringLiteral_17253/*"canceled_purchase_error"*/, v82);
    sub_B0D8A4(&StringLiteral_1197/*"502"*/, v83);
    sub_B0D8A4(&StringLiteral_1199/*"503"*/, v84);
    sub_B0D8A4(&StringLiteral_4314/*"Cookie"*/, v85);
    sub_B0D8A4(&StringLiteral_9319/*"NETWORK_USER_DELETE_DECIDE"*/, v86);
    sub_B0D8A4(&StringLiteral_19953/*"invalid_user"*/, v87);
    sub_B0D8A4(&StringLiteral_9301/*"NETWORK_ERROR_BOOT_RETRY_CANCEL"*/, v88);
    sub_B0D8A4(&StringLiteral_16424/*"app_version_up"*/, v89);
    sub_B0D8A4(&StringLiteral_1530/*"?"*/, v90);
    sub_B0D8A4(&StringLiteral_9314/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/, v91);
    sub_B0D8A4(&StringLiteral_21189/*"none data"*/, v92);
    sub_B0D8A4(&StringLiteral_9303/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/, v93);
    sub_B0D8A4(&StringLiteral_21506/*"path="*/, v94);
    sub_B0D8A4(&StringLiteral_16576/*"authCode"*/, v95);
    sub_B0D8A4(&StringLiteral_446/*"&"*/, v96);
    sub_B0D8A4(&StringLiteral_21812/*"refresh_terminal"*/, v97);
    sub_B0D8A4(&StringLiteral_19126/*"goto_title"*/, v98);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v99);
    sub_B0D8A4(&StringLiteral_1269/*";"*/, v100);
    sub_B0D8A4(&StringLiteral_17707/*"connect time over"*/, v101);
    sub_B0D8A4(&StringLiteral_21791/*"reconnection"*/, v102);
    sub_B0D8A4(&StringLiteral_12405/*"STATUS"*/, v103);
    sub_B0D8A4(&StringLiteral_16249/*"_userId="*/, v104);
    sub_B0D8A4(&StringLiteral_18095/*"do_signup"*/, v105);
    sub_B0D8A4(&StringLiteral_9318/*"NETWORK_USER_DELETE_CANCEL"*/, v106);
    sub_B0D8A4(&StringLiteral_17223/*"cache"*/, v107);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v108);
    sub_B0D8A4(&StringLiteral_3278/*"COMMON_CONFIRM_RETRY"*/, v109);
    sub_B0D8A4(&StringLiteral_22402/*"stay_no_dialog"*/, v110);
    sub_B0D8A4(&StringLiteral_9316/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v111);
    sub_B0D8A4(&StringLiteral_1187/*"404"*/, v112);
    sub_B0D8A4(&StringLiteral_21190/*"none response data"*/, v113);
    sub_B0D8A4(&StringLiteral_20425/*"maint"*/, v114);
    sub_B0D8A4(&StringLiteral_21521/*"pending_purchase_error"*/, v115);
    sub_B0D8A4(&StringLiteral_98/*" ("*/, v116);
    sub_B0D8A4(&StringLiteral_1/*""*/, v117);
    sub_B0D8A4(&StringLiteral_9302/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/, v118);
    sub_B0D8A4(&StringLiteral_12100/*"SET-COOKIE"*/, v119);
    sub_B0D8A4(&StringLiteral_1165/*"302"*/, v120);
    sub_B0D8A4(&StringLiteral_9317/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v121);
    this = (NetworkManager__RequestCR_d__212_o *)sub_B0D8A4(&StringLiteral_1150/*"200"*/, v122);
    byte_4217A7B = 1;
  }
  authParams = 0LL;
  dateData = 0LL;
  v726 = 0LL;
  memset(&v727, 0, sizeof(v727));
  v725 = 0;
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      p_work = (NetworkManager__RequestCR_d__212_o **)&v3->fields.work;
      work = v3->fields.work;
      v3->fields.__1__state = -1;
      if ( !work )
        return 0;
      if ( UnityEngine_Application__get_internetReachability(0LL) )
      {
        p_errorCode_5__3 = &v3->fields._errorCode_5__3;
        p_errorLocalizeCode_5__4 = (BattleServantConfConponent_o *)&v3->fields._errorLocalizeCode_5__4;
        p_errorAction_5__5 = (BattleServantConfConponent_o *)&v3->fields._errorAction_5__5;
        p_failData_5__6 = (BattleServantConfConponent_o *)&v3->fields._failData_5__6;
        p_responseList_5__7 = (BattleServantConfConponent_o *)&v3->fields._responseList_5__7;
        goto LABEL_456;
      }
      v357 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v358 = LocalizationManager__Get((System_String_o *)StringLiteral_9303/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
      v359 = LocalizationManager__Get((System_String_o *)StringLiteral_9302/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/, 0LL);
      this = (NetworkManager__RequestCR_d__212_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9301/*"NETWORK_ERROR_BOOT_RETRY_CANCEL"*/, 0LL);
      if ( !*p_work )
        goto LABEL_528;
      v360 = (System_String_o *)this;
      if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__212_o *, void *))(*p_work)->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
              *p_work,
              (*p_work)->klass[1]._1.image) & 1) != 0 )
      {
        v363 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v361, v362);
        System_Action___ctor(v363, (Il2CppObject *)_4__this, Method_NetworkManager__RequestCR_b__212_0__, 0LL);
        if ( !_4__this )
          goto LABEL_528;
        NetworkManager__WarningDialog(_4__this, v357, v358, 0LL, 1, v363, 0LL);
      }
      else
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v415 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v413, v414);
        ErrorDialog_ClickDelegate___ctor(
          v415,
          (Il2CppObject *)_4__this,
          Method_NetworkManager_OnClickErrorRetryDialog__,
          0LL);
        if ( !Instance )
          goto LABEL_528;
        CommonUI__OpenRetryDialog_17015640(Instance, v357, v358, v359, v360, v415, 0, 0LL);
      }
      return 0;
    case 1:
      delay = v3->fields.delay;
      v3->fields.__1__state = -1;
      if ( delay <= 0.0 )
        goto LABEL_25;
      v162 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
      UnityEngine_WaitForSeconds___ctor(v162, delay, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v162;
      p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
      sub_B0D840(p__2__current, (System_Int32_array **)v162, v164, v165, v166, v167, v168, v169);
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 2;
      return 1;
    case 2:
      v3->fields.__1__state = -1;
LABEL_25:
      if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_DateTime_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      }
      dateData = System_DateTime__get_Now(0LL).fields.dateData;
      v730.fields.dateData = (uint64_t)&dateData;
      v170 = System_DateTime__ToUniversalTime(v730, 0LL).fields.dateData;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v731.fields.dateData = v170;
      v3->fields._startTime_5__8 = NetworkManager__getTime_25503776(v731, 0LL);
      v171 = v3->fields.work;
      if ( v171 )
      {
        v172 = *(&TopGameDataRequest_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v171->klass->_2.bitflags2 + 1) >= (unsigned int)v172
          && (TopGameDataRequest_c *)v171->klass->_2.typeHierarchy[v172 - 1] == TopGameDataRequest_TypeInfo )
        {
          LOBYTE(v171) = v171[1].klass;
        }
        else
        {
          LOBYTE(v171) = 0;
        }
      }
      v3->fields._isNoRedirect_5__9 = (char)v171;
      v173 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v173 = ManagerConfig_TypeInfo;
      }
      static_fields = v173->static_fields;
      if ( static_fields->UseMock )
      {
        if ( (BYTE3(v173->vtable._0_Equals.methodPtr) & 4) != 0 && !v173->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v173);
          static_fields = ManagerConfig_TypeInfo->static_fields;
        }
        if ( static_fields->IsNetworkMock )
        {
          this = (NetworkManager__RequestCR_d__212_o *)v3->fields.work;
          if ( !this )
            goto LABEL_528;
          v175 = ((__int64 (__fastcall *)(NetworkManager__RequestCR_d__212_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                   this,
                   this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
          if ( v175 )
          {
            v178 = (System_String_o *)v175;
            v179 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_B0D974(
                                                                  DelightWorks_Network_UnityWebRequestWWW_TypeInfo,
                                                                  v176,
                                                                  v177);
            DelightWorks_Network_UnityWebRequestWWW___ctor(v179, v178, 0LL);
            v3->fields._www_5__10 = v179;
            p_www_5__10 = (BattleServantConfConponent_o *)&v3->fields._www_5__10;
            sub_B0D840(p_www_5__10, (System_Int32_array **)v179, v181, v182, v183, v184, v185, v186);
            klass = (System_Int32_array **)p_www_5__10->klass;
            *(_QWORD *)&p_www_5__10[-1].fields.ClassSkillOffset = p_www_5__10->klass;
            sub_B0D840(
              (BattleServantConfConponent_o *)((char *)p_www_5__10 - 96),
              klass,
              v188,
              v189,
              v190,
              v191,
              v192,
              v193);
            LODWORD(p_www_5__10[-1].fields.ClassSkillList) = 3;
            return 1;
          }
        }
LABEL_46:
        p_data_5__2 = &v3->fields._data_5__2;
        if ( !v3->fields._data_5__2 )
        {
          this = (NetworkManager__RequestCR_d__212_o *)v3->fields.work;
          if ( !this )
            goto LABEL_528;
          v195 = (System_Int32_array **)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__212_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                          this,
                                          this->klass->vtable._6_MoveNext.methodPtr);
          *p_data_5__2 = (System_String_o *)v195;
          sub_B0D840((BattleServantConfConponent_o *)&v3->fields._data_5__2, v195, v196, v197, v198, v199, v200, v201);
          if ( System_String__op_Equality(*p_data_5__2, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
          {
            this = (NetworkManager__RequestCR_d__212_o *)v3->fields.work;
            if ( !this )
              goto LABEL_528;
            this = (NetworkManager__RequestCR_d__212_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__212_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                           this,
                                                           this->klass[1]._1.image);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (NetworkManager__RequestCR_d__212_o *)v3->fields.work;
              if ( !this )
                goto LABEL_528;
              this = (NetworkManager__RequestCR_d__212_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__212_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (NetworkManager__RequestCR_d__212_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !this )
                  goto LABEL_528;
                CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
              }
            }
            if ( !_4__this )
              goto LABEL_528;
            NetworkManager__OnEndCommunication(_4__this, v3->fields.work, 0LL, 0LL);
            return 0;
          }
        }
        goto LABEL_130;
      }
      if ( v3->fields._data_5__2 )
        goto LABEL_130;
      this = (NetworkManager__RequestCR_d__212_o *)v3->fields.work;
      if ( !this )
        goto LABEL_528;
      WWWForm = RequestBase__getWWWForm((RequestBase_o *)this, &authParams, 0LL);
      v205 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                             System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                                             v203,
                                                                                             v204);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v205,
        (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
      if ( !WWWForm )
        goto LABEL_528;
      this = (NetworkManager__RequestCR_d__212_o *)UnityEngine_WWWForm__get_headers(WWWForm, 0LL);
      if ( !this )
        goto LABEL_528;
      System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v723,
        (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)this,
        (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
      v727 = v723;
      while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                &v727,
                (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
      {
        key = v727.fields.current.fields.key;
        v206 = v727.fields.current.fields.value;
        if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Convert_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        }
        v208 = System_Convert__ToString_41931728((System_String_o *)key, 0LL);
        v209 = System_Convert__ToString_41931728((System_String_o *)v206, 0LL);
        if ( !v205 )
          sub_B0D97C(v209);
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          v205,
          (System_Xml_XmlQualifiedName_o *)v208,
          (System_Xml_Schema_XmlSchemaObject_o *)v209,
          (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
      }
      v724[0] = 731;
      v725 = 1;
      System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
        &v727,
        (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
      v725 = 0;
      this = (NetworkManager__RequestCR_d__212_o *)NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (NetworkManager__RequestCR_d__212_o *)NetworkManager_TypeInfo;
      }
      if ( this[1].fields.work[1].fields.paramInteger )
      {
        if ( (BYTE3(this[2].klass) & 4) != 0 && !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
          j_il2cpp_runtime_class_init_0(this);
        if ( !v205 )
          goto LABEL_528;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          v205,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_15139/*"User-Agent"*/,
          (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->userAgent,
          (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
        this = (NetworkManager__RequestCR_d__212_o *)NetworkManager_TypeInfo;
      }
      if ( (BYTE3(this[2].klass) & 4) != 0 && !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (NetworkManager__RequestCR_d__212_o *)NetworkManager_TypeInfo;
      }
      if ( this[1].fields.work[3].monitor )
      {
        if ( (BYTE3(this[2].klass) & 4) != 0 && !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
          j_il2cpp_runtime_class_init_0(this);
        if ( !v205 )
          goto LABEL_528;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          v205,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_4314/*"Cookie"*/,
          (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->sessionId,
          (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
        this = (NetworkManager__RequestCR_d__212_o *)NetworkManager_TypeInfo;
      }
      v364 = authParams;
      if ( (BYTE3(this[2].klass) & 4) != 0 && !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
        j_il2cpp_runtime_class_init_0(this);
      AuthCode = NetworkManager__GetAuthCode(v364, 0LL);
      if ( AuthCode )
        UnityEngine_WWWForm__AddField(WWWForm, (System_String_o *)StringLiteral_16576/*"authCode"*/, AuthCode, 0LL);
      this = (NetworkManager__RequestCR_d__212_o *)v3->fields.work;
      if ( !this )
        goto LABEL_528;
      this = (NetworkManager__RequestCR_d__212_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__212_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                     this,
                                                     this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
      v366 = NetworkManager_TypeInfo;
      v367 = (System_String_o *)this;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v366 = NetworkManager_TypeInfo;
      }
      if ( v366->static_fields->userId )
      {
        if ( !v367 )
          goto LABEL_528;
        v368 = System_String__IndexOf_43922252(v367, (System_String_o *)StringLiteral_1530/*"?"*/, 0LL);
        v369 = NetworkManager_TypeInfo;
        if ( v368 >= 0 )
          v370 = &StringLiteral_446/*"&"*/;
        else
          v370 = &StringLiteral_1530/*"?"*/;
        v371 = (System_String_o *)*v370;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v369 = NetworkManager_TypeInfo;
        }
        v367 = System_String__Concat_43853316(
                 v367,
                 v371,
                 (System_String_o *)StringLiteral_16249/*"_userId="*/,
                 v369->static_fields->userId,
                 0LL);
      }
      UnityEngine_WWWForm__get_data(WWWForm, 0LL);
      isNoRedirect_5__9 = v3->fields._isNoRedirect_5__9;
      v375 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_B0D974(
                                                            DelightWorks_Network_UnityWebRequestWWW_TypeInfo,
                                                            v373,
                                                            v374);
      DelightWorks_Network_UnityWebRequestWWW___ctor_26694208(
        v375,
        v367,
        WWWForm,
        (System_Collections_Generic_Dictionary_string__string__o *)v205,
        isNoRedirect_5__9,
        0LL);
      v137 = &v3->fields._www_5__10;
      v3->fields._www_5__10 = v375;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v3->fields._www_5__10,
        (System_Int32_array **)v375,
        v376,
        v377,
        v378,
        v379,
        v380,
        v381);
      v382 = v3->fields.work;
      if ( !v382 )
        goto LABEL_216;
      v383 = *(&TopGameDataRequest_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v382->klass->_2.bitflags2 + 1) >= (unsigned int)v383
        && (TopGameDataRequest_c *)v382->klass->_2.typeHierarchy[v383 - 1] == TopGameDataRequest_TypeInfo )
      {
        v468 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v468 = ManagerConfig_TypeInfo;
        }
        p_GAME_DATA_TIMEOUT = &v468->static_fields->GAME_DATA_TIMEOUT;
      }
      else
      {
LABEL_216:
        v384 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v384 = ManagerConfig_TypeInfo;
        }
        p_GAME_DATA_TIMEOUT = &v384->static_fields->TIMEOUT;
      }
      v3->fields._timeout_5__11 = *p_GAME_DATA_TIMEOUT;
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      timeout_5__11 = v3->fields._timeout_5__11;
      v3->fields._loadProgress_5__13 = 0.0;
      v3->fields._requestTime_5__12 = unscaledTime + timeout_5__11;
      v390 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v388, v389);
      UnityEngine_WaitForEndOfFrame___ctor(v390, 0LL);
      v3->fields._wait_5__14 = v390;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v3->fields._wait_5__14,
        (System_Int32_array **)v390,
        v391,
        v392,
        v393,
        v394,
        v395,
        v396);
LABEL_8:
      if ( !*v137 )
        goto LABEL_528;
      if ( (*v137)->fields._isDone_k__BackingField )
        goto LABEL_10;
      this = (NetworkManager__RequestCR_d__212_o *)v3->fields.work;
      if ( !this )
        goto LABEL_528;
      this = (NetworkManager__RequestCR_d__212_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__212_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                     this,
                                                     this->klass[1]._1.image);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !_4__this )
          goto LABEL_528;
        communicationWaitList = _4__this->fields.communicationWaitList;
        if ( !communicationWaitList )
          goto LABEL_528;
        if ( communicationWaitList->fields._size > 0 )
          goto LABEL_10;
      }
      if ( !*v137 )
        goto LABEL_528;
      progress_k__BackingField = (*v137)->fields._progress_k__BackingField;
      loadProgress_5__13 = v3->fields._loadProgress_5__13;
      v219 = UnityEngine_Time__get_unscaledTime(0LL);
      if ( progress_k__BackingField != loadProgress_5__13 )
      {
        www_5__10 = v3->fields._www_5__10;
        v3->fields._requestTime_5__12 = v219 + v3->fields._timeout_5__11;
        if ( !www_5__10 )
          goto LABEL_528;
        v3->fields._loadProgress_5__13 = www_5__10->fields._progress_k__BackingField;
        goto LABEL_228;
      }
      if ( v219 < v3->fields._requestTime_5__12 )
      {
LABEL_228:
        wait_5__14 = (System_Int32_array **)v3->fields._wait_5__14;
        v3->fields.__2__current = (Il2CppObject *)wait_5__14;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v3->fields.__2__current,
          wait_5__14,
          v213,
          v214,
          v215,
          v216,
          v217,
          v218);
        v3->fields.__1__state = 4;
        return 1;
      }
LABEL_10:
      v138 = *v137;
      if ( !*v137 )
        goto LABEL_528;
      if ( v138->fields._isDone_k__BackingField )
      {
        this = (NetworkManager__RequestCR_d__212_o *)System_String__IsNullOrEmpty(
                                                       v138->fields._error_k__BackingField,
                                                       0LL);
        v145 = *v137;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v145 )
            goto LABEL_528;
          if ( v3->fields._isNoRedirect_5__9 )
          {
            DelightWorks_Network_UnityWebRequestWWW__Dispose(*v137, 0LL);
            goto LABEL_119;
          }
          text = (System_Int32_array **)DelightWorks_Network_UnityWebRequestWWW__get_text(*v137, 0LL);
          v3->fields._data_5__2 = (struct System_String_o *)text;
          sub_B0D840((BattleServantConfConponent_o *)&v3->fields._data_5__2, text, v420, v421, v422, v423, v424, v425);
          this = (NetworkManager__RequestCR_d__212_o *)NetworkManager_TypeInfo;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (NetworkManager__RequestCR_d__212_o *)NetworkManager_TypeInfo;
          }
          if ( this[1].fields.work[3].monitor )
            goto LABEL_119;
          v426 = v3->fields.work;
          if ( !v426 )
            goto LABEL_119;
          v427 = *(&TopLoginRequest_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v426->klass->_2.bitflags2 + 1) < (unsigned int)v427
            || (TopLoginRequest_c *)v426->klass->_2.typeHierarchy[v427 - 1] != TopLoginRequest_TypeInfo )
          {
            goto LABEL_119;
          }
          if ( !*v137 )
            goto LABEL_528;
          this = (NetworkManager__RequestCR_d__212_o *)(*v137)->fields._responseHeaders_k__BackingField;
          if ( !this )
            goto LABEL_528;
          this = (NetworkManager__RequestCR_d__212_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                                         (const MethodInfo_2E4A864 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
          if ( (int)this < 1 )
            goto LABEL_119;
          if ( !*v137 )
            goto LABEL_528;
          this = (NetworkManager__RequestCR_d__212_o *)(*v137)->fields._responseHeaders_k__BackingField;
          if ( !this )
            goto LABEL_528;
          System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v723,
            (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)this,
            (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
          v727 = v723;
          while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                    &v727,
                    (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
            ;
          v724[0] = 1969;
          v428 = ++v725;
          System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
            &v727,
            (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
          if ( v428 && v724[v428 - 1] == 1969 )
            v725 = v428 - 1;
          if ( !*v137 )
            goto LABEL_528;
          this = (NetworkManager__RequestCR_d__212_o *)(*v137)->fields._responseHeaders_k__BackingField;
          if ( !this )
            goto LABEL_528;
          this = (NetworkManager__RequestCR_d__212_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_12100/*"SET-COOKIE"*/,
                                                         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_119;
          if ( !*v137 )
            goto LABEL_528;
          this = (NetworkManager__RequestCR_d__212_o *)(*v137)->fields._responseHeaders_k__BackingField;
          if ( !this )
            goto LABEL_528;
          Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this,
                                      (System_Type_o *)StringLiteral_12100/*"SET-COOKIE"*/,
                                      (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
          this = (NetworkManager__RequestCR_d__212_o *)sub_B0D8BC(char___TypeInfo, 2LL);
          if ( !this )
            goto LABEL_528;
          _2__current = (int)this->fields.__2__current;
          if ( _2__current )
          {
            LOWORD(this->fields.work) = 32;
            if ( _2__current != 1 )
            {
              WORD1(this->fields.work) = 59;
              if ( !Item )
                goto LABEL_528;
              v431 = System_String__Split_43910688(Item, (System_Char_array *)this, 1, 0LL);
              v438 = NetworkManager_TypeInfo;
              v439 = v431;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v438 = NetworkManager_TypeInfo;
              }
              v440 = v438->static_fields;
              v441 = (System_Int32_array **)StringLiteral_1/*""*/;
              v440->sessionId = (struct System_String_o *)StringLiteral_1/*""*/;
              sub_B0D840((BattleServantConfConponent_o *)&v440->sessionId, v441, v432, v433, v434, v435, v436, v437);
              if ( !v439 )
                goto LABEL_528;
              max_length = v439->max_length;
              if ( max_length < 1 )
                goto LABEL_119;
              v443 = 0;
              while ( v443 < max_length )
              {
                v444 = &v439->obj.klass + (int)v443;
                v445 = (System_String_o *)v444[4];
                if ( !v445 )
                  goto LABEL_528;
                this = (NetworkManager__RequestCR_d__212_o *)System_String__StartsWith(
                                                               (System_String_o *)v444[4],
                                                               (System_String_o *)StringLiteral_21506/*"path="*/,
                                                               0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  v446 = NetworkManager_TypeInfo;
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    v446 = NetworkManager_TypeInfo;
                  }
                  v447 = (System_Int32_array **)System_String__Concat_43852188(
                                                  v446->static_fields->sessionId,
                                                  v445,
                                                  (System_String_o *)StringLiteral_1269/*";"*/,
                                                  0LL);
                  v448 = NetworkManager_TypeInfo->static_fields;
                  v448->sessionId = (struct System_String_o *)v447;
                  sub_B0D840((BattleServantConfConponent_o *)&v448->sessionId, v447, v449, v450, v451, v452, v453, v454);
                  max_length = v439->max_length;
                  if ( (int)++v443 < max_length )
                    continue;
                }
                goto LABEL_119;
              }
            }
          }
LABEL_591:
          v712 = sub_B0D9A8(this);
          sub_B0D948(v712, 0LL);
        }
        if ( !v145 )
          goto LABEL_528;
        error_k__BackingField = (System_Int32_array **)v145->fields._error_k__BackingField;
        v3->fields._errorCode_5__3 = (struct System_String_o *)error_k__BackingField;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v3->fields._errorCode_5__3,
          error_k__BackingField,
          v139,
          v140,
          v141,
          v142,
          v143,
          v144);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        if ( NetworkManager__get_UserId(0LL) >= 1 )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          if ( NetworkManager__get_UserId(0LL) % 10 == 1 )
          {
            this = (NetworkManager__RequestCR_d__212_o *)*v137;
            if ( !*v137 )
              goto LABEL_528;
            DelightWorks_Network_UnityWebRequestWWW__ExceptionLog(
              (DelightWorks_Network_UnityWebRequestWWW_o *)this,
              0LL);
          }
        }
        v243 = (System_Int32_array **)StringLiteral_21879/*"retry"*/;
        v3->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_21879/*"retry"*/;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v3->fields._errorAction_5__5,
          v243,
          v237,
          v238,
          v239,
          v240,
          v241,
          v242);
        v244 = v3->fields._www_5__10;
        if ( !v244 )
          goto LABEL_528;
        this = (NetworkManager__RequestCR_d__212_o *)v244->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_528;
        this = (NetworkManager__RequestCR_d__212_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                                       (const MethodInfo_2E4A864 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
        if ( (int)this < 1 )
          goto LABEL_119;
        if ( !*v137 )
          goto LABEL_528;
        this = (NetworkManager__RequestCR_d__212_o *)(*v137)->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_528;
        this = (NetworkManager__RequestCR_d__212_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                                       (System_Xml_XmlQualifiedName_o *)StringLiteral_12405/*"STATUS"*/,
                                                       (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_119;
        if ( !*v137 )
          goto LABEL_528;
        this = (NetworkManager__RequestCR_d__212_o *)(*v137)->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_528;
        v245 = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this,
                                    (System_Type_o *)StringLiteral_12405/*"STATUS"*/,
                                    (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        this = (NetworkManager__RequestCR_d__212_o *)sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_528;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_591;
        LOWORD(this->fields.work) = 32;
        if ( !v245 )
          goto LABEL_528;
        this = (NetworkManager__RequestCR_d__212_o *)System_String__Split_43910688(
                                                       v245,
                                                       (System_Char_array *)this,
                                                       1,
                                                       0LL);
        if ( !this )
          goto LABEL_528;
        v246 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_119;
        this = (NetworkManager__RequestCR_d__212_o *)this->fields.work;
        if ( !this )
          goto LABEL_528;
        this = (NetworkManager__RequestCR_d__212_o *)System_String__StartsWith(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_7118/*"HTTP"*/,
                                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_119;
        if ( LODWORD(v246->fields.__2__current) <= 1 )
          goto LABEL_591;
        v247 = (System_String_o *)v246->fields.__4__this;
        if ( !v247 )
          goto LABEL_585;
        v248 = PrivateImplementationDetails___ComputeStringHash_20827812(v247, 0LL);
        if ( v248 > 0x434FEE0C )
        {
          if ( v248 <= 0xAA3008DB )
          {
            if ( v248 == -1456470200 )
            {
              if ( !System_String__op_Equality(v247, (System_String_o *)StringLiteral_1184/*"401"*/, 0LL) )
                goto LABEL_585;
              v693 = &StringLiteral_9311/*"NETWORK_ERROR_SERVER_AUTH_MESSAGE"*/;
            }
            else
            {
              if ( v248 != -1439692581 || !System_String__op_Equality(v247, (System_String_o *)StringLiteral_1182/*"400"*/, 0LL) )
                goto LABEL_585;
              v693 = &StringLiteral_9316/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/;
            }
            v708 = (System_Int32_array **)*v693;
            v3->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v693;
            v709 = &v3->fields._errorLocalizeCode_5__4;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v3->fields._errorLocalizeCode_5__4,
              v708,
              v229,
              v230,
              v231,
              v232,
              v233,
              v234);
            v251 = (System_Int32_array **)StringLiteral_19126/*"goto_title"*/;
LABEL_587:
            v252 = (BattleServantConfConponent_o *)&v3->fields._errorAction_5__5;
            v709[1] = (struct System_String_o *)v251;
            goto LABEL_118;
          }
          if ( v248 == -1372582105 )
          {
            if ( System_String__op_Equality(v247, (System_String_o *)StringLiteral_1187/*"404"*/, 0LL) )
            {
              v710 = &StringLiteral_9315/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/;
              goto LABEL_586;
            }
            goto LABEL_585;
          }
          if ( v248 != -1008248995 )
            goto LABEL_585;
          v702 = &StringLiteral_1150/*"200"*/;
        }
        else
        {
          if ( v248 <= 0x2D98A5D6 )
          {
            if ( v248 == 731423408 )
            {
              v249 = &StringLiteral_1195/*"500"*/;
              goto LABEL_584;
            }
            if ( v248 == 764978646 )
            {
              v249 = &StringLiteral_1197/*"502"*/;
LABEL_584:
              System_String__op_Equality(v247, (System_String_o *)*v249, 0LL);
            }
LABEL_585:
            v710 = &StringLiteral_9312/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
LABEL_586:
            v711 = (System_Int32_array **)*v710;
            v3->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v710;
            v709 = &v3->fields._errorLocalizeCode_5__4;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v3->fields._errorLocalizeCode_5__4,
              v711,
              v229,
              v230,
              v231,
              v232,
              v233,
              v234);
            v251 = (System_Int32_array **)StringLiteral_21879/*"retry"*/;
            goto LABEL_587;
          }
          if ( v248 == 781756265 )
          {
            v249 = &StringLiteral_1199/*"503"*/;
            goto LABEL_584;
          }
          if ( v248 != 1129311756 )
            goto LABEL_585;
          v702 = &StringLiteral_1165/*"302"*/;
        }
        if ( System_String__op_Equality(v247, (System_String_o *)*v702, 0LL) )
        {
          v252 = (BattleServantConfConponent_o *)&v3->fields._errorCode_5__3;
          v251 = 0LL;
          v3->fields._errorCode_5__3 = 0LL;
          goto LABEL_118;
        }
        goto LABEL_585;
      }
      this = (NetworkManager__RequestCR_d__212_o *)v3->fields.work;
      if ( !this )
        goto LABEL_528;
      this = (NetworkManager__RequestCR_d__212_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__212_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                     this,
                                                     this->klass[1]._1.image);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_116;
      if ( !_4__this )
        goto LABEL_528;
      v226 = _4__this->fields.communicationWaitList;
      if ( !v226 )
        goto LABEL_528;
      if ( v226->fields._size >= 1 )
      {
        v227 = (System_Int32_array **)StringLiteral_16630/*"background cancel"*/;
        v3->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_16630/*"background cancel"*/;
        v228 = &v3->fields._errorCode_5__3;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v3->fields._errorCode_5__3,
          v227,
          v220,
          v221,
          v222,
          v223,
          v224,
          v225);
        v235 = &StringLiteral_22391/*"stay"*/;
      }
      else
      {
LABEL_116:
        v250 = (System_Int32_array **)StringLiteral_17707/*"connect time over"*/;
        v3->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_17707/*"connect time over"*/;
        v228 = &v3->fields._errorCode_5__3;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v3->fields._errorCode_5__3,
          v250,
          v220,
          v221,
          v222,
          v223,
          v224,
          v225);
        v235 = &StringLiteral_21879/*"retry"*/;
      }
      v251 = (System_Int32_array **)*v235;
      v252 = (BattleServantConfConponent_o *)(v228 + 2);
      v228[2] = (struct System_String_o *)*v235;
LABEL_118:
      sub_B0D840(v252, v251, v229, v230, v231, v232, v233, v234);
LABEL_119:
      if ( !*v137 )
        goto LABEL_528;
      responseHeaders_k__BackingField = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*v137)->fields._responseHeaders_k__BackingField;
      if ( responseHeaders_k__BackingField )
      {
        this = (NetworkManager__RequestCR_d__212_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                                                       responseHeaders_k__BackingField,
                                                       (const MethodInfo_2E4A864 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
        if ( (int)this >= 1 )
        {
          if ( !*v137 )
            goto LABEL_528;
          this = (NetworkManager__RequestCR_d__212_o *)(*v137)->fields._responseHeaders_k__BackingField;
          if ( !this )
            goto LABEL_528;
          this = (NetworkManager__RequestCR_d__212_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_15583/*"X-SERVER-TIME"*/,
                                                         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( *v137 )
            {
              this = (NetworkManager__RequestCR_d__212_o *)(*v137)->fields._responseHeaders_k__BackingField;
              if ( this )
                JUMPOUT(0x1CDD35CLL);
            }
            goto LABEL_528;
          }
        }
      }
      this = (NetworkManager__RequestCR_d__212_o *)*v137;
      if ( !*v137 )
        goto LABEL_528;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      v3->fields._www_5__10 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)v137, 0LL, v254, v255, v256, v257, v258, v259);
      v3->fields._wait_5__14 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&v3->fields._wait_5__14, 0LL, v260, v261, v262, v263, v264, v265);
LABEL_130:
      p_errorCode_5__3 = &v3->fields._errorCode_5__3;
      if ( v3->fields._errorCode_5__3 )
        goto LABEL_137;
      if ( System_String__IsNullOrEmpty(v3->fields._data_5__2, 0LL) )
      {
        v272 = (System_Int32_array **)StringLiteral_21189/*"none data"*/;
        v3->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_21189/*"none data"*/;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v3->fields._errorCode_5__3,
          v272,
          v266,
          v267,
          v268,
          v269,
          v270,
          v271);
        v273 = (System_Int32_array **)StringLiteral_9314/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        v3->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9314/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v3->fields._errorLocalizeCode_5__4,
          v273,
          v274,
          v275,
          v276,
          v277,
          v278,
          v279);
        v280 = (System_Int32_array **)StringLiteral_19126/*"goto_title"*/;
        v3->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_19126/*"goto_title"*/;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v3->fields._errorAction_5__5,
          v280,
          v281,
          v282,
          v283,
          v284,
          v285,
          v286);
        if ( v3->fields._isNoRedirect_5__9 )
        {
          v293 = (BattleServantConfConponent_o *)&v3->fields._errorCode_5__3;
          v294 = 0LL;
          *p_errorCode_5__3 = 0LL;
LABEL_136:
          sub_B0D840(v293, v294, v287, v288, v289, v290, v291, v292);
        }
LABEL_137:
        v309 = 0;
        goto LABEL_138;
      }
      if ( System_String__op_Equality(v3->fields._data_5__2, (System_String_o *)StringLiteral_7726/*"Internal Server Error"*/, 0LL) )
      {
        v301 = (System_Int32_array **)StringLiteral_19910/*"internal server error"*/;
        v3->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_19910/*"internal server error"*/;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v3->fields._errorCode_5__3,
          v301,
          v295,
          v296,
          v297,
          v298,
          v299,
          v300);
        v302 = (System_Int32_array **)StringLiteral_9312/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        v3->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9312/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v3->fields._errorLocalizeCode_5__4,
          v302,
          v303,
          v304,
          v305,
          v306,
          v307,
          v308);
        v293 = (BattleServantConfConponent_o *)&v3->fields._errorAction_5__5;
        v294 = (System_Int32_array **)StringLiteral_21879/*"retry"*/;
        v3->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_21879/*"retry"*/;
        goto LABEL_136;
      }
      data_5__2 = v3->fields._data_5__2;
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      this = (NetworkManager__RequestCR_d__212_o *)JsonManager__getDictionary(data_5__2, 0LL);
      if ( !this )
        goto LABEL_528;
      v336 = this;
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_21861/*"response"*/,
              (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v397 = (System_Int32_array **)StringLiteral_21190/*"none response data"*/;
        v3->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_21190/*"none response data"*/;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v3->fields._errorCode_5__3,
          v397,
          v337,
          v338,
          v339,
          v340,
          v341,
          v342);
        v398 = (System_Int32_array **)StringLiteral_9312/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        v3->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9312/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v3->fields._errorLocalizeCode_5__4,
          v398,
          v399,
          v400,
          v401,
          v402,
          v403,
          v404);
        v405 = (System_Int32_array **)StringLiteral_21879/*"retry"*/;
        v3->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_21879/*"retry"*/;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v3->fields._errorAction_5__5,
          v405,
          v406,
          v407,
          v408,
          v409,
          v410,
          v411);
LABEL_223:
        v309 = 0;
        goto LABEL_515;
      }
      v343 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v336,
                               (System_Type_o *)StringLiteral_21861/*"response"*/,
                               (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v344 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                      v343,
                                      (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_ResponseData___);
      v3->fields._responseList_5__7 = (struct ResponseData_array *)v344;
      v345 = &v3->fields._responseList_5__7;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v3->fields._responseList_5__7,
        v344,
        v346,
        v347,
        v348,
        v349,
        v350,
        v351);
      responseList_5__7 = v3->fields._responseList_5__7;
      if ( !responseList_5__7 )
        goto LABEL_528;
      v353 = 0LL;
      while ( 1 )
      {
        v354 = responseList_5__7->max_length;
        if ( (int)v353 >= v354 )
          goto LABEL_223;
        if ( (unsigned int)v353 >= v354 )
          goto LABEL_591;
        v355 = &responseList_5__7->obj.klass + v353;
        v356 = (ResponseData_o *)v355[4];
        if ( !v356 )
          goto LABEL_528;
        this = (NetworkManager__RequestCR_d__212_o *)ResponseData__checkError_30403444((ResponseData_o *)v355[4], 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        responseList_5__7 = *v345;
        ++v353;
        if ( !*v345 )
          goto LABEL_528;
      }
      this = (NetworkManager__RequestCR_d__212_o *)sub_B0D8BC(string___TypeInfo, 5LL);
      if ( !this )
        goto LABEL_528;
      v466 = this;
      this = (NetworkManager__RequestCR_d__212_o *)StringLiteral_21862/*"response error "*/;
      if ( StringLiteral_21862/*"response error "*/ )
      {
        this = (NetworkManager__RequestCR_d__212_o *)sub_B0D964(StringLiteral_21862/*"response error "*/, v466->klass->_1.element_class);
        if ( !this )
          goto LABEL_592;
        v467 = (System_Int32_array **)StringLiteral_21862/*"response error "*/;
      }
      else
      {
        v467 = 0LL;
      }
      if ( !LODWORD(v466->fields.__2__current) )
        goto LABEL_591;
      v466->fields.work = (struct RequestBase_o *)v467;
      sub_B0D840((BattleServantConfConponent_o *)&v466->fields.work, v467, v460, v461, v462, v463, v464, v465);
      nid = (System_Int32_array **)v356->fields.nid;
      if ( nid )
      {
        this = (NetworkManager__RequestCR_d__212_o *)sub_B0D964(v356->fields.nid, v466->klass->_1.element_class);
        if ( !this )
          goto LABEL_592;
      }
      if ( LODWORD(v466->fields.__2__current) <= 1 )
        goto LABEL_591;
      v466->fields.__4__this = (struct NetworkManager_o *)nid;
      sub_B0D840((BattleServantConfConponent_o *)&v466->fields.__4__this, nid, v582, v583, v584, v585, v586, v587);
      this = (NetworkManager__RequestCR_d__212_o *)StringLiteral_98/*" ("*/;
      if ( StringLiteral_98/*" ("*/ )
      {
        this = (NetworkManager__RequestCR_d__212_o *)sub_B0D964(StringLiteral_98/*" ("*/, v466->klass->_1.element_class);
        if ( !this )
          goto LABEL_592;
        v595 = (System_Int32_array **)StringLiteral_98/*" ("*/;
      }
      else
      {
        v595 = 0LL;
      }
      if ( LODWORD(v466->fields.__2__current) <= 2 )
        goto LABEL_591;
      *(_QWORD *)&v466->fields.delay = v595;
      sub_B0D840((BattleServantConfConponent_o *)&v466->fields.delay, v595, v589, v590, v591, v592, v593, v594);
      resCode = (System_Int32_array **)v356->fields.resCode;
      if ( resCode )
      {
        this = (NetworkManager__RequestCR_d__212_o *)sub_B0D964(v356->fields.resCode, v466->klass->_1.element_class);
        if ( !this )
        {
LABEL_592:
          v713 = sub_B0D99C(this);
          sub_B0D948(v713, 0LL);
        }
      }
      if ( LODWORD(v466->fields.__2__current) <= 3 )
        goto LABEL_591;
      v466->fields._data_5__2 = (struct System_String_o *)resCode;
      sub_B0D840((BattleServantConfConponent_o *)&v466->fields._data_5__2, resCode, v596, v597, v598, v599, v600, v601);
      this = (NetworkManager__RequestCR_d__212_o *)StringLiteral_658/*")"*/;
      if ( StringLiteral_658/*")"*/ )
      {
        this = (NetworkManager__RequestCR_d__212_o *)sub_B0D964(StringLiteral_658/*")"*/, v466->klass->_1.element_class);
        if ( this )
        {
          v609 = (System_Int32_array **)StringLiteral_658/*")"*/;
          goto LABEL_491;
        }
        goto LABEL_592;
      }
      v609 = 0LL;
LABEL_491:
      if ( LODWORD(v466->fields.__2__current) <= 4 )
        goto LABEL_591;
      v466->fields._errorCode_5__3 = (struct System_String_o *)v609;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v466->fields._errorCode_5__3,
        v609,
        v603,
        v604,
        v605,
        v606,
        v607,
        v608);
      v610 = (System_Int32_array **)System_String__Concat_43930028((System_String_array *)v466, 0LL);
      v3->fields._errorCode_5__3 = (struct System_String_o *)v610;
      sub_B0D840((BattleServantConfConponent_o *)&v3->fields._errorCode_5__3, v610, v611, v612, v613, v614, v615, v616);
      v619 = (ResponseFailData_o *)sub_B0D974(ResponseFailData_TypeInfo, v617, v618);
      ResponseFailData___ctor(v619, v356, 0LL);
      v620 = &v3->fields._failData_5__6;
      v3->fields._failData_5__6 = v619;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v3->fields._failData_5__6,
        (System_Int32_array **)v619,
        v621,
        v622,
        v623,
        v624,
        v625,
        v626);
      failData_5__6 = v3->fields._failData_5__6;
      if ( !failData_5__6 )
        goto LABEL_528;
      this = (NetworkManager__RequestCR_d__212_o *)System_String__IsNullOrEmpty(failData_5__6->fields.action, 0LL);
      p_action = (System_Int32_array ***)&StringLiteral_21879/*"retry"*/;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !*v620 )
          goto LABEL_528;
        p_action = (System_Int32_array ***)&(*v620)->fields.action;
      }
      v635 = *p_action;
      v3->fields._errorAction_5__5 = (struct System_String_o *)*p_action;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v3->fields._errorAction_5__5,
        v635,
        v628,
        v629,
        v630,
        v631,
        v632,
        v633);
      v636 = v3->fields.work;
      if ( !v636 )
      {
        v639 = 0;
        goto LABEL_514;
      }
      v637 = PurchaseByBank_UnityIap_Request_TypeInfo;
      v638 = *(&PurchaseByBank_UnityIap_Request_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v636->klass->_2.bitflags2 + 1) >= (unsigned int)v638
        && (PurchaseByBank_UnityIap_Request_c *)v636->klass->_2.typeHierarchy[v638 - 1] == PurchaseByBank_UnityIap_Request_TypeInfo )
      {
        if ( !*v620 )
          goto LABEL_528;
        v701 = System_String__op_Equality((*v620)->fields.action, (System_String_o *)StringLiteral_21879/*"retry"*/, 0LL);
        v636 = v3->fields.work;
        v639 = v701;
        if ( !v636 )
          goto LABEL_514;
        v637 = PurchaseByBank_UnityIap_Request_TypeInfo;
      }
      else
      {
        v639 = 0;
      }
      v640 = v636->klass;
      v641 = *(&v637->_2.bitflags2 + 1);
      if ( *(&v640->_2.bitflags2 + 1) < (unsigned int)v641
        || (PurchaseByBank_UnityIap_Request_c *)v640->_2.typeHierarchy[v641 - 1] != v637 )
      {
LABEL_514:
        v309 = v639 != 0;
        goto LABEL_515;
      }
      v642 = *v345;
      v309 = v639 != 0;
      if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
      }
      v643 = ResponseCommandKind__SearchData(11, v642, 0LL);
      if ( v643 )
      {
        fail = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v643->fields.fail;
        if ( fail )
        {
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                 fail,
                 (System_Xml_XmlQualifiedName_o *)StringLiteral_21869/*"result"*/,
                 &v726,
                 (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
          {
            this = (NetworkManager__RequestCR_d__212_o *)v726;
            if ( !v726 )
              goto LABEL_528;
            v645 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))v726->klass->vtable._3_ToString.method)(
                                        v726,
                                        v726->klass->vtable._4_OnAdd.methodPtr);
            if ( v645 )
            {
              v646 = v645;
              if ( System_String__op_Equality(v645, (System_String_o *)StringLiteral_21521/*"pending_purchase_error"*/, 0LL)
                || System_String__op_Equality(v646, (System_String_o *)StringLiteral_17253/*"canceled_purchase_error"*/, 0LL) )
              {
                v653 = (System_Int32_array **)StringLiteral_22402/*"stay_no_dialog"*/;
                v3->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22402/*"stay_no_dialog"*/;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&v3->fields._errorAction_5__5,
                  v653,
                  v647,
                  v648,
                  v649,
                  v650,
                  v651,
                  v652);
              }
            }
          }
        }
      }
LABEL_515:
      if ( !*p_errorCode_5__3 )
      {
        this = (NetworkManager__RequestCR_d__212_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v336,
                                                       (System_Xml_XmlQualifiedName_o *)StringLiteral_17223/*"cache"*/,
                                                       (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v654 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          this = (NetworkManager__RequestCR_d__212_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                         (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v336,
                                                         (System_Type_o *)StringLiteral_17223/*"cache"*/,
                                                         (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v654 )
            goto LABEL_528;
          DataManager__updateJsonData((DataManager_o *)v654, (Il2CppObject *)this, 0LL);
        }
        v655 = v3->fields._responseList_5__7;
        if ( v655 )
        {
          v656 = 0LL;
          while ( 1 )
          {
            v657 = v655->max_length;
            if ( (__int64)v656 >= (int)v657 )
              goto LABEL_138;
            if ( v656 >= v657 )
              goto LABEL_591;
            v658 = v655->m_Items[v656];
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            this = (NetworkManager__RequestCR_d__212_o *)NetworkManager__ExecuteCommand(v658, 0LL);
            if ( (_DWORD)this )
              break;
            v655 = v3->fields._responseList_5__7;
            ++v656;
            if ( !v655 )
              goto LABEL_528;
          }
          if ( v658 )
          {
            v659 = (System_Int32_array **)System_String__Concat_43849904(
                                            (System_String_o *)StringLiteral_21863/*"response execute error "*/,
                                            v658->fields.nid,
                                            0LL);
            v3->fields._errorCode_5__3 = (struct System_String_o *)v659;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v3->fields._errorCode_5__3,
              v659,
              v660,
              v661,
              v662,
              v663,
              v664,
              v665);
            v668 = (ResponseFailData_o *)sub_B0D974(ResponseFailData_TypeInfo, v666, v667);
            ResponseFailData___ctor(v668, v658, 0LL);
            v669 = &v3->fields._failData_5__6;
            v3->fields._failData_5__6 = v668;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v3->fields._failData_5__6,
              (System_Int32_array **)v668,
              v670,
              v671,
              v672,
              v673,
              v674,
              v675);
            v676 = v3->fields._failData_5__6;
            if ( v676 )
            {
              this = (NetworkManager__RequestCR_d__212_o *)System_String__IsNullOrEmpty(v676->fields.action, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v683 = (System_Int32_array ***)&StringLiteral_21879/*"retry"*/;
              }
              else
              {
                if ( !*v669 )
                  goto LABEL_528;
                v683 = (System_Int32_array ***)&(*v669)->fields.action;
              }
              v684 = *v683;
              v3->fields._errorAction_5__5 = (struct System_String_o *)*v683;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v3->fields._errorAction_5__5,
                v684,
                v677,
                v678,
                v679,
                v680,
                v681,
                v682);
              goto LABEL_138;
            }
          }
        }
LABEL_528:
        sub_B0D97C(this);
      }
LABEL_138:
      p_work = (NetworkManager__RequestCR_d__212_o **)&v3->fields.work;
      this = (NetworkManager__RequestCR_d__212_o *)v3->fields.work;
      if ( !this )
        goto LABEL_528;
      this = (NetworkManager__RequestCR_d__212_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__212_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                     this,
                                                     this->klass[1]._1.image);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = *p_work;
        if ( !*p_work )
          goto LABEL_528;
        this = (NetworkManager__RequestCR_d__212_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__212_o *, const char *))this->klass[1]._1.gc_desc)(
                                                       this,
                                                       this->klass[1]._1.name);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (NetworkManager__RequestCR_d__212_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_528;
          CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
        }
      }
      if ( !*p_errorCode_5__3 )
      {
        if ( !_4__this )
          goto LABEL_528;
        NetworkManager__OnEndCommunication(_4__this, v3->fields.work, v3->fields._responseList_5__7, 0LL);
LABEL_463:
        v579 = (System_Int32_array **)v3->fields._data_5__2;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        if ( !byte_4217A7F )
        {
          sub_B0D8A4(&NetworkManager_TypeInfo, v332);
          byte_4217A7F = 1;
        }
        v580 = NetworkManager_TypeInfo;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v580 = NetworkManager_TypeInfo;
        }
        p_errorDialogResponseData = (BattleServantConfConponent_o *)&v580->static_fields->errorDialogResponseData;
        p_errorDialogResponseData->klass = (BattleServantConfConponent_c *)v579;
        sub_B0D840(p_errorDialogResponseData, v579, v126, v127, v128, v129, v130, v131);
        return 0;
      }
      p_responseList_5__7 = (BattleServantConfConponent_o *)&v3->fields._responseList_5__7;
      v316 = (System_Int32_array **)v3->fields._responseList_5__7;
      if ( !_4__this )
        goto LABEL_528;
      _4__this->fields.communicationWorkResponseList = (struct ResponseData_array *)v316;
      sub_B0D840(
        (BattleServantConfConponent_o *)&_4__this->fields.communicationWorkResponseList,
        v316,
        v310,
        v311,
        v312,
        v313,
        v314,
        v315);
      v3->fields._responseList_5__7 = 0LL;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v3->fields._responseList_5__7,
        0LL,
        v317,
        v318,
        v319,
        v320,
        v321,
        v322);
      p_errorLocalizeCode_5__4 = (BattleServantConfConponent_o *)&v3->fields._errorLocalizeCode_5__4;
      errorLocalizeCode_5__4 = v3->fields._errorLocalizeCode_5__4;
      if ( errorLocalizeCode_5__4 )
      {
        data = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_305;
      }
      errorAction_5__5 = v3->fields._errorAction_5__5;
      if ( !errorAction_5__5 )
        goto LABEL_596;
      if ( System_String__op_Equality(v3->fields._errorAction_5__5, (System_String_o *)StringLiteral_22391/*"stay"*/, 0LL)
        || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22402/*"stay_no_dialog"*/, 0LL) )
      {
        v334 = (System_Int32_array ***)&StringLiteral_9313/*"NETWORK_ERROR_SERVER_CANCEL_MESSAGE"*/;
LABEL_303:
        v470 = *v334;
        p_errorLocalizeCode_5__4->klass = (BattleServantConfConponent_c *)*v334;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v3->fields._errorLocalizeCode_5__4,
          v470,
          v324,
          v325,
          v326,
          v327,
          v328,
          v329);
        goto LABEL_304;
      }
      if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_21879/*"retry"*/, 0LL)
        || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_21830/*"reload_cache"*/, 0LL) )
      {
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        }
        if ( !byte_42124C8 )
        {
          sub_B0D8A4(&ManagementManager_TypeInfo, v455);
          byte_42124C8 = 1;
        }
        v456 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v456 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v456->static_fields->isDuringStartup;
        v458 = &StringLiteral_9303/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/;
        v459 = &StringLiteral_9317/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/;
LABEL_300:
        if ( isDuringStartup )
          v334 = (System_Int32_array ***)v458;
        else
          v334 = (System_Int32_array ***)v459;
        goto LABEL_303;
      }
      if ( !System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_19125/*"goto_login_access"*/, 0LL)
        && !System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_21812/*"refresh_terminal"*/, 0LL) )
      {
LABEL_596:
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        }
        if ( !byte_42124C8 )
        {
          sub_B0D8A4(&ManagementManager_TypeInfo, v323);
          byte_42124C8 = 1;
        }
        v469 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v469 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v469->static_fields->isDuringStartup;
        v458 = (__int64 *)&StringLiteral_9300/*"NETWORK_ERROR_BOOT_MESSAGE"*/;
        v459 = &StringLiteral_9314/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        goto LABEL_300;
      }
LABEL_304:
      errorLocalizeCode_5__4 = (System_String_o *)p_errorLocalizeCode_5__4->klass;
      data = (System_String_o *)StringLiteral_1/*""*/;
      v471 = (System_String_o *)StringLiteral_1/*""*/;
      if ( p_errorLocalizeCode_5__4->klass )
      {
LABEL_305:
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v471 = LocalizationManager__Get(errorLocalizeCode_5__4, 0LL);
      }
      p_failData_5__6 = (BattleServantConfConponent_o *)&v3->fields._failData_5__6;
      v472 = v3->fields._failData_5__6;
      if ( v472 )
      {
        this = (NetworkManager__RequestCR_d__212_o *)System_String__IsNullOrEmpty(v472->fields.title, 0LL);
        v473 = p_failData_5__6->klass;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v473 )
            goto LABEL_528;
        }
        else
        {
          if ( !v473 )
            goto LABEL_528;
          data = (System_String_o *)v473->_1.this_arg.data;
        }
        this = (NetworkManager__RequestCR_d__212_o *)System_String__IsNullOrEmpty(
                                                       *(System_String_o **)&v473->_1.this_arg.bits,
                                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !p_failData_5__6->klass )
            goto LABEL_528;
          v471 = *(System_String_o **)&p_failData_5__6->klass->_1.this_arg.bits;
        }
        this = (NetworkManager__RequestCR_d__212_o *)System_String__IsNullOrEmpty(v471, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !p_failData_5__6->klass )
            goto LABEL_528;
          if ( p_failData_5__6->klass->_1.byval_arg.data )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            this = (NetworkManager__RequestCR_d__212_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_9304/*"NETWORK_ERROR_CSID_CODE"*/,
                                                           0LL);
            if ( !p_failData_5__6->klass )
              goto LABEL_528;
            v474 = System_String__Format(
                     (System_String_o *)this,
                     (Il2CppObject *)p_failData_5__6->klass->_1.byval_arg.data,
                     0LL);
            this = (NetworkManager__RequestCR_d__212_o *)System_String__Concat_43852188(
                                                           v471,
                                                           (System_String_o *)StringLiteral_26/*"\n"*/,
                                                           v474,
                                                           0LL);
            v471 = (System_String_o *)this;
          }
        }
        if ( !p_failData_5__6->klass )
          goto LABEL_528;
        value = (System_String_o *)p_failData_5__6->klass->_1.element_class;
      }
      else
      {
        value = 0LL;
      }
      title = data;
      v722 = _4__this;
      this = *p_work;
      if ( !*p_work )
        goto LABEL_528;
      v475 = &v3->fields._errorAction_5__5;
      if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__212_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
              this,
              this->klass[1]._1.image) & 1) == 0 )
        goto LABEL_337;
      v476 = *v475;
      if ( !*v475 )
        goto LABEL_452;
      if ( !System_String__op_Equality(*v475, (System_String_o *)StringLiteral_22391/*"stay"*/, 0LL)
        && !System_String__op_Equality(v476, (System_String_o *)StringLiteral_22402/*"stay_no_dialog"*/, 0LL)
        && !System_String__op_Equality(v476, (System_String_o *)StringLiteral_21879/*"retry"*/, 0LL)
        && !System_String__op_Equality(v476, (System_String_o *)StringLiteral_21830/*"reload_cache"*/, 0LL)
        || (v477 = NetworkManager__OnBackgroundErrorCommunication(
                     v722,
                     v722->fields.communicationWork,
                     *p_errorCode_5__3,
                     0,
                     0LL),
            result = 0,
            !v477) )
      {
LABEL_337:
        v478 = *v475;
        if ( !*v475 )
          goto LABEL_452;
        v479 = PrivateImplementationDetails___ComputeStringHash_20827812(*v475, 0LL);
        if ( v479 <= 0xA56F89EB )
        {
          if ( v479 <= 0x43CDBBC3 )
          {
            if ( v479 != 1019014393 )
            {
              if ( v479 == 1062826843 )
              {
                if ( System_String__op_Equality(v478, (System_String_o *)StringLiteral_19126/*"goto_title"*/, 0LL) )
                {
                  v500 = NetworkManager_TypeInfo;
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    v500 = NetworkManager_TypeInfo;
                  }
                  v500->static_fields->isRebootBlock = 1;
                  v501 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v498, v499);
                  System_Action___ctor(v501, (Il2CppObject *)v722, Method_NetworkManager_OnClickErrorReboot__, 0LL);
                  NetworkManager__ErrorDialog(v722, title, v471, value, v501, 0LL);
                  goto LABEL_454;
                }
              }
              else if ( v479 == 1137556419
                     && System_String__op_Equality(v478, (System_String_o *)StringLiteral_22402/*"stay_no_dialog"*/, 0LL) )
              {
                NetworkManager__OnClickErrorStay(v722, 0LL);
                goto LABEL_454;
              }
              goto LABEL_452;
            }
            this = (NetworkManager__RequestCR_d__212_o *)System_String__op_Equality(
                                                           v478,
                                                           (System_String_o *)StringLiteral_21830/*"reload_cache"*/,
                                                           0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_452;
            if ( !p_failData_5__6->klass )
              goto LABEL_528;
            cancleTxta = (int32_t)p_failData_5__6->klass->_1.typeMetadataHandle;
            v506 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v504, v505);
            v507 = &Method_NetworkManager_OnClickReloadCache__;
            goto LABEL_540;
          }
          if ( v479 <= 0x9918C6CA )
          {
            if ( v479 == -1726429494 )
            {
              if ( System_String__op_Equality(v478, (System_String_o *)StringLiteral_19953/*"invalid_user"*/, 0LL) )
              {
                v508 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                valuea = LocalizationManager__Get((System_String_o *)StringLiteral_9319/*"NETWORK_USER_DELETE_DECIDE"*/, 0LL);
                cancleTxtb = LocalizationManager__Get((System_String_o *)StringLiteral_9318/*"NETWORK_USER_DELETE_CANCEL"*/, 0LL);
                v511 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                v509,
                                                                v510);
                CommonConfirmDialog_ClickDelegate___ctor(
                  v511,
                  (Il2CppObject *)v722,
                  Method_NetworkManager_OnClickUserDelete__,
                  0LL);
                if ( !v508 )
                  goto LABEL_528;
                CommonUI__OpenConfirmDialog_17016196(v508, title, v471, valuea, cancleTxtb, v511, 0, 0, 0, 0LL);
                goto LABEL_454;
              }
              goto LABEL_452;
            }
            if ( v479 == 2106643173 && System_String__op_Equality(v478, (System_String_o *)StringLiteral_21812/*"refresh_terminal"*/, 0LL) )
            {
              if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleData_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
              }
              BattleData__deleteSaveData(0LL);
              BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
              this = (NetworkManager__RequestCR_d__212_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
              if ( !this )
                goto LABEL_528;
              ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)this, 0LL);
              this = (NetworkManager__RequestCR_d__212_o *)System_String__IsNullOrEmpty(v471, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (NetworkManager__RequestCR_d__212_o *)System_String__IsNullOrEmpty(value, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  NetworkManager__OnClickRefreshTerminal(v722, 0LL);
                  goto LABEL_454;
                }
              }
              if ( !p_failData_5__6->klass )
                goto LABEL_528;
              cancleTxta = (int32_t)p_failData_5__6->klass->_1.typeMetadataHandle;
              v506 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v489, v490);
              v507 = &Method_NetworkManager_OnClickRefreshTerminal__;
              goto LABEL_540;
            }
LABEL_452:
            v535 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v538 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v536, v537);
            ErrorDialog_ClickDelegate___ctor(
              v538,
              (Il2CppObject *)v722,
              Method_NetworkManager_OnClickErrorDialog__,
              0LL);
            if ( !v535 )
              goto LABEL_528;
            CommonUI__OpenErrorDialog(v535, title, v471, v538, 0, 0LL);
            goto LABEL_454;
          }
          if ( v479 != -1577396083 )
          {
            if ( v479 != -1519416853 || !System_String__op_Equality(v478, (System_String_o *)StringLiteral_19125/*"goto_login_access"*/, 0LL) )
              goto LABEL_452;
            v492 = NetworkManager_TypeInfo;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v492 = NetworkManager_TypeInfo;
            }
            v492->static_fields->isRebootBlock = 1;
            this = (NetworkManager__RequestCR_d__212_o *)System_String__IsNullOrEmpty(v471, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (NetworkManager__RequestCR_d__212_o *)System_String__IsNullOrEmpty(value, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                NetworkManager__OnClickErrorTerminal(v722, 0LL);
                goto LABEL_454;
              }
            }
            if ( !p_failData_5__6->klass )
              goto LABEL_528;
            cancleTxta = (int32_t)p_failData_5__6->klass->_1.typeMetadataHandle;
            v506 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v493, v494);
            v507 = &Method_NetworkManager_OnClickErrorTerminal__;
            goto LABEL_540;
          }
          if ( !System_String__op_Equality(v478, (System_String_o *)StringLiteral_18095/*"do_signup"*/, 0LL) )
            goto LABEL_452;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          NetworkManager__DeleteSignupData(0LL);
          goto LABEL_445;
        }
        if ( v479 > 0xCC10A7C9 )
        {
          if ( v479 <= 0xDA79AAB9 )
          {
            if ( v479 == -809642680 )
            {
              this = (NetworkManager__RequestCR_d__212_o *)System_String__op_Equality(
                                                             v478,
                                                             (System_String_o *)StringLiteral_21791/*"reconnection"*/,
                                                             0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v512 = p_failData_5__6->klass;
                if ( !p_failData_5__6->klass )
                  goto LABEL_528;
                declaringType = (System_String_o *)v512->_1.declaringType;
                castClass_low = LOBYTE(v512->_1.castClass);
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                NetworkManager__SetGameServerRedirect(declaringType, castClass_low != 0, 0LL);
                if ( !p_failData_5__6->klass )
                  goto LABEL_528;
                parent = (System_Int32_array **)p_failData_5__6->klass->_1.parent;
                if ( !byte_4217A7D )
                {
                  sub_B0D8A4(&NetworkManager_TypeInfo, v515);
                  byte_4217A7D = 1;
                }
                v523 = NetworkManager_TypeInfo;
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v523 = NetworkManager_TypeInfo;
                }
                v524 = v523->static_fields;
                v524->dataServerRedirectAddress = (struct System_String_o *)parent;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&v524->dataServerRedirectAddress,
                  parent,
                  v516,
                  v517,
                  v518,
                  v519,
                  v520,
                  v521);
                if ( !p_failData_5__6->klass )
                  goto LABEL_528;
                generic_class = (System_Int32_array **)p_failData_5__6->klass->_1.generic_class;
                if ( !byte_4217A7E )
                {
                  sub_B0D8A4(&NetworkManager_TypeInfo, v525);
                  byte_4217A7E = 1;
                }
                v533 = NetworkManager_TypeInfo;
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v533 = NetworkManager_TypeInfo;
                }
                v534 = v533->static_fields;
                v534->webServerRedirectAddress = (struct System_String_o *)generic_class;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&v534->webServerRedirectAddress,
                  generic_class,
                  v526,
                  v527,
                  v528,
                  v529,
                  v530,
                  v531);
                NetworkManager__SetServerSetting_25515316(v722, 0LL);
                goto LABEL_454;
              }
            }
            else if ( v479 == -629560647
                   && System_String__op_Equality(v478, (System_String_o *)StringLiteral_21879/*"retry"*/, 0LL) )
            {
              this = *p_work;
              if ( !*p_work )
                goto LABEL_528;
              if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__212_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                      this,
                      this->klass[1]._1.declaringType) & 1) != 0 )
              {
                p_errorAction_5__5 = (BattleServantConfConponent_o *)&v3->fields._errorAction_5__5;
                if ( NetworkManager__OnErrorCommunication(v722, v722->fields.communicationWork, *p_errorCode_5__3, 0LL) )
                  return 0;
                goto LABEL_455;
              }
              if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ManagementManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              }
              if ( !byte_42124C8 )
              {
                sub_B0D8A4(&ManagementManager_TypeInfo, v491);
                byte_42124C8 = 1;
              }
              v694 = ManagementManager_TypeInfo;
              if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ManagementManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                v694 = ManagementManager_TypeInfo;
              }
              v695 = v694->static_fields->isDuringStartup;
              v696 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( v695 )
              {
                v699 = (CommonUI_o *)v696;
                v700 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v697, v698);
                ErrorDialog_ClickDelegate___ctor(
                  v700,
                  (Il2CppObject *)v722,
                  Method_NetworkManager_OnClickErrorRetryDialog__,
                  0LL);
                if ( !v699 )
                  goto LABEL_528;
                CommonUI__OpenRetryBootDialog(v699, title, v471, v700, 0, 0LL);
              }
              else
              {
                v703 = (CommonUI_o *)v696;
                if ( v309 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  valueb = LocalizationManager__Get((System_String_o *)StringLiteral_3278/*"COMMON_CONFIRM_RETRY"*/, 0LL);
                  cancleTxtc = LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
                  v706 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v704, v705);
                  ErrorDialog_ClickDelegate___ctor(
                    v706,
                    (Il2CppObject *)v722,
                    Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__,
                    0LL);
                  if ( !v703 )
                    goto LABEL_528;
                  CommonUI__OpenRetryDialog_17015640(v703, title, v471, valueb, cancleTxtc, v706, 0, 0LL);
                }
                else
                {
                  v707 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v697, v698);
                  ErrorDialog_ClickDelegate___ctor(
                    v707,
                    (Il2CppObject *)v722,
                    Method_NetworkManager_OnClickErrorRetryDialog__,
                    0LL);
                  if ( !v703 )
                    goto LABEL_528;
                  CommonUI__OpenRetryDialog(v703, title, v471, v707, 0, 0LL);
                }
              }
LABEL_454:
              p_errorAction_5__5 = (BattleServantConfConponent_o *)&v3->fields._errorAction_5__5;
LABEL_455:
              p_responseList_5__7->klass = 0LL;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v3->fields._responseList_5__7,
                0LL,
                v480,
                v481,
                v482,
                v483,
                v484,
                v485);
              if ( System_String__op_Equality(
                     (System_String_o *)p_errorAction_5__5->klass,
                     (System_String_o *)StringLiteral_21791/*"reconnection"*/,
                     0LL) )
              {
LABEL_456:
                v3->fields._data_5__2 = 0LL;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&v3->fields._data_5__2,
                  0LL,
                  v126,
                  v127,
                  v128,
                  v129,
                  v130,
                  v131);
                v3->fields._errorCode_5__3 = 0LL;
                sub_B0D840((BattleServantConfConponent_o *)p_errorCode_5__3, 0LL, v539, v540, v541, v542, v543, v544);
                v3->fields._errorLocalizeCode_5__4 = 0LL;
                sub_B0D840(p_errorLocalizeCode_5__4, 0LL, v545, v546, v547, v548, v549, v550);
                v3->fields._errorAction_5__5 = 0LL;
                sub_B0D840(p_errorAction_5__5, 0LL, v551, v552, v553, v554, v555, v556);
                v3->fields._failData_5__6 = 0LL;
                sub_B0D840(p_failData_5__6, 0LL, v557, v558, v559, v560, v561, v562);
                v3->fields._responseList_5__7 = 0LL;
                sub_B0D840(p_responseList_5__7, 0LL, v563, v564, v565, v566, v567, v568);
                this = (NetworkManager__RequestCR_d__212_o *)v3->fields.work;
                if ( !this )
                  goto LABEL_528;
                if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__212_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                        this,
                        this->klass[1]._1.image) & 1) != 0 )
                  goto LABEL_462;
                this = *p_work;
                if ( !*p_work )
                  goto LABEL_528;
                if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__212_o *, const char *))this->klass[1]._1.gc_desc)(
                        this,
                        this->klass[1]._1.name) & 1) == 0 )
                {
LABEL_462:
                  v571 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(
                                                              UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                              v569,
                                                              v570);
                  UnityEngine_WaitForEndOfFrame___ctor(v571, 0LL);
                  v3->fields.__2__current = (Il2CppObject *)v571;
                  v572 = (BattleServantConfConponent_o *)&v3->fields.__2__current;
                  sub_B0D840(v572, (System_Int32_array **)v571, v573, v574, v575, v576, v577, v578);
                  result = 1;
                  *(_DWORD *)&v572[-1].fields.isOpenAfter = 1;
                  return result;
                }
                this = (NetworkManager__RequestCR_d__212_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
                  goto LABEL_462;
                }
                goto LABEL_528;
              }
              goto LABEL_463;
            }
            goto LABEL_452;
          }
          if ( v479 == -258062273 )
          {
            if ( System_String__op_Equality(v478, (System_String_o *)StringLiteral_19952/*"invalid_battle"*/, 0LL) )
            {
              if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleData_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
              }
              BattleData__deleteSaveData(0LL);
              NetworkManager__OnEndCommunication(
                v722,
                v722->fields.communicationWork,
                v722->fields.communicationWorkResponseList,
                0LL);
              goto LABEL_454;
            }
            goto LABEL_452;
          }
          if ( v479 != -193734025 || !System_String__op_Equality(v478, (System_String_o *)StringLiteral_17935/*"data_update"*/, 0LL) )
            goto LABEL_452;
          v495 = NetworkManager_TypeInfo;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v495 = NetworkManager_TypeInfo;
          }
          v495->static_fields->isRebootBlock = 1;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          DataManager__ClearCacheAll(0LL);
        }
        else
        {
          if ( v479 != -1105950412 )
          {
            if ( v479 != -969204192 )
            {
              if ( v479 != -871323703 || !System_String__op_Equality(v478, (System_String_o *)StringLiteral_16424/*"app_version_up"*/, 0LL) )
                goto LABEL_452;
              if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ManagementManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              }
              ManagementManager__RebootCacheClear(0LL);
              v488 = NetworkManager_TypeInfo;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v488 = NetworkManager_TypeInfo;
              }
              v488->static_fields->isRebootBlock = 1;
              if ( p_failData_5__6->klass )
                cancleTxt = (int32_t)p_failData_5__6->klass->_1.typeMetadataHandle;
              else
                cancleTxt = 0;
              v692 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v486, v487);
              System_Action___ctor(v692, (Il2CppObject *)v722, Method_NetworkManager_OnClickStore__, 0LL);
              v687 = value;
              v686 = title;
              v688 = cancleTxt;
              v689 = v722;
              v690 = v471;
              v691 = v692;
LABEL_541:
              NetworkManager__WarningDialog(v689, v686, v690, v687, v688, v691, 0LL);
              goto LABEL_454;
            }
            this = (NetworkManager__RequestCR_d__212_o *)System_String__op_Equality(
                                                           v478,
                                                           (System_String_o *)StringLiteral_22391/*"stay"*/,
                                                           0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_452;
LABEL_445:
            if ( !p_failData_5__6->klass )
              goto LABEL_528;
            cancleTxta = (int32_t)p_failData_5__6->klass->_1.typeMetadataHandle;
            v506 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v502, v503);
            v507 = &Method_NetworkManager_OnClickErrorStay__;
            goto LABEL_540;
          }
          if ( !System_String__op_Equality(v478, (System_String_o *)StringLiteral_20425/*"maint"*/, 0LL) )
            goto LABEL_452;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          ManagementManager__RebootCacheClear(0LL);
          this = (NetworkManager__RequestCR_d__212_o *)NetworkManager_TypeInfo;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (NetworkManager__RequestCR_d__212_o *)NetworkManager_TypeInfo;
          }
          LOBYTE(this[1].fields.work[3].fields.CallBack) = 1;
        }
        if ( !p_failData_5__6->klass )
          goto LABEL_528;
        cancleTxta = (int32_t)p_failData_5__6->klass->_1.typeMetadataHandle;
        v506 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v496, v497);
        v507 = &Method_NetworkManager_OnClickErrorReboot__;
LABEL_540:
        v685 = v506;
        System_Action___ctor(v506, (Il2CppObject *)v722, *v507, 0LL);
        v687 = value;
        v686 = title;
        v688 = cancleTxta;
        v689 = v722;
        v690 = v471;
        v691 = v685;
        goto LABEL_541;
      }
      return result;
    case 3:
      v147 = (NetworkManager__RequestCR_d__212_o **)&v3->fields._www_5__10;
      v146 = v3->fields._www_5__10;
      v3->fields.__1__state = -1;
      if ( !v146 )
        goto LABEL_528;
      if ( !System_String__IsNullOrEmpty(v146->fields._error_k__BackingField, 0LL) )
        goto LABEL_21;
      this = *v147;
      if ( !*v147 )
        goto LABEL_528;
      v148 = (System_Int32_array **)DelightWorks_Network_UnityWebRequestWWW__get_text(
                                      (DelightWorks_Network_UnityWebRequestWWW_o *)this,
                                      0LL);
      v3->fields._data_5__2 = (struct System_String_o *)v148;
      sub_B0D840((BattleServantConfConponent_o *)&v3->fields._data_5__2, v148, v149, v150, v151, v152, v153, v154);
LABEL_21:
      this = *v147;
      if ( !*v147 )
        goto LABEL_528;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      *v147 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&v3->fields._www_5__10, 0LL, v155, v156, v157, v158, v159, v160);
      goto LABEL_46;
    case 4:
      v137 = &v3->fields._www_5__10;
      v3->fields.__1__state = -1;
      goto LABEL_8;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall NetworkManager__RequestCR_d__212__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__RequestCR_d__212_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NetworkManager__RequestCR_d__212__System_Collections_IEnumerator_Reset(
        NetworkManager__RequestCR_d__212_o *this,
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
  v6 = sub_B0D8A8(&Method_NetworkManager__RequestCR_d__212_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall NetworkManager__RequestCR_d__212__System_Collections_IEnumerator_get_Current(
        NetworkManager__RequestCR_d__212_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NetworkManager__RequestCR_d__212__System_IDisposable_Dispose(
        NetworkManager__RequestCR_d__212_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__TimeUpdate_d__81___ctor(
        NetworkManager__TimeUpdate_d__81_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NetworkManager__TimeUpdate_d__81__MoveNext(
        NetworkManager__TimeUpdate_d__81_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  int32_t _1__state; // w8
  NetworkManager_c *v6; // x0
  UnityEngine_WaitForEndOfFrame_o *v7; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_421215A & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4);
    byte_421215A = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v6 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    v6->static_fields->nowTime = -1LL;
    goto LABEL_10;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
LABEL_10:
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    p__2__current = &this->fields.__2__current;
    sub_B0D840(p__2__current, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall NetworkManager__TimeUpdate_d__81__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__TimeUpdate_d__81_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NetworkManager__TimeUpdate_d__81__System_Collections_IEnumerator_Reset(
        NetworkManager__TimeUpdate_d__81_o *this,
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
  v6 = sub_B0D8A8(&Method_NetworkManager__TimeUpdate_d__81_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall NetworkManager__TimeUpdate_d__81__System_Collections_IEnumerator_get_Current(
        NetworkManager__TimeUpdate_d__81_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NetworkManager__TimeUpdate_d__81__System_IDisposable_Dispose(
        NetworkManager__TimeUpdate_d__81_o *this,
        const MethodInfo *method)
{
  ;
}