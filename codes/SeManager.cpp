void SeManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  __int64 v9; // x19
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct SeManager_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct SeManager_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct SeManager_StaticFields *v43; // x8

  if ( (byte_4D303AC & 1) == 0 )
  {
    sub_1C93AD4(&SeManager_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_11598/*"SE"*/);
    sub_1C93AD4(&StringLiteral_11454/*"ResidentSE"*/);
    byte_4D303AC = 1;
  }
  v1 = sub_1C93B7C(string___TypeInfo, 2);
  if ( !v1 )
    sub_1C93D2C(0, v2);
  v9 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v10 = StringLiteral_11454/*"ResidentSE"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_11454/*"ResidentSE"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v1 + 32), v10, v3, v4, v5, v6, v7, v8),
        *(_DWORD *)(v9 + 24) <= 1u) )
  {
    sub_1C93D34(v1);
  }
  v17 = StringLiteral_11598/*"SE"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_11598/*"SE"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), v17, v11, v12, v13, v14, v15, v16);
  SeManager_TypeInfo->static_fields->LoadSeList = (struct System_String_array *)v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)SeManager_TypeInfo->static_fields, v9, v18, v19, v20, v21, v22, v23);
  static_fields = SeManager_TypeInfo->static_fields;
  static_fields->seAssetBundleList = 0;
  static_fields = (struct SeManager_StaticFields *)((char *)static_fields + 16);
  static_fields[-1].loadCounter = 1065353216;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)static_fields, 0, v25, v26, v27, v28, v29, v30);
  v31 = SeManager_TypeInfo->static_fields;
  v31->residentSeAssetBundleList = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v31->residentSeAssetBundleList, 0, v32, v33, v34, v35, v36, v37);
  __asm { FMOV            V0.2S, #1.0 }
  v43 = SeManager_TypeInfo->static_fields;
  v43->isMute = 0;
  *(_QWORD *)&v43->masterVolume = _D0;
  v43->IsBusy = 0;
}


void SeManager___ctor(SeManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x20
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w1
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  __int64 v67; // x20
  int32_t v68; // w1
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  int32_t v75; // w1
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  int32_t v82; // w1
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  int32_t v89; // w1
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  int32_t v96; // w1
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  int32_t v103; // w1
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  int32_t v110; // w1
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  int32_t v117; // w1
  int32_t v118; // w2
  int32_t v119; // w3
  System_String_o *v120; // x4
  int32_t v121; // w5
  int64_t v122; // x6
  System_String_o *v123; // x7
  int32_t v124; // w1
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  int32_t v131; // w1
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  int32_t v138; // w1
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  int32_t v145; // w1
  int32_t v146; // w2
  int32_t v147; // w3
  System_String_o *v148; // x4
  int32_t v149; // w5
  int64_t v150; // x6
  System_String_o *v151; // x7
  int32_t v152; // w2
  int32_t v153; // w3
  System_String_o *v154; // x4
  int32_t v155; // w5
  int64_t v156; // x6
  System_String_o *v157; // x7
  __int64 v158; // x20
  int32_t v159; // w1
  int32_t v160; // w2
  int32_t v161; // w3
  System_String_o *v162; // x4
  int32_t v163; // w5
  int64_t v164; // x6
  System_String_o *v165; // x7
  int32_t v166; // w1
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  int32_t v173; // w1
  int32_t v174; // w2
  int32_t v175; // w3
  System_String_o *v176; // x4
  int32_t v177; // w5
  int64_t v178; // x6
  System_String_o *v179; // x7
  int32_t v180; // w1
  int32_t v181; // w2
  int32_t v182; // w3
  System_String_o *v183; // x4
  int32_t v184; // w5
  int64_t v185; // x6
  System_String_o *v186; // x7
  int32_t v187; // w1
  int32_t v188; // w2
  int32_t v189; // w3
  System_String_o *v190; // x4
  int32_t v191; // w5
  int64_t v192; // x6
  System_String_o *v193; // x7
  int32_t v194; // w1
  int32_t v195; // w2
  int32_t v196; // w3
  System_String_o *v197; // x4
  int32_t v198; // w5
  int64_t v199; // x6
  System_String_o *v200; // x7
  int32_t v201; // w1
  int32_t v202; // w2
  int32_t v203; // w3
  System_String_o *v204; // x4
  int32_t v205; // w5
  int64_t v206; // x6
  System_String_o *v207; // x7
  int32_t v208; // w1
  int32_t v209; // w2
  int32_t v210; // w3
  System_String_o *v211; // x4
  int32_t v212; // w5
  int64_t v213; // x6
  System_String_o *v214; // x7
  int32_t v215; // w1
  int32_t v216; // w2
  int32_t v217; // w3
  System_String_o *v218; // x4
  int32_t v219; // w5
  int64_t v220; // x6
  System_String_o *v221; // x7
  int32_t v222; // w1
  int32_t v223; // w2
  int32_t v224; // w3
  System_String_o *v225; // x4
  int32_t v226; // w5
  int64_t v227; // x6
  System_String_o *v228; // x7
  int32_t v229; // w1
  int32_t v230; // w2
  int32_t v231; // w3
  System_String_o *v232; // x4
  int32_t v233; // w5
  int64_t v234; // x6
  System_String_o *v235; // x7
  int32_t v236; // w1
  int32_t v237; // w2
  int32_t v238; // w3
  System_String_o *v239; // x4
  int32_t v240; // w5
  int64_t v241; // x6
  System_String_o *v242; // x7
  int32_t v243; // w1
  int32_t v244; // w2
  int32_t v245; // w3
  System_String_o *v246; // x4
  int32_t v247; // w5
  int64_t v248; // x6
  System_String_o *v249; // x7
  int32_t v250; // w1
  int32_t v251; // w2
  int32_t v252; // w3
  System_String_o *v253; // x4
  int32_t v254; // w5
  int64_t v255; // x6
  System_String_o *v256; // x7
  int32_t v257; // w1
  int32_t v258; // w2
  int32_t v259; // w3
  System_String_o *v260; // x4
  int32_t v261; // w5
  int64_t v262; // x6
  System_String_o *v263; // x7
  int32_t v264; // w1
  int32_t v265; // w2
  int32_t v266; // w3
  System_String_o *v267; // x4
  int32_t v268; // w5
  int64_t v269; // x6
  System_String_o *v270; // x7
  int32_t v271; // w1
  int32_t v272; // w2
  int32_t v273; // w3
  System_String_o *v274; // x4
  int32_t v275; // w5
  int64_t v276; // x6
  System_String_o *v277; // x7
  int32_t v278; // w1
  int32_t v279; // w2
  int32_t v280; // w3
  System_String_o *v281; // x4
  int32_t v282; // w5
  int64_t v283; // x6
  System_String_o *v284; // x7
  int32_t v285; // w1
  int32_t v286; // w2
  int32_t v287; // w3
  System_String_o *v288; // x4
  int32_t v289; // w5
  int64_t v290; // x6
  System_String_o *v291; // x7
  int32_t v292; // w1
  int32_t v293; // w2
  int32_t v294; // w3
  System_String_o *v295; // x4
  int32_t v296; // w5
  int64_t v297; // x6
  System_String_o *v298; // x7
  int32_t v299; // w1
  int32_t v300; // w2
  int32_t v301; // w3
  System_String_o *v302; // x4
  int32_t v303; // w5
  int64_t v304; // x6
  System_String_o *v305; // x7
  int32_t v306; // w1
  int32_t v307; // w2
  int32_t v308; // w3
  System_String_o *v309; // x4
  int32_t v310; // w5
  int64_t v311; // x6
  System_String_o *v312; // x7
  int32_t v313; // w1
  int32_t v314; // w2
  int32_t v315; // w3
  System_String_o *v316; // x4
  int32_t v317; // w5
  int64_t v318; // x6
  System_String_o *v319; // x7
  int32_t v320; // w1
  int32_t v321; // w2
  int32_t v322; // w3
  System_String_o *v323; // x4
  int32_t v324; // w5
  int64_t v325; // x6
  System_String_o *v326; // x7
  int32_t v327; // w1
  int32_t v328; // w2
  int32_t v329; // w3
  System_String_o *v330; // x4
  int32_t v331; // w5
  int64_t v332; // x6
  System_String_o *v333; // x7
  int32_t v334; // w1
  int32_t v335; // w2
  int32_t v336; // w3
  System_String_o *v337; // x4
  int32_t v338; // w5
  int64_t v339; // x6
  System_String_o *v340; // x7
  int32_t v341; // w1
  int32_t v342; // w2
  int32_t v343; // w3
  System_String_o *v344; // x4
  int32_t v345; // w5
  int64_t v346; // x6
  System_String_o *v347; // x7
  int32_t v348; // w1
  int32_t v349; // w2
  int32_t v350; // w3
  System_String_o *v351; // x4
  int32_t v352; // w5
  int64_t v353; // x6
  System_String_o *v354; // x7
  int32_t v355; // w1
  int32_t v356; // w2
  int32_t v357; // w3
  System_String_o *v358; // x4
  int32_t v359; // w5
  int64_t v360; // x6
  System_String_o *v361; // x7
  int32_t v362; // w1
  int32_t v363; // w2
  int32_t v364; // w3
  System_String_o *v365; // x4
  int32_t v366; // w5
  int64_t v367; // x6
  System_String_o *v368; // x7

  if ( (byte_4D303AB & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager___ctor__);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_24194/*"sy4"*/);
    sub_1C93AD4(&StringLiteral_16970/*"ar102"*/);
    sub_1C93AD4(&StringLiteral_17105/*"ba17"*/);
    sub_1C93AD4(&StringLiteral_24373/*"ti1"*/);
    sub_1C93AD4(&StringLiteral_24198/*"sy8"*/);
    sub_1C93AD4(&StringLiteral_16971/*"ar112"*/);
    sub_1C93AD4(&StringLiteral_17100/*"ba11"*/);
    sub_1C93AD4(&StringLiteral_24195/*"sy5"*/);
    sub_1C93AD4(&StringLiteral_17098/*"ba10"*/);
    sub_1C93AD4(&StringLiteral_18172/*"co1"*/);
    sub_1C93AD4(&StringLiteral_24196/*"sy6"*/);
    sub_1C93AD4(&StringLiteral_17108/*"ba2"*/);
    sub_1C93AD4(&StringLiteral_17114/*"ba3"*/);
    sub_1C93AD4(&StringLiteral_17103/*"ba15"*/);
    sub_1C93AD4(&StringLiteral_17113/*"ba24"*/);
    sub_1C93AD4(&StringLiteral_24599/*"um2"*/);
    sub_1C93AD4(&StringLiteral_21861/*"mis1"*/);
    sub_1C93AD4(&StringLiteral_24197/*"sy7"*/);
    sub_1C93AD4(&StringLiteral_17109/*"ba20"*/);
    sub_1C93AD4(&StringLiteral_17097/*"ba1"*/);
    sub_1C93AD4(&StringLiteral_17107/*"ba19"*/);
    sub_1C93AD4(&StringLiteral_24199/*"sy9"*/);
    sub_1C93AD4(&StringLiteral_16976/*"ar2"*/);
    sub_1C93AD4(&StringLiteral_17112/*"ba23"*/);
    sub_1C93AD4(&StringLiteral_25175/*"wo11"*/);
    sub_1C93AD4(&StringLiteral_17116/*"ba38"*/);
    sub_1C93AD4(&StringLiteral_24192/*"sy2"*/);
    sub_1C93AD4(&StringLiteral_24340/*"testSe"*/);
    sub_1C93AD4(&StringLiteral_17115/*"ba30"*/);
    sub_1C93AD4(&StringLiteral_24598/*"um1"*/);
    sub_1C93AD4(&StringLiteral_17118/*"ba7"*/);
    sub_1C93AD4(&StringLiteral_17110/*"ba21"*/);
    sub_1C93AD4(&StringLiteral_17106/*"ba18"*/);
    sub_1C93AD4(&StringLiteral_24190/*"sy1"*/);
    sub_1C93AD4(&StringLiteral_23130/*"qev79"*/);
    sub_1C93AD4(&StringLiteral_17102/*"ba13"*/);
    sub_1C93AD4(&StringLiteral_17104/*"ba16"*/);
    sub_1C93AD4(&StringLiteral_17101/*"ba12"*/);
    sub_1C93AD4(&StringLiteral_17111/*"ba22"*/);
    sub_1C93AD4(&StringLiteral_25174/*"wo1"*/);
    sub_1C93AD4(&StringLiteral_24193/*"sy3"*/);
    sub_1C93AD4(&StringLiteral_24191/*"sy1a"*/);
    sub_1C93AD4(&StringLiteral_17099/*"ba10a"*/);
    byte_4D303AB = 1;
  }
  this->fields.SYSTEM_SE_MAX = 3;
  this->fields.seMax = 8;
  *(int32x2_t *)&this->fields.preDelayTimeForStream = vdup_n_s32(0x43270000u);
  v3 = sub_1C93B7C(string___TypeInfo, 7);
  if ( !v3 )
    goto LABEL_57;
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_56;
  v12 = StringLiteral_24190/*"sy1"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_24190/*"sy1"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_56;
  v19 = StringLiteral_24191/*"sy1a"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_24191/*"sy1a"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_56;
  v26 = StringLiteral_24192/*"sy2"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_24192/*"sy2"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 48), v26, v20, v21, v22, v23, v24, v25);
  if ( *(_DWORD *)(v11 + 24) <= 3u )
    goto LABEL_56;
  v33 = StringLiteral_24193/*"sy3"*/;
  *(_QWORD *)(v11 + 56) = StringLiteral_24193/*"sy3"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 56), v33, v27, v28, v29, v30, v31, v32);
  if ( *(_DWORD *)(v11 + 24) <= 4u )
    goto LABEL_56;
  v40 = StringLiteral_24199/*"sy9"*/;
  *(_QWORD *)(v11 + 64) = StringLiteral_24199/*"sy9"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 64), v40, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v11 + 24) <= 5u )
    goto LABEL_56;
  v47 = StringLiteral_24373/*"ti1"*/;
  *(_QWORD *)(v11 + 72) = StringLiteral_24373/*"ti1"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 72), v47, v41, v42, v43, v44, v45, v46);
  if ( *(_DWORD *)(v11 + 24) <= 6u )
    goto LABEL_56;
  v54 = StringLiteral_17106/*"ba18"*/;
  *(_QWORD *)(v11 + 80) = StringLiteral_17106/*"ba18"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 80), v54, v48, v49, v50, v51, v52, v53);
  this->fields.ignorePreDelayArray = (struct System_String_array *)v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.ignorePreDelayArray, v11, v55, v56, v57, v58, v59, v60);
  v3 = sub_1C93B7C(string___TypeInfo, 12);
  if ( !v3 )
    goto LABEL_57;
  v67 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_56;
  v68 = StringLiteral_24190/*"sy1"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_24190/*"sy1"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), v68, v61, v62, v63, v64, v65, v66);
  if ( *(_DWORD *)(v67 + 24) <= 1u )
    goto LABEL_56;
  v75 = StringLiteral_24192/*"sy2"*/;
  *(_QWORD *)(v67 + 40) = StringLiteral_24192/*"sy2"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 40), v75, v69, v70, v71, v72, v73, v74);
  if ( *(_DWORD *)(v67 + 24) <= 2u )
    goto LABEL_56;
  v82 = StringLiteral_24193/*"sy3"*/;
  *(_QWORD *)(v67 + 48) = StringLiteral_24193/*"sy3"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 48), v82, v76, v77, v78, v79, v80, v81);
  if ( *(_DWORD *)(v67 + 24) <= 3u )
    goto LABEL_56;
  v89 = StringLiteral_24194/*"sy4"*/;
  *(_QWORD *)(v67 + 56) = StringLiteral_24194/*"sy4"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 56), v89, v83, v84, v85, v86, v87, v88);
  if ( *(_DWORD *)(v67 + 24) <= 4u )
    goto LABEL_56;
  v96 = StringLiteral_24195/*"sy5"*/;
  *(_QWORD *)(v67 + 64) = StringLiteral_24195/*"sy5"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 64), v96, v90, v91, v92, v93, v94, v95);
  if ( *(_DWORD *)(v67 + 24) <= 5u )
    goto LABEL_56;
  v103 = StringLiteral_24196/*"sy6"*/;
  *(_QWORD *)(v67 + 72) = StringLiteral_24196/*"sy6"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 72), v103, v97, v98, v99, v100, v101, v102);
  if ( *(_DWORD *)(v67 + 24) <= 6u )
    goto LABEL_56;
  v110 = StringLiteral_24197/*"sy7"*/;
  *(_QWORD *)(v67 + 80) = StringLiteral_24197/*"sy7"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 80), v110, v104, v105, v106, v107, v108, v109);
  if ( *(_DWORD *)(v67 + 24) <= 7u )
    goto LABEL_56;
  v117 = StringLiteral_24198/*"sy8"*/;
  *(_QWORD *)(v67 + 88) = StringLiteral_24198/*"sy8"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 88), v117, v111, v112, v113, v114, v115, v116);
  if ( *(_DWORD *)(v67 + 24) <= 8u )
    goto LABEL_56;
  v124 = StringLiteral_24191/*"sy1a"*/;
  *(_QWORD *)(v67 + 96) = StringLiteral_24191/*"sy1a"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 96), v124, v118, v119, v120, v121, v122, v123);
  if ( *(_DWORD *)(v67 + 24) <= 9u
    || (v131 = StringLiteral_24598/*"um1"*/,
        *(_QWORD *)(v67 + 104) = StringLiteral_24598/*"um1"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 104), v131, v125, v126, v127, v128, v129, v130),
        *(_DWORD *)(v67 + 24) <= 0xAu)
    || (v138 = StringLiteral_24599/*"um2"*/,
        *(_QWORD *)(v67 + 112) = StringLiteral_24599/*"um2"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 112), v138, v132, v133, v134, v135, v136, v137),
        *(_DWORD *)(v67 + 24) <= 0xBu) )
  {
LABEL_56:
    sub_1C93D34(v3);
  }
  v145 = StringLiteral_24199/*"sy9"*/;
  *(_QWORD *)(v67 + 120) = StringLiteral_24199/*"sy9"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 120), v145, v139, v140, v141, v142, v143, v144);
  this->fields.systemSeClipNames = (struct System_String_array *)v67;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.systemSeClipNames, v67, v146, v147, v148, v149, v150, v151);
  v3 = sub_1C93B7C(string___TypeInfo, 30);
  if ( !v3 )
LABEL_57:
    sub_1C93D2C(v3, v4);
  v158 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_56;
  v159 = StringLiteral_17097/*"ba1"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_17097/*"ba1"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), v159, v152, v153, v154, v155, v156, v157);
  if ( *(_DWORD *)(v158 + 24) <= 1u )
    goto LABEL_56;
  v166 = StringLiteral_17108/*"ba2"*/;
  *(_QWORD *)(v158 + 40) = StringLiteral_17108/*"ba2"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 40), v166, v160, v161, v162, v163, v164, v165);
  if ( *(_DWORD *)(v158 + 24) <= 2u )
    goto LABEL_56;
  v173 = StringLiteral_17114/*"ba3"*/;
  *(_QWORD *)(v158 + 48) = StringLiteral_17114/*"ba3"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 48), v173, v167, v168, v169, v170, v171, v172);
  if ( *(_DWORD *)(v158 + 24) <= 3u )
    goto LABEL_56;
  v180 = StringLiteral_17118/*"ba7"*/;
  *(_QWORD *)(v158 + 56) = StringLiteral_17118/*"ba7"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 56), v180, v174, v175, v176, v177, v178, v179);
  if ( *(_DWORD *)(v158 + 24) <= 4u )
    goto LABEL_56;
  v187 = StringLiteral_17098/*"ba10"*/;
  *(_QWORD *)(v158 + 64) = StringLiteral_17098/*"ba10"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 64), v187, v181, v182, v183, v184, v185, v186);
  if ( *(_DWORD *)(v158 + 24) <= 5u )
    goto LABEL_56;
  v194 = StringLiteral_17099/*"ba10a"*/;
  *(_QWORD *)(v158 + 72) = StringLiteral_17099/*"ba10a"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 72), v194, v188, v189, v190, v191, v192, v193);
  if ( *(_DWORD *)(v158 + 24) <= 6u )
    goto LABEL_56;
  v201 = StringLiteral_17100/*"ba11"*/;
  *(_QWORD *)(v158 + 80) = StringLiteral_17100/*"ba11"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 80), v201, v195, v196, v197, v198, v199, v200);
  if ( *(_DWORD *)(v158 + 24) <= 7u )
    goto LABEL_56;
  v208 = StringLiteral_17101/*"ba12"*/;
  *(_QWORD *)(v158 + 88) = StringLiteral_17101/*"ba12"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 88), v208, v202, v203, v204, v205, v206, v207);
  if ( *(_DWORD *)(v158 + 24) <= 8u )
    goto LABEL_56;
  v215 = StringLiteral_17104/*"ba16"*/;
  *(_QWORD *)(v158 + 96) = StringLiteral_17104/*"ba16"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 96), v215, v209, v210, v211, v212, v213, v214);
  if ( *(_DWORD *)(v158 + 24) <= 9u )
    goto LABEL_56;
  v222 = StringLiteral_17106/*"ba18"*/;
  *(_QWORD *)(v158 + 104) = StringLiteral_17106/*"ba18"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 104), v222, v216, v217, v218, v219, v220, v221);
  if ( *(_DWORD *)(v158 + 24) <= 0xAu )
    goto LABEL_56;
  v229 = StringLiteral_17107/*"ba19"*/;
  *(_QWORD *)(v158 + 112) = StringLiteral_17107/*"ba19"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 112), v229, v223, v224, v225, v226, v227, v228);
  if ( *(_DWORD *)(v158 + 24) <= 0xBu )
    goto LABEL_56;
  v236 = StringLiteral_17109/*"ba20"*/;
  *(_QWORD *)(v158 + 120) = StringLiteral_17109/*"ba20"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 120), v236, v230, v231, v232, v233, v234, v235);
  if ( *(_DWORD *)(v158 + 24) <= 0xCu )
    goto LABEL_56;
  v243 = StringLiteral_17110/*"ba21"*/;
  *(_QWORD *)(v158 + 128) = StringLiteral_17110/*"ba21"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 128), v243, v237, v238, v239, v240, v241, v242);
  if ( *(_DWORD *)(v158 + 24) <= 0xDu )
    goto LABEL_56;
  v250 = StringLiteral_17111/*"ba22"*/;
  *(_QWORD *)(v158 + 136) = StringLiteral_17111/*"ba22"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 136), v250, v244, v245, v246, v247, v248, v249);
  if ( *(_DWORD *)(v158 + 24) <= 0xEu )
    goto LABEL_56;
  v257 = StringLiteral_17112/*"ba23"*/;
  *(_QWORD *)(v158 + 144) = StringLiteral_17112/*"ba23"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 144), v257, v251, v252, v253, v254, v255, v256);
  if ( *(_DWORD *)(v158 + 24) <= 0xFu )
    goto LABEL_56;
  v264 = StringLiteral_17113/*"ba24"*/;
  *(_QWORD *)(v158 + 152) = StringLiteral_17113/*"ba24"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 152), v264, v258, v259, v260, v261, v262, v263);
  if ( *(_DWORD *)(v158 + 24) <= 0x10u )
    goto LABEL_56;
  v271 = StringLiteral_17115/*"ba30"*/;
  *(_QWORD *)(v158 + 160) = StringLiteral_17115/*"ba30"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 160), v271, v265, v266, v267, v268, v269, v270);
  if ( *(_DWORD *)(v158 + 24) <= 0x11u )
    goto LABEL_56;
  v278 = StringLiteral_16976/*"ar2"*/;
  *(_QWORD *)(v158 + 168) = StringLiteral_16976/*"ar2"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 168), v278, v272, v273, v274, v275, v276, v277);
  if ( *(_DWORD *)(v158 + 24) <= 0x12u )
    goto LABEL_56;
  v285 = StringLiteral_16970/*"ar102"*/;
  *(_QWORD *)(v158 + 176) = StringLiteral_16970/*"ar102"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 176), v285, v279, v280, v281, v282, v283, v284);
  if ( *(_DWORD *)(v158 + 24) <= 0x13u )
    goto LABEL_56;
  v292 = StringLiteral_18172/*"co1"*/;
  *(_QWORD *)(v158 + 184) = StringLiteral_18172/*"co1"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 184), v292, v286, v287, v288, v289, v290, v291);
  if ( *(_DWORD *)(v158 + 24) <= 0x14u )
    goto LABEL_56;
  v299 = StringLiteral_21861/*"mis1"*/;
  *(_QWORD *)(v158 + 192) = StringLiteral_21861/*"mis1"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 192), v299, v293, v294, v295, v296, v297, v298);
  if ( *(_DWORD *)(v158 + 24) <= 0x15u )
    goto LABEL_56;
  v306 = StringLiteral_24340/*"testSe"*/;
  *(_QWORD *)(v158 + 200) = StringLiteral_24340/*"testSe"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 200), v306, v300, v301, v302, v303, v304, v305);
  if ( *(_DWORD *)(v158 + 24) <= 0x16u )
    goto LABEL_56;
  v313 = StringLiteral_25174/*"wo1"*/;
  *(_QWORD *)(v158 + 208) = StringLiteral_25174/*"wo1"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 208), v313, v307, v308, v309, v310, v311, v312);
  if ( *(_DWORD *)(v158 + 24) <= 0x17u )
    goto LABEL_56;
  v320 = StringLiteral_25175/*"wo11"*/;
  *(_QWORD *)(v158 + 216) = StringLiteral_25175/*"wo11"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 216), v320, v314, v315, v316, v317, v318, v319);
  if ( *(_DWORD *)(v158 + 24) <= 0x18u )
    goto LABEL_56;
  v327 = StringLiteral_17116/*"ba38"*/;
  *(_QWORD *)(v158 + 224) = StringLiteral_17116/*"ba38"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 224), v327, v321, v322, v323, v324, v325, v326);
  if ( *(_DWORD *)(v158 + 24) <= 0x19u )
    goto LABEL_56;
  v334 = StringLiteral_17102/*"ba13"*/;
  *(_QWORD *)(v158 + 232) = StringLiteral_17102/*"ba13"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 232), v334, v328, v329, v330, v331, v332, v333);
  if ( *(_DWORD *)(v158 + 24) <= 0x1Au )
    goto LABEL_56;
  v341 = StringLiteral_17103/*"ba15"*/;
  *(_QWORD *)(v158 + 240) = StringLiteral_17103/*"ba15"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 240), v341, v335, v336, v337, v338, v339, v340);
  if ( *(_DWORD *)(v158 + 24) <= 0x1Bu )
    goto LABEL_56;
  v348 = StringLiteral_17105/*"ba17"*/;
  *(_QWORD *)(v158 + 248) = StringLiteral_17105/*"ba17"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 248), v348, v342, v343, v344, v345, v346, v347);
  if ( *(_DWORD *)(v158 + 24) <= 0x1Cu )
    goto LABEL_56;
  v355 = StringLiteral_16971/*"ar112"*/;
  *(_QWORD *)(v158 + 256) = StringLiteral_16971/*"ar112"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 256), v355, v349, v350, v351, v352, v353, v354);
  if ( *(_DWORD *)(v158 + 24) <= 0x1Du )
    goto LABEL_56;
  v362 = StringLiteral_23130/*"qev79"*/;
  *(_QWORD *)(v158 + 264) = StringLiteral_23130/*"qev79"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v158 + 264), v362, v356, v357, v358, v359, v360, v361);
  this->fields.commonSeClipNames = (struct System_String_array *)v158;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.commonSeClipNames, v158, v363, v364, v365, v366, v367, v368);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3AC57E4 *)Method_SingletonMonoBehaviour_SeManager___ctor__);
}


void SeManager__ChangeVolumeSe(System_String_o *name, float volume, float fadeTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4D30393 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30393 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C93D2C(v8, v9);
    SeManager__ChangeVolumeSeLocal((SeManager_o *)Instance, name, volume, fadeTime, v10);
  }
}


void SeManager__ChangeVolumeSeLocal(
        SeManager_o *this,
        System_String_o *name,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_42230628; // x0
  const MethodInfo *v8; // x1

  SePlayer_42230628 = SeManager__GetSePlayer_42230628(this, name, method);
  if ( SePlayer_42230628 )
    SePlayer__ChangeVolume(SePlayer_42230628, volume, fadeTime, v8);
}


void SeManager__ChangeVolumeSeLocal_42225560(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_42230804; // x0
  const MethodInfo *v9; // x1

  SePlayer_42230804 = SeManager__GetSePlayer_42230804(this, assetName, objectName, method);
  if ( SePlayer_42230804 )
    SePlayer__ChangeVolume(SePlayer_42230804, volume, fadeTime, v9);
}


void SeManager__ChangeVolumeVoice(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4D30394 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30394 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v10 )
  {
    if ( !Instance )
      sub_1C93D2C(v10, v11);
    SeManager__ChangeVolumeVoiceLocal((SeManager_o *)Instance, assetName, objectName, volume, fadeTime, v12);
  }
}


void SeManager__ChangeVolumeVoiceLocal(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x4
  SePlayer_o *SePlayer_42231220; // x0
  const MethodInfo *v10; // x1

  SePlayer_42231220 = SeManager__GetSePlayer_42231220(this, 1, assetName, objectName, v6);
  if ( SePlayer_42231220 )
    SePlayer__ChangeVolume(SePlayer_42231220, volume, fadeTime, v10);
}


CriAtomSource_o *SeManager__GetAudioSource(SeManager_o *this, SePlayer_o *player, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t seMax; // w9
  struct SePlayer_array *sePlayerStatusList; // x23
  SeManager_o *v10; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned int v13; // w21
  __int64 i; // x22
  struct CriAtomSource_array *seSources; // x8
  __int64 v17; // x0

  seMax = this->fields.seMax;
  if ( seMax < 1 )
    return 0;
  sePlayerStatusList = this->fields.sePlayerStatusList;
  v10 = this;
  if ( !sePlayerStatusList )
    goto LABEL_16;
  max_length = sePlayerStatusList->max_length;
  v13 = 0;
  for ( i = 32; ; i += 8 )
  {
    if ( v13 >= (unsigned int)max_length )
      goto LABEL_15;
    if ( !*(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) )
      break;
    if ( (int)++v13 >= seMax )
      return 0;
  }
  if ( player )
  {
    this = (SeManager_o *)sub_1C93C10(player, sePlayerStatusList->obj.klass->_1.element_class);
    if ( !this )
    {
      v17 = sub_1C93D50(0);
      sub_1C93BFC(v17, 0);
    }
    max_length = sePlayerStatusList->max_length;
  }
  if ( v13 >= (unsigned int)max_length )
LABEL_15:
    sub_1C93D34(this);
  *(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) = (Il2CppClass *)player;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)((char *)sePlayerStatusList + i),
    (int32_t)player,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  seSources = v10->fields.seSources;
  if ( !seSources )
LABEL_16:
    sub_1C93D2C(this, player);
  if ( v13 >= LODWORD(seSources->max_length) )
    goto LABEL_15;
  return *(CriAtomSource_o **)((char *)&seSources->obj.klass + i);
}


CriAtomSource_o *SeManager__GetAudioSource_42229308(
        SeManager_o *this,
        SePlayer_o *player,
        System_String_o *cueSheet,
        System_String_o *cueName,
        const MethodInfo *method)
{
  SeManager_o *v5; // x20
  unsigned __int64 v9; // x26
  __int64 i; // x25
  struct SePlayer_array *sePlayerStatusList; // x8
  struct CriAtomSource_array *seSources; // x9
  SePlayer_o *v13; // x24
  CriAtomSource_o *v14; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct SePlayer_array *v22; // x20
  __int64 v23; // x0

  v5 = this;
  if ( this->fields.seMax < 1 )
    return SeManager__GetAudioSource(v5, player, (const MethodInfo *)cueSheet);
  v9 = 0;
  for ( i = 32; ; i += 8 )
  {
    sePlayerStatusList = v5->fields.sePlayerStatusList;
    if ( !sePlayerStatusList )
      goto LABEL_18;
    if ( v9 >= LODWORD(sePlayerStatusList->max_length) )
      goto LABEL_19;
    seSources = v5->fields.seSources;
    if ( !seSources )
      goto LABEL_18;
    if ( v9 >= LODWORD(seSources->max_length) )
      goto LABEL_19;
    v13 = *(SePlayer_o **)((char *)&sePlayerStatusList->obj.klass + i);
    if ( v13 )
    {
      v14 = *(CriAtomSource_o **)((char *)&seSources->obj.klass + i);
      if ( !v14 )
        goto LABEL_18;
      this = (SeManager_o *)System_String__op_Equality(v14->fields._cueSheet, cueSheet, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (SeManager_o *)System_String__op_Equality(v14->fields._cueName, cueName, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
    }
    if ( (__int64)++v9 >= v5->fields.seMax )
      return SeManager__GetAudioSource(v5, player, (const MethodInfo *)cueSheet);
  }
  SePlayer__StopSe(v13, 0.0, (const MethodInfo *)player);
  v22 = v5->fields.sePlayerStatusList;
  if ( !v22 )
LABEL_18:
    sub_1C93D2C(this, player);
  if ( player )
  {
    this = (SeManager_o *)sub_1C93C10(player, v22->obj.klass->_1.element_class);
    if ( !this )
    {
      v23 = sub_1C93D50(0);
      sub_1C93BFC(v23, 0);
    }
  }
  if ( (unsigned int)v9 >= LODWORD(v22->max_length) )
LABEL_19:
    sub_1C93D34(this);
  *(Il2CppClass **)((char *)&v22->obj.klass + i) = (Il2CppClass *)player;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)v22 + i), (int32_t)player, v16, v17, v18, v19, v20, v21);
  return v14;
}


// local variable allocation has failed, the output may be wrong!
CriAtomSource_o *SeManager__GetAudioSource_42230060(
        SeManager_o *this,
        SePlayer_o *player,
        System_String_o *cueSheet,
        System_String_o *cueName,
        bool notOverwrite,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  SeManager_o *v9; // x19
  int32_t seMax; // w9
  struct SePlayer_array *sePlayerStatusList; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned int v13; // w21
  __int64 i; // x22
  struct CriAtomSource_array *seSources; // x10
  struct CriAtomSource_array *v17; // x8
  __int64 v18; // x0

  v9 = this;
  if ( !notOverwrite )
    return SeManager__GetAudioSource_42229308(this, player, cueSheet, cueName, (const MethodInfo *)notOverwrite);
  seMax = this->fields.seMax;
  if ( seMax < 1 )
    return SeManager__GetAudioSource_42229308(this, player, cueSheet, cueName, (const MethodInfo *)notOverwrite);
  sePlayerStatusList = this->fields.sePlayerStatusList;
  if ( !sePlayerStatusList )
    goto LABEL_19;
  max_length = sePlayerStatusList->max_length;
  v13 = 0;
  for ( i = 32; ; i += 8 )
  {
    if ( v13 >= (unsigned int)max_length )
      goto LABEL_18;
    seSources = this->fields.seSources;
    if ( !seSources )
      goto LABEL_19;
    if ( v13 >= LODWORD(seSources->max_length) )
      goto LABEL_18;
    if ( !*(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) )
      break;
    if ( (int)++v13 >= seMax )
      return SeManager__GetAudioSource_42229308(this, player, cueSheet, cueName, (const MethodInfo *)notOverwrite);
  }
  if ( player )
  {
    this = (SeManager_o *)sub_1C93C10(player, sePlayerStatusList->obj.klass->_1.element_class);
    if ( !this )
    {
      v18 = sub_1C93D50(0);
      sub_1C93BFC(v18, 0);
    }
    max_length = sePlayerStatusList->max_length;
  }
  if ( v13 >= (unsigned int)max_length )
LABEL_18:
    sub_1C93D34(this);
  *(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) = (Il2CppClass *)player;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)((char *)sePlayerStatusList + i),
    (int32_t)player,
    (int32_t)cueSheet,
    (int32_t)cueName,
    (System_String_o *)notOverwrite,
    (int32_t)method,
    v6,
    v7);
  v17 = v9->fields.seSources;
  if ( !v17 )
LABEL_19:
    sub_1C93D2C(this, player);
  if ( v13 >= LODWORD(v17->max_length) )
    goto LABEL_18;
  return *(CriAtomSource_o **)((char *)&v17->obj.klass + i);
}


System_String_o *SeManager__GetCommonSeName(int32_t kind, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D30377 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30377 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  return SeManager__GetCommonSeNameLocal((SeManager_o *)Instance, kind, v5);
}


System_String_o *SeManager__GetCommonSeNameLocal(SeManager_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_String_array *commonSeClipNames; // x8

  commonSeClipNames = this->fields.commonSeClipNames;
  if ( !commonSeClipNames )
    sub_1C93D2C(this, kind);
  if ( LODWORD(commonSeClipNames->max_length) <= kind )
    sub_1C93D34(this);
  return commonSeClipNames->m_Items[kind];
}


float SeManager__GetDefaultPreDelayTime(
        SeManager_o *this,
        System_String_o *cueSheet,
        System_String_o *cueName,
        const MethodInfo *method)
{
  CriAtomExAcb_o *Acb; // x0
  CriAtomEx_WaveformInfo_o v8; // [xsp+0h] [xbp-50h] BYREF

  if ( !this->fields.enablePreDelay )
    return 0.0;
  Acb = CriAtom__GetAcb(cueSheet, 0);
  memset(&v8, 0, sizeof(v8));
  if ( Acb && CriAtomExAcb__GetWaveFormInfo(Acb, cueName, &v8, 0) && !v8.fields.streamingFlag )
    return this->fields.preDelayTimeForMemory;
  else
    return this->fields.preDelayTimeForStream;
}


System_String_o *SeManager__GetPathName(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4D3036D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12752/*"Se/"*/);
    byte_4D3036D = 1;
  }
  return System_String__Concat_64425724((System_String_o *)StringLiteral_12752/*"Se/"*/, name, 0);
}


float SeManager__GetPitchSe(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  float v7; // s8
  SePlayer_o *SePlayer_42230628; // x0

  if ( (byte_4D30396 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30396 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v7 = 0.0;
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C93D2C(v4, v5);
    SePlayer_42230628 = SeManager__GetSePlayer_42230628((SeManager_o *)Instance, name, v6);
    if ( SePlayer_42230628 )
      return SePlayer_42230628->fields.pitchValue;
  }
  return v7;
}


float SeManager__GetPitchSeLocal(SeManager_o *this, System_String_o *name, const MethodInfo *method)
{
  SePlayer_o *SePlayer_42230628; // x0

  SePlayer_42230628 = SeManager__GetSePlayer_42230628(this, name, method);
  if ( SePlayer_42230628 )
    return SePlayer_42230628->fields.pitchValue;
  else
    return 0.0;
}


float SeManager__GetPreDelayTime(
        SeManager_o *this,
        System_String_o *cueSheet,
        System_String_o *cueName,
        const MethodInfo *method)
{
  float v7; // s8
  System_Collections_Generic_IEnumerable_TSource__o *ignorePreDelayArray; // x0
  CriAtomExAcb_o *Acb; // x0
  CriAtomEx_WaveformInfo_o v11; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4D3039D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_string___);
    byte_4D3039D = 1;
  }
  v7 = 0.0;
  if ( this->fields.enablePreDelay )
  {
    ignorePreDelayArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.ignorePreDelayArray;
    if ( !ignorePreDelayArray
      || !System_Linq_Enumerable__Contains_object_(
            ignorePreDelayArray,
            (Il2CppObject *)cueName,
            (const MethodInfo_31C1360 *)Method_System_Linq_Enumerable_Contains_string___) )
    {
      Acb = CriAtom__GetAcb(cueSheet, 0);
      memset(&v11, 0, sizeof(v11));
      if ( Acb && CriAtomExAcb__GetWaveFormInfo(Acb, cueName, &v11, 0) && !v11.fields.streamingFlag )
        return this->fields.preDelayTimeForMemory;
      else
        return this->fields.preDelayTimeForStream;
    }
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SeManager__GetSePlayer(SeManager_o *this, int32_t num, const MethodInfo *method)
{
  SeManager_o *v4; // x20
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int32_t i; // w21

  v4 = this;
  if ( (byte_4D3039F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    this = (SeManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4D3039F = 1;
  }
  workSePlayerStatusList = v4->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
LABEL_11:
    sub_1C93D2C(this, *(_QWORD *)&num);
  for ( i = workSePlayerStatusList->fields._size - 1; (i & 0x80000000) == 0; --i )
  {
    this = (SeManager_o *)v4->fields.workSePlayerStatusList;
    if ( !this )
      goto LABEL_11;
    this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            i,
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
    if ( !this )
      goto LABEL_11;
    if ( HIDWORD(this->fields.m_CachedPtr) == num )
      return (SePlayer_o *)this;
  }
  return 0;
}


SePlayer_o *SeManager__GetSePlayer_42230628(SeManager_o *this, System_String_o *name, const MethodInfo *method)
{
  SeManager_o *v4; // x20
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int32_t i; // w21
  SeManager_o *v7; // x22

  v4 = this;
  if ( (byte_4D303A0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    this = (SeManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4D303A0 = 1;
  }
  workSePlayerStatusList = v4->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
LABEL_12:
    sub_1C93D2C(this, name);
  for ( i = workSePlayerStatusList->fields._size - 1; (i & 0x80000000) == 0; --i )
  {
    this = (SeManager_o *)v4->fields.workSePlayerStatusList;
    if ( !this )
      goto LABEL_12;
    this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            i,
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
    if ( !this )
      goto LABEL_12;
    v7 = this;
    if ( System_String__op_Equality((System_String_o *)this->fields.systemSeSources, name, 0) )
      return (SePlayer_o *)v7;
  }
  return 0;
}


SePlayer_o *SeManager__GetSePlayer_42230804(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  void *workSePlayerStatusList; // x0
  int32_t v8; // w22
  SePlayer_o *v9; // x23

  if ( (byte_4D303A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4D303A1 = 1;
  }
  workSePlayerStatusList = this->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_10;
  v8 = *((_DWORD *)workSePlayerStatusList + 6) - 1;
  if ( v8 >= 0 )
  {
    do
    {
      workSePlayerStatusList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                                 v8,
                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      v9 = (SePlayer_o *)workSePlayerStatusList;
      if ( System_String__op_Equality(*((System_String_o **)workSePlayerStatusList + 3), assetName, 0)
        && System_String__op_Equality(v9->fields.objName, objectName, 0) )
      {
        return v9;
      }
      if ( --v8 < 0 )
        return 0;
      workSePlayerStatusList = this->fields.workSePlayerStatusList;
    }
    while ( workSePlayerStatusList );
LABEL_10:
    sub_1C93D2C(workSePlayerStatusList, assetName);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SeManager__GetSePlayer_42231020(
        SeManager_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  void *workSePlayerStatusList; // x0
  int32_t v8; // w22
  SePlayer_o *v9; // x23

  if ( (byte_4D303A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4D303A2 = 1;
  }
  workSePlayerStatusList = this->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_10;
  v8 = *((_DWORD *)workSePlayerStatusList + 6) - 1;
  if ( v8 >= 0 )
  {
    do
    {
      workSePlayerStatusList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                                 v8,
                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      v9 = (SePlayer_o *)workSePlayerStatusList;
      if ( *((_DWORD *)workSePlayerStatusList + 4) == type
        && System_String__op_Equality(*((System_String_o **)workSePlayerStatusList + 4), name, 0) )
      {
        return v9;
      }
      if ( --v8 < 0 )
        return 0;
      workSePlayerStatusList = this->fields.workSePlayerStatusList;
    }
    while ( workSePlayerStatusList );
LABEL_10:
    sub_1C93D2C(workSePlayerStatusList, *(_QWORD *)&type);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SeManager__GetSePlayer_42231220(
        SeManager_o *this,
        int32_t type,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  void *workSePlayerStatusList; // x0
  int32_t v10; // w23
  SePlayer_o *v11; // x24

  if ( (byte_4D303A3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4D303A3 = 1;
  }
  workSePlayerStatusList = this->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_11;
  v10 = *((_DWORD *)workSePlayerStatusList + 6) - 1;
  if ( v10 >= 0 )
  {
    do
    {
      workSePlayerStatusList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                                 v10,
                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      v11 = (SePlayer_o *)workSePlayerStatusList;
      if ( *((_DWORD *)workSePlayerStatusList + 4) == type
        && System_String__op_Equality(*((System_String_o **)workSePlayerStatusList + 3), assetName, 0)
        && System_String__op_Equality(v11->fields.objName, objectName, 0) )
      {
        return v11;
      }
      if ( --v10 < 0 )
        return 0;
      workSePlayerStatusList = this->fields.workSePlayerStatusList;
    }
    while ( workSePlayerStatusList );
LABEL_11:
    sub_1C93D2C(workSePlayerStatusList, *(_QWORD *)&type);
  }
  return 0;
}


void SeManager__Initialize(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  SeManager_c *v7; // x0
  struct SeManager_StaticFields *static_fields; // x8
  struct SeManager_StaticFields *v9; // x8
  Il2CppObject *Instance; // x19
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D30368 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SeManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30368 = 1;
  }
  v7 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v7 = SeManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( static_fields->seAssetBundleList )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    static_fields->seAssetBundleList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->seAssetBundleList, 0, v1, v2, v3, v4, v5, v6);
    v7 = SeManager_TypeInfo;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = SeManager_TypeInfo;
  }
  v9 = v7->static_fields;
  if ( v9->residentSeAssetBundleList )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v9 = SeManager_TypeInfo->static_fields;
    }
    v9->residentSeAssetBundleList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v9->residentSeAssetBundleList, 0, v1, v2, v3, v4, v5, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v11 )
  {
    if ( !Instance )
      sub_1C93D2C(v11, v12);
    SeManager__InitializeLocal((SeManager_o *)Instance, v12);
  }
}


void SeManager__InitializeAssetStorage(const MethodInfo *method)
{
  SeManager_c *v1; // x0
  struct SeManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct System_String_array *LoadSeList; // x8
  SoundManager_o *v6; // x19
  System_String_o *v7; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x4
  struct System_String_array *v10; // x8
  SoundManager_o *v11; // x19
  System_String_o *v12; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x4

  if ( (byte_4D30369 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SeManager_LoadEndResidentSeAsset__);
    sub_1C93AD4(&SeManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4D30369 = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v1 = SeManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  static_fields->IsBusy = 1;
  static_fields->loadCounter = 2;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  LoadSeList = SeManager_TypeInfo->static_fields->LoadSeList;
  if ( !LoadSeList )
    goto LABEL_12;
  if ( !LODWORD(LoadSeList->max_length) )
    goto LABEL_13;
  v6 = (SoundManager_o *)Instance;
  v7 = LoadSeList->m_Items[0];
  v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v8, 0, Method_SeManager_LoadEndResidentSeAsset__, 0);
  if ( !v6
    || (SoundManager__LoadAudioAssetStorage(v6, v7, v8, 1, v9),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__),
        (v10 = SeManager_TypeInfo->static_fields->LoadSeList) == 0) )
  {
LABEL_12:
    sub_1C93D2C(Instance, v4);
  }
  if ( LODWORD(v10->max_length) <= 1 )
LABEL_13:
    sub_1C93D34(Instance);
  v11 = (SoundManager_o *)Instance;
  v12 = v10->m_Items[1];
  v13 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v13, 0, Method_SeManager_LoadEndResidentSeAsset__, 0);
  if ( !v11 )
    goto LABEL_12;
  SoundManager__LoadAudioAssetStorage(v11, v12, v13, 1, v14);
}


void SeManager__InitializeLocal(SeManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_playerGameObject; // x20
  UnityEngine_Object_o *playerGameObject; // x21
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x21
  struct CriAtomSource_array *v16; // x0
  struct CriAtomSource_array **p_seSources; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct SePlayer_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct CriAtomSource_array *v31; // x0
  struct CriAtomSource_array **p_systemSeSources; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Collections_Generic_List_object__o *v39; // x23
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct CriAtomSource_array *v46; // x27
  unsigned int v47; // w24
  __int64 v48; // x25
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  UnityEngine_Object_o *v55; // x23
  __int64 v56; // x8
  struct CriAtomSource_array *v57; // x27
  unsigned int v58; // w23
  __int64 i; // x24
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  UnityEngine_Object_o *v66; // x22
  struct CriAtomSource_array *v67; // x8
  __int64 v68; // x8
  __int64 v69; // x0

  if ( (byte_4D3039A & 1) == 0 )
  {
    sub_1C93AD4(&CriAtomSource___TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
    sub_1C93AD4(&UnityEngine_GameObject_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SePlayer__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SePlayer___TypeInfo);
    sub_1C93AD4(&StringLiteral_12753/*"SePlayerObject"*/);
    byte_4D3039A = 1;
  }
  p_playerGameObject = &this->fields.playerGameObject;
  playerGameObject = (UnityEngine_Object_o *)this->fields.playerGameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(playerGameObject, 0, 0) )
  {
    v6 = (UnityEngine_GameObject_o *)sub_1C93D20(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor_72101564(v6, 0);
    *p_playerGameObject = v6;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.playerGameObject, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    gameObject = (UnityEngine_Object_o *)*p_playerGameObject;
    if ( !*p_playerGameObject )
      goto LABEL_37;
    UnityEngine_Object__set_name(gameObject, (System_String_o *)StringLiteral_12753/*"SePlayerObject"*/, 0);
    gameObject = (UnityEngine_Object_o *)*p_playerGameObject;
    if ( !*p_playerGameObject )
      goto LABEL_37;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_37;
    gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)gameObject,
                                           0);
    if ( !transform )
      goto LABEL_37;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0);
    v16 = (struct CriAtomSource_array *)sub_1C93B7C(CriAtomSource___TypeInfo, (unsigned int)this->fields.seMax);
    this->fields.seSources = v16;
    p_seSources = &this->fields.seSources;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.seSources, (int32_t)v16, v18, v19, v20, v21, v22, v23);
    v24 = (struct SePlayer_array *)sub_1C93B7C(SePlayer___TypeInfo, (unsigned int)this->fields.seMax);
    this->fields.sePlayerStatusList = v24;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.sePlayerStatusList,
      (int32_t)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v31 = (struct CriAtomSource_array *)sub_1C93B7C(CriAtomSource___TypeInfo, (unsigned int)this->fields.SYSTEM_SE_MAX);
    this->fields.systemSeSources = v31;
    p_systemSeSources = &this->fields.systemSeSources;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.systemSeSources,
      (int32_t)v31,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    this->fields.systemSeIdx = 0;
    v39 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SePlayer__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v39,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SePlayer___ctor__);
    this->fields.workSePlayerStatusList = (struct System_Collections_Generic_List_SePlayer__o *)v39;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.workSePlayerStatusList,
      (int32_t)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    if ( this->fields.SYSTEM_SE_MAX >= 1 )
    {
      v46 = *p_systemSeSources;
      v47 = 0;
      v48 = 32;
      while ( 1 )
      {
        gameObject = (UnityEngine_Object_o *)*p_playerGameObject;
        if ( !*p_playerGameObject )
          break;
        gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
        if ( !v46 )
          break;
        v55 = gameObject;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Object_o *)sub_1C93C10(gameObject, v46->obj.klass->_1.element_class);
          if ( !gameObject )
          {
LABEL_39:
            v69 = sub_1C93D50(gameObject);
            sub_1C93BFC(v69, 0);
          }
        }
        if ( v47 >= LODWORD(v46->max_length) )
          goto LABEL_38;
        *(Il2CppClass **)((char *)&v46->obj.klass + v48) = (Il2CppClass *)v55;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)v46 + v48), (int32_t)v55, v49, v50, v51, v52, v53, v54);
        v46 = *p_systemSeSources;
        if ( !*p_systemSeSources )
          break;
        if ( v47 >= LODWORD(v46->max_length) )
LABEL_38:
          sub_1C93D34(gameObject);
        v56 = *(__int64 *)((char *)&v46->obj.klass + v48);
        if ( !v56 )
          break;
        *(_BYTE *)(v56 + 156) = 1;
        ++v47;
        v48 += 8;
        if ( (signed int)v47 >= this->fields.SYSTEM_SE_MAX )
          goto LABEL_21;
      }
LABEL_37:
      sub_1C93D2C(gameObject, v13);
    }
LABEL_21:
    if ( this->fields.seMax >= 1 )
    {
      v57 = *p_seSources;
      v58 = 0;
      for ( i = 32; ; i += 8 )
      {
        gameObject = (UnityEngine_Object_o *)*p_playerGameObject;
        if ( !*p_playerGameObject )
          break;
        gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
        if ( !v57 )
          break;
        v66 = gameObject;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Object_o *)sub_1C93C10(gameObject, v57->obj.klass->_1.element_class);
          if ( !gameObject )
            goto LABEL_39;
        }
        if ( v58 >= LODWORD(v57->max_length) )
          goto LABEL_38;
        *(Il2CppClass **)((char *)&v57->obj.klass + i) = (Il2CppClass *)v66;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)v57 + i), (int32_t)v66, v60, v61, v62, v63, v64, v65);
        v67 = *p_seSources;
        if ( !*p_seSources )
          break;
        if ( v58 >= LODWORD(v67->max_length) )
          goto LABEL_38;
        gameObject = *(UnityEngine_Object_o **)((char *)&v67->obj.klass + i);
        if ( !gameObject )
          break;
        CriAtomSource__set_use3dPositioning((CriAtomSource_o *)gameObject, 0, 0);
        v57 = *p_seSources;
        if ( !*p_seSources )
          break;
        if ( v58 >= LODWORD(v57->max_length) )
          goto LABEL_38;
        v68 = *(__int64 *)((char *)&v57->obj.klass + i);
        if ( !v68 )
          break;
        *(_BYTE *)(v68 + 156) = 1;
        if ( (signed int)++v58 >= this->fields.seMax )
          return;
      }
      goto LABEL_37;
    }
  }
  else
  {
    SeManager__StopSeAllLocal(this, 0.0, v5);
  }
}


void SeManager__InitializePreDelaySetting(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4D3036A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D3036A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C93D2C(v2, v3);
    SeManager__InitializePreDelaySettingLocal((SeManager_o *)Instance, v3);
  }
}


void SeManager__InitializePreDelaySettingLocal(SeManager_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct DataMasterBase_array *datalist; // x8
  DataMasterBase_o *v6; // x8
  ConstantStrMaster_o *v7; // x20
  struct System_String_array *ValueStringArray; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D3039B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__isEntityExistsFromId__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_12115/*"SE_PRE_DELAY_TIME_FOR_MEMORY"*/);
    sub_1C93AD4(&StringLiteral_12116/*"SE_PRE_DELAY_TIME_FOR_STREAM"*/);
    sub_1C93AD4(&StringLiteral_12114/*"SE_IGNORE_PRE_DELAY"*/);
    byte_4D3039B = 1;
  }
  this->fields.enablePreDelay = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  datalist = Instance->fields.datalist;
  if ( !datalist )
    goto LABEL_17;
  v6 = datalist->m_Items[5];
  if ( !v6 )
    goto LABEL_17;
  if ( BYTE5(v6[3].fields._MasterName_k__BackingField) )
  {
    this->fields.enablePreDelay = 1;
  }
  else if ( !this->fields.enablePreDelay )
  {
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0 )
  {
LABEL_17:
    sub_1C93D2C(Instance, v4);
  }
  v7 = (ConstantStrMaster_o *)Instance;
  this->fields.preDelayTimeForStream = ConstantStrMaster__GetFloat(
                                         (ConstantStrMaster_o *)Instance,
                                         (System_String_o *)StringLiteral_12116/*"SE_PRE_DELAY_TIME_FOR_STREAM"*/,
                                         this->fields.preDelayTimeForStream,
                                         0);
  this->fields.preDelayTimeForMemory = ConstantStrMaster__GetFloat(
                                         v7,
                                         (System_String_o *)StringLiteral_12115/*"SE_PRE_DELAY_TIME_FOR_MEMORY"*/,
                                         this->fields.preDelayTimeForMemory,
                                         0);
  if ( DataMasterBase_object__object__object___isEntityExistsFromId_54950236(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v7,
         (System_String_o *)StringLiteral_12114/*"SE_IGNORE_PRE_DELAY"*/,
         (const MethodInfo_346795C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__isEntityExistsFromId__) )
  {
    ValueStringArray = ConstantStrMaster__GetValueStringArray(v7, (System_String_o *)StringLiteral_12114/*"SE_IGNORE_PRE_DELAY"*/, 0, 0);
    this->fields.ignorePreDelayArray = ValueStringArray;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.ignorePreDelayArray,
      (int32_t)ValueStringArray,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( this->fields.preDelayTimeForStream <= 0.0 && this->fields.preDelayTimeForMemory <= 0.0 )
    this->fields.enablePreDelay = 0;
}


bool SeManager__IsBusyCommonSe(int32_t kind, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D3037C & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D3037C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  return SeManager__IsBusyCommonSeLocal((SeManager_o *)Instance, kind, v5);
}


// local variable allocation has failed, the output may be wrong!
bool SeManager__IsBusyCommonSeLocal(SeManager_o *this, int32_t kind, const MethodInfo *method)
{
  SeManager_o *v4; // x20
  struct System_String_array *commonSeClipNames; // x8
  System_String_o *v6; // x19

  v4 = this;
  if ( (byte_4D3037D & 1) == 0 )
  {
    this = (SeManager_o *)sub_1C93AD4(&SeManager_TypeInfo);
    byte_4D3037D = 1;
  }
  commonSeClipNames = v4->fields.commonSeClipNames;
  if ( !commonSeClipNames )
    sub_1C93D2C(this, *(_QWORD *)&kind);
  if ( LODWORD(commonSeClipNames->max_length) <= kind )
    sub_1C93D34(this);
  v6 = commonSeClipNames->m_Items[kind];
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__IsBusySe(v6, *(const MethodInfo **)&kind);
}


// local variable allocation has failed, the output may be wrong!
bool SeManager__IsBusyLocal(
        SeManager_o *this,
        int32_t seType,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_42231220; // x0
  const MethodInfo *v10; // x1
  void *workSePlayerStatusList; // x0
  int v12; // w21
  int v13; // w8
  SePlayer_o *v14; // x23
  int32_t v15; // w22
  SePlayer_o *v16; // x23

  if ( (byte_4D303A4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4D303A4 = 1;
  }
  if ( objectName )
  {
    if ( assetName )
    {
      SePlayer_42231220 = SeManager__GetSePlayer_42231220(this, seType, assetName, objectName, method);
      if ( SePlayer_42231220 )
        LOBYTE(SePlayer_42231220) = SePlayer__get_IsBusy(SePlayer_42231220, v10);
      return (char)SePlayer_42231220;
    }
    workSePlayerStatusList = this->fields.workSePlayerStatusList;
    if ( workSePlayerStatusList )
    {
      v15 = *((_DWORD *)workSePlayerStatusList + 6) - 1;
      if ( v15 >= 0 )
      {
        do
        {
          workSePlayerStatusList = System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                                     v15,
                                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
          if ( !workSePlayerStatusList )
            break;
          v16 = (SePlayer_o *)workSePlayerStatusList;
          if ( *((_DWORD *)workSePlayerStatusList + 4) == seType
            && System_String__op_Equality(*((System_String_o **)workSePlayerStatusList + 4), objectName, 0)
            && SePlayer__get_IsBusy(v16, *(const MethodInfo **)&seType) )
          {
            goto LABEL_35;
          }
          if ( --v15 < 0 )
            goto LABEL_33;
          workSePlayerStatusList = this->fields.workSePlayerStatusList;
        }
        while ( workSePlayerStatusList );
        goto LABEL_32;
      }
LABEL_33:
      LOBYTE(SePlayer_42231220) = 0;
      return (char)SePlayer_42231220;
    }
LABEL_32:
    sub_1C93D2C(workSePlayerStatusList, *(_QWORD *)&seType);
  }
  workSePlayerStatusList = this->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_32;
  v12 = *((_DWORD *)workSePlayerStatusList + 6);
  v13 = v12 - 1;
  if ( assetName )
  {
    if ( v13 < 0 )
      goto LABEL_33;
    do
    {
      workSePlayerStatusList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                                 --v12,
                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      v14 = (SePlayer_o *)workSePlayerStatusList;
      if ( *((_DWORD *)workSePlayerStatusList + 4) == seType
        && System_String__op_Equality(*((System_String_o **)workSePlayerStatusList + 3), assetName, 0)
        && SePlayer__get_IsBusy(v14, *(const MethodInfo **)&seType) )
      {
        goto LABEL_35;
      }
      if ( v12 < 1 )
        goto LABEL_33;
      workSePlayerStatusList = this->fields.workSePlayerStatusList;
    }
    while ( workSePlayerStatusList );
    goto LABEL_32;
  }
  if ( v13 < 0 )
    goto LABEL_33;
  while ( 1 )
  {
    workSePlayerStatusList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                               --v12,
                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
    if ( !workSePlayerStatusList )
      goto LABEL_32;
    if ( *((_DWORD *)workSePlayerStatusList + 4) == seType
      && SePlayer__get_IsBusy((SePlayer_o *)workSePlayerStatusList, *(const MethodInfo **)&seType) )
    {
      break;
    }
    if ( v12 < 1 )
      goto LABEL_33;
    workSePlayerStatusList = this->fields.workSePlayerStatusList;
    if ( !workSePlayerStatusList )
      goto LABEL_32;
  }
LABEL_35:
  LOBYTE(SePlayer_42231220) = 1;
  return (char)SePlayer_42231220;
}


bool SeManager__IsBusySe(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4

  if ( (byte_4D3037E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D3037E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C93D2C(v4, v5);
  return SeManager__IsBusyLocal((SeManager_o *)Instance, 0, 0, name, v6);
}


bool SeManager__IsBusyVoice(System_String_o *assetName, System_String_o *objectName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_4D3037F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D3037F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C93D2C(v6, v7);
  return SeManager__IsBusyLocal((SeManager_o *)Instance, 1, assetName, objectName, v8);
}


bool SeManager__IsDownloadFile(System_String_o *pathName, const MethodInfo *method)
{
  SeManager_c *v3; // x0

  if ( (byte_4D3036E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_string___);
    sub_1C93AD4(&SeManager_TypeInfo);
    byte_4D3036E = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v3 = SeManager_TypeInfo;
  }
  return System_Array__IndexOf_object_(
           (System_Object_array *)v3->static_fields->seAssetBundleList,
           (Il2CppObject *)pathName,
           (const MethodInfo_32AB2EC *)Method_System_Array_IndexOf_string___) >= 0;
}


void SeManager__LateUpdate(SeManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playerGameObject; // x20
  float deltaTime; // s8
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x0
  int32_t v6; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v8; // x1
  SePlayer_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t seMax; // w8
  struct SePlayer_array *sePlayerStatusList; // x11
  int32_t v18; // w9
  GrandQuestFolderBoardItem_o *m_Items; // x0
  struct System_Action_o *callbackFunc; // x24
  const MethodInfo *v21; // x1

  if ( (byte_4D303AA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D303AA = 1;
  }
  playerGameObject = (UnityEngine_Object_o *)this->fields.playerGameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playerGameObject, 0, 0) )
  {
    deltaTime = RealTime__get_deltaTime(0);
    if ( deltaTime > 0.5 )
      deltaTime = UnityEngine_Time__get_deltaTime(0);
    workSePlayerStatusList = this->fields.workSePlayerStatusList;
    if ( workSePlayerStatusList )
    {
      v6 = workSePlayerStatusList->fields._size - 1;
      if ( v6 >= 0 )
      {
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                   v6,
                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
          if ( Item )
          {
            v9 = (SePlayer_o *)Item;
            if ( !SePlayer__get_IsPause((SePlayer_o *)Item, v8) )
            {
              workSePlayerStatusList = (struct System_Collections_Generic_List_SePlayer__o *)SePlayer__Update(
                                                                                               v9,
                                                                                               deltaTime,
                                                                                               v8);
              if ( ((unsigned __int8)workSePlayerStatusList & 1) == 0 )
              {
                seMax = this->fields.seMax;
                if ( seMax >= 1 )
                {
                  sePlayerStatusList = this->fields.sePlayerStatusList;
                  if ( !sePlayerStatusList )
                    goto LABEL_28;
                  v18 = 0;
                  m_Items = (GrandQuestFolderBoardItem_o *)sePlayerStatusList->m_Items;
                  while ( 1 )
                  {
                    if ( (unsigned int)v18 >= LODWORD(sePlayerStatusList->max_length) )
                      sub_1C93D34(m_Items);
                    if ( (SePlayer_o *)m_Items->klass == v9 )
                      break;
                    ++v18;
                    m_Items = (GrandQuestFolderBoardItem_o *)((char *)m_Items + 8);
                    if ( v18 >= seMax )
                      goto LABEL_23;
                  }
                  m_Items->klass = 0;
                  sub_1C93A78(m_Items, 0, v10, v11, v12, v13, v14, v15);
                }
LABEL_23:
                workSePlayerStatusList = this->fields.workSePlayerStatusList;
                if ( !workSePlayerStatusList )
                  goto LABEL_28;
                System_Collections_Generic_List_object___RemoveAt(
                  (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                  v6,
                  (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_SePlayer__RemoveAt__);
                callbackFunc = v9->fields.callbackFunc;
                SePlayer__Destroy(v9, v21);
                if ( callbackFunc )
                  ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
                    callbackFunc->fields.method_code,
                    callbackFunc->fields.method);
              }
            }
          }
          else
          {
            workSePlayerStatusList = this->fields.workSePlayerStatusList;
            if ( !workSePlayerStatusList )
              goto LABEL_28;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
              v6,
              (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_SePlayer__RemoveAt__);
          }
          if ( --v6 < 0 )
            return;
          workSePlayerStatusList = this->fields.workSePlayerStatusList;
          if ( !workSePlayerStatusList )
LABEL_28:
            sub_1C93D2C(workSePlayerStatusList, v8);
        }
      }
    }
  }
}


void SeManager__LoadEndResidentSeAsset(const MethodInfo *method)
{
  SeManager_c *v1; // x0
  struct SeManager_StaticFields *static_fields; // x8
  int v3; // w9
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  SeManager_c *v7; // x8
  SoundManager_o *v8; // x19
  struct System_String_array *LoadSeList; // x8
  System_String_array *CueList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  SeManager___c_c *v12; // x0
  System_Func_object__object__o *_9__31_0; // x20
  Il2CppObject *v14; // x21
  struct SeManager___c_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Object_array *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  SeManager_c *v30; // x8
  System_Object_array *v31; // x19
  struct SeManager_StaticFields *v32; // x0
  const MethodInfo *v33; // x2
  SeManager_c *v34; // x8
  SoundManager_o *v35; // x19
  struct System_String_array *v36; // x8
  System_String_array *v37; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  SeManager___c_c *v39; // x0
  System_Func_object__object__o *_9__31_1; // x20
  Il2CppObject *v41; // x21
  struct SeManager___c_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Object_array *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  SeManager_c *v57; // x8
  System_Object_array *v58; // x19
  struct SeManager_StaticFields *v59; // x0
  SeManager_c *v60; // x0

  if ( (byte_4D3036B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C93AD4(&System_Func_string__string__TypeInfo);
    sub_1C93AD4(&SeManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C93AD4(&Method_SeManager___c__LoadEndResidentSeAsset_b__31_0__);
    sub_1C93AD4(&Method_SeManager___c__LoadEndResidentSeAsset_b__31_1__);
    sub_1C93AD4(&SeManager___c_TypeInfo);
    byte_4D3036B = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v1 = SeManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  v3 = static_fields->loadCounter - 1;
  static_fields->loadCounter = v3;
  if ( !v3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v7 = SeManager_TypeInfo;
    v8 = (SoundManager_o *)Instance;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v7 = SeManager_TypeInfo;
    }
    LoadSeList = v7->static_fields->LoadSeList;
    if ( LoadSeList )
    {
      if ( LODWORD(LoadSeList->max_length) <= 1 )
        goto LABEL_41;
      if ( !v8 )
        goto LABEL_40;
      CueList = SoundManager__GetCueList(v8, LoadSeList->m_Items[1], v6);
      if ( CueList )
      {
        v11 = (System_Collections_Generic_IEnumerable_TSource__o *)CueList;
        v12 = SeManager___c_TypeInfo;
        if ( !SeManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager___c_TypeInfo);
          v12 = SeManager___c_TypeInfo;
        }
        _9__31_0 = (System_Func_object__object__o *)v12->static_fields->__9__31_0;
        if ( !_9__31_0 )
        {
          if ( !v12->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v12);
            v12 = SeManager___c_TypeInfo;
          }
          v14 = (Il2CppObject *)v12->static_fields->__9;
          _9__31_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_string__string__TypeInfo);
          System_Func_object__object____ctor(_9__31_0, v14, Method_SeManager___c__LoadEndResidentSeAsset_b__31_0__, 0);
          v15 = SeManager___c_TypeInfo->static_fields;
          v15->__9__31_0 = (struct System_Func_string__string__o *)_9__31_0;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v15->__9__31_0, (int32_t)_9__31_0, v16, v17, v18, v19, v20, v21);
        }
        v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                     v11,
                                                                     (System_Func_TSource__TResult__o *)_9__31_0,
                                                                     (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_string__string___);
        v23 = System_Linq_Enumerable__ToArray_object_(
                v22,
                (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_string___);
        v30 = SeManager_TypeInfo;
        v31 = v23;
        if ( !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
          v30 = SeManager_TypeInfo;
        }
        v32 = v30->static_fields;
        v32->seAssetBundleList = (struct System_String_array *)v31;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32->seAssetBundleList, (int32_t)v31, v24, v25, v26, v27, v28, v29);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      v34 = SeManager_TypeInfo;
      v35 = (SoundManager_o *)Instance;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v34 = SeManager_TypeInfo;
      }
      v36 = v34->static_fields->LoadSeList;
      if ( !v36 )
        goto LABEL_40;
      if ( !LODWORD(v36->max_length) )
LABEL_41:
        sub_1C93D34(Instance);
      if ( v35 )
      {
        v37 = SoundManager__GetCueList(v35, v36->m_Items[0], v33);
        if ( v37 )
        {
          v38 = (System_Collections_Generic_IEnumerable_TSource__o *)v37;
          v39 = SeManager___c_TypeInfo;
          if ( !SeManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager___c_TypeInfo);
            v39 = SeManager___c_TypeInfo;
          }
          _9__31_1 = (System_Func_object__object__o *)v39->static_fields->__9__31_1;
          if ( !_9__31_1 )
          {
            if ( !v39->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v39);
              v39 = SeManager___c_TypeInfo;
            }
            v41 = (Il2CppObject *)v39->static_fields->__9;
            _9__31_1 = (System_Func_object__object__o *)sub_1C93D20(System_Func_string__string__TypeInfo);
            System_Func_object__object____ctor(_9__31_1, v41, Method_SeManager___c__LoadEndResidentSeAsset_b__31_1__, 0);
            v42 = SeManager___c_TypeInfo->static_fields;
            v42->__9__31_1 = (struct System_Func_string__string__o *)_9__31_1;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)&v42->__9__31_1, (int32_t)_9__31_1, v43, v44, v45, v46, v47, v48);
          }
          v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                       v38,
                                                                       (System_Func_TSource__TResult__o *)_9__31_1,
                                                                       (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_string__string___);
          v50 = System_Linq_Enumerable__ToArray_object_(
                  v49,
                  (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_string___);
          v57 = SeManager_TypeInfo;
          v58 = v50;
          if ( !SeManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
            v57 = SeManager_TypeInfo;
          }
          v59 = v57->static_fields;
          v59->residentSeAssetBundleList = (struct System_String_array *)v58;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v59->residentSeAssetBundleList,
            (int32_t)v58,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
        }
        v60 = SeManager_TypeInfo;
        if ( !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
          v60 = SeManager_TypeInfo;
        }
        v60->static_fields->IsBusy = 0;
        return;
      }
    }
LABEL_40:
    sub_1C93D2C(Instance, v5);
  }
}


void SeManager__LoadSe(System_String_o *name, System_Action_o *callbackFunc, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D30380 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30380 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1C93D2C(v5, v6);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        callbackFunc->fields.method);
  }
}


void SeManager__LoadSeLocal(
        SeManager_o *this,
        System_String_o *name,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
}


void SeManager__PauseSe(bool isPause, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4D30397 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30397 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C93D2C(v4, v5);
    SeManager__PauseSeLocal((SeManager_o *)Instance, isPause, 0, v6);
  }
}


void SeManager__PauseSeLocal(SeManager_o *this, bool isPause, int32_t seType, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *workSePlayerStatusList; // x0
  int32_t v8; // w21
  bool v9; // w22
  SePlayer_o *Item; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D30399 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4D30399 = 1;
  }
  workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
  if ( workSePlayerStatusList )
  {
    v8 = workSePlayerStatusList->fields._size - 1;
    if ( v8 >= 0 )
    {
      v9 = isPause;
      while ( 1 )
      {
        Item = (SePlayer_o *)System_Collections_Generic_List_object___get_Item(
                               workSePlayerStatusList,
                               v8,
                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
        if ( Item && Item->fields.seType == seType )
          SePlayer__SetPause(Item, v9, v12);
        if ( --v8 < 0 )
          break;
        workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
        if ( !workSePlayerStatusList )
          sub_1C93D2C(0, v11);
      }
    }
  }
}


void SeManager__PauseVoice(bool isPause, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4D30398 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30398 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C93D2C(v4, v5);
    SeManager__PauseSeLocal((SeManager_o *)Instance, isPause, 1, v6);
  }
}


void SeManager__PlayCommonSe(int32_t kind, bool ignorePreDelay, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D30378 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30378 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  SeManager__PlayCommonSeLocal((SeManager_o *)Instance, kind, ignorePreDelay, v7);
}


// local variable allocation has failed, the output may be wrong!
void SeManager__PlayCommonSeLocal(SeManager_o *this, int32_t kind, bool ignorePreDelay, const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  SeManager_o *v7; // x21
  struct System_String_array *commonSeClipNames; // x8
  System_String_o *v9; // x20
  SeManager_c *v10; // x0

  v7 = this;
  if ( (byte_4D3037B & 1) == 0 )
  {
    this = (SeManager_o *)sub_1C93AD4(&SeManager_TypeInfo);
    byte_4D3037B = 1;
  }
  commonSeClipNames = v7->fields.commonSeClipNames;
  if ( !commonSeClipNames )
    sub_1C93D2C(this, *(_QWORD *)&kind);
  if ( LODWORD(commonSeClipNames->max_length) <= kind )
    sub_1C93D34(this);
  v9 = commonSeClipNames->m_Items[kind];
  v10 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v10 = SeManager_TypeInfo;
  }
  SeManager__PlaySe(v9, v10->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, ignorePreDelay, v4);
}


System_Collections_IEnumerator_o *SeManager__PlayCommonSeWithDelay(
        int32_t kind,
        float delay,
        int32_t waitFrameCount,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  bool v9; // w22
  __int64 v10; // x21

  if ( (byte_4D3037A & 1) == 0 )
  {
    sub_1C93AD4(&SeManager__PlayCommonSeWithDelay_d__50_TypeInfo);
    byte_4D3037A = 1;
  }
  v9 = ignorePreDelay;
  v10 = sub_1C93D20(SeManager__PlayCommonSeWithDelay_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 40) = kind;
  *(float *)(v10 + 36) = delay;
  *(_DWORD *)(v10 + 32) = waitFrameCount;
  *(_BYTE *)(v10 + 44) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


void SeManager__PlayCommonSe_42152720(
        int32_t kind,
        float delayTime,
        int32_t waitFrameCount,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x22
  System_Collections_IEnumerator_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_4D30379 & 1) == 0 )
  {
    sub_1C93AD4(&SeManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30379 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  v11 = SeManager__PlayCommonSeWithDelay(kind, delayTime, waitFrameCount, ignorePreDelay, v9);
  if ( !Instance )
    sub_1C93D2C(v11, v12);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)Instance, v11, 0);
}


SePlayer_o *SeManager__PlayLocal(
        SeManager_o *this,
        int32_t seType,
        int32_t assetType,
        System_String_o *pathName,
        System_String_o *name,
        float volume,
        bool isLoop,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool notOverwrite,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  int32_t v21; // w27
  SePlayer_o *v22; // x19
  int32_t v23; // w3
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_object__o *workSePlayerStatusList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  const MethodInfo *v37; // [xsp+10h] [xbp-80h]

  if ( (byte_4D303A5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__Add__);
    sub_1C93AD4(&SePlayer_TypeInfo);
    byte_4D303A5 = 1;
  }
  v21 = this->fields.sePlayNum + 1;
  this->fields.sePlayNum = v21;
  v22 = (SePlayer_o *)sub_1C93D20(SePlayer_TypeInfo);
  SePlayer___ctor(
    v22,
    v21,
    seType,
    v23,
    pathName,
    name,
    volume,
    isLoop,
    fadeinTime,
    callbackFunc,
    notOverwrite,
    ignorePreDelay,
    v37);
  workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
  if ( workSePlayerStatusList )
  {
    items = workSePlayerStatusList->fields._items;
    v33 = Method_System_Collections_Generic_List_SePlayer__Add__;
    ++workSePlayerStatusList->fields._version;
    if ( !items )
      sub_1C93D2C(workSePlayerStatusList, v24);
    size = workSePlayerStatusList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        workSePlayerStatusList,
        (Il2CppObject *)v22,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      workSePlayerStatusList->fields._size = size + 1;
      v35[4] = (Il2CppClass *)v22;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v22, v25, v26, v27, v28, v29, v30);
    }
  }
  return v22;
}


SePlayer_o *SeManager__PlaySe(
        System_String_o *name,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool notOverwrite,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x23
  _BOOL8 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x7

  if ( (byte_4D30382 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30382 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v14 )
    return 0;
  if ( !Instance )
    sub_1C93D2C(v14, v15);
  return SeManager__PlaySeLocal(
           (SeManager_o *)Instance,
           0,
           name,
           volume,
           0,
           fadeinTime,
           callbackFunc,
           notOverwrite,
           ignorePreDelay,
           v16);
}


SePlayer_o *SeManager__PlaySeLocal(
        SeManager_o *this,
        int32_t seType,
        System_String_o *name,
        float volume,
        bool isLoop,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool notOverwrite,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  int32_t v19; // w26
  SoundManager_o *Instance; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  System_String_o *CueSheet; // x0
  System_String_o *v24; // x28
  SePlayer_o *v25; // x27
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v34; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v36; // x8
  SeManager_c *v37; // x8
  struct SeManager_StaticFields *static_fields; // x9
  System_Object_array *residentSeAssetBundleList; // x27
  Il2CppObject *v40; // x0
  struct System_String_array *LoadSeList; // x8
  struct SeManager_StaticFields *v42; // x9
  System_Object_array *seAssetBundleList; // x27
  Il2CppObject *v44; // x0
  __int64 v45; // x8
  const MethodInfo *v47; // [xsp+10h] [xbp-80h]

  if ( (byte_4D303A7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_string___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__Add__);
    sub_1C93AD4(&SeManager_TypeInfo);
    sub_1C93AD4(&SePlayer_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_11455/*"ResidentSE/"*/);
    sub_1C93AD4(&StringLiteral_12752/*"Se/"*/);
    byte_4D303A7 = 1;
  }
  v19 = this->fields.sePlayNum + 1;
  this->fields.sePlayNum = v19;
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  CueSheet = SoundManager__GetCueSheet(Instance, name, v22);
  if ( !CueSheet )
  {
    v37 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v37 = SeManager_TypeInfo;
    }
    static_fields = v37->static_fields;
    if ( !static_fields->residentSeAssetBundleList )
      goto LABEL_39;
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    residentSeAssetBundleList = (System_Object_array *)static_fields->residentSeAssetBundleList;
    v40 = (Il2CppObject *)System_String__Concat_64425724((System_String_o *)StringLiteral_11455/*"ResidentSE/"*/, name, 0);
    Instance = (SoundManager_o *)System_Array__IndexOf_object_(
                                   residentSeAssetBundleList,
                                   v40,
                                   (const MethodInfo_32AB2EC *)Method_System_Array_IndexOf_string___);
    v37 = SeManager_TypeInfo;
    if ( ((unsigned int)Instance & 0x80000000) != 0 )
    {
LABEL_39:
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = SeManager_TypeInfo;
      }
      v42 = v37->static_fields;
      if ( !v42->seAssetBundleList )
        return 0;
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v42 = SeManager_TypeInfo->static_fields;
      }
      seAssetBundleList = (System_Object_array *)v42->seAssetBundleList;
      v44 = (Il2CppObject *)System_String__Concat_64425724((System_String_o *)StringLiteral_12752/*"Se/"*/, name, 0);
      if ( System_Array__IndexOf_object_(
             seAssetBundleList,
             v44,
             (const MethodInfo_32AB2EC *)Method_System_Array_IndexOf_string___) < 0 )
        return 0;
      Instance = (SoundManager_o *)SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        Instance = (SoundManager_o *)SeManager_TypeInfo;
      }
      v45 = *(_QWORD *)Instance[2].monitor;
      if ( v45 )
      {
        if ( *(_DWORD *)(v45 + 24) > 1u )
        {
          v24 = *(System_String_o **)(v45 + 40);
          goto LABEL_6;
        }
        goto LABEL_36;
      }
    }
    else
    {
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v37 = SeManager_TypeInfo;
      }
      LoadSeList = v37->static_fields->LoadSeList;
      if ( LoadSeList )
      {
        if ( LODWORD(LoadSeList->max_length) )
        {
          v24 = LoadSeList->m_Items[0];
          goto LABEL_6;
        }
LABEL_36:
        sub_1C93D34(Instance);
      }
    }
LABEL_35:
    sub_1C93D2C(Instance, v21);
  }
  v24 = CueSheet;
LABEL_6:
  v25 = (SePlayer_o *)sub_1C93D20(SePlayer_TypeInfo);
  SePlayer___ctor(
    v25,
    v19,
    seType,
    v26,
    v24,
    name,
    volume,
    isLoop,
    fadeinTime,
    callbackFunc,
    notOverwrite,
    ignorePreDelay,
    v47);
  Instance = (SoundManager_o *)this->fields.workSePlayerStatusList;
  if ( !Instance )
    goto LABEL_35;
  m_CachedPtr = Instance->fields.m_CachedPtr;
  v34 = Method_System_Collections_Generic_List_SePlayer__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_35;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v25,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v36 + 32) = v25;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v36 + 32), (int32_t)v25, v27, v28, v29, v30, v31, v32);
  }
  return v25;
}


SePlayer_o *SeManager__PlaySeLocal_42223220(
        SeManager_o *this,
        int32_t seType,
        System_String_o *pathName,
        System_String_o *name,
        float volume,
        bool isLoop,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool notOverwrite,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v12; // [xsp+8h] [xbp-18h]

  return SeManager__PlayLocal(
           this,
           seType,
           0,
           pathName,
           name,
           volume,
           isLoop,
           fadeinTime,
           callbackFunc,
           notOverwrite,
           ignorePreDelay,
           v12);
}


SePlayer_o *SeManager__PlaySeLoop(
        System_String_o *name,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x7

  if ( (byte_4D30385 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30385 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_1C93D2C(v10, v11);
  return SeManager__PlaySeLocal((SeManager_o *)Instance, 0, name, volume, 1, fadeinTime, 0, 0, ignorePreDelay, v12);
}


SePlayer_o *SeManager__PlaySeLoop_42223544(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v15; // [xsp+8h] [xbp-58h]

  if ( (byte_4D30386 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30386 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v12 )
    return 0;
  if ( !Instance )
    sub_1C93D2C(v12, v13);
  return SeManager__PlayLocal(
           (SeManager_o *)Instance,
           0,
           0,
           assetName,
           objectName,
           volume,
           1,
           fadeinTime,
           0,
           0,
           ignorePreDelay,
           v15);
}


SePlayer_o *SeManager__PlaySeLoop_42223796(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v15; // [xsp+8h] [xbp-58h]

  if ( (byte_4D30387 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30387 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v12 )
    return 0;
  if ( !assetData || !Instance )
    sub_1C93D2C(v12, v13);
  return SeManager__PlayLocal(
           (SeManager_o *)Instance,
           0,
           0,
           assetData->fields.name,
           objectName,
           volume,
           1,
           fadeinTime,
           0,
           0,
           ignorePreDelay,
           v15);
}


SePlayer_o *SeManager__PlaySe_42149596(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool notOverwrite,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x24
  _BOOL8 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v19; // [xsp+8h] [xbp-68h]

  if ( (byte_4D30383 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30383 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v16 )
    return 0;
  if ( !Instance )
    sub_1C93D2C(v16, v17);
  return SeManager__PlayLocal(
           (SeManager_o *)Instance,
           0,
           0,
           assetName,
           objectName,
           volume,
           0,
           fadeinTime,
           callbackFunc,
           notOverwrite,
           ignorePreDelay,
           v19);
}


SePlayer_o *SeManager__PlaySe_42223284(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x23
  _BOOL8 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v17; // [xsp+8h] [xbp-58h]

  if ( (byte_4D30384 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30384 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v14 )
    return 0;
  if ( !assetData || !Instance )
    sub_1C93D2C(v14, v15);
  return SeManager__PlayLocal(
           (SeManager_o *)Instance,
           0,
           0,
           assetData->fields.name,
           objectName,
           volume,
           0,
           fadeinTime,
           callbackFunc,
           0,
           ignorePreDelay,
           v17);
}


CriAtomSource_o *SeManager__PlaySystemSe(int32_t kind, bool ignorePreDelay, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D30376 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30376 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  return SeManager__PlaySystemSeLocal((SeManager_o *)Instance, kind, ignorePreDelay, v7);
}


// local variable allocation has failed, the output may be wrong!
CriAtomSource_o *SeManager__PlaySystemSeLocal(
        SeManager_o *this,
        int32_t kind,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SeManager_o *v10; // x20
  struct CriAtomSource_array *systemSeSources; // x8
  __int64 systemSeIdx; // x9
  CriAtomSource_o *v13; // x21
  struct CriAtomSource_array *v14; // x8
  int v15; // w9
  struct System_String_array *systemSeClipNames; // x8
  System_String_o *v17; // x23
  struct System_String_o *v18; // x1
  char v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  SeManager_c *v25; // x0
  const MethodInfo *v26; // x3
  CriAtomExPlayer_o *player_k__BackingField; // x24
  float PreDelayTime; // s0
  SoundManager_c *v29; // x0

  v10 = this;
  if ( (byte_4D3039E & 1) == 0 )
  {
    sub_1C93AD4(&SeManager_TypeInfo);
    this = (SeManager_o *)sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D3039E = 1;
  }
  systemSeSources = v10->fields.systemSeSources;
  if ( !systemSeSources )
    goto LABEL_36;
  systemSeIdx = v10->fields.systemSeIdx;
  if ( (unsigned int)systemSeIdx >= LODWORD(systemSeSources->max_length) )
LABEL_37:
    sub_1C93D34(this);
  v13 = systemSeSources->m_Items[systemSeIdx];
  if ( !v13 )
    goto LABEL_36;
  if ( v13->fields._loop )
  {
    this = (SeManager_o *)CriAtomSource__get_status(v13, 0);
    if ( (_DWORD)this == 1 || (this = (SeManager_o *)CriAtomSource__get_status(v13, 0), (_DWORD)this == 2) )
    {
      v14 = v10->fields.systemSeSources;
      v15 = (v10->fields.systemSeIdx + 1) % v10->fields.SYSTEM_SE_MAX;
      v10->fields.systemSeIdx = v15;
      if ( !v14 )
        goto LABEL_36;
      if ( (unsigned int)v15 >= LODWORD(v14->max_length) )
        goto LABEL_37;
      v13 = v14->m_Items[v15];
    }
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  if ( !byte_4D3042F )
  {
    sub_1C93AD4(&SeManager_TypeInfo);
    byte_4D3042F = 1;
  }
  this = (SeManager_o *)SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    this = (SeManager_o *)SeManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 23) + 32LL) )
  {
    systemSeClipNames = v10->fields.systemSeClipNames;
    if ( !systemSeClipNames )
      goto LABEL_36;
    if ( LODWORD(systemSeClipNames->max_length) > kind )
    {
      v17 = systemSeClipNames->m_Items[kind];
      v10->fields.systemSeIdx = (v10->fields.systemSeIdx + 1) % v10->fields.SYSTEM_SE_MAX;
      this = (SeManager_o *)SoundManager_TypeInfo;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        this = (SeManager_o *)SoundManager_TypeInfo;
      }
      if ( v13 )
      {
        v18 = *(struct System_String_o **)(*((_QWORD *)this + 23) + 8LL);
        v13->fields._cueSheet = v18;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v13->fields._cueSheet,
          (int32_t)v18,
          ignorePreDelay,
          (int32_t)method,
          v4,
          v5,
          v6,
          v7);
        v13->fields._cueName = v17;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v13->fields._cueName, (int32_t)v17, v19, v20, v21, v22, v23, v24);
        v25 = SeManager_TypeInfo;
        if ( !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
          v25 = SeManager_TypeInfo;
        }
        CriAtomSource__set_volume(v13, v25->static_fields->masterVolume, 0);
        this = (SeManager_o *)v13->fields._player_k__BackingField;
        if ( this )
        {
          CriAtomExPlayer__Stop((CriAtomExPlayer_o *)this, 1, 0);
          player_k__BackingField = v13->fields._player_k__BackingField;
          PreDelayTime = 0.0;
          v13->fields._loop = 0;
          if ( !ignorePreDelay )
          {
            v29 = SoundManager_TypeInfo;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              v29 = SoundManager_TypeInfo;
            }
            PreDelayTime = SeManager__GetPreDelayTime(v10, v29->static_fields->RESIDENT_RESOURCE_SOUND_NAME, v17, v26);
          }
          if ( player_k__BackingField )
          {
            CriAtomExPlayer__SetPreDelayTime(player_k__BackingField, PreDelayTime, 0);
            if ( kind == 3 )
              v13->fields._loop = 1;
            CriAtomSource__Play(v13, 0);
            return v13;
          }
        }
      }
LABEL_36:
      sub_1C93D2C(this, *(_QWORD *)&kind);
    }
    goto LABEL_37;
  }
  return v13;
}


SePlayer_o *SeManager__PlayVoice(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x7

  if ( (byte_4D30388 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30388 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_1C93D2C(v10, v11);
  return SeManager__PlaySeLocal((SeManager_o *)Instance, 1, name, volume, 0, 0.0, callbackFunc, 0, ignorePreDelay, v12);
}


SePlayer_o *SeManager__PlayVoice_42224296(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x23
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v15; // [xsp+8h] [xbp-58h]

  if ( (byte_4D30389 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30389 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v12 )
    return 0;
  if ( !Instance )
    sub_1C93D2C(v12, v13);
  return SeManager__PlayLocal(
           (SeManager_o *)Instance,
           1,
           0,
           assetName,
           objectName,
           volume,
           0,
           0.0,
           callbackFunc,
           0,
           ignorePreDelay,
           v15);
}


SePlayer_o *SeManager__PlayVoice_42224548(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x23
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v15; // [xsp+8h] [xbp-58h]

  if ( (byte_4D3038A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D3038A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v12 )
    return 0;
  if ( !assetData || !Instance )
    sub_1C93D2C(v12, v13);
  return SeManager__PlayLocal(
           (SeManager_o *)Instance,
           1,
           0,
           assetData->fields.name,
           objectName,
           volume,
           0,
           0.0,
           callbackFunc,
           0,
           ignorePreDelay,
           v15);
}


bool SeManager__ReleaseAudioSource(SeManager_o *this, SePlayer_o *player, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t seMax; // w8
  struct SePlayer_array *sePlayerStatusList; // x9
  SeManager_o *v10; // x19
  unsigned int v11; // w20
  __int64 i; // x21
  struct CriAtomSource_array *seSources; // x8

  seMax = this->fields.seMax;
  if ( seMax < 1 )
    return 0;
  sePlayerStatusList = this->fields.sePlayerStatusList;
  v10 = this;
  if ( !sePlayerStatusList )
    goto LABEL_13;
  v11 = 0;
  for ( i = 32; ; i += 8 )
  {
    if ( v11 >= LODWORD(sePlayerStatusList->max_length) )
      goto LABEL_12;
    if ( *(SePlayer_o **)((char *)&sePlayerStatusList->obj.klass + i) == player )
      break;
    if ( (int)++v11 >= seMax )
      return 0;
  }
  *(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)sePlayerStatusList + i), 0, (int32_t)method, v3, v4, v5, v6, v7);
  seSources = v10->fields.seSources;
  if ( !seSources )
    goto LABEL_13;
  if ( v11 >= LODWORD(seSources->max_length) )
LABEL_12:
    sub_1C93D34(this);
  this = *(SeManager_o **)((char *)&seSources->obj.klass + i);
  if ( !this )
LABEL_13:
    sub_1C93D2C(this, player);
  CriAtomSource__Stop((CriAtomSource_o *)this, 0);
  return 1;
}


void SeManager__ReleaseSe(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_4D30381 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30381 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !Instance && !v3 )
    sub_1C93D2C(v3, v4);
}


void SeManager__ReleaseSeLocal(SeManager_o *this, System_String_o *name, const MethodInfo *method)
{
  ;
}


void SeManager__Reset(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4D3036F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D3036F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C93D2C(v2, v3);
    SeManager__StopSeAllLocal((SeManager_o *)Instance, 0.0, v3);
  }
}


void SeManager__ResetLocal(SeManager_o *this, const MethodInfo *method)
{
  SeManager__StopSeAllLocal(this, 0.0, method);
}


void SeManager__SetMasterVolume(float volume, const MethodInfo *method)
{
  SeManager_c *v3; // x0
  struct SeManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x19
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4D30374 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SeManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30374 = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v3 = SeManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->masterVolume != volume )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    static_fields->masterVolume = volume;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v6 )
    {
      if ( !Instance )
        sub_1C93D2C(v6, v7);
      SeManager__SetMuteLocal((SeManager_o *)Instance, v7);
    }
  }
}


void SeManager__SetMute(bool isMute, const MethodInfo *method)
{
  SeManager_c *v3; // x0
  _BOOL4 v4; // w19
  struct SeManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4D30371 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SeManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30371 = 1;
  }
  v3 = SeManager_TypeInfo;
  v4 = isMute;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v3 = SeManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->isMute != v4 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    static_fields->isMute = v4;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v7 )
    {
      if ( !Instance )
        sub_1C93D2C(v7, v8);
      SeManager__SetMuteLocal((SeManager_o *)Instance, v8);
    }
  }
}


void SeManager__SetMuteLocal(SeManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SeManager_o *workSePlayerStatusList; // x0
  unsigned __int64 v5; // x20
  struct CriAtomSource_array *systemSeSources; // x8
  int32_t v7; // w20

  if ( (byte_4D3039C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    sub_1C93AD4(&SeManager_TypeInfo);
    byte_4D3039C = 1;
  }
  workSePlayerStatusList = (SeManager_o *)SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    workSePlayerStatusList = (SeManager_o *)SeManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)&workSePlayerStatusList[1].fields.SYSTEM_SE_MAX + 32LL) && this->fields.SYSTEM_SE_MAX >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      systemSeSources = this->fields.systemSeSources;
      if ( !systemSeSources )
        break;
      if ( v5 >= LODWORD(systemSeSources->max_length) )
        sub_1C93D34(workSePlayerStatusList);
      SeManager__StopLocal(workSePlayerStatusList, systemSeSources->m_Items[v5++], v2);
      if ( (__int64)v5 >= this->fields.SYSTEM_SE_MAX )
        goto LABEL_11;
    }
LABEL_16:
    sub_1C93D2C(workSePlayerStatusList, method);
  }
LABEL_11:
  workSePlayerStatusList = (SeManager_o *)this->fields.workSePlayerStatusList;
  if ( workSePlayerStatusList )
  {
    v7 = LODWORD(workSePlayerStatusList->fields.m_CancellationTokenSource) - 1;
    if ( v7 >= 0 )
    {
      do
      {
        workSePlayerStatusList = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                                                  v7,
                                                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
        if ( !workSePlayerStatusList )
          break;
        SePlayer__MuteSe((SePlayer_o *)workSePlayerStatusList, method);
        if ( --v7 < 0 )
          return;
        workSePlayerStatusList = (SeManager_o *)this->fields.workSePlayerStatusList;
      }
      while ( workSePlayerStatusList );
      goto LABEL_16;
    }
  }
}


void SeManager__SetPitchSe(System_String_o *name, float pitch, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  SePlayer_o *SePlayer_42230628; // x0

  if ( (byte_4D30395 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30395 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C93D2C(v6, v7);
    SePlayer_42230628 = SeManager__GetSePlayer_42230628((SeManager_o *)Instance, name, v8);
    if ( SePlayer_42230628 )
    {
      SePlayer_42230628->fields.pitchValue = pitch;
      SePlayer_42230628->fields.changePitchRequest = 1;
    }
  }
}


void SeManager__SetPitchSeLocal(SeManager_o *this, System_String_o *name, float pitch, const MethodInfo *method)
{
  SePlayer_o *SePlayer_42230628; // x0

  SePlayer_42230628 = SeManager__GetSePlayer_42230628(this, name, method);
  if ( SePlayer_42230628 )
  {
    SePlayer_42230628->fields.pitchValue = pitch;
    SePlayer_42230628->fields.changePitchRequest = 1;
  }
}


void SeManager__SetVoiceMasterVolume(float volume, const MethodInfo *method)
{
  SeManager_c *v3; // x0
  struct SeManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x19
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4D30375 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SeManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30375 = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v3 = SeManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->masterVoiceVolume != volume )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    static_fields->masterVoiceVolume = volume;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v6 )
    {
      if ( !Instance )
        sub_1C93D2C(v6, v7);
      SeManager__SetMuteLocal((SeManager_o *)Instance, v7);
    }
  }
}


void SeManager__StopLocal(SeManager_o *this, CriAtomSource_o *player, const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D303A6 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D303A6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)player, 0, 0);
  if ( v4 )
  {
    if ( !player )
      sub_1C93D2C(v4, v5);
    if ( CriAtomSource__get_status(player, 0) == 2 )
      CriAtomSource__Stop(player, 0);
  }
}


void SeManager__StopSe(int32_t num, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4D3038B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D3038B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C93D2C(v6, v7);
    SeManager__StopSeLocal((SeManager_o *)Instance, num, fadeoutTime, v8);
  }
}


void SeManager__StopSeAll(float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D30391 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30391 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C93D2C(v4, v5);
    SeManager__StopSeAllLocal((SeManager_o *)Instance, fadeoutTime, v5);
  }
}


void SeManager__StopSeAllLocal(SeManager_o *this, float fadeoutTime, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *workSePlayerStatusList; // x0
  int32_t v6; // w20

  if ( (byte_4D303A8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4D303A8 = 1;
  }
  workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_8;
  v6 = workSePlayerStatusList->fields._size - 1;
  if ( v6 >= 0 )
  {
    do
    {
      workSePlayerStatusList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              workSePlayerStatusList,
                                                                              v6,
                                                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      SePlayer__StopSe((SePlayer_o *)workSePlayerStatusList, fadeoutTime, method);
      if ( --v6 < 0 )
        return;
      workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
    }
    while ( workSePlayerStatusList );
LABEL_8:
    sub_1C93D2C(workSePlayerStatusList, method);
  }
}


void SeManager__StopSeLocal(SeManager_o *this, int32_t num, float fadeoutTime, const MethodInfo *method)
{
  SePlayer_o *SePlayer; // x0
  const MethodInfo *v6; // x1

  SePlayer = SeManager__GetSePlayer(this, num, method);
  if ( SePlayer )
    SePlayer__StopSe(SePlayer, fadeoutTime, v6);
}


void SeManager__StopSeLocal_42225048(
        SeManager_o *this,
        System_String_o *name,
        float fadeoutTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_42230628; // x0
  const MethodInfo *v6; // x1

  SePlayer_42230628 = SeManager__GetSePlayer_42230628(this, name, method);
  if ( SePlayer_42230628 )
    SePlayer__StopSe(SePlayer_42230628, fadeoutTime, v6);
}


void SeManager__StopSeLocal_42225300(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float fadeoutTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_42230804; // x0
  const MethodInfo *v7; // x1

  SePlayer_42230804 = SeManager__GetSePlayer_42230804(this, assetName, objectName, method);
  if ( SePlayer_42230804 )
    SePlayer__StopSe(SePlayer_42230804, fadeoutTime, v7);
}


void SeManager__StopSe_42151400(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4D3038C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D3038C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C93D2C(v6, v7);
    SeManager__StopSeLocal_42225048((SeManager_o *)Instance, name, fadeoutTime, v8);
  }
}


void SeManager__StopSe_42225096(
        System_String_o *assetName,
        System_String_o *objectName,
        float fadeoutTime,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4D3038D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D3038D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C93D2C(v8, v9);
    SeManager__StopSeLocal_42225300((SeManager_o *)Instance, assetName, objectName, fadeoutTime, v10);
  }
}


void SeManager__StopSe_42225348(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4D3038E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D3038E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v10 )
  {
    if ( !Instance )
      sub_1C93D2C(v10, v11);
    SeManager__ChangeVolumeSeLocal_42225560((SeManager_o *)Instance, assetName, objectName, volume, fadeTime, v12);
  }
}


void SeManager__StopSystemSe(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4D3038F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D3038F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C93D2C(v2, v3);
    SeManager__StopSystemSeLocal((SeManager_o *)Instance, v3);
  }
}


void SeManager__StopSystemSeLocal(SeManager_o *this, const MethodInfo *method)
{
  SeManager_o *v2; // x19
  __int64 v3; // x20
  struct CriAtomSource_array *systemSeSources; // x8

  if ( this->fields.SYSTEM_SE_MAX >= 1 )
  {
    v2 = this;
    v3 = 0;
    do
    {
      systemSeSources = v2->fields.systemSeSources;
      if ( !systemSeSources )
        goto LABEL_8;
      if ( (unsigned int)v3 >= LODWORD(systemSeSources->max_length) )
        sub_1C93D34(this);
      this = (SeManager_o *)systemSeSources->m_Items[v3];
      if ( !this )
LABEL_8:
        sub_1C93D2C(this, method);
      CriAtomSource__Stop((CriAtomSource_o *)this, 0);
      ++v3;
    }
    while ( (int)v3 < v2->fields.SYSTEM_SE_MAX );
  }
}


void SeManager__StopVoice(
        System_String_o *assetName,
        System_String_o *objectName,
        float fadeoutTime,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4D30390 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30390 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C93D2C(v8, v9);
    SeManager__StopVoiceLocal((SeManager_o *)Instance, assetName, objectName, fadeoutTime, v10);
  }
}


void SeManager__StopVoiceAll(float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D30392 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D30392 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C93D2C(v4, v5);
    SeManager__StopVoiceAllLocal((SeManager_o *)Instance, fadeoutTime, v5);
  }
}


void SeManager__StopVoiceAllLocal(SeManager_o *this, float fadeoutTime, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *workSePlayerStatusList; // x0
  int32_t v6; // w20

  if ( (byte_4D303A9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4D303A9 = 1;
  }
  workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_10;
  v6 = workSePlayerStatusList->fields._size - 1;
  if ( v6 >= 0 )
  {
    do
    {
      workSePlayerStatusList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              workSePlayerStatusList,
                                                                              v6,
                                                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      if ( LODWORD(workSePlayerStatusList->fields._items) == 1 )
        SePlayer__StopSe((SePlayer_o *)workSePlayerStatusList, fadeoutTime, method);
      if ( --v6 < 0 )
        return;
      workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
    }
    while ( workSePlayerStatusList );
LABEL_10:
    sub_1C93D2C(workSePlayerStatusList, method);
  }
}


void SeManager__StopVoiceLocal(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float fadeoutTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4
  SePlayer_o *SePlayer_42231220; // x0
  const MethodInfo *v8; // x1

  SePlayer_42231220 = SeManager__GetSePlayer_42231220(this, 1, assetName, objectName, v5);
  if ( SePlayer_42231220 )
    SePlayer__StopSe(SePlayer_42231220, fadeoutTime, v8);
}


System_String_array *SeManager__getLoadSeNameList(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4D3036C & 1) == 0 )
  {
    sub_1C93AD4(&SeManager_TypeInfo);
    byte_4D3036C = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v1 = SeManager_TypeInfo;
  }
  return v1->static_fields->LoadSeList;
}


bool SeManager__get_IsMute(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4D30370 & 1) == 0 )
  {
    sub_1C93AD4(&SeManager_TypeInfo);
    byte_4D30370 = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v1 = SeManager_TypeInfo;
  }
  return v1->static_fields->isMute;
}


float SeManager__get_MasterVoiceVolume(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4D30373 & 1) == 0 )
  {
    sub_1C93AD4(&SeManager_TypeInfo);
    byte_4D30373 = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v1 = SeManager_TypeInfo;
  }
  return v1->static_fields->masterVoiceVolume;
}


float SeManager__get_MasterVolume(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4D30372 & 1) == 0 )
  {
    sub_1C93AD4(&SeManager_TypeInfo);
    byte_4D30372 = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v1 = SeManager_TypeInfo;
  }
  return v1->static_fields->masterVolume;
}


void SeManager__PlayCommonSeWithDelay_d__50___ctor(
        SeManager__PlayCommonSeWithDelay_d__50_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SeManager__PlayCommonSeWithDelay_d__50__MoveNext(
        SeManager__PlayCommonSeWithDelay_d__50_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t _1__state; // w8
  int32_t kind; // w20
  _BOOL4 ignorePreDelay; // w19
  int32_t i_5__2; // w8
  Il2CppObject **v14; // x19
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v16; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D303B0 & 1) == 0 )
  {
    sub_1C93AD4(&SeManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4D303B0 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    kind = this->fields.kind;
    ignorePreDelay = this->fields.ignorePreDelay;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(kind, ignorePreDelay, v2);
    return 0;
  }
  if ( _1__state == 1 )
  {
    i_5__2 = this->fields._i_5__2;
    this->fields.__1__state = -1;
    _1__state = i_5__2 + 1;
    this->fields._i_5__2 = _1__state;
    goto LABEL_12;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  this->fields._i_5__2 = 0;
LABEL_12:
  if ( _1__state >= this->fields.waitFrameCount )
  {
    delay = this->fields.delay;
    v16 = (UnityEngine_WaitForSeconds_o *)sub_1C93D20(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v16, delay, 0);
    this->fields.__2__current = (Il2CppObject *)v16;
    p__2__current = &this->fields.__2__current;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v16, v18, v19, v20, v21, v22, v23);
    *((_DWORD *)p__2__current - 2) = 2;
  }
  else
  {
    this->fields.__2__current = 0;
    v14 = &this->fields.__2__current;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)v14, 0, (int32_t)v2, v3, v4, v5, v6, v7);
    *((_DWORD *)v14 - 2) = 1;
  }
  return 1;
}


Il2CppObject *SeManager__PlayCommonSeWithDelay_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SeManager__PlayCommonSeWithDelay_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SeManager__PlayCommonSeWithDelay_d__50__System_Collections_IEnumerator_Reset(
        SeManager__PlayCommonSeWithDelay_d__50_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_SeManager__PlayCommonSeWithDelay_d__50_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *SeManager__PlayCommonSeWithDelay_d__50__System_Collections_IEnumerator_get_Current(
        SeManager__PlayCommonSeWithDelay_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SeManager__PlayCommonSeWithDelay_d__50__System_IDisposable_Dispose(
        SeManager__PlayCommonSeWithDelay_d__50_o *this,
        const MethodInfo *method)
{
  ;
}


void SeManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D303AD & 1) == 0 )
  {
    sub_1C93AD4(&SeManager___c_TypeInfo);
    byte_4D303AD = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(SeManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SeManager___c_TypeInfo->static_fields->__9 = (struct SeManager___c_o *)v1;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)SeManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
}


void SeManager___c___ctor(SeManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *SeManager___c___LoadEndResidentSeAsset_b__31_0(
        SeManager___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_4D303AE & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12752/*"Se/"*/);
    byte_4D303AE = 1;
  }
  return System_String__Concat_64425724((System_String_o *)StringLiteral_12752/*"Se/"*/, str, 0);
}


System_String_o *SeManager___c___LoadEndResidentSeAsset_b__31_1(
        SeManager___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_4D303AF & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_11455/*"ResidentSE/"*/);
    byte_4D303AF = 1;
  }
  return System_String__Concat_64425724((System_String_o *)StringLiteral_11455/*"ResidentSE/"*/, str, 0);
}