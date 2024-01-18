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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v184; // x19
  BattleServantConfConponent_o *p_webViewAddress; // x0
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  System_Int32_array **v192; // x1
  BattleServantConfConponent_o *p_AUTHMD5_KEY_TYPE; // x0
  System_String_array **v194; // x2
  System_String_array **v195; // x3
  System_Boolean_array **v196; // x4
  System_Int32_array **v197; // x5
  System_Int32_array *v198; // x6
  System_Int32_array *v199; // x7
  System_Int32_array **v200; // x1
  BattleServantConfConponent_o *p_errorDialogResponseData; // x0
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  uint64_t v208; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v209; // 0:x0.8

  if ( (byte_4188375 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_14293/*"TheCheckKey"*/, v10);
    sub_B2C35C(&StringLiteral_18727/*"file://"*/, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_4188375 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)NetworkManager_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_18727/*"file://"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18727/*"file://"*/;
  sub_B2C2F8(static_fields, v14, v2, v3, v4, v5, v6, v7);
  v209.fields.dateData = (uint64_t)&v208;
  NetworkManager_TypeInfo->static_fields->WebCacheTime = 300LL;
  v208 = 0LL;
  System_DateTime___ctor_15271124(v209, 1970, 1, 1, 0, 0, 0, 1, 0LL);
  v15 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->dtUnixEpoch.fields.dateData = v208;
  v15->static_fields->serverTime = 0LL;
  v15->static_fields->serverOffsetTime = 0LL;
  v15->static_fields->isErrorServerTimeLimitOver = 0;
  v15->static_fields->serverTimeChkMovie = 0LL;
  v15->static_fields->nowTime = -1LL;
  v16 = v15->static_fields;
  v16->userAgent = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v16->userAgent, 0LL, v17, v18, v19, v20, v21, v22);
  v23 = NetworkManager_TypeInfo->static_fields;
  v23->userCreateServer = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->userCreateServer, 0LL, v24, v25, v26, v27, v28, v29);
  v30 = NetworkManager_TypeInfo->static_fields;
  v30->userId = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v30->userId, 0LL, v31, v32, v33, v34, v35, v36);
  v37 = NetworkManager_TypeInfo->static_fields;
  v37->authKey = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v37->authKey, 0LL, v38, v39, v40, v41, v42, v43);
  v44 = NetworkManager_TypeInfo->static_fields;
  v44->secretKey = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v44->secretKey, 0LL, v45, v46, v47, v48, v49, v50);
  v51 = NetworkManager_TypeInfo->static_fields;
  v51->userName = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v51->userName, 0LL, v52, v53, v54, v55, v56, v57);
  v58 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->genderType = 0;
  v58->static_fields->month = 0;
  v58->static_fields->day = 0;
  v59 = v58->static_fields;
  v59->sessionId = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v59->sessionId, 0LL, v60, v61, v62, v63, v64, v65);
  v66 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->isRebootBlock = 1;
  v66->static_fields->isLogin = 0;
  v67 = v66->static_fields;
  v67->friendCode = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v67->friendCode, 0LL, v68, v69, v70, v71, v72, v73);
  v74 = NetworkManager_TypeInfo->static_fields;
  v74->registrationVersion = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v74->registrationVersion, 0LL, v75, v76, v77, v78, v79, v80);
  v81 = NetworkManager_TypeInfo->static_fields;
  v81->registrationId = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v81->registrationId, 0LL, v82, v83, v84, v85, v86, v87);
  v88 = NetworkManager_TypeInfo->static_fields;
  v89 = (System_Int32_array **)StringLiteral_1/*""*/;
  v88->serverSettingType = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v88->serverSettingType, v89, v90, v91, v92, v93, v94, v95);
  v96 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->serverSettingSecurity = 0;
  v97 = v96->static_fields;
  v98 = (System_Int32_array **)StringLiteral_1/*""*/;
  v97->gameServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v97->gameServerSettingAddress, v98, v99, v100, v101, v102, v103, v104);
  v105 = (System_Int32_array **)StringLiteral_1/*""*/;
  v106 = NetworkManager_TypeInfo->static_fields;
  v106->dataServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v106->dataServerSettingAddress, v105, v107, v108, v109, v110, v111, v112);
  v113 = (System_Int32_array **)StringLiteral_1/*""*/;
  v114 = NetworkManager_TypeInfo->static_fields;
  v114->webServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v114->webServerSettingAddress, v113, v115, v116, v117, v118, v119, v120);
  v121 = (System_Int32_array **)StringLiteral_1/*""*/;
  v122 = NetworkManager_TypeInfo->static_fields;
  v122->dataServerFolder = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v122->dataServerFolder, v121, v123, v124, v125, v126, v127, v128);
  v129 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->serverRedirectSecurity = 0;
  v130 = v129->static_fields;
  v130->gameServerRedirectAddress = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v130->gameServerRedirectAddress, 0LL, v131, v132, v133, v134, v135, v136);
  v137 = NetworkManager_TypeInfo->static_fields;
  v137->dataServerRedirectAddress = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v137->dataServerRedirectAddress, 0LL, v138, v139, v140, v141, v142, v143);
  v144 = NetworkManager_TypeInfo->static_fields;
  v144->webServerRedirectAddress = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v144->webServerRedirectAddress, 0LL, v145, v146, v147, v148, v149, v150);
  v151 = NetworkManager_TypeInfo;
  NetworkManager_TypeInfo->static_fields->serverSecurity = 0;
  v152 = (System_Int32_array **)StringLiteral_1/*""*/;
  p_gameServerAddress = (BattleServantConfConponent_o *)&v151->static_fields->gameServerAddress;
  p_gameServerAddress->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B2C2F8(p_gameServerAddress, v152, v154, v155, v156, v157, v158, v159);
  v160 = (System_Int32_array **)StringLiteral_1/*""*/;
  p_dataServerAddress = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->dataServerAddress;
  p_dataServerAddress->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B2C2F8(p_dataServerAddress, v160, v162, v163, v164, v165, v166, v167);
  v168 = (System_Int32_array **)StringLiteral_1/*""*/;
  p_webServerAddress = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->webServerAddress;
  p_webServerAddress->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B2C2F8(p_webServerAddress, v168, v170, v171, v172, v173, v174, v175);
  v176 = (System_Int32_array **)StringLiteral_1/*""*/;
  p_webViewBaseURL = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B2C2F8(p_webViewBaseURL, v176, v178, v179, v180, v181, v182, v183);
  v184 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v184,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  p_webViewAddress = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->webViewAddress;
  p_webViewAddress->klass = (BattleServantConfConponent_c *)v184;
  sub_B2C2F8(p_webViewAddress, (System_Int32_array **)v184, v186, v187, v188, v189, v190, v191);
  v192 = (System_Int32_array **)StringLiteral_14293/*"TheCheckKey"*/;
  p_AUTHMD5_KEY_TYPE = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->AUTHMD5_KEY_TYPE;
  p_AUTHMD5_KEY_TYPE->klass = (BattleServantConfConponent_c *)StringLiteral_14293/*"TheCheckKey"*/;
  sub_B2C2F8(p_AUTHMD5_KEY_TYPE, v192, v194, v195, v196, v197, v198, v199);
  v200 = (System_Int32_array **)StringLiteral_1/*""*/;
  p_errorDialogResponseData = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->errorDialogResponseData;
  p_errorDialogResponseData->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B2C2F8(p_errorDialogResponseData, v200, v202, v203, v204, v205, v206, v207);
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
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_41883F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Queue_RequestBase___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Queue_RequestBase__TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager___ctor__, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_41883F2 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mAndroidApiKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mAndroidApiKey, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mAndroidProjectId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mAndroidProjectId, v13, v14, v15, v16, v17, v18, v19);
  v20 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mIosApplicationId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mIosApplicationId, v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mMk = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mMk, v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mCv = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mCv, v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.mAuGameServerPublicKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mAuGameServerPublicKey, v41, v42, v43, v44, v45, v46, v47);
  v48 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B2C42C(System_Collections_Generic_Queue_RequestBase__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v48,
    (const MethodInfo_295D884 *)Method_System_Collections_Generic_Queue_RequestBase___ctor__);
  this->fields.communicationWaitList = (struct System_Collections_Generic_Queue_RequestBase__o *)v48;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.communicationWaitList,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_NetworkManager___ctor__);
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

  if ( (byte_41883E4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__, request);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_RequestBase__Enqueue__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__, v8);
    byte_41883E4 = 1;
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
      (const MethodInfo_295DF4C *)Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__);
    while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
              &v11,
              (const MethodInfo_20EA640 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__) )
    {
      if ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
             &v11,
             (const MethodInfo_20EA744 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__) == (AssetManager_LoadWaitStatus_o *)request )
      {
        v10 = 73;
        goto LABEL_10;
      }
    }
    v10 = 61;
LABEL_10:
    System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
      &v11,
      (const MethodInfo_20EA630 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
    if ( v10 != 73 )
    {
      communicationWaitList = this->fields.communicationWaitList;
      if ( communicationWaitList )
      {
        System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
          (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)communicationWaitList,
          (Mono_Net_CFNetwork_GetProxyData_o *)request,
          (const MethodInfo_295DE78 *)Method_System_Collections_Generic_Queue_RequestBase__Enqueue__);
        return;
      }
LABEL_14:
      sub_B2C434(communicationWaitList, request);
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
  System_Action_o *v16; // x21
  const MethodInfo *v17; // x5

  if ( (byte_4188387 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&BalanceConfig_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_NetworkManager_OnClickErrorReboot__, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_12570/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_4188387 = 1;
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
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12570/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, 0LL);
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
      NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1/*""*/, v15, 0LL, v16, v17);
      return 0;
    }
  }
  return 1;
}


bool __fastcall NetworkManager__CheckUserCreateServer(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  __int64 v3; // x1
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *gameServerAddress; // x0

  if ( (byte_418836F & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_418836F = 1;
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
  v5 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  gameServerAddress = static_fields->gameServerAddress;
  if ( !gameServerAddress )
    sub_B2C434(0LL, v3);
  return System_String__Equals_44292872(gameServerAddress, static_fields->userCreateServer, 0LL);
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
  System_String_array *v8; // x1
  System_String_array *v9; // x19
  System_String_o *userCreateServer; // x20
  __int64 v11; // x8
  __int64 v12; // x9
  System_String_o *v13; // x8
  __int64 v15; // x0

  if ( (byte_4188370 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, v1);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    byte_4188370 = 1;
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
      v7 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !v7 )
        goto LABEL_29;
      v8 = v7;
      if ( !v7->max_length )
        goto LABEL_30;
      LOWORD(v7->m_Items[0]) = 45;
      if ( !gameServerAddress )
        goto LABEL_29;
      v9 = System_String__Split(gameServerAddress, (System_Char_array *)v7, 0LL);
      userCreateServer = NetworkManager_TypeInfo->static_fields->userCreateServer;
      v7 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !v7 )
        goto LABEL_29;
      v8 = v7;
      if ( !v7->max_length )
      {
LABEL_30:
        v15 = sub_B2C460(v7);
        sub_B2C400(v15, 0LL);
      }
      LOWORD(v7->m_Items[0]) = 45;
      if ( !userCreateServer )
        goto LABEL_29;
      v7 = System_String__Split(userCreateServer, (System_Char_array *)v7, 0LL);
      if ( !v9 )
        goto LABEL_29;
      v11 = *(_QWORD *)&v9->max_length;
      if ( v11 )
      {
        if ( !v7 )
          goto LABEL_29;
        v12 = *(_QWORD *)&v7->max_length;
        if ( v12 )
        {
          if ( (_DWORD)v11 && (_DWORD)v12 )
          {
            v13 = v9->m_Items[0];
            if ( v13 )
              return System_String__Equals_44292872(v13, v7->m_Items[0], 0LL);
LABEL_29:
            sub_B2C434(v7, v8);
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

  if ( (byte_418838C & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418838C = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->userId, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = NetworkManager_TypeInfo->static_fields;
  v10->userCreateServer = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v10->userCreateServer, 0LL, v11, v12, v13, v14, v15, v16);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.loginResponseResult, 0LL, v2, v3, v4, v5, v6, v7);
}


bool __fastcall NetworkManager__CommunicationIsBusy(const MethodInfo *method)
{
  __int64 v1; // x1
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4188376 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v1);
    byte_4188376 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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

  if ( (byte_41883E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Queue_RequestBase__Dequeue__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__, v3);
    byte_41883E5 = 1;
  }
  communicationWaitList = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.communicationWaitList;
  if ( !communicationWaitList )
    sub_B2C434(0LL, method);
  if ( communicationWaitList->fields._size < 1 || this->fields.communicationWork )
    return 0;
  ProxyData___Dequeue = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                          communicationWaitList,
                          (const MethodInfo_295E090 *)Method_System_Collections_Generic_Queue_RequestBase__Dequeue__);
  this->fields.communicationWork = (struct RequestBase_o *)ProxyData___Dequeue;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.communicationWork,
    (System_Int32_array **)ProxyData___Dequeue,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v14 = NetworkManager__RequestCR(this, this->fields.communicationWork, 0.0, v13);
  started = UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v14, 0LL);
  this->fields.communicationCoroutine = started;
  sub_B2C2F8(
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

  if ( (byte_41883B7 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_41883B7 = 1;
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

  if ( (byte_41883B6 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_41883B6 = 1;
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

  if ( (byte_41883B8 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_41883B8 = 1;
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
  __int64 v5; // x1

  if ( (byte_41883AE & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v2);
    byte_41883AE = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v3->static_fields->isRebootBlock = 1;
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
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
    sub_B2C2F8(p_errorCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall NetworkManager__EndGetStoreUrl(NetworkManager_o *this, System_String_o *url, const MethodInfo *method)
{
  if ( url )
    UnityEngine_Application__OpenURL(url, 0LL);
  UnityEngine_Application__Quit_40611620(0LL);
}


void __fastcall NetworkManager__EndLockSync(NetworkManager_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_41883EE & 1) == 0 )
  {
    sub_B2C35C(&UserServantLockManager_TypeInfo, result);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v5);
    byte_41883EE = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21218/*"ok"*/, 0LL) )
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

  if ( (byte_41883F1 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_41883F1 = 1;
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
    sub_B2C2F8(p_loginCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    NetworkManager_LoginCallbackFunc__Invoke(v10, monitor, 0LL);
  }
}


void __fastcall NetworkManager__EndOptionSync(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_41883F0 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_41883F0 = 1;
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
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  System_Int64_array *v22; // x20
  NetworkManager_ResultCallbackFunc_o *v23; // x21

  if ( (byte_41883ED & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_EndLockSync__, result);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardLockSyncRequest___, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v13);
    sub_B2C35C(&UserServantLockManager_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v15);
    byte_41883ED = 1;
  }
  this->fields.loginResponseResult = result;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.loginResponseResult,
    (System_Int32_array **)result,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  NetworkManager__SetupObfuscatedAccountId(v16, this->fields.loginResponseResult, v17);
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
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
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v23, (Il2CppObject *)this, Method_NetworkManager_EndLockSync__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (ManagementManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v23,
                                          (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardLockSyncRequest___);
      if ( Instance )
      {
        CardLockSyncRequest__beginRequest((CardLockSyncRequest_o *)Instance, v22, 0LL, 0, 0LL);
        return;
      }
LABEL_20:
      sub_B2C434(Instance, v19);
    }
    NetworkManager__EndLockSync(this, (System_String_o *)StringLiteral_21218/*"ok"*/, v21);
  }
  else
  {
    NetworkManager__OptionSync(this, v20);
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
  System_Action_o *v18; // x21
  CommonUI_o *Instance; // x20
  ErrorDialog_ClickDelegate_o *v20; // x23
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_41883A5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, errorTitle);
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, v13);
    sub_B2C35C(&Method_NetworkManager_EndErrorDialog__, v14);
    sub_B2C35C(&Method_NetworkManager_EndErrorWebView__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B2C35C(&WebViewManager_TypeInfo, v17);
    byte_41883A5 = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_B2C2F8(
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
    v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0LL);
    if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WebViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    }
    WebViewManager__OpenView(errorTitle, errorUrl, v18, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(v20, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0LL);
    if ( !Instance )
      sub_B2C434(v21, v22);
    CommonUI__OpenErrorDialog(Instance, errorTitle, errorDetail, v20, 0, 0LL);
  }
}


int32_t __fastcall NetworkManager__ExecuteCommand(ResponseData_o *data, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v6; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v8; // x1

  if ( (byte_41883E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v3);
    byte_41883E3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
  if ( !data )
    sub_B2C434(Instance, v5);
  v6 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&Instance->fields.isButtonEnable;
  if ( !v6 )
    sub_B2C434(0LL, v5);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           v6,
           (System_Type_o *)data->fields.nid,
           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__);
  if ( !Item )
    sub_B2C434(0LL, v8);
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
  __int64 v5; // x1
  System_String_o *basePanel; // x19

  if ( (byte_41883CE & 1) == 0 )
  {
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_41883CE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
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
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0
  System_Int32_array **v36; // x1
  __int64 v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x0
  System_Int32_array **v51; // x1
  __int64 v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  NetworkManager_c *v59; // x0
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v60; // x20
  System_Text_UTF8Encoding_o *v61; // x21
  NetworkManager_c *v62; // x0
  System_Byte_array *v63; // x19
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x0
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v75; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v76; // [xsp+30h] [xbp-80h] BYREF

  v2 = headers;
  if ( (byte_418838B & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__, v10);
    sub_B2C35C(&string___TypeInfo, v11);
    sub_B2C35C(&System_Text_UTF8Encoding_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_1505/*"="*/, v13);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v14);
    sub_B2C35C(&StringLiteral_441/*"&"*/, v15);
    headers = (System_Collections_Generic_SortedDictionary_string__string__o *)sub_B2C35C(&StringLiteral_1/*""*/, v16);
    byte_418838B = 1;
  }
  memset(&v76, 0, sizeof(v76));
  if ( !v2 )
    goto LABEL_55;
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  System_Collections_Generic_SortedDictionary_string__string___GetEnumerator(
    &v75,
    v2,
    (const MethodInfo_2842910 *)Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__);
  v76 = v75;
  while ( 1 )
  {
    v18 = (System_String_o *)v17;
    if ( !System_Collections_Generic_SortedDictionary_Enumerator_string__string___MoveNext(
            &v76,
            (const MethodInfo_278C048 *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__) )
      break;
    Current = System_Collections_Generic_SortedDictionary_Enumerator_string__string___get_Current(
                &v76,
                (const MethodInfo_278C0C0 *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__);
    if ( System_String__op_Inequality((System_String_o *)v17, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v20 = sub_B2C374(string___TypeInfo, 5LL);
      v28 = (System_String_array *)v20;
      if ( !v20 )
        sub_B2C434(0LL, v21);
      if ( v17 )
      {
        v20 = sub_B2C41C(v17, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
        if ( !v20 )
        {
          v70 = sub_B2C454(0LL);
          sub_B2C400(v70, 0LL);
        }
      }
      if ( !v28->max_length )
      {
        v68 = sub_B2C460(v20);
        sub_B2C400(v68, 0LL);
      }
      v28->m_Items[0] = (System_String_o *)v17;
      sub_B2C2F8((BattleServantConfConponent_o *)v28->m_Items, v17, v22, v23, v24, v25, v26, v27);
      v35 = StringLiteral_441/*"&"*/;
      if ( StringLiteral_441/*"&"*/ )
      {
        v35 = sub_B2C41C(StringLiteral_441/*"&"*/, v28->obj.klass->_1.element_class);
        if ( !v35 )
        {
          v71 = sub_B2C454(0LL);
          sub_B2C400(v71, 0LL);
        }
        v36 = (System_Int32_array **)StringLiteral_441/*"&"*/;
      }
      else
      {
        v36 = 0LL;
      }
      if ( v28->max_length <= 1 )
      {
        v65 = sub_B2C460(v35);
        sub_B2C400(v65, 0LL);
      }
      v28->m_Items[1] = (System_String_o *)v36;
      sub_B2C2F8((BattleServantConfConponent_o *)&v28->m_Items[1], v36, v29, v30, v31, v32, v33, v34);
      if ( Current.fields.key )
      {
        v37 = sub_B2C41C(Current.fields.key, v28->obj.klass->_1.element_class);
        if ( !v37 )
        {
          v73 = sub_B2C454(0LL);
          sub_B2C400(v73, 0LL);
        }
      }
      if ( v28->max_length <= 2 )
      {
        v66 = sub_B2C460(v37);
        sub_B2C400(v66, 0LL);
      }
      v28->m_Items[2] = (System_String_o *)Current.fields.key;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v28->m_Items[2],
        (System_Int32_array **)Current.fields.key,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      v50 = StringLiteral_1505/*"="*/;
      if ( StringLiteral_1505/*"="*/ )
      {
        v50 = sub_B2C41C(StringLiteral_1505/*"="*/, v28->obj.klass->_1.element_class);
        if ( !v50 )
        {
          v72 = sub_B2C454(0LL);
          sub_B2C400(v72, 0LL);
        }
        v51 = (System_Int32_array **)StringLiteral_1505/*"="*/;
      }
      else
      {
        v51 = 0LL;
      }
      if ( v28->max_length <= 3 )
      {
        v69 = sub_B2C460(v50);
        sub_B2C400(v69, 0LL);
      }
      v28->m_Items[3] = (System_String_o *)v51;
      sub_B2C2F8((BattleServantConfConponent_o *)&v28->m_Items[3], v51, v44, v45, v46, v47, v48, v49);
      if ( Current.fields.value )
      {
        v52 = sub_B2C41C(Current.fields.value, v28->obj.klass->_1.element_class);
        if ( !v52 )
        {
          v74 = sub_B2C454(0LL);
          sub_B2C400(v74, 0LL);
        }
      }
      if ( v28->max_length <= 4 )
      {
        v67 = sub_B2C460(v52);
        sub_B2C400(v67, 0LL);
      }
      v28->m_Items[4] = (System_String_o *)Current.fields.value;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v28->m_Items[4],
        (System_Int32_array **)Current.fields.value,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      v17 = (System_Int32_array **)System_String__Concat_44385656(v28, 0LL);
    }
    else
    {
      v17 = (System_Int32_array **)System_String__Concat_44308944(
                                     (System_String_o *)v17,
                                     (System_String_o *)Current.fields.key,
                                     (System_String_o *)StringLiteral_1505/*"="*/,
                                     (System_String_o *)Current.fields.value,
                                     0LL);
    }
  }
  System_Collections_Generic_SortedDictionary_Enumerator_string__string___Dispose(
    &v76,
    (const MethodInfo_278C084 *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__);
  v59 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v59 = NetworkManager_TypeInfo;
  }
  if ( !v59->static_fields->secretKey )
    return 0LL;
  v60 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_B2C42C(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v60, 0LL);
  v61 = (System_Text_UTF8Encoding_o *)sub_B2C42C(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v61, 0LL);
  v62 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v62 = NetworkManager_TypeInfo;
  }
  headers = (System_Collections_Generic_SortedDictionary_string__string__o *)System_String__Concat_44307816(
                                                                               v18,
                                                                               (System_String_o *)StringLiteral_1225/*":"*/,
                                                                               v62->static_fields->secretKey,
                                                                               0LL);
  if ( !v61
    || (headers = (System_Collections_Generic_SortedDictionary_string__string__o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_Collections_Generic_SortedDictionary_string__string__o *, Il2CppMethodPointer))v61->klass->vtable._18_GetBytes.method)(
                                                                                     v61,
                                                                                     headers,
                                                                                     v61->klass->vtable._19_GetBytes.methodPtr),
        !v60) )
  {
LABEL_55:
    sub_B2C434(headers, method);
  }
  v63 = System_Security_Cryptography_HashAlgorithm__ComputeHash_43523120(
          (System_Security_Cryptography_HashAlgorithm_o *)v60,
          (System_Byte_array *)headers,
          0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v60, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToBase64String(v63, 0LL);
}


System_String_o *__fastcall NetworkManager__GetCv(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_o *commonCamera; // x19

  if ( (byte_41883D0 & 1) == 0 )
  {
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_41883D0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
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

  if ( (byte_41883B9 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_41883B9 = 1;
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

  if ( (byte_41883C4 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_41883C4 = 1;
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


System_String_o *__fastcall NetworkManager__GetDataServerSetting_26279128(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_41883C5 & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, method);
    byte_41883C5 = 1;
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

  if ( (byte_4188386 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    byte_4188386 = 1;
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
  return LocalizationManager__GetNumberFormat_33986032(friendCode, 0LL);
}


System_String_o *__fastcall NetworkManager__GetFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_4188385 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4188385 = 1;
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

  if ( (byte_41883C2 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_41883C2 = 1;
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


System_String_o *__fastcall NetworkManager__GetGameServerSetting_26278928(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_41883C3 & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, method);
    byte_41883C3 = 1;
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

  if ( (byte_4188388 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_4188388 = 1;
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
  __int64 v5; // x1
  System_String_o *webViewScreen; // x19

  if ( (byte_41883CF & 1) == 0 )
  {
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_41883CF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
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

  if ( (byte_41883BF & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_41883BF = 1;
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


bool __fastcall NetworkManager__GetSecurityServerSetting_26278728(System_String_o *type, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_41883C1 & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, method);
    byte_41883C1 = 1;
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
  if ( (byte_41883DC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4578/*"DEV"*/, method);
    sub_B2C35C(&StringLiteral_12329/*"STAGING"*/, v3);
    sub_B2C35C(&StringLiteral_12376/*"STG"*/, v4);
    sub_B2C35C(&StringLiteral_15114/*"VERUP"*/, v5);
    sub_B2C35C(&StringLiteral_4577/*"DESIGN"*/, v6);
    sub_B2C35C(&StringLiteral_7317/*"IPADDRESS"*/, v7);
    sub_B2C35C(&StringLiteral_10849/*"QA"*/, v8);
    sub_B2C35C(&StringLiteral_10445/*"PLAN"*/, v9);
    sub_B2C35C(&StringLiteral_8378/*"LIMIT"*/, v10);
    sub_B2C35C(&StringLiteral_10446/*"PLAY"*/, v11);
    serverName = (System_String_o *)sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_41883DC = 1;
  }
  if ( !v2 )
    sub_B2C434(serverName, method);
  v13 = &StringLiteral_10849/*"QA"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10849/*"QA"*/, 0LL) )
    return System_String__Replace_44312768(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_10445/*"PLAN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10445/*"PLAN"*/, 0LL) )
    return System_String__Replace_44312768(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_4578/*"DEV"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4578/*"DEV"*/, 0LL) )
    return System_String__Replace_44312768(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_8378/*"LIMIT"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_8378/*"LIMIT"*/, 0LL) )
    return System_String__Replace_44312768(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_10446/*"PLAY"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10446/*"PLAY"*/, 0LL) )
    return System_String__Replace_44312768(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_4577/*"DESIGN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4577/*"DESIGN"*/, 0LL) )
    return System_String__Replace_44312768(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_15114/*"VERUP"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_15114/*"VERUP"*/, 0LL) )
    return System_String__Replace_44312768(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_12376/*"STG"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_12376/*"STG"*/, 0LL)
    && !System_String__Contains(v2, (System_String_o *)StringLiteral_12329/*"STAGING"*/, 0LL) )
  {
    return System_String__Replace_44312768(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v13 = &StringLiteral_7317/*"IPADDRESS"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_7317/*"IPADDRESS"*/, 0LL) )
    return System_String__Replace_44312768(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall NetworkManager__GetServerSettingType(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_41883BE & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_41883BE = 1;
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

  if ( (byte_418838A & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_418838A = 1;
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
  if ( (byte_41883DB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4578/*"DEV"*/, method);
    sub_B2C35C(&StringLiteral_12329/*"STAGING"*/, v3);
    sub_B2C35C(&StringLiteral_12376/*"STG"*/, v4);
    sub_B2C35C(&StringLiteral_15114/*"VERUP"*/, v5);
    sub_B2C35C(&StringLiteral_4577/*"DESIGN"*/, v6);
    sub_B2C35C(&StringLiteral_7317/*"IPADDRESS"*/, v7);
    sub_B2C35C(&StringLiteral_10849/*"QA"*/, v8);
    sub_B2C35C(&StringLiteral_10445/*"PLAN"*/, v9);
    sub_B2C35C(&StringLiteral_8378/*"LIMIT"*/, v10);
    serverName = (System_String_o *)sub_B2C35C(&StringLiteral_10446/*"PLAY"*/, v11);
    byte_41883DB = 1;
  }
  if ( !v2 )
    sub_B2C434(serverName, method);
  v12 = &StringLiteral_10849/*"QA"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10849/*"QA"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_10445/*"PLAN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10445/*"PLAN"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_4578/*"DEV"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4578/*"DEV"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_8378/*"LIMIT"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_8378/*"LIMIT"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_10446/*"PLAY"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10446/*"PLAY"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_4577/*"DESIGN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4577/*"DESIGN"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_15114/*"VERUP"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_15114/*"VERUP"*/, 0LL) )
    return (System_String_o *)*v12;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_12376/*"STG"*/, 0LL)
    && !System_String__Contains(v2, (System_String_o *)StringLiteral_12329/*"STAGING"*/, 0LL) )
  {
    v12 = &StringLiteral_12376/*"STG"*/;
    return (System_String_o *)*v12;
  }
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_7317/*"IPADDRESS"*/, 0LL) )
    return (System_String_o *)StringLiteral_7317/*"IPADDRESS"*/;
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

  if ( (byte_418837E & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, userName);
    byte_418837E = 1;
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
  sub_B2C2F8(
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
}


int32_t __fastcall NetworkManager__GetTerminalDispState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4188377 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v2);
    byte_4188377 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  if ( AvalonSceneManager__checkNowScene(Instance, 9, 0LL) )
    return 1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C66 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4183C66 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  return v7->static_fields->_DispState_k__BackingField != 2;
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

  if ( (byte_41883DA & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_23266/*"webview/warBoard?stageId="*/, v4);
    byte_41883DA = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = (Il2CppObject *)NetworkManager__getBaseUrl(0, method);
  v8 = stageId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Concat_44385236(BaseUrl, (Il2CppObject *)StringLiteral_23266/*"webview/warBoard?stageId="*/, v6, 0LL);
}


System_String_o *__fastcall NetworkManager__GetWebServerSetting(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_41883C6 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_41883C6 = 1;
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


System_String_o *__fastcall NetworkManager__GetWebServerSetting_26279328(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_41883C7 & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, method);
    byte_41883C7 = 1;
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
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x5

  if ( (byte_41883A4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_NetworkManager_OnClickErrorReboot__, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_12570/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_41883A4 = 1;
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
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12570/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, 0LL);
    v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
    NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1/*""*/, v12, 0LL, v13, v14);
  }
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__Initialize(
        NetworkManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4188379 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager__Initialize_d__82_TypeInfo, method);
    byte_4188379 = 1;
  }
  v3 = sub_B2C42C(NetworkManager__Initialize_d__82_TypeInfo);
  NetworkManager__Initialize_d__82___ctor((NetworkManager__Initialize_d__82_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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

  if ( (byte_418837A & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418837A = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->userAgent, UserAgentString, v3, v4, v5, v6, v7, v8);
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
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  __int64 v12; // x3
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0

  if ( (byte_4188390 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, fname);
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    byte_4188390 = 1;
  }
  v6 = 0LL;
  if ( System_IO_File__Exists(fname, 0LL) )
  {
    v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(fname, 0LL);
    v8 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v8, v7, 0LL);
    if ( !v8 )
      sub_B2C434(v9, v10);
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                               v8,
                               v8->klass->vtable._23_ReadChars.methodPtr);
    if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    }
    v6 = EncryptedPlayerPrefs__Md5(v11, 0LL);
    klass = v8->klass;
    if ( *(_WORD *)&v8->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_12:
      v16 = sub_AC5258(v8, System_IDisposable_TypeInfo, 0LL, v12);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v16)(v8, *(_QWORD *)(v16 + 8));
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
  if ( (byte_41883E8 & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_B2C35C(&StringLiteral_4192/*"CommunicationStart"*/, requestWork);
    byte_41883E8 = 1;
  }
  if ( !requestWork )
    sub_B2C434(this, requestWork);
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v8->fields.communicationWorkResponseList,
      0LL,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    v8->fields.communicationWork = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.communicationWork, 0LL, v16, v17, v18, v19, v20, v21);
    v8->fields.communicationCoroutine = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.communicationCoroutine, 0LL, v22, v23, v24, v25, v26, v27);
    if ( v8->fields.cacheRefreshWork )
    {
      v8->fields.cacheRefreshWork = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.cacheRefreshWork, 0LL, v28, v29, v30, v31, v32, v33);
      v8->fields.cacheRefreshWorkResponseList = 0LL;
      sub_B2C2F8(
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
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v8, (System_String_o *)StringLiteral_4192/*"CommunicationStart"*/, 0.0, 0LL);
  return 1;
}


void __fastcall NetworkManager__OnClickErrorDialog(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  UnityEngine_Application__Quit_40611620(0LL);
}


void __fastcall NetworkManager__OnClickErrorReboot(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  ManagementManager_c *v4; // x0
  NetworkManager_c *v5; // x0
  ManagementManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_41883A9 & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v3);
    byte_41883A9 = 1;
  }
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
  v4 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  if ( v4->static_fields->isDuringStartup )
  {
    UnityEngine_Application__Quit_40611620(0LL);
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
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v7);
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
  __int64 v25; // x1

  if ( (byte_41883A6 & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, isDecide);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v11);
    byte_41883A6 = 1;
  }
  this->fields.communicationWorkResponseList = 0LL;
  sub_B2C2F8(
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
    started = UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v14, 0LL);
    this->fields.communicationCoroutine = started;
    sub_B2C2F8(
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
    if ( !byte_4185D97 )
    {
      sub_B2C35C(&ManagementManager_TypeInfo, v12);
      byte_4185D97 = 1;
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
      UnityEngine_Application__Quit_40611620(0LL);
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
      Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_B2C434(0LL, v25);
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
  __int64 v21; // x1
  const MethodInfo *v22; // x3

  if ( (byte_41883A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_41883A7 = 1;
  }
  if ( isDecide )
  {
    this->fields.communicationWorkResponseList = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v11 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v10);
    started = UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
    p_communicationCoroutine = (BattleServantConfConponent_o *)&this->fields.communicationCoroutine;
    this->fields.communicationCoroutine = started;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v21);
    CommonUI__CloseRetryDialog(Instance, 0LL);
    NetworkManager__OnEndCommunication(
      this,
      this->fields.communicationWork,
      this->fields.communicationWorkResponseList,
      v22);
    p_communicationCoroutine = (BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList;
    started = 0LL;
    this->fields.communicationWorkResponseList = 0LL;
  }
  sub_B2C2F8(p_communicationCoroutine, (System_Int32_array **)started, v13, v14, v15, v16, v17, v18);
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
  __int64 v7; // x1

  if ( (byte_41883AA & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v3);
    byte_41883AA = 1;
  }
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
  v4 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v4 = ManagementManager_TypeInfo;
  }
  if ( v4->static_fields->isDuringStartup )
  {
    UnityEngine_Application__Quit_40611620(0LL);
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
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v7);
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

  if ( (byte_41883AB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13629/*"TerminalStart"*/, method);
    byte_41883AB = 1;
  }
  this->fields.communicationWorkResponseList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList, 0LL, v2, v3, v4, v5, v6, v7);
  communicationCoroutine = this->fields.communicationCoroutine;
  if ( communicationCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_35310416((UnityEngine_MonoBehaviour_o *)this, communicationCoroutine, 0LL);
  this->fields.communicationWork = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.communicationWork, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.communicationCoroutine = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.communicationCoroutine, 0LL, v16, v17, v18, v19, v20, v21);
  if ( this->fields.cacheRefreshWork )
  {
    this->fields.cacheRefreshWork = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.cacheRefreshWork, 0LL, v22, v23, v24, v25, v26, v27);
    this->fields.cacheRefreshWorkResponseList = 0LL;
    sub_B2C2F8(
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
    (System_String_o *)StringLiteral_13629/*"TerminalStart"*/,
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
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  System_Collections_IEnumerator_o *v34; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_41883A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_TopRefreshRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    byte_41883A8 = 1;
  }
  p_communicationWork = &this->fields.communicationWork;
  communicationWork = this->fields.communicationWork;
  this->fields.cacheRefreshWork = communicationWork;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
                                                               (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TopRefreshRequest___);
  *p_communicationWork = (RequestBase_o *)Request_WarBoardWallAttackRequest;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.communicationWork,
    Request_WarBoardWallAttackRequest,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.communicationWorkResponseList = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.communicationWorkResponseList,
    0LL,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !*p_communicationWork )
    sub_B2C434(0LL, v32);
  RequestBase__addBaseField(*p_communicationWork, 0LL);
  v34 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v33);
  started = UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v34, 0LL);
  this->fields.communicationCoroutine = started;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.communicationCoroutine,
    (System_Int32_array **)started,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
}


void __fastcall NetworkManager__OnClickStore(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_41883AF & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, method);
    byte_41883AF = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  WebViewPluginScript__LaunchStore(v2->static_fields->AndroidPackageName, 0LL);
  UnityEngine_Application__Quit_40611620(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnClickUserDelete(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_41883AD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_NetworkManager_EndCloseUserDelete__, v5);
    sub_B2C35C(&OptionManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_41883AD = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_NetworkManager_EndCloseUserDelete__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__CloseConfirmDialog_17971588(Instance, v9, 0LL);
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
  if ( (byte_41883E7 & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_B2C35C(&StringLiteral_4192/*"CommunicationStart"*/, requestWork);
    byte_41883E7 = 1;
  }
  if ( v10->fields.communicationWork != v9 )
    goto LABEL_4;
  v10->fields.communicationWorkResponseList = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v10->fields.communicationWorkResponseList,
    0LL,
    (System_String_array **)responseList,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v10->fields.communicationWork = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.communicationWork, 0LL, v11, v12, v13, v14, v15, v16);
  v10->fields.communicationCoroutine = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.communicationCoroutine, 0LL, v17, v18, v19, v20, v21, v22);
  this = (NetworkManager_o *)&v10->fields.cacheRefreshWork;
  cacheRefreshWork = v10->fields.cacheRefreshWork;
  if ( cacheRefreshWork )
  {
    cacheRefreshWorkResponseList = v10->fields.cacheRefreshWorkResponseList;
    v10->fields.cacheRefreshWork = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)this, 0LL, v23, v24, v25, v26, v27, v28);
    v10->fields.cacheRefreshWorkResponseList = 0LL;
    sub_B2C2F8(
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
      sub_B2C434(this, requestWork);
  }
  ((void (__fastcall *)(RequestBase_o *, ResponseData_array *, Il2CppMethodPointer))v9->klass->vtable._10_requestCompleted.method)(
    v9,
    cacheRefreshWorkResponseList,
    v9->klass->vtable._11_backgroundErrorRequest.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v10, (System_String_o *)StringLiteral_4192/*"CommunicationStart"*/, 0.0, 0LL);
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
  if ( (byte_41883E9 & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_B2C35C(&StringLiteral_4192/*"CommunicationStart"*/, requestWork);
    byte_41883E9 = 1;
  }
  if ( !requestWork )
    sub_B2C434(this, requestWork);
  if ( (((__int64 (__fastcall *)(RequestBase_o *, System_String_o *, Il2CppMethodPointer, const MethodInfo *))requestWork->klass->vtable._14_errorRequest.method)(
          requestWork,
          errorCode,
          requestWork->klass->vtable._15_errorRetry.methodPtr,
          method) & 1) == 0 )
    return 0;
  if ( v6->fields.communicationWork == requestWork )
  {
    v6->fields.communicationWorkResponseList = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v6->fields.communicationWorkResponseList,
      0LL,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v6->fields.communicationWork = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v6->fields.communicationWork, 0LL, v13, v14, v15, v16, v17, v18);
    v6->fields.communicationCoroutine = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v6->fields.communicationCoroutine, 0LL, v19, v20, v21, v22, v23, v24);
    if ( v6->fields.cacheRefreshWork )
    {
      v6->fields.cacheRefreshWork = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&v6->fields.cacheRefreshWork, 0LL, v25, v26, v27, v28, v29, v30);
      v6->fields.cacheRefreshWorkResponseList = 0LL;
      sub_B2C2F8(
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
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v6, (System_String_o *)StringLiteral_4192/*"CommunicationStart"*/, 0.0, 0LL);
  return 1;
}


void __fastcall NetworkManager__OptionSync(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_41883EF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_NetworkManager_EndOptionSync__, v3);
    sub_B2C35C(&OptionManager_TypeInfo, v4);
    byte_41883EF = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__CheckOldLocal(0LL) )
  {
    v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_NetworkManager_EndOptionSync__, 0LL);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__SaveData(v6, 0LL);
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
  System_IO_BinaryReader_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x22
  System_String_o *v31; // x23
  NetworkManager_c *v32; // x0
  System_String_o *String; // x1
  __int64 v34; // x3
  int v35; // w8
  char v36; // w23
  System_String_o *v37; // x22
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v39; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v40; // x22
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x23
  NetworkManager_c *v50; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v52; // x0
  __int64 v53; // x1
  System_Int32_array **v54; // x1
  struct NetworkManager_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v62; // x0
  __int64 v63; // x1
  System_Int32_array **v64; // x1
  struct NetworkManager_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  UnityEngine_Purchasing_IStoreExtension_o *v72; // x0
  __int64 v73; // x1
  System_Int32_array **v74; // x1
  struct NetworkManager_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v83; // x10
  int32_t *p_offset; // x11
  __int64 v85; // x0
  int v86; // w8
  int v87; // w9
  _DWORD v89[11]; // [xsp+10h] [xbp-90h]
  int v90; // [xsp+3Ch] [xbp-64h]
  int v91; // [xsp+48h] [xbp-58h]

  if ( (byte_418838D & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, method);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&JsonManager_TypeInfo, v7);
    sub_B2C35C(&ManagerConfig_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_23002/*"userCreateServer"*/, v10);
    sub_B2C35C(&StringLiteral_16528/*"authKey"*/, v11);
    sub_B2C35C(&StringLiteral_21946/*"secretKey"*/, v12);
    sub_B2C35C(&StringLiteral_23041/*"userId"*/, v13);
    byte_418838D = 1;
  }
  v91 = 0;
  v90 = 0;
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
      v27 = (System_IO_BinaryReader_o *)sub_B2C42C(v24);
      System_IO_BinaryReader___ctor(v27, v26, 0LL);
      if ( !v27 )
        sub_B2C434(v28, v29);
      v30 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v27->klass->vtable._22_ReadString.method)(
                                 v27,
                                 v27->klass->vtable._23_ReadChars.methodPtr);
      if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      }
      v31 = EncryptedPlayerPrefs__Md5(v30, 0LL);
      v32 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v32 = NetworkManager_TypeInfo;
      }
      String = UnityEngine_PlayerPrefs__GetString(v32->static_fields->AUTHMD5_KEY_TYPE, v31, 0LL);
      if ( System_String__op_Inequality(v31, String, 0LL) )
        break;
      if ( v30 )
      {
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        v37 = CatAndMouseGame__MouseGame1(v30, 0, 0LL);
        if ( v37 )
        {
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          Dictionary = JsonManager__getDictionary(v37, 0LL);
          v40 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
          if ( !Dictionary )
            sub_B2C434(0LL, v39);
          Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                   (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary,
                   (System_Type_o *)StringLiteral_23002/*"userCreateServer"*/,
                   (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            sub_B2C434(0LL, v42);
          v49 = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                         Item,
                                         Item->klass->vtable[4].methodPtr);
          v50 = NetworkManager_TypeInfo;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v50 = NetworkManager_TypeInfo;
          }
          static_fields = v50->static_fields;
          static_fields->userCreateServer = (struct System_String_o *)v49;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&static_fields->userCreateServer,
            v49,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48);
          v52 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  v40,
                  (System_Type_o *)StringLiteral_23041/*"userId"*/,
                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v52 )
            sub_B2C434(0LL, v53);
          v54 = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v52->klass->vtable[3].method)(
                                         v52,
                                         v52->klass->vtable[4].methodPtr);
          v55 = NetworkManager_TypeInfo->static_fields;
          v55->userId = (struct System_String_o *)v54;
          sub_B2C2F8((BattleServantConfConponent_o *)&v55->userId, v54, v56, v57, v58, v59, v60, v61);
          v62 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  v40,
                  (System_Type_o *)StringLiteral_16528/*"authKey"*/,
                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v62 )
            sub_B2C434(0LL, v63);
          v64 = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v62->klass->vtable[3].method)(
                                         v62,
                                         v62->klass->vtable[4].methodPtr);
          v65 = NetworkManager_TypeInfo->static_fields;
          v65->authKey = (struct System_String_o *)v64;
          sub_B2C2F8((BattleServantConfConponent_o *)&v65->authKey, v64, v66, v67, v68, v69, v70, v71);
          v72 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  v40,
                  (System_Type_o *)StringLiteral_21946/*"secretKey"*/,
                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v72 )
            sub_B2C434(0LL, v73);
          v74 = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v72->klass->vtable[3].method)(
                                         v72,
                                         v72->klass->vtable[4].methodPtr);
          v75 = NetworkManager_TypeInfo->static_fields;
          v75->secretKey = (struct System_String_o *)v74;
          sub_B2C2F8((BattleServantConfConponent_o *)&v75->secretKey, v74, v76, v77, v78, v79, v80, v81);
          v89[v18] = 314;
          v35 = v90;
          v36 = 1;
        }
        else
        {
          v89[v18] = 320;
          v35 = v90;
          v36 = 0;
        }
        goto LABEL_49;
      }
      v89[v18] = 320;
      v18 = ++v90;
      v36 = 0;
LABEL_50:
      klass = v27->klass;
      if ( *(_WORD *)&v27->klass->_2.bitflags1 )
      {
        v83 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v83;
          p_offset += 4;
          if ( v83 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
            goto LABEL_54;
        }
        v85 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_54:
        v85 = sub_AC5258(v27, System_IDisposable_TypeInfo, 0LL, v34);
      }
      v15 = (NetworkManager_o *)(*(__int64 (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v85)(
                                  v27,
                                  *(_QWORD *)(v85 + 8));
      if ( !v18 )
      {
        v17 = v25;
        goto LABEL_62;
      }
      v86 = v18 - 1;
      v87 = v89[v18 - 1];
      v17 = v25;
      if ( v87 == 314 )
      {
        --v18;
        v90 = v86;
        goto LABEL_62;
      }
      if ( v87 == 320 )
      {
        v90 = --v18;
      }
      else
      {
LABEL_62:
        v15 = 0LL;
        if ( (v36 & 1) != 0 )
          return (int)v15;
      }
    }
    v89[v18] = 320;
    v35 = v90;
    v36 = 0;
    v21 = 2;
LABEL_49:
    v18 = v35 + 1;
    v90 = v35 + 1;
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
  System_IO_BinaryReader_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x20
  NetworkManager_c *v19; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  __int64 v21; // x3
  bool v22; // w21
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0

  if ( (byte_4188382 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&ManagerConfig_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    byte_4188382 = 1;
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
  v9 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v9, v8, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v18 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._22_ReadString.method)(
                                 v9,
                                 v9->klass->vtable._23_ReadChars.methodPtr);
  v19 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v19 = NetworkManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  static_fields->friendCode = (struct System_String_o *)v18;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->friendCode, v18, v12, v13, v14, v15, v16, v17);
  v22 = 1;
  klass = v9->klass;
  if ( *(_WORD *)&v9->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v26 = sub_AC5258(v9, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v26)(v9, *(_QWORD *)(v26 + 8));
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
  System_IO_BinaryReader_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x20
  NetworkManager_c *v19; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v21; // w21
  __int64 v22; // x3
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0

  if ( (byte_418837C & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&ManagerConfig_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    byte_418837C = 1;
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
  v9 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v9, v8, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v18 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._22_ReadString.method)(
                                 v9,
                                 v9->klass->vtable._23_ReadChars.methodPtr);
  v19 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v19 = NetworkManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  static_fields->userName = (struct System_String_o *)v18;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->userName, v18, v12, v13, v14, v15, v16, v17);
  NetworkManager_TypeInfo->static_fields->genderType = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
                                                         v9,
                                                         v9->klass->vtable._16_ReadUInt32.methodPtr);
  NetworkManager_TypeInfo->static_fields->month = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
                                                    v9,
                                                    v9->klass->vtable._16_ReadUInt32.methodPtr);
  v21 = 1;
  NetworkManager_TypeInfo->static_fields->day = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
                                                  v9,
                                                  v9->klass->vtable._16_ReadUInt32.methodPtr);
  klass = v9->klass;
  if ( *(_WORD *)&v9->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v26 = sub_AC5258(v9, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v26)(v9, *(_QWORD *)(v26 + 8));
  return v21;
}


bool __fastcall NetworkManager__ReadServerSetting(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  __int64 v4; // x1

  if ( (byte_41883D1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4569/*"DEFAULT"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_41883D1 = 1;
  }
  NetworkManager__SetServerSetting(
    this,
    (System_String_o *)StringLiteral_4569/*"DEFAULT"*/,
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
  System_IO_BinaryReader_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x20
  NetworkManager_c *v19; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v21; // w21
  __int64 v22; // x3
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0

  if ( (byte_418837D & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&ManagerConfig_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    byte_418837D = 1;
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
  v9 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v9, v8, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v18 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._22_ReadString.method)(
                                 v9,
                                 v9->klass->vtable._23_ReadChars.methodPtr);
  v19 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v19 = NetworkManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  static_fields->userName = (struct System_String_o *)v18;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->userName, v18, v12, v13, v14, v15, v16, v17);
  NetworkManager_TypeInfo->static_fields->genderType = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
                                                         v9,
                                                         v9->klass->vtable._16_ReadUInt32.methodPtr);
  NetworkManager_TypeInfo->static_fields->month = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
                                                    v9,
                                                    v9->klass->vtable._16_ReadUInt32.methodPtr);
  v21 = 1;
  NetworkManager_TypeInfo->static_fields->day = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
                                                  v9,
                                                  v9->klass->vtable._16_ReadUInt32.methodPtr);
  klass = v9->klass;
  if ( *(_WORD *)&v9->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v26 = sub_AC5258(v9, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v26)(v9, *(_QWORD *)(v26 + 8));
  return v21;
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
  DataManager_c *v14; // x0
  DataManager_c *v15; // x0
  NetworkManager_c *v16; // x0
  int64_t Time; // x0
  const MethodInfo *v18; // x2
  System_String_o *v19; // x0
  System_Guid_o v20; // [xsp+0h] [xbp-30h] BYREF
  System_Guid_o v21; // 0:x0.16

  if ( (byte_41883E0 & 1) == 0 )
  {
    sub_B2C35C(&System_Guid_TypeInfo, isRefreshTime);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_17893/*"dateVer"*/, v8);
    sub_B2C35C(&StringLiteral_17877/*"dataVer"*/, v9);
    sub_B2C35C(&StringLiteral_16373/*"appVer"*/, v10);
    sub_B2C35C(&StringLiteral_19387/*"idempotencyKey"*/, v11);
    sub_B2C35C(&StringLiteral_20181/*"lastAccessTime"*/, v12);
    byte_41883E0 = 1;
  }
  v20 = (System_Guid_o)0LL;
  Instance = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !request )
    goto LABEL_28;
  RequestBase__replaceField_31052888(
    request,
    (System_String_o *)StringLiteral_16373/*"appVer"*/,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  if ( !byte_418847B )
  {
    sub_B2C35C(&DataManager_TypeInfo, isRefreshTime);
    byte_418847B = 1;
  }
  v14 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v14 = DataManager_TypeInfo;
  }
  RequestBase__replaceField(request, (System_String_o *)StringLiteral_17877/*"dataVer"*/, v14->static_fields->dataVersion, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_B2C434(Instance, isRefreshTime);
  if ( !byte_418847C )
  {
    sub_B2C35C(&DataManager_TypeInfo, isRefreshTime);
    byte_418847C = 1;
  }
  v15 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v15 = DataManager_TypeInfo;
  }
  RequestBase__replaceField_31052420(
    request,
    (System_String_o *)StringLiteral_17893/*"dateVer"*/,
    v15->static_fields->dateVersion,
    0LL);
  if ( isRefreshTime )
  {
    v16 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime((const MethodInfo *)v16);
    RequestBase__replaceField_31052420(request, (System_String_o *)StringLiteral_20181/*"lastAccessTime"*/, Time, 0LL);
    if ( (BYTE3(System_Guid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Guid_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Guid_TypeInfo);
    v20 = System_Guid__NewGuid(0LL);
    *(_QWORD *)&v21.fields._a = &v20;
    *(_QWORD *)&v21.fields._d = 0LL;
    v19 = System_Guid__ToString(v21, v18);
    RequestBase__replaceField_31052888(request, (System_String_o *)StringLiteral_19387/*"idempotencyKey"*/, v19, 0LL);
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
  __int64 v10; // x1
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

  if ( (byte_41883EA & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager__RequestApplicationUpdateCR_d__216_TypeInfo, storeName);
    byte_41883EA = 1;
  }
  v8 = sub_B2C42C(NetworkManager__RequestApplicationUpdateCR_d__216_TypeInfo);
  NetworkManager__RequestApplicationUpdateCR_d__216___ctor(
    (NetworkManager__RequestApplicationUpdateCR_d__216_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  *(_QWORD *)(v8 + 32) = storeName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)storeName, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 40) = id;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)id, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v8 + 48) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)callback, v23, v24, v25, v26, v27, v28);
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
  __int64 v9; // x1
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

  if ( (byte_41883E6 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager__RequestCR_d__211_TypeInfo, work);
    byte_41883E6 = 1;
  }
  v7 = sub_B2C42C(NetworkManager__RequestCR_d__211_TypeInfo);
  NetworkManager__RequestCR_d__211___ctor((NetworkManager__RequestCR_d__211_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = work;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)work, v16, v17, v18, v19, v20, v21);
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
  NetworkManager_ResultCallbackFunc_o *v14; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v16; // x1
  TopLoginRequest_o *v17; // x21
  const MethodInfo *v18; // x1

  if ( (byte_41883EB & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_EndTopLogin__, callback);
    sub_B2C35C(&Method_NetworkManager_getRequest_TopLoginRequest___, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    byte_41883EB = 1;
  }
  this->fields.loginCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.loginCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)isEnforce,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v14, (Il2CppObject *)this, Method_NetworkManager_EndTopLogin__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v14,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TopLoginRequest___);
  v17 = (TopLoginRequest_o *)Request_WarBoardWallAttackRequest;
  if ( isEnforce )
  {
    if ( !Request_WarBoardWallAttackRequest )
LABEL_13:
      sub_B2C434(Request_WarBoardWallAttackRequest, v16);
  }
  else
  {
    if ( !Request_WarBoardWallAttackRequest )
      goto LABEL_13;
    if ( (((__int64 (__fastcall *)(WarBoardWallAttackRequest_o *, Il2CppMethodPointer))Request_WarBoardWallAttackRequest->klass->vtable._7_checkExpirationDate.method)(
            Request_WarBoardWallAttackRequest,
            Request_WarBoardWallAttackRequest->klass->vtable._8_isBackgroundRequest.methodPtr) & 1) != 0 )
    {
      NetworkManager__EndLogin(this, v18);
      return;
    }
  }
  TopLoginRequest__beginRequest(v17, 0LL);
}


void __fastcall NetworkManager__RequestStart(RequestBase_o *request, const MethodInfo *method)
{
  NetworkManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_41883E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, method);
    byte_41883E2 = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( NetworkManager__CheckServerLimitTime(Instance, v4) )
  {
    Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
    {
      NetworkManager__AddWaitStatus(Instance, request, v5);
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( Instance )
      {
        NetworkManager__CommunicationStart(Instance, v4);
        return;
      }
    }
LABEL_9:
    sub_B2C434(Instance, v4);
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

  if ( (byte_418838E & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, userId);
    byte_418838E = 1;
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
    sub_B2C2F8(
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
    sub_B2C2F8(
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
    sub_B2C2F8(
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
  DataManager_c *v15; // x0
  DataManager_c *v16; // x0
  NetworkManager_c *v17; // x0
  int64_t Time; // x0
  const MethodInfo *v19; // x2
  System_String_o *v20; // x0
  System_Guid_o v21; // [xsp+0h] [xbp-40h] BYREF
  System_Guid_o v22; // 0:x0.16

  if ( (byte_41883DF & 1) == 0 )
  {
    sub_B2C35C(&System_Guid_TypeInfo, method);
    sub_B2C35C(&ManagerConfig_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_17893/*"dateVer"*/, v6);
    sub_B2C35C(&StringLiteral_17877/*"dataVer"*/, v7);
    sub_B2C35C(&StringLiteral_23131/*"verCode"*/, v8);
    sub_B2C35C(&StringLiteral_16373/*"appVer"*/, v9);
    sub_B2C35C(&StringLiteral_19387/*"idempotencyKey"*/, v10);
    sub_B2C35C(&StringLiteral_16528/*"authKey"*/, v11);
    sub_B2C35C(&StringLiteral_23041/*"userId"*/, v12);
    sub_B2C35C(&StringLiteral_20181/*"lastAccessTime"*/, v13);
    byte_41883DF = 1;
  }
  v21 = (System_Guid_o)0LL;
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
      sub_B2C434(Instance, method);
    RequestBase__addField_31051928(
      request,
      (System_String_o *)StringLiteral_23041/*"userId"*/,
      NetworkManager_TypeInfo->static_fields->userId,
      0LL);
    RequestBase__addField_31051928(
      request,
      (System_String_o *)StringLiteral_16528/*"authKey"*/,
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
  RequestBase__addField_31051928(
    request,
    (System_String_o *)StringLiteral_16373/*"appVer"*/,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  if ( !byte_418847B )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    byte_418847B = 1;
  }
  v15 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v15 = DataManager_TypeInfo;
  }
  RequestBase__addField(request, (System_String_o *)StringLiteral_17877/*"dataVer"*/, v15->static_fields->dataVersion, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  if ( !byte_418847C )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    byte_418847C = 1;
  }
  v16 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v16 = DataManager_TypeInfo;
  }
  RequestBase__addField_31051460(request, (System_String_o *)StringLiteral_17893/*"dateVer"*/, v16->static_fields->dateVersion, 0LL);
  v17 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime((const MethodInfo *)v17);
  RequestBase__addField_31051460(request, (System_String_o *)StringLiteral_20181/*"lastAccessTime"*/, Time, 0LL);
  RequestBase__addField_31051928(
    request,
    (System_String_o *)StringLiteral_23131/*"verCode"*/,
    ManagerConfig_TypeInfo->static_fields->verCode,
    0LL);
  if ( (BYTE3(System_Guid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Guid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Guid_TypeInfo);
  v21 = System_Guid__NewGuid(0LL);
  *(_QWORD *)&v22.fields._a = &v21;
  *(_QWORD *)&v22.fields._d = 0LL;
  v20 = System_Guid__ToString(v22, v19);
  RequestBase__addField_31051928(request, (System_String_o *)StringLiteral_19387/*"idempotencyKey"*/, v20, 0LL);
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

  if ( (byte_41883BA & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_41883BA = 1;
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
  sub_B2C2F8(
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

  if ( (byte_41883BC & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_41883BC = 1;
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
  sub_B2C2F8(
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
  __int64 v7; // x1

  if ( (byte_41883E1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18003/*"deviceInfo"*/, method);
    sub_B2C35C(&StringLiteral_23552/*"{0} / {1}"*/, v3);
    byte_41883E1 = 1;
  }
  deviceModel = (Il2CppObject *)UnityEngine_SystemInfo__get_deviceModel(0LL);
  operatingSystem = (Il2CppObject *)UnityEngine_SystemInfo__get_operatingSystem(0LL);
  v6 = System_String__Format_44301068((System_String_o *)StringLiteral_23552/*"{0} / {1}"*/, deviceModel, operatingSystem, 0LL);
  if ( !request )
    sub_B2C434(v6, v7);
  RequestBase__addField_31051928(request, (System_String_o *)StringLiteral_18003/*"deviceInfo"*/, v6, 0LL);
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

  if ( (byte_4188383 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, friendCode);
    byte_4188383 = 1;
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
    sub_B2C2F8(
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

  if ( (byte_41883BB & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, isSecurity);
    byte_41883BB = 1;
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
  sub_B2C2F8(
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

  if ( (byte_41883C0 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_41883C0 = 1;
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

  if ( (byte_41883D2 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, type);
    byte_41883D2 = 1;
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v31->webServerSettingAddress,
    (System_Int32_array **)webAddress,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  NetworkManager__SetServerSetting_26282224(this, v38);
}


void __fastcall NetworkManager__SetServerSetting_26282224(NetworkManager_o *this, const MethodInfo *method)
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

  if ( (byte_41883D3 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_41883D3 = 1;
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
    if ( !byte_4188477 )
    {
      sub_B2C35C(&ManagerConfig_TypeInfo, method);
      byte_4188477 = 1;
    }
    v10 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v10 = ManagerConfig_TypeInfo;
    }
    NetworkManager_TypeInfo->static_fields->serverSecurity = v10->static_fields->ReleaseNetworkSecurity;
    if ( !byte_4188478 )
    {
      sub_B2C35C(&ManagerConfig_TypeInfo, method);
      v10 = ManagerConfig_TypeInfo;
      byte_4188478 = 1;
    }
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ManagerConfig_TypeInfo;
    }
    gameServerRedirectAddress = v10->static_fields->ReleaseGameServerAddress;
  }
  v11 = (System_Int32_array **)System_String__Concat_44305532(
                                 gameServerRedirectAddress,
                                 (System_String_o *)StringLiteral_872/*"/"*/,
                                 0LL);
  p_gameServerAddress = (BattleServantConfConponent_o *)&NetworkManager_TypeInfo->static_fields->gameServerAddress;
  p_gameServerAddress->klass = (BattleServantConfConponent_c *)v11;
  sub_B2C2F8(p_gameServerAddress, v11, v13, v14, v15, v16, v17, v18);
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
    if ( !byte_4188479 )
    {
      sub_B2C35C(&ManagerConfig_TypeInfo, webServerRedirectAddress);
      byte_4188479 = 1;
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
  sub_B2C2F8(
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

  if ( (byte_4188389 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4188389 = 1;
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

  if ( (byte_418837F & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, userName);
    byte_418837F = 1;
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
    sub_B2C2F8(
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
void __fastcall NetworkManager__SetSignup_26258204(
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

  if ( (byte_4188380 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, userName);
    byte_4188380 = 1;
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
    sub_B2C2F8(
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

  if ( (byte_418837B & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, userAgent);
    byte_418837B = 1;
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
  sub_B2C2F8(
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

  if ( (byte_41883BD & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_41883BD = 1;
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
  sub_B2C2F8(
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

  if ( (byte_41883EC & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___, loginResultStr);
    sub_B2C35C(&JsonManager_TypeInfo, v4);
    sub_B2C35C(&PurchaseBehaviour_TypeInfo, v5);
    byte_41883EC = 1;
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
           (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  __int64 v53; // x1
  AccountingManager_o *v54; // x0
  __int64 v55; // x1
  System_String_o *OldPaymentFileName; // x0
  System_String_o *OldUnityPersistentDataPath; // x0
  System_String_o *v58; // x26
  System_String_o *FileNameNotConverted; // x1
  System_String_o *v60; // x0
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x1
  System_String_o *v63; // x24
  const MethodInfo *v64; // x1
  System_String_o *v65; // x0

  if ( (byte_418838F & 1) == 0 )
  {
    sub_B2C35C(&AccountingManager_TypeInfo, method);
    sub_B2C35C(&AndroidUtil_TypeInfo, v2);
    sub_B2C35C(&DatFileName_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AccountingManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_418838F = 1;
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
        System_IO_File__Copy_43445176(v28, v30, 1, 0LL);
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
      System_IO_File__Copy_43445176(v43, v45, 1, 0LL);
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
      Instance = (AccountingManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
      if ( !Instance )
        sub_B2C434(0LL, v53);
      if ( AccountingManager__ReadOldPayment(Instance, 0LL) )
      {
        v54 = (AccountingManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
        if ( !v54 )
          sub_B2C434(0LL, v55);
        AccountingManager__WritePayment(v54, 0LL);
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
    v58 = System_String__Concat_44305532(OldUnityPersistentDataPath, (System_String_o *)StringLiteral_872/*"/"*/, 0LL);
    if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    FileNameNotConverted = DatFileName__getFileNameNotConverted(16, 0LL);
    v60 = System_String__Concat_44305532(v58, FileNameNotConverted, 0LL);
    if ( NetworkManager__LoadAuthMd5((NetworkManager_o *)v60, v60, v61) )
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
    System_IO_File__Copy_43445176(v10, v12, 1, 0LL);
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
        System_IO_File__Copy_43445176(v36, v38, 1, 0LL);
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
        v63 = NetworkManager__getAuthFileName(1, v62);
        v65 = NetworkManager__getAuthFileName(0, v64);
        System_IO_File__Copy_43445176(v63, v65, 1, 0LL);
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
  __int64 v5; // x1

  if ( (byte_41883AC & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_B2C35C(&TopHomeRequest_TypeInfo, v3);
    byte_41883AC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__InitConnect(Instance, 0LL);
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate(0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_9:
    sub_B2C434(Instance, v5);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__TimeUpdate(
        NetworkManager_o *this,
        const MethodInfo *method)
{
  NetworkManager__TimeUpdate_d__81_o *v2; // x19

  if ( (byte_4188378 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager__TimeUpdate_d__81_TypeInfo, method);
    byte_4188378 = 1;
  }
  v2 = (NetworkManager__TimeUpdate_d__81_o *)sub_B2C42C(NetworkManager__TimeUpdate_d__81_TypeInfo);
  NetworkManager__TimeUpdate_d__81___ctor(v2, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v2;
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
  System_Action_o *v19; // x20
  CommonUI_o *Instance; // x21
  ErrorDialog_ClickDelegate_o *v21; // x24
  __int64 v22; // x0
  __int64 v23; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]

  if ( (byte_41883A3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, errorTitle);
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, v14);
    sub_B2C35C(&Method_NetworkManager_EndErrorDialog__, v15);
    sub_B2C35C(&Method_NetworkManager_EndErrorWebView__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B2C35C(&WebViewManager_TypeInfo, v18);
    byte_41883A3 = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_B2C2F8(
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
    v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0LL);
    if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WebViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    }
    WebViewManager__OpenView(errorTitle, errorUrl, v19, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(v21, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0LL);
    if ( !Instance )
      sub_B2C434(v22, v23);
    effectDistance.fields.value = 0LL;
    *(_DWORD *)&effectDistance.fields.has_value = 0;
    CommonUI__OpenWarningDialog(Instance, errorTitle, errorDetail, v21, errorType != 1, 0, -1.0, 1, effectDistance, 0LL);
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

  if ( (byte_4188391 & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    byte_4188391 = 1;
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
  System_IO_BinaryWriter_o *v20; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v21; // x24
  __int64 v22; // x1
  ManagerConfig_c *v23; // x0
  NetworkManager_c *v24; // x0
  System_String_o *v25; // x24
  System_String_o *v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x24
  __int64 v29; // x3
  int v30; // w28
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 v34; // x0
  System_String_o *v35; // x21
  NetworkManager_c *v36; // x0
  _DWORD v38[3]; // [xsp+10h] [xbp-70h]
  int v39; // [xsp+1Ch] [xbp-64h]
  int v40; // [xsp+28h] [xbp-58h]

  if ( (byte_4188392 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, fname);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, v8);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&JsonManager_TypeInfo, v10);
    sub_B2C35C(&ManagerConfig_TypeInfo, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_23002/*"userCreateServer"*/, v13);
    sub_B2C35C(&StringLiteral_12595/*"SaveDataVer"*/, v14);
    sub_B2C35C(&StringLiteral_16528/*"authKey"*/, v15);
    sub_B2C35C(&StringLiteral_21946/*"secretKey"*/, v16);
    sub_B2C35C(&StringLiteral_23041/*"userId"*/, v17);
    sub_B2C35C(&StringLiteral_1/*""*/, v18);
    byte_4188392 = 1;
  }
  v40 = 0;
  v39 = 0;
  v19 = (System_IO_Stream_o *)System_IO_File__OpenWrite(fname, 0LL);
  v20 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v20, v19, 0LL);
  v21 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v21,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v23 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  }
  if ( !v21 )
    sub_B2C434(v23, v22);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_12595/*"SaveDataVer"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)ManagerConfig_TypeInfo->static_fields->SaveDataVer,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v24 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v24 = NetworkManager_TypeInfo;
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23002/*"userCreateServer"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v24->static_fields->gameServerAddress,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23041/*"userId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->userId,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16528/*"authKey"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->authKey,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21946/*"secretKey"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->secretKey,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v25 = JsonManager__toJson((Il2CppObject *)v21, 0, 0, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v26 = CatAndMouseGame__CatGame1(v25, 0, 0LL);
  v28 = v26;
  if ( !v20 )
    sub_B2C434(v26, v27);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v20->klass->vtable._22_Write.method)(
    v20,
    v26,
    v20->klass[1]._1.image);
  v38[0] = 150;
  v30 = ++v39;
  klass = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      p_offset += 4;
      if ( v32 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v34 = sub_AC5258(v20, System_IDisposable_TypeInfo, 0LL, v29);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v34)(v20, *(_QWORD *)(v34 + 8));
  if ( v30 && v38[v30 - 1] == 150 )
    v39 = v30 - 1;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  v35 = EncryptedPlayerPrefs__Md5(v28, 0LL);
  v36 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v36 = NetworkManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v36->static_fields->AUTHMD5_KEY_TYPE, v35, 0LL);
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
  System_IO_BinaryWriter_o *v9; // x19
  __int64 v10; // x1
  long double v11; // q0
  NetworkManager_c *v12; // x0
  __int64 v13; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0

  if ( (byte_4188384 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&ManagerConfig_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    byte_4188384 = 1;
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
      v9 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_39287252(v9, v8, 0LL);
      v12 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        *(__n128 *)&v11 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !v9 )
        sub_B2C434(v12, v10);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v9->klass->vtable._22_Write.method)(
        v9,
        NetworkManager_TypeInfo->static_fields->friendCode,
        v9->klass[1]._1.image,
        v11);
      klass = v9->klass;
      if ( *(_WORD *)&v9->klass->_2.bitflags1 )
      {
        v15 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v15;
          p_offset += 4;
          if ( v15 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
            goto LABEL_23;
        }
        v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_23:
        v17 = sub_AC5258(v9, System_IDisposable_TypeInfo, 0LL, v13);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v17)(v9, *(_QWORD *)(v17 + 8));
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
  System_IO_BinaryWriter_o *v9; // x19
  __int64 v10; // x1
  long double v11; // q0
  NetworkManager_c *v12; // x0
  __int64 v13; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0

  if ( (byte_4188381 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&ManagerConfig_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    byte_4188381 = 1;
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
      v9 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_39287252(v9, v8, 0LL);
      v12 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        *(__n128 *)&v11 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !v9 )
        sub_B2C434(v12, v10);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v9->klass->vtable._22_Write.method)(
        v9,
        NetworkManager_TypeInfo->static_fields->userName,
        v9->klass[1]._1.image,
        v11);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._17_Write.method)(
        v9,
        (unsigned int)NetworkManager_TypeInfo->static_fields->genderType,
        v9->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._17_Write.method)(
        v9,
        (unsigned int)NetworkManager_TypeInfo->static_fields->month,
        v9->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._17_Write.method)(
        v9,
        (unsigned int)NetworkManager_TypeInfo->static_fields->day,
        v9->klass->vtable._18_Write.methodPtr);
      klass = v9->klass;
      if ( *(_WORD *)&v9->klass->_2.bitflags1 )
      {
        v15 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v15;
          p_offset += 4;
          if ( v15 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
            goto LABEL_23;
        }
        v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_23:
        v17 = sub_AC5258(v9, System_IDisposable_TypeInfo, 0LL, v13);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v17)(v9, *(_QWORD *)(v17 + 8));
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

  if ( (byte_41883B1 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, method);
    sub_B2C35C(&DatFileName_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v4);
    byte_41883B1 = 1;
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
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall NetworkManager__getBaseMockUrl(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_41883C9 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_41883C9 = 1;
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

  if ( (byte_41883C8 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_19238/*"https://"*/, v2);
    byte_41883C8 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_44305532(
           (System_String_o *)StringLiteral_19238/*"https://"*/,
           v3->static_fields->gameServerAddress,
           0LL);
}


System_String_o *__fastcall NetworkManager__getDataUrl(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_41883CA & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_41883CA = 1;
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

  if ( (byte_4188397 & 1) == 0 )
  {
    sub_B2C35C(&System_DateTime_TypeInfo, v1);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    byte_4188397 = 1;
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


System_DateTime_o __fastcall NetworkManager__getDateTime_26271468(int64_t t, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_4188398 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4188398 = 1;
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

  if ( (byte_41883B5 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_41883B5 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(20, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getLocalDateTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  NetworkManager_c *v3; // x8
  uint64_t dateData; // [xsp+8h] [xbp-8h] BYREF
  System_DateTime_o v6; // 0:x0.8

  if ( (byte_4188399 & 1) == 0 )
  {
    sub_B2C35C(&System_DateTime_TypeInfo, v1);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    byte_4188399 = 1;
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


System_DateTime_o __fastcall NetworkManager__getLocalDateTime_26271612(int64_t t, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_418839A & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418839A = 1;
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

  if ( (byte_4188395 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_4188395 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v5.fields.dateData = NetworkManager__getLocalDateTime((const MethodInfo *)v2).fields.dateData;
  return NetworkManager__getTime_26270684(v5, v3);
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
  __int64 v10; // x1
  System_String_o *text; // x20

  if ( (byte_41883CD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&UnityEngine_TextAsset_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_9154/*"Mock/"*/, v4);
    byte_41883CD = 1;
  }
  if ( !path )
    return 0LL;
  v5 = System_String__Concat_44305532((System_String_o *)StringLiteral_9154/*"Mock/"*/, path, 0LL);
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
    sub_B2C434(v9, v10);
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

  if ( (byte_41883A0 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_41883A0 = 1;
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

  if ( (byte_418839E & 1) == 0 )
  {
    sub_B2C35C(&System_DateTime_TypeInfo, v1);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    byte_418839E = 1;
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
  System_DateTime___ctor_15271124(v14, Year, Month, v6, 0, 0, 0, 1, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v15.fields.dateData = dateTime.fields.dateData;
  return NetworkManager__getTime_26270684(v15, v7);
}


int64_t __fastcall NetworkManager__getNextDayTime_26272448(int32_t hour, const MethodInfo *method)
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

  if ( (byte_418839F & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418839F = 1;
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

  if ( (byte_41883A1 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_41883A1 = 1;
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
  System_DateTime___ctor_15271124(v13, v6, v5, 1, 0, 0, 0, 1, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v14.fields.dateData = dateTime.fields.dateData;
  return NetworkManager__getTime_26270684(v14, v7);
}


int64_t __fastcall NetworkManager__getNextMonthTime_26273084(int32_t day, const MethodInfo *method)
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

  if ( (byte_41883A2 & 1) == 0 )
  {
    sub_B2C35C(&System_DateTime_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    byte_41883A2 = 1;
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
  System_DateTime___ctor_15271124(v13, Year, Month, day, 0, 0, 0, 1, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v14.fields.dateData = dateTime.fields.dateData;
  return NetworkManager__getTime_26270684(v14, v6);
}


System_String_o *__fastcall NetworkManager__getOldAuthFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_41883B0 & 1) == 0 )
  {
    sub_B2C35C(&DatFileName_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v2);
    byte_41883B0 = 1;
  }
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(16, 0LL);
  return System_String__Concat_44307816(temporaryCachePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall NetworkManager__getOldSignupFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_41883B2 & 1) == 0 )
  {
    sub_B2C35C(&DatFileName_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v2);
    byte_41883B2 = 1;
  }
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0LL);
  return System_String__Concat_44307816(temporaryCachePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


WarBoardWallAttackRequest_o *__fastcall NetworkManager__getRequest_WarBoardWallAttackRequest_(
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo_1AB4500 *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  WarBoardWallAttackRequest_o *v6; // x19
  BattleServantConfConponent_o *v7; // x20
  System_Delegate_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Delegate_o *v15; // x21
  System_Int32_array **v16; // x1

  if ( (byte_41893ED & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, method);
    byte_41893ED = 1;
  }
  v4 = ((__int64 (*)(void))method->rgctx_data->_0_System_Activator_CreateInstance_T_->methodPointer)();
  if ( !v4 )
    sub_B2C434(0LL, v5);
  v6 = (WarBoardWallAttackRequest_o *)v4;
  v7 = (BattleServantConfConponent_o *)(v4 + 16);
  v8 = System_Delegate__Combine(*(System_Delegate_o **)(v4 + 16), (System_Delegate_o *)func, 0LL);
  if ( !v8 )
    goto LABEL_7;
  v15 = v8;
  v16 = (System_Int32_array **)sub_B2C41C(v8, NetworkManager_ResultCallbackFunc_TypeInfo);
  if ( !v16 )
  {
    sub_B2C728(v15);
LABEL_7:
    v16 = 0LL;
  }
  v6->fields.CallBack = (struct NetworkManager_ResultCallbackFunc_o *)v16;
  sub_B2C2F8(v7, v16, v9, v10, v11, v12, v13, v14);
  return v6;
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

  if ( (byte_418839B & 1) == 0 )
  {
    sub_B2C35C(&System_DateTime_TypeInfo, v1);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    byte_418839B = 1;
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
  System_TimeSpan___ctor_41712580(v9, 9, 0, 0, 0LL);
  v12.fields._ticks = value.fields._ticks;
  v10.fields.dateData = (uint64_t)&dateData;
  return System_DateTime__Add(v10, v12, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getServerDateTime_26271756(int64_t t, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  System_TimeSpan_o value; // [xsp+0h] [xbp-20h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v7; // 0:x0.8
  System_TimeSpan_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8
  System_TimeSpan_o v11; // 0:x1.8

  if ( (byte_418839C & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418839C = 1;
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
  System_TimeSpan___ctor_41712580(v8, 9, 0, 0, 0LL);
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

  if ( (byte_41883B4 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_41883B4 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(19, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


int64_t __fastcall NetworkManager__getServerTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  const MethodInfo *v3; // x1
  System_DateTime_o v5; // 0:x0.8

  if ( (byte_4188396 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_4188396 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v5.fields.dateData = NetworkManager__getServerDateTime((const MethodInfo *)v2).fields.dateData;
  return NetworkManager__getTime_26270684(v5, v3);
}


System_String_o *__fastcall NetworkManager__getSignupFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_41883B3 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_41883B3 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


void __fastcall NetworkManager__getStoreUrl(
        System_String_o *storeName,
        System_String_o *id,
        NetworkManager_StoreCallbackFunc_o *callback,
        const MethodInfo *method)
{
  NetworkManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  UnityEngine_MonoBehaviour_o *v10; // x22
  System_Collections_IEnumerator_o *updated; // x1

  if ( (byte_41883CC & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, id);
    byte_41883CC = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v8);
  v10 = (UnityEngine_MonoBehaviour_o *)Instance;
  updated = NetworkManager__RequestApplicationUpdateCR(Instance, storeName, id, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748(v10, updated, 0LL);
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  const MethodInfo *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x19
  __int64 v49; // x0
  __int64 v50; // x0
  int32_t v51; // [xsp+Ch] [xbp-24h] BYREF
  int64_t UserId; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_41883D9 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&long_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&object___TypeInfo, v5);
    sub_B2C35C(&StringLiteral_457/*"&gachaId="*/, v6);
    sub_B2C35C(&StringLiteral_23265/*"webview/summonDetail?userId="*/, v7);
    byte_41883D9 = 1;
  }
  v9 = (System_Object_array *)sub_B2C374(object___TypeInfo, 5LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(0, v8);
  if ( !v9 )
    sub_B2C434(BaseUrl, v11);
  v18 = (System_Int32_array **)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_B2C41C(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_28;
  }
  if ( !v9->max_length )
    goto LABEL_27;
  v9->m_Items[0] = (Il2CppObject *)v18;
  sub_B2C2F8((BattleServantConfConponent_o *)v9->m_Items, v18, v12, v13, v14, v15, v16, v17);
  BaseUrl = (System_String_o *)StringLiteral_23265/*"webview/summonDetail?userId="*/;
  if ( StringLiteral_23265/*"webview/summonDetail?userId="*/ )
  {
    BaseUrl = (System_String_o *)sub_B2C41C(StringLiteral_23265/*"webview/summonDetail?userId="*/, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_28;
    v25 = (System_Int32_array **)StringLiteral_23265/*"webview/summonDetail?userId="*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_27;
  v9->m_Items[1] = (Il2CppObject *)v25;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  UserId = NetworkManager__get_UserId(v26);
  BaseUrl = (System_String_o *)j_il2cpp_value_box_0(long_TypeInfo, &UserId);
  v33 = (System_Int32_array **)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_B2C41C(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_28;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_27;
  v9->m_Items[2] = (Il2CppObject *)v33;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[2], v33, v27, v28, v29, v30, v31, v32);
  BaseUrl = (System_String_o *)StringLiteral_457/*"&gachaId="*/;
  if ( StringLiteral_457/*"&gachaId="*/ )
  {
    BaseUrl = (System_String_o *)sub_B2C41C(StringLiteral_457/*"&gachaId="*/, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_28;
    v40 = (System_Int32_array **)StringLiteral_457/*"&gachaId="*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_27;
  v9->m_Items[3] = (Il2CppObject *)v40;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[3], v40, v34, v35, v36, v37, v38, v39);
  v51 = gachaId;
  BaseUrl = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v47 = (System_Int32_array **)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_B2C41C(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
    {
LABEL_28:
      v50 = sub_B2C454(BaseUrl);
      sub_B2C400(v50, 0LL);
    }
  }
  if ( v9->max_length <= 4 )
  {
LABEL_27:
    v49 = sub_B2C460(BaseUrl);
    sub_B2C400(v49, 0LL);
  }
  v9->m_Items[4] = (Il2CppObject *)v47;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[4], v47, v41, v42, v43, v44, v45, v46);
  return System_String__Concat_44315316(v9, 0LL);
}


int64_t __fastcall NetworkManager__getTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x8
  const MethodInfo *v3; // x1
  int64_t Time_26270684; // x0
  System_DateTime_o v6; // 0:x0.8

  if ( (byte_4188393 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_4188393 = 1;
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
    Time_26270684 = NetworkManager__getTime_26270684(v6, v3);
    v2 = NetworkManager_TypeInfo;
    NetworkManager_TypeInfo->static_fields->nowTime = Time_26270684;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->nowTime;
}


int64_t __fastcall NetworkManager__getTime_26270684(System_DateTime_o dateTime, const MethodInfo *method)
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
  if ( (byte_4188394 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4188394 = 1;
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

  if ( (byte_418839D & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_418839D = 1;
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
  __int64 v27; // x1
  __int64 *v28; // x8
  NetworkManager_c *v29; // x0
  System_String_o *v30; // x21
  System_String_o **v31; // x9
  __int64 *v32; // x8
  NetworkManager_c *v33; // x0
  System_String_o *v34; // x19
  System_String_o **v35; // x9
  NetworkManager_c *v36; // x0
  int64_t Time; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  int32_t v39; // w21
  int32_t v40; // w20
  System_String_o *v41; // x2
  __int64 *v42; // x8
  System_String_o *v43; // x0
  __int64 *v44; // x8
  System_String_o *v45; // x1
  int64_t v47; // [xsp+0h] [xbp-30h] BYREF
  int64_t v48; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41883CB & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, isSecurity);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_20182/*"lastAccessTime="*/, v8);
    sub_B2C35C(&StringLiteral_466/*"&v="*/, v9);
    sub_B2C35C(&StringLiteral_19201/*"http://"*/, v10);
    sub_B2C35C(&StringLiteral_952/*"/webview/"*/, v11);
    sub_B2C35C(&StringLiteral_1522/*"?"*/, v12);
    sub_B2C35C(&StringLiteral_1530/*"?lastAccessTime="*/, v13);
    sub_B2C35C(&StringLiteral_19237/*"https:"*/, v14);
    sub_B2C35C(&StringLiteral_460/*"&lastAccessTime="*/, v15);
    sub_B2C35C(&StringLiteral_18725/*"file:"*/, v16);
    sub_B2C35C(&StringLiteral_19238/*"https://"*/, v17);
    sub_B2C35C(&StringLiteral_1/*""*/, v18);
    sub_B2C35C(&StringLiteral_1533/*"?v="*/, v19);
    sub_B2C35C(&StringLiteral_19200/*"http:"*/, v20);
    byte_41883CB = 1;
  }
  v47 = 0LL;
  v48 = 0LL;
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
    v32 = &StringLiteral_19238/*"https://"*/;
    v33 = NetworkManager_TypeInfo;
    if ( !v25 )
      v32 = &StringLiteral_19201/*"http://"*/;
    v34 = (System_String_o *)*v32;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v33 = NetworkManager_TypeInfo;
    }
    v35 = (System_String_o **)&StringLiteral_952/*"/webview/"*/;
    if ( !isWebView )
      v35 = (System_String_o **)&StringLiteral_1/*""*/;
    v26 = System_String__Concat_44307816(v34, v33->static_fields->webServerAddress, *v35, 0LL);
    goto LABEL_38;
  }
  v25 = 0;
  if ( !path )
    goto LABEL_30;
LABEL_18:
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_18725/*"file:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_39;
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19200/*"http:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_39;
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19237/*"https:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_39;
  v28 = &StringLiteral_19238/*"https://"*/;
  v29 = NetworkManager_TypeInfo;
  if ( !v25 )
    v28 = &StringLiteral_19201/*"http://"*/;
  v30 = (System_String_o *)*v28;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v29 = NetworkManager_TypeInfo;
  }
  v31 = (System_String_o **)&StringLiteral_952/*"/webview/"*/;
  if ( !isWebView )
    v31 = (System_String_o **)&StringLiteral_1/*""*/;
  v26 = System_String__Concat_44308944(v30, v29->static_fields->webServerAddress, *v31, path, 0LL);
LABEL_38:
  path = v26;
LABEL_39:
  if ( isWebView )
  {
    if ( !path )
      sub_B2C434(v26, v27);
    if ( System_String__StartsWith(path, (System_String_o *)StringLiteral_19200/*"http:"*/, 0LL)
      || System_String__StartsWith(path, (System_String_o *)StringLiteral_19237/*"https:"*/, 0LL) )
    {
      v36 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime((const MethodInfo *)v36);
      static_fields = NetworkManager_TypeInfo->static_fields;
      v47 = Time / static_fields->WebCacheTime;
      v48 = Time;
      v39 = System_String__IndexOf_44377880(path, static_fields->webServerAddress, 0LL);
      v40 = System_String__IndexOf_44377880(path, (System_String_o *)StringLiteral_1522/*"?"*/, 0LL);
      if ( (v39 & 0x80000000) == 0 )
      {
        v41 = System_Int64__ToString((int64_t)&v47, 0LL);
        if ( (v40 & 0x80000000) != 0 )
          v42 = &StringLiteral_1533/*"?v="*/;
        else
          v42 = &StringLiteral_466/*"&v="*/;
        v45 = (System_String_o *)*v42;
        return System_String__Concat_44307816(path, v45, v41, 0LL);
      }
      if ( (v40 & 0x80000000) != 0 )
      {
        v43 = System_Int64__ToString((int64_t)&v48, 0LL);
        v44 = &StringLiteral_1530/*"?lastAccessTime="*/;
        goto LABEL_55;
      }
      if ( (~(System_String__IndexOf_44377880(path, (System_String_o *)StringLiteral_20182/*"lastAccessTime="*/, 0LL) >> 31) & 0x1F) == 0 )
      {
        v43 = System_Int64__ToString((int64_t)&v48, 0LL);
        v44 = &StringLiteral_460/*"&lastAccessTime="*/;
LABEL_55:
        v45 = (System_String_o *)*v44;
        v41 = v43;
        return System_String__Concat_44307816(path, v45, v41, 0LL);
      }
    }
  }
  return path;
}


System_String_o *__fastcall NetworkManager__getWebViewAddress(System_String_o *path, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_41883D6 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_41883D6 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_44305532(v3->static_fields->webViewBaseURL, path, 0LL);
}


System_String_o *__fastcall NetworkManager__getWebViewAddress_26285648(int32_t addressType, const MethodInfo *method)
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

  if ( (byte_41883D8 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21834/*"rights"*/, v6);
    sub_B2C35C(&StringLiteral_22434/*"summonDetail"*/, v7);
    sub_B2C35C(&StringLiteral_17861/*"dBanner"*/, v8);
    sub_B2C35C(&StringLiteral_22642/*"terms"*/, v9);
    sub_B2C35C(&StringLiteral_16894/*"boxGacha"*/, v10);
    sub_B2C35C(&StringLiteral_21062/*"news"*/, v11);
    sub_B2C35C(&StringLiteral_17761/*"credit"*/, v12);
    sub_B2C35C(&StringLiteral_19128/*"help"*/, v13);
    sub_B2C35C(&StringLiteral_22204/*"spdeal"*/, v14);
    sub_B2C35C(&StringLiteral_17663/*"contact"*/, v15);
    sub_B2C35C(&StringLiteral_22578/*"tBanner"*/, v16);
    sub_B2C35C(&StringLiteral_17958/*"deleteAccount"*/, v17);
    sub_B2C35C(&StringLiteral_1/*""*/, v18);
    sub_B2C35C(&StringLiteral_23198/*"warBoard"*/, v19);
    sub_B2C35C(&StringLiteral_21533/*"privacyPolicy"*/, v20);
    byte_41883D8 = 1;
  }
  v21 = &StringLiteral_19128/*"help"*/;
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
        v21 = &StringLiteral_21062/*"news"*/;
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
                  (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
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
                                        (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        }
        sub_B2C434(webViewAddress, method);
      }
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      return static_fields->IOS_ExaminationNewsUrl;
    case 1:
      v21 = &StringLiteral_22434/*"summonDetail"*/;
      goto LABEL_25;
    case 2:
      goto LABEL_25;
    case 3:
      v21 = &StringLiteral_17663/*"contact"*/;
      goto LABEL_25;
    case 4:
      v21 = &StringLiteral_22642/*"terms"*/;
      goto LABEL_25;
    case 5:
      v21 = &StringLiteral_17761/*"credit"*/;
      goto LABEL_25;
    case 6:
      v21 = &StringLiteral_21834/*"rights"*/;
      goto LABEL_25;
    case 7:
      v21 = &StringLiteral_22578/*"tBanner"*/;
      goto LABEL_25;
    case 8:
      v21 = &StringLiteral_22204/*"spdeal"*/;
      goto LABEL_25;
    case 9:
      v21 = &StringLiteral_16894/*"boxGacha"*/;
      goto LABEL_25;
    case 10:
      v21 = &StringLiteral_17861/*"dBanner"*/;
      goto LABEL_25;
    case 11:
      v21 = &StringLiteral_21533/*"privacyPolicy"*/;
      goto LABEL_25;
    case 12:
      v21 = &StringLiteral_17958/*"deleteAccount"*/;
      goto LABEL_25;
    case 13:
      v21 = &StringLiteral_23198/*"warBoard"*/;
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
  if ( (byte_41883D7 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_19237/*"https:"*/, v3);
    path = (System_String_o *)sub_B2C35C(&StringLiteral_19200/*"http:"*/, v4);
    byte_41883D7 = 1;
  }
  if ( !v2 )
    sub_B2C434(path, method);
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_19200/*"http:"*/, 0LL)
    || System_String__StartsWith(v2, (System_String_o *)StringLiteral_19237/*"https:"*/, 0LL) )
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

  if ( (byte_41883DD & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_41883DD = 1;
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

  if ( (byte_4188374 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_4188374 = 1;
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

  if ( (byte_4188372 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_4188372 = 1;
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

  if ( (byte_418836E & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_418836E = 1;
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

  if ( (byte_4188371 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_4188371 = 1;
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

  if ( (byte_4188373 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_4188373 = 1;
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

  if ( (byte_41883DE & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_41883DE = 1;
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
  sub_B2C2F8(
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
  __int64 v20; // x1
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *dataServerAddress; // x0
  NetworkManager_c *v23; // x0
  struct NetworkManager_StaticFields *v24; // x8
  System_String_o *v25; // x19
  ManagerConfig_c *v26; // x0
  struct ManagerConfig_StaticFields *v27; // x8
  System_String_o *ReleaseDataServerAddress; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x19
  NetworkManager_c *v36; // x8
  System_Int32_array **dataServerRedirectAddress; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
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

  if ( (byte_41883D4 & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, *(_QWORD *)&addressType);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&string___TypeInfo, v5);
    sub_B2C35C(&StringLiteral_886/*"/AssetStorages/"*/, v6);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v7);
    sub_B2C35C(&StringLiteral_20036/*"jar:"*/, v8);
    byte_41883D4 = 1;
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
      v17 = (System_Int32_array **)System_String__Concat_44308944(
                                     streamingAssetsPath,
                                     (System_String_o *)StringLiteral_886/*"/AssetStorages/"*/,
                                     v10->static_fields->PlatformName,
                                     (System_String_o *)StringLiteral_872/*"/"*/,
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
      sub_B2C2F8(p_dataServerAddress, v17, v11, v12, v13, v14, v15, v16);
      static_fields = NetworkManager_TypeInfo->static_fields;
      dataServerAddress = static_fields->dataServerAddress;
      if ( !dataServerAddress )
        goto LABEL_89;
      if ( System_String__StartsWith(dataServerAddress, static_fields->FILE_URL_SCHEME, 0LL) )
        return;
      v23 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v23 = NetworkManager_TypeInfo;
      }
      v24 = v23->static_fields;
      v25 = v24->dataServerAddress;
      dataServerAddress = System_String__Concat_44305532(
                            (System_String_o *)StringLiteral_20036/*"jar:"*/,
                            v24->FILE_URL_SCHEME,
                            0LL);
      if ( !v25 )
LABEL_89:
        sub_B2C434(dataServerAddress, v20);
      if ( System_String__StartsWith(v25, dataServerAddress, 0LL) )
        return;
      v95 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v95 = NetworkManager_TypeInfo;
      }
      v87 = (System_Int32_array **)System_String__Concat_44305532(
                                     v95->static_fields->FILE_URL_SCHEME,
                                     v95->static_fields->dataServerAddress,
                                     0LL);
      goto LABEL_85;
    case 1:
      v35 = sub_B2C374(string___TypeInfo, 5LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !byte_418847A )
      {
        sub_B2C35C(&ManagerConfig_TypeInfo, v20);
        byte_418847A = 1;
      }
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      }
      if ( !v35 )
        goto LABEL_89;
      v51 = *(System_Int32_array ***)(*(_QWORD *)&dataServerAddress[7].fields + 152LL);
      if ( v51 )
      {
        dataServerAddress = (System_String_o *)sub_B2C41C(v51, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
        if ( !dataServerAddress )
          goto LABEL_88;
      }
      if ( !*(_DWORD *)(v35 + 24) )
        goto LABEL_87;
      *(_QWORD *)(v35 + 32) = v51;
      sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 32), v51, v45, v46, v47, v48, v49, v50);
      dataServerAddress = (System_String_o *)StringLiteral_872/*"/"*/;
      if ( StringLiteral_872/*"/"*/ )
      {
        dataServerAddress = (System_String_o *)sub_B2C41C(StringLiteral_872/*"/"*/, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
        if ( !dataServerAddress )
          goto LABEL_88;
        v58 = (System_Int32_array **)StringLiteral_872/*"/"*/;
      }
      else
      {
        v58 = 0LL;
      }
      if ( *(_DWORD *)(v35 + 24) <= 1u )
        goto LABEL_87;
      *(_QWORD *)(v35 + 40) = v58;
      sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 40), v58, v52, v53, v54, v55, v56, v57);
      dataServerFolder = (System_Int32_array **)NetworkManager_TypeInfo->static_fields->dataServerFolder;
      if ( dataServerFolder )
      {
        dataServerAddress = (System_String_o *)sub_B2C41C(dataServerFolder, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
        if ( !dataServerAddress )
          goto LABEL_88;
      }
      if ( *(_DWORD *)(v35 + 24) <= 2u )
        goto LABEL_87;
      *(_QWORD *)(v35 + 48) = dataServerFolder;
      sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 48), dataServerFolder, v72, v73, v74, v75, v76, v77);
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
        dataServerAddress = (System_String_o *)sub_B2C41C(v79, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
        if ( !dataServerAddress )
          goto LABEL_88;
      }
      if ( *(_DWORD *)(v35 + 24) <= 3u )
        goto LABEL_87;
      *(_QWORD *)(v35 + 56) = v79;
      sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 56), v79, v66, v67, v68, v69, v70, v71);
      dataServerAddress = (System_String_o *)StringLiteral_872/*"/"*/;
      if ( StringLiteral_872/*"/"*/ )
      {
        dataServerAddress = (System_String_o *)sub_B2C41C(StringLiteral_872/*"/"*/, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
        if ( dataServerAddress )
        {
          v86 = (System_Int32_array **)StringLiteral_872/*"/"*/;
          goto LABEL_75;
        }
LABEL_88:
        v98 = sub_B2C454(dataServerAddress);
        sub_B2C400(v98, 0LL);
      }
      v86 = 0LL;
LABEL_75:
      if ( *(_DWORD *)(v35 + 24) <= 4u )
      {
LABEL_87:
        v97 = sub_B2C460(dataServerAddress);
        sub_B2C400(v97, 0LL);
      }
      *(_QWORD *)(v35 + 64) = v86;
      sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 64), v86, v80, v81, v82, v83, v84, v85);
      v87 = (System_Int32_array **)System_String__Concat_44385656((System_String_array *)v35, 0LL);
      v94 = NetworkManager_TypeInfo;
LABEL_86:
      v96 = v94->static_fields;
      v96->dataServerAddress = (struct System_String_o *)v87;
      sub_B2C2F8((BattleServantConfConponent_o *)&v96->dataServerAddress, v87, v88, v89, v90, v91, v92, v93);
      return;
    case 2:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !byte_418847A )
      {
        sub_B2C35C(&ManagerConfig_TypeInfo, *(_QWORD *)&addressType);
        byte_418847A = 1;
      }
      v26 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
        v27 = ManagerConfig_TypeInfo->static_fields;
        ReleaseDataServerAddress = v27->ReleaseDataServerAddress;
        goto LABEL_84;
      }
      if ( ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        v27 = ManagerConfig_TypeInfo->static_fields;
        ReleaseDataServerAddress = v27->ReleaseDataServerAddress;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v26 = ManagerConfig_TypeInfo;
        v27 = ManagerConfig_TypeInfo->static_fields;
        ReleaseDataServerAddress = v27->ReleaseDataServerAddress;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_84;
      }
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v27 = ManagerConfig_TypeInfo->static_fields;
      }
LABEL_84:
      v87 = (System_Int32_array **)System_String__Concat_44308944(
                                     ReleaseDataServerAddress,
                                     (System_String_o *)StringLiteral_872/*"/"*/,
                                     v27->PlatformName,
                                     (System_String_o *)StringLiteral_872/*"/"*/,
                                     0LL);
LABEL_85:
      v94 = NetworkManager_TypeInfo;
      goto LABEL_86;
    case 3:
      dataServerAddress = (System_String_o *)sub_B2C374(string___TypeInfo, 5LL);
      v35 = (__int64)dataServerAddress;
      v36 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v36 = NetworkManager_TypeInfo;
      }
      if ( !v35 )
        goto LABEL_89;
      dataServerRedirectAddress = (System_Int32_array **)v36->static_fields->dataServerRedirectAddress;
      if ( dataServerRedirectAddress )
      {
        dataServerAddress = (System_String_o *)sub_B2C41C(dataServerRedirectAddress, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
        if ( !dataServerAddress )
          goto LABEL_88;
      }
      if ( !*(_DWORD *)(v35 + 24) )
        goto LABEL_87;
      *(_QWORD *)(v35 + 32) = dataServerRedirectAddress;
      sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 32), dataServerRedirectAddress, v29, v30, v31, v32, v33, v34);
      dataServerAddress = (System_String_o *)StringLiteral_872/*"/"*/;
      if ( StringLiteral_872/*"/"*/ )
      {
        dataServerAddress = (System_String_o *)sub_B2C41C(StringLiteral_872/*"/"*/, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
        if ( !dataServerAddress )
          goto LABEL_88;
        v44 = (System_Int32_array **)StringLiteral_872/*"/"*/;
      }
      else
      {
        v44 = 0LL;
      }
      if ( *(_DWORD *)(v35 + 24) <= 1u )
        goto LABEL_87;
      *(_QWORD *)(v35 + 40) = v44;
      sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 40), v44, v38, v39, v40, v41, v42, v43);
      v65 = (System_Int32_array **)NetworkManager_TypeInfo->static_fields->dataServerFolder;
      if ( v65 )
      {
        dataServerAddress = (System_String_o *)sub_B2C41C(v65, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
        if ( !dataServerAddress )
          goto LABEL_88;
      }
      if ( *(_DWORD *)(v35 + 24) <= 2u )
        goto LABEL_87;
      *(_QWORD *)(v35 + 48) = v65;
      sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 48), v65, v59, v60, v61, v62, v63, v64);
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
  __int64 v23; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *webViewAddress; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *currentKey; // x21
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v29; // x1
  System_String_o *v30; // x0
  __int64 v31; // x1
  System_Xml_Schema_XmlSchemaObject_o *v32; // x22
  NetworkManager_c *v33; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v34; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v35; // x0
  __int64 v36; // x1
  System_String_o *v37; // x1
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v39; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v40; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_41883D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__Add__, contactURL);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__, v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__,
      v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__, v15);
    sub_B2C35C(&NetworkManager_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_17663/*"contact"*/, v17);
    sub_B2C35C(&StringLiteral_17958/*"deleteAccount"*/, v18);
    sub_B2C35C(&StringLiteral_1/*""*/, v19);
    sub_B2C35C(&StringLiteral_21533/*"privacyPolicy"*/, v20);
    byte_41883D5 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v21 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v21 = NetworkManager_TypeInfo;
  }
  p_webViewBaseURL = (BattleServantConfConponent_o *)&v21->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (BattleServantConfConponent_c *)baseURL;
  sub_B2C2F8(
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
          (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        !filePassInfo)
    || (webViewAddress = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys((System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)filePassInfo, (const MethodInfo_2DB18CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__)) == 0LL )
  {
    sub_B2C434(webViewAddress, v23);
  }
  System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)webViewAddress,
    (const MethodInfo_20F58D8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v25 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
            &v40,
            (const MethodInfo_2753F88 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    if ( !v25 )
      break;
    currentKey = v40.fields.currentKey;
    if ( !v40.fields.currentKey )
      sub_B2C434(v25, v26);
    if ( System_String__Equals_44292872(
           (System_String_o *)v40.fields.currentKey,
           (System_String_o *)StringLiteral_17663/*"contact"*/,
           0LL)
      || System_String__Equals_44292872((System_String_o *)currentKey, (System_String_o *)StringLiteral_21533/*"privacyPolicy"*/, 0LL)
      || System_String__Equals_44292872((System_String_o *)currentKey, (System_String_o *)StringLiteral_17958/*"deleteAccount"*/, 0LL) )
    {
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)filePassInfo,
               (System_Type_o *)currentKey,
               (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        sub_B2C434(0LL, v29);
      v30 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
    }
    else
    {
      v35 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)filePassInfo,
              (System_Type_o *)currentKey,
              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v35 )
        sub_B2C434(0LL, v36);
      v37 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v35->klass->vtable[3].method)(
                                 v35,
                                 v35->klass->vtable[4].methodPtr);
      v30 = System_String__Concat_44305532(baseURL, v37, 0LL);
    }
    v32 = (System_Xml_Schema_XmlSchemaObject_o *)v30;
    v33 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v33 = NetworkManager_TypeInfo;
    }
    v34 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v33->static_fields->webViewAddress;
    if ( !v34 )
      sub_B2C434(0LL, v31);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v34,
      (System_Xml_XmlQualifiedName_o *)currentKey,
      v32,
      (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
    &v40,
    (const MethodInfo_2753F84 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall NetworkManager_LoginCallbackFunc__EndInvoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  System_String_c *v13; // x8
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
  void (__fastcall **v27)(System_String_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, System_String_o *, _QWORD); // x0
  NetworkManager_LoginCallbackFunc_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(System_String_o *, __int64); // x23
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
  System_String_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  NetworkManager_LoginCallbackFunc_o *v52; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (NetworkManager_LoginCallbackFunc_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(System_String_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, result, method, v3);
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
                klass = result->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(result, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(result, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(result, class_0, v10, v12);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v16)(result, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(result, v31);
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
            v29 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, result, v29);
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
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v24)(v32, result, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v32
                                                                           + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                           + 312))(
                v32,
                result,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v33)(v32, result, v31);
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall NetworkManager_ResultCallbackFunc__EndInvoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  System_String_c *v13; // x8
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
  void (__fastcall **v27)(System_String_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, System_String_o *, _QWORD); // x0
  NetworkManager_ResultCallbackFunc_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(System_String_o *, __int64); // x23
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
  System_String_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  NetworkManager_ResultCallbackFunc_o *v52; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (NetworkManager_ResultCallbackFunc_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(System_String_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, result, method, v3);
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
                klass = result->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(result, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(result, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(result, class_0, v10, v12);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v16)(result, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(result, v31);
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
            v29 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, result, v29);
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
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v24)(v32, result, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v32
                                                                           + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                           + 312))(
                v32,
                result,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v33)(v32, result, v31);
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall NetworkManager_StoreCallbackFunc__EndInvoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  System_String_c *v13; // x8
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
  void (__fastcall **v27)(System_String_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, System_String_o *, _QWORD); // x0
  NetworkManager_StoreCallbackFunc_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(System_String_o *, __int64); // x23
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
  System_String_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  NetworkManager_StoreCallbackFunc_o *v52; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (NetworkManager_StoreCallbackFunc_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(System_String_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, url, method, v3);
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
                klass = url->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&url->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&url->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(url, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&url->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(url, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = url->klass;
                if ( *(_WORD *)&url->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&url->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(url, class_0, v10, v12);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v16)(url, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&url->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  url,
                  *((_QWORD *)&url->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(url, v31);
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
            v29 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, url, v29);
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
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v24)(v32, url, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v32
                                                                           + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                           + 312))(
                v32,
                url,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v33)(v32, url, v31);
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
  struct ResponseCommandBase_array **p_commandList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x22
  PurchaseByBankResponseCommand_o *v30; // x23
  MissionNotifyResponseCommand_o *v31; // x23
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v39; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct ResponseCommandBase_array *commandList; // x8
  __int64 v47; // x25
  int max_length; // w9
  __int64 v49; // x8
  System_Xml_Schema_XmlSchemaObject_o *v50; // x23
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *commandLookup; // x24
  BattleServantConfConponent_o *p__2__current; // x20
  bool result; // w0
  ManagerConfig_c *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UnityEngine_Coroutine_o *communicationCoroutine; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  NetworkManager_c *v92; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  struct NetworkManager_StaticFields *v94; // x0
  System_Int32_array **v95; // x1
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  __int64 v102; // x20
  __int64 v103; // x20
  UnityEngine_Object_o *v104; // x20
  __int64 v105; // x0

  v8 = this;
  if ( (byte_418BA9B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ResponseCommandBase__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ResponseCommandBase___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_ResponseCommandBase__TypeInfo, v15);
    sub_B2C35C(&ManagerConfig_TypeInfo, v16);
    sub_B2C35C(&MissionNotifyResponseCommand_TypeInfo, v17);
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&PurchaseByBankResponseCommand_TypeInfo, v20);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_RequestBase__Clear__, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__, v24);
    this = (NetworkManager__Initialize_d__82_o *)sub_B2C35C(&StringLiteral_1/*""*/, v25);
    byte_418BA9B = 1;
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
      v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ResponseCommandBase__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v29,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ResponseCommandBase___ctor__);
      v30 = (PurchaseByBankResponseCommand_o *)sub_B2C42C(PurchaseByBankResponseCommand_TypeInfo);
      PurchaseByBankResponseCommand___ctor(v30, 0LL);
      if ( !v29 )
        goto LABEL_15;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ResponseCommandBase__Add__);
      v31 = (MissionNotifyResponseCommand_o *)sub_B2C42C(MissionNotifyResponseCommand_TypeInfo);
      MissionNotifyResponseCommand___ctor(v31, 0LL);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ResponseCommandBase__Add__);
      v32 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__);
      _4__this->fields.commandList = (struct ResponseCommandBase_array *)v32;
      sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.commandList, v32, v33, v34, v35, v36, v37, v38);
      v39 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v39,
        (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__);
      _4__this->fields.commandLookup = (struct System_Collections_Generic_Dictionary_string__ResponseCommandBase__o *)v39;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&_4__this->fields.commandLookup,
        (System_Int32_array **)v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      commandList = _4__this->fields.commandList;
      if ( !commandList )
        goto LABEL_15;
      v47 = 0LL;
      while ( 1 )
      {
        max_length = commandList->max_length;
        if ( (int)v47 >= max_length )
          break;
        if ( (unsigned int)v47 >= max_length )
        {
          v105 = sub_B2C460(this);
          sub_B2C400(v105, 0LL);
        }
        v49 = (__int64)commandList + 8 * v47;
        v50 = *(System_Xml_Schema_XmlSchemaObject_o **)(v49 + 32);
        if ( v50 )
        {
          commandLookup = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.commandLookup;
          this = (NetworkManager__Initialize_d__82_o *)ResponseCommandBase__GetCommandName(
                                                         *(ResponseCommandBase_o **)(v49 + 32),
                                                         0LL);
          if ( commandLookup )
          {
            System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
              commandLookup,
              (System_Xml_XmlQualifiedName_o *)this,
              v50,
              (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__);
            commandList = *p_commandList;
            ++v47;
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
      sub_B2C2F8(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
    v54 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v54 = ManagerConfig_TypeInfo;
    }
    if ( v54->static_fields->UseAppServer )
      NetworkServicePluginScript__CheckService(0LL);
    this = (NetworkManager__Initialize_d__82_o *)_4__this->fields.communicationWaitList;
    if ( this )
    {
      System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
        (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this,
        (const MethodInfo_295DB18 *)Method_System_Collections_Generic_Queue_RequestBase__Clear__);
      communicationCoroutine = _4__this->fields.communicationCoroutine;
      if ( communicationCoroutine )
        UnityEngine_MonoBehaviour__StopCoroutine_35310416(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          communicationCoroutine,
          0LL);
      _4__this->fields.communicationWork = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.communicationWork, 0LL, v55, v56, v57, v58, v59, v60);
      _4__this->fields.communicationCoroutine = 0LL;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&_4__this->fields.communicationCoroutine,
        0LL,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      _4__this->fields.communicationWorkResponseList = 0LL;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&_4__this->fields.communicationWorkResponseList,
        0LL,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      _4__this->fields.cacheRefreshWork = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.cacheRefreshWork, 0LL, v74, v75, v76, v77, v78, v79);
      _4__this->fields.cacheRefreshWorkResponseList = 0LL;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&_4__this->fields.cacheRefreshWorkResponseList,
        0LL,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
      v92 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v92 = NetworkManager_TypeInfo;
      }
      v92->static_fields->isErrorServerTimeLimitOver = 0;
      v92->static_fields->isRebootBlock = 0;
      v92->static_fields->isLogin = 0;
      static_fields = v92->static_fields;
      static_fields->sessionId = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->sessionId, 0LL, v86, v87, v88, v89, v90, v91);
      v94 = NetworkManager_TypeInfo->static_fields;
      v95 = (System_Int32_array **)StringLiteral_1/*""*/;
      v94->dataServerFolder = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B2C2F8((BattleServantConfConponent_o *)&v94->dataServerFolder, v95, v96, v97, v98, v99, v100, v101);
      v102 = *((_QWORD *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__ + 3);
      if ( (*(_BYTE *)(v102 + 306) & 1) == 0 )
        sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__ + 3));
      v103 = **(_QWORD **)(v102 + 192);
      if ( (*(_BYTE *)(v103 + 306) & 1) == 0 )
        sub_AC505C(v103);
      v104 = **(UnityEngine_Object_o ***)(v103 + 184);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v104, 0LL, 0LL) )
      {
        this = (NetworkManager__Initialize_d__82_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)_4__this,
                                                       0LL);
        if ( !this )
          goto LABEL_15;
        UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___);
      }
      this = (NetworkManager__Initialize_d__82_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        DataManager__Initialize((DataManager_o *)this, 0LL);
        this = (NetworkManager__Initialize_d__82_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
        if ( this )
        {
          AvalonNotificationManager__Initialize((AvalonNotificationManager_o *)this, 0LL);
          return 0;
        }
      }
    }
LABEL_15:
    sub_B2C434(this, method);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_NetworkManager__Initialize_d__82_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  NetworkManager__RequestApplicationUpdateCR_d__216_o *v8; // x19
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
  DelightWorks_Network_UnityWebRequestWWW_o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **www_5__3; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  NetworkManager_StoreCallbackFunc_o *callback; // x0
  struct DelightWorks_Network_UnityWebRequestWWW_o *v45; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v46; // x8
  System_String_o *v47; // x20
  NetworkManager__RequestApplicationUpdateCR_d__216_o *v48; // x20
  Il2CppObject *Item; // x20
  UserPresentBoxWindow_resData_array *v50; // x0
  __int64 v51; // x8
  UserPresentBoxWindow_resData_array *v52; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v53; // x0
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  BattleServantConfConponent_o *p_url_5__2; // x0
  UnityEngine_WaitForSeconds_o *v62; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  int v70; // w8
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_o *id; // x1
  System_String_o **v78; // x21
  ManagerConfig_c *v79; // x0
  System_Int32_array **AndroidPackageName; // x1
  UnityEngine_WaitForSeconds_o *v81; // x20
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  __int64 v88; // x0

  v8 = this;
  if ( (byte_418BA9C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_Dictionary_string__object____, v10);
    sub_B2C35C(&JsonManager_TypeInfo, v11);
    sub_B2C35C(&ManagerConfig_TypeInfo, v12);
    sub_B2C35C(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo, v13);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_22766/*"trackViewUrl"*/, v15);
    sub_B2C35C(&StringLiteral_454/*"&country=jp"*/, v16);
    sub_B2C35C(&StringLiteral_19243/*"https://play.google.com/store/apps/details?id="*/, v17);
    sub_B2C35C(&StringLiteral_1964/*"Android"*/, v18);
    sub_B2C35C(&StringLiteral_21804/*"results"*/, v19);
    sub_B2C35C(&StringLiteral_19241/*"https://itunes.apple.com/lookup?id="*/, v20);
    this = (NetworkManager__RequestApplicationUpdateCR_d__216_o *)sub_B2C35C(&StringLiteral_19260/*"iOS"*/, v21);
    byte_418BA9C = 1;
  }
  switch ( v8->fields.__1__state )
  {
    case 0:
      p_storeName = &v8->fields.storeName;
      storeName = v8->fields.storeName;
      v8->fields.__1__state = -1;
      if ( !storeName )
      {
        v24 = (System_Int32_array **)StringLiteral_1964/*"Android"*/;
        *p_storeName = (System_String_o *)StringLiteral_1964/*"Android"*/;
        sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.storeName, v24, v2, v3, v4, v5, v6, v7);
      }
      v8->fields._url_5__2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._url_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      if ( System_String__op_Equality(v8->fields.storeName, (System_String_o *)StringLiteral_19260/*"iOS"*/, 0LL) )
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
          sub_B2C2F8(p_id, iOSApplicationID, v2, v3, v4, v5, v6, v7);
        }
        v29 = System_String__Concat_44307816(
                (System_String_o *)StringLiteral_19241/*"https://itunes.apple.com/lookup?id="*/,
                v8->fields.id,
                (System_String_o *)StringLiteral_454/*"&country=jp"*/,
                0LL);
        v30 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_B2C42C(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
        DelightWorks_Network_UnityWebRequestWWW___ctor(v30, v29, 0LL);
        v8->fields._www_5__3 = v30;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v8->fields._www_5__3,
          (System_Int32_array **)v30,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        www_5__3 = (System_Int32_array **)v8->fields._www_5__3;
        v8->fields.__2__current = (Il2CppObject *)www_5__3;
        sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.__2__current, www_5__3, v38, v39, v40, v41, v42, v43);
        LOBYTE(callback) = 1;
        v8->fields.__1__state = 1;
        return (char)callback;
      }
      if ( !System_String__op_Equality(*p_storeName, (System_String_o *)StringLiteral_1964/*"Android"*/, 0LL) )
        goto LABEL_51;
      v78 = &v8->fields.id;
      id = v8->fields.id;
      if ( !id )
      {
        v79 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v79 = ManagerConfig_TypeInfo;
        }
        AndroidPackageName = (System_Int32_array **)v79->static_fields->AndroidPackageName;
        *v78 = (System_String_o *)AndroidPackageName;
        sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.id, AndroidPackageName, v71, v72, v73, v74, v75, v76);
        id = *v78;
      }
      v54 = (System_Int32_array **)System_String__Concat_44305532((System_String_o *)StringLiteral_19243/*"https://play.google.com/store/apps/details?id="*/, id, 0LL);
      v8->fields._url_5__2 = (struct System_String_o *)v54;
      p_url_5__2 = (BattleServantConfConponent_o *)&v8->fields._url_5__2;
      goto LABEL_50;
    case 1:
      v45 = v8->fields._www_5__3;
      v8->fields.__1__state = -1;
      if ( !v45 )
        goto LABEL_54;
      this = (NetworkManager__RequestApplicationUpdateCR_d__216_o *)System_String__IsNullOrEmpty(
                                                                      v45->fields._error_k__BackingField,
                                                                      0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_41;
      v46 = v8->fields._www_5__3;
      if ( !v46 )
        goto LABEL_54;
      if ( System_String__IsNullOrEmpty(v46->fields._error_k__BackingField, 0LL) )
      {
        this = (NetworkManager__RequestApplicationUpdateCR_d__216_o *)v8->fields._www_5__3;
        if ( !this )
          goto LABEL_54;
        this = (NetworkManager__RequestApplicationUpdateCR_d__216_o *)DelightWorks_Network_UnityWebRequestWWW__get_text(
                                                                        (DelightWorks_Network_UnityWebRequestWWW_o *)this,
                                                                        0LL);
        if ( !v8->fields._www_5__3 )
          goto LABEL_54;
        v47 = (System_String_o *)this;
        DelightWorks_Network_UnityWebRequestWWW__Dispose(v8->fields._www_5__3, 0LL);
        if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !JsonManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
        }
        this = (NetworkManager__RequestApplicationUpdateCR_d__216_o *)JsonManager__getDictionary(v47, 0LL);
        if ( !this )
          goto LABEL_54;
        v48 = this;
        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
               (System_Xml_XmlQualifiedName_o *)StringLiteral_21804/*"results"*/,
               (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                   (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v48,
                                   (System_Type_o *)StringLiteral_21804/*"results"*/,
                                   (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !JsonManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          }
          v50 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                  Item,
                  (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_Dictionary_string__object____);
          if ( v50 )
          {
            v51 = *(_QWORD *)&v50->max_length;
            v52 = v50;
            if ( v51 )
            {
              if ( !(_DWORD)v51 )
                goto LABEL_55;
              v53 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v50->m_Items[0];
              if ( v53 )
              {
                v50 = (UserPresentBoxWindow_resData_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                              v53,
                                                              (System_Xml_XmlQualifiedName_o *)StringLiteral_22766/*"trackViewUrl"*/,
                                                              (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)v50 & 1) != 0 )
                {
                  if ( v52->max_length )
                  {
                    this = (NetworkManager__RequestApplicationUpdateCR_d__216_o *)v52->m_Items[0];
                    if ( this )
                    {
                      this = (NetworkManager__RequestApplicationUpdateCR_d__216_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this,
                                                                                      (System_Type_o *)StringLiteral_22766/*"trackViewUrl"*/,
                                                                                      (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                      if ( this )
                      {
                        v54 = (System_Int32_array **)((__int64 (__fastcall *)(NetworkManager__RequestApplicationUpdateCR_d__216_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                                       this,
                                                       this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
                        v8->fields._url_5__2 = (struct System_String_o *)v54;
                        p_url_5__2 = (BattleServantConfConponent_o *)&v8->fields._url_5__2;
LABEL_50:
                        sub_B2C2F8(p_url_5__2, v54, v55, v56, v57, v58, v59, v60);
                        goto LABEL_51;
                      }
                    }
LABEL_54:
                    sub_B2C434(this, method);
                  }
LABEL_55:
                  v88 = sub_B2C460(v50);
                  sub_B2C400(v88, 0LL);
                }
              }
            }
          }
        }
LABEL_51:
        v81 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v81, 0.5, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v81;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B2C2F8(p__2__current, (System_Int32_array **)v81, v82, v83, v84, v85, v86, v87);
        v70 = 3;
        goto LABEL_52;
      }
LABEL_41:
      this = (NetworkManager__RequestApplicationUpdateCR_d__216_o *)v8->fields._www_5__3;
      if ( !this )
        goto LABEL_54;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      v62 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v62, 1.0, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v62;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B2C2F8(p__2__current, (System_Int32_array **)v62, v64, v65, v66, v67, v68, v69);
      v70 = 2;
LABEL_52:
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v70;
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
      NetworkManager_StoreCallbackFunc__Invoke(callback, v8->fields._url_5__2, (const MethodInfo *)v2);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_NetworkManager__RequestApplicationUpdateCR_d__216_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  NetworkManager__RequestCR_d__211_o *v2; // x19
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
  struct NetworkManager_o *_4__this; // x20
  struct RequestBase_o *work; // x8
  NetworkManager__RequestCR_d__211_o **p_work; // x25
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_String_o **p_errorCode_5__3; // x21
  BattleServantConfConponent_o *p_errorLocalizeCode_5__4; // x23
  BattleServantConfConponent_o *p_errorAction_5__5; // x26
  BattleServantConfConponent_o *p_failData_5__6; // x24
  BattleServantConfConponent_o *p_responseList_5__7; // x22
  NetworkManager__RequestCR_d__211_o **v136; // x21
  NetworkManager__RequestCR_d__211_o *v137; // x8
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  NetworkManager__RequestCR_d__211_o *v144; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v145; // x8
  NetworkManager__RequestCR_d__211_o **v146; // x21
  System_Int32_array **v147; // x0
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v161; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  uint64_t v169; // x21
  struct RequestBase_o *v170; // x8
  __int64 v171; // x11
  ManagerConfig_c *v172; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  __int64 v174; // x0
  System_String_o *v175; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v176; // x20
  BattleServantConfConponent_o *p_www_5__10; // x19
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_Int32_array **klass; // x1
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  System_String_o **p_data_5__2; // x21
  System_Int32_array **v192; // x0
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  UnityEngine_WWWForm_o *WWWForm; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v200; // x22
  Il2CppObject *v201; // x23
  Il2CppObject *key; // x24
  System_String_o *v203; // x24
  System_String_o *v204; // x0
  __int64 v205; // x1
  struct System_Collections_Generic_Queue_RequestBase__o *communicationWaitList; // x8
  float v207; // s8
  float loadProgress_5__13; // s9
  System_String_array **v209; // x2
  System_String_array **v210; // x3
  System_Boolean_array **v211; // x4
  System_Int32_array **v212; // x5
  System_Int32_array *v213; // x6
  System_Int32_array *v214; // x7
  float v215; // s0
  System_String_array **v216; // x2
  System_String_array **v217; // x3
  System_Boolean_array **v218; // x4
  System_Int32_array **v219; // x5
  System_Int32_array *v220; // x6
  System_Int32_array *v221; // x7
  struct System_Collections_Generic_Queue_RequestBase__o *v222; // x8
  System_Int32_array **v223; // x1
  struct System_String_o **v224; // x22
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  __int64 *v231; // x8
  System_Int32_array **_2__current; // x1
  System_String_array **v233; // x2
  System_String_array **v234; // x3
  System_Boolean_array **v235; // x4
  System_Int32_array **v236; // x5
  System_Int32_array *v237; // x6
  System_Int32_array *v238; // x7
  System_Int32_array **v239; // x1
  struct DelightWorks_Network_UnityWebRequestWWW_o *v240; // x8
  System_String_o *Item; // x24
  NetworkManager__RequestCR_d__211_o *v242; // x24
  System_String_o *v243; // x24
  uint32_t v244; // w0
  __int64 *v245; // x8
  System_Int32_array **v246; // x1
  System_Int32_array **v247; // x1
  BattleServantConfConponent_o *v248; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v249; // x0
  System_String_o *v250; // x0
  int64_t v251; // x22
  NetworkManager_c *v252; // x8
  System_String_array **v253; // x2
  System_String_array **v254; // x3
  System_Boolean_array **v255; // x4
  System_Int32_array **v256; // x5
  System_Int32_array *v257; // x6
  System_Int32_array *v258; // x7
  System_String_array **v259; // x2
  System_String_array **v260; // x3
  System_Boolean_array **v261; // x4
  System_Int32_array **v262; // x5
  System_Int32_array *v263; // x6
  System_Int32_array *v264; // x7
  System_String_array **v265; // x2
  System_String_array **v266; // x3
  System_Boolean_array **v267; // x4
  System_Int32_array **v268; // x5
  System_Int32_array *v269; // x6
  System_Int32_array *v270; // x7
  System_Int32_array **v271; // x1
  System_Int32_array **v272; // x1
  System_String_array **v273; // x2
  System_String_array **v274; // x3
  System_Boolean_array **v275; // x4
  System_Int32_array **v276; // x5
  System_Int32_array *v277; // x6
  System_Int32_array *v278; // x7
  System_Int32_array **v279; // x1
  System_String_array **v280; // x2
  System_String_array **v281; // x3
  System_Boolean_array **v282; // x4
  System_Int32_array **v283; // x5
  System_Int32_array *v284; // x6
  System_Int32_array *v285; // x7
  System_String_array **v286; // x2
  System_String_array **v287; // x3
  System_Boolean_array **v288; // x4
  System_Int32_array **v289; // x5
  System_Int32_array *v290; // x6
  System_Int32_array *v291; // x7
  BattleServantConfConponent_o *v292; // x0
  System_Int32_array **v293; // x1
  System_String_array **v294; // x2
  System_String_array **v295; // x3
  System_Boolean_array **v296; // x4
  System_Int32_array **v297; // x5
  System_Int32_array *v298; // x6
  System_Int32_array *v299; // x7
  System_Int32_array **v300; // x1
  System_Int32_array **v301; // x1
  System_String_array **v302; // x2
  System_String_array **v303; // x3
  System_Boolean_array **v304; // x4
  System_Int32_array **v305; // x5
  System_Int32_array *v306; // x6
  System_Int32_array *v307; // x7
  _BOOL4 v308; // w26
  System_String_array **v309; // x2
  System_String_array **v310; // x3
  System_Boolean_array **v311; // x4
  System_Int32_array **v312; // x5
  System_Int32_array *v313; // x6
  System_Int32_array *v314; // x7
  System_String_array **v315; // x2
  System_String_array **v316; // x3
  System_Boolean_array **v317; // x4
  System_Int32_array **v318; // x5
  System_Int32_array *v319; // x6
  System_Int32_array *v320; // x7
  System_String_array **v321; // x2
  System_String_array **v322; // x3
  System_Boolean_array **v323; // x4
  System_Int32_array **v324; // x5
  System_Int32_array *v325; // x6
  System_Int32_array *v326; // x7
  System_String_o *errorLocalizeCode_5__4; // x24
  System_String_o *data; // x28
  __int64 v329; // x1
  System_String_o *errorAction_5__5; // x24
  System_Int32_array ***v331; // x8
  System_String_o *data_5__2; // x22
  NetworkManager__RequestCR_d__211_o *v333; // x22
  System_String_array **v334; // x2
  System_String_array **v335; // x3
  System_Boolean_array **v336; // x4
  System_Int32_array **v337; // x5
  System_Int32_array *v338; // x6
  System_Int32_array *v339; // x7
  Il2CppObject *v340; // x23
  System_Int32_array **v341; // x0
  ResponseData_array **v342; // x23
  System_String_array **v343; // x2
  System_String_array **v344; // x3
  System_Boolean_array **v345; // x4
  System_Int32_array **v346; // x5
  System_Int32_array *v347; // x6
  System_Int32_array *v348; // x7
  struct ResponseData_array *responseList_5__7; // x8
  __int64 v350; // x25
  int v351; // w9
  Il2CppClass **v352; // x8
  ResponseData_o *v353; // x24
  System_String_o *v354; // x19
  System_String_o *v355; // x21
  System_String_o *v356; // x22
  System_String_o *v357; // x23
  System_Action_o *v358; // x22
  System_Collections_Generic_SortedDictionary_string__string__o *v359; // x23
  System_String_o *AuthCode; // x0
  NetworkManager_c *v361; // x8
  System_String_o *v362; // x23
  int32_t v363; // w8
  NetworkManager_c *v364; // x0
  __int64 *v365; // x8
  System_String_o *v366; // x24
  bool isNoRedirect_5__9; // w24
  DelightWorks_Network_UnityWebRequestWWW_o *v368; // x25
  System_String_array **v369; // x2
  System_String_array **v370; // x3
  System_Boolean_array **v371; // x4
  System_Int32_array **v372; // x5
  System_Int32_array *v373; // x6
  System_Int32_array *v374; // x7
  struct RequestBase_o *v375; // x8
  __int64 v376; // x10
  ManagerConfig_c *v377; // x0
  float *p_GAME_DATA_TIMEOUT; // x8
  float unscaledTime; // s0
  float timeout_5__11; // s1
  UnityEngine_WaitForEndOfFrame_o *v381; // x22
  System_String_array **v382; // x2
  System_String_array **v383; // x3
  System_Boolean_array **v384; // x4
  System_Int32_array **v385; // x5
  System_Int32_array *v386; // x6
  System_Int32_array *v387; // x7
  System_Int32_array **v388; // x1
  System_Int32_array **v389; // x1
  System_String_array **v390; // x2
  System_String_array **v391; // x3
  System_Boolean_array **v392; // x4
  System_Int32_array **v393; // x5
  System_Int32_array *v394; // x6
  System_Int32_array *v395; // x7
  System_Int32_array **v396; // x1
  System_String_array **v397; // x2
  System_String_array **v398; // x3
  System_Boolean_array **v399; // x4
  System_Int32_array **v400; // x5
  System_Int32_array *v401; // x6
  System_Int32_array *v402; // x7
  CommonUI_o *Instance; // x24
  ErrorDialog_ClickDelegate_o *v404; // x25
  struct DelightWorks_Network_UnityWebRequestWWW_o *www_5__10; // x8
  System_Int32_array **wait_5__14; // x1
  bool result; // w0
  System_Int32_array **text; // x0
  System_String_array **v409; // x2
  System_String_array **v410; // x3
  System_Boolean_array **v411; // x4
  System_Int32_array **v412; // x5
  System_Int32_array *v413; // x6
  System_Int32_array *v414; // x7
  struct RequestBase_o *v415; // x8
  __int64 v416; // x10
  int v417; // w22
  System_String_o *v418; // x22
  int v419; // w8
  System_String_array *v420; // x0
  System_String_array **v421; // x2
  System_String_array **v422; // x3
  System_Boolean_array **v423; // x4
  System_Int32_array **v424; // x5
  System_Int32_array *v425; // x6
  System_Int32_array *v426; // x7
  NetworkManager_c *v427; // x8
  System_String_array *v428; // x22
  struct NetworkManager_StaticFields *v429; // x0
  System_Int32_array **v430; // x1
  int max_length; // w8
  unsigned int v432; // w25
  Il2CppClass **v433; // x8
  System_String_o *v434; // x23
  NetworkManager_c *v435; // x0
  System_Int32_array **v436; // x0
  struct NetworkManager_StaticFields *v437; // x8
  System_String_array **v438; // x2
  System_String_array **v439; // x3
  System_Boolean_array **v440; // x4
  System_Int32_array **v441; // x5
  System_Int32_array *v442; // x6
  System_Int32_array *v443; // x7
  __int64 v444; // x1
  ManagementManager_c *v445; // x0
  _BOOL4 isDuringStartup; // w8
  __int64 *v447; // x9
  __int64 *v448; // x10
  System_String_array **v449; // x2
  System_String_array **v450; // x3
  System_Boolean_array **v451; // x4
  System_Int32_array **v452; // x5
  System_Int32_array *v453; // x6
  System_Int32_array *v454; // x7
  NetworkManager__RequestCR_d__211_o *v455; // x25
  System_Int32_array **v456; // x1
  ManagerConfig_c *v457; // x0
  ManagementManager_c *v458; // x0
  System_Int32_array **v459; // x1
  System_String_o *v460; // x27
  struct ResponseFailData_o *v461; // x8
  BattleServantConfConponent_c *v462; // x8
  System_String_o *v463; // x0
  System_String_o **v464; // x20
  System_String_o *v465; // x28
  bool v466; // w8
  System_String_o *v467; // x28
  uint32_t v468; // w0
  System_String_array **v469; // x2
  System_String_array **v470; // x3
  System_Boolean_array **v471; // x4
  System_Int32_array **v472; // x5
  System_Int32_array *v473; // x6
  System_Int32_array *v474; // x7
  NetworkManager_c *v475; // x0
  __int64 v476; // x1
  NetworkManager_c *v477; // x0
  NetworkManager_c *v478; // x0
  NetworkManager_c *v479; // x0
  System_Action_o *v480; // x26
  System_Action_o *v481; // x0
  __int64 *v482; // x8
  CommonUI_o *v483; // x26
  CommonConfirmDialog_ClickDelegate_o *v484; // x28
  BattleServantConfConponent_c *v485; // x8
  System_String_o *declaringType; // x26
  int castClass_low; // w28
  System_String_array **v488; // x2
  System_String_array **v489; // x3
  System_Boolean_array **v490; // x4
  System_Int32_array **v491; // x5
  System_Int32_array *v492; // x6
  System_Int32_array *v493; // x7
  System_Int32_array **parent; // x26
  NetworkManager_c *v495; // x0
  struct NetworkManager_StaticFields *v496; // x0
  System_String_array **v497; // x2
  System_String_array **v498; // x3
  System_Boolean_array **v499; // x4
  System_Int32_array **v500; // x5
  System_Int32_array *v501; // x6
  System_Int32_array *v502; // x7
  System_Int32_array **generic_class; // x26
  NetworkManager_c *v504; // x0
  struct NetworkManager_StaticFields *v505; // x0
  CommonUI_o *v506; // x28
  ErrorDialog_ClickDelegate_o *v507; // x26
  System_String_array **v508; // x2
  System_String_array **v509; // x3
  System_Boolean_array **v510; // x4
  System_Int32_array **v511; // x5
  System_Int32_array *v512; // x6
  System_Int32_array *v513; // x7
  System_String_array **v514; // x2
  System_String_array **v515; // x3
  System_Boolean_array **v516; // x4
  System_Int32_array **v517; // x5
  System_Int32_array *v518; // x6
  System_Int32_array *v519; // x7
  System_String_array **v520; // x2
  System_String_array **v521; // x3
  System_Boolean_array **v522; // x4
  System_Int32_array **v523; // x5
  System_Int32_array *v524; // x6
  System_Int32_array *v525; // x7
  System_String_array **v526; // x2
  System_String_array **v527; // x3
  System_Boolean_array **v528; // x4
  System_Int32_array **v529; // x5
  System_Int32_array *v530; // x6
  System_Int32_array *v531; // x7
  System_String_array **v532; // x2
  System_String_array **v533; // x3
  System_Boolean_array **v534; // x4
  System_Int32_array **v535; // x5
  System_Int32_array *v536; // x6
  System_Int32_array *v537; // x7
  UnityEngine_WaitForEndOfFrame_o *v538; // x20
  BattleServantConfConponent_o *v539; // x19
  System_String_array **v540; // x2
  System_String_array **v541; // x3
  System_Boolean_array **v542; // x4
  System_Int32_array **v543; // x5
  System_Int32_array *v544; // x6
  System_Int32_array *v545; // x7
  System_Int32_array **v546; // x19
  NetworkManager_c *v547; // x0
  BattleServantConfConponent_o *p_errorDialogResponseData; // x0
  System_String_array **v549; // x2
  System_String_array **v550; // x3
  System_Boolean_array **v551; // x4
  System_Int32_array **v552; // x5
  System_Int32_array *v553; // x6
  System_Int32_array *v554; // x7
  System_Int32_array **nid; // x26
  System_String_array **v556; // x2
  System_String_array **v557; // x3
  System_Boolean_array **v558; // x4
  System_Int32_array **v559; // x5
  System_Int32_array *v560; // x6
  System_Int32_array *v561; // x7
  System_Int32_array **v562; // x1
  System_String_array **v563; // x2
  System_String_array **v564; // x3
  System_Boolean_array **v565; // x4
  System_Int32_array **v566; // x5
  System_Int32_array *v567; // x6
  System_Int32_array *v568; // x7
  System_Int32_array **resCode; // x26
  System_String_array **v570; // x2
  System_String_array **v571; // x3
  System_Boolean_array **v572; // x4
  System_Int32_array **v573; // x5
  System_Int32_array *v574; // x6
  System_Int32_array *v575; // x7
  System_Int32_array **v576; // x1
  System_Int32_array **v577; // x0
  System_String_array **v578; // x2
  System_String_array **v579; // x3
  System_Boolean_array **v580; // x4
  System_Int32_array **v581; // x5
  System_Int32_array *v582; // x6
  System_Int32_array *v583; // x7
  ResponseFailData_o *v584; // x26
  struct ResponseFailData_o **v585; // x25
  System_String_array **v586; // x2
  System_String_array **v587; // x3
  System_Boolean_array **v588; // x4
  System_Int32_array **v589; // x5
  System_Int32_array *v590; // x6
  System_Int32_array *v591; // x7
  struct ResponseFailData_o *failData_5__6; // x8
  System_String_array **v593; // x2
  System_String_array **v594; // x3
  System_Boolean_array **v595; // x4
  System_Int32_array **v596; // x5
  System_Int32_array *v597; // x6
  System_Int32_array *v598; // x7
  System_Int32_array ***p_action; // x8
  System_Int32_array **v600; // x1
  struct RequestBase_o *v601; // x9
  PurchaseByBank_UnityIap_Request_c *v602; // x10
  __int64 v603; // x11
  int v604; // w8
  RequestBase_c *v605; // x9
  __int64 v606; // x11
  ResponseData_array *v607; // x23
  ResponseData_o *v608; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *fail; // x0
  System_String_o *v610; // x0
  System_String_o *v611; // x23
  System_String_array **v612; // x2
  System_String_array **v613; // x3
  System_Boolean_array **v614; // x4
  System_Int32_array **v615; // x5
  System_Int32_array *v616; // x6
  System_Int32_array *v617; // x7
  System_Int32_array **v618; // x1
  WebViewManager_o *v619; // x23
  struct ResponseData_array *v620; // x8
  unsigned __int64 v621; // x23
  unsigned __int64 v622; // x9
  ResponseData_o *v623; // x22
  System_Int32_array **v624; // x0
  System_String_array **v625; // x2
  System_String_array **v626; // x3
  System_Boolean_array **v627; // x4
  System_Int32_array **v628; // x5
  System_Int32_array *v629; // x6
  System_Int32_array *v630; // x7
  ResponseFailData_o *v631; // x23
  struct ResponseFailData_o **v632; // x22
  System_String_array **v633; // x2
  System_String_array **v634; // x3
  System_Boolean_array **v635; // x4
  System_Int32_array **v636; // x5
  System_Int32_array *v637; // x6
  System_Int32_array *v638; // x7
  struct ResponseFailData_o *v639; // x8
  System_String_array **v640; // x2
  System_String_array **v641; // x3
  System_Boolean_array **v642; // x4
  System_Int32_array **v643; // x5
  System_Int32_array *v644; // x6
  System_Int32_array *v645; // x7
  System_Int32_array ***v646; // x8
  System_Int32_array **v647; // x1
  System_Action_o *v648; // x28
  System_String_o *v649; // x1
  System_String_o *v650; // x3
  int32_t v651; // w4
  NetworkManager_o *v652; // x0
  System_String_o *v653; // x2
  System_Action_o *v654; // x5
  System_Action_o *v655; // x26
  __int64 *v656; // x8
  ManagementManager_c *v657; // x0
  _BOOL4 v658; // w28
  WebViewManager_o *v659; // x0
  CommonUI_o *v660; // x28
  ErrorDialog_ClickDelegate_o *v661; // x26
  bool v662; // w0
  __int64 *v663; // x8
  CommonUI_o *v664; // x28
  ErrorDialog_ClickDelegate_o *v665; // x26
  ErrorDialog_ClickDelegate_o *v666; // x26
  System_Int32_array **v667; // x1
  struct System_String_o **v668; // x23
  __int64 *v669; // x8
  System_Int32_array **v670; // x1
  __int64 v671; // x0
  __int64 v672; // x0
  int32_t cancleTxt; // [xsp+10h] [xbp-100h]
  int32_t cancleTxta; // [xsp+10h] [xbp-100h]
  System_String_o *cancleTxtb; // [xsp+10h] [xbp-100h]
  System_String_o *cancleTxtc; // [xsp+10h] [xbp-100h]
  System_String_o *value; // [xsp+18h] [xbp-F8h]
  System_String_o *valuea; // [xsp+18h] [xbp-F8h]
  System_String_o *valueb; // [xsp+18h] [xbp-F8h]
  System_String_o *title; // [xsp+20h] [xbp-F0h]
  NetworkManager_o *v681; // [xsp+28h] [xbp-E8h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v682; // [xsp+30h] [xbp-E0h] BYREF
  int v683[2]; // [xsp+58h] [xbp-B8h]
  int v684; // [xsp+60h] [xbp-B0h]
  System_Xml_Schema_XmlSchemaObject_o *v685; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v686; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_SortedDictionary_string__string__o *authParams; // [xsp+98h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+A0h] [xbp-70h] BYREF
  System_DateTime_o v689; // 0:x0.8
  System_DateTime_o v690; // 0:x0.8

  v2 = this;
  if ( (byte_418BA9D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&BattleData_TypeInfo, v3);
    sub_B2C35C(&char___TypeInfo, v4);
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6);
    sub_B2C35C(&System_Convert_TypeInfo, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&System_DateTime_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v18);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v22);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_ResponseData___, v23);
    sub_B2C35C(&JsonManager_TypeInfo, v24);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v26);
    sub_B2C35C(&LocalizationManager_TypeInfo, v27);
    sub_B2C35C(&ManagementManager_TypeInfo, v28);
    sub_B2C35C(&ManagerConfig_TypeInfo, v29);
    sub_B2C35C(&Method_NetworkManager_OnClickErrorDialog__, v30);
    sub_B2C35C(&Method_NetworkManager_OnClickErrorReboot__, v31);
    sub_B2C35C(&Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__, v32);
    sub_B2C35C(&Method_NetworkManager_OnClickErrorRetryDialog__, v33);
    sub_B2C35C(&Method_NetworkManager_OnClickErrorStay__, v34);
    sub_B2C35C(&Method_NetworkManager_OnClickErrorTerminal__, v35);
    sub_B2C35C(&Method_NetworkManager_OnClickRefreshTerminal__, v36);
    sub_B2C35C(&Method_NetworkManager_OnClickReloadCache__, v37);
    sub_B2C35C(&Method_NetworkManager_OnClickStore__, v38);
    sub_B2C35C(&Method_NetworkManager_OnClickUserDelete__, v39);
    sub_B2C35C(&Method_NetworkManager__RequestCR_b__211_0__, v40);
    sub_B2C35C(&NetworkManager_TypeInfo, v41);
    sub_B2C35C(&PurchaseByBank_UnityIap_Request_TypeInfo, v42);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__, v43);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v44);
    sub_B2C35C(&ResponseFailData_TypeInfo, v45);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v46);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v48);
    sub_B2C35C(&string___TypeInfo, v49);
    sub_B2C35C(&TopGameDataRequest_TypeInfo, v50);
    sub_B2C35C(&TopLoginRequest_TypeInfo, v51);
    sub_B2C35C(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo, v52);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v53);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v54);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v55);
    sub_B2C35C(&StringLiteral_15536/*"X-SERVER-TIME"*/, v56);
    sub_B2C35C(&StringLiteral_17879/*"data_update"*/, v57);
    sub_B2C35C(&StringLiteral_9289/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/, v58);
    sub_B2C35C(&StringLiteral_19890/*"invalid_battle"*/, v59);
    sub_B2C35C(&StringLiteral_21759/*"reload_cache"*/, v60);
    sub_B2C35C(&StringLiteral_7098/*"HTTP"*/, v61);
    sub_B2C35C(&StringLiteral_1175/*"400"*/, v62);
    sub_B2C35C(&StringLiteral_21798/*"result"*/, v63);
    sub_B2C35C(&StringLiteral_9288/*"NETWORK_ERROR_SERVER_AUTH_MESSAGE"*/, v64);
    sub_B2C35C(&StringLiteral_19067/*"goto_login_access"*/, v65);
    sub_B2C35C(&StringLiteral_19848/*"internal server error"*/, v66);
    sub_B2C35C(&StringLiteral_21791/*"response error "*/, v67);
    sub_B2C35C(&StringLiteral_21790/*"response"*/, v68);
    sub_B2C35C(&StringLiteral_22315/*"stay"*/, v69);
    sub_B2C35C(&StringLiteral_1177/*"401"*/, v70);
    sub_B2C35C(&StringLiteral_9277/*"NETWORK_ERROR_BOOT_MESSAGE"*/, v71);
    sub_B2C35C(&StringLiteral_7705/*"Internal Server Error"*/, v72);
    sub_B2C35C(&StringLiteral_15093/*"User-Agent"*/, v73);
    sub_B2C35C(&StringLiteral_21808/*"retry"*/, v74);
    sub_B2C35C(&StringLiteral_9292/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/, v75);
    sub_B2C35C(&StringLiteral_9290/*"NETWORK_ERROR_SERVER_CANCEL_MESSAGE"*/, v76);
    sub_B2C35C(&StringLiteral_16581/*"background cancel"*/, v77);
    sub_B2C35C(&StringLiteral_1188/*"500"*/, v78);
    sub_B2C35C(&StringLiteral_9281/*"NETWORK_ERROR_CSID_CODE"*/, v79);
    sub_B2C35C(&StringLiteral_21792/*"response execute error "*/, v80);
    sub_B2C35C(&StringLiteral_17201/*"canceled_purchase_error"*/, v81);
    sub_B2C35C(&StringLiteral_1190/*"502"*/, v82);
    sub_B2C35C(&StringLiteral_1192/*"503"*/, v83);
    sub_B2C35C(&StringLiteral_4299/*"Cookie"*/, v84);
    sub_B2C35C(&StringLiteral_9296/*"NETWORK_USER_DELETE_DECIDE"*/, v85);
    sub_B2C35C(&StringLiteral_19891/*"invalid_user"*/, v86);
    sub_B2C35C(&StringLiteral_9278/*"NETWORK_ERROR_BOOT_RETRY_CANCEL"*/, v87);
    sub_B2C35C(&StringLiteral_16375/*"app_version_up"*/, v88);
    sub_B2C35C(&StringLiteral_1522/*"?"*/, v89);
    sub_B2C35C(&StringLiteral_9291/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/, v90);
    sub_B2C35C(&StringLiteral_21120/*"none data"*/, v91);
    sub_B2C35C(&StringLiteral_9280/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/, v92);
    sub_B2C35C(&StringLiteral_21436/*"path="*/, v93);
    sub_B2C35C(&StringLiteral_16527/*"authCode"*/, v94);
    sub_B2C35C(&StringLiteral_441/*"&"*/, v95);
    sub_B2C35C(&StringLiteral_21742/*"refresh_terminal"*/, v96);
    sub_B2C35C(&StringLiteral_19068/*"goto_title"*/, v97);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v98);
    sub_B2C35C(&StringLiteral_1262/*";"*/, v99);
    sub_B2C35C(&StringLiteral_17651/*"connect time over"*/, v100);
    sub_B2C35C(&StringLiteral_21721/*"reconnection"*/, v101);
    sub_B2C35C(&StringLiteral_12367/*"STATUS"*/, v102);
    sub_B2C35C(&StringLiteral_16201/*"_userId="*/, v103);
    sub_B2C35C(&StringLiteral_18039/*"do_signup"*/, v104);
    sub_B2C35C(&StringLiteral_9295/*"NETWORK_USER_DELETE_CANCEL"*/, v105);
    sub_B2C35C(&StringLiteral_17171/*"cache"*/, v106);
    sub_B2C35C(&StringLiteral_652/*")"*/, v107);
    sub_B2C35C(&StringLiteral_3265/*"COMMON_CONFIRM_RETRY"*/, v108);
    sub_B2C35C(&StringLiteral_22326/*"stay_no_dialog"*/, v109);
    sub_B2C35C(&StringLiteral_9293/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v110);
    sub_B2C35C(&StringLiteral_1180/*"404"*/, v111);
    sub_B2C35C(&StringLiteral_21121/*"none response data"*/, v112);
    sub_B2C35C(&StringLiteral_20362/*"maint"*/, v113);
    sub_B2C35C(&StringLiteral_21451/*"pending_purchase_error"*/, v114);
    sub_B2C35C(&StringLiteral_98/*" ("*/, v115);
    sub_B2C35C(&StringLiteral_1/*""*/, v116);
    sub_B2C35C(&StringLiteral_9279/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/, v117);
    sub_B2C35C(&StringLiteral_12062/*"SET-COOKIE"*/, v118);
    sub_B2C35C(&StringLiteral_1159/*"302"*/, v119);
    sub_B2C35C(&StringLiteral_9294/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v120);
    this = (NetworkManager__RequestCR_d__211_o *)sub_B2C35C(&StringLiteral_1143/*"200"*/, v121);
    byte_418BA9D = 1;
  }
  authParams = 0LL;
  dateData = 0LL;
  v685 = 0LL;
  memset(&v686, 0, sizeof(v686));
  v684 = 0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      p_work = (NetworkManager__RequestCR_d__211_o **)&v2->fields.work;
      work = v2->fields.work;
      v2->fields.__1__state = -1;
      if ( !work )
        return 0;
      if ( UnityEngine_Application__get_internetReachability(0LL) )
      {
        p_errorCode_5__3 = &v2->fields._errorCode_5__3;
        p_errorLocalizeCode_5__4 = (BattleServantConfConponent_o *)&v2->fields._errorLocalizeCode_5__4;
        p_errorAction_5__5 = (BattleServantConfConponent_o *)&v2->fields._errorAction_5__5;
        p_failData_5__6 = (BattleServantConfConponent_o *)&v2->fields._failData_5__6;
        p_responseList_5__7 = (BattleServantConfConponent_o *)&v2->fields._responseList_5__7;
        goto LABEL_460;
      }
      v354 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v355 = LocalizationManager__Get((System_String_o *)StringLiteral_9280/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
      v356 = LocalizationManager__Get((System_String_o *)StringLiteral_9279/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/, 0LL);
      this = (NetworkManager__RequestCR_d__211_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9278/*"NETWORK_ERROR_BOOT_RETRY_CANCEL"*/, 0LL);
      if ( !*p_work )
        goto LABEL_532;
      v357 = (System_String_o *)this;
      if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, void *))(*p_work)->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
              *p_work,
              (*p_work)->klass[1]._1.image) & 1) != 0 )
      {
        v358 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v358, (Il2CppObject *)_4__this, Method_NetworkManager__RequestCR_b__211_0__, 0LL);
        if ( !_4__this )
          goto LABEL_532;
        NetworkManager__WarningDialog(_4__this, v354, v355, 0LL, 1, v358, 0LL);
      }
      else
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v404 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v404,
          (Il2CppObject *)_4__this,
          Method_NetworkManager_OnClickErrorRetryDialog__,
          0LL);
        if ( !Instance )
          goto LABEL_532;
        CommonUI__OpenRetryDialog_17970068(Instance, v354, v355, v356, v357, v404, 0, 0LL);
      }
      return 0;
    case 1:
      delay = v2->fields.delay;
      v2->fields.__1__state = -1;
      if ( delay <= 0.0 )
        goto LABEL_25;
      v161 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v161, delay, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v161;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(p__2__current, (System_Int32_array **)v161, v163, v164, v165, v166, v167, v168);
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 2;
      return 1;
    case 2:
      v2->fields.__1__state = -1;
LABEL_25:
      if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_DateTime_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      }
      dateData = System_DateTime__get_Now(0LL).fields.dateData;
      v689.fields.dateData = (uint64_t)&dateData;
      v169 = System_DateTime__ToUniversalTime(v689, 0LL).fields.dateData;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v690.fields.dateData = v169;
      v2->fields._startTime_5__8 = NetworkManager__getTime_26270684(v690, 0LL);
      v170 = v2->fields.work;
      if ( v170 )
      {
        v171 = *(&TopGameDataRequest_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v170->klass->_2.bitflags2 + 1) >= (unsigned int)v171
          && (TopGameDataRequest_c *)v170->klass->_2.typeHierarchy[v171 - 1] == TopGameDataRequest_TypeInfo )
        {
          LOBYTE(v170) = v170[1].klass;
        }
        else
        {
          LOBYTE(v170) = 0;
        }
      }
      v2->fields._isNoRedirect_5__9 = (char)v170;
      v172 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v172 = ManagerConfig_TypeInfo;
      }
      static_fields = v172->static_fields;
      if ( static_fields->UseMock )
      {
        if ( (BYTE3(v172->vtable._0_Equals.methodPtr) & 4) != 0 && !v172->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v172);
          static_fields = ManagerConfig_TypeInfo->static_fields;
        }
        if ( static_fields->IsNetworkMock )
        {
          this = (NetworkManager__RequestCR_d__211_o *)v2->fields.work;
          if ( !this )
            goto LABEL_532;
          v174 = ((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                   this,
                   this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
          if ( v174 )
          {
            v175 = (System_String_o *)v174;
            v176 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_B2C42C(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
            DelightWorks_Network_UnityWebRequestWWW___ctor(v176, v175, 0LL);
            v2->fields._www_5__10 = v176;
            p_www_5__10 = (BattleServantConfConponent_o *)&v2->fields._www_5__10;
            sub_B2C2F8(p_www_5__10, (System_Int32_array **)v176, v178, v179, v180, v181, v182, v183);
            klass = (System_Int32_array **)p_www_5__10->klass;
            *(_QWORD *)&p_www_5__10[-1].fields.ClassSkillOffset = p_www_5__10->klass;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)((char *)p_www_5__10 - 96),
              klass,
              v185,
              v186,
              v187,
              v188,
              v189,
              v190);
            LODWORD(p_www_5__10[-1].fields.ClassSkillList) = 3;
            return 1;
          }
        }
LABEL_46:
        p_data_5__2 = &v2->fields._data_5__2;
        if ( !v2->fields._data_5__2 )
        {
          this = (NetworkManager__RequestCR_d__211_o *)v2->fields.work;
          if ( !this )
            goto LABEL_532;
          v192 = (System_Int32_array **)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                          this,
                                          this->klass->vtable._6_MoveNext.methodPtr);
          *p_data_5__2 = (System_String_o *)v192;
          sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields._data_5__2, v192, v193, v194, v195, v196, v197, v198);
          if ( System_String__op_Equality(*p_data_5__2, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
          {
            this = (NetworkManager__RequestCR_d__211_o *)v2->fields.work;
            if ( !this )
              goto LABEL_532;
            this = (NetworkManager__RequestCR_d__211_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                           this,
                                                           this->klass[1]._1.image);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (NetworkManager__RequestCR_d__211_o *)v2->fields.work;
              if ( !this )
                goto LABEL_532;
              this = (NetworkManager__RequestCR_d__211_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (NetworkManager__RequestCR_d__211_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !this )
                  goto LABEL_532;
                CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
              }
            }
            if ( !_4__this )
              goto LABEL_532;
            NetworkManager__OnEndCommunication(_4__this, v2->fields.work, 0LL, 0LL);
            return 0;
          }
        }
        goto LABEL_134;
      }
      if ( v2->fields._data_5__2 )
        goto LABEL_134;
      this = (NetworkManager__RequestCR_d__211_o *)v2->fields.work;
      if ( !this )
        goto LABEL_532;
      WWWForm = RequestBase__getWWWForm((RequestBase_o *)this, &authParams, 0LL);
      v200 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__string__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v200,
        (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
      if ( !WWWForm )
        goto LABEL_532;
      this = (NetworkManager__RequestCR_d__211_o *)UnityEngine_WWWForm__get_headers(WWWForm, 0LL);
      if ( !this )
        goto LABEL_532;
      System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v682,
        (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)this,
        (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
      v686 = v682;
      while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                &v686,
                (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
      {
        key = v686.fields.current.fields.key;
        v201 = v686.fields.current.fields.value;
        if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Convert_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        }
        v203 = System_Convert__ToString_42142364((System_String_o *)key, 0LL);
        v204 = System_Convert__ToString_42142364((System_String_o *)v201, 0LL);
        if ( !v200 )
          sub_B2C434(v204, v205);
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          v200,
          (System_Xml_XmlQualifiedName_o *)v203,
          (System_Xml_Schema_XmlSchemaObject_o *)v204,
          (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
      }
      v683[0] = 731;
      v684 = 1;
      System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
        &v686,
        (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
      v684 = 0;
      this = (NetworkManager__RequestCR_d__211_o *)NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (NetworkManager__RequestCR_d__211_o *)NetworkManager_TypeInfo;
      }
      if ( this[1].fields.work[1].fields.paramInteger )
      {
        if ( (BYTE3(this[2].klass) & 4) != 0 && !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
          j_il2cpp_runtime_class_init_0(this);
        if ( !v200 )
          goto LABEL_532;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          v200,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_15093/*"User-Agent"*/,
          (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->userAgent,
          (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
        this = (NetworkManager__RequestCR_d__211_o *)NetworkManager_TypeInfo;
      }
      if ( (BYTE3(this[2].klass) & 4) != 0 && !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (NetworkManager__RequestCR_d__211_o *)NetworkManager_TypeInfo;
      }
      if ( this[1].fields.work[3].monitor )
      {
        if ( (BYTE3(this[2].klass) & 4) != 0 && !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
          j_il2cpp_runtime_class_init_0(this);
        if ( !v200 )
          goto LABEL_532;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          v200,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_4299/*"Cookie"*/,
          (System_Xml_Schema_XmlSchemaObject_o *)NetworkManager_TypeInfo->static_fields->sessionId,
          (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
        this = (NetworkManager__RequestCR_d__211_o *)NetworkManager_TypeInfo;
      }
      v359 = authParams;
      if ( (BYTE3(this[2].klass) & 4) != 0 && !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
        j_il2cpp_runtime_class_init_0(this);
      AuthCode = NetworkManager__GetAuthCode(v359, 0LL);
      if ( AuthCode )
        UnityEngine_WWWForm__AddField(WWWForm, (System_String_o *)StringLiteral_16527/*"authCode"*/, AuthCode, 0LL);
      this = (NetworkManager__RequestCR_d__211_o *)v2->fields.work;
      if ( !this )
        goto LABEL_532;
      this = (NetworkManager__RequestCR_d__211_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                     this,
                                                     this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
      v361 = NetworkManager_TypeInfo;
      v362 = (System_String_o *)this;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v361 = NetworkManager_TypeInfo;
      }
      if ( v361->static_fields->userId )
      {
        if ( !v362 )
          goto LABEL_532;
        v363 = System_String__IndexOf_44377880(v362, (System_String_o *)StringLiteral_1522/*"?"*/, 0LL);
        v364 = NetworkManager_TypeInfo;
        if ( v363 >= 0 )
          v365 = &StringLiteral_441/*"&"*/;
        else
          v365 = &StringLiteral_1522/*"?"*/;
        v366 = (System_String_o *)*v365;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v364 = NetworkManager_TypeInfo;
        }
        v362 = System_String__Concat_44308944(
                 v362,
                 v366,
                 (System_String_o *)StringLiteral_16201/*"_userId="*/,
                 v364->static_fields->userId,
                 0LL);
      }
      UnityEngine_WWWForm__get_data(WWWForm, 0LL);
      isNoRedirect_5__9 = v2->fields._isNoRedirect_5__9;
      v368 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_B2C42C(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
      DelightWorks_Network_UnityWebRequestWWW___ctor_26941876(
        v368,
        v362,
        WWWForm,
        (System_Collections_Generic_Dictionary_string__string__o *)v200,
        isNoRedirect_5__9,
        0LL);
      v136 = (NetworkManager__RequestCR_d__211_o **)&v2->fields._www_5__10;
      v2->fields._www_5__10 = v368;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v2->fields._www_5__10,
        (System_Int32_array **)v368,
        v369,
        v370,
        v371,
        v372,
        v373,
        v374);
      v375 = v2->fields.work;
      if ( !v375 )
        goto LABEL_220;
      v376 = *(&TopGameDataRequest_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v375->klass->_2.bitflags2 + 1) >= (unsigned int)v376
        && (TopGameDataRequest_c *)v375->klass->_2.typeHierarchy[v376 - 1] == TopGameDataRequest_TypeInfo )
      {
        v457 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v457 = ManagerConfig_TypeInfo;
        }
        p_GAME_DATA_TIMEOUT = &v457->static_fields->GAME_DATA_TIMEOUT;
      }
      else
      {
LABEL_220:
        v377 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v377 = ManagerConfig_TypeInfo;
        }
        p_GAME_DATA_TIMEOUT = &v377->static_fields->TIMEOUT;
      }
      v2->fields._timeout_5__11 = *p_GAME_DATA_TIMEOUT;
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      timeout_5__11 = v2->fields._timeout_5__11;
      v2->fields._loadProgress_5__13 = 0.0;
      v2->fields._requestTime_5__12 = unscaledTime + timeout_5__11;
      v381 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v381, 0LL);
      v2->fields._wait_5__14 = v381;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v2->fields._wait_5__14,
        (System_Int32_array **)v381,
        v382,
        v383,
        v384,
        v385,
        v386,
        v387);
LABEL_8:
      if ( !*v136 )
        goto LABEL_532;
      if ( *((_BYTE *)&(*v136)->fields.__1__state + 4) )
        goto LABEL_10;
      this = (NetworkManager__RequestCR_d__211_o *)v2->fields.work;
      if ( !this )
        goto LABEL_532;
      this = (NetworkManager__RequestCR_d__211_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                     this,
                                                     this->klass[1]._1.image);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !_4__this )
          goto LABEL_532;
        communicationWaitList = _4__this->fields.communicationWaitList;
        if ( !communicationWaitList )
          goto LABEL_532;
        if ( communicationWaitList->fields._size > 0 )
          goto LABEL_10;
      }
      if ( !*v136 )
        goto LABEL_532;
      v207 = *(float *)&(*v136)->fields.__1__state;
      loadProgress_5__13 = v2->fields._loadProgress_5__13;
      v215 = UnityEngine_Time__get_unscaledTime(0LL);
      if ( v207 != loadProgress_5__13 )
      {
        www_5__10 = v2->fields._www_5__10;
        v2->fields._requestTime_5__12 = v215 + v2->fields._timeout_5__11;
        if ( !www_5__10 )
          goto LABEL_532;
        v2->fields._loadProgress_5__13 = www_5__10->fields._progress_k__BackingField;
        goto LABEL_232;
      }
      if ( v215 < v2->fields._requestTime_5__12 )
      {
LABEL_232:
        wait_5__14 = (System_Int32_array **)v2->fields._wait_5__14;
        v2->fields.__2__current = (Il2CppObject *)wait_5__14;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v2->fields.__2__current,
          wait_5__14,
          v209,
          v210,
          v211,
          v212,
          v213,
          v214);
        v2->fields.__1__state = 4;
        return 1;
      }
LABEL_10:
      v137 = *v136;
      if ( !*v136 )
        goto LABEL_532;
      if ( !*((_BYTE *)&v137->fields.__1__state + 4) )
      {
        this = (NetworkManager__RequestCR_d__211_o *)v2->fields.work;
        if ( !this )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                       this,
                                                       this->klass[1]._1.image);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_116;
        if ( !_4__this )
          goto LABEL_532;
        v222 = _4__this->fields.communicationWaitList;
        if ( !v222 )
          goto LABEL_532;
        if ( v222->fields._size >= 1 )
        {
          v223 = (System_Int32_array **)StringLiteral_16581/*"background cancel"*/;
          v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_16581/*"background cancel"*/;
          v224 = &v2->fields._errorCode_5__3;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v2->fields._errorCode_5__3,
            v223,
            v216,
            v217,
            v218,
            v219,
            v220,
            v221);
          v231 = &StringLiteral_22315/*"stay"*/;
        }
        else
        {
LABEL_116:
          v246 = (System_Int32_array **)StringLiteral_17651/*"connect time over"*/;
          v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_17651/*"connect time over"*/;
          v224 = &v2->fields._errorCode_5__3;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v2->fields._errorCode_5__3,
            v246,
            v216,
            v217,
            v218,
            v219,
            v220,
            v221);
          v231 = &StringLiteral_21808/*"retry"*/;
        }
        v247 = (System_Int32_array **)*v231;
        v248 = (BattleServantConfConponent_o *)(v224 + 2);
        v224[2] = (struct System_String_o *)*v231;
        goto LABEL_118;
      }
      this = (NetworkManager__RequestCR_d__211_o *)System_String__IsNullOrEmpty(
                                                     (System_String_o *)v137->fields.__2__current,
                                                     0LL);
      v144 = *v136;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v144 )
          goto LABEL_532;
        _2__current = (System_Int32_array **)v144->fields.__2__current;
        v2->fields._errorCode_5__3 = (struct System_String_o *)_2__current;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v2->fields._errorCode_5__3,
          _2__current,
          v138,
          v139,
          v140,
          v141,
          v142,
          v143);
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
            this = *v136;
            if ( !*v136 )
              goto LABEL_532;
            DelightWorks_Network_UnityWebRequestWWW__ExceptionLog(
              (DelightWorks_Network_UnityWebRequestWWW_o *)this,
              0LL);
          }
        }
        v239 = (System_Int32_array **)StringLiteral_21808/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_21808/*"retry"*/;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v2->fields._errorAction_5__5,
          v239,
          v233,
          v234,
          v235,
          v236,
          v237,
          v238);
        v240 = v2->fields._www_5__10;
        if ( !v240 )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)v240->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                                       (const MethodInfo_2DB18BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
        if ( (int)this < 1 )
          goto LABEL_119;
        if ( !*v136 )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)(*v136)->fields.__4__this;
        if ( !this )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                                       (System_Xml_XmlQualifiedName_o *)StringLiteral_12367/*"STATUS"*/,
                                                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_119;
        if ( !*v136 )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)(*v136)->fields.__4__this;
        if ( !this )
          goto LABEL_532;
        Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this,
                                    (System_Type_o *)StringLiteral_12367/*"STATUS"*/,
                                    (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        this = (NetworkManager__RequestCR_d__211_o *)sub_B2C374(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_532;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_595;
        LOWORD(this->fields.work) = 32;
        if ( !Item )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)System_String__Split_44366316(
                                                       Item,
                                                       (System_Char_array *)this,
                                                       1,
                                                       0LL);
        if ( !this )
          goto LABEL_532;
        v242 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_119;
        this = (NetworkManager__RequestCR_d__211_o *)this->fields.work;
        if ( !this )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)System_String__StartsWith(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_7098/*"HTTP"*/,
                                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_119;
        if ( LODWORD(v242->fields.__2__current) <= 1 )
          goto LABEL_595;
        v243 = (System_String_o *)v242->fields.__4__this;
        if ( !v243 )
          goto LABEL_589;
        v244 = PrivateImplementationDetails___ComputeStringHash_21099092(v243, 0LL);
        if ( v244 > 0x434FEE0C )
        {
          if ( v244 <= 0xAA3008DB )
          {
            if ( v244 == -1456470200 )
            {
              if ( !System_String__op_Equality(v243, (System_String_o *)StringLiteral_1177/*"401"*/, 0LL) )
                goto LABEL_589;
              v656 = &StringLiteral_9288/*"NETWORK_ERROR_SERVER_AUTH_MESSAGE"*/;
            }
            else
            {
              if ( v244 != -1439692581 || !System_String__op_Equality(v243, (System_String_o *)StringLiteral_1175/*"400"*/, 0LL) )
                goto LABEL_589;
              v656 = &StringLiteral_9293/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/;
            }
            v667 = (System_Int32_array **)*v656;
            v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v656;
            v668 = &v2->fields._errorLocalizeCode_5__4;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v2->fields._errorLocalizeCode_5__4,
              v667,
              v225,
              v226,
              v227,
              v228,
              v229,
              v230);
            v247 = (System_Int32_array **)StringLiteral_19068/*"goto_title"*/;
LABEL_591:
            v248 = (BattleServantConfConponent_o *)&v2->fields._errorAction_5__5;
            v668[1] = (struct System_String_o *)v247;
            goto LABEL_118;
          }
          if ( v244 == -1372582105 )
          {
            if ( System_String__op_Equality(v243, (System_String_o *)StringLiteral_1180/*"404"*/, 0LL) )
            {
              v669 = &StringLiteral_9292/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/;
              goto LABEL_590;
            }
            goto LABEL_589;
          }
          if ( v244 != -1008248995 )
            goto LABEL_589;
          v663 = &StringLiteral_1143/*"200"*/;
        }
        else
        {
          if ( v244 <= 0x2D98A5D6 )
          {
            if ( v244 == 731423408 )
            {
              v245 = &StringLiteral_1188/*"500"*/;
              goto LABEL_588;
            }
            if ( v244 == 764978646 )
            {
              v245 = &StringLiteral_1190/*"502"*/;
LABEL_588:
              System_String__op_Equality(v243, (System_String_o *)*v245, 0LL);
            }
LABEL_589:
            v669 = &StringLiteral_9289/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
LABEL_590:
            v670 = (System_Int32_array **)*v669;
            v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v669;
            v668 = &v2->fields._errorLocalizeCode_5__4;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v2->fields._errorLocalizeCode_5__4,
              v670,
              v225,
              v226,
              v227,
              v228,
              v229,
              v230);
            v247 = (System_Int32_array **)StringLiteral_21808/*"retry"*/;
            goto LABEL_591;
          }
          if ( v244 == 781756265 )
          {
            v245 = &StringLiteral_1192/*"503"*/;
            goto LABEL_588;
          }
          if ( v244 != 1129311756 )
            goto LABEL_589;
          v663 = &StringLiteral_1159/*"302"*/;
        }
        if ( System_String__op_Equality(v243, (System_String_o *)*v663, 0LL) )
        {
          v248 = (BattleServantConfConponent_o *)&v2->fields._errorCode_5__3;
          v247 = 0LL;
          v2->fields._errorCode_5__3 = 0LL;
LABEL_118:
          sub_B2C2F8(v248, v247, v225, v226, v227, v228, v229, v230);
          goto LABEL_119;
        }
        goto LABEL_589;
      }
      if ( !v144 )
        goto LABEL_532;
      if ( !v2->fields._isNoRedirect_5__9 )
      {
        text = (System_Int32_array **)DelightWorks_Network_UnityWebRequestWWW__get_text(
                                        (DelightWorks_Network_UnityWebRequestWWW_o *)*v136,
                                        0LL);
        v2->fields._data_5__2 = (struct System_String_o *)text;
        sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields._data_5__2, text, v409, v410, v411, v412, v413, v414);
        this = (NetworkManager__RequestCR_d__211_o *)NetworkManager_TypeInfo;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (NetworkManager__RequestCR_d__211_o *)NetworkManager_TypeInfo;
        }
        if ( this[1].fields.work[3].monitor )
          goto LABEL_119;
        v415 = v2->fields.work;
        if ( !v415 )
          goto LABEL_119;
        v416 = *(&TopLoginRequest_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v415->klass->_2.bitflags2 + 1) < (unsigned int)v416
          || (TopLoginRequest_c *)v415->klass->_2.typeHierarchy[v416 - 1] != TopLoginRequest_TypeInfo )
        {
          goto LABEL_119;
        }
        if ( !*v136 )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)(*v136)->fields.__4__this;
        if ( !this )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                                       (const MethodInfo_2DB18BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
        if ( (int)this < 1 )
          goto LABEL_119;
        if ( !*v136 )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)(*v136)->fields.__4__this;
        if ( !this )
          goto LABEL_532;
        System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v682,
          (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)this,
          (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
        v686 = v682;
        while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                  &v686,
                  (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
          ;
        v683[0] = 1969;
        v417 = ++v684;
        System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
          &v686,
          (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
        if ( v417 && v683[v417 - 1] == 1969 )
          v684 = v417 - 1;
        if ( !*v136 )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)(*v136)->fields.__4__this;
        if ( !this )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                                       (System_Xml_XmlQualifiedName_o *)StringLiteral_12062/*"SET-COOKIE"*/,
                                                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_119;
        if ( !*v136 )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)(*v136)->fields.__4__this;
        if ( !this )
          goto LABEL_532;
        v418 = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this,
                                    (System_Type_o *)StringLiteral_12062/*"SET-COOKIE"*/,
                                    (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        this = (NetworkManager__RequestCR_d__211_o *)sub_B2C374(char___TypeInfo, 2LL);
        if ( !this )
          goto LABEL_532;
        v419 = (int)this->fields.__2__current;
        method = (const MethodInfo *)this;
        if ( v419 )
        {
          LOWORD(this->fields.work) = 32;
          if ( v419 != 1 )
          {
            WORD1(this->fields.work) = 59;
            if ( !v418 )
              goto LABEL_532;
            v420 = System_String__Split_44366316(v418, (System_Char_array *)this, 1, 0LL);
            v427 = NetworkManager_TypeInfo;
            v428 = v420;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v427 = NetworkManager_TypeInfo;
            }
            v429 = v427->static_fields;
            v430 = (System_Int32_array **)StringLiteral_1/*""*/;
            v429->sessionId = (struct System_String_o *)StringLiteral_1/*""*/;
            sub_B2C2F8((BattleServantConfConponent_o *)&v429->sessionId, v430, v421, v422, v423, v424, v425, v426);
            if ( !v428 )
              goto LABEL_532;
            max_length = v428->max_length;
            if ( max_length < 1 )
              goto LABEL_119;
            v432 = 0;
            while ( v432 < max_length )
            {
              v433 = &v428->obj.klass + (int)v432;
              v434 = (System_String_o *)v433[4];
              if ( !v434 )
                goto LABEL_532;
              this = (NetworkManager__RequestCR_d__211_o *)System_String__StartsWith(
                                                             (System_String_o *)v433[4],
                                                             (System_String_o *)StringLiteral_21436/*"path="*/,
                                                             0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v435 = NetworkManager_TypeInfo;
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v435 = NetworkManager_TypeInfo;
                }
                v436 = (System_Int32_array **)System_String__Concat_44307816(
                                                v435->static_fields->sessionId,
                                                v434,
                                                (System_String_o *)StringLiteral_1262/*";"*/,
                                                0LL);
                v437 = NetworkManager_TypeInfo->static_fields;
                v437->sessionId = (struct System_String_o *)v436;
                sub_B2C2F8((BattleServantConfConponent_o *)&v437->sessionId, v436, v438, v439, v440, v441, v442, v443);
                max_length = v428->max_length;
                if ( (int)++v432 < max_length )
                  continue;
              }
              goto LABEL_119;
            }
          }
        }
LABEL_595:
        v671 = sub_B2C460(this);
        sub_B2C400(v671, 0LL);
      }
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)*v136, 0LL);
LABEL_119:
      if ( !*v136 )
        goto LABEL_532;
      v249 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*v136)->fields.__4__this;
      if ( v249 )
      {
        this = (NetworkManager__RequestCR_d__211_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                                                       v249,
                                                       (const MethodInfo_2DB18BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
        if ( (int)this >= 1 )
        {
          if ( !*v136 )
            goto LABEL_532;
          this = (NetworkManager__RequestCR_d__211_o *)(*v136)->fields.__4__this;
          if ( !this )
            goto LABEL_532;
          this = (NetworkManager__RequestCR_d__211_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_15536/*"X-SERVER-TIME"*/,
                                                         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*v136 )
              goto LABEL_532;
            this = (NetworkManager__RequestCR_d__211_o *)(*v136)->fields.__4__this;
            if ( !this )
              goto LABEL_532;
            this = (NetworkManager__RequestCR_d__211_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this,
                                                           (System_Type_o *)StringLiteral_15536/*"X-SERVER-TIME"*/,
                                                           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
            if ( !this )
              goto LABEL_532;
            v250 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                        this,
                                        this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
            v251 = System_Int64__Parse(v250, 0LL);
            v252 = NetworkManager_TypeInfo;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v252 = NetworkManager_TypeInfo;
            }
            v252->static_fields->serverTime = v251;
            v252->static_fields->serverOffsetTime = v252->static_fields->serverTime - v2->fields._startTime_5__8;
            v252->static_fields->nowTime = -1LL;
          }
        }
      }
      this = *v136;
      if ( !*v136 )
        goto LABEL_532;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      v2->fields._www_5__10 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)v136, 0LL, v253, v254, v255, v256, v257, v258);
      v2->fields._wait_5__14 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields._wait_5__14, 0LL, v259, v260, v261, v262, v263, v264);
LABEL_134:
      p_errorCode_5__3 = &v2->fields._errorCode_5__3;
      if ( v2->fields._errorCode_5__3 )
        goto LABEL_141;
      if ( System_String__IsNullOrEmpty(v2->fields._data_5__2, 0LL) )
      {
        v271 = (System_Int32_array **)StringLiteral_21120/*"none data"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_21120/*"none data"*/;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v2->fields._errorCode_5__3,
          v271,
          v265,
          v266,
          v267,
          v268,
          v269,
          v270);
        v272 = (System_Int32_array **)StringLiteral_9291/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9291/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v2->fields._errorLocalizeCode_5__4,
          v272,
          v273,
          v274,
          v275,
          v276,
          v277,
          v278);
        v279 = (System_Int32_array **)StringLiteral_19068/*"goto_title"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_19068/*"goto_title"*/;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v2->fields._errorAction_5__5,
          v279,
          v280,
          v281,
          v282,
          v283,
          v284,
          v285);
        if ( v2->fields._isNoRedirect_5__9 )
        {
          v292 = (BattleServantConfConponent_o *)&v2->fields._errorCode_5__3;
          v293 = 0LL;
          *p_errorCode_5__3 = 0LL;
LABEL_140:
          sub_B2C2F8(v292, v293, v286, v287, v288, v289, v290, v291);
        }
LABEL_141:
        v308 = 0;
        goto LABEL_142;
      }
      if ( System_String__op_Equality(v2->fields._data_5__2, (System_String_o *)StringLiteral_7705/*"Internal Server Error"*/, 0LL) )
      {
        v300 = (System_Int32_array **)StringLiteral_19848/*"internal server error"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_19848/*"internal server error"*/;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v2->fields._errorCode_5__3,
          v300,
          v294,
          v295,
          v296,
          v297,
          v298,
          v299);
        v301 = (System_Int32_array **)StringLiteral_9289/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9289/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v2->fields._errorLocalizeCode_5__4,
          v301,
          v302,
          v303,
          v304,
          v305,
          v306,
          v307);
        v292 = (BattleServantConfConponent_o *)&v2->fields._errorAction_5__5;
        v293 = (System_Int32_array **)StringLiteral_21808/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_21808/*"retry"*/;
        goto LABEL_140;
      }
      data_5__2 = v2->fields._data_5__2;
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      this = (NetworkManager__RequestCR_d__211_o *)JsonManager__getDictionary(data_5__2, 0LL);
      if ( !this )
        goto LABEL_532;
      v333 = this;
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_21790/*"response"*/,
              (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v388 = (System_Int32_array **)StringLiteral_21121/*"none response data"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_21121/*"none response data"*/;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v2->fields._errorCode_5__3,
          v388,
          v334,
          v335,
          v336,
          v337,
          v338,
          v339);
        v389 = (System_Int32_array **)StringLiteral_9289/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9289/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v2->fields._errorLocalizeCode_5__4,
          v389,
          v390,
          v391,
          v392,
          v393,
          v394,
          v395);
        v396 = (System_Int32_array **)StringLiteral_21808/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_21808/*"retry"*/;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v2->fields._errorAction_5__5,
          v396,
          v397,
          v398,
          v399,
          v400,
          v401,
          v402);
LABEL_227:
        v308 = 0;
        goto LABEL_519;
      }
      v340 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v333,
                               (System_Type_o *)StringLiteral_21790/*"response"*/,
                               (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v341 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                      v340,
                                      (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_ResponseData___);
      v2->fields._responseList_5__7 = (struct ResponseData_array *)v341;
      v342 = &v2->fields._responseList_5__7;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v2->fields._responseList_5__7,
        v341,
        v343,
        v344,
        v345,
        v346,
        v347,
        v348);
      responseList_5__7 = v2->fields._responseList_5__7;
      if ( !responseList_5__7 )
        goto LABEL_532;
      v350 = 0LL;
      while ( 1 )
      {
        v351 = responseList_5__7->max_length;
        if ( (int)v350 >= v351 )
          goto LABEL_227;
        if ( (unsigned int)v350 >= v351 )
          goto LABEL_595;
        v352 = &responseList_5__7->obj.klass + v350;
        v353 = (ResponseData_o *)v352[4];
        if ( !v353 )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)ResponseData__checkError_31019724((ResponseData_o *)v352[4], 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        responseList_5__7 = *v342;
        ++v350;
        if ( !*v342 )
          goto LABEL_532;
      }
      this = (NetworkManager__RequestCR_d__211_o *)sub_B2C374(string___TypeInfo, 5LL);
      if ( !this )
        goto LABEL_532;
      v455 = this;
      this = (NetworkManager__RequestCR_d__211_o *)StringLiteral_21791/*"response error "*/;
      if ( StringLiteral_21791/*"response error "*/ )
      {
        this = (NetworkManager__RequestCR_d__211_o *)sub_B2C41C(StringLiteral_21791/*"response error "*/, v455->klass->_1.element_class);
        if ( !this )
          goto LABEL_596;
        v456 = (System_Int32_array **)StringLiteral_21791/*"response error "*/;
      }
      else
      {
        v456 = 0LL;
      }
      if ( !LODWORD(v455->fields.__2__current) )
        goto LABEL_595;
      v455->fields.work = (struct RequestBase_o *)v456;
      sub_B2C2F8((BattleServantConfConponent_o *)&v455->fields.work, v456, v449, v450, v451, v452, v453, v454);
      nid = (System_Int32_array **)v353->fields.nid;
      if ( nid )
      {
        this = (NetworkManager__RequestCR_d__211_o *)sub_B2C41C(v353->fields.nid, v455->klass->_1.element_class);
        if ( !this )
          goto LABEL_596;
      }
      if ( LODWORD(v455->fields.__2__current) <= 1 )
        goto LABEL_595;
      v455->fields.__4__this = (struct NetworkManager_o *)nid;
      sub_B2C2F8((BattleServantConfConponent_o *)&v455->fields.__4__this, nid, v549, v550, v551, v552, v553, v554);
      this = (NetworkManager__RequestCR_d__211_o *)StringLiteral_98/*" ("*/;
      if ( StringLiteral_98/*" ("*/ )
      {
        this = (NetworkManager__RequestCR_d__211_o *)sub_B2C41C(StringLiteral_98/*" ("*/, v455->klass->_1.element_class);
        if ( !this )
          goto LABEL_596;
        v562 = (System_Int32_array **)StringLiteral_98/*" ("*/;
      }
      else
      {
        v562 = 0LL;
      }
      if ( LODWORD(v455->fields.__2__current) <= 2 )
        goto LABEL_595;
      *(_QWORD *)&v455->fields.delay = v562;
      sub_B2C2F8((BattleServantConfConponent_o *)&v455->fields.delay, v562, v556, v557, v558, v559, v560, v561);
      resCode = (System_Int32_array **)v353->fields.resCode;
      if ( resCode )
      {
        this = (NetworkManager__RequestCR_d__211_o *)sub_B2C41C(v353->fields.resCode, v455->klass->_1.element_class);
        if ( !this )
        {
LABEL_596:
          v672 = sub_B2C454(this);
          sub_B2C400(v672, 0LL);
        }
      }
      if ( LODWORD(v455->fields.__2__current) <= 3 )
        goto LABEL_595;
      v455->fields._data_5__2 = (struct System_String_o *)resCode;
      sub_B2C2F8((BattleServantConfConponent_o *)&v455->fields._data_5__2, resCode, v563, v564, v565, v566, v567, v568);
      this = (NetworkManager__RequestCR_d__211_o *)StringLiteral_652/*")"*/;
      if ( StringLiteral_652/*")"*/ )
      {
        this = (NetworkManager__RequestCR_d__211_o *)sub_B2C41C(StringLiteral_652/*")"*/, v455->klass->_1.element_class);
        if ( this )
        {
          v576 = (System_Int32_array **)StringLiteral_652/*")"*/;
          goto LABEL_495;
        }
        goto LABEL_596;
      }
      v576 = 0LL;
LABEL_495:
      if ( LODWORD(v455->fields.__2__current) <= 4 )
        goto LABEL_595;
      v455->fields._errorCode_5__3 = (struct System_String_o *)v576;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v455->fields._errorCode_5__3,
        v576,
        v570,
        v571,
        v572,
        v573,
        v574,
        v575);
      v577 = (System_Int32_array **)System_String__Concat_44385656((System_String_array *)v455, 0LL);
      v2->fields._errorCode_5__3 = (struct System_String_o *)v577;
      sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields._errorCode_5__3, v577, v578, v579, v580, v581, v582, v583);
      v584 = (ResponseFailData_o *)sub_B2C42C(ResponseFailData_TypeInfo);
      ResponseFailData___ctor(v584, v353, 0LL);
      v585 = &v2->fields._failData_5__6;
      v2->fields._failData_5__6 = v584;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v2->fields._failData_5__6,
        (System_Int32_array **)v584,
        v586,
        v587,
        v588,
        v589,
        v590,
        v591);
      failData_5__6 = v2->fields._failData_5__6;
      if ( !failData_5__6 )
        goto LABEL_532;
      this = (NetworkManager__RequestCR_d__211_o *)System_String__IsNullOrEmpty(failData_5__6->fields.action, 0LL);
      p_action = (System_Int32_array ***)&StringLiteral_21808/*"retry"*/;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !*v585 )
          goto LABEL_532;
        p_action = (System_Int32_array ***)&(*v585)->fields.action;
      }
      v600 = *p_action;
      v2->fields._errorAction_5__5 = (struct System_String_o *)*p_action;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v2->fields._errorAction_5__5,
        v600,
        v593,
        v594,
        v595,
        v596,
        v597,
        v598);
      v601 = v2->fields.work;
      if ( !v601 )
      {
        v604 = 0;
        goto LABEL_518;
      }
      v602 = PurchaseByBank_UnityIap_Request_TypeInfo;
      v603 = *(&PurchaseByBank_UnityIap_Request_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v601->klass->_2.bitflags2 + 1) >= (unsigned int)v603
        && (PurchaseByBank_UnityIap_Request_c *)v601->klass->_2.typeHierarchy[v603 - 1] == PurchaseByBank_UnityIap_Request_TypeInfo )
      {
        if ( !*v585 )
          goto LABEL_532;
        v662 = System_String__op_Equality((*v585)->fields.action, (System_String_o *)StringLiteral_21808/*"retry"*/, 0LL);
        v601 = v2->fields.work;
        v604 = v662;
        if ( !v601 )
          goto LABEL_518;
        v602 = PurchaseByBank_UnityIap_Request_TypeInfo;
      }
      else
      {
        v604 = 0;
      }
      v605 = v601->klass;
      v606 = *(&v602->_2.bitflags2 + 1);
      if ( *(&v605->_2.bitflags2 + 1) < (unsigned int)v606
        || (PurchaseByBank_UnityIap_Request_c *)v605->_2.typeHierarchy[v606 - 1] != v602 )
      {
LABEL_518:
        v308 = v604 != 0;
        goto LABEL_519;
      }
      v607 = *v342;
      v308 = v604 != 0;
      if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
      }
      v608 = ResponseCommandKind__SearchData(11, v607, 0LL);
      if ( v608 )
      {
        fail = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v608->fields.fail;
        if ( fail )
        {
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                 fail,
                 (System_Xml_XmlQualifiedName_o *)StringLiteral_21798/*"result"*/,
                 &v685,
                 (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
          {
            this = (NetworkManager__RequestCR_d__211_o *)v685;
            if ( !v685 )
              goto LABEL_532;
            v610 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))v685->klass->vtable._3_ToString.method)(
                                        v685,
                                        v685->klass->vtable._4_OnAdd.methodPtr);
            if ( v610 )
            {
              v611 = v610;
              if ( System_String__op_Equality(v610, (System_String_o *)StringLiteral_21451/*"pending_purchase_error"*/, 0LL)
                || System_String__op_Equality(v611, (System_String_o *)StringLiteral_17201/*"canceled_purchase_error"*/, 0LL) )
              {
                v618 = (System_Int32_array **)StringLiteral_22326/*"stay_no_dialog"*/;
                v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22326/*"stay_no_dialog"*/;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&v2->fields._errorAction_5__5,
                  v618,
                  v612,
                  v613,
                  v614,
                  v615,
                  v616,
                  v617);
              }
            }
          }
        }
      }
LABEL_519:
      if ( !*p_errorCode_5__3 )
      {
        this = (NetworkManager__RequestCR_d__211_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v333,
                                                       (System_Xml_XmlQualifiedName_o *)StringLiteral_17171/*"cache"*/,
                                                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v619 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          this = (NetworkManager__RequestCR_d__211_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                         (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v333,
                                                         (System_Type_o *)StringLiteral_17171/*"cache"*/,
                                                         (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v619 )
            goto LABEL_532;
          DataManager__updateJsonData((DataManager_o *)v619, (Il2CppObject *)this, 0LL);
        }
        v620 = v2->fields._responseList_5__7;
        if ( v620 )
        {
          v621 = 0LL;
          while ( 1 )
          {
            v622 = v620->max_length;
            if ( (__int64)v621 >= (int)v622 )
              goto LABEL_142;
            if ( v621 >= v622 )
              goto LABEL_595;
            v623 = v620->m_Items[v621];
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            this = (NetworkManager__RequestCR_d__211_o *)NetworkManager__ExecuteCommand(v623, 0LL);
            if ( (_DWORD)this )
              break;
            v620 = v2->fields._responseList_5__7;
            ++v621;
            if ( !v620 )
              goto LABEL_532;
          }
          if ( v623 )
          {
            v624 = (System_Int32_array **)System_String__Concat_44305532(
                                            (System_String_o *)StringLiteral_21792/*"response execute error "*/,
                                            v623->fields.nid,
                                            0LL);
            v2->fields._errorCode_5__3 = (struct System_String_o *)v624;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v2->fields._errorCode_5__3,
              v624,
              v625,
              v626,
              v627,
              v628,
              v629,
              v630);
            v631 = (ResponseFailData_o *)sub_B2C42C(ResponseFailData_TypeInfo);
            ResponseFailData___ctor(v631, v623, 0LL);
            v632 = &v2->fields._failData_5__6;
            v2->fields._failData_5__6 = v631;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v2->fields._failData_5__6,
              (System_Int32_array **)v631,
              v633,
              v634,
              v635,
              v636,
              v637,
              v638);
            v639 = v2->fields._failData_5__6;
            if ( v639 )
            {
              this = (NetworkManager__RequestCR_d__211_o *)System_String__IsNullOrEmpty(v639->fields.action, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v646 = (System_Int32_array ***)&StringLiteral_21808/*"retry"*/;
              }
              else
              {
                if ( !*v632 )
                  goto LABEL_532;
                v646 = (System_Int32_array ***)&(*v632)->fields.action;
              }
              v647 = *v646;
              v2->fields._errorAction_5__5 = (struct System_String_o *)*v646;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v2->fields._errorAction_5__5,
                v647,
                v640,
                v641,
                v642,
                v643,
                v644,
                v645);
              goto LABEL_142;
            }
          }
        }
LABEL_532:
        sub_B2C434(this, method);
      }
LABEL_142:
      p_work = (NetworkManager__RequestCR_d__211_o **)&v2->fields.work;
      this = (NetworkManager__RequestCR_d__211_o *)v2->fields.work;
      if ( !this )
        goto LABEL_532;
      this = (NetworkManager__RequestCR_d__211_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                     this,
                                                     this->klass[1]._1.image);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = *p_work;
        if ( !*p_work )
          goto LABEL_532;
        this = (NetworkManager__RequestCR_d__211_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, const char *))this->klass[1]._1.gc_desc)(
                                                       this,
                                                       this->klass[1]._1.name);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (NetworkManager__RequestCR_d__211_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_532;
          CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
        }
      }
      if ( !*p_errorCode_5__3 )
      {
        if ( !_4__this )
          goto LABEL_532;
        NetworkManager__OnEndCommunication(_4__this, v2->fields.work, v2->fields._responseList_5__7, 0LL);
LABEL_467:
        v546 = (System_Int32_array **)v2->fields._data_5__2;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        if ( !byte_418BAA5 )
        {
          sub_B2C35C(&NetworkManager_TypeInfo, v329);
          byte_418BAA5 = 1;
        }
        v547 = NetworkManager_TypeInfo;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v547 = NetworkManager_TypeInfo;
        }
        p_errorDialogResponseData = (BattleServantConfConponent_o *)&v547->static_fields->errorDialogResponseData;
        p_errorDialogResponseData->klass = (BattleServantConfConponent_c *)v546;
        sub_B2C2F8(p_errorDialogResponseData, v546, v125, v126, v127, v128, v129, v130);
        return 0;
      }
      p_responseList_5__7 = (BattleServantConfConponent_o *)&v2->fields._responseList_5__7;
      method = (const MethodInfo *)v2->fields._responseList_5__7;
      if ( !_4__this )
        goto LABEL_532;
      _4__this->fields.communicationWorkResponseList = (struct ResponseData_array *)method;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&_4__this->fields.communicationWorkResponseList,
        (System_Int32_array **)method,
        v309,
        v310,
        v311,
        v312,
        v313,
        v314);
      v2->fields._responseList_5__7 = 0LL;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v2->fields._responseList_5__7,
        0LL,
        v315,
        v316,
        v317,
        v318,
        v319,
        v320);
      p_errorLocalizeCode_5__4 = (BattleServantConfConponent_o *)&v2->fields._errorLocalizeCode_5__4;
      errorLocalizeCode_5__4 = v2->fields._errorLocalizeCode_5__4;
      if ( errorLocalizeCode_5__4 )
      {
        data = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_309;
      }
      errorAction_5__5 = v2->fields._errorAction_5__5;
      if ( !errorAction_5__5 )
        goto LABEL_599;
      if ( System_String__op_Equality(v2->fields._errorAction_5__5, (System_String_o *)StringLiteral_22315/*"stay"*/, 0LL)
        || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22326/*"stay_no_dialog"*/, 0LL) )
      {
        v331 = (System_Int32_array ***)&StringLiteral_9290/*"NETWORK_ERROR_SERVER_CANCEL_MESSAGE"*/;
LABEL_307:
        v459 = *v331;
        p_errorLocalizeCode_5__4->klass = (BattleServantConfConponent_c *)*v331;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v2->fields._errorLocalizeCode_5__4,
          v459,
          v321,
          v322,
          v323,
          v324,
          v325,
          v326);
        goto LABEL_308;
      }
      if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_21808/*"retry"*/, 0LL)
        || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_21759/*"reload_cache"*/, 0LL) )
      {
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        }
        if ( !byte_4185D97 )
        {
          sub_B2C35C(&ManagementManager_TypeInfo, v444);
          byte_4185D97 = 1;
        }
        v445 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v445 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v445->static_fields->isDuringStartup;
        v447 = &StringLiteral_9280/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/;
        v448 = &StringLiteral_9294/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/;
LABEL_304:
        if ( isDuringStartup )
          v331 = (System_Int32_array ***)v447;
        else
          v331 = (System_Int32_array ***)v448;
        goto LABEL_307;
      }
      if ( !System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_19067/*"goto_login_access"*/, 0LL)
        && !System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_21742/*"refresh_terminal"*/, 0LL) )
      {
LABEL_599:
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
        v458 = ManagementManager_TypeInfo;
        if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v458 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v458->static_fields->isDuringStartup;
        v447 = (__int64 *)&StringLiteral_9277/*"NETWORK_ERROR_BOOT_MESSAGE"*/;
        v448 = &StringLiteral_9291/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        goto LABEL_304;
      }
LABEL_308:
      errorLocalizeCode_5__4 = (System_String_o *)p_errorLocalizeCode_5__4->klass;
      data = (System_String_o *)StringLiteral_1/*""*/;
      v460 = (System_String_o *)StringLiteral_1/*""*/;
      if ( p_errorLocalizeCode_5__4->klass )
      {
LABEL_309:
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v460 = LocalizationManager__Get(errorLocalizeCode_5__4, 0LL);
      }
      p_failData_5__6 = (BattleServantConfConponent_o *)&v2->fields._failData_5__6;
      v461 = v2->fields._failData_5__6;
      if ( v461 )
      {
        this = (NetworkManager__RequestCR_d__211_o *)System_String__IsNullOrEmpty(v461->fields.title, 0LL);
        v462 = p_failData_5__6->klass;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v462 )
            goto LABEL_532;
        }
        else
        {
          if ( !v462 )
            goto LABEL_532;
          data = (System_String_o *)v462->_1.this_arg.data;
        }
        this = (NetworkManager__RequestCR_d__211_o *)System_String__IsNullOrEmpty(
                                                       *(System_String_o **)&v462->_1.this_arg.bits,
                                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !p_failData_5__6->klass )
            goto LABEL_532;
          v460 = *(System_String_o **)&p_failData_5__6->klass->_1.this_arg.bits;
        }
        this = (NetworkManager__RequestCR_d__211_o *)System_String__IsNullOrEmpty(v460, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !p_failData_5__6->klass )
            goto LABEL_532;
          if ( p_failData_5__6->klass->_1.byval_arg.data )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            this = (NetworkManager__RequestCR_d__211_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_9281/*"NETWORK_ERROR_CSID_CODE"*/,
                                                           0LL);
            if ( !p_failData_5__6->klass )
              goto LABEL_532;
            v463 = System_String__Format(
                     (System_String_o *)this,
                     (Il2CppObject *)p_failData_5__6->klass->_1.byval_arg.data,
                     0LL);
            this = (NetworkManager__RequestCR_d__211_o *)System_String__Concat_44307816(
                                                           v460,
                                                           (System_String_o *)StringLiteral_26/*"\n"*/,
                                                           v463,
                                                           0LL);
            v460 = (System_String_o *)this;
          }
        }
        if ( !p_failData_5__6->klass )
          goto LABEL_532;
        value = (System_String_o *)p_failData_5__6->klass->_1.element_class;
      }
      else
      {
        value = 0LL;
      }
      title = data;
      v681 = _4__this;
      this = *p_work;
      if ( !*p_work )
        goto LABEL_532;
      v464 = &v2->fields._errorAction_5__5;
      if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
              this,
              this->klass[1]._1.image) & 1) == 0 )
        goto LABEL_341;
      v465 = *v464;
      if ( !*v464 )
        goto LABEL_456;
      if ( !System_String__op_Equality(*v464, (System_String_o *)StringLiteral_22315/*"stay"*/, 0LL)
        && !System_String__op_Equality(v465, (System_String_o *)StringLiteral_22326/*"stay_no_dialog"*/, 0LL)
        && !System_String__op_Equality(v465, (System_String_o *)StringLiteral_21808/*"retry"*/, 0LL)
        && !System_String__op_Equality(v465, (System_String_o *)StringLiteral_21759/*"reload_cache"*/, 0LL)
        || (v466 = NetworkManager__OnBackgroundErrorCommunication(
                     v681,
                     v681->fields.communicationWork,
                     *p_errorCode_5__3,
                     0,
                     0LL),
            result = 0,
            !v466) )
      {
LABEL_341:
        v467 = *v464;
        if ( !*v464 )
          goto LABEL_456;
        v468 = PrivateImplementationDetails___ComputeStringHash_21099092(*v464, 0LL);
        if ( v468 <= 0xA56F89EB )
        {
          if ( v468 <= 0x43CDBBC3 )
          {
            if ( v468 != 1019014393 )
            {
              if ( v468 == 1062826843 )
              {
                if ( System_String__op_Equality(v467, (System_String_o *)StringLiteral_19068/*"goto_title"*/, 0LL) )
                {
                  v479 = NetworkManager_TypeInfo;
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    v479 = NetworkManager_TypeInfo;
                  }
                  v479->static_fields->isRebootBlock = 1;
                  v480 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(v480, (Il2CppObject *)v681, Method_NetworkManager_OnClickErrorReboot__, 0LL);
                  NetworkManager__ErrorDialog(v681, title, v460, value, v480, 0LL);
                  goto LABEL_458;
                }
              }
              else if ( v468 == 1137556419
                     && System_String__op_Equality(v467, (System_String_o *)StringLiteral_22326/*"stay_no_dialog"*/, 0LL) )
              {
                NetworkManager__OnClickErrorStay(v681, 0LL);
                goto LABEL_458;
              }
              goto LABEL_456;
            }
            this = (NetworkManager__RequestCR_d__211_o *)System_String__op_Equality(
                                                           v467,
                                                           (System_String_o *)StringLiteral_21759/*"reload_cache"*/,
                                                           0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_456;
            if ( !p_failData_5__6->klass )
              goto LABEL_532;
            cancleTxta = (int32_t)p_failData_5__6->klass->_1.typeMetadataHandle;
            v481 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            v482 = &Method_NetworkManager_OnClickReloadCache__;
            goto LABEL_544;
          }
          if ( v468 <= 0x9918C6CA )
          {
            if ( v468 == -1726429494 )
            {
              if ( System_String__op_Equality(v467, (System_String_o *)StringLiteral_19891/*"invalid_user"*/, 0LL) )
              {
                v483 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                valuea = LocalizationManager__Get((System_String_o *)StringLiteral_9296/*"NETWORK_USER_DELETE_DECIDE"*/, 0LL);
                cancleTxtb = LocalizationManager__Get((System_String_o *)StringLiteral_9295/*"NETWORK_USER_DELETE_CANCEL"*/, 0LL);
                v484 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                CommonConfirmDialog_ClickDelegate___ctor(
                  v484,
                  (Il2CppObject *)v681,
                  Method_NetworkManager_OnClickUserDelete__,
                  0LL);
                if ( !v483 )
                  goto LABEL_532;
                CommonUI__OpenConfirmDialog_17970624(v483, title, v460, valuea, cancleTxtb, v484, 0, 0, 0, 0LL);
                goto LABEL_458;
              }
              goto LABEL_456;
            }
            if ( v468 == 2106643173 && System_String__op_Equality(v467, (System_String_o *)StringLiteral_21742/*"refresh_terminal"*/, 0LL) )
            {
              if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleData_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
              }
              BattleData__deleteSaveData(0LL);
              BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
              this = (NetworkManager__RequestCR_d__211_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
              if ( !this )
                goto LABEL_532;
              ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)this, 0LL);
              this = (NetworkManager__RequestCR_d__211_o *)System_String__IsNullOrEmpty(v460, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (NetworkManager__RequestCR_d__211_o *)System_String__IsNullOrEmpty(value, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  NetworkManager__OnClickRefreshTerminal(v681, 0LL);
                  goto LABEL_458;
                }
              }
              if ( !p_failData_5__6->klass )
                goto LABEL_532;
              cancleTxta = (int32_t)p_failData_5__6->klass->_1.typeMetadataHandle;
              v481 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              v482 = &Method_NetworkManager_OnClickRefreshTerminal__;
              goto LABEL_544;
            }
LABEL_456:
            v506 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v507 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v507,
              (Il2CppObject *)v681,
              Method_NetworkManager_OnClickErrorDialog__,
              0LL);
            if ( !v506 )
              goto LABEL_532;
            CommonUI__OpenErrorDialog(v506, title, v460, v507, 0, 0LL);
            goto LABEL_458;
          }
          if ( v468 != -1577396083 )
          {
            if ( v468 != -1519416853 || !System_String__op_Equality(v467, (System_String_o *)StringLiteral_19067/*"goto_login_access"*/, 0LL) )
              goto LABEL_456;
            v477 = NetworkManager_TypeInfo;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v477 = NetworkManager_TypeInfo;
            }
            v477->static_fields->isRebootBlock = 1;
            this = (NetworkManager__RequestCR_d__211_o *)System_String__IsNullOrEmpty(v460, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (NetworkManager__RequestCR_d__211_o *)System_String__IsNullOrEmpty(value, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                NetworkManager__OnClickErrorTerminal(v681, 0LL);
                goto LABEL_458;
              }
            }
            if ( !p_failData_5__6->klass )
              goto LABEL_532;
            cancleTxta = (int32_t)p_failData_5__6->klass->_1.typeMetadataHandle;
            v481 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            v482 = &Method_NetworkManager_OnClickErrorTerminal__;
            goto LABEL_544;
          }
          if ( !System_String__op_Equality(v467, (System_String_o *)StringLiteral_18039/*"do_signup"*/, 0LL) )
            goto LABEL_456;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          NetworkManager__DeleteSignupData(0LL);
          goto LABEL_449;
        }
        if ( v468 > 0xCC10A7C9 )
        {
          if ( v468 <= 0xDA79AAB9 )
          {
            if ( v468 == -809642680 )
            {
              this = (NetworkManager__RequestCR_d__211_o *)System_String__op_Equality(
                                                             v467,
                                                             (System_String_o *)StringLiteral_21721/*"reconnection"*/,
                                                             0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v485 = p_failData_5__6->klass;
                if ( !p_failData_5__6->klass )
                  goto LABEL_532;
                declaringType = (System_String_o *)v485->_1.declaringType;
                castClass_low = LOBYTE(v485->_1.castClass);
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                NetworkManager__SetGameServerRedirect(declaringType, castClass_low != 0, 0LL);
                if ( !p_failData_5__6->klass )
                  goto LABEL_532;
                parent = (System_Int32_array **)p_failData_5__6->klass->_1.parent;
                if ( !byte_418BAA3 )
                {
                  sub_B2C35C(&NetworkManager_TypeInfo, method);
                  byte_418BAA3 = 1;
                }
                v495 = NetworkManager_TypeInfo;
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v495 = NetworkManager_TypeInfo;
                }
                v496 = v495->static_fields;
                v496->dataServerRedirectAddress = (struct System_String_o *)parent;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&v496->dataServerRedirectAddress,
                  parent,
                  v488,
                  v489,
                  v490,
                  v491,
                  v492,
                  v493);
                if ( !p_failData_5__6->klass )
                  goto LABEL_532;
                generic_class = (System_Int32_array **)p_failData_5__6->klass->_1.generic_class;
                if ( !byte_418BAA4 )
                {
                  sub_B2C35C(&NetworkManager_TypeInfo, method);
                  byte_418BAA4 = 1;
                }
                v504 = NetworkManager_TypeInfo;
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v504 = NetworkManager_TypeInfo;
                }
                v505 = v504->static_fields;
                v505->webServerRedirectAddress = (struct System_String_o *)generic_class;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&v505->webServerRedirectAddress,
                  generic_class,
                  v497,
                  v498,
                  v499,
                  v500,
                  v501,
                  v502);
                NetworkManager__SetServerSetting_26282224(v681, 0LL);
                goto LABEL_458;
              }
            }
            else if ( v468 == -629560647
                   && System_String__op_Equality(v467, (System_String_o *)StringLiteral_21808/*"retry"*/, 0LL) )
            {
              this = *p_work;
              if ( !*p_work )
                goto LABEL_532;
              if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                      this,
                      this->klass[1]._1.declaringType) & 1) != 0 )
              {
                p_errorAction_5__5 = (BattleServantConfConponent_o *)&v2->fields._errorAction_5__5;
                if ( NetworkManager__OnErrorCommunication(v681, v681->fields.communicationWork, *p_errorCode_5__3, 0LL) )
                  return 0;
                goto LABEL_459;
              }
              if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ManagementManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              }
              if ( !byte_4185D97 )
              {
                sub_B2C35C(&ManagementManager_TypeInfo, v476);
                byte_4185D97 = 1;
              }
              v657 = ManagementManager_TypeInfo;
              if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ManagementManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                v657 = ManagementManager_TypeInfo;
              }
              v658 = v657->static_fields->isDuringStartup;
              v659 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( v658 )
              {
                v660 = (CommonUI_o *)v659;
                v661 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
                ErrorDialog_ClickDelegate___ctor(
                  v661,
                  (Il2CppObject *)v681,
                  Method_NetworkManager_OnClickErrorRetryDialog__,
                  0LL);
                if ( !v660 )
                  goto LABEL_532;
                CommonUI__OpenRetryBootDialog(v660, title, v460, v661, 0, 0LL);
              }
              else
              {
                v664 = (CommonUI_o *)v659;
                if ( v308 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  valueb = LocalizationManager__Get((System_String_o *)StringLiteral_3265/*"COMMON_CONFIRM_RETRY"*/, 0LL);
                  cancleTxtc = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
                  v665 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v665,
                    (Il2CppObject *)v681,
                    Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__,
                    0LL);
                  if ( !v664 )
                    goto LABEL_532;
                  CommonUI__OpenRetryDialog_17970068(v664, title, v460, valueb, cancleTxtc, v665, 0, 0LL);
                }
                else
                {
                  v666 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v666,
                    (Il2CppObject *)v681,
                    Method_NetworkManager_OnClickErrorRetryDialog__,
                    0LL);
                  method = (const MethodInfo *)title;
                  if ( !v664 )
                    goto LABEL_532;
                  CommonUI__OpenRetryDialog(v664, title, v460, v666, 0, 0LL);
                }
              }
LABEL_458:
              p_errorAction_5__5 = (BattleServantConfConponent_o *)&v2->fields._errorAction_5__5;
LABEL_459:
              p_responseList_5__7->klass = 0LL;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v2->fields._responseList_5__7,
                0LL,
                v469,
                v470,
                v471,
                v472,
                v473,
                v474);
              if ( System_String__op_Equality(
                     (System_String_o *)p_errorAction_5__5->klass,
                     (System_String_o *)StringLiteral_21721/*"reconnection"*/,
                     0LL) )
              {
LABEL_460:
                v2->fields._data_5__2 = 0LL;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&v2->fields._data_5__2,
                  0LL,
                  v125,
                  v126,
                  v127,
                  v128,
                  v129,
                  v130);
                v2->fields._errorCode_5__3 = 0LL;
                sub_B2C2F8((BattleServantConfConponent_o *)p_errorCode_5__3, 0LL, v508, v509, v510, v511, v512, v513);
                v2->fields._errorLocalizeCode_5__4 = 0LL;
                sub_B2C2F8(p_errorLocalizeCode_5__4, 0LL, v514, v515, v516, v517, v518, v519);
                v2->fields._errorAction_5__5 = 0LL;
                sub_B2C2F8(p_errorAction_5__5, 0LL, v520, v521, v522, v523, v524, v525);
                v2->fields._failData_5__6 = 0LL;
                sub_B2C2F8(p_failData_5__6, 0LL, v526, v527, v528, v529, v530, v531);
                v2->fields._responseList_5__7 = 0LL;
                sub_B2C2F8(p_responseList_5__7, 0LL, v532, v533, v534, v535, v536, v537);
                this = (NetworkManager__RequestCR_d__211_o *)v2->fields.work;
                if ( !this )
                  goto LABEL_532;
                if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                        this,
                        this->klass[1]._1.image) & 1) != 0 )
                  goto LABEL_466;
                this = *p_work;
                if ( !*p_work )
                  goto LABEL_532;
                if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__211_o *, const char *))this->klass[1]._1.gc_desc)(
                        this,
                        this->klass[1]._1.name) & 1) == 0 )
                {
LABEL_466:
                  v538 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v538, 0LL);
                  v2->fields.__2__current = (Il2CppObject *)v538;
                  v539 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
                  sub_B2C2F8(v539, (System_Int32_array **)v538, v540, v541, v542, v543, v544, v545);
                  result = 1;
                  *(_DWORD *)&v539[-1].fields.isOpenAfter = 1;
                  return result;
                }
                this = (NetworkManager__RequestCR_d__211_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
                  goto LABEL_466;
                }
                goto LABEL_532;
              }
              goto LABEL_467;
            }
            goto LABEL_456;
          }
          if ( v468 == -258062273 )
          {
            if ( System_String__op_Equality(v467, (System_String_o *)StringLiteral_19890/*"invalid_battle"*/, 0LL) )
            {
              if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleData_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
              }
              BattleData__deleteSaveData(0LL);
              NetworkManager__OnEndCommunication(
                v681,
                v681->fields.communicationWork,
                v681->fields.communicationWorkResponseList,
                0LL);
              goto LABEL_458;
            }
            goto LABEL_456;
          }
          if ( v468 != -193734025 || !System_String__op_Equality(v467, (System_String_o *)StringLiteral_17879/*"data_update"*/, 0LL) )
            goto LABEL_456;
          v478 = NetworkManager_TypeInfo;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v478 = NetworkManager_TypeInfo;
          }
          v478->static_fields->isRebootBlock = 1;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          DataManager__ClearCacheAll(0LL);
        }
        else
        {
          if ( v468 != -1105950412 )
          {
            if ( v468 != -969204192 )
            {
              if ( v468 != -871323703 || !System_String__op_Equality(v467, (System_String_o *)StringLiteral_16375/*"app_version_up"*/, 0LL) )
                goto LABEL_456;
              if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ManagementManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              }
              ManagementManager__RebootCacheClear(0LL);
              v475 = NetworkManager_TypeInfo;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v475 = NetworkManager_TypeInfo;
              }
              v475->static_fields->isRebootBlock = 1;
              if ( p_failData_5__6->klass )
                cancleTxt = (int32_t)p_failData_5__6->klass->_1.typeMetadataHandle;
              else
                cancleTxt = 0;
              v655 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(v655, (Il2CppObject *)v681, Method_NetworkManager_OnClickStore__, 0LL);
              v650 = value;
              v649 = title;
              v651 = cancleTxt;
              v652 = v681;
              v653 = v460;
              v654 = v655;
LABEL_545:
              NetworkManager__WarningDialog(v652, v649, v653, v650, v651, v654, 0LL);
              goto LABEL_458;
            }
            this = (NetworkManager__RequestCR_d__211_o *)System_String__op_Equality(
                                                           v467,
                                                           (System_String_o *)StringLiteral_22315/*"stay"*/,
                                                           0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_456;
LABEL_449:
            if ( !p_failData_5__6->klass )
              goto LABEL_532;
            cancleTxta = (int32_t)p_failData_5__6->klass->_1.typeMetadataHandle;
            v481 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            v482 = &Method_NetworkManager_OnClickErrorStay__;
            goto LABEL_544;
          }
          if ( !System_String__op_Equality(v467, (System_String_o *)StringLiteral_20362/*"maint"*/, 0LL) )
            goto LABEL_456;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          ManagementManager__RebootCacheClear(0LL);
          this = (NetworkManager__RequestCR_d__211_o *)NetworkManager_TypeInfo;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (NetworkManager__RequestCR_d__211_o *)NetworkManager_TypeInfo;
          }
          LOBYTE(this[1].fields.work[3].fields.CallBack) = 1;
        }
        if ( !p_failData_5__6->klass )
          goto LABEL_532;
        cancleTxta = (int32_t)p_failData_5__6->klass->_1.typeMetadataHandle;
        v481 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        v482 = &Method_NetworkManager_OnClickErrorReboot__;
LABEL_544:
        v648 = v481;
        System_Action___ctor(v481, (Il2CppObject *)v681, *v482, 0LL);
        v650 = value;
        v649 = title;
        v651 = cancleTxta;
        v652 = v681;
        v653 = v460;
        v654 = v648;
        goto LABEL_545;
      }
      return result;
    case 3:
      v146 = (NetworkManager__RequestCR_d__211_o **)&v2->fields._www_5__10;
      v145 = v2->fields._www_5__10;
      v2->fields.__1__state = -1;
      if ( !v145 )
        goto LABEL_532;
      if ( !System_String__IsNullOrEmpty(v145->fields._error_k__BackingField, 0LL) )
        goto LABEL_21;
      this = *v146;
      if ( !*v146 )
        goto LABEL_532;
      v147 = (System_Int32_array **)DelightWorks_Network_UnityWebRequestWWW__get_text(
                                      (DelightWorks_Network_UnityWebRequestWWW_o *)this,
                                      0LL);
      v2->fields._data_5__2 = (struct System_String_o *)v147;
      sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields._data_5__2, v147, v148, v149, v150, v151, v152, v153);
LABEL_21:
      this = *v146;
      if ( !*v146 )
        goto LABEL_532;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      *v146 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields._www_5__10, 0LL, v154, v155, v156, v157, v158, v159);
      goto LABEL_46;
    case 4:
      v136 = (NetworkManager__RequestCR_d__211_o **)&v2->fields._www_5__10;
      v2->fields.__1__state = -1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_NetworkManager__RequestCR_d__211_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  NetworkManager_c *v5; // x0
  UnityEngine_WaitForEndOfFrame_o *v6; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  bool result; // w0

  if ( (byte_418BA9E & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_418BA9E = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v5 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v5 = NetworkManager_TypeInfo;
    }
    v5->static_fields->nowTime = -1LL;
    goto LABEL_10;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
LABEL_10:
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    p__2__current = &this->fields.__2__current;
    sub_B2C2F8((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_NetworkManager__TimeUpdate_d__81_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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