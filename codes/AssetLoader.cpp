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
    sub_1C13F80(this, method);
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
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x21
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
  __int64 v309; // x23
  __int64 v310; // x24
  CrashReporter_o *v311; // x19

  v3 = errorCode;
  if ( (byte_4BB373D & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_1C13D24(&string___TypeInfo, v6);
    sub_1C13D24(&StringLiteral_14342/*"The public key is not valid."*/, v7);
    sub_1C13D24(&StringLiteral_21272/*"java.lang.Boolean"*/, v8);
    sub_1C13D24(&StringLiteral_12430/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/, v9);
    sub_1C13D24(&StringLiteral_1503/*"404"*/, v10);
    sub_1C13D24(&StringLiteral_14272/*"The method or operation is not implemented."*/, v11);
    sub_1C13D24(&StringLiteral_1497/*"400"*/, v12);
    sub_1C13D24(&StringLiteral_15121/*"Udp6"*/, v13);
    sub_1C13D24(&StringLiteral_15153/*"Unable to find style '"*/, v14);
    sub_1C13D24(&StringLiteral_18487/*"componentType"*/, v15);
    sub_1C13D24(&StringLiteral_7331/*"HTTP/1.0"*/, v16);
    sub_1C13D24(&StringLiteral_21274/*"java.lang.Character"*/, v17);
    sub_1C13D24(&StringLiteral_1511/*"500"*/, v18);
    sub_1C13D24(&StringLiteral_1513/*"502"*/, v19);
    sub_1C13D24(&StringLiteral_11502/*"RenderTextureDesc volumeDepth must be a multiple of 6 when dimension is CubeArray"*/, v20);
    sub_1C13D24(&StringLiteral_4777/*"Connection"*/, v21);
    sub_1C13D24(&StringLiteral_5149/*"DISP_SKLL_LV"*/, v22);
    sub_1C13D24(&StringLiteral_5148/*"DISPLAY_REMAINING_TURN"*/, v23);
    sub_1C13D24(&StringLiteral_1525/*"5047912:100:0"*/, v24);
    sub_1C13D24(&StringLiteral_15330/*"UnityType"*/, v25);
    sub_1C13D24(&StringLiteral_1515/*"503"*/, v26);
    sub_1C13D24(&StringLiteral_21255/*"iterator"*/, v27);
    sub_1C13D24(&StringLiteral_21269/*"java.io.EOFException"*/, v28);
    sub_1C13D24(&StringLiteral_1501/*"403"*/, v29);
    sub_1C13D24(&StringLiteral_4776/*"ConnectPatern"*/, v30);
    sub_1C13D24(&StringLiteral_7332/*"HTTP/1.1"*/, v31);
    sub_1C13D24(&StringLiteral_1499/*"401"*/, v32);
    sub_1C13D24(&StringLiteral_21256/*"iu"*/, v33);
    sub_1C13D24(&StringLiteral_9607/*"No MemberInfo for Object {0}."*/, v34);
    sub_1C13D24(&StringLiteral_21271/*"java.lang"*/, v35);
    sub_1C13D24(&StringLiteral_2521/*"AssetBundle file check sum error"*/, v36);
    sub_1C13D24(&StringLiteral_1504/*"404: Not Found"*/, v37);
    sub_1C13D24(&StringLiteral_14762/*"Token doesn't match a user."*/, v38);
    sub_1C13D24(&StringLiteral_13051/*"Slot '{0}' was not found. Existing slots: {1}"*/, v39);
    sub_1C13D24(&StringLiteral_2520/*"Asset"*/, v40);
    sub_1C13D24(&StringLiteral_21270/*"java.io.IOException"*/, v41);
    sub_1C13D24(&StringLiteral_5385/*"Destination address required"*/, v42);
    sub_1C13D24(&StringLiteral_4778/*"Connection broken, keep-alive detected a problem"*/, v43);
    sub_1C13D24(&StringLiteral_4374/*"Cannot request client certificate before receiving one from the server."*/, v44);
    sub_1C13D24(&StringLiteral_21273/*"java.lang.Byte"*/, v45);
    sub_1C13D24(&StringLiteral_2524/*"AssetData "*/, v46);
    byte_4BB373D = 1;
  }
  Instance = sub_1C13DCC(string___TypeInfo, 37LL);
  if ( !Instance )
    goto LABEL_58;
  v55 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_47;
  v56 = StringLiteral_9607/*"No MemberInfo for Object {0}."*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_9607/*"No MemberInfo for Object {0}."*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(Instance + 32), v56, v49, v50, v51, v52, v53, v54);
  if ( *(_DWORD *)(v55 + 24) <= 1u )
    goto LABEL_47;
  v63 = StringLiteral_2521/*"AssetBundle file check sum error"*/;
  *(_QWORD *)(v55 + 40) = StringLiteral_2521/*"AssetBundle file check sum error"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 40), v63, v57, v58, v59, v60, v61, v62);
  if ( *(_DWORD *)(v55 + 24) <= 2u )
    goto LABEL_47;
  v70 = StringLiteral_14272/*"The method or operation is not implemented."*/;
  *(_QWORD *)(v55 + 48) = StringLiteral_14272/*"The method or operation is not implemented."*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 48), v70, v64, v65, v66, v67, v68, v69);
  if ( *(_DWORD *)(v55 + 24) <= 3u )
    goto LABEL_47;
  v77 = StringLiteral_4777/*"Connection"*/;
  *(_QWORD *)(v55 + 56) = StringLiteral_4777/*"Connection"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 56), v77, v71, v72, v73, v74, v75, v76);
  if ( *(_DWORD *)(v55 + 24) <= 4u )
    goto LABEL_47;
  v84 = StringLiteral_13051/*"Slot '{0}' was not found. Existing slots: {1}"*/;
  *(_QWORD *)(v55 + 64) = StringLiteral_13051/*"Slot '{0}' was not found. Existing slots: {1}"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 64), v84, v78, v79, v80, v81, v82, v83);
  if ( *(_DWORD *)(v55 + 24) <= 5u )
    goto LABEL_47;
  v91 = StringLiteral_4778/*"Connection broken, keep-alive detected a problem"*/;
  *(_QWORD *)(v55 + 72) = StringLiteral_4778/*"Connection broken, keep-alive detected a problem"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 72), v91, v85, v86, v87, v88, v89, v90);
  if ( *(_DWORD *)(v55 + 24) <= 6u )
    goto LABEL_47;
  v98 = StringLiteral_4776/*"ConnectPatern"*/;
  *(_QWORD *)(v55 + 80) = StringLiteral_4776/*"ConnectPatern"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 80), v98, v92, v93, v94, v95, v96, v97);
  if ( *(_DWORD *)(v55 + 24) <= 7u )
    goto LABEL_47;
  v105 = StringLiteral_14342/*"The public key is not valid."*/;
  *(_QWORD *)(v55 + 88) = StringLiteral_14342/*"The public key is not valid."*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 88), v105, v99, v100, v101, v102, v103, v104);
  if ( *(_DWORD *)(v55 + 24) <= 8u )
    goto LABEL_47;
  v112 = StringLiteral_4374/*"Cannot request client certificate before receiving one from the server."*/;
  *(_QWORD *)(v55 + 96) = StringLiteral_4374/*"Cannot request client certificate before receiving one from the server."*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 96), v112, v106, v107, v108, v109, v110, v111);
  if ( *(_DWORD *)(v55 + 24) <= 9u )
    goto LABEL_47;
  v119 = StringLiteral_15121/*"Udp6"*/;
  *(_QWORD *)(v55 + 104) = StringLiteral_15121/*"Udp6"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 104), v119, v113, v114, v115, v116, v117, v118);
  if ( *(_DWORD *)(v55 + 24) <= 0xAu )
    goto LABEL_47;
  v126 = StringLiteral_15330/*"UnityType"*/;
  *(_QWORD *)(v55 + 112) = StringLiteral_15330/*"UnityType"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 112), v126, v120, v121, v122, v123, v124, v125);
  if ( *(_DWORD *)(v55 + 24) <= 0xBu )
    goto LABEL_47;
  v133 = StringLiteral_11502/*"RenderTextureDesc volumeDepth must be a multiple of 6 when dimension is CubeArray"*/;
  *(_QWORD *)(v55 + 120) = StringLiteral_11502/*"RenderTextureDesc volumeDepth must be a multiple of 6 when dimension is CubeArray"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 120), v133, v127, v128, v129, v130, v131, v132);
  if ( *(_DWORD *)(v55 + 24) <= 0xCu )
    goto LABEL_47;
  v140 = StringLiteral_2520/*"Asset"*/;
  *(_QWORD *)(v55 + 128) = StringLiteral_2520/*"Asset"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 128), v140, v134, v135, v136, v137, v138, v139);
  if ( *(_DWORD *)(v55 + 24) <= 0xDu )
    goto LABEL_47;
  v147 = StringLiteral_12430/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/;
  *(_QWORD *)(v55 + 136) = StringLiteral_12430/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 136), v147, v141, v142, v143, v144, v145, v146);
  if ( *(_DWORD *)(v55 + 24) <= 0xEu )
    goto LABEL_47;
  v154 = StringLiteral_7331/*"HTTP/1.0"*/;
  *(_QWORD *)(v55 + 144) = StringLiteral_7331/*"HTTP/1.0"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 144), v154, v148, v149, v150, v151, v152, v153);
  if ( *(_DWORD *)(v55 + 24) <= 0xFu )
    goto LABEL_47;
  v161 = StringLiteral_7332/*"HTTP/1.1"*/;
  *(_QWORD *)(v55 + 152) = StringLiteral_7332/*"HTTP/1.1"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 152), v161, v155, v156, v157, v158, v159, v160);
  if ( *(_DWORD *)(v55 + 24) <= 0x10u )
    goto LABEL_47;
  v168 = StringLiteral_5385/*"Destination address required"*/;
  *(_QWORD *)(v55 + 160) = StringLiteral_5385/*"Destination address required"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 160), v168, v162, v163, v164, v165, v166, v167);
  if ( *(_DWORD *)(v55 + 24) <= 0x11u )
    goto LABEL_47;
  v175 = StringLiteral_14762/*"Token doesn't match a user."*/;
  *(_QWORD *)(v55 + 168) = StringLiteral_14762/*"Token doesn't match a user."*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 168), v175, v169, v170, v171, v172, v173, v174);
  if ( *(_DWORD *)(v55 + 24) <= 0x12u )
    goto LABEL_47;
  v182 = StringLiteral_21255/*"iterator"*/;
  *(_QWORD *)(v55 + 176) = StringLiteral_21255/*"iterator"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 176), v182, v176, v177, v178, v179, v180, v181);
  if ( *(_DWORD *)(v55 + 24) <= 0x13u )
    goto LABEL_47;
  v189 = StringLiteral_21272/*"java.lang.Boolean"*/;
  *(_QWORD *)(v55 + 184) = StringLiteral_21272/*"java.lang.Boolean"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 184), v189, v183, v184, v185, v186, v187, v188);
  if ( *(_DWORD *)(v55 + 24) <= 0x14u )
    goto LABEL_47;
  v196 = StringLiteral_21273/*"java.lang.Byte"*/;
  *(_QWORD *)(v55 + 192) = StringLiteral_21273/*"java.lang.Byte"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 192), v196, v190, v191, v192, v193, v194, v195);
  if ( *(_DWORD *)(v55 + 24) <= 0x15u )
    goto LABEL_47;
  v203 = StringLiteral_21270/*"java.io.IOException"*/;
  *(_QWORD *)(v55 + 200) = StringLiteral_21270/*"java.io.IOException"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 200), v203, v197, v198, v199, v200, v201, v202);
  if ( *(_DWORD *)(v55 + 24) <= 0x16u )
    goto LABEL_47;
  v210 = StringLiteral_21256/*"iu"*/;
  *(_QWORD *)(v55 + 208) = StringLiteral_21256/*"iu"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 208), v210, v204, v205, v206, v207, v208, v209);
  if ( *(_DWORD *)(v55 + 24) <= 0x17u )
    goto LABEL_47;
  v217 = StringLiteral_21269/*"java.io.EOFException"*/;
  *(_QWORD *)(v55 + 216) = StringLiteral_21269/*"java.io.EOFException"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 216), v217, v211, v212, v213, v214, v215, v216);
  if ( *(_DWORD *)(v55 + 24) <= 0x18u )
    goto LABEL_47;
  v224 = StringLiteral_18487/*"componentType"*/;
  *(_QWORD *)(v55 + 224) = StringLiteral_18487/*"componentType"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 224), v224, v218, v219, v220, v221, v222, v223);
  if ( *(_DWORD *)(v55 + 24) <= 0x19u )
    goto LABEL_47;
  v231 = StringLiteral_21271/*"java.lang"*/;
  *(_QWORD *)(v55 + 232) = StringLiteral_21271/*"java.lang"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 232), v231, v225, v226, v227, v228, v229, v230);
  if ( *(_DWORD *)(v55 + 24) <= 0x1Au )
    goto LABEL_47;
  v238 = StringLiteral_21274/*"java.lang.Character"*/;
  *(_QWORD *)(v55 + 240) = StringLiteral_21274/*"java.lang.Character"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 240), v238, v232, v233, v234, v235, v236, v237);
  if ( *(_DWORD *)(v55 + 24) <= 0x1Bu )
    goto LABEL_47;
  v245 = StringLiteral_1497/*"400"*/;
  *(_QWORD *)(v55 + 248) = StringLiteral_1497/*"400"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 248), v245, v239, v240, v241, v242, v243, v244);
  if ( *(_DWORD *)(v55 + 24) <= 0x1Cu )
    goto LABEL_47;
  v252 = StringLiteral_1499/*"401"*/;
  *(_QWORD *)(v55 + 256) = StringLiteral_1499/*"401"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 256), v252, v246, v247, v248, v249, v250, v251);
  if ( *(_DWORD *)(v55 + 24) <= 0x1Du )
    goto LABEL_47;
  v259 = StringLiteral_1501/*"403"*/;
  *(_QWORD *)(v55 + 264) = StringLiteral_1501/*"403"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 264), v259, v253, v254, v255, v256, v257, v258);
  if ( *(_DWORD *)(v55 + 24) <= 0x1Eu )
    goto LABEL_47;
  v266 = StringLiteral_1503/*"404"*/;
  *(_QWORD *)(v55 + 272) = StringLiteral_1503/*"404"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 272), v266, v260, v261, v262, v263, v264, v265);
  if ( *(_DWORD *)(v55 + 24) <= 0x1Fu )
    goto LABEL_47;
  v273 = StringLiteral_1504/*"404: Not Found"*/;
  *(_QWORD *)(v55 + 280) = StringLiteral_1504/*"404: Not Found"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 280), v273, v267, v268, v269, v270, v271, v272);
  if ( *(_DWORD *)(v55 + 24) <= 0x20u )
    goto LABEL_47;
  v280 = StringLiteral_1511/*"500"*/;
  *(_QWORD *)(v55 + 288) = StringLiteral_1511/*"500"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 288), v280, v274, v275, v276, v277, v278, v279);
  if ( *(_DWORD *)(v55 + 24) <= 0x21u )
    goto LABEL_47;
  v287 = StringLiteral_1513/*"502"*/;
  *(_QWORD *)(v55 + 296) = StringLiteral_1513/*"502"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 296), v287, v281, v282, v283, v284, v285, v286);
  if ( *(_DWORD *)(v55 + 24) <= 0x22u
    || (v294 = StringLiteral_1515/*"503"*/,
        *(_QWORD *)(v55 + 304) = StringLiteral_1515/*"503"*/,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 304), v294, v288, v289, v290, v291, v292, v293),
        *(_DWORD *)(v55 + 24) <= 0x23u)
    || (v301 = StringLiteral_1525/*"5047912:100:0"*/,
        *(_QWORD *)(v55 + 312) = StringLiteral_1525/*"5047912:100:0"*/,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 312), v301, v295, v296, v297, v298, v299, v300),
        *(_DWORD *)(v55 + 24) <= 0x24u) )
  {
LABEL_47:
    sub_1C13F88(Instance, v48);
  }
  v308 = StringLiteral_15153/*"Unable to find style '"*/;
  *(_QWORD *)(v55 + 320) = StringLiteral_15153/*"Unable to find style '"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v55 + 320), v308, v302, v303, v304, v305, v306, v307);
  if ( (int)*(_QWORD *)(v55 + 24) < 1 )
  {
LABEL_48:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_57;
  }
  v309 = 0LL;
  v310 = (unsigned int)*(_QWORD *)(v55 + 24) - 1LL;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_58;
    Instance = System_String__Contains(v3, *(System_String_o **)(v55 + 32 + 8 * v309), 0LL);
    if ( (Instance & 1) != 0 )
      break;
    if ( v310 == v309 )
      goto LABEL_48;
    if ( ++v309 >= (unsigned __int64)*(unsigned int *)(v55 + 24) )
      goto LABEL_47;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v311 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, v48), !v311) )
  {
LABEL_58:
    sub_1C13F80(Instance, v48);
  }
  CrashReporter__AddCustomKey(v311, (System_String_o *)StringLiteral_5148/*"DISPLAY_REMAINING_TURN"*/, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v309 >= *(_DWORD *)(v55 + 24) )
    goto LABEL_47;
  if ( !Instance )
    goto LABEL_58;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5149/*"DISP_SKLL_LV"*/,
    *(System_String_o **)(v55 + 32 + 8 * v309),
    0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  v3 = (System_String_o *)StringLiteral_2524/*"AssetData "*/;
LABEL_57:
  UnityEngine_Debug__LogError((Il2CppObject *)v3, 0LL);
}


void __fastcall AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o *endCallback; // x8
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // x8

  if ( (byte_4BB373A & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB373A = 1;
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
  UnityEngine_Object__Destroy_70721988((UnityEngine_Object_o *)this, 0LL);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1C13F80(0LL, name);
  return System_String__Equals_62976260(v4, name, 0LL);
}


bool __fastcall AssetLoader__IsSame_38916680(
        AssetLoader_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_38909124(data, type, name, method);
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

  if ( (byte_4BB3739 & 1) == 0 )
  {
    sub_1C13D24(&AssetLoader__LoadDataCR_d__29_TypeInfo, resourceNames);
    byte_4BB3739 = 1;
  }
  v5 = sub_1C13F70(AssetLoader__LoadDataCR_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)resourceNames, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4BB373B & 1) == 0 )
  {
    sub_1C13D24(&CatAndMouseGame_TypeInfo, method);
    byte_4BB373B = 1;
  }
  readData = this->fields.readData;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v4 = CatAndMouseGame__MouseGame4(readData, 0LL);
  this->fields._decData = v4;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields._decData, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  __int64 v10; // x1
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  ManagementManager_c *v19; // x0
  Il2CppObject *Instance; // x0
  __int64 v21; // x1

  if ( (byte_4BB373C & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Application_TypeInfo, method);
    sub_1C13D24(&ManagementManager_TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v10);
    byte_4BB373C = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
    this->fields.loader = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.loader, 0LL, v12, v13, v14, v15, v16, v17);
  }
  this->fields.readData = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.readData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4BB37AE )
  {
    sub_1C13D24(&ManagementManager_TypeInfo, v18);
    byte_4BB37AE = 1;
  }
  v19 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v19 = ManagementManager_TypeInfo;
  }
  if ( v19->static_fields->isDuringStartup )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_70515260(0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C13F80(0LL, v21);
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
  sub_1C13CC8(
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
    sub_1C13F80(v11, v12);
  v15 = *(_DWORD *)(v14 + 40) != *(_DWORD *)(v14 + 44);
  this->fields.isDownload = v15;
  this->fields.isRequestDownload = v15;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, DataCR, 0LL);
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
      sub_1C13F80(0LL, v10);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0LL);
  }
  *p_threadDecrypt = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_threadDecrypt, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4BB3735 & 1) == 0 )
  {
    sub_1C13D24(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_4BB3735 = 1;
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
    v9 = sub_1C4F214(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
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

  if ( (byte_4BB3737 & 1) == 0 )
  {
    sub_1C13D24(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_4BB3737 = 1;
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
    v9 = sub_1C4F214(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
  return data->fields.name;
}


int32_t __fastcall AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C13F80(this, method);
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

  if ( (byte_4BB3736 & 1) == 0 )
  {
    sub_1C13D24(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_4BB3736 = 1;
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
    v9 = sub_1C4F214(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
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

  if ( (byte_4BB3738 & 1) == 0 )
  {
    sub_1C13D24(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_4BB3738 = 1;
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
    v9 = sub_1C4F214(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
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
  sub_1C13CC8(
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
  if ( (sub_1C13DE4(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A54D4C;
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
        v15 = sub_1C13DDC(v10);
        v16 = sub_1C14298(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A54E48;
          else
            v13 = (Il2CppObject *)sub_1A54E0C;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A54D88;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A54D5C;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A54D2C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A54CE4;
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
  return (System_IAsyncResult_o *)sub_1C13CD8(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
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
  sub_1C13CC8(
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
  if ( (sub_1C13DE4(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A54B5C;
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
        v15 = sub_1C13DDC(v10);
        v16 = sub_1C14298(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A54C58;
          else
            v13 = (Il2CppObject *)sub_1A54C1C;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A54B98;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A54B6C;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A54B3C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A54AF4;
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
  return (System_IAsyncResult_o *)sub_1C13CD8(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
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
  struct AssetLoader_o *_4__this; // x20
  bool v62; // w8
  const MethodInfo *v63; // x1
  UnityEngine_Networking_UnityWebRequest_o **p_loader; // x21
  System_String_o *error; // x0
  char v66; // w22
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Networking_DownloadHandler_o *v69; // x8
  AssetData_o *v70; // x20
  const MethodInfo *v71; // x3
  System_Collections_IEnumerator_o *v72; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int v80; // w8
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  const MethodInfo *v88; // x1
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  struct AssetData_o *data; // x8
  System_Byte_array *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  System_Byte_array *readData; // x22
  struct AssetData_o *v104; // x8
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  float unscaledTime; // s0
  ManagerConfig_c *v124; // x0
  float v125; // s8
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v127; // x23
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  int64_t v142; // x23
  ManagerConfig_c *v143; // x0
  int64_t v144; // x1
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  PartyOrganizationUtility_o *p_errorLocalizeCode_5__7; // x0
  int64_t v152; // x1
  System_String_o *Url; // x0
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  System_String_o *url_5__11; // x21
  struct AssetData_o *v161; // x8
  AssetLoader__LoadDataCR_d__29_o *v162; // x22
  bool v163; // w23
  System_String_o *Key; // x0
  UnityEngine_Networking_UnityWebRequest_o *v165; // x0
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v172; // x0
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__12; // x21
  float progress; // s0
  float loadProgress_5__9; // s9
  float v182; // s8
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  float v189; // s0
  bool v190; // zf
  float v191; // s8
  UnityEngine_Networking_DownloadHandler_o *v192; // x0
  __int64 v193; // x10
  UnityEngine_Networking_DownloadHandler_o *v194; // x22
  System_String_o *v195; // x0
  int64_t v196; // x2
  int32_t v197; // w3
  System_String_o *v198; // x4
  BattleSetupInfo_o *v199; // x5
  FollowerInfo_o *v200; // x6
  PartyListViewItem_o *v201; // x7
  int klass; // w8
  System_String_o *v203; // x0
  int64_t v204; // x2
  int32_t v205; // w3
  System_String_o *v206; // x4
  BattleSetupInfo_o *v207; // x5
  FollowerInfo_o *v208; // x6
  PartyListViewItem_o *v209; // x7
  UnityEngine_Networking_DownloadHandler_c *v210; // x0
  __int64 (**image)(void); // x8
  __int64 v212; // x10
  UnityEngine_Networking_DownloadHandler_c *v213; // x8
  AssetLoader__LoadDataCR_d__29_o *v214; // x22
  System_String_o *v215; // x0
  System_String_o *v216; // x0
  int64_t v217; // x2
  int32_t v218; // w3
  System_String_o *v219; // x4
  BattleSetupInfo_o *v220; // x5
  FollowerInfo_o *v221; // x6
  PartyListViewItem_o *v222; // x7
  System_String_o *v223; // x1
  PartyOrganizationUtility_o *p_errorCode_5__6; // x0
  System_String_o *v225; // x22
  System_String_o *v226; // x0
  System_String_o *v227; // x0
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v235; // x23
  Il2CppObject *v236; // x23
  AssetLoader__LoadDataCR_d__29_o *v237; // x23
  System_String_o *v238; // x24
  int v239; // w8
  System_String_o *v240; // x0
  struct AssetData_o *v241; // x9
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  AssetLoader__LoadDataCR_d__29_o *v248; // x22
  int64_t v249; // x1
  int64_t v250; // x2
  int32_t v251; // w3
  System_String_o *v252; // x4
  BattleSetupInfo_o *v253; // x5
  FollowerInfo_o *v254; // x6
  PartyListViewItem_o *v255; // x7
  int64_t v256; // x1
  int64_t v257; // x2
  int32_t v258; // w3
  System_String_o *v259; // x4
  BattleSetupInfo_o *v260; // x5
  FollowerInfo_o *v261; // x6
  PartyListViewItem_o *v262; // x7
  int64_t v263; // x1
  struct AssetData_o *v264; // x8
  int64_t v265; // x2
  int32_t v266; // w3
  System_String_o *v267; // x4
  BattleSetupInfo_o *v268; // x5
  FollowerInfo_o *v269; // x6
  PartyListViewItem_o *v270; // x7
  int64_t v271; // x2
  int32_t v272; // w3
  System_String_o *v273; // x4
  BattleSetupInfo_o *v274; // x5
  FollowerInfo_o *v275; // x6
  PartyListViewItem_o *v276; // x7
  int64_t v277; // x1
  int64_t v278; // x2
  int32_t v279; // w3
  System_String_o *v280; // x4
  BattleSetupInfo_o *v281; // x5
  FollowerInfo_o *v282; // x6
  PartyListViewItem_o *v283; // x7
  int64_t v284; // x2
  int32_t v285; // w3
  System_String_o *v286; // x4
  BattleSetupInfo_o *v287; // x5
  FollowerInfo_o *v288; // x6
  PartyListViewItem_o *v289; // x7
  int64_t v290; // x1
  System_String_o *v291; // x0
  int64_t v292; // x2
  int32_t v293; // w3
  System_String_o *v294; // x4
  BattleSetupInfo_o *v295; // x5
  FollowerInfo_o *v296; // x6
  PartyListViewItem_o *v297; // x7
  ManagerConfig_c *v298; // x0
  struct AssetData_o *v299; // x8
  CommonUI_o *v300; // x21
  System_String_o *v301; // x22
  ErrorDialog_ClickDelegate_o *v302; // x23
  ManagementManager_c *v303; // x0
  _BOOL4 isDuringStartup; // w23
  Il2CppObject *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v307; // x22
  System_String_o *v308; // x21
  System_String_o *v309; // x23
  System_String_o *v310; // x23
  ErrorDialog_ClickDelegate_o *v311; // x24
  System_String_o *v312; // x23
  System_String_o *v313; // x23
  ErrorDialog_ClickDelegate_o *v314; // x24
  UnityEngine_Networking_UnityWebRequest_o *v315; // x0
  int64_t v316; // x2
  int32_t v317; // w3
  System_String_o *v318; // x4
  BattleSetupInfo_o *v319; // x5
  FollowerInfo_o *v320; // x6
  PartyListViewItem_o *v321; // x7
  int64_t v322; // x2
  int32_t v323; // w3
  System_String_o *v324; // x4
  BattleSetupInfo_o *v325; // x5
  FollowerInfo_o *v326; // x6
  PartyListViewItem_o *v327; // x7
  AssetManager_c *v328; // x0
  System_String_o *ConfigFileAddress; // x0
  int64_t v330; // x2
  int32_t v331; // w3
  System_String_o *v332; // x4
  BattleSetupInfo_o *v333; // x5
  FollowerInfo_o *v334; // x6
  PartyListViewItem_o *v335; // x7
  System_String_o *v336; // x21
  System_String_o *UrlString; // x0
  int64_t v338; // x2
  int32_t v339; // w3
  System_String_o *v340; // x4
  BattleSetupInfo_o *v341; // x5
  FollowerInfo_o *v342; // x6
  PartyListViewItem_o *v343; // x7
  AssetLoader__LoadDataCR_d__29_o **v344; // x21
  float v345; // s0
  ManagerConfig_c *v346; // x0
  float v347; // s8
  float v348; // s0
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v349; // x0
  int64_t v350; // x2
  int32_t v351; // w3
  System_String_o *v352; // x4
  BattleSetupInfo_o *v353; // x5
  FollowerInfo_o *v354; // x6
  PartyListViewItem_o *v355; // x7
  int64_t v356; // x2
  int32_t v357; // w3
  System_String_o *v358; // x4
  BattleSetupInfo_o *v359; // x5
  FollowerInfo_o *v360; // x6
  PartyListViewItem_o *v361; // x7
  float v362; // s0
  float v363; // s9
  float v364; // s8
  float v365; // s0
  float v366; // s8
  System_String_o **v367; // x21
  UnityEngine_Networking_UnityWebRequest_o **v368; // x22
  System_String_o *v369; // x0
  System_String_o *text; // x23
  System_String_o *v371; // x23
  int64_t v372; // x2
  int32_t v373; // w3
  System_String_o *v374; // x4
  BattleSetupInfo_o *v375; // x5
  FollowerInfo_o *v376; // x6
  PartyListViewItem_o *v377; // x7
  AssetLoader__LoadDataCR_d__29_o *v378; // x23
  int _2__current; // w8
  int32_t v380; // w0
  int32_t v381; // w25
  System_String_o *v382; // x24
  System_String_o *v383; // x23
  System_Byte_array *v384; // x25
  uint32_t v385; // w25
  int v386; // w8
  Il2CppObject *v387; // x8
  AssetLoader__LoadDataCR_d__29_o *v388; // x21
  int v389; // w25
  int v390; // w27
  System_String_o *v391; // x22
  Il2CppObject *v392; // x8
  AssetLoader__LoadDataCR_d__29_o *v393; // x22
  char v394; // w8
  const MethodInfo *v395; // x2
  System_String_o *v396; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v398; // x22
  System_String_o *v399; // x0
  const MethodInfo *v400; // x2
  int v401; // w23
  struct AssetData_o *v402; // x8
  ManagementManager_c *v403; // x0
  _BOOL4 v404; // w22
  Il2CppObject *v405; // x21
  System_String_o *v406; // x22
  ErrorDialog_ClickDelegate_o *v407; // x23
  ManagementManager_c *v408; // x0
  _BOOL4 v409; // w21
  Il2CppObject *v410; // x19
  __int64 *v411; // x8
  System_String_o *v412; // x21
  ErrorDialog_ClickDelegate_o *v413; // x22
  bool result; // w0
  __int64 *v415; // x8
  System_String_o *v416; // x22
  ErrorDialog_ClickDelegate_o *v417; // x23
  int64_t v418; // x2
  int32_t v419; // w3
  System_String_o *v420; // x4
  BattleSetupInfo_o *v421; // x5
  FollowerInfo_o *v422; // x6
  PartyListViewItem_o *v423; // x7
  int64_t v424; // x2
  int32_t v425; // w3
  System_String_o *v426; // x4
  BattleSetupInfo_o *v427; // x5
  FollowerInfo_o *v428; // x6
  PartyListViewItem_o *v429; // x7
  System_String_o *name; // x21
  AssetData_o *v431; // x22
  AssetLoader__LoadDataCR_d__29_o **v432; // x21
  __int64 v433; // x10
  __int64 v434; // x10
  System_Byte_array *v435; // x0
  UnityEngine_AssetBundleCreateRequest_o *v436; // x0
  int64_t v437; // x2
  int32_t v438; // w3
  System_String_o *v439; // x4
  BattleSetupInfo_o *v440; // x5
  FollowerInfo_o *v441; // x6
  PartyListViewItem_o *v442; // x7
  int64_t v443; // x2
  int32_t v444; // w3
  System_String_o *v445; // x4
  BattleSetupInfo_o *v446; // x5
  FollowerInfo_o *v447; // x6
  PartyListViewItem_o *v448; // x7
  int64_t req_5__13; // x1
  int64_t v450; // x2
  int32_t v451; // w3
  System_String_o *v452; // x4
  BattleSetupInfo_o *v453; // x5
  FollowerInfo_o *v454; // x6
  PartyListViewItem_o *v455; // x7
  UnityEngine_Networking_UnityWebRequest_o *LoadRequest; // x0
  PartyOrganizationUtility_o *v457; // x20
  int64_t v458; // x2
  int32_t v459; // w3
  System_String_o *v460; // x4
  BattleSetupInfo_o *v461; // x5
  FollowerInfo_o *v462; // x6
  PartyListViewItem_o *v463; // x7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v464; // x0
  int64_t v465; // x2
  int32_t v466; // w3
  System_String_o *v467; // x4
  BattleSetupInfo_o *v468; // x5
  FollowerInfo_o *v469; // x6
  PartyListViewItem_o *v470; // x7
  ManagerConfig_c *v471; // x0
  int autoRetryCount_5__3; // w21
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v474; // x20
  int64_t v475; // x2
  int32_t v476; // w3
  System_String_o *v477; // x4
  BattleSetupInfo_o *v478; // x5
  FollowerInfo_o *v479; // x6
  PartyListViewItem_o *v480; // x7
  int64_t v481; // x1
  int64_t v482; // x1
  int64_t v483; // x2
  int32_t v484; // w3
  System_String_o *v485; // x4
  BattleSetupInfo_o *v486; // x5
  FollowerInfo_o *v487; // x6
  PartyListViewItem_o *v488; // x7
  int64_t v489; // x2
  int32_t v490; // w3
  System_String_o *v491; // x4
  BattleSetupInfo_o *v492; // x5
  FollowerInfo_o *v493; // x6
  PartyListViewItem_o *v494; // x7
  int64_t v495; // x1
  System_String_o *v496; // x1
  int64_t v497; // x2
  int32_t v498; // w3
  System_String_o *v499; // x4
  BattleSetupInfo_o *v500; // x5
  FollowerInfo_o *v501; // x6
  PartyListViewItem_o *v502; // x7
  ManagerConfig_c *v503; // x0
  struct AssetData_o *v504; // x8
  CommonUI_o *v505; // x22
  System_String_o *v506; // x21
  ErrorDialog_ClickDelegate_o *v507; // x23
  int64_t v508; // x1
  ManagementManager_c *v509; // x0
  _BOOL4 v510; // w22
  Il2CppObject *v511; // x21
  System_String_o *v512; // x22
  ErrorDialog_ClickDelegate_o *v513; // x23
  System_String_o *v514; // x22
  ErrorDialog_ClickDelegate_o *v515; // x23
  int64_t v516; // x1
  UnityEngine_WaitForSeconds_o *v517; // x20
  int64_t v518; // x2
  int32_t v519; // w3
  System_String_o *v520; // x4
  BattleSetupInfo_o *v521; // x5
  FollowerInfo_o *v522; // x6
  PartyListViewItem_o *v523; // x7
  AssetLoader___c_c *v524; // x0
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v526; // x21
  struct AssetLoader___c_StaticFields *static_fields; // x0
  int64_t v528; // x2
  int32_t v529; // w3
  System_String_o *v530; // x4
  BattleSetupInfo_o *v531; // x5
  FollowerInfo_o *v532; // x6
  PartyListViewItem_o *v533; // x7
  UnityEngine_WaitUntil_o *v534; // x21
  int64_t v535; // x2
  int32_t v536; // w3
  System_String_o *v537; // x4
  BattleSetupInfo_o *v538; // x5
  FollowerInfo_o *v539; // x6
  PartyListViewItem_o *v540; // x7
  UnityEngine_Networking_DownloadHandler_o *v541; // x0
  const MethodInfo *v542; // x2
  ManagerConfig_c *v543; // x0
  struct ManagerConfig_StaticFields *v544; // x8
  int64_t wait_5__10; // x1
  PartyOrganizationUtility_o *v546; // x19
  ManagerConfig_c *v547; // x0
  struct ManagerConfig_StaticFields *v548; // x8
  int64_t v549; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-A0h]
  __int64 v552; // [xsp+18h] [xbp-88h]
  __int64 v553; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-78h] BYREF

  v8 = this;
  if ( (byte_4BB3740 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetLoader_EndRebootDialog__, method);
    sub_1C13D24(&Method_AssetLoader_EndRetryDialog__, v9);
    sub_1C13D24(&Method_AssetLoader_EndWarningDialog__, v10);
    sub_1C13D24(&AssetManager_TypeInfo, v11);
    sub_1C13D24(&CatAndMouseGame_TypeInfo, v12);
    sub_1C13D24(&char___TypeInfo, v13);
    sub_1C13D24(&ErrorDialog_ClickDelegate_TypeInfo, v14);
    sub_1C13D24(&CommonServicePluginScript_TypeInfo, v15);
    sub_1C13D24(&Crc32_TypeInfo, v16);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v18);
    sub_1C13D24(&DownloadHandlerDecryptFileWithCrc_TypeInfo, v19);
    sub_1C13D24(&DownloadHandlerFileWithCrcCheck_TypeInfo, v20);
    sub_1C13D24(&System_Func_bool__TypeInfo, v21);
    sub_1C13D24(&System_IO_IOException_TypeInfo, v22);
    sub_1C13D24(&LocalizationManager_TypeInfo, v23);
    sub_1C13D24(&ManagementManager_TypeInfo, v24);
    sub_1C13D24(&ManagerConfig_TypeInfo, v25);
    sub_1C13D24(&NetworkManager_TypeInfo, v26);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_1C13D24(&string___TypeInfo, v28);
    sub_1C13D24(&Method_AssetLoader___c__LoadDataCR_b__29_0__, v29);
    sub_1C13D24(&AssetLoader___c_TypeInfo, v30);
    sub_1C13D24(&UnityEngine_WaitForEndOfFrame_TypeInfo, v31);
    sub_1C13D24(&UnityEngine_WaitForSeconds_TypeInfo, v32);
    sub_1C13D24(&UnityEngine_WaitUntil_TypeInfo, v33);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v34);
    sub_1C13D24(&StringLiteral_9394/*"NEED_QP"*/, v35);
    sub_1C13D24(&StringLiteral_7326/*"HP_VAL_LOWER"*/, v36);
    sub_1C13D24(&StringLiteral_5426/*"DisableMoveStateTurnChange"*/, v37);
    sub_1C13D24(&StringLiteral_2538/*"AssetStorageList download error : "*/, v38);
    sub_1C13D24(&StringLiteral_9403/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/, v39);
    sub_1C13D24(&StringLiteral_117/*" "*/, v40);
    sub_1C13D24(&StringLiteral_2525/*"AssetLoadError"*/, v41);
    sub_1C13D24(&StringLiteral_815/*")\n\n503 Auto retry count "*/, v42);
    sub_1C13D24(&StringLiteral_818/*")\nfile crc ("*/, v43);
    sub_1C13D24(&StringLiteral_1514/*"502:"*/, v44);
    sub_1C13D24(&StringLiteral_2165/*"ASSERT"*/, v45);
    sub_1C13D24(&StringLiteral_16188/*"[DISABLED]"*/, v46);
    sub_1C13D24(&StringLiteral_2535/*"AssetStorageList download crc error"*/, v47);
    sub_1C13D24(&StringLiteral_25560/*"{{ eventCampaignEntity = {0}, itemEntity = {1} }}"*/, v48);
    sub_1C13D24(&StringLiteral_12476/*"START_NP_PLAYER"*/, v49);
    sub_1C13D24(&StringLiteral_814/*")\n\n"*/, v50);
    sub_1C13D24(&StringLiteral_9393/*"NDATA"*/, v51);
    sub_1C13D24(&StringLiteral_693/*"("*/, v52);
    sub_1C13D24(&StringLiteral_816/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v53);
    sub_1C13D24(&StringLiteral_812/*")"*/, v54);
    sub_1C13D24(&StringLiteral_19352/*"enumeration"*/, v55);
    sub_1C13D24(&StringLiteral_1891/*"?xml"*/, v56);
    sub_1C13D24(&StringLiteral_2166/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v57);
    sub_1C13D24(&StringLiteral_2536/*"AssetStorageList download data error"*/, v58);
    sub_1C13D24(&StringLiteral_817/*")\n\nAssetBundle file download time over"*/, v59);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C13D24(&StringLiteral_1/*""*/, v60);
    byte_4BB3740 = 1;
  }
  v553 = 0LL;
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
        v62 = 0;
      else
        v62 = AssetData__GetExt((AssetData_o *)this, method) == 0LL;
      v8->fields._isEncrypted_5__2 = v62;
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
      sub_1C13CC8((PartyOrganizationUtility_o *)&v8->fields._asyncOperater_5__12, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
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
      v66 = (char)this;
      downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader, 0LL);
      if ( downloadHandler )
      {
        methodPtr_low = LOBYTE(DownloadHandlerDecryptFileWithCrc_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(downloadHandler->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (DownloadHandlerDecryptFileWithCrc_c *)downloadHandler->klass->_2.typeHierarchy[methodPtr_low - 1] == DownloadHandlerDecryptFileWithCrc_TypeInfo )
            v69 = downloadHandler;
          else
            v69 = 0LL;
          if ( (v66 & 1) != 0 )
            goto LABEL_30;
LABEL_47:
          this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
          if ( !*p_loader )
            goto LABEL_375;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          _4__this->fields.loader = 0LL;
          sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v89, v90, v91, v92, v93, v94);
          data = _4__this->fields.data;
          *(_WORD *)&_4__this->fields.isRequestDownload = 257;
          if ( !data )
            goto LABEL_375;
          data->fields.nowVersion = 0;
          goto LABEL_59;
        }
      }
      v69 = 0LL;
      if ( (v66 & 1) == 0 )
        goto LABEL_47;
LABEL_30:
      if ( v69 )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)LODWORD(v69[1].klass);
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
        v96 = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        _4__this->fields.readData = v96;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&_4__this->fields.readData,
          (int64_t)v96,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102);
        readData = _4__this->fields.readData;
        if ( !Crc32_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
        this = (AssetLoader__LoadDataCR_d__29_o *)Crc32__Compute(readData, 0LL);
      }
      v104 = _4__this->fields.data;
      if ( !v104 )
        goto LABEL_375;
      if ( (_DWORD)this == v104->fields.crc )
        goto LABEL_294;
      *(_WORD *)&_4__this->fields.isRequestDownload = 257;
      v104->fields.nowVersion = 0;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      _4__this->fields.loader = 0LL;
      sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v105, v106, v107, v108, v109, v110);
      _4__this->fields.readData = 0LL;
      sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, v111, v112, v113, v114, v115, v116);
LABEL_59:
      while ( 1 )
      {
        _4__this->fields.readData = 0LL;
        sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
        if ( _4__this->fields.isDownload )
          break;
LABEL_292:
        v104 = _4__this->fields.data;
        if ( !v104 )
          goto LABEL_375;
        if ( v104->fields.entryCount >= 1 )
        {
          if ( v8->fields._isEncrypted_5__2 )
          {
LABEL_312:
            this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
            if ( !this )
              goto LABEL_375;
            LoadRequest = AssetData__GetLoadRequest((AssetData_o *)this, method);
            _4__this->fields.loader = LoadRequest;
            v457 = (PartyOrganizationUtility_o *)&_4__this->fields.loader;
            sub_1C13CC8(v457, (int64_t)LoadRequest, v458, v459, v460, v461, v462, v463);
            this = (AssetLoader__LoadDataCR_d__29_o *)v457->klass;
            if ( !v457->klass )
              goto LABEL_375;
            v464 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                     (UnityEngine_Networking_UnityWebRequest_o *)this,
                     0LL);
            v8->fields.__2__current = (Il2CppObject *)v464;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C13CC8(p__2__current, (int64_t)v464, v465, v466, v467, v468, v469, v470);
            v80 = 11;
          }
          else
          {
            v524 = AssetLoader___c_TypeInfo;
            if ( !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v524 = AssetLoader___c_TypeInfo;
            }
            _9__29_0 = v524->static_fields->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( !v524->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v524);
                v524 = AssetLoader___c_TypeInfo;
              }
              v526 = (Il2CppObject *)v524->static_fields->__9;
              _9__29_0 = (System_Func_bool__o *)sub_1C13F70(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(_9__29_0, v526, Method_AssetLoader___c__LoadDataCR_b__29_0__, 0LL);
              static_fields = AssetLoader___c_TypeInfo->static_fields;
              static_fields->__9__29_0 = _9__29_0;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&static_fields->__9__29_0,
                (int64_t)_9__29_0,
                v528,
                v529,
                v530,
                v531,
                v532,
                v533);
            }
            v534 = (UnityEngine_WaitUntil_o *)sub_1C13F70(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v534, _9__29_0, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v534;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C13CC8(p__2__current, (int64_t)v534, v535, v536, v537, v538, v539, v540);
            v80 = 10;
          }
          goto LABEL_355;
        }
LABEL_294:
        if ( _4__this->fields.isDownload )
        {
          name = v104->fields.name;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__isExistAssetStorage(name, method);
          if ( ((unsigned __int8)this & 1) != 0 )
            continue;
        }
LABEL_298:
        v431 = _4__this->fields.data;
        if ( !v431 )
          goto LABEL_375;
        if ( v431->fields.entryCount >= 1 )
        {
          v432 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v8->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_375;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0LL);
            if ( !this
              || (v433 = LOBYTE(DownloadHandlerDecryptFileWithCrc_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v433)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v433 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v432;
              if ( !*v432 )
                goto LABEL_375;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0LL);
              if ( !this )
                goto LABEL_375;
              v434 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v434
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v434 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_375;
              }
            }
            v435 = UnityEngine_Networking_DownloadHandler__get_data(
                     (UnityEngine_Networking_DownloadHandler_o *)this,
                     0LL);
            v436 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v435, 0LL);
            v8->fields._req_5__13 = v436;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v8->fields._req_5__13,
              (int64_t)v436,
              v437,
              v438,
              v439,
              v440,
              v441,
              v442);
            this = *v432;
            if ( !*v432 )
              goto LABEL_375;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
            *v432 = 0LL;
            sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v443, v444, v445, v446, v447, v448);
            req_5__13 = (int64_t)v8->fields._req_5__13;
            v8->fields.__2__current = (Il2CppObject *)req_5__13;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C13CC8(p__2__current, req_5__13, v450, v451, v452, v453, v454, v455);
            v80 = 12;
            goto LABEL_355;
          }
          if ( !this )
            goto LABEL_375;
          v541 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          AssetData__SetData(v431, v541, v542);
        }
LABEL_38:
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
          _4__this->fields.loader = 0LL;
          sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v82, v83, v84, v85, v86, v87);
        }
        _4__this->fields.readData = 0LL;
        sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
        AssetLoader__EndLoad(_4__this, v88);
        return 0;
      }
      *(_WORD *)&v8->fields._isAutoRetry_5__4 = 0;
      v8->fields._errorCode_5__6 = 0LL;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      v8->fields._errorLocalizeCode_5__7 = 0LL;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__7,
        0LL,
        v117,
        v118,
        v119,
        v120,
        v121,
        v122);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v124 = ManagerConfig_TypeInfo;
      v125 = unscaledTime;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v124 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v124->static_fields->TIMEOUT;
      v8->fields._loadProgress_5__9 = 0.0;
      v8->fields._requestTime_5__8 = v125 + TIMEOUT;
      v127 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C13F70(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v127, 0LL);
      v8->fields._wait_5__10 = v127;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&v8->fields._wait_5__10,
        (int64_t)v127,
        v128,
        v129,
        v130,
        v131,
        v132,
        v133);
      Path = AssetStorageCache__GetPath(0LL);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
      if ( FreeSize >= 1 )
      {
        v142 = FreeSize;
        v143 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v143 = ManagerConfig_TypeInfo;
        }
        if ( v142 < v143->static_fields->LIMIT_FREE_SIZE )
        {
          _4__this->fields.isErrorDialog = 1;
          v144 = StringLiteral_5426/*"DisableMoveStateTurnChange"*/;
          v8->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5426/*"DisableMoveStateTurnChange"*/;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6,
            v144,
            v136,
            v137,
            v138,
            v139,
            v140,
            v141);
          p_errorLocalizeCode_5__7 = (PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__7;
          v152 = StringLiteral_9403/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/;
          v8->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9403/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/;
          goto LABEL_141;
        }
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      Url = AssetData__get_Url((AssetData_o *)this, method);
      v8->fields._url_5__11 = Url;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&v8->fields._url_5__11,
        (int64_t)Url,
        v154,
        v155,
        v156,
        v157,
        v158,
        v159);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      url_5__11 = v8->fields._url_5__11;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, method);
      v161 = _4__this->fields.data;
      v162 = this;
      if ( v8->fields._isEncrypted_5__2 )
      {
        if ( !v161 )
          goto LABEL_375;
        v163 = v161->fields.entryCount > 0;
      }
      else
      {
        if ( !v161 )
          goto LABEL_375;
        v163 = 0;
      }
      Key = AssetData__get_Key(_4__this->fields.data, method);
      v165 = UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__11, (System_String_o *)v162, v163, Key, 0LL);
      _4__this->fields.loader = v165;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&_4__this->fields.loader,
        (int64_t)v165,
        v166,
        v167,
        v168,
        v169,
        v170,
        v171);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v172 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v8->fields._asyncOperater_5__12 = v172;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&v8->fields._asyncOperater_5__12,
        (int64_t)v172,
        v173,
        v174,
        v175,
        v176,
        v177,
        v178);
LABEL_78:
      p_asyncOperater_5__12 = (AssetLoader__LoadDataCR_d__29_o **)&v8->fields._asyncOperater_5__12;
      this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
      if ( !this )
LABEL_375:
        sub_1C13F80(this, method);
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
        v182 = progress;
        v189 = UnityEngine_Time__get_unscaledTime(0LL);
        v190 = v182 == loadProgress_5__9;
        v191 = v189;
        if ( !v190 )
        {
          v543 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v543 = ManagerConfig_TypeInfo;
          }
          v544 = v543->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
          v8->fields._requestTime_5__8 = v191 + v544->TIMEOUT;
          if ( !this )
            goto LABEL_375;
          v8->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
LABEL_369:
          wait_5__10 = (int64_t)v8->fields._wait_5__10;
          v8->fields.__2__current = (Il2CppObject *)wait_5__10;
          v546 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C13CC8(v546, wait_5__10, v183, v184, v185, v186, v187, v188);
          result = 1;
          *(_DWORD *)&v546[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
        if ( v189 < v8->fields._requestTime_5__8 )
          goto LABEL_369;
      }
      if ( !_4__this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v192 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      if ( v192
        && (v193 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v192->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v193) )
      {
        v194 = (DownloadHandlerFileWithCrcCheck_c *)v192->klass->_2.typeHierarchy[v193 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
             ? v192
             : 0LL;
      }
      else
      {
        v194 = 0LL;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v203 = System_String__Concat_62979204(
                 (System_String_o *)StringLiteral_693/*"("*/,
                 v8->fields._url_5__11,
                 (System_String_o *)StringLiteral_817/*")\n\nAssetBundle file download time over"*/,
                 0LL);
        v8->fields._errorCode_5__6 = v203;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6,
          (int64_t)v203,
          v204,
          v205,
          v206,
          v207,
          v208,
          v209);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        if ( v194 )
          DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v194, 0LL);
        goto LABEL_140;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v195 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v195, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v194 )
        {
          klass = 0;
LABEL_127:
          HIDWORD(v553) = klass;
          v241 = _4__this->fields.data;
          if ( !v241 )
            goto LABEL_375;
          if ( klass == v241->fields.crc )
          {
            v241->fields.nowVersion = v241->fields.newVersion;
            _4__this->fields.isDownload = 0;
          }
          else
          {
            this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C13DCC(string___TypeInfo, 7LL);
            if ( !this )
              goto LABEL_375;
            v248 = this;
            if ( !LODWORD(this->fields.__2__current) )
              goto LABEL_258;
            v249 = StringLiteral_693/*"("*/;
            this->fields.__4__this = (struct AssetLoader_o *)StringLiteral_693/*"("*/;
            sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__4__this, v249, v242, v243, v244, v245, v246, v247);
            if ( LODWORD(v248->fields.__2__current) <= 1 )
              goto LABEL_258;
            v256 = (int64_t)v8->fields._url_5__11;
            v248->fields.resourceNames = (struct System_String_array *)v256;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v248->fields.resourceNames,
              v256,
              v250,
              v251,
              v252,
              v253,
              v254,
              v255);
            if ( LODWORD(v248->fields.__2__current) <= 2 )
              goto LABEL_258;
            v263 = StringLiteral_816/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            *(_QWORD *)&v248->fields._isEncrypted_5__2 = StringLiteral_816/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v248->fields._isEncrypted_5__2,
              v263,
              v257,
              v258,
              v259,
              v260,
              v261,
              v262);
            v264 = _4__this->fields.data;
            if ( !v264 )
              goto LABEL_375;
            LODWORD(v553) = v264->fields.crc;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v553, 0LL);
            if ( LODWORD(v248->fields.__2__current) <= 3 )
              goto LABEL_258;
            *(_QWORD *)&v248->fields._isAutoRetry_5__4 = this;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v248->fields._isAutoRetry_5__4,
              (int64_t)this,
              v265,
              v266,
              v267,
              v268,
              v269,
              v270);
            if ( LODWORD(v248->fields.__2__current) <= 4 )
              goto LABEL_258;
            v277 = StringLiteral_818/*")\nfile crc ("*/;
            v248->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_818/*")\nfile crc ("*/;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v248->fields._errorCode_5__6,
              v277,
              v271,
              v272,
              v273,
              v274,
              v275,
              v276);
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v553 + 4, 0LL);
            if ( LODWORD(v248->fields.__2__current) <= 5 )
              goto LABEL_258;
            v248->fields._errorLocalizeCode_5__7 = (struct System_String_o *)this;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v248->fields._errorLocalizeCode_5__7,
              (int64_t)this,
              v278,
              v279,
              v280,
              v281,
              v282,
              v283);
            if ( LODWORD(v248->fields.__2__current) <= 6 )
              goto LABEL_258;
            v290 = StringLiteral_812/*")"*/;
            *(_QWORD *)&v248->fields._requestTime_5__8 = StringLiteral_812/*")"*/;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v248->fields._requestTime_5__8,
              v290,
              v284,
              v285,
              v286,
              v287,
              v288,
              v289);
            v291 = System_String__Concat_62981472((System_String_array *)v248, 0LL);
            v8->fields._errorCode_5__6 = v291;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6,
              (int64_t)v291,
              v292,
              v293,
              v294,
              v295,
              v296,
              v297);
            v8->fields._isCrcError_5__5 = 1;
          }
          goto LABEL_140;
        }
        if ( !v194[4].klass )
        {
          klass = (int)v194[1].klass;
          goto LABEL_127;
        }
      }
      else if ( !v194 )
      {
LABEL_110:
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        v225 = v8->fields._url_5__11;
        v226 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        v227 = System_String__Concat_62981208(
                 (System_String_o *)StringLiteral_693/*"("*/,
                 v225,
                 (System_String_o *)StringLiteral_814/*")\n\n"*/,
                 v226,
                 0LL);
        v8->fields._errorCode_5__6 = v227;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6,
          (int64_t)v227,
          v228,
          v229,
          v230,
          v231,
          v232,
          v233);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                            0LL);
        if ( !ResponseHeaders )
          goto LABEL_140;
        v235 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
        if ( System_Collections_Generic_Dictionary_object__object___get_Count(
               (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
               (const MethodInfo_32F2680 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
          || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                v235,
                (Il2CppObject *)StringLiteral_12476/*"START_NP_PLAYER"*/,
                &value,
                (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          goto LABEL_140;
        }
        v236 = value;
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C13DCC(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_375;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 32;
        if ( !v236 )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_62990336(
                                                    (System_String_o *)v236,
                                                    (System_Char_array *)this,
                                                    1,
                                                    0LL);
        if ( !this )
          goto LABEL_375;
        v237 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_140;
        this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
        if ( !this )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_7326/*"HP_VAL_LOWER"*/,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_140;
        if ( LODWORD(v237->fields.__2__current) <= 1 )
          goto LABEL_258;
        this = (AssetLoader__LoadDataCR_d__29_o *)v237->fields.resourceNames;
        if ( !this )
          goto LABEL_375;
        if ( !System_String__Equals_62976260((System_String_o *)this, (System_String_o *)StringLiteral_1514/*"502:"*/, 0LL) )
          goto LABEL_140;
        v238 = v8->fields._url_5__11;
        v239 = v8->fields._autoRetryCount_5__3 + 1;
        v8->fields._isAutoRetry_5__4 = 1;
        v8->fields._autoRetryCount_5__3 = v239;
        v240 = System_Int32__ToString((int)v8 + 52, 0LL);
        v223 = System_String__Concat_62981208(
                 (System_String_o *)StringLiteral_693/*"("*/,
                 v238,
                 (System_String_o *)StringLiteral_815/*")\n\n503 Auto retry count "*/,
                 v240,
                 0LL);
        v8->fields._errorCode_5__6 = v223;
        p_errorCode_5__6 = (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6;
        goto LABEL_109;
      }
      DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v194, 0LL);
      v210 = v194[4].klass;
      if ( !v210 )
        goto LABEL_110;
      image = (__int64 (**)(void))v210->_1.image;
      v212 = LOBYTE(System_IO_IOException_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *((unsigned __int8 *)v210->_1.image + 304) >= (unsigned int)v212
        && *((System_IO_IOException_c **)image[25] + v212 - 1) == System_IO_IOException_TypeInfo )
      {
        _4__this->fields.isErrorDialog = 1;
        v216 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v210->_1.image
                                   + 49))(
                                    v210,
                                    *((_QWORD *)v210->_1.image + 50));
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)image[45]();
        v213 = v194[4].klass;
        if ( !v213 )
          goto LABEL_375;
        v214 = this;
        v215 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v213->_1.image
                                   + 49))(
                                    v213,
                                    *((_QWORD *)v213->_1.image + 50));
        v216 = System_String__Concat_62981208(
                 (System_String_o *)StringLiteral_19352/*"enumeration"*/,
                 (System_String_o *)v214,
                 (System_String_o *)StringLiteral_117/*" "*/,
                 v215,
                 0LL);
      }
      v223 = v216;
      v8->fields._errorCode_5__6 = v216;
      p_errorCode_5__6 = (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6;
LABEL_109:
      sub_1C13CC8(p_errorCode_5__6, (int64_t)v223, v217, v218, v219, v220, v221, v222);
LABEL_140:
      v8->fields._url_5__11 = 0LL;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v8->fields._url_5__11, 0LL, v196, v197, v198, v199, v200, v201);
      p_errorLocalizeCode_5__7 = (PartyOrganizationUtility_o *)&v8->fields._asyncOperater_5__12;
      v152 = 0LL;
      v8->fields._asyncOperater_5__12 = 0LL;
LABEL_141:
      sub_1C13CC8(p_errorLocalizeCode_5__7, v152, v145, v146, v147, v148, v149, v150);
      method = (const MethodInfo *)v8->fields._errorCode_5__6;
      if ( method )
      {
        AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, v2);
        v298 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v298 = ManagerConfig_TypeInfo;
        }
        if ( v298->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v299 = _4__this->fields.data;
          if ( !v299 )
            goto LABEL_375;
          v300 = (CommonUI_o *)this;
          v301 = System_String__Concat_62981208(
                   (System_String_o *)StringLiteral_2525/*"AssetLoadError"*/,
                   v299->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   v8->fields._errorCode_5__6,
                   0LL);
          v302 = (ErrorDialog_ClickDelegate_o *)sub_1C13F70(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v302, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v300 )
            goto LABEL_375;
          v552 &= 0xFFFFFFFF00000000LL;
          *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
          LODWORD(effectDistance.fields.value.fields.y) = v552;
          CommonUI__OpenWarningDialog(
            v300,
            (System_String_o *)StringLiteral_16188/*"[DISABLED]"*/,
            v301,
            v302,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0LL);
LABEL_148:
          if ( _4__this->fields.isErrorDialog )
          {
            v481 = (int64_t)v8->fields._wait_5__10;
            v8->fields.__2__current = (Il2CppObject *)v481;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C13CC8(p__2__current, v481, (int64_t)v2, v3, v4, v5, v6, v7);
            v80 = 2;
            goto LABEL_355;
          }
        }
        if ( v8->fields._isAutoRetry_5__4 )
        {
          v471 = ManagerConfig_TypeInfo;
          autoRetryCount_5__3 = v8->fields._autoRetryCount_5__3;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v471 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v471->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v474 = (UnityEngine_WaitForSeconds_o *)sub_1C13F70(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v474, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v474;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C13CC8(p__2__current, (int64_t)v474, v475, v476, v477, v478, v479, v480);
          v80 = 3;
          goto LABEL_355;
        }
        if ( !v8->fields._isCrcError_5__5 )
        {
          _4__this->fields.isErrorDialog = 1;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          if ( !byte_4BB37AE )
          {
            sub_1C13D24(&ManagementManager_TypeInfo, method);
            byte_4BB37AE = 1;
          }
          v303 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v303 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v303->static_fields->isDuringStartup;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__7 = v8->fields._errorLocalizeCode_5__7;
          v307 = (CommonUI_o *)Instance;
          v308 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__7 )
              v309 = v8->fields._errorLocalizeCode_5__7;
            else
              v309 = (System_String_o *)StringLiteral_2165/*"ASSERT"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v310 = LocalizationManager__Get(v309, 0LL);
            v311 = (ErrorDialog_ClickDelegate_o *)sub_1C13F70(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v311, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v307 )
              goto LABEL_375;
            CommonUI__OpenRetryBootDialog(v307, v308, v310, v311, 1, 0LL);
          }
          else
          {
            if ( errorLocalizeCode_5__7 )
              v312 = v8->fields._errorLocalizeCode_5__7;
            else
              v312 = (System_String_o *)StringLiteral_2166/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v313 = LocalizationManager__Get(v312, 0LL);
            v314 = (ErrorDialog_ClickDelegate_o *)sub_1C13F70(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v314, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v307 )
              goto LABEL_375;
            CommonUI__OpenRetryDialog(v307, v308, v313, v314, 1, 0LL);
          }
LABEL_172:
          if ( _4__this->fields.isErrorDialog )
          {
            v482 = (int64_t)v8->fields._wait_5__10;
            v8->fields.__2__current = (Il2CppObject *)v482;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C13CC8(p__2__current, v482, (int64_t)v2, v3, v4, v5, v6, v7);
            v80 = 4;
            goto LABEL_355;
          }
        }
      }
LABEL_173:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BAFD9B )
      {
        sub_1C13D24(&NetworkManager_TypeInfo, method);
        byte_4BAFD9B = 1;
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
        sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v483, v484, v485, v486, v487, v488);
        _4__this->fields.readData = 0LL;
        sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, v489, v490, v491, v492, v493, v494);
        return 0;
      }
      if ( !_4__this->fields.isDownload && !v8->fields._isEncrypted_5__2 )
        goto LABEL_298;
      v315 = _4__this->fields.loader;
      if ( v315 )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(v315, 0LL);
        _4__this->fields.loader = 0LL;
        sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v316, v317, v318, v319, v320, v321);
        _4__this->fields.readData = 0LL;
        sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.readData, 0LL, v322, v323, v324, v325, v326, v327);
      }
      if ( !v8->fields._isCrcError_5__5 )
      {
LABEL_291:
        v8->fields._errorCode_5__6 = 0LL;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
        v8->fields._errorLocalizeCode_5__7 = 0LL;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__7,
          0LL,
          v418,
          v419,
          v420,
          v421,
          v422,
          v423);
        v8->fields._wait_5__10 = 0LL;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v8->fields._wait_5__10, 0LL, v424, v425, v426, v427, v428, v429);
        goto LABEL_292;
      }
      v328 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v328);
      v8->fields._url_5__11 = ConfigFileAddress;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&v8->fields._url_5__11,
        (int64_t)ConfigFileAddress,
        v330,
        v331,
        v332,
        v333,
        v334,
        v335);
LABEL_189:
      v336 = v8->fields._url_5__11;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v336, v63);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      if ( !_4__this )
        goto LABEL_375;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v344 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&_4__this->fields.loader,
        (int64_t)this,
        v338,
        v339,
        v340,
        v341,
        v342,
        v343);
      v345 = UnityEngine_Time__get_unscaledTime(0LL);
      v346 = ManagerConfig_TypeInfo;
      v347 = v345;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v346 = ManagerConfig_TypeInfo;
      }
      v348 = v346->static_fields->TIMEOUT;
      v8->fields._loadProgress_5__9 = 0.0;
      v8->fields._requestTime_5__8 = v347 + v348;
      this = *v344;
      if ( !*v344 )
        goto LABEL_375;
      v349 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v8->fields._asyncOperater_5__12 = v349;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&v8->fields._asyncOperater_5__12,
        (int64_t)v349,
        v350,
        v351,
        v352,
        v353,
        v354,
        v355);
LABEL_196:
      this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
      if ( !this )
        goto LABEL_375;
      if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)this, 0LL) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
        if ( !this )
          goto LABEL_375;
        v362 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        v363 = v8->fields._loadProgress_5__9;
        v364 = v362;
        v365 = UnityEngine_Time__get_unscaledTime(0LL);
        v190 = v364 == v363;
        v366 = v365;
        if ( !v190 )
        {
          v547 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v547 = ManagerConfig_TypeInfo;
          }
          v548 = v547->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._asyncOperater_5__12;
          v8->fields._requestTime_5__8 = v366 + v548->TIMEOUT;
          if ( !this )
            goto LABEL_375;
          v8->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
          goto LABEL_374;
        }
        if ( v365 < v8->fields._requestTime_5__8 )
        {
LABEL_374:
          v549 = (int64_t)v8->fields._wait_5__10;
          v8->fields.__2__current = (Il2CppObject *)v549;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C13CC8(p__2__current, v549, v356, v357, v358, v359, v360, v361);
          v80 = 5;
          goto LABEL_355;
        }
      }
      v8->fields._errorCode_5__6 = 0LL;
      v367 = &v8->fields._errorCode_5__6;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6, 0LL, v356, v357, v358, v359, v360, v361);
      if ( !_4__this )
        goto LABEL_375;
      v368 = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                  0LL);
      if ( !*v368 )
        goto LABEL_375;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(*v368, 0LL);
        v415 = &StringLiteral_2538/*"AssetStorageList download error : "*/;
        goto LABEL_327;
      }
      v369 = UnityEngine_Networking_UnityWebRequest__get_error(*v368, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v369, 0LL);
      if ( !*v368 )
        goto LABEL_375;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v496 = UnityEngine_Networking_UnityWebRequest__get_error(*v368, 0LL);
        goto LABEL_328;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*v368, 0LL);
      if ( !this )
        goto LABEL_375;
      text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v371 = CatAndMouseGame__MouseGame3(text, 0LL);
      if ( System_String__IsNullOrEmpty(v371, 0LL) )
      {
        v415 = &StringLiteral_2536/*"AssetStorageList download data error"*/;
        goto LABEL_327;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C13DCC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_375;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_258;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v371 )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim_62997692(v371, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_375;
      v378 = this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25560/*"{{ eventCampaignEntity = {0}, itemEntity = {1} }}"*/, 0LL) )
        goto LABEL_286;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C13DCC(char___TypeInfo, 2LL);
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
      v380 = System_String__IndexOfAny((System_String_o *)v378, (System_Char_array *)this, 0LL);
      if ( v380 < 2 )
        goto LABEL_286;
      v381 = v380;
      v382 = System_String__Substring_62986948((System_String_o *)v378, 1, v380 - 1, 0LL);
      v383 = System_String__Substring((System_String_o *)v378, v381 + 1, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0LL);
      if ( !this )
        goto LABEL_375;
      v384 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                    this,
                                    v383,
                                    this->klass[1]._1.interfaceOffsets);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v385 = Crc32__Compute(v384, 0LL);
      if ( System_UInt32__Parse(v382, 0LL) != v385 )
      {
LABEL_286:
        v415 = &StringLiteral_2535/*"AssetStorageList download crc error"*/;
LABEL_327:
        v496 = (System_String_o *)*v415;
LABEL_328:
        *v367 = v496;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__6,
          (int64_t)v496,
          v372,
          v373,
          v374,
          v375,
          v376,
          v377);
        if ( *v368 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(*v368, 0LL);
          *v368 = 0LL;
          sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v497, v498, v499, v500, v501, v502);
        }
        if ( !*v367 )
          goto LABEL_354;
        v503 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v503 = ManagerConfig_TypeInfo;
        }
        if ( v503->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v504 = _4__this->fields.data;
          if ( !v504 )
            goto LABEL_375;
          v505 = (CommonUI_o *)this;
          v506 = System_String__Concat_62981208(
                   (System_String_o *)StringLiteral_2525/*"AssetLoadError"*/,
                   v504->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *v367,
                   0LL);
          v507 = (ErrorDialog_ClickDelegate_o *)sub_1C13F70(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v507, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v505 )
            goto LABEL_375;
          *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
          effectDistancea.fields.value.fields.y = 0.0;
          CommonUI__OpenWarningDialog(
            v505,
            (System_String_o *)StringLiteral_16188/*"[DISABLED]"*/,
            v506,
            v507,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0LL);
LABEL_337:
          if ( _4__this->fields.isErrorDialog )
          {
            v508 = (int64_t)v8->fields._wait_5__10;
            v8->fields.__2__current = (Il2CppObject *)v508;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C13CC8(p__2__current, v508, (int64_t)v2, v3, v4, v5, v6, v7);
            v80 = 6;
            goto LABEL_355;
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4BB37AE )
        {
          sub_1C13D24(&ManagementManager_TypeInfo, method);
          byte_4BB37AE = 1;
        }
        v509 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v509 = ManagementManager_TypeInfo;
        }
        v510 = v509->static_fields->isDuringStartup;
        v511 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v510 )
        {
          v512 = LocalizationManager__Get((System_String_o *)StringLiteral_2165/*"ASSERT"*/, 0LL);
          v513 = (ErrorDialog_ClickDelegate_o *)sub_1C13F70(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v513, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v511 )
            goto LABEL_375;
          CommonUI__OpenRetryBootDialog((CommonUI_o *)v511, (System_String_o *)StringLiteral_1/*""*/, v512, v513, 0, 0LL);
        }
        else
        {
          v514 = LocalizationManager__Get((System_String_o *)StringLiteral_2166/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v515 = (ErrorDialog_ClickDelegate_o *)sub_1C13F70(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v515, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v511 )
            goto LABEL_375;
          CommonUI__OpenRetryDialog((CommonUI_o *)v511, (System_String_o *)StringLiteral_1/*""*/, v514, v515, 0, 0LL);
        }
LABEL_352:
        if ( _4__this->fields.isErrorDialog )
        {
          v516 = (int64_t)v8->fields._wait_5__10;
          v8->fields.__2__current = (Il2CppObject *)v516;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C13CC8(p__2__current, v516, (int64_t)v2, v3, v4, v5, v6, v7);
          v80 = 7;
        }
        else
        {
LABEL_354:
          v517 = (UnityEngine_WaitForSeconds_o *)sub_1C13F70(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v517, 1.0, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v517;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C13CC8(p__2__current, (int64_t)v517, v518, v519, v520, v521, v522, v523);
          v80 = 8;
        }
LABEL_355:
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v80;
        return 1;
      }
      if ( !v383 )
        goto LABEL_272;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C13DCC(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_375;
      v386 = (int)this->fields.__2__current;
      method = (const MethodInfo *)this;
      if ( !v386 || (LOWORD(this->fields.__4__this) = 13, v386 == 1) )
LABEL_258:
        sub_1C13F88(this, method);
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_62990336(v383, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_375;
      v387 = this->fields.__2__current;
      v388 = this;
      v389 = (_DWORD)v387 - 1;
      if ( (int)v387 < 1 )
        goto LABEL_272;
      v390 = 0;
      while ( 2 )
      {
        v391 = (System_String_o *)*((_QWORD *)&v388->fields.__4__this + v390);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C13DCC(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_375;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v391 )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_62990100(v391, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_375;
        v392 = this->fields.__2__current;
        v393 = this;
        if ( (int)v392 >= 1 )
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_375;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_1891/*"?xml"*/,
                                                      0LL);
          if ( !LODWORD(v393->fields.__2__current) )
            goto LABEL_258;
          v394 = (char)this;
          this = (AssetLoader__LoadDataCR_d__29_o *)v393->fields.__4__this;
          if ( !this )
            goto LABEL_375;
          if ( (v394 & 1) != 0 )
          {
            v396 = System_String__Substring((System_String_o *)this, 1, 0LL);
            p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
            if ( SLODWORD(v393->fields.__2__current) > 1 )
              p_resourceNames = (System_String_o **)&v393->fields.resourceNames;
            v398 = *p_resourceNames;
            if ( !AssetManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v396, v398, v395);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_272;
            goto LABEL_256;
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_25560/*"{{ eventCampaignEntity = {0}, itemEntity = {1} }}"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v393->fields.__2__current) )
              goto LABEL_258;
            this = (AssetLoader__LoadDataCR_d__29_o *)v393->fields.__4__this;
            if ( !this )
              goto LABEL_375;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0LL);
            if ( (_DWORD)this != 1 )
            {
              v392 = v393->fields.__2__current;
              break;
            }
          }
LABEL_256:
          if ( v389 == v390 )
            goto LABEL_272;
          if ( (unsigned int)++v390 >= LODWORD(v388->fields.__2__current) )
            goto LABEL_258;
          continue;
        }
        break;
      }
      if ( (_DWORD)v392 != 5 )
        goto LABEL_272;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v393->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_375;
      v399 = System_String__Trim((System_String_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v399, 0LL);
      if ( LODWORD(v393->fields.__2__current) <= 4 )
        goto LABEL_258;
      v401 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetLoader__IsSame(_4__this, v393->fields._errorCode_5__6, v400);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_256;
      v402 = _4__this->fields.data;
      if ( !v402 )
        goto LABEL_375;
      if ( v401 == v402->fields.crc )
      {
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4BB37AE )
        {
          sub_1C13D24(&ManagementManager_TypeInfo, method);
          byte_4BB37AE = 1;
        }
        v403 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v403 = ManagementManager_TypeInfo;
        }
        v404 = v403->static_fields->isDuringStartup;
        v405 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v404 )
        {
          v406 = LocalizationManager__Get((System_String_o *)StringLiteral_2165/*"ASSERT"*/, 0LL);
          v407 = (ErrorDialog_ClickDelegate_o *)sub_1C13F70(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v407, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( v405 )
          {
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v405, (System_String_o *)StringLiteral_1/*""*/, v406, v407, 1, 0LL);
            goto LABEL_289;
          }
          goto LABEL_375;
        }
        v416 = LocalizationManager__Get((System_String_o *)StringLiteral_2166/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v417 = (ErrorDialog_ClickDelegate_o *)sub_1C13F70(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v417, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
        if ( !v405 )
          goto LABEL_375;
        CommonUI__OpenRetryDialog((CommonUI_o *)v405, (System_String_o *)StringLiteral_1/*""*/, v416, v417, 1, 0LL);
LABEL_289:
        if ( !_4__this->fields.isErrorDialog )
        {
          v8->fields._url_5__11 = 0LL;
          sub_1C13CC8((PartyOrganizationUtility_o *)&v8->fields._url_5__11, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
          goto LABEL_291;
        }
        v495 = (int64_t)v8->fields._wait_5__10;
        v8->fields.__2__current = (Il2CppObject *)v495;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C13CC8(p__2__current, v495, (int64_t)v2, v3, v4, v5, v6, v7);
        v80 = 9;
        goto LABEL_355;
      }
LABEL_272:
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4BB37AE )
      {
        sub_1C13D24(&ManagementManager_TypeInfo, method);
        byte_4BB37AE = 1;
      }
      v408 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v408 = ManagementManager_TypeInfo;
      }
      v409 = v408->static_fields->isDuringStartup;
      v410 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v409 )
          goto LABEL_280;
LABEL_282:
        v411 = &StringLiteral_9393/*"NDATA"*/;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !v409 )
          goto LABEL_282;
LABEL_280:
        v411 = &StringLiteral_9394/*"NEED_QP"*/;
      }
      v412 = LocalizationManager__Get((System_String_o *)*v411, 0LL);
      v413 = (ErrorDialog_ClickDelegate_o *)sub_1C13F70(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v413, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0LL);
      if ( !v410 )
        goto LABEL_375;
      CommonUI__OpenErrorDialog((CommonUI_o *)v410, (System_String_o *)StringLiteral_1/*""*/, v412, v413, 0, 0LL);
      return 0;
    case 0xC:
      this = (AssetLoader__LoadDataCR_d__29_o *)v8->fields._req_5__13;
      v8->fields.__1__state = -1;
      if ( !this )
        goto LABEL_37;
      if ( !_4__this )
        goto LABEL_375;
      v70 = _4__this->fields.data;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AssetBundleCreateRequest__get_assetBundle(
                                                  (UnityEngine_AssetBundleCreateRequest_o *)this,
                                                  0LL);
      if ( !v70 )
        goto LABEL_375;
      v72 = AssetData__SetAssetBundleData(v70, (UnityEngine_AssetBundle_o *)this, v8->fields.resourceNames, v71);
      v8->fields.__2__current = (Il2CppObject *)v72;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C13CC8(p__2__current, (int64_t)v72, v74, v75, v76, v77, v78, v79);
      v80 = 13;
      goto LABEL_355;
    case 0xD:
      v8->fields.__1__state = -1;
LABEL_37:
      v8->fields._req_5__13 = 0LL;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v8->fields._req_5__13, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB373E & 1) == 0 )
  {
    sub_1C13D24(&AssetLoader___c_TypeInfo, v1);
    byte_4BB373E = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(AssetLoader___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AssetLoader___c_TypeInfo->static_fields->__9 = (struct AssetLoader___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)AssetLoader___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BB373F & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_4BB373F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v3);
  return BYTE4(Instance[7].monitor) == 0;
}