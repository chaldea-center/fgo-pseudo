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
  __int64 v186; // x3
  __int64 v187; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v188; // x19
  BattleServantConfConponent_o *p_webViewAddress; // x0
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  System_Int32_array **v196; // x1
  BattleServantConfConponent_o *p_AUTHMD5_KEY_TYPE; // x0
  System_String_array **v198; // x2
  System_String_array **v199; // x3
  System_Boolean_array **v200; // x4
  System_Int32_array **v201; // x5
  System_Int32_array *v202; // x6
  System_Int32_array *v203; // x7
  System_Int32_array **v204; // x1
  BattleServantConfConponent_o *p_errorDialogResponseData; // x0
  System_String_array **v206; // x2
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  uint64_t v212; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v213; // 0:x0.8

  if ( (byte_40F92A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_14233, v10);
    sub_B16FFC(&StringLiteral_18655, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40F92A7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)NetworkManager_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_18655;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18655;
  sub_B16F98(static_fields, v14, v2, v3, v4, v5, v6, v7);
  v213.fields.dateData = (uint64_t)&v212;
  NetworkManager_TypeInfo->static_fields->WebCacheTime = 300LL;
  v212 = 0LL;
  System_DateTime___ctor_15185440(v213, 1970, 1, 1, 0, 0, 0, 1, 0LL);
  v15 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->dtUnixEpoch.fields.dateData = v212;
  v15->static_fields->serverTime = 0LL;
  v15->static_fields->serverOffsetTime = 0LL;
  v15->static_fields->isErrorServerTimeLimitOver = 0;
  v15->static_fields->serverTimeChkMovie = 0LL;
  v15->static_fields->nowTime = -1LL;
  v16 = v15->static_fields;
  v16->userAgent = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v16->userAgent, 0LL, v17, v18, v19, v20, v21, v22);
  v23 = NetworkManager_TypeInfo->static_fields;
  v23->userCreateServer = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v23->userCreateServer, 0LL, v24, v25, v26, v27, v28, v29);
  v30 = NetworkManager_TypeInfo->static_fields;
  v30->userId = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v30->userId, 0LL, v31, v32, v33, v34, v35, v36);
  v37 = NetworkManager_TypeInfo->static_fields;
  v37->authKey = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v37->authKey, 0LL, v38, v39, v40, v41, v42, v43);
  v44 = NetworkManager_TypeInfo->static_fields;
  v44->secretKey = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v44->secretKey, 0LL, v45, v46, v47, v48, v49, v50);
  v51 = NetworkManager_TypeInfo->static_fields;
  v51->userName = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v51->userName, 0LL, v52, v53, v54, v55, v56, v57);
  v58 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->genderType = 0;
  v58->static_fields->month = 0;
  v58->static_fields->day = 0;
  v59 = v58->static_fields;
  v59->sessionId = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v59->sessionId, 0LL, v60, v61, v62, v63, v64, v65);
  v66 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->isRebootBlock = 1;
  v66->static_fields->isLogin = 0;
  v67 = v66->static_fields;
  v67->friendCode = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v67->friendCode, 0LL, v68, v69, v70, v71, v72, v73);
  v74 = NetworkManager_TypeInfo->static_fields;
  v74->registrationVersion = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v74->registrationVersion, 0LL, v75, v76, v77, v78, v79, v80);
  v81 = NetworkManager_TypeInfo->static_fields;
  v81->registrationId = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v81->registrationId, 0LL, v82, v83, v84, v85, v86, v87);
  v88 = NetworkManager_TypeInfo->static_fields;
  v89 = (System_Int32_array **)StringLiteral_1;
  v88->serverSettingType = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&v88->serverSettingType, v89, v90, v91, v92, v93, v94, v95);
  v96 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->serverSettingSecurity = 0;
  v97 = v96->static_fields;
  v98 = (System_Int32_array **)StringLiteral_1;
  v97->gameServerSettingAddress = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&v97->gameServerSettingAddress, v98, v99, v100, v101, v102, v103, v104);
  v105 = (System_Int32_array **)StringLiteral_1;
  v106 = NetworkManager_TypeInfo->static_fields;
  v106->dataServerSettingAddress = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&v106->dataServerSettingAddress, v105, v107, v108, v109, v110, v111, v112);
  v113 = (System_Int32_array **)StringLiteral_1;
  v114 = NetworkManager_TypeInfo->static_fields;
  v114->webServerSettingAddress = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&v114->webServerSettingAddress, v113, v115, v116, v117, v118, v119, v120);
  v121 = (System_Int32_array **)StringLiteral_1;
  v122 = NetworkManager_TypeInfo->static_fields;
  v122->dataServerFolder = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&v122->dataServerFolder, v121, v123, v124, v125, v126, v127, v128);
  v129 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->serverRedirectSecurity = 0;
  v130 = v129->static_fields;
  v130->gameServerRedirectAddress = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v130->gameServerRedirectAddress, 0LL, v131, v132, v133, v134, v135, v136);
  v137 = NetworkManager_TypeInfo->static_fields;
  v137->dataServerRedirectAddress = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v137->dataServerRedirectAddress, 0LL, v138, v139, v140, v141, v142, v143);
  v144 = NetworkManager_TypeInfo->static_fields;
  v144->webServerRedirectAddress = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v144->webServerRedirectAddress, 0LL, v145, v146, v147, v148, v149, v150);
  v151 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->serverSecurity = 0;
  v152 = (System_Int32_array **)StringLiteral_1;
  p_gameServerAddress = (BattleServantConfConponent_o *)&v151->static_fields->gameServerAddress;
  p_gameServerAddress->klass = (BattleServantConfConponent_c *)StringLiteral_1;
  sub_B16F98(p_gameServerAddress, v152, v154, v155, v156, v157, v158, v159);
  v160 = (System_Int32_array **)StringLiteral_1;
  p_dataServerAddress = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->dataServerAddress;
  p_dataServerAddress->klass = (BattleServantConfConponent_c *)StringLiteral_1;
  sub_B16F98(p_dataServerAddress, v160, v162, v163, v164, v165, v166, v167);
  v168 = (System_Int32_array **)StringLiteral_1;
  p_webServerAddress = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->webServerAddress;
  p_webServerAddress->klass = (BattleServantConfConponent_c *)StringLiteral_1;
  sub_B16F98(p_webServerAddress, v168, v170, v171, v172, v173, v174, v175);
  v176 = (System_Int32_array **)StringLiteral_1;
  p_webViewBaseURL = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (BattleServantConfConponent_c *)StringLiteral_1;
  sub_B16F98(p_webViewBaseURL, v176, v178, v179, v180, v181, v182, v183);
  v188 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                         System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                                         v184,
                                                                                         v185,
                                                                                         v186,
                                                                                         v187);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v188,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  p_webViewAddress = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->webViewAddress;
  p_webViewAddress->klass = (BattleServantConfConponent_c *)v188;
  sub_B16F98(p_webViewAddress, (System_Int32_array **)v188, v190, v191, v192, v193, v194, v195);
  v196 = (System_Int32_array **)StringLiteral_14233;
  p_AUTHMD5_KEY_TYPE = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->AUTHMD5_KEY_TYPE;
  p_AUTHMD5_KEY_TYPE->klass = (BattleServantConfConponent_c *)StringLiteral_14233;
  sub_B16F98(p_AUTHMD5_KEY_TYPE, v196, v198, v199, v200, v201, v202, v203);
  v204 = (System_Int32_array **)StringLiteral_1;
  p_errorDialogResponseData = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->errorDialogResponseData;
  p_errorDialogResponseData->klass = (BattleServantConfConponent_c *)StringLiteral_1;
  sub_B16F98(p_errorDialogResponseData, v204, v206, v207, v208, v209, v210, v211);
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
  __int64 v50; // x3
  __int64 v51; // x4
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v52; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7

  if ( (byte_40F9324 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_RequestBase___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Queue_RequestBase__TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager___ctor__, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    byte_40F9324 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_1;
  this->fields.mAndroidApiKey = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mAndroidApiKey, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_1;
  this->fields.mAndroidProjectId = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mAndroidProjectId, v13, v14, v15, v16, v17, v18, v19);
  v20 = (System_Int32_array **)StringLiteral_1;
  this->fields.mIosApplicationId = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mIosApplicationId, v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Int32_array **)StringLiteral_1;
  this->fields.mMk = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mMk, v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_Int32_array **)StringLiteral_1;
  this->fields.mCv = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mCv, v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Int32_array **)StringLiteral_1;
  this->fields.mAuGameServerPublicKey = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mAuGameServerPublicKey, v41, v42, v43, v44, v45, v46, v47);
  v52 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B170CC(
                                                                        System_Collections_Generic_Queue_RequestBase__TypeInfo,
                                                                        v48,
                                                                        v49,
                                                                        v50,
                                                                        v51);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v52,
    (const MethodInfo_2B15EA4 *)Method_System_Collections_Generic_Queue_RequestBase___ctor__);
  this->fields.communicationWaitList = (struct System_Collections_Generic_Queue_RequestBase__o *)v52;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.communicationWaitList,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_NetworkManager___ctor__);
}


void __fastcall NetworkManager__AddWaitStatus(NetworkManager_o *this, RequestBase_o *request, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Queue_RequestBase__o *communicationWaitList; // x0
  int v10; // w21
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v11; // x0
  System_Collections_Generic_Queue_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F9316 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__, request);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_RequestBase__Enqueue__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__, v8);
    byte_40F9316 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( this->fields.communicationWork != request )
  {
    communicationWaitList = this->fields.communicationWaitList;
    if ( !communicationWaitList )
      goto LABEL_14;
    System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
      &v12,
      (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)communicationWaitList,
      (const MethodInfo_2B1656C *)Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__);
    while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
              &v12,
              (const MethodInfo_2074268 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__) )
    {
      if ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
             &v12,
             (const MethodInfo_207436C *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__) == (AssetManager_LoadWaitStatus_o *)request )
      {
        v10 = 73;
        goto LABEL_10;
      }
    }
    v10 = 61;
LABEL_10:
    System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
      &v12,
      (const MethodInfo_2074258 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
    if ( v10 != 73 )
    {
      v11 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.communicationWaitList;
      if ( v11 )
      {
        System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
          v11,
          (Mono_Net_CFNetwork_GetProxyData_o *)request,
          (const MethodInfo_2B16498 *)Method_System_Collections_Generic_Queue_RequestBase__Enqueue__);
        return;
      }
LABEL_14:
      sub_B170D4();
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
  struct NetworkManager_StaticFields *static_fields; // x8
  int64_t Time; // x0
  NetworkManager_c *v11; // x8
  __int64 v12; // x21
  BalanceConfig_c *v13; // x0
  System_String_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x5
  NetworkManager_c *v22; // x0

  if ( (byte_40F92B9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BalanceConfig_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_NetworkManager_OnClickErrorReboot__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_12514, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40F92B9 = 1;
  }
  v22 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v22 = NetworkManager_TypeInfo;
  }
  static_fields = v22->static_fields;
  if ( static_fields->isErrorServerTimeLimitOver )
    return 0;
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = NetworkManager_TypeInfo;
    static_fields = NetworkManager_TypeInfo->static_fields;
  }
  if ( static_fields->isLogin )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v22);
    Time = NetworkManager__getTime((const MethodInfo *)v22);
    v11 = NetworkManager_TypeInfo;
    v12 = Time - NetworkManager_TypeInfo->static_fields->serverTime;
    if ( v12 < 0 )
      goto LABEL_20;
    v13 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    if ( v12 > v13->static_fields->ServerTimeOverLimit )
    {
      v11 = NetworkManager_TypeInfo;
LABEL_20:
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = NetworkManager_TypeInfo;
      }
      v11->static_fields->isErrorServerTimeLimitOver = 1;
      v11->static_fields->isRebootBlock = 1;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12514, 0LL);
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
      NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1, v14, 0LL, v19, v20);
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

  if ( (byte_40F92A1 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92A1 = 1;
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
    sub_B170D4();
  return System_String__Equals_43731072(gameServerAddress, static_fields->userCreateServer, 0LL);
}


bool __fastcall NetworkManager__CheckUserCreateServerByPrefix(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  NetworkManager_c *v3; // x0
  NetworkManager_c *v4; // x0
  __int64 v5; // x2
  NetworkManager_c *v6; // x0
  System_String_o *gameServerAddress; // x19
  System_String_array *v8; // x0
  __int64 v9; // x2
  System_String_array *v10; // x1
  System_String_array *v11; // x19
  System_String_o *userCreateServer; // x20
  __int64 v13; // x2
  __int64 v14; // x8
  __int64 v15; // x9
  System_String_o *v16; // x8

  if ( (byte_40F92A2 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, v1);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    byte_40F92A2 = 1;
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
      v6 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v6 = NetworkManager_TypeInfo;
      }
      gameServerAddress = v6->static_fields->gameServerAddress;
      v8 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v5);
      if ( !v8 )
        goto LABEL_29;
      v10 = v8;
      if ( !v8->max_length )
        goto LABEL_30;
      LOWORD(v8->m_Items[0]) = 45;
      if ( !gameServerAddress )
        goto LABEL_29;
      v11 = System_String__Split(gameServerAddress, (System_Char_array *)v8, 0LL);
      userCreateServer = NetworkManager_TypeInfo->static_fields->userCreateServer;
      v8 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v13);
      if ( !v8 )
        goto LABEL_29;
      v10 = v8;
      if ( !v8->max_length )
      {
LABEL_30:
        sub_B17100(v8, v10, v9);
        sub_B170A0();
      }
      LOWORD(v8->m_Items[0]) = 45;
      if ( !userCreateServer )
        goto LABEL_29;
      v8 = System_String__Split(userCreateServer, (System_Char_array *)v8, 0LL);
      if ( !v11 )
        goto LABEL_29;
      v14 = *(_QWORD *)&v11->max_length;
      if ( v14 )
      {
        if ( !v8 )
          goto LABEL_29;
        v15 = *(_QWORD *)&v8->max_length;
        if ( v15 )
        {
          if ( (_DWORD)v14 && (_DWORD)v15 )
          {
            v16 = v11->m_Items[0];
            if ( v16 )
              return System_String__Equals_43731072(v16, v8->m_Items[0], 0LL);
LABEL_29:
            sub_B170D4();
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

  if ( (byte_40F92BE & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F92BE = 1;
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
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->userId, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = NetworkManager_TypeInfo->static_fields;
  v10->userCreateServer = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v10->userCreateServer, 0LL, v11, v12, v13, v14, v15, v16);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.loginResponseResult, 0LL, v2, v3, v4, v5, v6, v7);
}


bool __fastcall NetworkManager__CommunicationIsBusy(const MethodInfo *method)
{
  __int64 v1; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F92A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v1);
    byte_40F92A8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F9317 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_RequestBase__Dequeue__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__, v3);
    byte_40F9317 = 1;
  }
  communicationWaitList = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.communicationWaitList;
  if ( !communicationWaitList )
    sub_B170D4();
  if ( communicationWaitList->fields._size < 1 || this->fields.communicationWork )
    return 0;
  ProxyData___Dequeue = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                          communicationWaitList,
                          (const MethodInfo_2B166B0 *)Method_System_Collections_Generic_Queue_RequestBase__Dequeue__);
  this->fields.communicationWork = (struct RequestBase_o *)ProxyData___Dequeue;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.communicationWork,
    (System_Int32_array **)ProxyData___Dequeue,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v14 = NetworkManager__RequestCR(this, this->fields.communicationWork, 0.0, v13);
  started = UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v14, 0LL);
  this->fields.communicationCoroutine = started;
  sub_B16F98(
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

  if ( (byte_40F92E9 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92E9 = 1;
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

  if ( (byte_40F92E8 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92E8 = 1;
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

  if ( (byte_40F92EA & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92EA = 1;
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

  if ( (byte_40F92E0 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v2);
    byte_40F92E0 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v3->static_fields->isRebootBlock = 1;
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
    sub_B16F98(p_errorCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall NetworkManager__EndGetStoreUrl(NetworkManager_o *this, System_String_o *url, const MethodInfo *method)
{
  if ( url )
    UnityEngine_Application__OpenURL(url, 0LL);
  UnityEngine_Application__Quit_40644448(0LL);
}


void __fastcall NetworkManager__EndLockSync(NetworkManager_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_40F9320 & 1) == 0 )
  {
    sub_B16FFC(&UserServantLockManager_TypeInfo, result);
    sub_B16FFC(&StringLiteral_21129, v5);
    byte_40F9320 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21129, 0LL) )
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

  if ( (byte_40F9323 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F9323 = 1;
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
    sub_B16F98(p_loginCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    NetworkManager_LoginCallbackFunc__Invoke(v10, monitor, 0LL);
  }
}


void __fastcall NetworkManager__EndOptionSync(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40F9322 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F9322 = 1;
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
  System_Int64_array *LockList; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Int64_array *v25; // x20
  NetworkManager_ResultCallbackFunc_o *v26; // x21
  CardLockSyncRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40F931F & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_EndLockSync__, result);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardLockSyncRequest___, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v13);
    sub_B16FFC(&UserServantLockManager_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_21129, v15);
    byte_40F931F = 1;
  }
  this->fields.loginResponseResult = result;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.loginResponseResult,
    (System_Int32_array **)result,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  NetworkManager__SetupObfuscatedAccountId(v16, this->fields.loginResponseResult, v17);
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
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
    LockList = UserServantLockManager__GetLockList(0LL);
    if ( !LockList )
      goto LABEL_20;
    v25 = LockList;
    if ( *(_QWORD *)&LockList->max_length )
    {
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v21,
                                                     v22,
                                                     v23,
                                                     v24);
      NetworkManager_ResultCallbackFunc___ctor(v26, (Il2CppObject *)this, Method_NetworkManager_EndLockSync__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardLockSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v26,
                                                                     (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardLockSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        CardLockSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v25, 0LL, 0, 0LL);
        return;
      }
LABEL_20:
      sub_B170D4();
    }
    NetworkManager__EndLockSync(this, (System_String_o *)StringLiteral_21129, v22);
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
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x21
  CommonUI_o *Instance; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  ErrorDialog_ClickDelegate_o *v28; // x23

  if ( (byte_40F92D7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, errorTitle);
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, v13);
    sub_B16FFC(&Method_NetworkManager_EndErrorDialog__, v14);
    sub_B16FFC(&Method_NetworkManager_EndErrorWebView__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B16FFC(&WebViewManager_TypeInfo, v17);
    byte_40F92D7 = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_B16F98(
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
    v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0LL);
    if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WebViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    }
    WebViewManager__OpenView(errorTitle, errorUrl, v22, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v24, v25, v26, v27);
    ErrorDialog_ClickDelegate___ctor(v28, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__OpenErrorDialog(Instance, errorTitle, errorDetail, v28, 0, 0LL);
  }
}


int32_t __fastcall NetworkManager__ExecuteCommand(ResponseData_o *data, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v5; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0

  if ( (byte_40F9315 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v3);
    byte_40F9315 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  if ( !data )
    sub_B170D4();
  v5 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&Instance->fields.isButtonEnable;
  if ( !v5 )
    sub_B170D4();
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           v5,
           (System_Type_o *)data->fields.nid,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__);
  if ( !Item )
    sub_B170D4();
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

  if ( (byte_40F9300 & 1) == 0 )
  {
    sub_B16FFC(&CatAndMouseGame_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40F9300 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  basePanel = (System_String_o *)Instance->fields.basePanel;
  if ( System_String__IsNullOrEmpty(basePanel, 0LL) )
    return (System_String_o *)StringLiteral_1;
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
  __int64 v20; // x2
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x0
  System_Int32_array **v37; // x1
  __int64 v38; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x0
  System_Int32_array **v53; // x1
  __int64 v54; // x0
  __int64 v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  NetworkManager_c *v66; // x0
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v67; // x20
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  System_Text_UTF8Encoding_o *v72; // x21
  NetworkManager_c *v73; // x0
  System_String_o *v74; // x0
  System_Byte_array *v75; // x0
  System_Byte_array *v76; // x19
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v78; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v79; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_40F92BD & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__, v10);
    sub_B16FFC(&string___TypeInfo, v11);
    sub_B16FFC(&System_Text_UTF8Encoding_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_1503, v13);
    sub_B16FFC(&StringLiteral_1223, v14);
    sub_B16FFC(&StringLiteral_440, v15);
    sub_B16FFC(&StringLiteral_1, v16);
    byte_40F92BD = 1;
  }
  memset(&v79, 0, sizeof(v79));
  if ( !headers )
    goto LABEL_55;
  v17 = (System_Int32_array **)StringLiteral_1;
  System_Collections_Generic_SortedDictionary_string__string___GetEnumerator(
    &v78,
    headers,
    (const MethodInfo_2A561E0 *)Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__);
  v79 = v78;
  while ( 1 )
  {
    v18 = (System_String_o *)v17;
    if ( !System_Collections_Generic_SortedDictionary_Enumerator_string__string___MoveNext(
            &v79,
            (const MethodInfo_26BD5B4 *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__) )
      break;
    Current = System_Collections_Generic_SortedDictionary_Enumerator_string__string___get_Current(
                &v79,
                (const MethodInfo_26BD62C *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__);
    if ( System_String__op_Inequality((System_String_o *)v17, (System_String_o *)StringLiteral_1, 0LL) )
    {
      v21 = sub_B17014(string___TypeInfo, 5LL, v20);
      v29 = (System_String_array *)v21;
      if ( !v21 )
        sub_B170D4();
      if ( v17 )
      {
        v21 = sub_B170BC(v17, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
        if ( !v21 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( !v29->max_length )
      {
        sub_B17100(v21, v22, v23);
        sub_B170A0();
      }
      v29->m_Items[0] = (System_String_o *)v17;
      sub_B16F98((BattleServantConfConponent_o *)v29->m_Items, v17, v23, v24, v25, v26, v27, v28);
      v36 = StringLiteral_440;
      if ( StringLiteral_440 )
      {
        v36 = sub_B170BC(StringLiteral_440, v29->obj.klass->_1.element_class);
        if ( !v36 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
        v37 = (System_Int32_array **)StringLiteral_440;
      }
      else
      {
        v37 = 0LL;
      }
      if ( v29->max_length <= 1 )
      {
        sub_B17100(v36, v37, v30);
        sub_B170A0();
      }
      v29->m_Items[1] = (System_String_o *)v37;
      sub_B16F98((BattleServantConfConponent_o *)&v29->m_Items[1], v37, v30, v31, v32, v33, v34, v35);
      if ( Current.fields.key )
      {
        v38 = sub_B170BC(Current.fields.key, v29->obj.klass->_1.element_class);
        if ( !v38 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v29->max_length <= 2 )
      {
        sub_B17100(v38, v39, v40);
        sub_B170A0();
      }
      v29->m_Items[2] = (System_String_o *)Current.fields.key;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v29->m_Items[2],
        (System_Int32_array **)Current.fields.key,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      v52 = StringLiteral_1503;
      if ( StringLiteral_1503 )
      {
        v52 = sub_B170BC(StringLiteral_1503, v29->obj.klass->_1.element_class);
        if ( !v52 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
        v53 = (System_Int32_array **)StringLiteral_1503;
      }
      else
      {
        v53 = 0LL;
      }
      if ( v29->max_length <= 3 )
      {
        sub_B17100(v52, v53, v46);
        sub_B170A0();
      }
      v29->m_Items[3] = (System_String_o *)v53;
      sub_B16F98((BattleServantConfConponent_o *)&v29->m_Items[3], v53, v46, v47, v48, v49, v50, v51);
      if ( Current.fields.value )
      {
        v54 = sub_B170BC(Current.fields.value, v29->obj.klass->_1.element_class);
        if ( !v54 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v29->max_length <= 4 )
      {
        sub_B17100(v54, v55, v56);
        sub_B170A0();
      }
      v29->m_Items[4] = (System_String_o *)Current.fields.value;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v29->m_Items[4],
        (System_Int32_array **)Current.fields.value,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      v17 = (System_Int32_array **)System_String__Concat_43823856(v29, 0LL);
    }
    else
    {
      v17 = (System_Int32_array **)System_String__Concat_43747144(
                                     (System_String_o *)v17,
                                     (System_String_o *)Current.fields.key,
                                     (System_String_o *)StringLiteral_1503,
                                     (System_String_o *)Current.fields.value,
                                     0LL);
    }
  }
  System_Collections_Generic_SortedDictionary_Enumerator_string__string___Dispose(
    &v79,
    (const MethodInfo_26BD5F0 *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__);
  v66 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v66 = NetworkManager_TypeInfo;
  }
  if ( !v66->static_fields->secretKey )
    return 0LL;
  v67 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_B170CC(
                                                                      System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo,
                                                                      v62,
                                                                      v63,
                                                                      v64,
                                                                      v65);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v67, 0LL);
  v72 = (System_Text_UTF8Encoding_o *)sub_B170CC(System_Text_UTF8Encoding_TypeInfo, v68, v69, v70, v71);
  System_Text_UTF8Encoding___ctor(v72, 0LL);
  v73 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v73 = NetworkManager_TypeInfo;
  }
  v74 = System_String__Concat_43746016(v18, (System_String_o *)StringLiteral_1223, v73->static_fields->secretKey, 0LL);
  if ( !v72
    || (v75 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v72->klass->vtable._18_GetBytes.method)(
                                     v72,
                                     v74,
                                     v72->klass->vtable._19_GetBytes.methodPtr),
        !v67) )
  {
LABEL_55:
    sub_B170D4();
  }
  v76 = System_Security_Cryptography_HashAlgorithm__ComputeHash_42874060(
          (System_Security_Cryptography_HashAlgorithm_o *)v67,
          v75,
          0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v67, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToBase64String(v76, 0LL);
}


System_String_o *__fastcall NetworkManager__GetCv(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  System_String_o *commonCamera; // x19

  if ( (byte_40F9302 & 1) == 0 )
  {
    sub_B16FFC(&CatAndMouseGame_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40F9302 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  commonCamera = (System_String_o *)Instance->fields.commonCamera;
  if ( System_String__IsNullOrEmpty(commonCamera, 0LL) )
    return (System_String_o *)StringLiteral_1;
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

  if ( (byte_40F92EB & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92EB = 1;
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

  if ( (byte_40F92F6 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92F6 = 1;
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


System_String_o *__fastcall NetworkManager__GetDataServerSetting_23692932(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_40F92F7 & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    byte_40F92F7 = 1;
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

  if ( (byte_40F92B8 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    byte_40F92B8 = 1;
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
  return LocalizationManager__GetNumberFormat_23125544(friendCode, 0LL);
}


System_String_o *__fastcall NetworkManager__GetFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_40F92B7 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F92B7 = 1;
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

  if ( (byte_40F92F4 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92F4 = 1;
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


System_String_o *__fastcall NetworkManager__GetGameServerSetting_23692732(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_40F92F5 & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    byte_40F92F5 = 1;
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

  if ( (byte_40F92BA & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92BA = 1;
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

  if ( (byte_40F9301 & 1) == 0 )
  {
    sub_B16FFC(&CatAndMouseGame_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40F9301 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  webViewScreen = (System_String_o *)Instance->fields.webViewScreen;
  if ( System_String__IsNullOrEmpty(webViewScreen, 0LL) )
    return (System_String_o *)StringLiteral_1;
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

  if ( (byte_40F92F1 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92F1 = 1;
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


bool __fastcall NetworkManager__GetSecurityServerSetting_23692532(System_String_o *type, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_40F92F3 & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    byte_40F92F3 = 1;
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

  if ( (byte_40F930E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4563, method);
    sub_B16FFC(&StringLiteral_12276, v3);
    sub_B16FFC(&StringLiteral_12321, v4);
    sub_B16FFC(&StringLiteral_15054, v5);
    sub_B16FFC(&StringLiteral_4562, v6);
    sub_B16FFC(&StringLiteral_7289, v7);
    sub_B16FFC(&StringLiteral_10813, v8);
    sub_B16FFC(&StringLiteral_10412, v9);
    sub_B16FFC(&StringLiteral_8349, v10);
    sub_B16FFC(&StringLiteral_10413, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40F930E = 1;
  }
  if ( !serverName )
    sub_B170D4();
  v13 = &StringLiteral_10813;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_10813, 0LL) )
    return System_String__Replace_43750968(serverName, (System_String_o *)*v13, (System_String_o *)StringLiteral_1, 0LL);
  v13 = &StringLiteral_10412;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_10412, 0LL) )
    return System_String__Replace_43750968(serverName, (System_String_o *)*v13, (System_String_o *)StringLiteral_1, 0LL);
  v13 = &StringLiteral_4563;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_4563, 0LL) )
    return System_String__Replace_43750968(serverName, (System_String_o *)*v13, (System_String_o *)StringLiteral_1, 0LL);
  v13 = &StringLiteral_8349;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_8349, 0LL) )
    return System_String__Replace_43750968(serverName, (System_String_o *)*v13, (System_String_o *)StringLiteral_1, 0LL);
  v13 = &StringLiteral_10413;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_10413, 0LL) )
    return System_String__Replace_43750968(serverName, (System_String_o *)*v13, (System_String_o *)StringLiteral_1, 0LL);
  v13 = &StringLiteral_4562;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_4562, 0LL) )
    return System_String__Replace_43750968(serverName, (System_String_o *)*v13, (System_String_o *)StringLiteral_1, 0LL);
  v13 = &StringLiteral_15054;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_15054, 0LL) )
    return System_String__Replace_43750968(serverName, (System_String_o *)*v13, (System_String_o *)StringLiteral_1, 0LL);
  v13 = &StringLiteral_12321;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_12321, 0LL)
    && !System_String__Contains(serverName, (System_String_o *)StringLiteral_12276, 0LL) )
  {
    return System_String__Replace_43750968(serverName, (System_String_o *)*v13, (System_String_o *)StringLiteral_1, 0LL);
  }
  v13 = &StringLiteral_7289;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_7289, 0LL) )
    return System_String__Replace_43750968(serverName, (System_String_o *)*v13, (System_String_o *)StringLiteral_1, 0LL);
  else
    return (System_String_o *)StringLiteral_1;
}


System_String_o *__fastcall NetworkManager__GetServerSettingType(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_40F92F0 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92F0 = 1;
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

  if ( (byte_40F92BC & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92BC = 1;
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

  if ( (byte_40F930D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4563, method);
    sub_B16FFC(&StringLiteral_12276, v3);
    sub_B16FFC(&StringLiteral_12321, v4);
    sub_B16FFC(&StringLiteral_15054, v5);
    sub_B16FFC(&StringLiteral_4562, v6);
    sub_B16FFC(&StringLiteral_7289, v7);
    sub_B16FFC(&StringLiteral_10813, v8);
    sub_B16FFC(&StringLiteral_10412, v9);
    sub_B16FFC(&StringLiteral_8349, v10);
    sub_B16FFC(&StringLiteral_10413, v11);
    byte_40F930D = 1;
  }
  if ( !serverName )
    sub_B170D4();
  v12 = &StringLiteral_10813;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_10813, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_10412;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_10412, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_4563;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_4563, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_8349;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_8349, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_10413;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_10413, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_4562;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_4562, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_15054;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_15054, 0LL) )
    return (System_String_o *)*v12;
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_12321, 0LL)
    && !System_String__Contains(serverName, (System_String_o *)StringLiteral_12276, 0LL) )
  {
    v12 = &StringLiteral_12321;
    return (System_String_o *)*v12;
  }
  if ( System_String__Contains(serverName, (System_String_o *)StringLiteral_7289, 0LL) )
    return (System_String_o *)StringLiteral_7289;
  else
    return serverName;
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

  if ( (byte_40F92B0 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, userName);
    byte_40F92B0 = 1;
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
  sub_B16F98(
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
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
}


int32_t __fastcall NetworkManager__GetTerminalDispState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  TerminalPramsManager_c *v6; // x0

  if ( (byte_40F92A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
    byte_40F92A9 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  if ( AvalonSceneManager__checkNowScene(Instance, 9, 0LL) )
    return 1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6043 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v4);
    byte_40F6043 = 1;
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

  if ( (byte_40F930C & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_23172, v4);
    byte_40F930C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = (Il2CppObject *)NetworkManager__getBaseUrl(0, method);
  v8 = stageId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Concat_43823436(BaseUrl, (Il2CppObject *)StringLiteral_23172, v6, 0LL);
}


System_String_o *__fastcall NetworkManager__GetWebServerSetting(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_40F92F8 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92F8 = 1;
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


System_String_o *__fastcall NetworkManager__GetWebServerSetting_23693132(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_40F92F9 & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    byte_40F92F9 = 1;
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x5

  if ( (byte_40F92D6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&Method_NetworkManager_OnClickErrorReboot__, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_12514, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40F92D6 = 1;
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
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12514, 0LL);
    v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
    NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1, v12, 0LL, v17, v18);
  }
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__Initialize(
        NetworkManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F92AB & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager__Initialize_d__82_TypeInfo, method);
    byte_40F92AB = 1;
  }
  v6 = sub_B170CC(NetworkManager__Initialize_d__82_TypeInfo, method, v2, v3, v4);
  NetworkManager__Initialize_d__82___ctor((NetworkManager__Initialize_d__82_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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

  if ( (byte_40F92AC & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F92AC = 1;
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
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->userAgent, UserAgentString, v3, v4, v5, v6, v7, v8);
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
  __int64 v10; // x3
  __int64 v11; // x4
  System_IO_BinaryReader_o *v12; // x19
  System_String_o *v13; // x20
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0

  if ( (byte_40F92C2 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, fname);
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    byte_40F92C2 = 1;
  }
  v6 = 0LL;
  if ( System_IO_File__Exists(fname, 0LL) )
  {
    v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(fname, 0LL);
    v12 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v8, v9, v10, v11);
    System_IO_BinaryReader___ctor(v12, v7, 0LL);
    if ( !v12 )
      sub_B170D4();
    v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._22_ReadString.method)(
                               v12,
                               v12->klass->vtable._23_ReadChars.methodPtr);
    if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    }
    v6 = EncryptedPlayerPrefs__Md5(v13, 0LL);
    klass = v12->klass;
    if ( *(_WORD *)&v12->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_12:
      v17 = sub_AAFEF8(v12, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v17)(v12, *(_QWORD *)(v17 + 8));
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

  if ( (byte_40F931A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4174, requestWork);
    byte_40F931A = 1;
  }
  if ( !requestWork )
    sub_B170D4();
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
  if ( this->fields.communicationWork == requestWork )
  {
    this->fields.communicationWorkResponseList = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList,
      0LL,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    this->fields.communicationWork = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.communicationWork, 0LL, v16, v17, v18, v19, v20, v21);
    this->fields.communicationCoroutine = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.communicationCoroutine, 0LL, v22, v23, v24, v25, v26, v27);
    if ( this->fields.cacheRefreshWork )
    {
      this->fields.cacheRefreshWork = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.cacheRefreshWork, 0LL, v28, v29, v30, v31, v32, v33);
      this->fields.cacheRefreshWorkResponseList = 0LL;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.cacheRefreshWorkResponseList,
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
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_4174,
    0.0,
    0LL);
  return 1;
}


void __fastcall NetworkManager__OnClickErrorDialog(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  UnityEngine_Application__Quit_40644448(0LL);
}


void __fastcall NetworkManager__OnClickErrorReboot(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  ManagementManager_c *v4; // x0
  NetworkManager_c *v5; // x0
  ManagementManager_o *Instance; // x0

  if ( (byte_40F92DB & 1) == 0 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v3);
    byte_40F92DB = 1;
  }
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_40F7DF6 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, method);
    byte_40F7DF6 = 1;
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
    UnityEngine_Application__Quit_40644448(0LL);
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
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
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

  if ( (byte_40F92D8 & 1) == 0 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, isDecide);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v11);
    byte_40F92D8 = 1;
  }
  this->fields.communicationWorkResponseList = 0LL;
  sub_B16F98(
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
    started = UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v14, 0LL);
    this->fields.communicationCoroutine = started;
    sub_B16F98(
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
    if ( !byte_40F7DF6 )
    {
      sub_B16FFC(&ManagementManager_TypeInfo, v12);
      byte_40F7DF6 = 1;
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
      UnityEngine_Application__Quit_40644448(0LL);
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
      Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_B170D4();
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

  if ( (byte_40F92D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F92D9 = 1;
  }
  if ( isDecide )
  {
    this->fields.communicationWorkResponseList = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v11 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v10);
    started = UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
    p_communicationCoroutine = (BattleServantConfConponent_o *)&this->fields.communicationCoroutine;
    this->fields.communicationCoroutine = started;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B170D4();
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
  sub_B16F98(p_communicationCoroutine, (System_Int32_array **)started, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_40F92DC & 1) == 0 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v3);
    byte_40F92DC = 1;
  }
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_40F7DF6 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, method);
    byte_40F7DF6 = 1;
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
    UnityEngine_Application__Quit_40644448(0LL);
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
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
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

  if ( (byte_40F92DD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_13572, method);
    byte_40F92DD = 1;
  }
  this->fields.communicationWorkResponseList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList, 0LL, v2, v3, v4, v5, v6, v7);
  communicationCoroutine = this->fields.communicationCoroutine;
  if ( communicationCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_34804984((UnityEngine_MonoBehaviour_o *)this, communicationCoroutine, 0LL);
  this->fields.communicationWork = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.communicationWork, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.communicationCoroutine = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.communicationCoroutine, 0LL, v16, v17, v18, v19, v20, v21);
  if ( this->fields.cacheRefreshWork )
  {
    this->fields.cacheRefreshWork = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.cacheRefreshWork, 0LL, v22, v23, v24, v25, v26, v27);
    this->fields.cacheRefreshWorkResponseList = 0LL;
    sub_B16F98(
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
    (System_String_o *)StringLiteral_13572,
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

  if ( (byte_40F92DA & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_TopRefreshRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    byte_40F92DA = 1;
  }
  p_communicationWork = &this->fields.communicationWork;
  communicationWork = this->fields.communicationWork;
  this->fields.cacheRefreshWork = communicationWork;
  sub_B16F98(
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
  sub_B16F98(
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
                                                               (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TopRefreshRequest___);
  *p_communicationWork = (RequestBase_o *)Request_WarBoardWallAttackRequest;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.communicationWork,
    Request_WarBoardWallAttackRequest,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.communicationWorkResponseList = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList,
    0LL,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !*p_communicationWork )
    sub_B170D4();
  RequestBase__addBaseField(*p_communicationWork, 0LL);
  v33 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v32);
  started = UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v33, 0LL);
  this->fields.communicationCoroutine = started;
  sub_B16F98(
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

  if ( (byte_40F92E1 & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    byte_40F92E1 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  WebViewPluginScript__LaunchStore(v2->static_fields->AndroidPackageName, 0LL);
  UnityEngine_Application__Quit_40644448(0LL);
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40F92DF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_NetworkManager_EndCloseUserDelete__, v5);
    sub_B16FFC(&OptionManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40F92DF = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_NetworkManager_EndCloseUserDelete__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseConfirmDialog_18237824(Instance, v13, 0LL);
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
  struct RequestBase_o *v9; // x21
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
  struct RequestBase_o *cacheRefreshWork; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  cacheRefreshWorkResponseList = responseList;
  v9 = requestWork;
  if ( (byte_40F9319 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4174, requestWork);
    byte_40F9319 = 1;
  }
  if ( this->fields.communicationWork == v9
    && (this->fields.communicationWorkResponseList = 0LL,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList,
          0LL,
          (System_String_array **)responseList,
          (System_String_array **)method,
          v4,
          v5,
          v6,
          v7),
        this->fields.communicationWork = 0LL,
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.communicationWork, 0LL, v11, v12, v13, v14, v15, v16),
        this->fields.communicationCoroutine = 0LL,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.communicationCoroutine,
          0LL,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (cacheRefreshWork = this->fields.cacheRefreshWork) != 0LL) )
  {
    cacheRefreshWorkResponseList = this->fields.cacheRefreshWorkResponseList;
    this->fields.cacheRefreshWork = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.cacheRefreshWork, 0LL, v23, v24, v25, v26, v27, v28);
    this->fields.cacheRefreshWorkResponseList = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.cacheRefreshWorkResponseList,
      0LL,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    v9 = cacheRefreshWork;
  }
  else if ( !v9 )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct RequestBase_o *, ResponseData_array *, Il2CppMethodPointer))v9->klass->vtable._10_requestCompleted.method)(
    v9,
    cacheRefreshWorkResponseList,
    v9->klass->vtable._11_backgroundErrorRequest.methodPtr);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_4174,
    0.0,
    0LL);
}


bool __fastcall NetworkManager__OnErrorCommunication(
        NetworkManager_o *this,
        RequestBase_o *requestWork,
        System_String_o *errorCode,
        const MethodInfo *method)
{
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

  if ( (byte_40F931B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4174, requestWork);
    byte_40F931B = 1;
  }
  if ( !requestWork )
    sub_B170D4();
  if ( (((__int64 (__fastcall *)(RequestBase_o *, System_String_o *, Il2CppMethodPointer, const MethodInfo *))requestWork->klass->vtable._14_errorRequest.method)(
          requestWork,
          errorCode,
          requestWork->klass->vtable._15_errorRetry.methodPtr,
          method) & 1) == 0 )
    return 0;
  if ( this->fields.communicationWork == requestWork )
  {
    this->fields.communicationWorkResponseList = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList,
      0LL,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    this->fields.communicationWork = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.communicationWork, 0LL, v13, v14, v15, v16, v17, v18);
    this->fields.communicationCoroutine = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.communicationCoroutine, 0LL, v19, v20, v21, v22, v23, v24);
    if ( this->fields.cacheRefreshWork )
    {
      this->fields.cacheRefreshWork = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.cacheRefreshWork, 0LL, v25, v26, v27, v28, v29, v30);
      this->fields.cacheRefreshWorkResponseList = 0LL;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.cacheRefreshWorkResponseList,
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
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_4174,
    0.0,
    0LL);
  return 1;
}


void __fastcall NetworkManager__OptionSync(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40F9321 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_NetworkManager_EndOptionSync__, v3);
    sub_B16FFC(&OptionManager_TypeInfo, v4);
    byte_40F9321 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__CheckOldLocal(0LL) )
  {
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_NetworkManager_EndOptionSync__, 0LL);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__SaveData(v9, 0LL);
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
  __int64 v29; // x3
  __int64 v30; // x4
  System_IO_BinaryReader_o *v31; // x21
  System_String_o *v32; // x22
  System_String_o *v33; // x23
  NetworkManager_c *v34; // x0
  System_String_o *String; // x1
  int v36; // w8
  char v37; // w23
  System_String_o *v38; // x22
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v40; // x22
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x23
  NetworkManager_c *v49; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v51; // x0
  System_Int32_array **v52; // x1
  struct NetworkManager_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v60; // x0
  System_Int32_array **v61; // x1
  struct NetworkManager_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v69; // x0
  System_Int32_array **v70; // x1
  struct NetworkManager_StaticFields *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v79; // x10
  int32_t *p_offset; // x11
  __int64 v81; // x0
  int v82; // w8
  int v83; // w9
  _DWORD v85[11]; // [xsp+10h] [xbp-90h]
  int v86; // [xsp+3Ch] [xbp-64h]
  int v87; // [xsp+48h] [xbp-58h]

  if ( (byte_40F92BF & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, method);
    sub_B16FFC(&CatAndMouseGame_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, v5);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&JsonManager_TypeInfo, v7);
    sub_B16FFC(&ManagerConfig_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_22909, v10);
    sub_B16FFC(&StringLiteral_16464, v11);
    sub_B16FFC(&StringLiteral_21854, v12);
    sub_B16FFC(&StringLiteral_22948, v13);
    byte_40F92BF = 1;
  }
  v87 = 0;
  v86 = 0;
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
      v31 = (System_IO_BinaryReader_o *)sub_B170CC(v24, v27, v28, v29, v30);
      System_IO_BinaryReader___ctor(v31, v26, 0LL);
      if ( !v31 )
        sub_B170D4();
      v32 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v31->klass->vtable._22_ReadString.method)(
                                 v31,
                                 v31->klass->vtable._23_ReadChars.methodPtr);
      if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      }
      v33 = EncryptedPlayerPrefs__Md5(v32, 0LL);
      v34 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v34 = NetworkManager_TypeInfo;
      }
      String = UnityEngine_PlayerPrefs__GetString(v34->static_fields->AUTHMD5_KEY_TYPE, v33, 0LL);
      if ( System_String__op_Inequality(v33, String, 0LL) )
        break;
      if ( v32 )
      {
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        v38 = CatAndMouseGame__MouseGame1(v32, 0, 0LL);
        if ( v38 )
        {
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          Dictionary = JsonManager__getDictionary(v38, 0LL);
          v40 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
          if ( !Dictionary )
            sub_B170D4();
          Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                   (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary,
                   (System_Type_o *)StringLiteral_22909,
                   (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            sub_B170D4();
          v48 = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                         Item,
                                         Item->klass->vtable[4].methodPtr);
          v49 = NetworkManager_TypeInfo;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v49 = NetworkManager_TypeInfo;
          }
          static_fields = v49->static_fields;
          static_fields->userCreateServer = (struct System_String_o *)v48;
          sub_B16F98(
            (BattleServantConfConponent_o *)&static_fields->userCreateServer,
            v48,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
          v51 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  v40,
                  (System_Type_o *)StringLiteral_22948,
                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v51 )
            sub_B170D4();
          v52 = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v51->klass->vtable[3].method)(
                                         v51,
                                         v51->klass->vtable[4].methodPtr);
          v53 = NetworkManager_TypeInfo->static_fields;
          v53->userId = (struct System_String_o *)v52;
          sub_B16F98((BattleServantConfConponent_o *)&v53->userId, v52, v54, v55, v56, v57, v58, v59);
          v60 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  v40,
                  (System_Type_o *)StringLiteral_16464,
                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v60 )
            sub_B170D4();
          v61 = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v60->klass->vtable[3].method)(
                                         v60,
                                         v60->klass->vtable[4].methodPtr);
          v62 = NetworkManager_TypeInfo->static_fields;
          v62->authKey = (struct System_String_o *)v61;
          sub_B16F98((BattleServantConfConponent_o *)&v62->authKey, v61, v63, v64, v65, v66, v67, v68);
          v69 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  v40,
                  (System_Type_o *)StringLiteral_21854,
                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v69 )
            sub_B170D4();
          v70 = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v69->klass->vtable[3].method)(
                                         v69,
                                         v69->klass->vtable[4].methodPtr);
          v71 = NetworkManager_TypeInfo->static_fields;
          v71->secretKey = (struct System_String_o *)v70;
          sub_B16F98((BattleServantConfConponent_o *)&v71->secretKey, v70, v72, v73, v74, v75, v76, v77);
          v85[v18] = 314;
          v36 = v86;
          v37 = 1;
        }
        else
        {
          v85[v18] = 320;
          v36 = v86;
          v37 = 0;
        }
        goto LABEL_49;
      }
      v85[v18] = 320;
      v18 = ++v86;
      v37 = 0;
LABEL_50:
      klass = v31->klass;
      if ( *(_WORD *)&v31->klass->_2.bitflags1 )
      {
        v79 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v79;
          p_offset += 4;
          if ( v79 >= *(unsigned __int16 *)&v31->klass->_2.bitflags1 )
            goto LABEL_54;
        }
        v81 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_54:
        v81 = sub_AAFEF8(v31, System_IDisposable_TypeInfo, 0LL);
      }
      v15 = (NetworkManager_o *)(*(__int64 (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v81)(
                                  v31,
                                  *(_QWORD *)(v81 + 8));
      if ( !v18 )
      {
        v17 = v25;
        goto LABEL_62;
      }
      v82 = v18 - 1;
      v83 = v85[v18 - 1];
      v17 = v25;
      if ( v83 == 314 )
      {
        --v18;
        v86 = v82;
        goto LABEL_62;
      }
      if ( v83 == 320 )
      {
        v86 = --v18;
      }
      else
      {
LABEL_62:
        v15 = 0LL;
        if ( (v37 & 1) != 0 )
          return (int)v15;
      }
    }
    v85[v18] = 320;
    v36 = v86;
    v37 = 0;
    v21 = 2;
LABEL_49:
    v18 = v36 + 1;
    v86 = v36 + 1;
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_IO_BinaryReader_o *v13; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x20
  NetworkManager_c *v21; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v23; // w21
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 v27; // x0

  if ( (byte_40F92B4 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, method);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&ManagerConfig_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    byte_40F92B4 = 1;
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
  v13 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v9, v10, v11, v12);
  System_IO_BinaryReader___ctor(v13, v8, 0LL);
  if ( !v13 )
    sub_B170D4();
  v20 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._22_ReadString.method)(
                                 v13,
                                 v13->klass->vtable._23_ReadChars.methodPtr);
  v21 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v21 = NetworkManager_TypeInfo;
  }
  static_fields = v21->static_fields;
  static_fields->friendCode = (struct System_String_o *)v20;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->friendCode, v20, v14, v15, v16, v17, v18, v19);
  v23 = 1;
  klass = v13->klass;
  if ( *(_WORD *)&v13->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      p_offset += 4;
      if ( v25 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v27 = sub_AAFEF8(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v27)(v13, *(_QWORD *)(v27 + 8));
  return v23;
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_IO_BinaryReader_o *v13; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x20
  NetworkManager_c *v21; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v23; // w21
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 v27; // x0

  if ( (byte_40F92AE & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, method);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&ManagerConfig_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    byte_40F92AE = 1;
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
  v13 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v9, v10, v11, v12);
  System_IO_BinaryReader___ctor(v13, v8, 0LL);
  if ( !v13 )
    sub_B170D4();
  v20 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._22_ReadString.method)(
                                 v13,
                                 v13->klass->vtable._23_ReadChars.methodPtr);
  v21 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v21 = NetworkManager_TypeInfo;
  }
  static_fields = v21->static_fields;
  static_fields->userName = (struct System_String_o *)v20;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->userName, v20, v14, v15, v16, v17, v18, v19);
  NetworkManager_TypeInfo->static_fields->genderType = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                                                         v13,
                                                         v13->klass->vtable._16_ReadUInt32.methodPtr);
  NetworkManager_TypeInfo->static_fields->month = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                                                    v13,
                                                    v13->klass->vtable._16_ReadUInt32.methodPtr);
  v23 = 1;
  NetworkManager_TypeInfo->static_fields->day = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                                                  v13,
                                                  v13->klass->vtable._16_ReadUInt32.methodPtr);
  klass = v13->klass;
  if ( *(_WORD *)&v13->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      p_offset += 4;
      if ( v25 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v27 = sub_AAFEF8(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v27)(v13, *(_QWORD *)(v27 + 8));
  return v23;
}


bool __fastcall NetworkManager__ReadServerSetting(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  __int64 v4; // x1

  if ( (byte_40F9303 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4554, method);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40F9303 = 1;
  }
  NetworkManager__SetServerSetting(
    this,
    (System_String_o *)StringLiteral_4554,
    0,
    (System_String_o *)StringLiteral_1,
    (System_String_o *)StringLiteral_1,
    (System_String_o *)StringLiteral_1,
    v2);
  return 0;
}


bool __fastcall NetworkManager__ReadSignup(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  System_String_o *SignupFileName; // x19
  System_IO_Stream_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_IO_BinaryReader_o *v12; // x19
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
  NetworkManager_c *v28; // x0

  if ( (byte_40F92AF & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, method);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&ManagerConfig_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    byte_40F92AF = 1;
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
  v28 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  SignupFileName = NetworkManager__getSignupFileName((const MethodInfo *)v28);
  if ( !System_IO_File__Exists(SignupFileName, 0LL) )
    return 0;
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SignupFileName, 0LL);
  v12 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v8, v9, v10, v11);
  System_IO_BinaryReader___ctor(v12, v7, 0LL);
  if ( !v12 )
    sub_B170D4();
  v19 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._22_ReadString.method)(
                                 v12,
                                 v12->klass->vtable._23_ReadChars.methodPtr);
  v20 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v20 = NetworkManager_TypeInfo;
  }
  static_fields = v20->static_fields;
  static_fields->userName = (struct System_String_o *)v19;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->userName, v19, v13, v14, v15, v16, v17, v18);
  NetworkManager_TypeInfo->static_fields->genderType = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
                                                         v12,
                                                         v12->klass->vtable._16_ReadUInt32.methodPtr);
  NetworkManager_TypeInfo->static_fields->month = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
                                                    v12,
                                                    v12->klass->vtable._16_ReadUInt32.methodPtr);
  v22 = 1;
  NetworkManager_TypeInfo->static_fields->day = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
                                                  v12,
                                                  v12->klass->vtable._16_ReadUInt32.methodPtr);
  klass = v12->klass;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v26 = sub_AAFEF8(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v26)(v12, *(_QWORD *)(v26 + 8));
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
  __int64 v13; // x1
  DataManager_c *v14; // x0
  __int64 v15; // x1
  DataManager_c *v16; // x0
  NetworkManager_c *v17; // x0
  int64_t Time; // x0
  const MethodInfo *v19; // x2
  System_String_o *v20; // x0
  System_Guid_o v21; // [xsp+0h] [xbp-30h] BYREF
  System_Guid_o v22; // 0:x0.16

  if ( (byte_40F9312 & 1) == 0 )
  {
    sub_B16FFC(&System_Guid_TypeInfo, isRefreshTime);
    sub_B16FFC(&ManagerConfig_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_17825, v8);
    sub_B16FFC(&StringLiteral_17809, v9);
    sub_B16FFC(&StringLiteral_16309, v10);
    sub_B16FFC(&StringLiteral_19313, v11);
    sub_B16FFC(&StringLiteral_20098, v12);
    byte_40F9312 = 1;
  }
  v21 = (System_Guid_o)0LL;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !request )
    goto LABEL_28;
  RequestBase__replaceField_30958124(
    request,
    (System_String_o *)StringLiteral_16309,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0LL);
  if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
    goto LABEL_28;
  if ( !byte_40F93BE )
  {
    sub_B16FFC(&DataManager_TypeInfo, v13);
    byte_40F93BE = 1;
  }
  v14 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v14 = DataManager_TypeInfo;
  }
  RequestBase__replaceField(request, (System_String_o *)StringLiteral_17809, v14->static_fields->dataVersion, 0LL);
  if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
LABEL_28:
    sub_B170D4();
  if ( !byte_40F93BF )
  {
    sub_B16FFC(&DataManager_TypeInfo, v15);
    byte_40F93BF = 1;
  }
  v16 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v16 = DataManager_TypeInfo;
  }
  RequestBase__replaceField_30957656(
    request,
    (System_String_o *)StringLiteral_17825,
    v16->static_fields->dateVersion,
    0LL);
  if ( isRefreshTime )
  {
    v17 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime((const MethodInfo *)v17);
    RequestBase__replaceField_30957656(request, (System_String_o *)StringLiteral_20098, Time, 0LL);
    if ( (BYTE3(System_Guid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Guid_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Guid_TypeInfo);
    v21 = System_Guid__NewGuid(0LL);
    *(_QWORD *)&v22.fields._a = &v21;
    *(_QWORD *)&v22.fields._d = 0LL;
    v20 = System_Guid__ToString(v22, v19);
    RequestBase__replaceField_30958124(request, (System_String_o *)StringLiteral_19313, v20, 0LL);
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F931C & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager__RequestApplicationUpdateCR_d__216_TypeInfo, storeName);
    byte_40F931C = 1;
  }
  v8 = sub_B170CC(NetworkManager__RequestApplicationUpdateCR_d__216_TypeInfo, storeName, id, callback, method);
  NetworkManager__RequestApplicationUpdateCR_d__216___ctor(
    (NetworkManager__RequestApplicationUpdateCR_d__216_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = storeName;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)storeName, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = id;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)id, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 48) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__RequestCR(
        NetworkManager_o *this,
        RequestBase_o *work,
        float delay,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v9; // x21
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

  if ( (byte_40F9318 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager__RequestCR_d__211_TypeInfo, work);
    byte_40F9318 = 1;
  }
  v9 = sub_B170CC(NetworkManager__RequestCR_d__211_TypeInfo, work, method, v4, v5);
  NetworkManager__RequestCR_d__211___ctor((NetworkManager__RequestCR_d__211_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 32) = work;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)work, v16, v17, v18, v19, v20, v21);
  *(float *)(v9 + 48) = delay;
  return (System_Collections_IEnumerator_o *)v9;
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
  __int64 v16; // x3
  __int64 v17; // x4
  NetworkManager_ResultCallbackFunc_o *v18; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  TopLoginRequest_o *v20; // x21
  const MethodInfo *v21; // x1

  if ( (byte_40F931D & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_EndTopLogin__, callback);
    sub_B16FFC(&Method_NetworkManager_getRequest_TopLoginRequest___, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    byte_40F931D = 1;
  }
  this->fields.loginCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.loginCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)isEnforce,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v14,
                                                 v15,
                                                 v16,
                                                 v17);
  NetworkManager_ResultCallbackFunc___ctor(v18, (Il2CppObject *)this, Method_NetworkManager_EndTopLogin__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v18,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TopLoginRequest___);
  v20 = (TopLoginRequest_o *)Request_WarBoardWallAttackRequest;
  if ( isEnforce )
  {
    if ( !Request_WarBoardWallAttackRequest )
LABEL_13:
      sub_B170D4();
  }
  else
  {
    if ( !Request_WarBoardWallAttackRequest )
      goto LABEL_13;
    if ( (((__int64 (__fastcall *)(WarBoardWallAttackRequest_o *, Il2CppMethodPointer))Request_WarBoardWallAttackRequest->klass->vtable._7_checkExpirationDate.method)(
            Request_WarBoardWallAttackRequest,
            Request_WarBoardWallAttackRequest->klass->vtable._8_isBackgroundRequest.methodPtr) & 1) != 0 )
    {
      NetworkManager__EndLogin(this, v21);
      return;
    }
  }
  TopLoginRequest__beginRequest(v20, 0LL);
}


void __fastcall NetworkManager__RequestStart(RequestBase_o *request, const MethodInfo *method)
{
  NetworkManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  NetworkManager_o *v5; // x0
  const MethodInfo *v6; // x2
  NetworkManager_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_40F9314 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, method);
    byte_40F9314 = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( NetworkManager__CheckServerLimitTime(Instance, v4) )
  {
    v5 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( v5 )
    {
      NetworkManager__AddWaitStatus(v5, request, v6);
      v7 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( v7 )
      {
        NetworkManager__CommunicationStart(v7, v8);
        return;
      }
    }
LABEL_9:
    sub_B170D4();
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

  if ( (byte_40F92C0 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, userId);
    byte_40F92C0 = 1;
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
    sub_B16F98(
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
    sub_B16F98(
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
    sub_B16F98(
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
  NetworkManager_c *v14; // x0
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

  if ( (byte_40F9311 & 1) == 0 )
  {
    sub_B16FFC(&System_Guid_TypeInfo, method);
    sub_B16FFC(&ManagerConfig_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_17825, v6);
    sub_B16FFC(&StringLiteral_17809, v7);
    sub_B16FFC(&StringLiteral_23038, v8);
    sub_B16FFC(&StringLiteral_16309, v9);
    sub_B16FFC(&StringLiteral_19313, v10);
    sub_B16FFC(&StringLiteral_16464, v11);
    sub_B16FFC(&StringLiteral_22948, v12);
    sub_B16FFC(&StringLiteral_20098, v13);
    byte_40F9311 = 1;
  }
  v23 = (System_Guid_o)0LL;
  v14 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v14 = NetworkManager_TypeInfo;
  }
  if ( v14->static_fields->userId )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14);
    if ( !request )
LABEL_35:
      sub_B170D4();
    RequestBase__addField_30957164(
      request,
      (System_String_o *)StringLiteral_22948,
      NetworkManager_TypeInfo->static_fields->userId,
      0LL);
    RequestBase__addField_30957164(
      request,
      (System_String_o *)StringLiteral_16464,
      NetworkManager_TypeInfo->static_fields->authKey,
      0LL);
  }
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !request )
    goto LABEL_35;
  RequestBase__addField_30957164(
    request,
    (System_String_o *)StringLiteral_16309,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0LL);
  if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
    goto LABEL_35;
  if ( !byte_40F93BE )
  {
    sub_B16FFC(&DataManager_TypeInfo, v15);
    byte_40F93BE = 1;
  }
  v16 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v16 = DataManager_TypeInfo;
  }
  RequestBase__addField(request, (System_String_o *)StringLiteral_17809, v16->static_fields->dataVersion, 0LL);
  if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
    goto LABEL_35;
  if ( !byte_40F93BF )
  {
    sub_B16FFC(&DataManager_TypeInfo, v17);
    byte_40F93BF = 1;
  }
  v18 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v18 = DataManager_TypeInfo;
  }
  RequestBase__addField_30956696(request, (System_String_o *)StringLiteral_17825, v18->static_fields->dateVersion, 0LL);
  v19 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime((const MethodInfo *)v19);
  RequestBase__addField_30956696(request, (System_String_o *)StringLiteral_20098, Time, 0LL);
  RequestBase__addField_30957164(
    request,
    (System_String_o *)StringLiteral_23038,
    ManagerConfig_TypeInfo->static_fields->verCode,
    0LL);
  if ( (BYTE3(System_Guid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Guid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Guid_TypeInfo);
  v23 = System_Guid__NewGuid(0LL);
  *(_QWORD *)&v24.fields._a = &v23;
  *(_QWORD *)&v24.fields._d = 0LL;
  v22 = System_Guid__ToString(v24, v21);
  RequestBase__addField_30957164(request, (System_String_o *)StringLiteral_19313, v22, 0LL);
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

  if ( (byte_40F92EC & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40F92EC = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !folderName )
    folderName = (System_String_o *)StringLiteral_1;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->dataServerFolder = folderName;
  sub_B16F98(
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

  if ( (byte_40F92EE & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F92EE = 1;
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
  sub_B16F98(
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

  if ( (byte_40F9313 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17935, method);
    sub_B16FFC(&StringLiteral_23458, v3);
    byte_40F9313 = 1;
  }
  deviceModel = (Il2CppObject *)UnityEngine_SystemInfo__get_deviceModel(0LL);
  operatingSystem = (Il2CppObject *)UnityEngine_SystemInfo__get_operatingSystem(0LL);
  v6 = System_String__Format_43739268((System_String_o *)StringLiteral_23458, deviceModel, operatingSystem, 0LL);
  if ( !request )
    sub_B170D4();
  RequestBase__addField_30957164(request, (System_String_o *)StringLiteral_17935, v6, 0LL);
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

  if ( (byte_40F92B5 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, friendCode);
    byte_40F92B5 = 1;
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
    sub_B16F98(
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

  if ( (byte_40F92ED & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, isSecurity);
    byte_40F92ED = 1;
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
  sub_B16F98(
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

  if ( (byte_40F92F2 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F92F2 = 1;
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

  if ( (byte_40F9304 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, type);
    byte_40F9304 = 1;
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&v31->webServerSettingAddress,
    (System_Int32_array **)webAddress,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  NetworkManager__SetServerSetting_23696028(this, v38);
}


void __fastcall NetworkManager__SetServerSetting_23696028(NetworkManager_o *this, const MethodInfo *method)
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

  if ( (byte_40F9305 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871, v3);
    byte_40F9305 = 1;
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
    if ( !byte_40F93BA )
    {
      sub_B16FFC(&ManagerConfig_TypeInfo, method);
      byte_40F93BA = 1;
    }
    v10 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v10 = ManagerConfig_TypeInfo;
    }
    NetworkManager_TypeInfo->static_fields->serverSecurity = v10->static_fields->ReleaseNetworkSecurity;
    if ( !byte_40F93BB )
    {
      sub_B16FFC(&ManagerConfig_TypeInfo, method);
      v10 = ManagerConfig_TypeInfo;
      byte_40F93BB = 1;
    }
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ManagerConfig_TypeInfo;
    }
    gameServerRedirectAddress = v10->static_fields->ReleaseGameServerAddress;
  }
  v11 = (System_Int32_array **)System_String__Concat_43743732(
                                 gameServerRedirectAddress,
                                 (System_String_o *)StringLiteral_871,
                                 0LL);
  p_gameServerAddress = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->gameServerAddress;
  p_gameServerAddress->klass = (BattleServantConfConponent_c *)v11;
  sub_B16F98(p_gameServerAddress, v11, v13, v14, v15, v16, v17, v18);
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
    if ( !byte_40F93BC )
    {
      sub_B16FFC(&ManagerConfig_TypeInfo, webServerRedirectAddress);
      byte_40F93BC = 1;
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
  sub_B16F98(
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

  if ( (byte_40F92BB & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F92BB = 1;
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

  if ( (byte_40F92B1 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, userName);
    byte_40F92B1 = 1;
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
    sub_B16F98(
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
void __fastcall NetworkManager__SetSignup_23672008(
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

  if ( (byte_40F92B2 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, userName);
    byte_40F92B2 = 1;
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
    sub_B16F98(
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

  if ( (byte_40F92AD & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, userAgent);
    byte_40F92AD = 1;
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
  sub_B16F98(
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

  if ( (byte_40F92EF & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F92EF = 1;
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
  sub_B16F98(
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
  System_String_o *questClearCostume; // x19

  if ( (byte_40F931E & 1) == 0 )
  {
    sub_B16FFC(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___, loginResultStr);
    sub_B16FFC(&JsonManager_TypeInfo, v4);
    sub_B16FFC(&PurchaseBehaviour_TypeInfo, v5);
    byte_40F931E = 1;
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
           (const MethodInfo_19D6740 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
    if ( v7 )
    {
      questClearCostume = (System_String_o *)v7->fields.questClearCostume;
      if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      }
      PurchaseBehaviour__SetCachedObfuscatedAccountId(questClearCostume, 0LL);
    }
  }
}


void __fastcall NetworkManager__Start(NetworkManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = NetworkManager__TimeUpdate(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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

  if ( (byte_40F92C1 & 1) == 0 )
  {
    sub_B16FFC(&AccountingManager_TypeInfo, method);
    sub_B16FFC(&AndroidUtil_TypeInfo, v2);
    sub_B16FFC(&DatFileName_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AccountingManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_871, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40F92C1 = 1;
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
               (System_String_o *)StringLiteral_1,
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
        System_IO_File__Copy_42796116(v28, v30, 1, 0LL);
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
      System_IO_File__Copy_42796116(v43, v45, 1, 0LL);
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
      Instance = (AccountingManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
      if ( !Instance )
        sub_B170D4();
      if ( AccountingManager__ReadOldPayment(Instance, 0LL) )
      {
        v53 = (AccountingManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
        if ( !v53 )
          sub_B170D4();
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
    v56 = System_String__Concat_43743732(OldUnityPersistentDataPath, (System_String_o *)StringLiteral_871, 0LL);
    if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    FileNameNotConverted = DatFileName__getFileNameNotConverted(16, 0LL);
    v58 = System_String__Concat_43743732(v56, FileNameNotConverted, 0LL);
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
    System_IO_File__Copy_42796116(v10, v12, 1, 0LL);
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
        System_IO_File__Copy_42796116(v36, v38, 1, 0LL);
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
        System_IO_File__Copy_42796116(v61, v63, 1, 0LL);
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
  AvalonSceneManager_o *v5; // x0

  if ( (byte_40F92DE & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_B16FFC(&TopHomeRequest_TypeInfo, v3);
    byte_40F92DE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__InitConnect(Instance, 0LL);
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate(0LL);
  v5 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v5 )
LABEL_9:
    sub_B170D4();
  AvalonSceneManager__transitionSceneRefresh(v5, 34, 1, 0LL, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__TimeUpdate(
        NetworkManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  NetworkManager__TimeUpdate_d__81_o *v5; // x19

  if ( (byte_40F92AA & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager__TimeUpdate_d__81_TypeInfo, method);
    byte_40F92AA = 1;
  }
  v5 = (NetworkManager__TimeUpdate_d__81_o *)sub_B170CC(NetworkManager__TimeUpdate_d__81_TypeInfo, method, v2, v3, v4);
  NetworkManager__TimeUpdate_d__81___ctor(v5, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v5;
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
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_o *v23; // x20
  CommonUI_o *Instance; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  ErrorDialog_ClickDelegate_o *v29; // x24
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]

  if ( (byte_40F92D5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, errorTitle);
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, v14);
    sub_B16FFC(&Method_NetworkManager_EndErrorDialog__, v15);
    sub_B16FFC(&Method_NetworkManager_EndErrorWebView__, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B16FFC(&WebViewManager_TypeInfo, v18);
    byte_40F92D5 = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_B16F98(
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
    v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0LL);
    if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WebViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    }
    WebViewManager__OpenView(errorTitle, errorUrl, v23, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v29 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v25, v26, v27, v28);
    ErrorDialog_ClickDelegate___ctor(v29, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0LL);
    if ( !Instance )
      sub_B170D4();
    effectDistance.fields.value = 0LL;
    *(_DWORD *)&effectDistance.fields.has_value = 0;
    CommonUI__OpenWarningDialog(Instance, errorTitle, errorDetail, v29, errorType != 1, 0, -1.0, 1, effectDistance, 0LL);
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

  if ( (byte_40F92C3 & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    byte_40F92C3 = 1;
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
  __int64 v22; // x3
  __int64 v23; // x4
  System_IO_BinaryWriter_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v29; // x24
  NetworkManager_c *v30; // x0
  System_String_o *v31; // x24
  System_String_o *v32; // x24
  int v33; // w28
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 v37; // x0
  System_String_o *v38; // x21
  NetworkManager_c *v39; // x0
  _DWORD v41[3]; // [xsp+10h] [xbp-70h]
  int v42; // [xsp+1Ch] [xbp-64h]
  int v43; // [xsp+28h] [xbp-58h]

  if ( (byte_40F92C4 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, fname);
    sub_B16FFC(&CatAndMouseGame_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, v8);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&JsonManager_TypeInfo, v10);
    sub_B16FFC(&ManagerConfig_TypeInfo, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_22909, v13);
    sub_B16FFC(&StringLiteral_12539, v14);
    sub_B16FFC(&StringLiteral_16464, v15);
    sub_B16FFC(&StringLiteral_21854, v16);
    sub_B16FFC(&StringLiteral_22948, v17);
    sub_B16FFC(&StringLiteral_1, v18);
    byte_40F92C4 = 1;
  }
  v43 = 0;
  v42 = 0;
  v19 = (System_IO_Stream_o *)System_IO_File__OpenWrite(fname, 0LL);
  v24 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v20, v21, v22, v23);
  System_IO_BinaryWriter___ctor_39195976(v24, v19, 0LL);
  v29 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                        v25,
                                                                                        v26,
                                                                                        v27,
                                                                                        v28);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v29,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !v29 )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v29,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_12539,
    (System_Xml_Schema_XmlSchemaObject_o *)ManagerConfig_TypeInfo->static_fields->SaveDataVer,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v30 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v30 = NetworkManager_TypeInfo;
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v29,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22909,
    (System_Xml_Schema_XmlSchemaObject_o *)v30->static_fields->gameServerAddress,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v29,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22948,
    (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->userId,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v29,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16464,
    (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->authKey,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v29,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21854,
    (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->secretKey,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v31 = JsonManager__toJson((Il2CppObject *)v29, 0, 0, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v32 = CatAndMouseGame__CatGame1(v31, 0, 0LL);
  if ( !v24 )
    sub_B170D4();
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v24->klass->vtable._22_Write.method)(
    v24,
    v32,
    v24->klass[1]._1.image);
  v41[0] = 150;
  v33 = ++v42;
  klass = v24->klass;
  if ( *(_WORD *)&v24->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      p_offset += 4;
      if ( v35 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v37 = sub_AAFEF8(v24, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v37)(v24, *(_QWORD *)(v37 + 8));
  if ( v33 && v41[v33 - 1] == 150 )
    v42 = v33 - 1;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  v38 = EncryptedPlayerPrefs__Md5(v32, 0LL);
  v39 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v39 = NetworkManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v39->static_fields->AUTHMD5_KEY_TYPE, v38, 0LL);
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_IO_BinaryWriter_o *v13; // x19
  long double v14; // q0
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 v18; // x0

  if ( (byte_40F92B6 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, method);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&ManagerConfig_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    byte_40F92B6 = 1;
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
      v13 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v9, v10, v11, v12);
      System_IO_BinaryWriter___ctor_39195976(v13, v8, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        *(__n128 *)&v14 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !v13 )
        sub_B170D4();
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v13->klass->vtable._22_Write.method)(
        v13,
        NetworkManager_TypeInfo->static_fields->friendCode,
        v13->klass[1]._1.image,
        v14);
      klass = v13->klass;
      if ( *(_WORD *)&v13->klass->_2.bitflags1 )
      {
        v16 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v16;
          p_offset += 4;
          if ( v16 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
            goto LABEL_23;
        }
        v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_23:
        v18 = sub_AAFEF8(v13, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v18)(v13, *(_QWORD *)(v18 + 8));
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_IO_BinaryWriter_o *v13; // x19
  long double v14; // q0
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 v18; // x0

  if ( (byte_40F92B3 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, method);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&ManagerConfig_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    byte_40F92B3 = 1;
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
      v13 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v9, v10, v11, v12);
      System_IO_BinaryWriter___ctor_39195976(v13, v8, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        *(__n128 *)&v14 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !v13 )
        sub_B170D4();
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v13->klass->vtable._22_Write.method)(
        v13,
        NetworkManager_TypeInfo->static_fields->userName,
        v13->klass[1]._1.image,
        v14);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        (unsigned int)NetworkManager_TypeInfo->static_fields->genderType,
        v13->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        (unsigned int)NetworkManager_TypeInfo->static_fields->month,
        v13->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        (unsigned int)NetworkManager_TypeInfo->static_fields->day,
        v13->klass->vtable._18_Write.methodPtr);
      klass = v13->klass;
      if ( *(_WORD *)&v13->klass->_2.bitflags1 )
      {
        v16 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v16;
          p_offset += 4;
          if ( v16 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
            goto LABEL_23;
        }
        v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_23:
        v18 = sub_AAFEF8(v13, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v18)(v13, *(_QWORD *)(v18 + 8));
    }
  }
}


void __fastcall NetworkManager___RequestCR_b__211_0(NetworkManager_o *this, const MethodInfo *method)
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

  if ( (byte_40F92E3 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, method);
    sub_B16FFC(&DatFileName_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_871, v4);
    byte_40F92E3 = 1;
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
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871, FileName, 0LL);
}


System_String_o *__fastcall NetworkManager__getBaseMockUrl(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_40F92FB & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92FB = 1;
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

  if ( (byte_40F92FA & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_19164, v2);
    byte_40F92FA = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_43743732(
           (System_String_o *)StringLiteral_19164,
           v3->static_fields->gameServerAddress,
           0LL);
}


System_String_o *__fastcall NetworkManager__getDataUrl(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_40F92FC & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92FC = 1;
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

  if ( (byte_40F92C9 & 1) == 0 )
  {
    sub_B16FFC(&System_DateTime_TypeInfo, v1);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    byte_40F92C9 = 1;
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


System_DateTime_o __fastcall NetworkManager__getDateTime_23685272(int64_t t, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_40F92CA & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F92CA = 1;
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

  if ( (byte_40F92E7 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871, v3);
    byte_40F92E7 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(20, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871, FileName, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getLocalDateTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  NetworkManager_c *v3; // x8
  uint64_t dateData; // [xsp+8h] [xbp-8h] BYREF
  System_DateTime_o v6; // 0:x0.8

  if ( (byte_40F92CB & 1) == 0 )
  {
    sub_B16FFC(&System_DateTime_TypeInfo, v1);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    byte_40F92CB = 1;
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


System_DateTime_o __fastcall NetworkManager__getLocalDateTime_23685416(int64_t t, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_40F92CC & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F92CC = 1;
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

  if ( (byte_40F92C7 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92C7 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v5.fields.dateData = NetworkManager__getLocalDateTime((const MethodInfo *)v2).fields.dateData;
  return NetworkManager__getTime_23684488(v5, v3);
}


System_String_o *__fastcall NetworkManager__getMockFile(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  UnityEngine_Object_o *v6; // x0
  __int64 v7; // x10
  UnityEngine_Object_o *v8; // x19
  System_String_o *text; // x20

  if ( (byte_40F92FF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&UnityEngine_TextAsset_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9124, v4);
    byte_40F92FF = 1;
  }
  if ( !path )
    return 0LL;
  v5 = System_String__Concat_43743732((System_String_o *)StringLiteral_9124, path, 0LL);
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
  if ( !UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
    return 0LL;
  if ( !v8 )
    sub_B170D4();
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

  if ( (byte_40F92D2 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92D2 = 1;
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

  if ( (byte_40F92D0 & 1) == 0 )
  {
    sub_B16FFC(&System_DateTime_TypeInfo, v1);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    byte_40F92D0 = 1;
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
  System_DateTime___ctor_15185440(v14, Year, Month, v6, 0, 0, 0, 1, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v15.fields.dateData = dateTime.fields.dateData;
  return NetworkManager__getTime_23684488(v15, v7);
}


int64_t __fastcall NetworkManager__getNextDayTime_23686252(int32_t hour, const MethodInfo *method)
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

  if ( (byte_40F92D1 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F92D1 = 1;
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

  if ( (byte_40F92D3 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92D3 = 1;
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
  System_DateTime___ctor_15185440(v13, v6, v5, 1, 0, 0, 0, 1, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v14.fields.dateData = dateTime.fields.dateData;
  return NetworkManager__getTime_23684488(v14, v7);
}


int64_t __fastcall NetworkManager__getNextMonthTime_23686888(int32_t day, const MethodInfo *method)
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

  if ( (byte_40F92D4 & 1) == 0 )
  {
    sub_B16FFC(&System_DateTime_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40F92D4 = 1;
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
  System_DateTime___ctor_15185440(v13, Year, Month, day, 0, 0, 0, 1, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v14.fields.dateData = dateTime.fields.dateData;
  return NetworkManager__getTime_23684488(v14, v6);
}


System_String_o *__fastcall NetworkManager__getOldAuthFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_40F92E2 & 1) == 0 )
  {
    sub_B16FFC(&DatFileName_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_871, v2);
    byte_40F92E2 = 1;
  }
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(16, 0LL);
  return System_String__Concat_43746016(temporaryCachePath, (System_String_o *)StringLiteral_871, FileName, 0LL);
}


System_String_o *__fastcall NetworkManager__getOldSignupFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_40F92E4 & 1) == 0 )
  {
    sub_B16FFC(&DatFileName_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_871, v2);
    byte_40F92E4 = 1;
  }
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0LL);
  return System_String__Concat_43746016(temporaryCachePath, (System_String_o *)StringLiteral_871, FileName, 0LL);
}


WarBoardWallAttackRequest_o *__fastcall NetworkManager__getRequest_WarBoardWallAttackRequest_(
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo_19DD960 *method)
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

  if ( (byte_40FB062 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, method);
    byte_40FB062 = 1;
  }
  v4 = ((__int64 (*)(void))method->rgctx_data->_0_System_Activator_CreateInstance_T_->methodPointer)();
  if ( !v4 )
    sub_B170D4();
  v5 = (WarBoardWallAttackRequest_o *)v4;
  v6 = (BattleServantConfConponent_o *)(v4 + 16);
  v7 = System_Delegate__Combine(*(System_Delegate_o **)(v4 + 16), (System_Delegate_o *)func, 0LL);
  if ( !v7 )
    goto LABEL_7;
  v14 = v7;
  v15 = (System_Int32_array **)sub_B170BC(v7, NetworkManager_ResultCallbackFunc_TypeInfo);
  if ( !v15 )
  {
    sub_B173C8(v14);
LABEL_7:
    v15 = 0LL;
  }
  v5->fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)v15;
  sub_B16F98(v6, v15, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_40F92CD & 1) == 0 )
  {
    sub_B16FFC(&System_DateTime_TypeInfo, v1);
    sub_B16FFC(&NetworkManager_TypeInfo, v2);
    byte_40F92CD = 1;
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
  System_TimeSpan___ctor_41331124(v9, 9, 0, 0, 0LL);
  v12.fields._ticks = value.fields._ticks;
  v10.fields.dateData = (uint64_t)&dateData;
  return System_DateTime__Add(v10, v12, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getServerDateTime_23685560(int64_t t, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  System_TimeSpan_o value; // [xsp+0h] [xbp-20h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v7; // 0:x0.8
  System_TimeSpan_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8
  System_TimeSpan_o v11; // 0:x1.8

  if ( (byte_40F92CE & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F92CE = 1;
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
  System_TimeSpan___ctor_41331124(v8, 9, 0, 0, 0LL);
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

  if ( (byte_40F92E6 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871, v3);
    byte_40F92E6 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(19, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871, FileName, 0LL);
}


int64_t __fastcall NetworkManager__getServerTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  const MethodInfo *v3; // x1
  System_DateTime_o v5; // 0:x0.8

  if ( (byte_40F92C8 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92C8 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v5.fields.dateData = NetworkManager__getServerDateTime((const MethodInfo *)v2).fields.dateData;
  return NetworkManager__getTime_23684488(v5, v3);
}


System_String_o *__fastcall NetworkManager__getSignupFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_40F92E5 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871, v3);
    byte_40F92E5 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871, FileName, 0LL);
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

  if ( (byte_40F92FE & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, id);
    byte_40F92FE = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  v9 = (UnityEngine_MonoBehaviour_o *)Instance;
  updated = NetworkManager__RequestApplicationUpdateCR(Instance, storeName, id, callback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316(v9, updated, 0LL);
}


System_String_o *__fastcall NetworkManager__getSummonDetailUrl(int32_t gachaId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  System_Object_array *v10; // x20
  System_String_o *BaseUrl; // x0
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x21
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x0
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x21
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x19
  int32_t v44; // [xsp+Ch] [xbp-24h] BYREF
  int64_t UserId; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40F930B & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&long_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&object___TypeInfo, v6);
    sub_B16FFC(&StringLiteral_456, v7);
    sub_B16FFC(&StringLiteral_23171, v8);
    byte_40F930B = 1;
  }
  v10 = (System_Object_array *)sub_B17014(object___TypeInfo, 5LL, v2);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(0, v9);
  if ( !v10 )
    sub_B170D4();
  v19 = (System_Int32_array **)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_B170BC(BaseUrl, v10->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_28;
  }
  if ( !v10->max_length )
    goto LABEL_27;
  v10->m_Items[0] = (Il2CppObject *)v19;
  sub_B16F98((BattleServantConfConponent_o *)v10->m_Items, v19, v13, v14, v15, v16, v17, v18);
  BaseUrl = (System_String_o *)StringLiteral_23171;
  if ( StringLiteral_23171 )
  {
    BaseUrl = (System_String_o *)sub_B170BC(StringLiteral_23171, v10->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_28;
    v12 = (System_Int32_array **)StringLiteral_23171;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v10->max_length <= 1 )
    goto LABEL_27;
  v10->m_Items[1] = (Il2CppObject *)v12;
  sub_B16F98((BattleServantConfConponent_o *)&v10->m_Items[1], v12, v13, v20, v21, v22, v23, v24);
  UserId = NetworkManager__get_UserId(v25);
  BaseUrl = (System_String_o *)j_il2cpp_value_box_0(long_TypeInfo, &UserId);
  v31 = (System_Int32_array **)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_B170BC(BaseUrl, v10->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_28;
  }
  if ( v10->max_length <= 2 )
    goto LABEL_27;
  v10->m_Items[2] = (Il2CppObject *)v31;
  sub_B16F98((BattleServantConfConponent_o *)&v10->m_Items[2], v31, v13, v26, v27, v28, v29, v30);
  BaseUrl = (System_String_o *)StringLiteral_456;
  if ( StringLiteral_456 )
  {
    BaseUrl = (System_String_o *)sub_B170BC(StringLiteral_456, v10->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_28;
    v12 = (System_Int32_array **)StringLiteral_456;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v10->max_length <= 3 )
    goto LABEL_27;
  v10->m_Items[3] = (Il2CppObject *)v12;
  sub_B16F98((BattleServantConfConponent_o *)&v10->m_Items[3], v12, v13, v32, v33, v34, v35, v36);
  v44 = gachaId;
  BaseUrl = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
  v42 = (System_Int32_array **)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_B170BC(BaseUrl, v10->obj.klass->_1.element_class);
    if ( !BaseUrl )
    {
LABEL_28:
      sub_B170F4(BaseUrl);
      sub_B170A0();
    }
  }
  if ( v10->max_length <= 4 )
  {
LABEL_27:
    sub_B17100(BaseUrl, v12, v13);
    sub_B170A0();
  }
  v10->m_Items[4] = (Il2CppObject *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v10->m_Items[4], v42, v13, v37, v38, v39, v40, v41);
  return System_String__Concat_43753516(v10, 0LL);
}


int64_t __fastcall NetworkManager__getTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x8
  const MethodInfo *v3; // x1
  int64_t Time_23684488; // x0
  System_DateTime_o v6; // 0:x0.8

  if ( (byte_40F92C5 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92C5 = 1;
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
    Time_23684488 = NetworkManager__getTime_23684488(v6, v3);
    v2 = NetworkManager_TypeInfo;
    NetworkManager_TypeInfo->static_fields->nowTime = Time_23684488;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->nowTime;
}


int64_t __fastcall NetworkManager__getTime_23684488(System_DateTime_o dateTime, const MethodInfo *method)
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
  if ( (byte_40F92C6 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F92C6 = 1;
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

  if ( (byte_40F92CF & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92CF = 1;
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
  __int64 *v26; // x8
  NetworkManager_c *v27; // x0
  System_String_o *v28; // x21
  System_String_o **v29; // x9
  System_String_o *v30; // x0
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

  if ( (byte_40F92FD & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, isSecurity);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_20099, v8);
    sub_B16FFC(&StringLiteral_465, v9);
    sub_B16FFC(&StringLiteral_19127, v10);
    sub_B16FFC(&StringLiteral_950, v11);
    sub_B16FFC(&StringLiteral_1520, v12);
    sub_B16FFC(&StringLiteral_1528, v13);
    sub_B16FFC(&StringLiteral_19163, v14);
    sub_B16FFC(&StringLiteral_459, v15);
    sub_B16FFC(&StringLiteral_18653, v16);
    sub_B16FFC(&StringLiteral_19164, v17);
    sub_B16FFC(&StringLiteral_1, v18);
    sub_B16FFC(&StringLiteral_1531, v19);
    sub_B16FFC(&StringLiteral_19126, v20);
    byte_40F92FD = 1;
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
    v31 = &StringLiteral_19164;
    v32 = NetworkManager_TypeInfo;
    if ( !v25 )
      v31 = &StringLiteral_19127;
    v33 = (System_String_o *)*v31;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v32 = NetworkManager_TypeInfo;
    }
    v34 = (System_String_o **)&StringLiteral_950;
    if ( !isWebView )
      v34 = (System_String_o **)&StringLiteral_1;
    v30 = System_String__Concat_43746016(v33, v32->static_fields->webServerAddress, *v34, 0LL);
    goto LABEL_38;
  }
  v25 = 0;
  if ( !path )
    goto LABEL_30;
LABEL_18:
  if ( System_String__StartsWith(path, (System_String_o *)StringLiteral_18653, 0LL)
    || System_String__StartsWith(path, (System_String_o *)StringLiteral_19126, 0LL)
    || System_String__StartsWith(path, (System_String_o *)StringLiteral_19163, 0LL) )
  {
    goto LABEL_39;
  }
  v26 = &StringLiteral_19164;
  v27 = NetworkManager_TypeInfo;
  if ( !v25 )
    v26 = &StringLiteral_19127;
  v28 = (System_String_o *)*v26;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v27 = NetworkManager_TypeInfo;
  }
  v29 = (System_String_o **)&StringLiteral_950;
  if ( !isWebView )
    v29 = (System_String_o **)&StringLiteral_1;
  v30 = System_String__Concat_43747144(v28, v27->static_fields->webServerAddress, *v29, path, 0LL);
LABEL_38:
  path = v30;
LABEL_39:
  if ( isWebView )
  {
    if ( !path )
      sub_B170D4();
    if ( System_String__StartsWith(path, (System_String_o *)StringLiteral_19126, 0LL)
      || System_String__StartsWith(path, (System_String_o *)StringLiteral_19163, 0LL) )
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
      v38 = System_String__IndexOf_43816080(path, static_fields->webServerAddress, 0LL);
      v39 = System_String__IndexOf_43816080(path, (System_String_o *)StringLiteral_1520, 0LL);
      if ( (v38 & 0x80000000) == 0 )
      {
        v40 = System_Int64__ToString((int64_t)&v46, 0LL);
        if ( (v39 & 0x80000000) != 0 )
          v41 = &StringLiteral_1531;
        else
          v41 = &StringLiteral_465;
        v44 = (System_String_o *)*v41;
        return System_String__Concat_43746016(path, v44, v40, 0LL);
      }
      if ( (v39 & 0x80000000) != 0 )
      {
        v42 = System_Int64__ToString((int64_t)&v47, 0LL);
        v43 = &StringLiteral_1528;
        goto LABEL_55;
      }
      if ( (~(System_String__IndexOf_43816080(path, (System_String_o *)StringLiteral_20099, 0LL) >> 31) & 0x1F) == 0 )
      {
        v42 = System_Int64__ToString((int64_t)&v47, 0LL);
        v43 = &StringLiteral_459;
LABEL_55:
        v44 = (System_String_o *)*v43;
        v40 = v42;
        return System_String__Concat_43746016(path, v44, v40, 0LL);
      }
    }
  }
  return path;
}


System_String_o *__fastcall NetworkManager__getWebViewAddress(System_String_o *path, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_40F9308 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F9308 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_43743732(v3->static_fields->webViewBaseURL, path, 0LL);
}


System_String_o *__fastcall NetworkManager__getWebViewAddress_23699452(int32_t addressType, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v29; // x0

  if ( (byte_40F930A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_21742, v6);
    sub_B16FFC(&StringLiteral_22342, v7);
    sub_B16FFC(&StringLiteral_17793, v8);
    sub_B16FFC(&StringLiteral_22549, v9);
    sub_B16FFC(&StringLiteral_16828, v10);
    sub_B16FFC(&StringLiteral_20974, v11);
    sub_B16FFC(&StringLiteral_17693, v12);
    sub_B16FFC(&StringLiteral_19055, v13);
    sub_B16FFC(&StringLiteral_22112, v14);
    sub_B16FFC(&StringLiteral_17596, v15);
    sub_B16FFC(&StringLiteral_22485, v16);
    sub_B16FFC(&StringLiteral_17890, v17);
    sub_B16FFC(&StringLiteral_1, v18);
    sub_B16FFC(&StringLiteral_23104, v19);
    sub_B16FFC(&StringLiteral_21441, v20);
    byte_40F930A = 1;
  }
  v21 = &StringLiteral_19055;
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
        v21 = &StringLiteral_20974;
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
                  (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
            return (System_String_o *)StringLiteral_1;
          v28 = NetworkManager_TypeInfo;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v28 = NetworkManager_TypeInfo;
          }
          v29 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v28->static_fields->webViewAddress;
          if ( v29 )
            return (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                        v29,
                                        (System_Type_o *)v25,
                                        (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        }
        sub_B170D4();
      }
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      return static_fields->IOS_ExaminationNewsUrl;
    case 1:
      v21 = &StringLiteral_22342;
      goto LABEL_25;
    case 2:
      goto LABEL_25;
    case 3:
      v21 = &StringLiteral_17596;
      goto LABEL_25;
    case 4:
      v21 = &StringLiteral_22549;
      goto LABEL_25;
    case 5:
      v21 = &StringLiteral_17693;
      goto LABEL_25;
    case 6:
      v21 = &StringLiteral_21742;
      goto LABEL_25;
    case 7:
      v21 = &StringLiteral_22485;
      goto LABEL_25;
    case 8:
      v21 = &StringLiteral_22112;
      goto LABEL_25;
    case 9:
      v21 = &StringLiteral_16828;
      goto LABEL_25;
    case 10:
      v21 = &StringLiteral_17793;
      goto LABEL_25;
    case 11:
      v21 = &StringLiteral_21441;
      goto LABEL_25;
    case 12:
      v21 = &StringLiteral_17890;
      goto LABEL_25;
    case 13:
      v21 = &StringLiteral_23104;
      goto LABEL_25;
    default:
      return (System_String_o *)StringLiteral_1;
  }
}


System_String_o *__fastcall NetworkManager__getWebViewFullAddress(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_40F9309 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_19163, v3);
    sub_B16FFC(&StringLiteral_19126, v4);
    byte_40F9309 = 1;
  }
  if ( !path )
    sub_B170D4();
  if ( System_String__StartsWith(path, (System_String_o *)StringLiteral_19126, 0LL)
    || System_String__StartsWith(path, (System_String_o *)StringLiteral_19163, 0LL) )
  {
    return path;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getWebViewAddress(path, v5);
}


System_String_o *__fastcall NetworkManager__get_ErrorDialogResponseData(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_40F930F & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F930F = 1;
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

  if ( (byte_40F92A6 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92A6 = 1;
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

  if ( (byte_40F92A4 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92A4 = 1;
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

  if ( (byte_40F92A0 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92A0 = 1;
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

  if ( (byte_40F92A3 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92A3 = 1;
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

  if ( (byte_40F92A5 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40F92A5 = 1;
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

  if ( (byte_40F9310 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F9310 = 1;
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
  sub_B16F98(
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
  System_String_o *v25; // x0
  ManagerConfig_c *v26; // x0
  struct ManagerConfig_StaticFields *v27; // x8
  System_String_o *v28; // x19
  ManagerConfig_c *v29; // x0
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x19
  NetworkManager_c *v38; // x8
  System_Int32_array **dataServerRedirectAddress; // x20
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **ReleaseDataServerAddress; // x20
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x20
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **dataServerFolder; // x20
  System_Int32_array **PlatformName; // x20
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  NetworkManager_c *v86; // x8
  NetworkManager_c *v87; // x0
  struct NetworkManager_StaticFields *v88; // x8

  if ( (byte_40F9306 & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, *(_QWORD *)&addressType);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&string___TypeInfo, v5);
    sub_B16FFC(&StringLiteral_885, v6);
    sub_B16FFC(&StringLiteral_871, v7);
    sub_B16FFC(&StringLiteral_19954, v8);
    byte_40F9306 = 1;
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
      v17 = (System_Int32_array **)System_String__Concat_43747144(
                                     streamingAssetsPath,
                                     (System_String_o *)StringLiteral_885,
                                     v10->static_fields->PlatformName,
                                     (System_String_o *)StringLiteral_871,
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
      sub_B16F98(p_dataServerAddress, v17, v11, v12, v13, v14, v15, v16);
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
      v25 = System_String__Concat_43743732((System_String_o *)StringLiteral_19954, v23->FILE_URL_SCHEME, 0LL);
      if ( !v24 )
LABEL_89:
        sub_B170D4();
      if ( System_String__StartsWith(v24, v25, 0LL) )
        return;
      v87 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v87 = NetworkManager_TypeInfo;
      }
      v79 = (System_Int32_array **)System_String__Concat_43743732(
                                     v87->static_fields->FILE_URL_SCHEME,
                                     v87->static_fields->dataServerAddress,
                                     0LL);
      goto LABEL_85;
    case 1:
      v37 = sub_B17014(string___TypeInfo, 5LL, method);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !byte_40F93BD )
      {
        sub_B16FFC(&ManagerConfig_TypeInfo, v30);
        byte_40F93BD = 1;
      }
      v29 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v29 = ManagerConfig_TypeInfo;
      }
      if ( !v37 )
        goto LABEL_89;
      ReleaseDataServerAddress = (System_Int32_array **)v29->static_fields->ReleaseDataServerAddress;
      if ( ReleaseDataServerAddress )
      {
        v29 = (ManagerConfig_c *)sub_B170BC(ReleaseDataServerAddress, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
        if ( !v29 )
          goto LABEL_88;
      }
      if ( !*(_DWORD *)(v37 + 24) )
        goto LABEL_87;
      *(_QWORD *)(v37 + 32) = ReleaseDataServerAddress;
      sub_B16F98((BattleServantConfConponent_o *)(v37 + 32), ReleaseDataServerAddress, v31, v45, v46, v47, v48, v49);
      v29 = (ManagerConfig_c *)StringLiteral_871;
      if ( StringLiteral_871 )
      {
        v29 = (ManagerConfig_c *)sub_B170BC(StringLiteral_871, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
        if ( !v29 )
          goto LABEL_88;
        v30 = (System_Int32_array **)StringLiteral_871;
      }
      else
      {
        v30 = 0LL;
      }
      if ( *(_DWORD *)(v37 + 24) <= 1u )
        goto LABEL_87;
      *(_QWORD *)(v37 + 40) = v30;
      sub_B16F98((BattleServantConfConponent_o *)(v37 + 40), v30, v31, v51, v52, v53, v54, v55);
      dataServerFolder = (System_Int32_array **)NetworkManager_TypeInfo->static_fields->dataServerFolder;
      if ( dataServerFolder )
      {
        v29 = (ManagerConfig_c *)sub_B170BC(dataServerFolder, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
        if ( !v29 )
          goto LABEL_88;
      }
      if ( *(_DWORD *)(v37 + 24) <= 2u )
        goto LABEL_87;
      *(_QWORD *)(v37 + 48) = dataServerFolder;
      sub_B16F98((BattleServantConfConponent_o *)(v37 + 48), dataServerFolder, v31, v67, v68, v69, v70, v71);
      v29 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
LABEL_67:
        j_il2cpp_runtime_class_init_0(v29);
        v29 = ManagerConfig_TypeInfo;
      }
LABEL_68:
      PlatformName = (System_Int32_array **)v29->static_fields->PlatformName;
      if ( PlatformName )
      {
        v29 = (ManagerConfig_c *)sub_B170BC(PlatformName, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
        if ( !v29 )
          goto LABEL_88;
      }
      if ( *(_DWORD *)(v37 + 24) <= 3u )
        goto LABEL_87;
      *(_QWORD *)(v37 + 56) = PlatformName;
      sub_B16F98((BattleServantConfConponent_o *)(v37 + 56), PlatformName, v31, v62, v63, v64, v65, v66);
      v29 = (ManagerConfig_c *)StringLiteral_871;
      if ( StringLiteral_871 )
      {
        v29 = (ManagerConfig_c *)sub_B170BC(StringLiteral_871, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
        if ( v29 )
        {
          v30 = (System_Int32_array **)StringLiteral_871;
          goto LABEL_75;
        }
LABEL_88:
        sub_B170F4(v29);
        sub_B170A0();
      }
      v30 = 0LL;
LABEL_75:
      if ( *(_DWORD *)(v37 + 24) <= 4u )
      {
LABEL_87:
        sub_B17100(v29, v30, v31);
        sub_B170A0();
      }
      *(_QWORD *)(v37 + 64) = v30;
      sub_B16F98((BattleServantConfConponent_o *)(v37 + 64), v30, v31, v74, v75, v76, v77, v78);
      v79 = (System_Int32_array **)System_String__Concat_43823856((System_String_array *)v37, 0LL);
      v86 = NetworkManager_TypeInfo;
LABEL_86:
      v88 = v86->static_fields;
      v88->dataServerAddress = (struct System_String_o *)v79;
      sub_B16F98((BattleServantConfConponent_o *)&v88->dataServerAddress, v79, v80, v81, v82, v83, v84, v85);
      return;
    case 2:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !byte_40F93BD )
      {
        sub_B16FFC(&ManagerConfig_TypeInfo, *(_QWORD *)&addressType);
        byte_40F93BD = 1;
      }
      v26 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
        v27 = ManagerConfig_TypeInfo->static_fields;
        v28 = v27->ReleaseDataServerAddress;
        goto LABEL_84;
      }
      if ( ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        v27 = ManagerConfig_TypeInfo->static_fields;
        v28 = v27->ReleaseDataServerAddress;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v26 = ManagerConfig_TypeInfo;
        v27 = ManagerConfig_TypeInfo->static_fields;
        v28 = v27->ReleaseDataServerAddress;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_84;
      }
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v27 = ManagerConfig_TypeInfo->static_fields;
      }
LABEL_84:
      v79 = (System_Int32_array **)System_String__Concat_43747144(
                                     v28,
                                     (System_String_o *)StringLiteral_871,
                                     v27->PlatformName,
                                     (System_String_o *)StringLiteral_871,
                                     0LL);
LABEL_85:
      v86 = NetworkManager_TypeInfo;
      goto LABEL_86;
    case 3:
      v29 = (ManagerConfig_c *)sub_B17014(string___TypeInfo, 5LL, method);
      v37 = (__int64)v29;
      v38 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v38 = NetworkManager_TypeInfo;
      }
      if ( !v37 )
        goto LABEL_89;
      dataServerRedirectAddress = (System_Int32_array **)v38->static_fields->dataServerRedirectAddress;
      if ( dataServerRedirectAddress )
      {
        v29 = (ManagerConfig_c *)sub_B170BC(dataServerRedirectAddress, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
        if ( !v29 )
          goto LABEL_88;
      }
      if ( !*(_DWORD *)(v37 + 24) )
        goto LABEL_87;
      *(_QWORD *)(v37 + 32) = dataServerRedirectAddress;
      sub_B16F98((BattleServantConfConponent_o *)(v37 + 32), dataServerRedirectAddress, v31, v32, v33, v34, v35, v36);
      v29 = (ManagerConfig_c *)StringLiteral_871;
      if ( StringLiteral_871 )
      {
        v29 = (ManagerConfig_c *)sub_B170BC(StringLiteral_871, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
        if ( !v29 )
          goto LABEL_88;
        v30 = (System_Int32_array **)StringLiteral_871;
      }
      else
      {
        v30 = 0LL;
      }
      if ( *(_DWORD *)(v37 + 24) <= 1u )
        goto LABEL_87;
      *(_QWORD *)(v37 + 40) = v30;
      sub_B16F98((BattleServantConfConponent_o *)(v37 + 40), v30, v31, v40, v41, v42, v43, v44);
      v61 = (System_Int32_array **)NetworkManager_TypeInfo->static_fields->dataServerFolder;
      if ( v61 )
      {
        v29 = (ManagerConfig_c *)sub_B170BC(v61, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
        if ( !v29 )
          goto LABEL_88;
      }
      if ( *(_DWORD *)(v37 + 24) <= 2u )
        goto LABEL_87;
      *(_QWORD *)(v37 + 48) = v61;
      sub_B16F98((BattleServantConfConponent_o *)(v37 + 48), v61, v31, v56, v57, v58, v59, v60);
      v29 = ManagerConfig_TypeInfo;
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
  struct System_Collections_Generic_Dictionary_string__string__o *webViewAddress; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
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

  if ( (byte_40F9307 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__Add__, contactURL);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__, v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__,
      v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_17596, v17);
    sub_B16FFC(&StringLiteral_17890, v18);
    sub_B16FFC(&StringLiteral_1, v19);
    sub_B16FFC(&StringLiteral_21441, v20);
    byte_40F9307 = 1;
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
  sub_B16F98(
    p_webViewBaseURL,
    (System_Int32_array **)baseURL,
    (System_String_array **)filePassInfo,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  webViewAddress = NetworkManager_TypeInfo->static_fields->webViewAddress;
  if ( !webViewAddress
    || (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)webViewAddress,
          (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        !filePassInfo)
    || (Keys = System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
                 (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)filePassInfo,
                 (const MethodInfo_2DA3824 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
    &v34,
    Keys,
    (const MethodInfo_22C7174 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
            &v35,
            (const MethodInfo_26BE3A8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__) )
  {
    currentKey = v35.fields.currentKey;
    if ( !v35.fields.currentKey )
      sub_B170D4();
    if ( System_String__Equals_43731072(
           (System_String_o *)v35.fields.currentKey,
           (System_String_o *)StringLiteral_17596,
           0LL)
      || System_String__Equals_43731072((System_String_o *)currentKey, (System_String_o *)StringLiteral_21441, 0LL)
      || System_String__Equals_43731072((System_String_o *)currentKey, (System_String_o *)StringLiteral_17890, 0LL) )
    {
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)filePassInfo,
               (System_Type_o *)currentKey,
               (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        sub_B170D4();
      v27 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
    }
    else
    {
      v31 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)filePassInfo,
              (System_Type_o *)currentKey,
              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v31 )
        sub_B170D4();
      v32 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v31->klass->vtable[3].method)(
                                 v31,
                                 v31->klass->vtable[4].methodPtr);
      v27 = System_String__Concat_43743732(baseURL, v32, 0LL);
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
      sub_B170D4();
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v30,
      (System_Xml_XmlQualifiedName_o *)currentKey,
      v28,
      (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
    &v35,
    (const MethodInfo_26BE3A4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager_LoginCallbackFunc___ctor(
        NetworkManager_LoginCallbackFunc_o *this,
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall NetworkManager_LoginCallbackFunc__EndInvoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall NetworkManager_LoginCallbackFunc__Invoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  NetworkManager_LoginCallbackFunc_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  System_String_c *v11; // x8
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
  void (__fastcall **v24)(System_String_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, System_String_o *, _QWORD); // x0
  NetworkManager_LoginCallbackFunc_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(System_String_o *, __int64); // x23
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
  System_String_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  NetworkManager_LoginCallbackFunc_o *v47; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (NetworkManager_LoginCallbackFunc_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(System_String_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, result, method);
      v31 = sub_B1702C(v28);
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
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = result->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_AAFEF8(result, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B170AC(v15, v28);
              (*v24)(result, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_AAFEF8(result, class_0, v9);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v14)(result, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(result, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
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
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B170AC(v22, v28);
            (*v26)(v29, result, v26);
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
                v21 = sub_AAFEF8(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v21)(v29, result, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v29
                                                                           + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                           + 312))(
                v29,
                result,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v30)(v29, result, v28);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall NetworkManager_ResultCallbackFunc__EndInvoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall NetworkManager_ResultCallbackFunc__Invoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  NetworkManager_ResultCallbackFunc_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  System_String_c *v11; // x8
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
  void (__fastcall **v24)(System_String_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, System_String_o *, _QWORD); // x0
  NetworkManager_ResultCallbackFunc_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(System_String_o *, __int64); // x23
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
  System_String_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  NetworkManager_ResultCallbackFunc_o *v47; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (NetworkManager_ResultCallbackFunc_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(System_String_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, result, method);
      v31 = sub_B1702C(v28);
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
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = result->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_AAFEF8(result, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B170AC(v15, v28);
              (*v24)(result, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_AAFEF8(result, class_0, v9);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v14)(result, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(result, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
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
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B170AC(v22, v28);
            (*v26)(v29, result, v26);
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
                v21 = sub_AAFEF8(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v21)(v29, result, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v29
                                                                           + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                           + 312))(
                v29,
                result,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v30)(v29, result, v28);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall NetworkManager_StoreCallbackFunc__EndInvoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall NetworkManager_StoreCallbackFunc__Invoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_String_o *url,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  NetworkManager_StoreCallbackFunc_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  System_String_c *v11; // x8
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
  void (__fastcall **v24)(System_String_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, System_String_o *, _QWORD); // x0
  NetworkManager_StoreCallbackFunc_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(System_String_o *, __int64); // x23
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
  System_String_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  NetworkManager_StoreCallbackFunc_o *v47; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (NetworkManager_StoreCallbackFunc_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(System_String_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, url, method);
      v31 = sub_B1702C(v28);
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
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = url->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&url->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&url->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_AAFEF8(url, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&url->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B170AC(v15, v28);
              (*v24)(url, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = url->klass;
                if ( *(_WORD *)&url->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&url->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_AAFEF8(url, class_0, v9);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v14)(url, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&url->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  url,
                  *((_QWORD *)&url->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(url, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
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
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B170AC(v22, v28);
            (*v26)(v29, url, v26);
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
                v21 = sub_AAFEF8(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v21)(v29, url, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v29
                                                                           + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                           + 312))(
                v29,
                url,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v30)(v29, url, v28);
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
  __int64 v30; // x3
  __int64 v31; // x4
  struct ResponseCommandBase_array **p_commandList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  PurchaseByBankResponseCommand_o *v38; // x23
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  MissionNotifyResponseCommand_o *v43; // x23
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v55; // x23
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  struct ResponseCommandBase_array *commandList; // x8
  __int64 v66; // x25
  int max_length; // w9
  Il2CppClass **v68; // x8
  System_Xml_Schema_XmlSchemaObject_o *v69; // x23
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *commandLookup; // x24
  System_String_o *CommandName; // x0
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  ManagerConfig_c *v74; // x0
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *communicationWaitList; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UnityEngine_Coroutine_o *communicationCoroutine; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  NetworkManager_c *v113; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  struct NetworkManager_StaticFields *v115; // x0
  System_Int32_array **v116; // x1
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  __int64 v123; // x20
  __int64 v124; // x20
  UnityEngine_Object_o *v125; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  AvalonNotificationManager_o *v128; // x0

  if ( (byte_40F8353 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ResponseCommandBase__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ResponseCommandBase___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_ResponseCommandBase__TypeInfo, v15);
    sub_B16FFC(&ManagerConfig_TypeInfo, v16);
    sub_B16FFC(&MissionNotifyResponseCommand_TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&PurchaseByBankResponseCommand_TypeInfo, v20);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_RequestBase__Clear__, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__, v24);
    sub_B16FFC(&StringLiteral_1, v25);
    byte_40F8353 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_15;
    goto LABEL_19;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_15;
    NetworkManager__ClearAuth(_4__this, 0LL);
    NetworkManager__ReadServerSetting(_4__this, 0LL);
    p_commandList = &_4__this->fields.commandList;
    if ( !_4__this->fields.commandList )
    {
      v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ResponseCommandBase__TypeInfo, v28, v29, v30, v31);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v33,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ResponseCommandBase___ctor__);
      v38 = (PurchaseByBankResponseCommand_o *)sub_B170CC(PurchaseByBankResponseCommand_TypeInfo, v34, v35, v36, v37);
      PurchaseByBankResponseCommand___ctor(v38, 0LL);
      if ( !v33 )
        goto LABEL_15;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v33,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ResponseCommandBase__Add__);
      v43 = (MissionNotifyResponseCommand_o *)sub_B170CC(MissionNotifyResponseCommand_TypeInfo, v39, v40, v41, v42);
      MissionNotifyResponseCommand___ctor(v43, 0LL);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v33,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ResponseCommandBase__Add__);
      v44 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__);
      _4__this->fields.commandList = (struct ResponseCommandBase_array *)v44;
      sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.commandList, v44, v45, v46, v47, v48, v49, v50);
      v55 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                            System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo,
                                                                                            v51,
                                                                                            v52,
                                                                                            v53,
                                                                                            v54);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v55,
        (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__);
      _4__this->fields.commandLookup = (struct System_Collections_Generic_Dictionary_string__ResponseCommandBase__o *)v55;
      sub_B16F98(
        (BattleServantConfConponent_o *)&_4__this->fields.commandLookup,
        (System_Int32_array **)v55,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      commandList = _4__this->fields.commandList;
      if ( !commandList )
        goto LABEL_15;
      v66 = 0LL;
      while ( 1 )
      {
        max_length = commandList->max_length;
        if ( (int)v66 >= max_length )
          break;
        if ( (unsigned int)v66 >= max_length )
        {
          sub_B17100(v62, v63, v64);
          sub_B170A0();
        }
        v68 = &commandList->obj.klass + v66;
        v69 = (System_Xml_Schema_XmlSchemaObject_o *)v68[4];
        if ( v69 )
        {
          commandLookup = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.commandLookup;
          CommandName = ResponseCommandBase__GetCommandName((ResponseCommandBase_o *)v68[4], 0LL);
          if ( commandLookup )
          {
            System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
              commandLookup,
              (System_Xml_XmlQualifiedName_o *)CommandName,
              v69,
              (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__);
            commandList = *p_commandList;
            ++v66;
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
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    v74 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v74 = ManagerConfig_TypeInfo;
    }
    if ( v74->static_fields->UseAppServer )
      NetworkServicePluginScript__CheckService(0LL);
    communicationWaitList = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)_4__this->fields.communicationWaitList;
    if ( communicationWaitList )
    {
      System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
        communicationWaitList,
        (const MethodInfo_2B16138 *)Method_System_Collections_Generic_Queue_RequestBase__Clear__);
      communicationCoroutine = _4__this->fields.communicationCoroutine;
      if ( communicationCoroutine )
        UnityEngine_MonoBehaviour__StopCoroutine_34804984(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          communicationCoroutine,
          0LL);
      _4__this->fields.communicationWork = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.communicationWork, 0LL, v76, v77, v78, v79, v80, v81);
      _4__this->fields.communicationCoroutine = 0LL;
      sub_B16F98(
        (BattleServantConfConponent_o *)&_4__this->fields.communicationCoroutine,
        0LL,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88);
      _4__this->fields.communicationWorkResponseList = 0LL;
      sub_B16F98(
        (BattleServantConfConponent_o *)&_4__this->fields.communicationWorkResponseList,
        0LL,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
      _4__this->fields.cacheRefreshWork = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.cacheRefreshWork, 0LL, v95, v96, v97, v98, v99, v100);
      _4__this->fields.cacheRefreshWorkResponseList = 0LL;
      sub_B16F98(
        (BattleServantConfConponent_o *)&_4__this->fields.cacheRefreshWorkResponseList,
        0LL,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106);
      v113 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v113 = NetworkManager_TypeInfo;
      }
      v113->static_fields->isErrorServerTimeLimitOver = 0;
      v113->static_fields->isRebootBlock = 0;
      v113->static_fields->isLogin = 0;
      static_fields = v113->static_fields;
      static_fields->sessionId = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&static_fields->sessionId, 0LL, v107, v108, v109, v110, v111, v112);
      v115 = NetworkManager_TypeInfo->static_fields;
      v116 = (System_Int32_array **)StringLiteral_1;
      v115->dataServerFolder = (struct System_String_o *)StringLiteral_1;
      sub_B16F98((BattleServantConfConponent_o *)&v115->dataServerFolder, v116, v117, v118, v119, v120, v121, v122);
      v123 = *((_QWORD *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__ + 3);
      if ( (*(_BYTE *)(v123 + 306) & 1) == 0 )
        sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__ + 3));
      v124 = **(_QWORD **)(v123 + 192);
      if ( (*(_BYTE *)(v124 + 306) & 1) == 0 )
        sub_AAFCFC(v124);
      v125 = **(UnityEngine_Object_o ***)(v124 + 184);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v125, 0LL, 0LL) )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
        if ( !gameObject )
          goto LABEL_15;
        UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          gameObject,
          (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___);
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        DataManager__Initialize((DataManager_o *)Instance, 0LL);
        v128 = (AvalonNotificationManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
        if ( v128 )
        {
          AvalonNotificationManager__Initialize(v128, 0LL);
          return 0;
        }
      }
    }
LABEL_15:
    sub_B170D4();
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_NetworkManager__Initialize_d__82_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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


void __fastcall NetworkManager__RequestApplicationUpdateCR_d__216___ctor(
        NetworkManager__RequestApplicationUpdateCR_d__216_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NetworkManager__RequestApplicationUpdateCR_d__216__MoveNext(
        NetworkManager__RequestApplicationUpdateCR_d__216_o *this,
        const MethodInfo *method)
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
  struct System_String_o *iOSApplicationID; // x1
  System_String_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  DelightWorks_Network_UnityWebRequestWWW_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  Il2CppObject *www_5__3; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  NetworkManager_StoreCallbackFunc_o *callback; // x0
  struct DelightWorks_Network_UnityWebRequestWWW_o *v49; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v50; // x8
  DelightWorks_Network_UnityWebRequestWWW_o *v51; // x0
  System_String_o *text; // x0
  System_String_o *v53; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v55; // x20
  __int64 v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  Il2CppObject *Item; // x20
  UserPresentBoxWindow_resData_array *v61; // x0
  __int64 v62; // x8
  UserPresentBoxWindow_resData_array *v63; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v64; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v65; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v66; // x0
  struct System_String_o *v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct System_String_o **p_url_5__2; // x0
  DelightWorks_Network_UnityWebRequestWWW_o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  UnityEngine_WaitForSeconds_o *v80; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  int v88; // w8
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_o *id; // x1
  struct System_String_o **v93; // x21
  ManagerConfig_c *v94; // x0
  System_Int32_array **AndroidPackageName; // x1
  UnityEngine_WaitForSeconds_o *v96; // x20
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7

  if ( (byte_40F8354 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_Dictionary_string__object____, v10);
    sub_B16FFC(&JsonManager_TypeInfo, v11);
    sub_B16FFC(&ManagerConfig_TypeInfo, v12);
    sub_B16FFC(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_22673, v15);
    sub_B16FFC(&StringLiteral_453, v16);
    sub_B16FFC(&StringLiteral_19169, v17);
    sub_B16FFC(&StringLiteral_1958, v18);
    sub_B16FFC(&StringLiteral_21712, v19);
    sub_B16FFC(&StringLiteral_19167, v20);
    sub_B16FFC(&StringLiteral_19186, v21);
    byte_40F8354 = 1;
  }
  switch ( this->fields.__1__state )
  {
    case 0:
      p_storeName = &this->fields.storeName;
      storeName = this->fields.storeName;
      this->fields.__1__state = -1;
      if ( !storeName )
      {
        v24 = (System_Int32_array **)StringLiteral_1958;
        *p_storeName = (System_String_o *)StringLiteral_1958;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.storeName, v24, v2, v3, v4, v5, v6, v7);
      }
      this->fields._url_5__2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._url_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      if ( System_String__op_Equality(this->fields.storeName, (System_String_o *)StringLiteral_19186, 0LL) )
      {
        if ( !this->fields.id )
        {
          v25 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v25 = ManagerConfig_TypeInfo;
          }
          static_fields = v25->static_fields;
          p_id = (BattleServantConfConponent_o *)&this->fields.id;
          iOSApplicationID = static_fields->iOSApplicationID;
          this->fields.id = iOSApplicationID;
LABEL_13:
          sub_B16F98(p_id, (System_Int32_array **)iOSApplicationID, v2, v3, v4, v5, v6, v7);
        }
        v29 = System_String__Concat_43746016(
                (System_String_o *)StringLiteral_19167,
                this->fields.id,
                (System_String_o *)StringLiteral_453,
                0LL);
        v34 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_B170CC(
                                                             DelightWorks_Network_UnityWebRequestWWW_TypeInfo,
                                                             v30,
                                                             v31,
                                                             v32,
                                                             v33);
        DelightWorks_Network_UnityWebRequestWWW___ctor(v34, v29, 0LL);
        this->fields._www_5__3 = v34;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._www_5__3,
          (System_Int32_array **)v34,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        www_5__3 = (Il2CppObject *)this->fields._www_5__3;
        this->fields.__2__current = www_5__3;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.__2__current,
          (System_Int32_array **)www_5__3,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
        LOBYTE(callback) = 1;
        this->fields.__1__state = 1;
        return (char)callback;
      }
      if ( !System_String__op_Equality(*p_storeName, (System_String_o *)StringLiteral_1958, 0LL) )
        goto LABEL_51;
      v93 = &this->fields.id;
      id = this->fields.id;
      if ( !id )
      {
        v94 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v94 = ManagerConfig_TypeInfo;
        }
        AndroidPackageName = (System_Int32_array **)v94->static_fields->AndroidPackageName;
        *v93 = (struct System_String_o *)AndroidPackageName;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.id, AndroidPackageName, v57, v58, v59, v89, v90, v91);
        id = *v93;
      }
      v67 = System_String__Concat_43743732((System_String_o *)StringLiteral_19169, id, 0LL);
      this->fields._url_5__2 = v67;
      p_url_5__2 = &this->fields._url_5__2;
      goto LABEL_50;
    case 1:
      v49 = this->fields._www_5__3;
      this->fields.__1__state = -1;
      if ( !v49 )
        goto LABEL_54;
      if ( !System_String__IsNullOrEmpty(v49->fields._error_k__BackingField, 0LL) )
        goto LABEL_41;
      v50 = this->fields._www_5__3;
      if ( !v50 )
        goto LABEL_54;
      if ( System_String__IsNullOrEmpty(v50->fields._error_k__BackingField, 0LL) )
      {
        v51 = this->fields._www_5__3;
        if ( !v51 )
          goto LABEL_54;
        text = DelightWorks_Network_UnityWebRequestWWW__get_text(v51, 0LL);
        if ( !this->fields._www_5__3 )
          goto LABEL_54;
        v53 = text;
        DelightWorks_Network_UnityWebRequestWWW__Dispose(this->fields._www_5__3, 0LL);
        if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !JsonManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
        }
        Dictionary = JsonManager__getDictionary(v53, 0LL);
        if ( !Dictionary )
          goto LABEL_54;
        v55 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
               (System_Xml_XmlQualifiedName_o *)StringLiteral_21712,
               (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                   v55,
                                   (System_Type_o *)StringLiteral_21712,
                                   (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v61 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                  Item,
                  (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_Dictionary_string__object____);
          if ( v61 )
          {
            v62 = *(_QWORD *)&v61->max_length;
            v63 = v61;
            if ( v62 )
            {
              if ( !(_DWORD)v62 )
                goto LABEL_55;
              v64 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v61->m_Items[0];
              if ( v64 )
              {
                v61 = (UserPresentBoxWindow_resData_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                              v64,
                                                              (System_Xml_XmlQualifiedName_o *)StringLiteral_22673,
                                                              (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)v61 & 1) != 0 )
                {
                  if ( v63->max_length )
                  {
                    v65 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v63->m_Items[0];
                    if ( v65 )
                    {
                      v66 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              v65,
                              (System_Type_o *)StringLiteral_22673,
                              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                      if ( v66 )
                      {
                        v67 = (struct System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v66->klass->vtable[3].method)(
                                                          v66,
                                                          v66->klass->vtable[4].methodPtr);
                        this->fields._url_5__2 = v67;
                        p_url_5__2 = &this->fields._url_5__2;
LABEL_50:
                        sub_B16F98(
                          (BattleServantConfConponent_o *)p_url_5__2,
                          (System_Int32_array **)v67,
                          v68,
                          v69,
                          v70,
                          v71,
                          v72,
                          v73);
                        goto LABEL_51;
                      }
                    }
LABEL_54:
                    sub_B170D4();
                  }
LABEL_55:
                  sub_B17100(v61, v56, v57);
                  sub_B170A0();
                }
              }
            }
          }
        }
LABEL_51:
        v96 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v56, v57, v58, v59);
        UnityEngine_WaitForSeconds___ctor(v96, 0.5, 0LL);
        this->fields.__2__current = (Il2CppObject *)v96;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v96,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102);
        v88 = 3;
        goto LABEL_52;
      }
LABEL_41:
      v75 = this->fields._www_5__3;
      if ( !v75 )
        goto LABEL_54;
      DelightWorks_Network_UnityWebRequestWWW__Dispose(v75, 0LL);
      v80 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v76, v77, v78, v79);
      UnityEngine_WaitForSeconds___ctor(v80, 1.0, 0LL);
      this->fields.__2__current = (Il2CppObject *)v80;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v80,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
      v88 = 2;
LABEL_52:
      *((_DWORD *)p__2__current - 2) = v88;
      LOBYTE(callback) = 1;
      return (char)callback;
    case 2:
      this->fields._www_5__3 = 0LL;
      p_id = (BattleServantConfConponent_o *)&this->fields._www_5__3;
      this->fields.__1__state = -1;
      iOSApplicationID = 0LL;
      goto LABEL_13;
    case 3:
      callback = this->fields.callback;
      this->fields.__1__state = -1;
      if ( !callback )
        return (char)callback;
      NetworkManager_StoreCallbackFunc__Invoke(callback, this->fields._url_5__2, (const MethodInfo *)v2);
LABEL_17:
      LOBYTE(callback) = 0;
      return (char)callback;
    default:
      goto LABEL_17;
  }
}


Il2CppObject *__fastcall NetworkManager__RequestApplicationUpdateCR_d__216__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__RequestApplicationUpdateCR_d__216_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NetworkManager__RequestApplicationUpdateCR_d__216__System_Collections_IEnumerator_Reset(
        NetworkManager__RequestApplicationUpdateCR_d__216_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_NetworkManager__RequestApplicationUpdateCR_d__216_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall NetworkManager__RequestApplicationUpdateCR_d__216__System_Collections_IEnumerator_get_Current(
        NetworkManager__RequestApplicationUpdateCR_d__216_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NetworkManager__RequestApplicationUpdateCR_d__216__System_IDisposable_Dispose(
        NetworkManager__RequestApplicationUpdateCR_d__216_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__RequestCR_d__211___ctor(
        NetworkManager__RequestCR_d__211_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NetworkManager__RequestCR_d__211__MoveNext(
        NetworkManager__RequestCR_d__211_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v123; // x1
  __int64 v124; // x1
  struct NetworkManager_o *_4__this; // x20
  struct RequestBase_o *work; // x8
  struct RequestBase_o **p_work; // x25
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_String_o **p_errorCode_5__3; // x21
  BattleServantConfConponent_o *p_errorLocalizeCode_5__4; // x23
  struct System_String_o **p_errorAction_5__5; // x26
  struct ResponseFailData_o **p_failData_5__6; // x24
  BattleServantConfConponent_o *p_responseList_5__7; // x22
  DelightWorks_Network_UnityWebRequestWWW_o **v139; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v140; // x8
  bool IsNullOrEmpty; // w0
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  DelightWorks_Network_UnityWebRequestWWW_o *v148; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v149; // x8
  DelightWorks_Network_UnityWebRequestWWW_o **v150; // x21
  struct System_String_o *v151; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v165; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  uint64_t v173; // x21
  struct RequestBase_o *v174; // x8
  __int64 v175; // x11
  ManagerConfig_c *v176; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  struct RequestBase_o *v178; // x0
  __int64 v179; // x0
  __int64 v180; // x1
  __int64 v181; // x2
  __int64 v182; // x3
  __int64 v183; // x4
  System_String_o *v184; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v185; // x20
  struct DelightWorks_Network_UnityWebRequestWWW_o **p_www_5__10; // x19
  System_String_array **v187; // x2
  System_String_array **v188; // x3
  System_Boolean_array **v189; // x4
  System_Int32_array **v190; // x5
  System_Int32_array *v191; // x6
  System_Int32_array *v192; // x7
  System_Int32_array **v193; // x1
  System_String_array **v194; // x2
  System_String_array **v195; // x3
  System_Boolean_array **v196; // x4
  System_Int32_array **v197; // x5
  System_Int32_array *v198; // x6
  System_Int32_array *v199; // x7
  System_String_o **p_data_5__2; // x21
  struct RequestBase_o *v201; // x0
  System_Int32_array **v202; // x0
  System_String_array **v203; // x2
  System_String_array **v204; // x3
  System_Boolean_array **v205; // x4
  System_Int32_array **v206; // x5
  System_Int32_array *v207; // x6
  System_Int32_array *v208; // x7
  struct RequestBase_o *v209; // x0
  struct RequestBase_o *v210; // x0
  CommonUI_o *v211; // x0
  RequestBase_o *v212; // x0
  UnityEngine_WWWForm_o *WWWForm; // x21
  __int64 v214; // x1
  __int64 v215; // x2
  __int64 v216; // x3
  __int64 v217; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v218; // x22
  System_Collections_Generic_Dictionary_string__string__o *headers; // x0
  Il2CppObject *v220; // x23
  Il2CppObject *key; // x24
  System_String_o *v222; // x24
  System_String_o *v223; // x0
  struct RequestBase_o *v224; // x0
  struct System_Collections_Generic_Queue_RequestBase__o *communicationWaitList; // x8
  float progress_k__BackingField; // s8
  float loadProgress_5__13; // s9
  System_String_array **v228; // x2
  System_String_array **v229; // x3
  System_Boolean_array **v230; // x4
  System_Int32_array **v231; // x5
  System_Int32_array *v232; // x6
  System_Int32_array *v233; // x7
  float v234; // s0
  struct RequestBase_o *v235; // x0
  System_String_array **v236; // x2
  System_String_array **v237; // x3
  System_Boolean_array **v238; // x4
  System_Int32_array **v239; // x5
  System_Int32_array *v240; // x6
  System_Int32_array *v241; // x7
  struct System_Collections_Generic_Queue_RequestBase__o *v242; // x8
  System_Int32_array **v243; // x1
  struct System_String_o **v244; // x22
  System_String_array **v245; // x2
  System_String_array **v246; // x3
  System_Boolean_array **v247; // x4
  System_Int32_array **v248; // x5
  System_Int32_array *v249; // x6
  System_Int32_array *v250; // x7
  __int64 *v251; // x8
  struct System_String_o *error_k__BackingField; // x1
  System_String_array **v253; // x2
  System_String_array **v254; // x3
  System_Boolean_array **v255; // x4
  System_Int32_array **v256; // x5
  System_Int32_array *v257; // x6
  System_Int32_array *v258; // x7
  System_Int32_array **v259; // x1
  struct DelightWorks_Network_UnityWebRequestWWW_o *v260; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *responseHeaders_k__BackingField; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v262; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v263; // x0
  System_String_o *Item; // x24
  __int64 v265; // x2
  __int64 v266; // x0
  System_Int32_array **v267; // x1
  System_String_array *v268; // x0
  System_String_array *v269; // x24
  System_String_o *v270; // x0
  System_String_o *v271; // x24
  uint32_t v272; // w0
  __int64 *v273; // x8
  System_Int32_array **v274; // x1
  System_Int32_array **v275; // x1
  struct System_String_o **v276; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v277; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v278; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v279; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v280; // x0
  System_String_o *v281; // x0
  int64_t v282; // x22
  NetworkManager_c *v283; // x8
  System_String_array **v284; // x2
  System_String_array **v285; // x3
  System_Boolean_array **v286; // x4
  System_Int32_array **v287; // x5
  System_Int32_array *v288; // x6
  System_Int32_array *v289; // x7
  System_String_array **v290; // x2
  System_String_array **v291; // x3
  System_Boolean_array **v292; // x4
  System_Int32_array **v293; // x5
  System_Int32_array *v294; // x6
  System_Int32_array *v295; // x7
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  System_Int32_array **v302; // x1
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
  System_String_array **v317; // x2
  System_String_array **v318; // x3
  System_Boolean_array **v319; // x4
  System_Int32_array **v320; // x5
  System_Int32_array *v321; // x6
  System_Int32_array *v322; // x7
  struct System_String_o **v323; // x0
  System_Int32_array **v324; // x1
  System_String_array **v325; // x2
  System_String_array **v326; // x3
  System_Boolean_array **v327; // x4
  System_Int32_array **v328; // x5
  System_Int32_array *v329; // x6
  System_Int32_array *v330; // x7
  System_Int32_array **v331; // x1
  System_Int32_array **v332; // x1
  System_String_array **v333; // x2
  System_String_array **v334; // x3
  System_Boolean_array **v335; // x4
  System_Int32_array **v336; // x5
  System_Int32_array *v337; // x6
  System_Int32_array *v338; // x7
  _BOOL4 v339; // w26
  struct RequestBase_o *v340; // x0
  System_String_array **v341; // x2
  System_String_array **v342; // x3
  System_Boolean_array **v343; // x4
  System_Int32_array **v344; // x5
  System_Int32_array *v345; // x6
  System_Int32_array *v346; // x7
  CommonUI_o *v347; // x0
  System_Int32_array **v348; // x1
  System_String_array **v349; // x2
  System_String_array **v350; // x3
  System_Boolean_array **v351; // x4
  System_Int32_array **v352; // x5
  System_Int32_array *v353; // x6
  System_Int32_array *v354; // x7
  __int64 v355; // x1
  System_String_array **v356; // x2
  System_String_array **v357; // x3
  System_Boolean_array **v358; // x4
  System_Int32_array **v359; // x5
  System_Int32_array *v360; // x6
  System_Int32_array *v361; // x7
  System_String_o *errorLocalizeCode_5__4; // x24
  System_String_o *v363; // x28
  __int64 v364; // x1
  System_String_o *errorAction_5__5; // x24
  System_Int32_array ***v366; // x8
  System_String_o *data_5__2; // x22
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v369; // x22
  System_String_array **v370; // x2
  System_String_array **v371; // x3
  System_Boolean_array **v372; // x4
  System_Int32_array **v373; // x5
  System_Int32_array *v374; // x6
  System_Int32_array *v375; // x7
  Il2CppObject *v376; // x23
  struct ResponseData_array *v377; // x0
  struct ResponseData_array **v378; // x23
  System_String_array **v379; // x2
  System_String_array **v380; // x3
  System_Boolean_array **v381; // x4
  System_Int32_array **v382; // x5
  System_Int32_array *v383; // x6
  System_Int32_array *v384; // x7
  struct ResponseData_array *responseList_5__7; // x8
  __int64 v386; // x25
  int v387; // w9
  Il2CppClass **v388; // x8
  ResponseData_o *v389; // x24
  System_String_o *v390; // x19
  System_String_o *v391; // x21
  System_String_o *v392; // x22
  System_String_o *v393; // x0
  System_String_o *v394; // x23
  __int64 v395; // x1
  __int64 v396; // x2
  __int64 v397; // x3
  __int64 v398; // x4
  System_Action_o *v399; // x22
  NetworkManager_c *v400; // x0
  System_Collections_Generic_SortedDictionary_string__string__o *v401; // x23
  System_String_o *AuthCode; // x0
  struct RequestBase_o *v403; // x0
  __int64 v404; // x0
  NetworkManager_c *v405; // x8
  System_String_o *v406; // x23
  int32_t v407; // w8
  NetworkManager_c *v408; // x0
  __int64 *v409; // x8
  System_String_o *v410; // x24
  bool isNoRedirect_5__9; // w24
  __int64 v412; // x1
  __int64 v413; // x2
  __int64 v414; // x3
  __int64 v415; // x4
  DelightWorks_Network_UnityWebRequestWWW_o *v416; // x25
  System_String_array **v417; // x2
  System_String_array **v418; // x3
  System_Boolean_array **v419; // x4
  System_Int32_array **v420; // x5
  System_Int32_array *v421; // x6
  System_Int32_array *v422; // x7
  struct RequestBase_o *v423; // x8
  __int64 v424; // x10
  ManagerConfig_c *v425; // x0
  float *p_GAME_DATA_TIMEOUT; // x8
  float unscaledTime; // s0
  float timeout_5__11; // s1
  __int64 v429; // x1
  __int64 v430; // x2
  __int64 v431; // x3
  __int64 v432; // x4
  UnityEngine_WaitForEndOfFrame_o *v433; // x22
  System_String_array **v434; // x2
  System_String_array **v435; // x3
  System_Boolean_array **v436; // x4
  System_Int32_array **v437; // x5
  System_Int32_array *v438; // x6
  System_Int32_array *v439; // x7
  System_Int32_array **v440; // x1
  System_Int32_array **v441; // x1
  System_String_array **v442; // x2
  System_String_array **v443; // x3
  System_Boolean_array **v444; // x4
  System_Int32_array **v445; // x5
  System_Int32_array *v446; // x6
  System_Int32_array *v447; // x7
  System_Int32_array **v448; // x1
  System_String_array **v449; // x2
  System_String_array **v450; // x3
  System_Boolean_array **v451; // x4
  System_Int32_array **v452; // x5
  System_Int32_array *v453; // x6
  System_Int32_array *v454; // x7
  CommonUI_o *Instance; // x24
  __int64 v456; // x1
  __int64 v457; // x2
  __int64 v458; // x3
  __int64 v459; // x4
  ErrorDialog_ClickDelegate_o *v460; // x25
  struct DelightWorks_Network_UnityWebRequestWWW_o *www_5__10; // x8
  Il2CppObject *wait_5__14; // x1
  bool result; // w0
  struct System_String_o *text; // x0
  System_String_array **v465; // x2
  System_String_array **v466; // x3
  System_Boolean_array **v467; // x4
  System_Int32_array **v468; // x5
  System_Int32_array *v469; // x6
  System_Int32_array *v470; // x7
  NetworkManager_c *v471; // x0
  struct RequestBase_o *v472; // x8
  __int64 v473; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v474; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *v475; // x0
  int v476; // w22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v477; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v478; // x0
  System_String_o *v479; // x22
  __int64 v480; // x2
  int v481; // w8
  System_String_array *v482; // x0
  System_String_array **v483; // x2
  System_String_array **v484; // x3
  System_Boolean_array **v485; // x4
  System_Int32_array **v486; // x5
  System_Int32_array *v487; // x6
  System_Int32_array *v488; // x7
  NetworkManager_c *v489; // x8
  System_String_array *v490; // x22
  struct NetworkManager_StaticFields *v491; // x0
  System_Int32_array **v492; // x1
  int max_length; // w8
  unsigned int v494; // w25
  Il2CppClass **v495; // x8
  System_String_o *v496; // x23
  NetworkManager_c *v497; // x0
  System_Int32_array **v498; // x0
  struct NetworkManager_StaticFields *v499; // x8
  System_String_array **v500; // x2
  System_String_array **v501; // x3
  System_Boolean_array **v502; // x4
  System_Int32_array **v503; // x5
  System_Int32_array *v504; // x6
  System_Int32_array *v505; // x7
  __int64 v506; // x1
  ManagementManager_c *v507; // x0
  _BOOL4 isDuringStartup; // w8
  __int64 *v509; // x9
  __int64 *v510; // x10
  __int64 v511; // x0
  System_String_array **v512; // x3
  System_Boolean_array **v513; // x4
  System_Int32_array **v514; // x5
  System_Int32_array *v515; // x6
  System_Int32_array *v516; // x7
  System_String_array *v517; // x25
  ManagerConfig_c *v518; // x0
  ManagementManager_c *v519; // x0
  System_Int32_array **v520; // x1
  System_String_o *detail; // x27
  struct ResponseFailData_o *v522; // x8
  bool v523; // w0
  struct ResponseFailData_o *v524; // x8
  System_String_o *v525; // x0
  System_String_o *v526; // x0
  System_String_o **v527; // x20
  System_String_o *v528; // x28
  bool v529; // w8
  System_String_o *v530; // x28
  uint32_t v531; // w0
  System_String_array **v532; // x2
  System_String_array **v533; // x3
  System_Boolean_array **v534; // x4
  System_Int32_array **v535; // x5
  System_Int32_array *v536; // x6
  System_Int32_array *v537; // x7
  __int64 v538; // x1
  __int64 v539; // x2
  __int64 v540; // x3
  __int64 v541; // x4
  NetworkManager_c *v542; // x0
  ServantAssetLoadManager_o *v543; // x0
  __int64 v544; // x1
  __int64 v545; // x2
  __int64 v546; // x3
  __int64 v547; // x4
  __int64 v548; // x1
  NetworkManager_c *v549; // x0
  __int64 v550; // x1
  __int64 v551; // x2
  __int64 v552; // x3
  __int64 v553; // x4
  NetworkManager_c *v554; // x0
  __int64 v555; // x1
  __int64 v556; // x2
  __int64 v557; // x3
  __int64 v558; // x4
  __int64 v559; // x1
  __int64 v560; // x2
  __int64 v561; // x3
  __int64 v562; // x4
  NetworkManager_c *v563; // x0
  System_Action_o *v564; // x26
  __int64 v565; // x1
  __int64 v566; // x2
  __int64 v567; // x3
  __int64 v568; // x4
  __int64 v569; // x1
  __int64 v570; // x2
  __int64 v571; // x3
  __int64 v572; // x4
  System_Action_o *v573; // x0
  __int64 *v574; // x8
  NetworkManager_c *v575; // x0
  CommonUI_o *v576; // x26
  __int64 v577; // x1
  __int64 v578; // x2
  __int64 v579; // x3
  __int64 v580; // x4
  CommonConfirmDialog_ClickDelegate_o *v581; // x28
  struct ResponseFailData_o *v582; // x8
  System_String_o *sandboxDomain; // x26
  _BOOL4 sandboxSeurity; // w28
  __int64 v585; // x1
  System_String_array **v586; // x2
  System_String_array **v587; // x3
  System_Boolean_array **v588; // x4
  System_Int32_array **v589; // x5
  System_Int32_array *v590; // x6
  System_Int32_array *v591; // x7
  System_Int32_array **sandboxAssetsDomain; // x26
  NetworkManager_c *v593; // x0
  struct NetworkManager_StaticFields *v594; // x0
  __int64 v595; // x1
  System_String_array **v596; // x2
  System_String_array **v597; // x3
  System_Boolean_array **v598; // x4
  System_Int32_array **v599; // x5
  System_Int32_array *v600; // x6
  System_Int32_array *v601; // x7
  System_Int32_array **sandboxWebviewDomain; // x26
  NetworkManager_c *v603; // x0
  struct NetworkManager_StaticFields *v604; // x0
  CommonUI_o *v605; // x28
  __int64 v606; // x1
  __int64 v607; // x2
  __int64 v608; // x3
  __int64 v609; // x4
  ErrorDialog_ClickDelegate_o *v610; // x26
  System_String_array **v611; // x2
  System_String_array **v612; // x3
  System_Boolean_array **v613; // x4
  System_Int32_array **v614; // x5
  System_Int32_array *v615; // x6
  System_Int32_array *v616; // x7
  System_String_array **v617; // x2
  System_String_array **v618; // x3
  System_Boolean_array **v619; // x4
  System_Int32_array **v620; // x5
  System_Int32_array *v621; // x6
  System_Int32_array *v622; // x7
  System_String_array **v623; // x2
  System_String_array **v624; // x3
  System_Boolean_array **v625; // x4
  System_Int32_array **v626; // x5
  System_Int32_array *v627; // x6
  System_Int32_array *v628; // x7
  System_String_array **v629; // x2
  System_String_array **v630; // x3
  System_Boolean_array **v631; // x4
  System_Int32_array **v632; // x5
  System_Int32_array *v633; // x6
  System_Int32_array *v634; // x7
  System_String_array **v635; // x2
  System_String_array **v636; // x3
  System_Boolean_array **v637; // x4
  System_Int32_array **v638; // x5
  System_Int32_array *v639; // x6
  System_Int32_array *v640; // x7
  struct RequestBase_o *v641; // x0
  __int64 v642; // x1
  __int64 v643; // x2
  __int64 v644; // x3
  __int64 v645; // x4
  CommonUI_o *v646; // x0
  UnityEngine_WaitForEndOfFrame_o *v647; // x20
  Il2CppObject **v648; // x19
  System_String_array **v649; // x2
  System_String_array **v650; // x3
  System_Boolean_array **v651; // x4
  System_Int32_array **v652; // x5
  System_Int32_array *v653; // x6
  System_Int32_array *v654; // x7
  System_Int32_array **v655; // x19
  NetworkManager_c *v656; // x0
  BattleServantConfConponent_o *p_errorDialogResponseData; // x0
  System_String_array **v658; // x3
  System_Boolean_array **v659; // x4
  System_Int32_array **v660; // x5
  System_Int32_array *v661; // x6
  System_Int32_array *v662; // x7
  System_Int32_array **nid; // x26
  System_String_array **v664; // x3
  System_Boolean_array **v665; // x4
  System_Int32_array **v666; // x5
  System_Int32_array *v667; // x6
  System_Int32_array *v668; // x7
  System_String_array **v669; // x3
  System_Boolean_array **v670; // x4
  System_Int32_array **v671; // x5
  System_Int32_array *v672; // x6
  System_Int32_array *v673; // x7
  System_Int32_array **resCode; // x26
  System_String_array **v675; // x3
  System_Boolean_array **v676; // x4
  System_Int32_array **v677; // x5
  System_Int32_array *v678; // x6
  System_Int32_array *v679; // x7
  struct System_String_o *v680; // x0
  System_String_array **v681; // x2
  System_String_array **v682; // x3
  System_Boolean_array **v683; // x4
  System_Int32_array **v684; // x5
  System_Int32_array *v685; // x6
  System_Int32_array *v686; // x7
  __int64 v687; // x1
  __int64 v688; // x2
  __int64 v689; // x3
  __int64 v690; // x4
  ResponseFailData_o *v691; // x26
  struct ResponseFailData_o **v692; // x25
  System_String_array **v693; // x2
  System_String_array **v694; // x3
  System_Boolean_array **v695; // x4
  System_Int32_array **v696; // x5
  System_Int32_array *v697; // x6
  System_Int32_array *v698; // x7
  struct ResponseFailData_o *failData_5__6; // x8
  bool v700; // w0
  System_String_array **v701; // x2
  System_String_array **v702; // x3
  System_Boolean_array **v703; // x4
  System_Int32_array **v704; // x5
  System_Int32_array *v705; // x6
  System_Int32_array *v706; // x7
  struct System_String_o **p_action; // x8
  struct System_String_o *v708; // x1
  struct RequestBase_o *v709; // x9
  PurchaseByBank_UnityIap_Request_c *v710; // x10
  __int64 v711; // x11
  int v712; // w8
  RequestBase_c *klass; // x9
  __int64 v714; // x11
  ResponseData_array *v715; // x23
  ResponseData_o *v716; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *fail; // x0
  System_String_o *v718; // x0
  System_String_o *v719; // x23
  System_String_array **v720; // x2
  System_String_array **v721; // x3
  System_Boolean_array **v722; // x4
  System_Int32_array **v723; // x5
  System_Int32_array *v724; // x6
  System_Int32_array *v725; // x7
  System_Int32_array **v726; // x1
  WebViewManager_o *v727; // x23
  Il2CppObject *v728; // x0
  struct ResponseData_array *v729; // x8
  unsigned __int64 v730; // x23
  unsigned __int64 v731; // x9
  ResponseData_o *v732; // x22
  struct System_String_o *v733; // x0
  System_String_array **v734; // x2
  System_String_array **v735; // x3
  System_Boolean_array **v736; // x4
  System_Int32_array **v737; // x5
  System_Int32_array *v738; // x6
  System_Int32_array *v739; // x7
  __int64 v740; // x1
  __int64 v741; // x2
  __int64 v742; // x3
  __int64 v743; // x4
  ResponseFailData_o *v744; // x23
  struct ResponseFailData_o **v745; // x22
  System_String_array **v746; // x2
  System_String_array **v747; // x3
  System_Boolean_array **v748; // x4
  System_Int32_array **v749; // x5
  System_Int32_array *v750; // x6
  System_Int32_array *v751; // x7
  struct ResponseFailData_o *v752; // x8
  System_String_array **v753; // x2
  System_String_array **v754; // x3
  System_Boolean_array **v755; // x4
  System_Int32_array **v756; // x5
  System_Int32_array *v757; // x6
  System_Int32_array *v758; // x7
  struct System_String_o **v759; // x8
  struct System_String_o *v760; // x1
  System_Action_o *v761; // x28
  System_String_o *v762; // x1
  System_String_o *v763; // x3
  int32_t v764; // w4
  NetworkManager_o *v765; // x0
  System_String_o *v766; // x2
  System_Action_o *v767; // x5
  System_Action_o *v768; // x26
  __int64 *v769; // x8
  ManagementManager_c *v770; // x0
  _BOOL4 v771; // w28
  WebViewManager_o *v772; // x0
  __int64 v773; // x1
  __int64 v774; // x2
  __int64 v775; // x3
  __int64 v776; // x4
  CommonUI_o *v777; // x28
  ErrorDialog_ClickDelegate_o *v778; // x26
  bool v779; // w0
  __int64 *v780; // x8
  CommonUI_o *v781; // x28
  __int64 v782; // x1
  __int64 v783; // x2
  __int64 v784; // x3
  __int64 v785; // x4
  ErrorDialog_ClickDelegate_o *v786; // x26
  ErrorDialog_ClickDelegate_o *v787; // x26
  struct System_String_o *v788; // x1
  struct System_String_o **v789; // x23
  __int64 *v790; // x8
  struct System_String_o *v791; // x1
  int32_t cancleTxt; // [xsp+10h] [xbp-100h]
  int32_t cancleTxta; // [xsp+10h] [xbp-100h]
  System_String_o *cancleTxtb; // [xsp+10h] [xbp-100h]
  System_String_o *cancleTxtc; // [xsp+10h] [xbp-100h]
  System_String_o *value; // [xsp+18h] [xbp-F8h]
  System_String_o *valuea; // [xsp+18h] [xbp-F8h]
  System_String_o *valueb; // [xsp+18h] [xbp-F8h]
  System_String_o *title; // [xsp+20h] [xbp-F0h]
  NetworkManager_o *v800; // [xsp+28h] [xbp-E8h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v801; // [xsp+30h] [xbp-E0h] BYREF
  int v802[2]; // [xsp+58h] [xbp-B8h]
  int v803; // [xsp+60h] [xbp-B0h]
  System_Xml_Schema_XmlSchemaObject_o *v804; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v805; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_SortedDictionary_string__string__o *authParams; // [xsp+98h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+A0h] [xbp-70h] BYREF
  System_DateTime_o v808; // 0:x0.8
  System_DateTime_o v809; // 0:x0.8

  if ( (byte_40F8355 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BattleData_TypeInfo, v6);
    sub_B16FFC(&char___TypeInfo, v7);
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, v8);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B16FFC(&System_Convert_TypeInfo, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&System_DateTime_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v21);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v22);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v25);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_ResponseData___, v26);
    sub_B16FFC(&JsonManager_TypeInfo, v27);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v29);
    sub_B16FFC(&LocalizationManager_TypeInfo, v30);
    sub_B16FFC(&ManagementManager_TypeInfo, v31);
    sub_B16FFC(&ManagerConfig_TypeInfo, v32);
    sub_B16FFC(&Method_NetworkManager_OnClickErrorDialog__, v33);
    sub_B16FFC(&Method_NetworkManager_OnClickErrorReboot__, v34);
    sub_B16FFC(&Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__, v35);
    sub_B16FFC(&Method_NetworkManager_OnClickErrorRetryDialog__, v36);
    sub_B16FFC(&Method_NetworkManager_OnClickErrorStay__, v37);
    sub_B16FFC(&Method_NetworkManager_OnClickErrorTerminal__, v38);
    sub_B16FFC(&Method_NetworkManager_OnClickRefreshTerminal__, v39);
    sub_B16FFC(&Method_NetworkManager_OnClickReloadCache__, v40);
    sub_B16FFC(&Method_NetworkManager_OnClickStore__, v41);
    sub_B16FFC(&Method_NetworkManager_OnClickUserDelete__, v42);
    sub_B16FFC(&Method_NetworkManager__RequestCR_b__211_0__, v43);
    sub_B16FFC(&NetworkManager_TypeInfo, v44);
    sub_B16FFC(&PurchaseByBank_UnityIap_Request_TypeInfo, v45);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__, v46);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v47);
    sub_B16FFC(&ResponseFailData_TypeInfo, v48);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v49);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v51);
    sub_B16FFC(&string___TypeInfo, v52);
    sub_B16FFC(&TopGameDataRequest_TypeInfo, v53);
    sub_B16FFC(&TopLoginRequest_TypeInfo, v54);
    sub_B16FFC(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo, v55);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v56);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v57);
    sub_B16FFC(&StringLiteral_26, v58);
    sub_B16FFC(&StringLiteral_15473, v59);
    sub_B16FFC(&StringLiteral_17811, v60);
    sub_B16FFC(&StringLiteral_9259, v61);
    sub_B16FFC(&StringLiteral_19809, v62);
    sub_B16FFC(&StringLiteral_21667, v63);
    sub_B16FFC(&StringLiteral_7070, v64);
    sub_B16FFC(&StringLiteral_1172, v65);
    sub_B16FFC(&StringLiteral_21706, v66);
    sub_B16FFC(&StringLiteral_9258, v67);
    sub_B16FFC(&StringLiteral_18995, v68);
    sub_B16FFC(&StringLiteral_19767, v69);
    sub_B16FFC(&StringLiteral_21699, v70);
    sub_B16FFC(&StringLiteral_21698, v71);
    sub_B16FFC(&StringLiteral_22223, v72);
    sub_B16FFC(&StringLiteral_1174, v73);
    sub_B16FFC(&StringLiteral_9247, v74);
    sub_B16FFC(&StringLiteral_7676, v75);
    sub_B16FFC(&StringLiteral_15033, v76);
    sub_B16FFC(&StringLiteral_21716, v77);
    sub_B16FFC(&StringLiteral_9262, v78);
    sub_B16FFC(&StringLiteral_9260, v79);
    sub_B16FFC(&StringLiteral_16517, v80);
    sub_B16FFC(&StringLiteral_1185, v81);
    sub_B16FFC(&StringLiteral_9251, v82);
    sub_B16FFC(&StringLiteral_21700, v83);
    sub_B16FFC(&StringLiteral_17135, v84);
    sub_B16FFC(&StringLiteral_1187, v85);
    sub_B16FFC(&StringLiteral_1189, v86);
    sub_B16FFC(&StringLiteral_4281, v87);
    sub_B16FFC(&StringLiteral_9266, v88);
    sub_B16FFC(&StringLiteral_19810, v89);
    sub_B16FFC(&StringLiteral_9248, v90);
    sub_B16FFC(&StringLiteral_16311, v91);
    sub_B16FFC(&StringLiteral_1520, v92);
    sub_B16FFC(&StringLiteral_9261, v93);
    sub_B16FFC(&StringLiteral_21032, v94);
    sub_B16FFC(&StringLiteral_9250, v95);
    sub_B16FFC(&StringLiteral_21344, v96);
    sub_B16FFC(&StringLiteral_16463, v97);
    sub_B16FFC(&StringLiteral_440, v98);
    sub_B16FFC(&StringLiteral_21650, v99);
    sub_B16FFC(&StringLiteral_18996, v100);
    sub_B16FFC(&StringLiteral_3252, v101);
    sub_B16FFC(&StringLiteral_1260, v102);
    sub_B16FFC(&StringLiteral_17584, v103);
    sub_B16FFC(&StringLiteral_21629, v104);
    sub_B16FFC(&StringLiteral_12312, v105);
    sub_B16FFC(&StringLiteral_16136, v106);
    sub_B16FFC(&StringLiteral_17971, v107);
    sub_B16FFC(&StringLiteral_9265, v108);
    sub_B16FFC(&StringLiteral_17105, v109);
    sub_B16FFC(&StringLiteral_651, v110);
    sub_B16FFC(&StringLiteral_3256, v111);
    sub_B16FFC(&StringLiteral_22234, v112);
    sub_B16FFC(&StringLiteral_9263, v113);
    sub_B16FFC(&StringLiteral_1177, v114);
    sub_B16FFC(&StringLiteral_21033, v115);
    sub_B16FFC(&StringLiteral_20279, v116);
    sub_B16FFC(&StringLiteral_21359, v117);
    sub_B16FFC(&StringLiteral_98, v118);
    sub_B16FFC(&StringLiteral_1, v119);
    sub_B16FFC(&StringLiteral_9249, v120);
    sub_B16FFC(&StringLiteral_12011, v121);
    sub_B16FFC(&StringLiteral_1156, v122);
    sub_B16FFC(&StringLiteral_9264, v123);
    sub_B16FFC(&StringLiteral_1141, v124);
    byte_40F8355 = 1;
  }
  authParams = 0LL;
  dateData = 0LL;
  v804 = 0LL;
  memset(&v805, 0, sizeof(v805));
  v803 = 0;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      p_work = &this->fields.work;
      work = this->fields.work;
      this->fields.__1__state = -1;
      if ( !work )
        return 0;
      if ( UnityEngine_Application__get_internetReachability(0LL) )
      {
        p_errorCode_5__3 = &this->fields._errorCode_5__3;
        p_errorLocalizeCode_5__4 = (BattleServantConfConponent_o *)&this->fields._errorLocalizeCode_5__4;
        p_errorAction_5__5 = &this->fields._errorAction_5__5;
        p_failData_5__6 = &this->fields._failData_5__6;
        p_responseList_5__7 = (BattleServantConfConponent_o *)&this->fields._responseList_5__7;
        goto LABEL_460;
      }
      v390 = (System_String_o *)StringLiteral_1;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v391 = LocalizationManager__Get((System_String_o *)StringLiteral_9250, 0LL);
      v392 = LocalizationManager__Get((System_String_o *)StringLiteral_9249, 0LL);
      v393 = LocalizationManager__Get((System_String_o *)StringLiteral_9248, 0LL);
      if ( !*p_work )
        goto LABEL_532;
      v394 = v393;
      if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))(*p_work)->klass->vtable._8_isBackgroundRequest.method)(
              *p_work,
              (*p_work)->klass->vtable._9_isShowConnect.methodPtr) & 1) != 0 )
      {
        v399 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v395, v396, v397, v398);
        System_Action___ctor(v399, (Il2CppObject *)_4__this, Method_NetworkManager__RequestCR_b__211_0__, 0LL);
        if ( !_4__this )
          goto LABEL_532;
        NetworkManager__WarningDialog(_4__this, v390, v391, 0LL, 1, v399, 0LL);
      }
      else
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v460 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v456, v457, v458, v459);
        ErrorDialog_ClickDelegate___ctor(
          v460,
          (Il2CppObject *)_4__this,
          Method_NetworkManager_OnClickErrorRetryDialog__,
          0LL);
        if ( !Instance )
          goto LABEL_532;
        CommonUI__OpenRetryDialog_18236304(Instance, v390, v391, v392, v394, v460, 0, 0LL);
      }
      return 0;
    case 1:
      delay = this->fields.delay;
      this->fields.__1__state = -1;
      if ( delay <= 0.0 )
        goto LABEL_25;
      v165 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForSeconds___ctor(v165, delay, 0LL);
      this->fields.__2__current = (Il2CppObject *)v165;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v165,
        v167,
        v168,
        v169,
        v170,
        v171,
        v172);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    case 2:
      this->fields.__1__state = -1;
LABEL_25:
      if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_DateTime_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      }
      dateData = System_DateTime__get_Now(0LL).fields.dateData;
      v808.fields.dateData = (uint64_t)&dateData;
      v173 = System_DateTime__ToUniversalTime(v808, 0LL).fields.dateData;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v809.fields.dateData = v173;
      this->fields._startTime_5__8 = NetworkManager__getTime_23684488(v809, 0LL);
      v174 = this->fields.work;
      if ( v174 )
      {
        v175 = *(&TopGameDataRequest_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v174->klass->_2.bitflags2 + 1) >= (unsigned int)v175
          && (TopGameDataRequest_c *)v174->klass->_2.typeHierarchy[v175 - 1] == TopGameDataRequest_TypeInfo )
        {
          LOBYTE(v174) = v174[1].klass;
        }
        else
        {
          LOBYTE(v174) = 0;
        }
      }
      this->fields._isNoRedirect_5__9 = (char)v174;
      v176 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v176 = ManagerConfig_TypeInfo;
      }
      static_fields = v176->static_fields;
      if ( static_fields->UseMock )
      {
        if ( (BYTE3(v176->vtable._0_Equals.methodPtr) & 4) != 0 && !v176->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v176);
          static_fields = ManagerConfig_TypeInfo->static_fields;
        }
        if ( static_fields->IsNetworkMock )
        {
          v178 = this->fields.work;
          if ( !v178 )
            goto LABEL_532;
          v179 = ((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))v178->klass->vtable._6_getMockURL.method)(
                   v178,
                   v178->klass->vtable._7_checkExpirationDate.methodPtr);
          if ( v179 )
          {
            v184 = (System_String_o *)v179;
            v185 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_B170CC(
                                                                  DelightWorks_Network_UnityWebRequestWWW_TypeInfo,
                                                                  v180,
                                                                  v181,
                                                                  v182,
                                                                  v183);
            DelightWorks_Network_UnityWebRequestWWW___ctor(v185, v184, 0LL);
            this->fields._www_5__10 = v185;
            p_www_5__10 = &this->fields._www_5__10;
            sub_B16F98(
              (BattleServantConfConponent_o *)p_www_5__10,
              (System_Int32_array **)v185,
              v187,
              v188,
              v189,
              v190,
              v191,
              v192);
            v193 = (System_Int32_array **)*p_www_5__10;
            *(p_www_5__10 - 12) = *p_www_5__10;
            sub_B16F98((BattleServantConfConponent_o *)(p_www_5__10 - 12), v193, v194, v195, v196, v197, v198, v199);
            *((_DWORD *)p_www_5__10 - 26) = 3;
            return 1;
          }
        }
LABEL_46:
        p_data_5__2 = &this->fields._data_5__2;
        if ( !this->fields._data_5__2 )
        {
          v201 = this->fields.work;
          if ( !v201 )
            goto LABEL_532;
          v202 = (System_Int32_array **)((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))v201->klass->vtable._5_getMockData.method)(
                                          v201,
                                          v201->klass->vtable._6_getMockURL.methodPtr);
          *p_data_5__2 = (System_String_o *)v202;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields._data_5__2, v202, v203, v204, v205, v206, v207, v208);
          if ( System_String__op_Equality(*p_data_5__2, (System_String_o *)StringLiteral_1, 0LL) )
          {
            v209 = this->fields.work;
            if ( !v209 )
              goto LABEL_532;
            if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))v209->klass->vtable._8_isBackgroundRequest.method)(
                    v209,
                    v209->klass->vtable._9_isShowConnect.methodPtr) & 1) == 0 )
            {
              v210 = this->fields.work;
              if ( !v210 )
                goto LABEL_532;
              if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))v210->klass->vtable._9_isShowConnect.method)(
                      v210,
                      v210->klass->vtable._10_requestCompleted.methodPtr) & 1) != 0 )
              {
                v211 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !v211 )
                  goto LABEL_532;
                CommonUI__SetConnect(v211, 0, 0LL);
              }
            }
            if ( !_4__this )
              goto LABEL_532;
            NetworkManager__OnEndCommunication(_4__this, this->fields.work, 0LL, 0LL);
            return 0;
          }
        }
        goto LABEL_134;
      }
      if ( this->fields._data_5__2 )
        goto LABEL_134;
      v212 = this->fields.work;
      if ( !v212 )
        goto LABEL_532;
      WWWForm = RequestBase__getWWWForm(v212, &authParams, 0LL);
      v218 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                             System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                                             v214,
                                                                                             v215,
                                                                                             v216,
                                                                                             v217);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v218,
        (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
      if ( !WWWForm )
        goto LABEL_532;
      headers = UnityEngine_WWWForm__get_headers(WWWForm, 0LL);
      if ( !headers )
        goto LABEL_532;
      System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v801,
        (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)headers,
        (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
      v805 = v801;
      while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                &v805,
                (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
      {
        key = v805.fields.current.fields.key;
        v220 = v805.fields.current.fields.value;
        if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Convert_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        }
        v222 = System_Convert__ToString_41756812((System_String_o *)key, 0LL);
        v223 = System_Convert__ToString_41756812((System_String_o *)v220, 0LL);
        if ( !v218 )
          sub_B170D4();
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          v218,
          (System_Xml_XmlQualifiedName_o *)v222,
          (System_Xml_Schema_XmlSchemaObject_o *)v223,
          (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
      }
      v802[0] = 731;
      v803 = 1;
      System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
        &v805,
        (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
      v803 = 0;
      v400 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v400 = NetworkManager_TypeInfo;
      }
      if ( v400->static_fields->userAgent )
      {
        if ( (BYTE3(v400->vtable._0_Equals.methodPtr) & 4) != 0 && !v400->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v400);
        if ( !v218 )
          goto LABEL_532;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          v218,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_15033,
          (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->userAgent,
          (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
        v400 = NetworkManager_TypeInfo;
      }
      if ( (BYTE3(v400->vtable._0_Equals.methodPtr) & 4) != 0 && !v400->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v400);
        v400 = NetworkManager_TypeInfo;
      }
      if ( v400->static_fields->sessionId )
      {
        if ( (BYTE3(v400->vtable._0_Equals.methodPtr) & 4) != 0 && !v400->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v400);
        if ( !v218 )
          goto LABEL_532;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          v218,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_4281,
          (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->sessionId,
          (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
        v400 = NetworkManager_TypeInfo;
      }
      v401 = authParams;
      if ( (BYTE3(v400->vtable._0_Equals.methodPtr) & 4) != 0 && !v400->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v400);
      AuthCode = NetworkManager__GetAuthCode(v401, 0LL);
      if ( AuthCode )
        UnityEngine_WWWForm__AddField(WWWForm, (System_String_o *)StringLiteral_16463, AuthCode, 0LL);
      v403 = this->fields.work;
      if ( !v403 )
        goto LABEL_532;
      v404 = ((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))v403->klass->vtable._4_getURL.method)(
               v403,
               v403->klass->vtable._5_getMockData.methodPtr);
      v405 = NetworkManager_TypeInfo;
      v406 = (System_String_o *)v404;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v405 = NetworkManager_TypeInfo;
      }
      if ( v405->static_fields->userId )
      {
        if ( !v406 )
          goto LABEL_532;
        v407 = System_String__IndexOf_43816080(v406, (System_String_o *)StringLiteral_1520, 0LL);
        v408 = NetworkManager_TypeInfo;
        if ( v407 >= 0 )
          v409 = &StringLiteral_440;
        else
          v409 = &StringLiteral_1520;
        v410 = (System_String_o *)*v409;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v408 = NetworkManager_TypeInfo;
        }
        v406 = System_String__Concat_43747144(
                 v406,
                 v410,
                 (System_String_o *)StringLiteral_16136,
                 v408->static_fields->userId,
                 0LL);
      }
      UnityEngine_WWWForm__get_data(WWWForm, 0LL);
      isNoRedirect_5__9 = this->fields._isNoRedirect_5__9;
      v416 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_B170CC(
                                                            DelightWorks_Network_UnityWebRequestWWW_TypeInfo,
                                                            v412,
                                                            v413,
                                                            v414,
                                                            v415);
      DelightWorks_Network_UnityWebRequestWWW___ctor_26504768(
        v416,
        v406,
        WWWForm,
        (System_Collections_Generic_Dictionary_string__string__o *)v218,
        isNoRedirect_5__9,
        0LL);
      v139 = &this->fields._www_5__10;
      this->fields._www_5__10 = v416;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._www_5__10,
        (System_Int32_array **)v416,
        v417,
        v418,
        v419,
        v420,
        v421,
        v422);
      v423 = this->fields.work;
      if ( !v423 )
        goto LABEL_220;
      v424 = *(&TopGameDataRequest_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v423->klass->_2.bitflags2 + 1) >= (unsigned int)v424
        && (TopGameDataRequest_c *)v423->klass->_2.typeHierarchy[v424 - 1] == TopGameDataRequest_TypeInfo )
      {
        v518 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v518 = ManagerConfig_TypeInfo;
        }
        p_GAME_DATA_TIMEOUT = &v518->static_fields->GAME_DATA_TIMEOUT;
      }
      else
      {
LABEL_220:
        v425 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v425 = ManagerConfig_TypeInfo;
        }
        p_GAME_DATA_TIMEOUT = &v425->static_fields->TIMEOUT;
      }
      this->fields._timeout_5__11 = *p_GAME_DATA_TIMEOUT;
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      timeout_5__11 = this->fields._timeout_5__11;
      this->fields._loadProgress_5__13 = 0.0;
      this->fields._requestTime_5__12 = unscaledTime + timeout_5__11;
      v433 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                  UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                  v429,
                                                  v430,
                                                  v431,
                                                  v432);
      UnityEngine_WaitForEndOfFrame___ctor(v433, 0LL);
      this->fields._wait_5__14 = v433;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._wait_5__14,
        (System_Int32_array **)v433,
        v434,
        v435,
        v436,
        v437,
        v438,
        v439);
LABEL_8:
      if ( !*v139 )
        goto LABEL_532;
      if ( (*v139)->fields._isDone_k__BackingField )
        goto LABEL_10;
      v224 = this->fields.work;
      if ( !v224 )
        goto LABEL_532;
      if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))v224->klass->vtable._8_isBackgroundRequest.method)(
              v224,
              v224->klass->vtable._9_isShowConnect.methodPtr) & 1) != 0 )
      {
        if ( !_4__this )
          goto LABEL_532;
        communicationWaitList = _4__this->fields.communicationWaitList;
        if ( !communicationWaitList )
          goto LABEL_532;
        if ( communicationWaitList->fields._size > 0 )
          goto LABEL_10;
      }
      if ( !*v139 )
        goto LABEL_532;
      progress_k__BackingField = (*v139)->fields._progress_k__BackingField;
      loadProgress_5__13 = this->fields._loadProgress_5__13;
      v234 = UnityEngine_Time__get_unscaledTime(0LL);
      if ( progress_k__BackingField != loadProgress_5__13 )
      {
        www_5__10 = this->fields._www_5__10;
        this->fields._requestTime_5__12 = v234 + this->fields._timeout_5__11;
        if ( !www_5__10 )
          goto LABEL_532;
        this->fields._loadProgress_5__13 = www_5__10->fields._progress_k__BackingField;
        goto LABEL_232;
      }
      if ( v234 < this->fields._requestTime_5__12 )
      {
LABEL_232:
        wait_5__14 = (Il2CppObject *)this->fields._wait_5__14;
        this->fields.__2__current = wait_5__14;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.__2__current,
          (System_Int32_array **)wait_5__14,
          v228,
          v229,
          v230,
          v231,
          v232,
          v233);
        this->fields.__1__state = 4;
        return 1;
      }
LABEL_10:
      v140 = *v139;
      if ( !*v139 )
        goto LABEL_532;
      if ( !v140->fields._isDone_k__BackingField )
      {
        v235 = this->fields.work;
        if ( !v235 )
          goto LABEL_532;
        if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))v235->klass->vtable._8_isBackgroundRequest.method)(
                v235,
                v235->klass->vtable._9_isShowConnect.methodPtr) & 1) == 0 )
          goto LABEL_116;
        if ( !_4__this )
          goto LABEL_532;
        v242 = _4__this->fields.communicationWaitList;
        if ( !v242 )
          goto LABEL_532;
        if ( v242->fields._size >= 1 )
        {
          v243 = (System_Int32_array **)StringLiteral_16517;
          this->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_16517;
          v244 = &this->fields._errorCode_5__3;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields._errorCode_5__3,
            v243,
            v236,
            v237,
            v238,
            v239,
            v240,
            v241);
          v251 = &StringLiteral_22223;
        }
        else
        {
LABEL_116:
          v274 = (System_Int32_array **)StringLiteral_17584;
          this->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_17584;
          v244 = &this->fields._errorCode_5__3;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields._errorCode_5__3,
            v274,
            v236,
            v237,
            v238,
            v239,
            v240,
            v241);
          v251 = &StringLiteral_21716;
        }
        v275 = (System_Int32_array **)*v251;
        v276 = v244 + 2;
        v244[2] = (struct System_String_o *)*v251;
        goto LABEL_118;
      }
      IsNullOrEmpty = System_String__IsNullOrEmpty(v140->fields._error_k__BackingField, 0LL);
      v148 = *v139;
      if ( !IsNullOrEmpty )
      {
        if ( !v148 )
          goto LABEL_532;
        error_k__BackingField = v148->fields._error_k__BackingField;
        this->fields._errorCode_5__3 = error_k__BackingField;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorCode_5__3,
          (System_Int32_array **)error_k__BackingField,
          v142,
          v143,
          v144,
          v145,
          v146,
          v147);
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
            if ( !*v139 )
              goto LABEL_532;
            DelightWorks_Network_UnityWebRequestWWW__ExceptionLog(*v139, 0LL);
          }
        }
        v259 = (System_Int32_array **)StringLiteral_21716;
        this->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_21716;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorAction_5__5,
          v259,
          v253,
          v254,
          v255,
          v256,
          v257,
          v258);
        v260 = this->fields._www_5__10;
        if ( !v260 )
          goto LABEL_532;
        responseHeaders_k__BackingField = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v260->fields._responseHeaders_k__BackingField;
        if ( !responseHeaders_k__BackingField )
          goto LABEL_532;
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
               responseHeaders_k__BackingField,
               (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1 )
          goto LABEL_119;
        if ( !*v139 )
          goto LABEL_532;
        v262 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*v139)->fields._responseHeaders_k__BackingField;
        if ( !v262 )
          goto LABEL_532;
        if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                v262,
                (System_Xml_XmlQualifiedName_o *)StringLiteral_12312,
                (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
          goto LABEL_119;
        if ( !*v139 )
          goto LABEL_532;
        v263 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)(*v139)->fields._responseHeaders_k__BackingField;
        if ( !v263 )
          goto LABEL_532;
        Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    v263,
                                    (System_Type_o *)StringLiteral_12312,
                                    (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        v266 = sub_B17014(char___TypeInfo, 1LL, v265);
        if ( !v266 )
          goto LABEL_532;
        v267 = (System_Int32_array **)v266;
        if ( !*(_DWORD *)(v266 + 24) )
          goto LABEL_595;
        *(_WORD *)(v266 + 32) = 32;
        if ( !Item )
          goto LABEL_532;
        v268 = System_String__Split_43804516(Item, (System_Char_array *)v266, 1, 0LL);
        if ( !v268 )
          goto LABEL_532;
        v269 = v268;
        if ( (int)v268->max_length < 2 )
          goto LABEL_119;
        v270 = v268->m_Items[0];
        if ( !v270 )
          goto LABEL_532;
        v266 = System_String__StartsWith(v270, (System_String_o *)StringLiteral_7070, 0LL);
        if ( (v266 & 1) == 0 )
          goto LABEL_119;
        if ( v269->max_length <= 1 )
          goto LABEL_595;
        v271 = v269->m_Items[1];
        if ( !v271 )
          goto LABEL_589;
        v272 = PrivateImplementationDetails___ComputeStringHash_21105248(v271, 0LL);
        if ( v272 > 0x434FEE0C )
        {
          if ( v272 <= 0xAA3008DB )
          {
            if ( v272 == -1456470200 )
            {
              if ( !System_String__op_Equality(v271, (System_String_o *)StringLiteral_1174, 0LL) )
                goto LABEL_589;
              v769 = &StringLiteral_9258;
            }
            else
            {
              if ( v272 != -1439692581 || !System_String__op_Equality(v271, (System_String_o *)StringLiteral_1172, 0LL) )
                goto LABEL_589;
              v769 = &StringLiteral_9263;
            }
            v788 = (struct System_String_o *)*v769;
            this->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v769;
            v789 = &this->fields._errorLocalizeCode_5__4;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields._errorLocalizeCode_5__4,
              (System_Int32_array **)v788,
              v245,
              v246,
              v247,
              v248,
              v249,
              v250);
            v275 = (System_Int32_array **)StringLiteral_18996;
LABEL_591:
            v276 = &this->fields._errorAction_5__5;
            v789[1] = (struct System_String_o *)v275;
            goto LABEL_118;
          }
          if ( v272 == -1372582105 )
          {
            if ( System_String__op_Equality(v271, (System_String_o *)StringLiteral_1177, 0LL) )
            {
              v790 = &StringLiteral_9262;
              goto LABEL_590;
            }
            goto LABEL_589;
          }
          if ( v272 != -1008248995 )
            goto LABEL_589;
          v780 = &StringLiteral_1141;
        }
        else
        {
          if ( v272 <= 0x2D98A5D6 )
          {
            if ( v272 == 731423408 )
            {
              v273 = &StringLiteral_1185;
              goto LABEL_588;
            }
            if ( v272 == 764978646 )
            {
              v273 = &StringLiteral_1187;
LABEL_588:
              System_String__op_Equality(v271, (System_String_o *)*v273, 0LL);
            }
LABEL_589:
            v790 = &StringLiteral_9259;
LABEL_590:
            v791 = (struct System_String_o *)*v790;
            this->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v790;
            v789 = &this->fields._errorLocalizeCode_5__4;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields._errorLocalizeCode_5__4,
              (System_Int32_array **)v791,
              v245,
              v246,
              v247,
              v248,
              v249,
              v250);
            v275 = (System_Int32_array **)StringLiteral_21716;
            goto LABEL_591;
          }
          if ( v272 == 781756265 )
          {
            v273 = &StringLiteral_1189;
            goto LABEL_588;
          }
          if ( v272 != 1129311756 )
            goto LABEL_589;
          v780 = &StringLiteral_1156;
        }
        if ( System_String__op_Equality(v271, (System_String_o *)*v780, 0LL) )
        {
          v276 = &this->fields._errorCode_5__3;
          v275 = 0LL;
          this->fields._errorCode_5__3 = 0LL;
LABEL_118:
          sub_B16F98((BattleServantConfConponent_o *)v276, v275, v245, v246, v247, v248, v249, v250);
          goto LABEL_119;
        }
        goto LABEL_589;
      }
      if ( !v148 )
        goto LABEL_532;
      if ( !this->fields._isNoRedirect_5__9 )
      {
        text = DelightWorks_Network_UnityWebRequestWWW__get_text(*v139, 0LL);
        this->fields._data_5__2 = text;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._data_5__2,
          (System_Int32_array **)text,
          v465,
          v466,
          v467,
          v468,
          v469,
          v470);
        v471 = NetworkManager_TypeInfo;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v471 = NetworkManager_TypeInfo;
        }
        if ( v471->static_fields->sessionId )
          goto LABEL_119;
        v472 = this->fields.work;
        if ( !v472 )
          goto LABEL_119;
        v473 = *(&TopLoginRequest_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v472->klass->_2.bitflags2 + 1) < (unsigned int)v473
          || (TopLoginRequest_c *)v472->klass->_2.typeHierarchy[v473 - 1] != TopLoginRequest_TypeInfo )
        {
          goto LABEL_119;
        }
        if ( !*v139 )
          goto LABEL_532;
        v474 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*v139)->fields._responseHeaders_k__BackingField;
        if ( !v474 )
          goto LABEL_532;
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
               v474,
               (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1 )
          goto LABEL_119;
        if ( !*v139 )
          goto LABEL_532;
        v475 = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)(*v139)->fields._responseHeaders_k__BackingField;
        if ( !v475 )
          goto LABEL_532;
        System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v801,
          v475,
          (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
        v805 = v801;
        while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                  &v805,
                  (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
          ;
        v802[0] = 1969;
        v476 = ++v803;
        System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
          &v805,
          (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
        if ( v476 && v802[v476 - 1] == 1969 )
          v803 = v476 - 1;
        if ( !*v139 )
          goto LABEL_532;
        v477 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*v139)->fields._responseHeaders_k__BackingField;
        if ( !v477 )
          goto LABEL_532;
        if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                v477,
                (System_Xml_XmlQualifiedName_o *)StringLiteral_12011,
                (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
          goto LABEL_119;
        if ( !*v139 )
          goto LABEL_532;
        v478 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)(*v139)->fields._responseHeaders_k__BackingField;
        if ( !v478 )
          goto LABEL_532;
        v479 = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    v478,
                                    (System_Type_o *)StringLiteral_12011,
                                    (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        v266 = sub_B17014(char___TypeInfo, 2LL, v480);
        if ( !v266 )
          goto LABEL_532;
        v481 = *(_DWORD *)(v266 + 24);
        v267 = (System_Int32_array **)v266;
        if ( v481 )
        {
          *(_WORD *)(v266 + 32) = 32;
          if ( v481 != 1 )
          {
            *(_WORD *)(v266 + 34) = 59;
            if ( !v479 )
              goto LABEL_532;
            v482 = System_String__Split_43804516(v479, (System_Char_array *)v266, 1, 0LL);
            v489 = NetworkManager_TypeInfo;
            v490 = v482;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v489 = NetworkManager_TypeInfo;
            }
            v491 = v489->static_fields;
            v492 = (System_Int32_array **)StringLiteral_1;
            v491->sessionId = (struct System_String_o *)StringLiteral_1;
            sub_B16F98((BattleServantConfConponent_o *)&v491->sessionId, v492, v483, v484, v485, v486, v487, v488);
            if ( !v490 )
              goto LABEL_532;
            max_length = v490->max_length;
            if ( max_length < 1 )
              goto LABEL_119;
            v494 = 0;
            while ( v494 < max_length )
            {
              v495 = &v490->obj.klass + (int)v494;
              v496 = (System_String_o *)v495[4];
              if ( !v496 )
                goto LABEL_532;
              if ( !System_String__StartsWith((System_String_o *)v495[4], (System_String_o *)StringLiteral_21344, 0LL) )
              {
                v497 = NetworkManager_TypeInfo;
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v497 = NetworkManager_TypeInfo;
                }
                v498 = (System_Int32_array **)System_String__Concat_43746016(
                                                v497->static_fields->sessionId,
                                                v496,
                                                (System_String_o *)StringLiteral_1260,
                                                0LL);
                v499 = NetworkManager_TypeInfo->static_fields;
                v499->sessionId = (struct System_String_o *)v498;
                sub_B16F98((BattleServantConfConponent_o *)&v499->sessionId, v498, v500, v501, v502, v503, v504, v505);
                max_length = v490->max_length;
                if ( (int)++v494 < max_length )
                  continue;
              }
              goto LABEL_119;
            }
          }
        }
LABEL_595:
        sub_B17100(v266, v267, v245);
        sub_B170A0();
      }
      DelightWorks_Network_UnityWebRequestWWW__Dispose(*v139, 0LL);
LABEL_119:
      if ( !*v139 )
        goto LABEL_532;
      v277 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*v139)->fields._responseHeaders_k__BackingField;
      if ( v277
        && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
             v277,
             (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1 )
      {
        if ( !*v139 )
          goto LABEL_532;
        v278 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*v139)->fields._responseHeaders_k__BackingField;
        if ( !v278 )
          goto LABEL_532;
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               v278,
               (System_Xml_XmlQualifiedName_o *)StringLiteral_15473,
               (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
        {
          if ( !*v139 )
            goto LABEL_532;
          v279 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)(*v139)->fields._responseHeaders_k__BackingField;
          if ( !v279 )
            goto LABEL_532;
          v280 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                   v279,
                   (System_Type_o *)StringLiteral_15473,
                   (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
          if ( !v280 )
            goto LABEL_532;
          v281 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v280->klass->vtable[3].method)(
                                      v280,
                                      v280->klass->vtable[4].methodPtr);
          v282 = System_Int64__Parse(v281, 0LL);
          v283 = NetworkManager_TypeInfo;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v283 = NetworkManager_TypeInfo;
          }
          v283->static_fields->serverTime = v282;
          v283->static_fields->serverOffsetTime = v283->static_fields->serverTime - this->fields._startTime_5__8;
          v283->static_fields->nowTime = -1LL;
        }
      }
      if ( !*v139 )
        goto LABEL_532;
      DelightWorks_Network_UnityWebRequestWWW__Dispose(*v139, 0LL);
      this->fields._www_5__10 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)v139, 0LL, v284, v285, v286, v287, v288, v289);
      this->fields._wait_5__14 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._wait_5__14, 0LL, v290, v291, v292, v293, v294, v295);
LABEL_134:
      p_errorCode_5__3 = &this->fields._errorCode_5__3;
      if ( this->fields._errorCode_5__3 )
        goto LABEL_141;
      if ( System_String__IsNullOrEmpty(this->fields._data_5__2, 0LL) )
      {
        v302 = (System_Int32_array **)StringLiteral_21032;
        this->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_21032;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorCode_5__3,
          v302,
          v296,
          v297,
          v298,
          v299,
          v300,
          v301);
        v303 = (System_Int32_array **)StringLiteral_9261;
        this->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9261;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorLocalizeCode_5__4,
          v303,
          v304,
          v305,
          v306,
          v307,
          v308,
          v309);
        v310 = (System_Int32_array **)StringLiteral_18996;
        this->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_18996;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorAction_5__5,
          v310,
          v311,
          v312,
          v313,
          v314,
          v315,
          v316);
        if ( this->fields._isNoRedirect_5__9 )
        {
          v323 = &this->fields._errorCode_5__3;
          v324 = 0LL;
          *p_errorCode_5__3 = 0LL;
LABEL_140:
          sub_B16F98((BattleServantConfConponent_o *)v323, v324, v317, v318, v319, v320, v321, v322);
        }
LABEL_141:
        v339 = 0;
        goto LABEL_142;
      }
      if ( System_String__op_Equality(this->fields._data_5__2, (System_String_o *)StringLiteral_7676, 0LL) )
      {
        v331 = (System_Int32_array **)StringLiteral_19767;
        this->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_19767;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorCode_5__3,
          v331,
          v325,
          v326,
          v327,
          v328,
          v329,
          v330);
        v332 = (System_Int32_array **)StringLiteral_9259;
        this->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9259;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorLocalizeCode_5__4,
          v332,
          v333,
          v334,
          v335,
          v336,
          v337,
          v338);
        v323 = &this->fields._errorAction_5__5;
        v324 = (System_Int32_array **)StringLiteral_21716;
        this->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_21716;
        goto LABEL_140;
      }
      data_5__2 = this->fields._data_5__2;
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      Dictionary = JsonManager__getDictionary(data_5__2, 0LL);
      if ( !Dictionary )
        goto LABEL_532;
      v369 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_21698,
              (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v440 = (System_Int32_array **)StringLiteral_21033;
        this->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_21033;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorCode_5__3,
          v440,
          v370,
          v371,
          v372,
          v373,
          v374,
          v375);
        v441 = (System_Int32_array **)StringLiteral_9259;
        this->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9259;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorLocalizeCode_5__4,
          v441,
          v442,
          v443,
          v444,
          v445,
          v446,
          v447);
        v448 = (System_Int32_array **)StringLiteral_21716;
        this->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_21716;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorAction_5__5,
          v448,
          v449,
          v450,
          v451,
          v452,
          v453,
          v454);
LABEL_227:
        v339 = 0;
        goto LABEL_519;
      }
      v376 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               v369,
                               (System_Type_o *)StringLiteral_21698,
                               (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v377 = (struct ResponseData_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                            v376,
                                            (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_ResponseData___);
      this->fields._responseList_5__7 = v377;
      v378 = &this->fields._responseList_5__7;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._responseList_5__7,
        (System_Int32_array **)v377,
        v379,
        v380,
        v381,
        v382,
        v383,
        v384);
      responseList_5__7 = this->fields._responseList_5__7;
      if ( !responseList_5__7 )
        goto LABEL_532;
      v386 = 0LL;
      while ( 1 )
      {
        v387 = responseList_5__7->max_length;
        if ( (int)v386 >= v387 )
          goto LABEL_227;
        if ( (unsigned int)v386 >= v387 )
          goto LABEL_595;
        v388 = &responseList_5__7->obj.klass + v386;
        v389 = (ResponseData_o *)v388[4];
        if ( !v389 )
          goto LABEL_532;
        v266 = ResponseData__checkError_30924960((ResponseData_o *)v388[4], 0LL);
        if ( (v266 & 1) == 0 )
          break;
        responseList_5__7 = *v378;
        ++v386;
        if ( !*v378 )
          goto LABEL_532;
      }
      v511 = sub_B17014(string___TypeInfo, 5LL, v245);
      if ( !v511 )
        goto LABEL_532;
      v517 = (System_String_array *)v511;
      v266 = StringLiteral_21699;
      if ( StringLiteral_21699 )
      {
        v266 = sub_B170BC(StringLiteral_21699, v517->obj.klass->_1.element_class);
        if ( !v266 )
          goto LABEL_596;
        v267 = (System_Int32_array **)StringLiteral_21699;
      }
      else
      {
        v267 = 0LL;
      }
      if ( !v517->max_length )
        goto LABEL_595;
      v517->m_Items[0] = (System_String_o *)v267;
      sub_B16F98((BattleServantConfConponent_o *)v517->m_Items, v267, v245, v512, v513, v514, v515, v516);
      nid = (System_Int32_array **)v389->fields.nid;
      if ( nid )
      {
        v266 = sub_B170BC(v389->fields.nid, v517->obj.klass->_1.element_class);
        if ( !v266 )
          goto LABEL_596;
      }
      if ( v517->max_length <= 1 )
        goto LABEL_595;
      v517->m_Items[1] = (System_String_o *)nid;
      sub_B16F98((BattleServantConfConponent_o *)&v517->m_Items[1], nid, v245, v658, v659, v660, v661, v662);
      v266 = StringLiteral_98;
      if ( StringLiteral_98 )
      {
        v266 = sub_B170BC(StringLiteral_98, v517->obj.klass->_1.element_class);
        if ( !v266 )
          goto LABEL_596;
        v267 = (System_Int32_array **)StringLiteral_98;
      }
      else
      {
        v267 = 0LL;
      }
      if ( v517->max_length <= 2 )
        goto LABEL_595;
      v517->m_Items[2] = (System_String_o *)v267;
      sub_B16F98((BattleServantConfConponent_o *)&v517->m_Items[2], v267, v245, v664, v665, v666, v667, v668);
      resCode = (System_Int32_array **)v389->fields.resCode;
      if ( resCode )
      {
        v266 = sub_B170BC(v389->fields.resCode, v517->obj.klass->_1.element_class);
        if ( !v266 )
        {
LABEL_596:
          sub_B170F4(v266);
          sub_B170A0();
        }
      }
      if ( v517->max_length <= 3 )
        goto LABEL_595;
      v517->m_Items[3] = (System_String_o *)resCode;
      sub_B16F98((BattleServantConfConponent_o *)&v517->m_Items[3], resCode, v245, v669, v670, v671, v672, v673);
      v266 = StringLiteral_651;
      if ( StringLiteral_651 )
      {
        v266 = sub_B170BC(StringLiteral_651, v517->obj.klass->_1.element_class);
        if ( v266 )
        {
          v267 = (System_Int32_array **)StringLiteral_651;
          goto LABEL_495;
        }
        goto LABEL_596;
      }
      v267 = 0LL;
LABEL_495:
      if ( v517->max_length <= 4 )
        goto LABEL_595;
      v517->m_Items[4] = (System_String_o *)v267;
      sub_B16F98((BattleServantConfConponent_o *)&v517->m_Items[4], v267, v245, v675, v676, v677, v678, v679);
      v680 = System_String__Concat_43823856(v517, 0LL);
      this->fields._errorCode_5__3 = v680;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._errorCode_5__3,
        (System_Int32_array **)v680,
        v681,
        v682,
        v683,
        v684,
        v685,
        v686);
      v691 = (ResponseFailData_o *)sub_B170CC(ResponseFailData_TypeInfo, v687, v688, v689, v690);
      ResponseFailData___ctor(v691, v389, 0LL);
      v692 = &this->fields._failData_5__6;
      this->fields._failData_5__6 = v691;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._failData_5__6,
        (System_Int32_array **)v691,
        v693,
        v694,
        v695,
        v696,
        v697,
        v698);
      failData_5__6 = this->fields._failData_5__6;
      if ( !failData_5__6 )
        goto LABEL_532;
      v700 = System_String__IsNullOrEmpty(failData_5__6->fields.action, 0LL);
      p_action = (struct System_String_o **)&StringLiteral_21716;
      if ( !v700 )
      {
        if ( !*v692 )
          goto LABEL_532;
        p_action = &(*v692)->fields.action;
      }
      v708 = *p_action;
      this->fields._errorAction_5__5 = *p_action;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._errorAction_5__5,
        (System_Int32_array **)v708,
        v701,
        v702,
        v703,
        v704,
        v705,
        v706);
      v709 = this->fields.work;
      if ( !v709 )
      {
        v712 = 0;
        goto LABEL_518;
      }
      v710 = PurchaseByBank_UnityIap_Request_TypeInfo;
      v711 = *(&PurchaseByBank_UnityIap_Request_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v709->klass->_2.bitflags2 + 1) >= (unsigned int)v711
        && (PurchaseByBank_UnityIap_Request_c *)v709->klass->_2.typeHierarchy[v711 - 1] == PurchaseByBank_UnityIap_Request_TypeInfo )
      {
        if ( !*v692 )
          goto LABEL_532;
        v779 = System_String__op_Equality((*v692)->fields.action, (System_String_o *)StringLiteral_21716, 0LL);
        v709 = this->fields.work;
        v712 = v779;
        if ( !v709 )
          goto LABEL_518;
        v710 = PurchaseByBank_UnityIap_Request_TypeInfo;
      }
      else
      {
        v712 = 0;
      }
      klass = v709->klass;
      v714 = *(&v710->_2.bitflags2 + 1);
      if ( *(&klass->_2.bitflags2 + 1) < (unsigned int)v714
        || (PurchaseByBank_UnityIap_Request_c *)klass->_2.typeHierarchy[v714 - 1] != v710 )
      {
LABEL_518:
        v339 = v712 != 0;
        goto LABEL_519;
      }
      v715 = *v378;
      v339 = v712 != 0;
      if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
      }
      v716 = ResponseCommandKind__SearchData(11, v715, 0LL);
      if ( v716 )
      {
        fail = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v716->fields.fail;
        if ( fail )
        {
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                 fail,
                 (System_Xml_XmlQualifiedName_o *)StringLiteral_21706,
                 &v804,
                 (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
          {
            if ( !v804 )
              goto LABEL_532;
            v718 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))v804->klass->vtable._3_ToString.method)(
                                        v804,
                                        v804->klass->vtable._4_OnAdd.methodPtr);
            if ( v718 )
            {
              v719 = v718;
              if ( System_String__op_Equality(v718, (System_String_o *)StringLiteral_21359, 0LL)
                || System_String__op_Equality(v719, (System_String_o *)StringLiteral_17135, 0LL) )
              {
                v726 = (System_Int32_array **)StringLiteral_22234;
                this->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22234;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&this->fields._errorAction_5__5,
                  v726,
                  v720,
                  v721,
                  v722,
                  v723,
                  v724,
                  v725);
              }
            }
          }
        }
      }
LABEL_519:
      if ( !*p_errorCode_5__3 )
      {
        v266 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v369,
                 (System_Xml_XmlQualifiedName_o *)StringLiteral_17105,
                 (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( (v266 & 1) != 0 )
        {
          v727 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          v728 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                   v369,
                                   (System_Type_o *)StringLiteral_17105,
                                   (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v727 )
            goto LABEL_532;
          DataManager__updateJsonData((DataManager_o *)v727, v728, 0LL);
        }
        v729 = this->fields._responseList_5__7;
        if ( v729 )
        {
          v730 = 0LL;
          while ( 1 )
          {
            v731 = v729->max_length;
            if ( (__int64)v730 >= (int)v731 )
              goto LABEL_142;
            if ( v730 >= v731 )
              goto LABEL_595;
            v732 = v729->m_Items[v730];
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            v266 = NetworkManager__ExecuteCommand(v732, 0LL);
            if ( (_DWORD)v266 )
              break;
            v729 = this->fields._responseList_5__7;
            ++v730;
            if ( !v729 )
              goto LABEL_532;
          }
          if ( v732 )
          {
            v733 = System_String__Concat_43743732((System_String_o *)StringLiteral_21700, v732->fields.nid, 0LL);
            this->fields._errorCode_5__3 = v733;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields._errorCode_5__3,
              (System_Int32_array **)v733,
              v734,
              v735,
              v736,
              v737,
              v738,
              v739);
            v744 = (ResponseFailData_o *)sub_B170CC(ResponseFailData_TypeInfo, v740, v741, v742, v743);
            ResponseFailData___ctor(v744, v732, 0LL);
            v745 = &this->fields._failData_5__6;
            this->fields._failData_5__6 = v744;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields._failData_5__6,
              (System_Int32_array **)v744,
              v746,
              v747,
              v748,
              v749,
              v750,
              v751);
            v752 = this->fields._failData_5__6;
            if ( v752 )
            {
              if ( System_String__IsNullOrEmpty(v752->fields.action, 0LL) )
              {
                v759 = (struct System_String_o **)&StringLiteral_21716;
              }
              else
              {
                if ( !*v745 )
                  goto LABEL_532;
                v759 = &(*v745)->fields.action;
              }
              v760 = *v759;
              this->fields._errorAction_5__5 = *v759;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields._errorAction_5__5,
                (System_Int32_array **)v760,
                v753,
                v754,
                v755,
                v756,
                v757,
                v758);
              goto LABEL_142;
            }
          }
        }
LABEL_532:
        sub_B170D4();
      }
LABEL_142:
      p_work = &this->fields.work;
      v340 = this->fields.work;
      if ( !v340 )
        goto LABEL_532;
      if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))v340->klass->vtable._8_isBackgroundRequest.method)(
              v340,
              v340->klass->vtable._9_isShowConnect.methodPtr) & 1) == 0 )
      {
        if ( !*p_work )
          goto LABEL_532;
        if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))(*p_work)->klass->vtable._9_isShowConnect.method)(
                *p_work,
                (*p_work)->klass->vtable._10_requestCompleted.methodPtr) & 1) != 0 )
        {
          v347 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !v347 )
            goto LABEL_532;
          CommonUI__SetConnect(v347, 0, 0LL);
        }
      }
      if ( !*p_errorCode_5__3 )
      {
        if ( !_4__this )
          goto LABEL_532;
        NetworkManager__OnEndCommunication(_4__this, this->fields.work, this->fields._responseList_5__7, 0LL);
LABEL_467:
        v655 = (System_Int32_array **)this->fields._data_5__2;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        if ( !byte_40F83B0 )
        {
          sub_B16FFC(&NetworkManager_TypeInfo, v364);
          byte_40F83B0 = 1;
        }
        v656 = NetworkManager_TypeInfo;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v656 = NetworkManager_TypeInfo;
        }
        p_errorDialogResponseData = (BattleServantConfConponent_o *)&v656->static_fields->errorDialogResponseData;
        p_errorDialogResponseData->klass = (BattleServantConfConponent_c *)v655;
        sub_B16F98(p_errorDialogResponseData, v655, v128, v129, v130, v131, v132, v133);
        return 0;
      }
      p_responseList_5__7 = (BattleServantConfConponent_o *)&this->fields._responseList_5__7;
      v348 = (System_Int32_array **)this->fields._responseList_5__7;
      if ( !_4__this )
        goto LABEL_532;
      _4__this->fields.communicationWorkResponseList = (struct ResponseData_array *)v348;
      sub_B16F98(
        (BattleServantConfConponent_o *)&_4__this->fields.communicationWorkResponseList,
        v348,
        v341,
        v342,
        v343,
        v344,
        v345,
        v346);
      this->fields._responseList_5__7 = 0LL;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._responseList_5__7,
        0LL,
        v349,
        v350,
        v351,
        v352,
        v353,
        v354);
      p_errorLocalizeCode_5__4 = (BattleServantConfConponent_o *)&this->fields._errorLocalizeCode_5__4;
      errorLocalizeCode_5__4 = this->fields._errorLocalizeCode_5__4;
      if ( errorLocalizeCode_5__4 )
      {
        v363 = (System_String_o *)StringLiteral_1;
        goto LABEL_309;
      }
      errorAction_5__5 = this->fields._errorAction_5__5;
      if ( !errorAction_5__5 )
        goto LABEL_599;
      if ( System_String__op_Equality(this->fields._errorAction_5__5, (System_String_o *)StringLiteral_22223, 0LL)
        || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22234, 0LL) )
      {
        v366 = (System_Int32_array ***)&StringLiteral_9260;
LABEL_307:
        v520 = *v366;
        p_errorLocalizeCode_5__4->klass = (BattleServantConfConponent_c *)*v366;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorLocalizeCode_5__4,
          v520,
          v356,
          v357,
          v358,
          v359,
          v360,
          v361);
        goto LABEL_308;
      }
      if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_21716, 0LL)
        || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_21667, 0LL) )
      {
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        }
        if ( !byte_40F7DF6 )
        {
          sub_B16FFC(&ManagementManager_TypeInfo, v506);
          byte_40F7DF6 = 1;
        }
        v507 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v507 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v507->static_fields->isDuringStartup;
        v509 = &StringLiteral_9250;
        v510 = &StringLiteral_9264;
LABEL_304:
        if ( isDuringStartup )
          v366 = (System_Int32_array ***)v509;
        else
          v366 = (System_Int32_array ***)v510;
        goto LABEL_307;
      }
      if ( !System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_18995, 0LL)
        && !System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_21650, 0LL) )
      {
LABEL_599:
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        }
        if ( !byte_40F7DF6 )
        {
          sub_B16FFC(&ManagementManager_TypeInfo, v355);
          byte_40F7DF6 = 1;
        }
        v519 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v519 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v519->static_fields->isDuringStartup;
        v509 = (__int64 *)&StringLiteral_9247;
        v510 = &StringLiteral_9261;
        goto LABEL_304;
      }
LABEL_308:
      errorLocalizeCode_5__4 = (System_String_o *)p_errorLocalizeCode_5__4->klass;
      v363 = (System_String_o *)StringLiteral_1;
      detail = (System_String_o *)StringLiteral_1;
      if ( p_errorLocalizeCode_5__4->klass )
      {
LABEL_309:
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        detail = LocalizationManager__Get(errorLocalizeCode_5__4, 0LL);
      }
      p_failData_5__6 = &this->fields._failData_5__6;
      v522 = this->fields._failData_5__6;
      if ( v522 )
      {
        v523 = System_String__IsNullOrEmpty(v522->fields.title, 0LL);
        v524 = *p_failData_5__6;
        if ( v523 )
        {
          if ( !v524 )
            goto LABEL_532;
        }
        else
        {
          if ( !v524 )
            goto LABEL_532;
          v363 = v524->fields.title;
        }
        if ( !System_String__IsNullOrEmpty(v524->fields.detail, 0LL) )
        {
          if ( !*p_failData_5__6 )
            goto LABEL_532;
          detail = (*p_failData_5__6)->fields.detail;
        }
        if ( !System_String__IsNullOrEmpty(detail, 0LL) )
        {
          if ( !*p_failData_5__6 )
            goto LABEL_532;
          if ( (*p_failData_5__6)->fields.csId )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v525 = LocalizationManager__Get((System_String_o *)StringLiteral_9251, 0LL);
            if ( !*p_failData_5__6 )
              goto LABEL_532;
            v526 = System_String__Format(v525, (Il2CppObject *)(*p_failData_5__6)->fields.csId, 0LL);
            detail = System_String__Concat_43746016(detail, (System_String_o *)StringLiteral_26, v526, 0LL);
          }
        }
        if ( !*p_failData_5__6 )
          goto LABEL_532;
        value = (*p_failData_5__6)->fields.url;
      }
      else
      {
        value = 0LL;
      }
      title = v363;
      v800 = _4__this;
      if ( !*p_work )
        goto LABEL_532;
      v527 = &this->fields._errorAction_5__5;
      if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))(*p_work)->klass->vtable._8_isBackgroundRequest.method)(
              *p_work,
              (*p_work)->klass->vtable._9_isShowConnect.methodPtr) & 1) == 0 )
        goto LABEL_341;
      v528 = *v527;
      if ( !*v527 )
        goto LABEL_456;
      if ( !System_String__op_Equality(*v527, (System_String_o *)StringLiteral_22223, 0LL)
        && !System_String__op_Equality(v528, (System_String_o *)StringLiteral_22234, 0LL)
        && !System_String__op_Equality(v528, (System_String_o *)StringLiteral_21716, 0LL)
        && !System_String__op_Equality(v528, (System_String_o *)StringLiteral_21667, 0LL)
        || (v529 = NetworkManager__OnBackgroundErrorCommunication(
                     v800,
                     v800->fields.communicationWork,
                     *p_errorCode_5__3,
                     0,
                     0LL),
            result = 0,
            !v529) )
      {
LABEL_341:
        v530 = *v527;
        if ( !*v527 )
          goto LABEL_456;
        v531 = PrivateImplementationDetails___ComputeStringHash_21105248(*v527, 0LL);
        if ( v531 <= 0xA56F89EB )
        {
          if ( v531 <= 0x43CDBBC3 )
          {
            if ( v531 != 1019014393 )
            {
              if ( v531 == 1062826843 )
              {
                if ( System_String__op_Equality(v530, (System_String_o *)StringLiteral_18996, 0LL) )
                {
                  v563 = NetworkManager_TypeInfo;
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    v563 = NetworkManager_TypeInfo;
                  }
                  v563->static_fields->isRebootBlock = 1;
                  v564 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v559, v560, v561, v562);
                  System_Action___ctor(v564, (Il2CppObject *)v800, Method_NetworkManager_OnClickErrorReboot__, 0LL);
                  NetworkManager__ErrorDialog(v800, title, detail, value, v564, 0LL);
                  goto LABEL_458;
                }
              }
              else if ( v531 == 1137556419
                     && System_String__op_Equality(v530, (System_String_o *)StringLiteral_22234, 0LL) )
              {
                NetworkManager__OnClickErrorStay(v800, 0LL);
                goto LABEL_458;
              }
              goto LABEL_456;
            }
            if ( !System_String__op_Equality(v530, (System_String_o *)StringLiteral_21667, 0LL) )
              goto LABEL_456;
            if ( !*p_failData_5__6 )
              goto LABEL_532;
            cancleTxta = (*p_failData_5__6)->fields.errorType;
            v573 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v569, v570, v571, v572);
            v574 = &Method_NetworkManager_OnClickReloadCache__;
            goto LABEL_544;
          }
          if ( v531 <= 0x9918C6CA )
          {
            if ( v531 == -1726429494 )
            {
              if ( System_String__op_Equality(v530, (System_String_o *)StringLiteral_19810, 0LL) )
              {
                v576 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                valuea = LocalizationManager__Get((System_String_o *)StringLiteral_9266, 0LL);
                cancleTxtb = LocalizationManager__Get((System_String_o *)StringLiteral_9265, 0LL);
                v581 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                v577,
                                                                v578,
                                                                v579,
                                                                v580);
                CommonConfirmDialog_ClickDelegate___ctor(
                  v581,
                  (Il2CppObject *)v800,
                  Method_NetworkManager_OnClickUserDelete__,
                  0LL);
                if ( !v576 )
                  goto LABEL_532;
                CommonUI__OpenConfirmDialog_18236860(v576, title, detail, valuea, cancleTxtb, v581, 0, 0, 0, 0LL);
                goto LABEL_458;
              }
              goto LABEL_456;
            }
            if ( v531 == 2106643173 && System_String__op_Equality(v530, (System_String_o *)StringLiteral_21650, 0LL) )
            {
              if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleData_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
              }
              BattleData__deleteSaveData(0LL);
              BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
              v543 = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
              if ( !v543 )
                goto LABEL_532;
              ServantAssetLoadManager__EndRetryTransition(v543, 0LL);
              if ( System_String__IsNullOrEmpty(detail, 0LL) && System_String__IsNullOrEmpty(value, 0LL) )
              {
                NetworkManager__OnClickRefreshTerminal(v800, 0LL);
                goto LABEL_458;
              }
              if ( !*p_failData_5__6 )
                goto LABEL_532;
              cancleTxta = (*p_failData_5__6)->fields.errorType;
              v573 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v544, v545, v546, v547);
              v574 = &Method_NetworkManager_OnClickRefreshTerminal__;
              goto LABEL_544;
            }
LABEL_456:
            v605 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v610 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v606, v607, v608, v609);
            ErrorDialog_ClickDelegate___ctor(
              v610,
              (Il2CppObject *)v800,
              Method_NetworkManager_OnClickErrorDialog__,
              0LL);
            if ( !v605 )
              goto LABEL_532;
            CommonUI__OpenErrorDialog(v605, title, detail, v610, 0, 0LL);
            goto LABEL_458;
          }
          if ( v531 != -1577396083 )
          {
            if ( v531 != -1519416853 || !System_String__op_Equality(v530, (System_String_o *)StringLiteral_18995, 0LL) )
              goto LABEL_456;
            v549 = NetworkManager_TypeInfo;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v549 = NetworkManager_TypeInfo;
            }
            v549->static_fields->isRebootBlock = 1;
            if ( System_String__IsNullOrEmpty(detail, 0LL) && System_String__IsNullOrEmpty(value, 0LL) )
            {
              NetworkManager__OnClickErrorTerminal(v800, 0LL);
              goto LABEL_458;
            }
            if ( !*p_failData_5__6 )
              goto LABEL_532;
            cancleTxta = (*p_failData_5__6)->fields.errorType;
            v573 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v550, v551, v552, v553);
            v574 = &Method_NetworkManager_OnClickErrorTerminal__;
            goto LABEL_544;
          }
          if ( !System_String__op_Equality(v530, (System_String_o *)StringLiteral_17971, 0LL) )
            goto LABEL_456;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          NetworkManager__DeleteSignupData(0LL);
          goto LABEL_449;
        }
        if ( v531 > 0xCC10A7C9 )
        {
          if ( v531 <= 0xDA79AAB9 )
          {
            if ( v531 == -809642680 )
            {
              if ( System_String__op_Equality(v530, (System_String_o *)StringLiteral_21629, 0LL) )
              {
                v582 = *p_failData_5__6;
                if ( !*p_failData_5__6 )
                  goto LABEL_532;
                sandboxDomain = v582->fields.sandboxDomain;
                sandboxSeurity = v582->fields.sandboxSeurity;
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                NetworkManager__SetGameServerRedirect(sandboxDomain, sandboxSeurity, 0LL);
                if ( !*p_failData_5__6 )
                  goto LABEL_532;
                sandboxAssetsDomain = (System_Int32_array **)(*p_failData_5__6)->fields.sandboxAssetsDomain;
                if ( !byte_40F83AE )
                {
                  sub_B16FFC(&NetworkManager_TypeInfo, v585);
                  byte_40F83AE = 1;
                }
                v593 = NetworkManager_TypeInfo;
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v593 = NetworkManager_TypeInfo;
                }
                v594 = v593->static_fields;
                v594->dataServerRedirectAddress = (struct System_String_o *)sandboxAssetsDomain;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v594->dataServerRedirectAddress,
                  sandboxAssetsDomain,
                  v586,
                  v587,
                  v588,
                  v589,
                  v590,
                  v591);
                if ( !*p_failData_5__6 )
                  goto LABEL_532;
                sandboxWebviewDomain = (System_Int32_array **)(*p_failData_5__6)->fields.sandboxWebviewDomain;
                if ( !byte_40F83AF )
                {
                  sub_B16FFC(&NetworkManager_TypeInfo, v595);
                  byte_40F83AF = 1;
                }
                v603 = NetworkManager_TypeInfo;
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v603 = NetworkManager_TypeInfo;
                }
                v604 = v603->static_fields;
                v604->webServerRedirectAddress = (struct System_String_o *)sandboxWebviewDomain;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v604->webServerRedirectAddress,
                  sandboxWebviewDomain,
                  v596,
                  v597,
                  v598,
                  v599,
                  v600,
                  v601);
                NetworkManager__SetServerSetting_23696028(v800, 0LL);
                goto LABEL_458;
              }
            }
            else if ( v531 == -629560647
                   && System_String__op_Equality(v530, (System_String_o *)StringLiteral_21716, 0LL) )
            {
              if ( !*p_work )
                goto LABEL_532;
              if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))(*p_work)->klass->vtable._13_isAutoRetryRequest.method)(
                      *p_work,
                      (*p_work)->klass->vtable._14_errorRequest.methodPtr) & 1) != 0 )
              {
                p_errorAction_5__5 = &this->fields._errorAction_5__5;
                if ( NetworkManager__OnErrorCommunication(v800, v800->fields.communicationWork, *p_errorCode_5__3, 0LL) )
                  return 0;
                goto LABEL_459;
              }
              if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ManagementManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              }
              if ( !byte_40F7DF6 )
              {
                sub_B16FFC(&ManagementManager_TypeInfo, v548);
                byte_40F7DF6 = 1;
              }
              v770 = ManagementManager_TypeInfo;
              if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ManagementManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                v770 = ManagementManager_TypeInfo;
              }
              v771 = v770->static_fields->isDuringStartup;
              v772 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( v771 )
              {
                v777 = (CommonUI_o *)v772;
                v778 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(
                                                        ErrorDialog_ClickDelegate_TypeInfo,
                                                        v773,
                                                        v774,
                                                        v775,
                                                        v776);
                ErrorDialog_ClickDelegate___ctor(
                  v778,
                  (Il2CppObject *)v800,
                  Method_NetworkManager_OnClickErrorRetryDialog__,
                  0LL);
                if ( !v777 )
                  goto LABEL_532;
                CommonUI__OpenRetryBootDialog(v777, title, detail, v778, 0, 0LL);
              }
              else
              {
                v781 = (CommonUI_o *)v772;
                if ( v339 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  valueb = LocalizationManager__Get((System_String_o *)StringLiteral_3256, 0LL);
                  cancleTxtc = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
                  v786 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(
                                                          ErrorDialog_ClickDelegate_TypeInfo,
                                                          v782,
                                                          v783,
                                                          v784,
                                                          v785);
                  ErrorDialog_ClickDelegate___ctor(
                    v786,
                    (Il2CppObject *)v800,
                    Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__,
                    0LL);
                  if ( !v781 )
                    goto LABEL_532;
                  CommonUI__OpenRetryDialog_18236304(v781, title, detail, valueb, cancleTxtc, v786, 0, 0LL);
                }
                else
                {
                  v787 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(
                                                          ErrorDialog_ClickDelegate_TypeInfo,
                                                          v773,
                                                          v774,
                                                          v775,
                                                          v776);
                  ErrorDialog_ClickDelegate___ctor(
                    v787,
                    (Il2CppObject *)v800,
                    Method_NetworkManager_OnClickErrorRetryDialog__,
                    0LL);
                  if ( !v781 )
                    goto LABEL_532;
                  CommonUI__OpenRetryDialog(v781, title, detail, v787, 0, 0LL);
                }
              }
LABEL_458:
              p_errorAction_5__5 = &this->fields._errorAction_5__5;
LABEL_459:
              p_responseList_5__7->klass = 0LL;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields._responseList_5__7,
                0LL,
                v532,
                v533,
                v534,
                v535,
                v536,
                v537);
              if ( System_String__op_Equality(*p_errorAction_5__5, (System_String_o *)StringLiteral_21629, 0LL) )
              {
LABEL_460:
                this->fields._data_5__2 = 0LL;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&this->fields._data_5__2,
                  0LL,
                  v128,
                  v129,
                  v130,
                  v131,
                  v132,
                  v133);
                this->fields._errorCode_5__3 = 0LL;
                sub_B16F98((BattleServantConfConponent_o *)p_errorCode_5__3, 0LL, v611, v612, v613, v614, v615, v616);
                this->fields._errorLocalizeCode_5__4 = 0LL;
                sub_B16F98(p_errorLocalizeCode_5__4, 0LL, v617, v618, v619, v620, v621, v622);
                this->fields._errorAction_5__5 = 0LL;
                sub_B16F98((BattleServantConfConponent_o *)p_errorAction_5__5, 0LL, v623, v624, v625, v626, v627, v628);
                this->fields._failData_5__6 = 0LL;
                sub_B16F98((BattleServantConfConponent_o *)p_failData_5__6, 0LL, v629, v630, v631, v632, v633, v634);
                this->fields._responseList_5__7 = 0LL;
                sub_B16F98(p_responseList_5__7, 0LL, v635, v636, v637, v638, v639, v640);
                v641 = this->fields.work;
                if ( !v641 )
                  goto LABEL_532;
                if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))v641->klass->vtable._8_isBackgroundRequest.method)(
                        v641,
                        v641->klass->vtable._9_isShowConnect.methodPtr) & 1) != 0 )
                  goto LABEL_466;
                if ( !*p_work )
                  goto LABEL_532;
                if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))(*p_work)->klass->vtable._9_isShowConnect.method)(
                        *p_work,
                        (*p_work)->klass->vtable._10_requestCompleted.methodPtr) & 1) == 0 )
                {
LABEL_466:
                  v647 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                              UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                              v642,
                                                              v643,
                                                              v644,
                                                              v645);
                  UnityEngine_WaitForEndOfFrame___ctor(v647, 0LL);
                  this->fields.__2__current = (Il2CppObject *)v647;
                  v648 = &this->fields.__2__current;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)v648,
                    (System_Int32_array **)v647,
                    v649,
                    v650,
                    v651,
                    v652,
                    v653,
                    v654);
                  result = 1;
                  *((_DWORD *)v648 - 2) = 1;
                  return result;
                }
                v646 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( v646 )
                {
                  CommonUI__SetConnect(v646, 1, 0LL);
                  goto LABEL_466;
                }
                goto LABEL_532;
              }
              goto LABEL_467;
            }
            goto LABEL_456;
          }
          if ( v531 == -258062273 )
          {
            if ( System_String__op_Equality(v530, (System_String_o *)StringLiteral_19809, 0LL) )
            {
              if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleData_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
              }
              BattleData__deleteSaveData(0LL);
              NetworkManager__OnEndCommunication(
                v800,
                v800->fields.communicationWork,
                v800->fields.communicationWorkResponseList,
                0LL);
              goto LABEL_458;
            }
            goto LABEL_456;
          }
          if ( v531 != -193734025 || !System_String__op_Equality(v530, (System_String_o *)StringLiteral_17811, 0LL) )
            goto LABEL_456;
          v554 = NetworkManager_TypeInfo;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v554 = NetworkManager_TypeInfo;
          }
          v554->static_fields->isRebootBlock = 1;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          DataManager__ClearCacheAll(0LL);
        }
        else
        {
          if ( v531 != -1105950412 )
          {
            if ( v531 != -969204192 )
            {
              if ( v531 != -871323703 || !System_String__op_Equality(v530, (System_String_o *)StringLiteral_16311, 0LL) )
                goto LABEL_456;
              if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ManagementManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              }
              ManagementManager__RebootCacheClear(0LL);
              v542 = NetworkManager_TypeInfo;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v542 = NetworkManager_TypeInfo;
              }
              v542->static_fields->isRebootBlock = 1;
              if ( *p_failData_5__6 )
                cancleTxt = (*p_failData_5__6)->fields.errorType;
              else
                cancleTxt = 0;
              v768 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v538, v539, v540, v541);
              System_Action___ctor(v768, (Il2CppObject *)v800, Method_NetworkManager_OnClickStore__, 0LL);
              v763 = value;
              v762 = title;
              v764 = cancleTxt;
              v765 = v800;
              v766 = detail;
              v767 = v768;
LABEL_545:
              NetworkManager__WarningDialog(v765, v762, v766, v763, v764, v767, 0LL);
              goto LABEL_458;
            }
            if ( !System_String__op_Equality(v530, (System_String_o *)StringLiteral_22223, 0LL) )
              goto LABEL_456;
LABEL_449:
            if ( !*p_failData_5__6 )
              goto LABEL_532;
            cancleTxta = (*p_failData_5__6)->fields.errorType;
            v573 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v565, v566, v567, v568);
            v574 = &Method_NetworkManager_OnClickErrorStay__;
            goto LABEL_544;
          }
          if ( !System_String__op_Equality(v530, (System_String_o *)StringLiteral_20279, 0LL) )
            goto LABEL_456;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          ManagementManager__RebootCacheClear(0LL);
          v575 = NetworkManager_TypeInfo;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v575 = NetworkManager_TypeInfo;
          }
          v575->static_fields->isRebootBlock = 1;
        }
        if ( !*p_failData_5__6 )
          goto LABEL_532;
        cancleTxta = (*p_failData_5__6)->fields.errorType;
        v573 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v555, v556, v557, v558);
        v574 = &Method_NetworkManager_OnClickErrorReboot__;
LABEL_544:
        v761 = v573;
        System_Action___ctor(v573, (Il2CppObject *)v800, *v574, 0LL);
        v763 = value;
        v762 = title;
        v764 = cancleTxta;
        v765 = v800;
        v766 = detail;
        v767 = v761;
        goto LABEL_545;
      }
      return result;
    case 3:
      v150 = &this->fields._www_5__10;
      v149 = this->fields._www_5__10;
      this->fields.__1__state = -1;
      if ( !v149 )
        goto LABEL_532;
      if ( !System_String__IsNullOrEmpty(v149->fields._error_k__BackingField, 0LL) )
        goto LABEL_21;
      if ( !*v150 )
        goto LABEL_532;
      v151 = DelightWorks_Network_UnityWebRequestWWW__get_text(*v150, 0LL);
      this->fields._data_5__2 = v151;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._data_5__2,
        (System_Int32_array **)v151,
        v152,
        v153,
        v154,
        v155,
        v156,
        v157);
LABEL_21:
      if ( !*v150 )
        goto LABEL_532;
      DelightWorks_Network_UnityWebRequestWWW__Dispose(*v150, 0LL);
      *v150 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._www_5__10, 0LL, v158, v159, v160, v161, v162, v163);
      goto LABEL_46;
    case 4:
      v139 = &this->fields._www_5__10;
      this->fields.__1__state = -1;
      goto LABEL_8;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall NetworkManager__RequestCR_d__211__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__RequestCR_d__211_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NetworkManager__RequestCR_d__211__System_Collections_IEnumerator_Reset(
        NetworkManager__RequestCR_d__211_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_NetworkManager__RequestCR_d__211_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall NetworkManager__RequestCR_d__211__System_Collections_IEnumerator_get_Current(
        NetworkManager__RequestCR_d__211_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NetworkManager__RequestCR_d__211__System_IDisposable_Dispose(
        NetworkManager__RequestCR_d__211_o *this,
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  int32_t _1__state; // w8
  NetworkManager_c *v8; // x0
  UnityEngine_WaitForEndOfFrame_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  bool result; // w0

  if ( (byte_40F8356 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v6);
    byte_40F8356 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v8 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v8 = NetworkManager_TypeInfo;
    }
    v8->static_fields->nowTime = -1LL;
    goto LABEL_10;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
LABEL_10:
    v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitForEndOfFrame___ctor(v9, 0LL);
    this->fields.__2__current = (Il2CppObject *)v9;
    p__2__current = &this->fields.__2__current;
    sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_NetworkManager__TimeUpdate_d__81_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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