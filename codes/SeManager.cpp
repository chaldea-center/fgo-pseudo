void SeManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x19
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct SeManager_StaticFields *static_fields; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct SeManager_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct SeManager_StaticFields *v43; // x8

  if ( (byte_593801B & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_11996/*"SE"*/);
    sub_21FFC50(&StringLiteral_11842/*"ResidentSE"*/);
    byte_593801B = 1;
  }
  v1 = sub_21FFD10(string___TypeInfo, 2);
  if ( !v1 )
    sub_21FFECC(0, v2);
  v9 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v10 = StringLiteral_11842/*"ResidentSE"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_11842/*"ResidentSE"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v1 + 32), v10, v3, v4, v5, v6, v7, v8),
        (*(_DWORD *)(v9 + 24) & 0xFFFFFFFE) == 0) )
  {
    sub_21FFED4(v1);
  }
  v17 = StringLiteral_11996/*"SE"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_11996/*"SE"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), v17, v11, v12, v13, v14, v15, v16);
  SeManager_TypeInfo->static_fields->LoadSeList = (struct System_String_array *)v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)SeManager_TypeInfo->static_fields, v9, v18, v19, v20, v21, v22, v23);
  static_fields = SeManager_TypeInfo->static_fields;
  static_fields->seAssetBundleList = 0;
  static_fields = (struct SeManager_StaticFields *)((char *)static_fields + 16);
  static_fields[-1].loadCounter = 1065353216;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)static_fields, 0, v25, v26, v27, v28, v29, v30);
  v31 = SeManager_TypeInfo->static_fields;
  v31->residentSeAssetBundleList = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v31->residentSeAssetBundleList, 0, v32, v33, v34, v35, v36, v37);
  __asm { FMOV            V0.2S, #1.0 }
  v43 = SeManager_TypeInfo->static_fields;
  v43->isMute = 0;
  *(_QWORD *)&v43->masterVolume = _D0;
  v43->IsBusy = 0;
}


void SeManager___ctor(SeManager_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x20
  int32_t v13; // w1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t v27; // w1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t v34; // w1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  int32_t v55; // w1
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  __int64 v68; // x20
  int32_t v69; // w1
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  int32_t v76; // w1
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  int32_t v83; // w1
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  int32_t v90; // w1
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  int32_t v97; // w1
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  int32_t v104; // w1
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  int32_t v111; // w1
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  int32_t v118; // w1
  System_String_o *v119; // x2
  System_String_o *v120; // x3
  int32_t v121; // w4
  int32_t v122; // w5
  bool v123; // w6
  bool v124; // w7
  int32_t v125; // w1
  System_String_o *v126; // x2
  System_String_o *v127; // x3
  int32_t v128; // w4
  int32_t v129; // w5
  bool v130; // w6
  bool v131; // w7
  int32_t v132; // w1
  System_String_o *v133; // x2
  System_String_o *v134; // x3
  int32_t v135; // w4
  int32_t v136; // w5
  bool v137; // w6
  bool v138; // w7
  int32_t v139; // w1
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  int32_t v146; // w1
  System_String_o *v147; // x2
  System_String_o *v148; // x3
  int32_t v149; // w4
  int32_t v150; // w5
  bool v151; // w6
  bool v152; // w7
  System_String_o *v153; // x2
  System_String_o *v154; // x3
  int32_t v155; // w4
  int32_t v156; // w5
  bool v157; // w6
  bool v158; // w7
  __int64 v159; // x20
  int32_t v160; // w1
  System_String_o *v161; // x2
  System_String_o *v162; // x3
  int32_t v163; // w4
  int32_t v164; // w5
  bool v165; // w6
  bool v166; // w7
  int32_t v167; // w1
  System_String_o *v168; // x2
  System_String_o *v169; // x3
  int32_t v170; // w4
  int32_t v171; // w5
  bool v172; // w6
  bool v173; // w7
  int32_t v174; // w1
  System_String_o *v175; // x2
  System_String_o *v176; // x3
  int32_t v177; // w4
  int32_t v178; // w5
  bool v179; // w6
  bool v180; // w7
  int32_t v181; // w1
  System_String_o *v182; // x2
  System_String_o *v183; // x3
  int32_t v184; // w4
  int32_t v185; // w5
  bool v186; // w6
  bool v187; // w7
  int32_t v188; // w1
  System_String_o *v189; // x2
  System_String_o *v190; // x3
  int32_t v191; // w4
  int32_t v192; // w5
  bool v193; // w6
  bool v194; // w7
  int32_t v195; // w1
  System_String_o *v196; // x2
  System_String_o *v197; // x3
  int32_t v198; // w4
  int32_t v199; // w5
  bool v200; // w6
  bool v201; // w7
  int32_t v202; // w1
  System_String_o *v203; // x2
  System_String_o *v204; // x3
  int32_t v205; // w4
  int32_t v206; // w5
  bool v207; // w6
  bool v208; // w7
  int32_t v209; // w1
  System_String_o *v210; // x2
  System_String_o *v211; // x3
  int32_t v212; // w4
  int32_t v213; // w5
  bool v214; // w6
  bool v215; // w7
  int32_t v216; // w1
  System_String_o *v217; // x2
  System_String_o *v218; // x3
  int32_t v219; // w4
  int32_t v220; // w5
  bool v221; // w6
  bool v222; // w7
  int32_t v223; // w1
  System_String_o *v224; // x2
  System_String_o *v225; // x3
  int32_t v226; // w4
  int32_t v227; // w5
  bool v228; // w6
  bool v229; // w7
  int32_t v230; // w1
  System_String_o *v231; // x2
  System_String_o *v232; // x3
  int32_t v233; // w4
  int32_t v234; // w5
  bool v235; // w6
  bool v236; // w7
  int32_t v237; // w1
  System_String_o *v238; // x2
  System_String_o *v239; // x3
  int32_t v240; // w4
  int32_t v241; // w5
  bool v242; // w6
  bool v243; // w7
  int32_t v244; // w1
  System_String_o *v245; // x2
  System_String_o *v246; // x3
  int32_t v247; // w4
  int32_t v248; // w5
  bool v249; // w6
  bool v250; // w7
  int32_t v251; // w1
  System_String_o *v252; // x2
  System_String_o *v253; // x3
  int32_t v254; // w4
  int32_t v255; // w5
  bool v256; // w6
  bool v257; // w7
  int32_t v258; // w1
  System_String_o *v259; // x2
  System_String_o *v260; // x3
  int32_t v261; // w4
  int32_t v262; // w5
  bool v263; // w6
  bool v264; // w7
  int32_t v265; // w1
  System_String_o *v266; // x2
  System_String_o *v267; // x3
  int32_t v268; // w4
  int32_t v269; // w5
  bool v270; // w6
  bool v271; // w7
  int32_t v272; // w1
  System_String_o *v273; // x2
  System_String_o *v274; // x3
  int32_t v275; // w4
  int32_t v276; // w5
  bool v277; // w6
  bool v278; // w7
  int32_t v279; // w1
  System_String_o *v280; // x2
  System_String_o *v281; // x3
  int32_t v282; // w4
  int32_t v283; // w5
  bool v284; // w6
  bool v285; // w7
  int32_t v286; // w1
  System_String_o *v287; // x2
  System_String_o *v288; // x3
  int32_t v289; // w4
  int32_t v290; // w5
  bool v291; // w6
  bool v292; // w7
  int32_t v293; // w1
  System_String_o *v294; // x2
  System_String_o *v295; // x3
  int32_t v296; // w4
  int32_t v297; // w5
  bool v298; // w6
  bool v299; // w7
  int32_t v300; // w1
  System_String_o *v301; // x2
  System_String_o *v302; // x3
  int32_t v303; // w4
  int32_t v304; // w5
  bool v305; // w6
  bool v306; // w7
  int32_t v307; // w1
  System_String_o *v308; // x2
  System_String_o *v309; // x3
  int32_t v310; // w4
  int32_t v311; // w5
  bool v312; // w6
  bool v313; // w7
  int32_t v314; // w1
  System_String_o *v315; // x2
  System_String_o *v316; // x3
  int32_t v317; // w4
  int32_t v318; // w5
  bool v319; // w6
  bool v320; // w7
  int32_t v321; // w1
  System_String_o *v322; // x2
  System_String_o *v323; // x3
  int32_t v324; // w4
  int32_t v325; // w5
  bool v326; // w6
  bool v327; // w7
  int32_t v328; // w1
  System_String_o *v329; // x2
  System_String_o *v330; // x3
  int32_t v331; // w4
  int32_t v332; // w5
  bool v333; // w6
  bool v334; // w7
  int32_t v335; // w1
  System_String_o *v336; // x2
  System_String_o *v337; // x3
  int32_t v338; // w4
  int32_t v339; // w5
  bool v340; // w6
  bool v341; // w7
  int32_t v342; // w1
  System_String_o *v343; // x2
  System_String_o *v344; // x3
  int32_t v345; // w4
  int32_t v346; // w5
  bool v347; // w6
  bool v348; // w7
  int32_t v349; // w1
  System_String_o *v350; // x2
  System_String_o *v351; // x3
  int32_t v352; // w4
  int32_t v353; // w5
  bool v354; // w6
  bool v355; // w7
  int32_t v356; // w1
  System_String_o *v357; // x2
  System_String_o *v358; // x3
  int32_t v359; // w4
  int32_t v360; // w5
  bool v361; // w6
  bool v362; // w7
  int32_t v363; // w1
  System_String_o *v364; // x2
  System_String_o *v365; // x3
  int32_t v366; // w4
  int32_t v367; // w5
  bool v368; // w6
  bool v369; // w7

  if ( (byte_593801A & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager___ctor__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_25119/*"sy4"*/);
    sub_21FFC50(&StringLiteral_17523/*"ar102"*/);
    sub_21FFC50(&StringLiteral_17663/*"ba17"*/);
    sub_21FFC50(&StringLiteral_25314/*"ti1"*/);
    sub_21FFC50(&StringLiteral_25123/*"sy8"*/);
    sub_21FFC50(&StringLiteral_17524/*"ar112"*/);
    sub_21FFC50(&StringLiteral_17658/*"ba11"*/);
    sub_21FFC50(&StringLiteral_25120/*"sy5"*/);
    sub_21FFC50(&StringLiteral_17656/*"ba10"*/);
    sub_21FFC50(&StringLiteral_18789/*"co1"*/);
    sub_21FFC50(&StringLiteral_25121/*"sy6"*/);
    sub_21FFC50(&StringLiteral_17666/*"ba2"*/);
    sub_21FFC50(&StringLiteral_17672/*"ba3"*/);
    sub_21FFC50(&StringLiteral_17661/*"ba15"*/);
    sub_21FFC50(&StringLiteral_17671/*"ba24"*/);
    sub_21FFC50(&StringLiteral_25557/*"um2"*/);
    sub_21FFC50(&StringLiteral_22652/*"mis1"*/);
    sub_21FFC50(&StringLiteral_25122/*"sy7"*/);
    sub_21FFC50(&StringLiteral_17667/*"ba20"*/);
    sub_21FFC50(&StringLiteral_17655/*"ba1"*/);
    sub_21FFC50(&StringLiteral_17665/*"ba19"*/);
    sub_21FFC50(&StringLiteral_25124/*"sy9"*/);
    sub_21FFC50(&StringLiteral_17529/*"ar2"*/);
    sub_21FFC50(&StringLiteral_17670/*"ba23"*/);
    sub_21FFC50(&StringLiteral_26177/*"wo11"*/);
    sub_21FFC50(&StringLiteral_17674/*"ba38"*/);
    sub_21FFC50(&StringLiteral_25117/*"sy2"*/);
    sub_21FFC50(&StringLiteral_25269/*"testSe"*/);
    sub_21FFC50(&StringLiteral_17673/*"ba30"*/);
    sub_21FFC50(&StringLiteral_25556/*"um1"*/);
    sub_21FFC50(&StringLiteral_17676/*"ba7"*/);
    sub_21FFC50(&StringLiteral_17668/*"ba21"*/);
    sub_21FFC50(&StringLiteral_17664/*"ba18"*/);
    sub_21FFC50(&StringLiteral_25115/*"sy1"*/);
    sub_21FFC50(&StringLiteral_23988/*"qev79"*/);
    sub_21FFC50(&StringLiteral_17660/*"ba13"*/);
    sub_21FFC50(&StringLiteral_17662/*"ba16"*/);
    sub_21FFC50(&StringLiteral_17659/*"ba12"*/);
    sub_21FFC50(&StringLiteral_17669/*"ba22"*/);
    sub_21FFC50(&StringLiteral_26176/*"wo1"*/);
    sub_21FFC50(&StringLiteral_25118/*"sy3"*/);
    sub_21FFC50(&StringLiteral_25116/*"sy1a"*/);
    sub_21FFC50(&StringLiteral_17657/*"ba10a"*/);
    byte_593801A = 1;
  }
  v3 = string___TypeInfo;
  this->fields.SYSTEM_SE_MAX = 3;
  this->fields.seMax = 8;
  *(int32x2_t *)&this->fields.preDelayTimeForStream = vdup_n_s32(0x43270000u);
  v4 = sub_21FFD10(v3, 7);
  if ( !v4 )
    goto LABEL_57;
  v12 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_56;
  v13 = StringLiteral_25115/*"sy1"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_25115/*"sy1"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 32), v13, v6, v7, v8, v9, v10, v11);
  if ( (*(_DWORD *)(v12 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_56;
  v20 = StringLiteral_25116/*"sy1a"*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_25116/*"sy1a"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 40), v20, v14, v15, v16, v17, v18, v19);
  if ( *(_DWORD *)(v12 + 24) <= 2u )
    goto LABEL_56;
  v27 = StringLiteral_25117/*"sy2"*/;
  *(_QWORD *)(v12 + 48) = StringLiteral_25117/*"sy2"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 48), v27, v21, v22, v23, v24, v25, v26);
  if ( (*(_DWORD *)(v12 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_56;
  v34 = StringLiteral_25118/*"sy3"*/;
  *(_QWORD *)(v12 + 56) = StringLiteral_25118/*"sy3"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 56), v34, v28, v29, v30, v31, v32, v33);
  if ( *(_DWORD *)(v12 + 24) <= 4u )
    goto LABEL_56;
  v41 = StringLiteral_25124/*"sy9"*/;
  *(_QWORD *)(v12 + 64) = StringLiteral_25124/*"sy9"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 64), v41, v35, v36, v37, v38, v39, v40);
  if ( *(_DWORD *)(v12 + 24) <= 5u )
    goto LABEL_56;
  v48 = StringLiteral_25314/*"ti1"*/;
  *(_QWORD *)(v12 + 72) = StringLiteral_25314/*"ti1"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 72), v48, v42, v43, v44, v45, v46, v47);
  if ( *(_DWORD *)(v12 + 24) <= 6u )
    goto LABEL_56;
  v55 = StringLiteral_17664/*"ba18"*/;
  *(_QWORD *)(v12 + 80) = StringLiteral_17664/*"ba18"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 80), v55, v49, v50, v51, v52, v53, v54);
  this->fields.ignorePreDelayArray = (struct System_String_array *)v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.ignorePreDelayArray, v12, v56, v57, v58, v59, v60, v61);
  v4 = sub_21FFD10(string___TypeInfo, 12);
  if ( !v4 )
    goto LABEL_57;
  v68 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_56;
  v69 = StringLiteral_25115/*"sy1"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_25115/*"sy1"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 32), v69, v62, v63, v64, v65, v66, v67);
  if ( (*(_DWORD *)(v68 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_56;
  v76 = StringLiteral_25117/*"sy2"*/;
  *(_QWORD *)(v68 + 40) = StringLiteral_25117/*"sy2"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v68 + 40), v76, v70, v71, v72, v73, v74, v75);
  if ( *(_DWORD *)(v68 + 24) <= 2u )
    goto LABEL_56;
  v83 = StringLiteral_25118/*"sy3"*/;
  *(_QWORD *)(v68 + 48) = StringLiteral_25118/*"sy3"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v68 + 48), v83, v77, v78, v79, v80, v81, v82);
  if ( (*(_DWORD *)(v68 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_56;
  v90 = StringLiteral_25119/*"sy4"*/;
  *(_QWORD *)(v68 + 56) = StringLiteral_25119/*"sy4"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v68 + 56), v90, v84, v85, v86, v87, v88, v89);
  if ( *(_DWORD *)(v68 + 24) <= 4u )
    goto LABEL_56;
  v97 = StringLiteral_25120/*"sy5"*/;
  *(_QWORD *)(v68 + 64) = StringLiteral_25120/*"sy5"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v68 + 64), v97, v91, v92, v93, v94, v95, v96);
  if ( *(_DWORD *)(v68 + 24) <= 5u )
    goto LABEL_56;
  v104 = StringLiteral_25121/*"sy6"*/;
  *(_QWORD *)(v68 + 72) = StringLiteral_25121/*"sy6"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v68 + 72), v104, v98, v99, v100, v101, v102, v103);
  if ( *(_DWORD *)(v68 + 24) <= 6u )
    goto LABEL_56;
  v111 = StringLiteral_25122/*"sy7"*/;
  *(_QWORD *)(v68 + 80) = StringLiteral_25122/*"sy7"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v68 + 80), v111, v105, v106, v107, v108, v109, v110);
  if ( (*(_DWORD *)(v68 + 24) & 0xFFFFFFF8) == 0 )
    goto LABEL_56;
  v118 = StringLiteral_25123/*"sy8"*/;
  *(_QWORD *)(v68 + 88) = StringLiteral_25123/*"sy8"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v68 + 88), v118, v112, v113, v114, v115, v116, v117);
  if ( *(_DWORD *)(v68 + 24) <= 8u )
    goto LABEL_56;
  v125 = StringLiteral_25116/*"sy1a"*/;
  *(_QWORD *)(v68 + 96) = StringLiteral_25116/*"sy1a"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v68 + 96), v125, v119, v120, v121, v122, v123, v124);
  if ( *(_DWORD *)(v68 + 24) <= 9u
    || (v132 = StringLiteral_25556/*"um1"*/,
        *(_QWORD *)(v68 + 104) = StringLiteral_25556/*"um1"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v68 + 104), v132, v126, v127, v128, v129, v130, v131),
        *(_DWORD *)(v68 + 24) <= 0xAu)
    || (v139 = StringLiteral_25557/*"um2"*/,
        *(_QWORD *)(v68 + 112) = StringLiteral_25557/*"um2"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v68 + 112), v139, v133, v134, v135, v136, v137, v138),
        *(_DWORD *)(v68 + 24) <= 0xBu) )
  {
LABEL_56:
    sub_21FFED4(v4);
  }
  v146 = StringLiteral_25124/*"sy9"*/;
  *(_QWORD *)(v68 + 120) = StringLiteral_25124/*"sy9"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v68 + 120), v146, v140, v141, v142, v143, v144, v145);
  this->fields.systemSeClipNames = (struct System_String_array *)v68;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.systemSeClipNames,
    v68,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  v4 = sub_21FFD10(string___TypeInfo, 30);
  if ( !v4 )
LABEL_57:
    sub_21FFECC(v4, v5);
  v159 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_56;
  v160 = StringLiteral_17655/*"ba1"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_17655/*"ba1"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 32), v160, v153, v154, v155, v156, v157, v158);
  if ( (*(_DWORD *)(v159 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_56;
  v167 = StringLiteral_17666/*"ba2"*/;
  *(_QWORD *)(v159 + 40) = StringLiteral_17666/*"ba2"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 40), v167, v161, v162, v163, v164, v165, v166);
  if ( *(_DWORD *)(v159 + 24) <= 2u )
    goto LABEL_56;
  v174 = StringLiteral_17672/*"ba3"*/;
  *(_QWORD *)(v159 + 48) = StringLiteral_17672/*"ba3"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 48), v174, v168, v169, v170, v171, v172, v173);
  if ( (*(_DWORD *)(v159 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_56;
  v181 = StringLiteral_17676/*"ba7"*/;
  *(_QWORD *)(v159 + 56) = StringLiteral_17676/*"ba7"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 56), v181, v175, v176, v177, v178, v179, v180);
  if ( *(_DWORD *)(v159 + 24) <= 4u )
    goto LABEL_56;
  v188 = StringLiteral_17656/*"ba10"*/;
  *(_QWORD *)(v159 + 64) = StringLiteral_17656/*"ba10"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 64), v188, v182, v183, v184, v185, v186, v187);
  if ( *(_DWORD *)(v159 + 24) <= 5u )
    goto LABEL_56;
  v195 = StringLiteral_17657/*"ba10a"*/;
  *(_QWORD *)(v159 + 72) = StringLiteral_17657/*"ba10a"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 72), v195, v189, v190, v191, v192, v193, v194);
  if ( *(_DWORD *)(v159 + 24) <= 6u )
    goto LABEL_56;
  v202 = StringLiteral_17658/*"ba11"*/;
  *(_QWORD *)(v159 + 80) = StringLiteral_17658/*"ba11"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 80), v202, v196, v197, v198, v199, v200, v201);
  if ( (*(_DWORD *)(v159 + 24) & 0xFFFFFFF8) == 0 )
    goto LABEL_56;
  v209 = StringLiteral_17659/*"ba12"*/;
  *(_QWORD *)(v159 + 88) = StringLiteral_17659/*"ba12"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 88), v209, v203, v204, v205, v206, v207, v208);
  if ( *(_DWORD *)(v159 + 24) <= 8u )
    goto LABEL_56;
  v216 = StringLiteral_17662/*"ba16"*/;
  *(_QWORD *)(v159 + 96) = StringLiteral_17662/*"ba16"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 96), v216, v210, v211, v212, v213, v214, v215);
  if ( *(_DWORD *)(v159 + 24) <= 9u )
    goto LABEL_56;
  v223 = StringLiteral_17664/*"ba18"*/;
  *(_QWORD *)(v159 + 104) = StringLiteral_17664/*"ba18"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 104), v223, v217, v218, v219, v220, v221, v222);
  if ( *(_DWORD *)(v159 + 24) <= 0xAu )
    goto LABEL_56;
  v230 = StringLiteral_17665/*"ba19"*/;
  *(_QWORD *)(v159 + 112) = StringLiteral_17665/*"ba19"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 112), v230, v224, v225, v226, v227, v228, v229);
  if ( *(_DWORD *)(v159 + 24) <= 0xBu )
    goto LABEL_56;
  v237 = StringLiteral_17667/*"ba20"*/;
  *(_QWORD *)(v159 + 120) = StringLiteral_17667/*"ba20"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 120), v237, v231, v232, v233, v234, v235, v236);
  if ( *(_DWORD *)(v159 + 24) <= 0xCu )
    goto LABEL_56;
  v244 = StringLiteral_17668/*"ba21"*/;
  *(_QWORD *)(v159 + 128) = StringLiteral_17668/*"ba21"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 128), v244, v238, v239, v240, v241, v242, v243);
  if ( *(_DWORD *)(v159 + 24) <= 0xDu )
    goto LABEL_56;
  v251 = StringLiteral_17669/*"ba22"*/;
  *(_QWORD *)(v159 + 136) = StringLiteral_17669/*"ba22"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 136), v251, v245, v246, v247, v248, v249, v250);
  if ( *(_DWORD *)(v159 + 24) <= 0xEu )
    goto LABEL_56;
  v258 = StringLiteral_17670/*"ba23"*/;
  *(_QWORD *)(v159 + 144) = StringLiteral_17670/*"ba23"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 144), v258, v252, v253, v254, v255, v256, v257);
  if ( (*(_DWORD *)(v159 + 24) & 0xFFFFFFF0) == 0 )
    goto LABEL_56;
  v265 = StringLiteral_17671/*"ba24"*/;
  *(_QWORD *)(v159 + 152) = StringLiteral_17671/*"ba24"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 152), v265, v259, v260, v261, v262, v263, v264);
  if ( *(_DWORD *)(v159 + 24) <= 0x10u )
    goto LABEL_56;
  v272 = StringLiteral_17673/*"ba30"*/;
  *(_QWORD *)(v159 + 160) = StringLiteral_17673/*"ba30"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 160), v272, v266, v267, v268, v269, v270, v271);
  if ( *(_DWORD *)(v159 + 24) <= 0x11u )
    goto LABEL_56;
  v279 = StringLiteral_17529/*"ar2"*/;
  *(_QWORD *)(v159 + 168) = StringLiteral_17529/*"ar2"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 168), v279, v273, v274, v275, v276, v277, v278);
  if ( *(_DWORD *)(v159 + 24) <= 0x12u )
    goto LABEL_56;
  v286 = StringLiteral_17523/*"ar102"*/;
  *(_QWORD *)(v159 + 176) = StringLiteral_17523/*"ar102"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 176), v286, v280, v281, v282, v283, v284, v285);
  if ( *(_DWORD *)(v159 + 24) <= 0x13u )
    goto LABEL_56;
  v293 = StringLiteral_18789/*"co1"*/;
  *(_QWORD *)(v159 + 184) = StringLiteral_18789/*"co1"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 184), v293, v287, v288, v289, v290, v291, v292);
  if ( *(_DWORD *)(v159 + 24) <= 0x14u )
    goto LABEL_56;
  v300 = StringLiteral_22652/*"mis1"*/;
  *(_QWORD *)(v159 + 192) = StringLiteral_22652/*"mis1"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 192), v300, v294, v295, v296, v297, v298, v299);
  if ( *(_DWORD *)(v159 + 24) <= 0x15u )
    goto LABEL_56;
  v307 = StringLiteral_25269/*"testSe"*/;
  *(_QWORD *)(v159 + 200) = StringLiteral_25269/*"testSe"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 200), v307, v301, v302, v303, v304, v305, v306);
  if ( *(_DWORD *)(v159 + 24) <= 0x16u )
    goto LABEL_56;
  v314 = StringLiteral_26176/*"wo1"*/;
  *(_QWORD *)(v159 + 208) = StringLiteral_26176/*"wo1"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 208), v314, v308, v309, v310, v311, v312, v313);
  if ( *(_DWORD *)(v159 + 24) <= 0x17u )
    goto LABEL_56;
  v321 = StringLiteral_26177/*"wo11"*/;
  *(_QWORD *)(v159 + 216) = StringLiteral_26177/*"wo11"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 216), v321, v315, v316, v317, v318, v319, v320);
  if ( *(_DWORD *)(v159 + 24) <= 0x18u )
    goto LABEL_56;
  v328 = StringLiteral_17674/*"ba38"*/;
  *(_QWORD *)(v159 + 224) = StringLiteral_17674/*"ba38"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 224), v328, v322, v323, v324, v325, v326, v327);
  if ( *(_DWORD *)(v159 + 24) <= 0x19u )
    goto LABEL_56;
  v335 = StringLiteral_17660/*"ba13"*/;
  *(_QWORD *)(v159 + 232) = StringLiteral_17660/*"ba13"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 232), v335, v329, v330, v331, v332, v333, v334);
  if ( *(_DWORD *)(v159 + 24) <= 0x1Au )
    goto LABEL_56;
  v342 = StringLiteral_17661/*"ba15"*/;
  *(_QWORD *)(v159 + 240) = StringLiteral_17661/*"ba15"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 240), v342, v336, v337, v338, v339, v340, v341);
  if ( *(_DWORD *)(v159 + 24) <= 0x1Bu )
    goto LABEL_56;
  v349 = StringLiteral_17663/*"ba17"*/;
  *(_QWORD *)(v159 + 248) = StringLiteral_17663/*"ba17"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 248), v349, v343, v344, v345, v346, v347, v348);
  if ( *(_DWORD *)(v159 + 24) <= 0x1Cu )
    goto LABEL_56;
  v356 = StringLiteral_17524/*"ar112"*/;
  *(_QWORD *)(v159 + 256) = StringLiteral_17524/*"ar112"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 256), v356, v350, v351, v352, v353, v354, v355);
  if ( *(_DWORD *)(v159 + 24) <= 0x1Du )
    goto LABEL_56;
  v363 = StringLiteral_23988/*"qev79"*/;
  *(_QWORD *)(v159 + 264) = StringLiteral_23988/*"qev79"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v159 + 264), v363, v357, v358, v359, v360, v361, v362);
  this->fields.commonSeClipNames = (struct System_String_array *)v159;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commonSeClipNames,
    v159,
    v364,
    v365,
    v366,
    v367,
    v368,
    v369);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_SeManager___ctor__);
}


void SeManager__ChangeVolumeSe(System_String_o *name, float volume, float fadeTime, const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_5938002 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5938002 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v9 )
  {
    if ( !Instance )
      sub_21FFECC(v9, v10);
    SeManager__ChangeVolumeSeLocal((SeManager_o *)Instance, name, volume, fadeTime, v11);
  }
}


void SeManager__ChangeVolumeSeLocal(
        SeManager_o *this,
        System_String_o *name,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_48446292; // x0
  const MethodInfo *v8; // x1

  SePlayer_48446292 = SeManager__GetSePlayer_48446292(this, name, method);
  if ( SePlayer_48446292 )
    SePlayer__ChangeVolume(SePlayer_48446292, volume, fadeTime, v8);
}


void SeManager__ChangeVolumeSeLocal_48441152(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_48446468; // x0
  const MethodInfo *v9; // x1

  SePlayer_48446468 = SeManager__GetSePlayer_48446468(this, assetName, objectName, method);
  if ( SePlayer_48446468 )
    SePlayer__ChangeVolume(SePlayer_48446468, volume, fadeTime, v9);
}


void SeManager__ChangeVolumeVoice(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_5938003 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5938003 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v11 )
  {
    if ( !Instance )
      sub_21FFECC(v11, v12);
    SeManager__ChangeVolumeVoiceLocal((SeManager_o *)Instance, assetName, objectName, volume, fadeTime, v13);
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
  SePlayer_o *SePlayer_48446892; // x0
  const MethodInfo *v10; // x1

  SePlayer_48446892 = SeManager__GetSePlayer_48446892(this, 1, assetName, objectName, v6);
  if ( SePlayer_48446892 )
    SePlayer__ChangeVolume(SePlayer_48446892, volume, fadeTime, v10);
}


CriAtomSource_o *SeManager__GetAudioSource(SeManager_o *this, SePlayer_o *player, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t seMax; // w8
  struct SePlayer_array *sePlayerStatusList; // x23
  SeManager_o *v10; // x19
  unsigned int max_length; // w9
  unsigned int v13; // w21
  __int64 i; // x22
  __int64 v16; // x1
  struct CriAtomSource_array *seSources; // x8
  __int64 v18; // x0

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
    if ( max_length == v13 )
      goto LABEL_15;
    if ( !*(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) )
      break;
    if ( seMax == ++v13 )
      return 0;
  }
  if ( player )
  {
    this = (SeManager_o *)sub_21FFDA4(player, sePlayerStatusList->obj.klass->_1.element_class);
    if ( !this )
    {
      v18 = sub_21FFEF0(0, v16);
      sub_21FFD90(v18, 0);
    }
    max_length = sePlayerStatusList->max_length;
  }
  if ( v13 >= max_length )
LABEL_15:
    sub_21FFED4(this);
  *(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) = (Il2CppClass *)player;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)((char *)sePlayerStatusList + i),
    (int32_t)player,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  seSources = v10->fields.seSources;
  if ( !seSources )
LABEL_16:
    sub_21FFECC(this, player);
  if ( v13 >= LODWORD(seSources->max_length) )
    goto LABEL_15;
  return *(CriAtomSource_o **)((char *)&seSources->obj.klass + i);
}


CriAtomSource_o *SeManager__GetAudioSource_48444932(
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct SePlayer_array *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x0

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
    sub_21FFECC(this, player);
  if ( player )
  {
    this = (SeManager_o *)sub_21FFDA4(player, v22->obj.klass->_1.element_class);
    if ( !this )
    {
      v24 = sub_21FFEF0(0, v23);
      sub_21FFD90(v24, 0);
    }
  }
  if ( (unsigned int)v9 >= LODWORD(v22->max_length) )
LABEL_19:
    sub_21FFED4(this);
  *(Il2CppClass **)((char *)&v22->obj.klass + i) = (Il2CppClass *)player;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)v22 + i), (int32_t)player, v16, v17, v18, v19, v20, v21);
  return v14;
}


// local variable allocation has failed, the output may be wrong!
CriAtomSource_o *SeManager__GetAudioSource_48445684(
        SeManager_o *this,
        SePlayer_o *player,
        System_String_o *cueSheet,
        System_String_o *cueName,
        bool notOverwrite,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  SeManager_o *v9; // x19
  int32_t seMax; // w8
  struct SePlayer_array *sePlayerStatusList; // x23
  unsigned int max_length; // w9
  unsigned int v13; // w21
  __int64 i; // x22
  struct CriAtomSource_array *seSources; // x10
  __int64 v17; // x1
  struct CriAtomSource_array *v18; // x8
  __int64 v19; // x0

  v9 = this;
  if ( !notOverwrite )
    return SeManager__GetAudioSource_48444932(this, player, cueSheet, cueName, (const MethodInfo *)notOverwrite);
  seMax = this->fields.seMax;
  if ( seMax < 1 )
    return SeManager__GetAudioSource_48444932(this, player, cueSheet, cueName, (const MethodInfo *)notOverwrite);
  sePlayerStatusList = this->fields.sePlayerStatusList;
  if ( !sePlayerStatusList )
    goto LABEL_19;
  max_length = sePlayerStatusList->max_length;
  v13 = 0;
  for ( i = 32; ; i += 8 )
  {
    if ( max_length == v13 )
      goto LABEL_18;
    seSources = this->fields.seSources;
    if ( !seSources )
      goto LABEL_19;
    if ( v13 >= LODWORD(seSources->max_length) )
      goto LABEL_18;
    if ( !*(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) )
      break;
    if ( seMax == ++v13 )
      return SeManager__GetAudioSource_48444932(this, player, cueSheet, cueName, (const MethodInfo *)notOverwrite);
  }
  if ( player )
  {
    this = (SeManager_o *)sub_21FFDA4(player, sePlayerStatusList->obj.klass->_1.element_class);
    if ( !this )
    {
      v19 = sub_21FFEF0(0, v17);
      sub_21FFD90(v19, 0);
    }
    max_length = sePlayerStatusList->max_length;
  }
  if ( v13 >= max_length )
LABEL_18:
    sub_21FFED4(this);
  *(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) = (Il2CppClass *)player;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)((char *)sePlayerStatusList + i),
    (int32_t)player,
    cueSheet,
    cueName,
    notOverwrite,
    (int32_t)method,
    v6,
    v7);
  v18 = v9->fields.seSources;
  if ( !v18 )
LABEL_19:
    sub_21FFECC(this, player);
  if ( v13 >= LODWORD(v18->max_length) )
    goto LABEL_18;
  return *(CriAtomSource_o **)((char *)&v18->obj.klass + i);
}


System_String_o *SeManager__GetCommonSeName(int32_t kind, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_5937FE6 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FE6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  return SeManager__GetCommonSeNameLocal((SeManager_o *)Instance, kind, v5);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *SeManager__GetCommonSeNameLocal(SeManager_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_String_array *commonSeClipNames; // x8

  commonSeClipNames = this->fields.commonSeClipNames;
  if ( !commonSeClipNames )
    sub_21FFECC(this, *(_QWORD *)&kind);
  if ( LODWORD(commonSeClipNames->max_length) <= kind )
    sub_21FFED4(this);
  return commonSeClipNames->m_Items[kind];
}


float SeManager__GetDefaultPreDelayTime(
        SeManager_o *this,
        System_String_o *cueSheet,
        System_String_o *cueName,
        const MethodInfo *method)
{
  _BOOL4 enablePreDelay; // w8
  CriAtomExAcb_o *Acb; // x0
  CriAtomEx_WaveformInfo_o v9; // [xsp+0h] [xbp-50h] BYREF

  enablePreDelay = this->fields.enablePreDelay;
  memset(&v9, 0, sizeof(v9));
  if ( !enablePreDelay )
    return 0.0;
  Acb = CriAtom__GetAcb(cueSheet, 0);
  memset(&v9, 0, sizeof(v9));
  if ( Acb && CriAtomExAcb__GetWaveFormInfo(Acb, cueName, &v9, 0) && !v9.fields.streamingFlag )
    return this->fields.preDelayTimeForMemory;
  else
    return this->fields.preDelayTimeForStream;
}


System_String_o *SeManager__GetPathName(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_5937FDC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13162/*"Se/"*/);
    byte_5937FDC = 1;
  }
  return System_String__Concat_75438412((System_String_o *)StringLiteral_13162/*"Se/"*/, name, 0);
}


float SeManager__GetPitchSe(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  float v8; // s8
  SePlayer_o *SePlayer_48446292; // x0

  if ( (byte_5938005 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5938005 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v8 = 0.0;
  if ( !v5 )
  {
    if ( !Instance )
      sub_21FFECC(v5, v6);
    SePlayer_48446292 = SeManager__GetSePlayer_48446292((SeManager_o *)Instance, name, v7);
    if ( SePlayer_48446292 )
      return SePlayer_48446292->fields.pitchValue;
  }
  return v8;
}


float SeManager__GetPitchSeLocal(SeManager_o *this, System_String_o *name, const MethodInfo *method)
{
  SePlayer_o *SePlayer_48446292; // x0

  SePlayer_48446292 = SeManager__GetSePlayer_48446292(this, name, method);
  if ( SePlayer_48446292 )
    return SePlayer_48446292->fields.pitchValue;
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
  _BOOL4 enablePreDelay; // w8
  System_Collections_Generic_IEnumerable_TSource__o *ignorePreDelayArray; // x0
  CriAtomExAcb_o *Acb; // x0
  CriAtomEx_WaveformInfo_o v12; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_593800C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_string___);
    byte_593800C = 1;
  }
  v7 = 0.0;
  enablePreDelay = this->fields.enablePreDelay;
  memset(&v12, 0, sizeof(v12));
  if ( enablePreDelay )
  {
    ignorePreDelayArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.ignorePreDelayArray;
    if ( !ignorePreDelayArray
      || !System_Linq_Enumerable__Contains_object_(
            ignorePreDelayArray,
            (Il2CppObject *)cueName,
            (const MethodInfo_3843478 *)Method_System_Linq_Enumerable_Contains_string___) )
    {
      Acb = CriAtom__GetAcb(cueSheet, 0);
      memset(&v12, 0, sizeof(v12));
      if ( Acb && CriAtomExAcb__GetWaveFormInfo(Acb, cueName, &v12, 0) && !v12.fields.streamingFlag )
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
  if ( (byte_593800E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    this = (SeManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_593800E = 1;
  }
  workSePlayerStatusList = v4->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
LABEL_11:
    sub_21FFECC(this, *(_QWORD *)&num);
  for ( i = workSePlayerStatusList->fields._size - 1; (i & 0x80000000) == 0; --i )
  {
    this = (SeManager_o *)v4->fields.workSePlayerStatusList;
    if ( !this )
      goto LABEL_11;
    this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            i,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
    if ( !this )
      goto LABEL_11;
    if ( HIDWORD(this->fields.m_CachedPtr) == num )
      return (SePlayer_o *)this;
  }
  return 0;
}


SePlayer_o *SeManager__GetSePlayer_48446292(SeManager_o *this, System_String_o *name, const MethodInfo *method)
{
  SeManager_o *v4; // x20
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int32_t i; // w21
  SeManager_o *v7; // x22

  v4 = this;
  if ( (byte_593800F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    this = (SeManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_593800F = 1;
  }
  workSePlayerStatusList = v4->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
LABEL_12:
    sub_21FFECC(this, name);
  for ( i = workSePlayerStatusList->fields._size - 1; (i & 0x80000000) == 0; --i )
  {
    this = (SeManager_o *)v4->fields.workSePlayerStatusList;
    if ( !this )
      goto LABEL_12;
    this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            i,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
    if ( !this )
      goto LABEL_12;
    v7 = this;
    if ( System_String__op_Equality((System_String_o *)this->fields.systemSeSources, name, 0) )
      return (SePlayer_o *)v7;
  }
  return 0;
}


SePlayer_o *SeManager__GetSePlayer_48446468(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  SeManager_o *v6; // x21
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int size; // w22
  SePlayer_o *v9; // x23

  v6 = this;
  if ( (byte_5938010 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    this = (SeManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_5938010 = 1;
  }
  workSePlayerStatusList = v6->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_12;
  size = workSePlayerStatusList->fields._size;
  if ( size - 1 >= 0 )
  {
    while ( 1 )
    {
      this = (SeManager_o *)v6->fields.workSePlayerStatusList;
      if ( !this )
        break;
      this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)this,
                              --size,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !this )
        break;
      v9 = (SePlayer_o *)this;
      if ( System_String__op_Equality((System_String_o *)this->fields.m_CancellationTokenSource, assetName, 0)
        && System_String__op_Equality(v9->fields.objName, objectName, 0) )
      {
        return v9;
      }
      if ( size <= 0 )
        return 0;
    }
LABEL_12:
    sub_21FFECC(this, assetName);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SeManager__GetSePlayer_48446688(
        SeManager_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  SeManager_o *v6; // x21
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int size; // w22
  SeManager_o *v9; // x23

  v6 = this;
  if ( (byte_5938011 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    this = (SeManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_5938011 = 1;
  }
  workSePlayerStatusList = v6->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_12;
  size = workSePlayerStatusList->fields._size;
  if ( size - 1 >= 0 )
  {
    while ( 1 )
    {
      this = (SeManager_o *)v6->fields.workSePlayerStatusList;
      if ( !this )
        break;
      this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)this,
                              --size,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !this )
        break;
      v9 = this;
      if ( LODWORD(this->fields.m_CachedPtr) == type
        && System_String__op_Equality((System_String_o *)this->fields.systemSeSources, name, 0) )
      {
        return (SePlayer_o *)v9;
      }
      if ( size <= 0 )
        return 0;
    }
LABEL_12:
    sub_21FFECC(this, *(_QWORD *)&type);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SeManager__GetSePlayer_48446892(
        SeManager_o *this,
        int32_t type,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  SeManager_o *v8; // x22
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int size; // w23
  SePlayer_o *v11; // x24

  v8 = this;
  if ( (byte_5938012 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    this = (SeManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_5938012 = 1;
  }
  workSePlayerStatusList = v8->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_13;
  size = workSePlayerStatusList->fields._size;
  if ( size - 1 >= 0 )
  {
    while ( 1 )
    {
      this = (SeManager_o *)v8->fields.workSePlayerStatusList;
      if ( !this )
        break;
      this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)this,
                              --size,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !this )
        break;
      v11 = (SePlayer_o *)this;
      if ( LODWORD(this->fields.m_CachedPtr) == type
        && System_String__op_Equality((System_String_o *)this->fields.m_CancellationTokenSource, assetName, 0)
        && System_String__op_Equality(v11->fields.objName, objectName, 0) )
      {
        return v11;
      }
      if ( size <= 0 )
        return 0;
    }
LABEL_13:
    sub_21FFECC(this, *(_QWORD *)&type);
  }
  return 0;
}


void SeManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SeManager_c *v8; // x0
  struct SeManager_StaticFields *static_fields; // x8
  struct SeManager_StaticFields *v10; // x8
  __int64 v11; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5937FD7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FD7 = 1;
  }
  v8 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v1);
    v8 = SeManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->seAssetBundleList )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v1);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    static_fields->seAssetBundleList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->seAssetBundleList, 0, v2, v3, v4, v5, v6, v7);
    v8 = SeManager_TypeInfo;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v1);
    v8 = SeManager_TypeInfo;
  }
  v10 = v8->static_fields;
  if ( v10->residentSeAssetBundleList )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v1);
      v10 = SeManager_TypeInfo->static_fields;
    }
    v10->residentSeAssetBundleList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->residentSeAssetBundleList, 0, v2, v3, v4, v5, v6, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v13 )
  {
    if ( !Instance )
      sub_21FFECC(v13, v14);
    SeManager__InitializeLocal((SeManager_o *)Instance, v14);
  }
}


void SeManager__InitializeAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  SeManager_c *v2; // x0
  struct SeManager_StaticFields *static_fields; // x8
  const MethodInfo_476E8C0 *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct System_String_array *LoadSeList; // x8
  SoundManager_o *v8; // x19
  System_String_o *v9; // x20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x4
  struct System_String_array *v12; // x8
  SoundManager_o *v13; // x19
  System_String_o *v14; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x4

  if ( (byte_5937FD8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SeManager_LoadEndResidentSeAsset__);
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5937FD8 = 1;
  }
  v2 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v1);
    v2 = SeManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  v4 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__;
  static_fields->IsBusy = 1;
  static_fields->loadCounter = 2;
  Instance = SingletonMonoBehaviour_object___get_Instance(v4);
  LoadSeList = SeManager_TypeInfo->static_fields->LoadSeList;
  if ( !LoadSeList )
    goto LABEL_12;
  if ( !LODWORD(LoadSeList->max_length) )
    goto LABEL_13;
  v8 = (SoundManager_o *)Instance;
  v9 = LoadSeList->m_Items[0];
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, 0, Method_SeManager_LoadEndResidentSeAsset__, 0);
  if ( !v8
    || (SoundManager__LoadAudioAssetStorage(v8, v9, v10, 1, v11),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__),
        (v12 = SeManager_TypeInfo->static_fields->LoadSeList) == 0) )
  {
LABEL_12:
    sub_21FFECC(Instance, v6);
  }
  if ( (v12->max_length & 0xFFFFFFFE) == 0 )
LABEL_13:
    sub_21FFED4(Instance);
  v13 = (SoundManager_o *)Instance;
  v14 = v12->m_Items[1];
  v15 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v15, 0, Method_SeManager_LoadEndResidentSeAsset__, 0);
  if ( !v13 )
    goto LABEL_12;
  SoundManager__LoadAudioAssetStorage(v13, v14, v15, 1, v16);
}


void SeManager__InitializeLocal(SeManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_playerGameObject; // x20
  UnityEngine_Object_o *playerGameObject; // x21
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x21
  struct CriAtomSource_array *v16; // x0
  struct CriAtomSource_array **p_seSources; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct SePlayer_array *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct CriAtomSource_array *v31; // x0
  struct CriAtomSource_array **p_systemSeSources; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_List_object__o *v39; // x23
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct CriAtomSource_array *v46; // x25
  unsigned int v47; // w24
  __int64 v48; // x27
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  UnityEngine_Object_o *v55; // x23
  __int64 v56; // x1
  __int64 v57; // x8
  int32_t SYSTEM_SE_MAX; // w9
  struct CriAtomSource_array *v59; // x27
  unsigned int v60; // w23
  __int64 i; // x25
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  UnityEngine_Object_o *v68; // x22
  struct CriAtomSource_array *v69; // x8
  __int64 v70; // x8
  int32_t seMax; // w9
  __int64 v72; // x0

  if ( (byte_5938009 & 1) == 0 )
  {
    sub_21FFC50(&CriAtomSource___TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SePlayer__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SePlayer___TypeInfo);
    sub_21FFC50(&StringLiteral_13163/*"SePlayerObject"*/);
    byte_5938009 = 1;
  }
  p_playerGameObject = &this->fields.playerGameObject;
  playerGameObject = (UnityEngine_Object_o *)this->fields.playerGameObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(playerGameObject, 0, 0) )
  {
    v6 = (UnityEngine_GameObject_o *)sub_21FFEBC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor_83225376(v6, 0);
    *p_playerGameObject = v6;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.playerGameObject,
      (int32_t)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    gameObject = (UnityEngine_Object_o *)*p_playerGameObject;
    if ( !*p_playerGameObject )
      goto LABEL_37;
    UnityEngine_Object__set_name(gameObject, (System_String_o *)StringLiteral_13163/*"SePlayerObject"*/, 0);
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
    v16 = (struct CriAtomSource_array *)sub_21FFD10(CriAtomSource___TypeInfo, (unsigned int)this->fields.seMax);
    this->fields.seSources = v16;
    p_seSources = &this->fields.seSources;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.seSources, (int32_t)v16, v18, v19, v20, v21, v22, v23);
    v24 = (struct SePlayer_array *)sub_21FFD10(SePlayer___TypeInfo, (unsigned int)this->fields.seMax);
    this->fields.sePlayerStatusList = v24;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.sePlayerStatusList,
      (int32_t)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v31 = (struct CriAtomSource_array *)sub_21FFD10(CriAtomSource___TypeInfo, (unsigned int)this->fields.SYSTEM_SE_MAX);
    this->fields.systemSeSources = v31;
    p_systemSeSources = &this->fields.systemSeSources;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.systemSeSources,
      (int32_t)v31,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    this->fields.systemSeIdx = 0;
    v39 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SePlayer__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v39,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SePlayer___ctor__);
    this->fields.workSePlayerStatusList = (struct System_Collections_Generic_List_SePlayer__o *)v39;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.workSePlayerStatusList,
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
                                               (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
        if ( !v46 )
          break;
        v55 = gameObject;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Object_o *)sub_21FFDA4(gameObject, v46->obj.klass->_1.element_class);
          if ( !gameObject )
          {
LABEL_39:
            v72 = sub_21FFEF0(gameObject, v56);
            sub_21FFD90(v72, 0);
          }
        }
        if ( v47 >= LODWORD(v46->max_length) )
          goto LABEL_38;
        *(Il2CppClass **)((char *)&v46->obj.klass + v48) = (Il2CppClass *)v55;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)v46 + v48), (int32_t)v55, v49, v50, v51, v52, v53, v54);
        v46 = *p_systemSeSources;
        if ( !*p_systemSeSources )
          break;
        if ( v47 >= LODWORD(v46->max_length) )
LABEL_38:
          sub_21FFED4(gameObject);
        v57 = *(__int64 *)((char *)&v46->obj.klass + v48);
        if ( !v57 )
          break;
        SYSTEM_SE_MAX = this->fields.SYSTEM_SE_MAX;
        ++v47;
        v48 += 8;
        *(_BYTE *)(v57 + 156) = 1;
        if ( (int)v47 >= SYSTEM_SE_MAX )
          goto LABEL_21;
      }
LABEL_37:
      sub_21FFECC(gameObject, v13);
    }
LABEL_21:
    if ( this->fields.seMax >= 1 )
    {
      v59 = *p_seSources;
      v60 = 0;
      for ( i = 32; ; i += 8 )
      {
        gameObject = (UnityEngine_Object_o *)*p_playerGameObject;
        if ( !*p_playerGameObject )
          break;
        gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
        if ( !v59 )
          break;
        v68 = gameObject;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Object_o *)sub_21FFDA4(gameObject, v59->obj.klass->_1.element_class);
          if ( !gameObject )
            goto LABEL_39;
        }
        if ( v60 >= LODWORD(v59->max_length) )
          goto LABEL_38;
        *(Il2CppClass **)((char *)&v59->obj.klass + i) = (Il2CppClass *)v68;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)v59 + i), (int32_t)v68, v62, v63, v64, v65, v66, v67);
        v69 = *p_seSources;
        if ( !*p_seSources )
          break;
        if ( v60 >= LODWORD(v69->max_length) )
          goto LABEL_38;
        gameObject = *(UnityEngine_Object_o **)((char *)&v69->obj.klass + i);
        if ( !gameObject )
          break;
        CriAtomSource__set_use3dPositioning((CriAtomSource_o *)gameObject, 0, 0);
        v59 = *p_seSources;
        if ( !*p_seSources )
          break;
        if ( v60 >= LODWORD(v59->max_length) )
          goto LABEL_38;
        v70 = *(__int64 *)((char *)&v59->obj.klass + i);
        if ( !v70 )
          break;
        seMax = this->fields.seMax;
        ++v60;
        *(_BYTE *)(v70 + 156) = 1;
        if ( (int)v60 >= seMax )
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
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_5937FD9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v3 )
  {
    if ( !Instance )
      sub_21FFECC(v3, v4);
    SeManager__InitializePreDelaySettingLocal((SeManager_o *)Instance, v4);
  }
}


void SeManager__InitializePreDelaySettingLocal(SeManager_o *this, const MethodInfo *method)
{
  const MethodInfo_476E8C0 *v3; // x0
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct DataMasterBase_array *datalist; // x8
  DataMasterBase_o *v7; // x8
  ConstantStrMaster_o *v8; // x20
  float Float; // s0
  float preDelayTimeForMemory; // s1
  float v11; // s0
  System_String_o *v12; // x1
  const MethodInfo_3EE18D0 *v13; // x2
  struct System_String_array *ValueStringArray; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_593800A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_21FFC50(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__isEntityExistsFromId__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&StringLiteral_12517/*"SE_PRE_DELAY_TIME_FOR_MEMORY"*/);
    sub_21FFC50(&StringLiteral_12518/*"SE_PRE_DELAY_TIME_FOR_STREAM"*/);
    sub_21FFC50(&StringLiteral_12516/*"SE_IGNORE_PRE_DELAY"*/);
    byte_593800A = 1;
  }
  v3 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__;
  this->fields.enablePreDelay = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v3);
  if ( !Instance )
    goto LABEL_17;
  datalist = Instance->fields.datalist;
  if ( !datalist )
    goto LABEL_17;
  v7 = datalist->m_Items[5];
  if ( !v7 )
    goto LABEL_17;
  if ( BYTE5(v7[3].fields._MasterName_k__BackingField) )
  {
    this->fields.enablePreDelay = 1;
  }
  else if ( !this->fields.enablePreDelay )
  {
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0 )
  {
LABEL_17:
    sub_21FFECC(Instance, v5);
  }
  v8 = (ConstantStrMaster_o *)Instance;
  Float = ConstantStrMaster__GetFloat(
            (ConstantStrMaster_o *)Instance,
            (System_String_o *)StringLiteral_12518/*"SE_PRE_DELAY_TIME_FOR_STREAM"*/,
            this->fields.preDelayTimeForStream,
            0);
  preDelayTimeForMemory = this->fields.preDelayTimeForMemory;
  this->fields.preDelayTimeForStream = Float;
  v11 = ConstantStrMaster__GetFloat(v8, (System_String_o *)StringLiteral_12517/*"SE_PRE_DELAY_TIME_FOR_MEMORY"*/, preDelayTimeForMemory, 0);
  v12 = (System_String_o *)StringLiteral_12516/*"SE_IGNORE_PRE_DELAY"*/;
  v13 = (const MethodInfo_3EE18D0 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__isEntityExistsFromId__;
  this->fields.preDelayTimeForMemory = v11;
  if ( DataMasterBase_object__object__object___isEntityExistsFromId_65935568(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
         v12,
         v13) )
  {
    ValueStringArray = ConstantStrMaster__GetValueStringArray(v8, (System_String_o *)StringLiteral_12516/*"SE_IGNORE_PRE_DELAY"*/, 0, 0);
    this->fields.ignorePreDelayArray = ValueStringArray;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.ignorePreDelayArray,
      (int32_t)ValueStringArray,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( this->fields.preDelayTimeForStream <= 0.0 && this->fields.preDelayTimeForMemory <= 0.0 )
    this->fields.enablePreDelay = 0;
}


bool SeManager__IsBusyCommonSe(int32_t kind, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_5937FEB & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FEB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  return SeManager__IsBusyCommonSeLocal((SeManager_o *)Instance, kind, v5);
}


// local variable allocation has failed, the output may be wrong!
bool SeManager__IsBusyCommonSeLocal(SeManager_o *this, int32_t kind, const MethodInfo *method)
{
  SeManager_o *v4; // x20
  struct System_String_array *commonSeClipNames; // x8
  System_String_o *v6; // x19

  v4 = this;
  if ( (byte_5937FEC & 1) == 0 )
  {
    this = (SeManager_o *)sub_21FFC50(&SeManager_TypeInfo);
    byte_5937FEC = 1;
  }
  commonSeClipNames = v4->fields.commonSeClipNames;
  if ( !commonSeClipNames )
    sub_21FFECC(this, *(_QWORD *)&kind);
  if ( LODWORD(commonSeClipNames->max_length) <= kind )
    sub_21FFED4(this);
  v6 = commonSeClipNames->m_Items[kind];
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, *(_QWORD *)&kind);
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
  SeManager_o *v8; // x20
  SePlayer_o *SePlayer_48446892; // x0
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_SePlayer__o *v11; // x8
  int v12; // w22
  SeManager_o *v13; // x23
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int size; // w21
  SeManager_o *v16; // x23
  int v17; // w21

  v8 = this;
  if ( (byte_5938013 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    this = (SeManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_5938013 = 1;
  }
  if ( objectName )
  {
    if ( assetName )
    {
      SePlayer_48446892 = SeManager__GetSePlayer_48446892(v8, seType, assetName, objectName, method);
      if ( SePlayer_48446892 )
        LOBYTE(SePlayer_48446892) = SePlayer__get_IsBusy(SePlayer_48446892, v10);
      return (char)SePlayer_48446892;
    }
    workSePlayerStatusList = v8->fields.workSePlayerStatusList;
    if ( workSePlayerStatusList )
    {
      size = workSePlayerStatusList->fields._size;
      if ( size - 1 >= 0 )
      {
        do
        {
          this = (SeManager_o *)v8->fields.workSePlayerStatusList;
          if ( !this )
            goto LABEL_36;
          this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  --size,
                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
          if ( !this )
            goto LABEL_36;
          v16 = this;
          if ( LODWORD(this->fields.m_CachedPtr) == seType
            && System_String__op_Equality((System_String_o *)this->fields.systemSeSources, objectName, 0)
            && SePlayer__get_IsBusy((SePlayer_o *)v16, *(const MethodInfo **)&seType) )
          {
            goto LABEL_35;
          }
        }
        while ( size > 0 );
      }
LABEL_33:
      LOBYTE(SePlayer_48446892) = 0;
      return (char)SePlayer_48446892;
    }
LABEL_36:
    sub_21FFECC(this, *(_QWORD *)&seType);
  }
  v11 = v8->fields.workSePlayerStatusList;
  if ( assetName )
  {
    if ( !v11 )
      goto LABEL_36;
    v12 = v11->fields._size;
    if ( v12 - 1 < 0 )
      goto LABEL_33;
    while ( 1 )
    {
      this = (SeManager_o *)v8->fields.workSePlayerStatusList;
      if ( !this )
        goto LABEL_36;
      this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)this,
                              --v12,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !this )
        goto LABEL_36;
      v13 = this;
      if ( LODWORD(this->fields.m_CachedPtr) == seType
        && System_String__op_Equality((System_String_o *)this->fields.m_CancellationTokenSource, assetName, 0)
        && SePlayer__get_IsBusy((SePlayer_o *)v13, *(const MethodInfo **)&seType) )
      {
        goto LABEL_35;
      }
      if ( v12 <= 0 )
        goto LABEL_33;
    }
  }
  if ( !v11 )
    goto LABEL_36;
  v17 = v11->fields._size;
  if ( v17 - 1 < 0 )
    goto LABEL_33;
  while ( 1 )
  {
    this = (SeManager_o *)v8->fields.workSePlayerStatusList;
    if ( !this )
      goto LABEL_36;
    this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            --v17,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
    if ( !this )
      goto LABEL_36;
    if ( LODWORD(this->fields.m_CachedPtr) == seType
      && SePlayer__get_IsBusy((SePlayer_o *)this, *(const MethodInfo **)&seType) )
    {
      break;
    }
    if ( v17 <= 0 )
      goto LABEL_33;
  }
LABEL_35:
  LOBYTE(SePlayer_48446892) = 1;
  return (char)SePlayer_48446892;
}


bool SeManager__IsBusySe(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  if ( (byte_5937FED & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_21FFECC(v5, v6);
  return SeManager__IsBusyLocal((SeManager_o *)Instance, 0, 0, name, v7);
}


bool SeManager__IsBusyVoice(System_String_o *assetName, System_String_o *objectName, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_5937FEE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FEE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_21FFECC(v7, v8);
  return SeManager__IsBusyLocal((SeManager_o *)Instance, 1, assetName, objectName, v9);
}


bool SeManager__IsDownloadFile(System_String_o *pathName, const MethodInfo *method)
{
  SeManager_c *v3; // x0

  if ( (byte_5937FDD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_string___);
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5937FDD = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
    v3 = SeManager_TypeInfo;
  }
  return System_Array__IndexOf_object_(
           (System_Object_array *)v3->static_fields->seAssetBundleList,
           (Il2CppObject *)pathName,
           (const MethodInfo_39FB15C *)Method_System_Array_IndexOf_string___) >= 0;
}


void SeManager__LateUpdate(SeManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playerGameObject; // x20
  const MethodInfo *v4; // x1
  float deltaTime; // s8
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int32_t v7; // w20
  struct System_Collections_Generic_List_SePlayer__o *v8; // x0
  Il2CppObject *Item; // x0
  SePlayer_o *v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t seMax; // w8
  struct SePlayer_array *sePlayerStatusList; // x10
  int max_length; // w9
  MissionNaviTransitionBoardItem_o *m_Items; // x0
  struct System_Action_o *callbackFunc; // x24
  const MethodInfo *v22; // x1

  if ( (byte_5938019 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5938019 = 1;
  }
  playerGameObject = (UnityEngine_Object_o *)this->fields.playerGameObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(playerGameObject, 0, 0) )
  {
    deltaTime = RealTime__get_deltaTime(0);
    if ( deltaTime > 0.5 )
      deltaTime = UnityEngine_Time__get_deltaTime(0);
    workSePlayerStatusList = this->fields.workSePlayerStatusList;
    if ( workSePlayerStatusList )
    {
      v7 = workSePlayerStatusList->fields._size - 1;
      if ( v7 >= 0 )
      {
        while ( 1 )
        {
          v8 = this->fields.workSePlayerStatusList;
          if ( !v8 )
            break;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v8,
                   v7,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
          if ( Item )
          {
            v10 = (SePlayer_o *)Item;
            if ( !SePlayer__get_IsPause((SePlayer_o *)Item, v4) )
            {
              v8 = (struct System_Collections_Generic_List_SePlayer__o *)SePlayer__Update(v10, deltaTime, v4);
              if ( ((unsigned __int8)v8 & 1) == 0 )
              {
                seMax = this->fields.seMax;
                if ( seMax >= 1 )
                {
                  sePlayerStatusList = this->fields.sePlayerStatusList;
                  if ( !sePlayerStatusList )
                    break;
                  max_length = sePlayerStatusList->max_length;
                  m_Items = (MissionNaviTransitionBoardItem_o *)sePlayerStatusList->m_Items;
                  while ( 1 )
                  {
                    if ( !max_length )
                      sub_21FFED4(m_Items);
                    if ( v10 == (SePlayer_o *)m_Items->klass )
                      break;
                    --seMax;
                    m_Items = (MissionNaviTransitionBoardItem_o *)((char *)m_Items + 8);
                    --max_length;
                    if ( !seMax )
                      goto LABEL_24;
                  }
                  m_Items->klass = 0;
                  sub_21FFBF4(m_Items, 0, v11, v12, v13, v14, v15, v16);
                }
LABEL_24:
                v8 = this->fields.workSePlayerStatusList;
                if ( !v8 )
                  break;
                System_Collections_Generic_List_object___RemoveAt(
                  (System_Collections_Generic_List_object__o *)v8,
                  v7,
                  (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_SePlayer__RemoveAt__);
                callbackFunc = v10->fields.callbackFunc;
                SePlayer__Destroy(v10, v22);
                if ( callbackFunc )
                  ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
                    callbackFunc->fields.method_code,
                    callbackFunc->fields.method);
              }
            }
          }
          else
          {
            v8 = this->fields.workSePlayerStatusList;
            if ( !v8 )
              break;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)v8,
              v7,
              (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_SePlayer__RemoveAt__);
          }
          if ( v7-- <= 0 )
            return;
        }
        sub_21FFECC(v8, v4);
      }
    }
  }
}


void SeManager__LoadEndResidentSeAsset(const MethodInfo *method)
{
  __int64 v1; // x1
  SeManager_c *v2; // x0
  struct SeManager_StaticFields *static_fields; // x8
  int v4; // w9
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  SeManager_c *v8; // x8
  SoundManager_o *v9; // x19
  struct System_String_array *LoadSeList; // x8
  System_String_array *CueList; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  SeManager___c_c *v14; // x0
  struct SeManager___c_StaticFields *v15; // x8
  System_Func_object__object__o *_9__31_0; // x20
  Il2CppObject *v17; // x21
  struct SeManager___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Object_array *v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  SeManager_c *v34; // x8
  System_Object_array *v35; // x19
  struct SeManager_StaticFields *v36; // x0
  const MethodInfo *v37; // x2
  SeManager_c *v38; // x8
  SoundManager_o *v39; // x19
  struct System_String_array *v40; // x8
  System_String_array *v41; // x0
  __int64 v42; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x19
  SeManager___c_c *v44; // x0
  struct SeManager___c_StaticFields *v45; // x8
  System_Func_object__object__o *_9__31_1; // x20
  Il2CppObject *v47; // x21
  struct SeManager___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Object_array *v56; // x0
  __int64 v57; // x1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  SeManager_c *v64; // x8
  System_Object_array *v65; // x19
  struct SeManager_StaticFields *v66; // x0
  SeManager_c *v67; // x0

  if ( (byte_5937FDA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_21FFC50(&System_Func_string__string__TypeInfo);
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&Method_SeManager___c__LoadEndResidentSeAsset_b__31_0__);
    sub_21FFC50(&Method_SeManager___c__LoadEndResidentSeAsset_b__31_1__);
    sub_21FFC50(&SeManager___c_TypeInfo);
    byte_5937FDA = 1;
  }
  v2 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v1);
    v2 = SeManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  v4 = static_fields->loadCounter - 1;
  static_fields->loadCounter = v4;
  if ( !v4 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v8 = SeManager_TypeInfo;
    v9 = (SoundManager_o *)Instance;
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v6);
      v8 = SeManager_TypeInfo;
    }
    LoadSeList = v8->static_fields->LoadSeList;
    if ( LoadSeList )
    {
      if ( (LoadSeList->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_41;
      if ( !v9 )
        goto LABEL_40;
      CueList = SoundManager__GetCueList(v9, LoadSeList->m_Items[1], v7);
      if ( CueList )
      {
        v13 = (System_Collections_Generic_IEnumerable_TSource__o *)CueList;
        v14 = SeManager___c_TypeInfo;
        if ( !*(&SeManager___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SeManager___c_TypeInfo, v12);
          v14 = SeManager___c_TypeInfo;
        }
        v15 = v14->static_fields;
        _9__31_0 = (System_Func_object__object__o *)v15->__9__31_0;
        if ( !_9__31_0 )
        {
          if ( !*(&v14->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v14, v12);
            v15 = SeManager___c_TypeInfo->static_fields;
          }
          v17 = (Il2CppObject *)v15->__9;
          _9__31_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_string__string__TypeInfo);
          System_Func_object__object____ctor(_9__31_0, v17, Method_SeManager___c__LoadEndResidentSeAsset_b__31_0__, 0);
          v18 = SeManager___c_TypeInfo->static_fields;
          v18->__9__31_0 = (struct System_Func_string__string__o *)_9__31_0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v18->__9__31_0,
            (int32_t)_9__31_0,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
        }
        v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                     v13,
                                                                     (System_Func_TSource__TResult__o *)_9__31_0,
                                                                     (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_string__string___);
        v26 = System_Linq_Enumerable__ToArray_object_(
                v25,
                (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
        v34 = SeManager_TypeInfo;
        v35 = v26;
        if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v27);
          v34 = SeManager_TypeInfo;
        }
        v36 = v34->static_fields;
        v36->seAssetBundleList = (struct System_String_array *)v35;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v36->seAssetBundleList,
          (int32_t)v35,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      v38 = SeManager_TypeInfo;
      v39 = (SoundManager_o *)Instance;
      if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v6);
        v38 = SeManager_TypeInfo;
      }
      v40 = v38->static_fields->LoadSeList;
      if ( !v40 )
        goto LABEL_40;
      if ( !LODWORD(v40->max_length) )
LABEL_41:
        sub_21FFED4(Instance);
      if ( v39 )
      {
        v41 = SoundManager__GetCueList(v39, v40->m_Items[0], v37);
        if ( v41 )
        {
          v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v41;
          v44 = SeManager___c_TypeInfo;
          if ( !*(&SeManager___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(SeManager___c_TypeInfo, v42);
            v44 = SeManager___c_TypeInfo;
          }
          v45 = v44->static_fields;
          _9__31_1 = (System_Func_object__object__o *)v45->__9__31_1;
          if ( !_9__31_1 )
          {
            if ( !*(&v44->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v44, v42);
              v45 = SeManager___c_TypeInfo->static_fields;
            }
            v47 = (Il2CppObject *)v45->__9;
            _9__31_1 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_string__string__TypeInfo);
            System_Func_object__object____ctor(_9__31_1, v47, Method_SeManager___c__LoadEndResidentSeAsset_b__31_1__, 0);
            v48 = SeManager___c_TypeInfo->static_fields;
            v48->__9__31_1 = (struct System_Func_string__string__o *)_9__31_1;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v48->__9__31_1,
              (int32_t)_9__31_1,
              v49,
              v50,
              v51,
              v52,
              v53,
              v54);
          }
          v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                       v43,
                                                                       (System_Func_TSource__TResult__o *)_9__31_1,
                                                                       (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_string__string___);
          v56 = System_Linq_Enumerable__ToArray_object_(
                  v55,
                  (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
          v64 = SeManager_TypeInfo;
          v65 = v56;
          if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v57);
            v64 = SeManager_TypeInfo;
          }
          v66 = v64->static_fields;
          v66->residentSeAssetBundleList = (struct System_String_array *)v65;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v66->residentSeAssetBundleList,
            (int32_t)v65,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63);
        }
        v67 = SeManager_TypeInfo;
        if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v42);
          v67 = SeManager_TypeInfo;
        }
        v67->static_fields->IsBusy = 0;
        return;
      }
    }
LABEL_40:
    sub_21FFECC(Instance, v6);
  }
}


void SeManager__LoadSe(System_String_o *name, System_Action_o *callbackFunc, const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_5937FEF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FEF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_21FFECC(v6, v7);
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
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_5938006 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5938006 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v5 )
  {
    if ( !Instance )
      sub_21FFECC(v5, v6);
    SeManager__PauseSeLocal((SeManager_o *)Instance, isPause, 0, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void SeManager__PauseSeLocal(SeManager_o *this, bool isPause, int32_t seType, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int size; // w22
  System_Collections_Generic_List_object__o *v9; // x0
  SePlayer_o *Item; // x0
  const MethodInfo *v11; // x2

  if ( (byte_5938008 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_5938008 = 1;
  }
  workSePlayerStatusList = this->fields.workSePlayerStatusList;
  if ( workSePlayerStatusList )
  {
    size = workSePlayerStatusList->fields._size;
    if ( size - 1 >= 0 )
    {
      do
      {
        v9 = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
        if ( !v9 )
          sub_21FFECC(0, isPause);
        Item = (SePlayer_o *)System_Collections_Generic_List_object___get_Item(
                               v9,
                               --size,
                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
        if ( Item )
        {
          if ( Item->fields.seType == seType )
            SePlayer__SetPause(Item, isPause, v11);
        }
      }
      while ( size > 0 );
    }
  }
}


void SeManager__PauseVoice(bool isPause, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_5938007 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5938007 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v5 )
  {
    if ( !Instance )
      sub_21FFECC(v5, v6);
    SeManager__PauseSeLocal((SeManager_o *)Instance, isPause, 1, v7);
  }
}


void SeManager__PlayCommonSe(int32_t kind, bool ignorePreDelay, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_5937FE7 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FE7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
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
  if ( (byte_5937FEA & 1) == 0 )
  {
    this = (SeManager_o *)sub_21FFC50(&SeManager_TypeInfo);
    byte_5937FEA = 1;
  }
  commonSeClipNames = v7->fields.commonSeClipNames;
  if ( !commonSeClipNames )
    sub_21FFECC(this, *(_QWORD *)&kind);
  if ( LODWORD(commonSeClipNames->max_length) <= kind )
    sub_21FFED4(this);
  v9 = commonSeClipNames->m_Items[kind];
  v10 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, *(_QWORD *)&kind);
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
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5937FE9 & 1) == 0 )
  {
    sub_21FFC50(&SeManager__PlayCommonSeWithDelay_d__50_TypeInfo);
    byte_5937FE9 = 1;
  }
  v9 = ignorePreDelay;
  v10 = sub_21FFEBC(SeManager__PlayCommonSeWithDelay_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  result = (System_Collections_IEnumerator_o *)v10;
  *(_DWORD *)(v10 + 40) = kind;
  *(float *)(v10 + 36) = delay;
  *(_DWORD *)(v10 + 32) = waitFrameCount;
  *(_BYTE *)(v10 + 44) = v9;
  return result;
}


void SeManager__PlayCommonSe_48368796(
        int32_t kind,
        float delayTime,
        int32_t waitFrameCount,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  Il2CppObject *Instance; // x22
  System_Collections_IEnumerator_o *v12; // x0
  __int64 v13; // x1

  if ( (byte_5937FE8 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FE8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v9);
  v12 = SeManager__PlayCommonSeWithDelay(kind, delayTime, waitFrameCount, ignorePreDelay, v10);
  if ( !Instance )
    sub_21FFECC(v12, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)Instance, v12, 0);
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
  SePlayer_c *v21; // x0
  int32_t v22; // w27
  SePlayer_o *v23; // x19
  int32_t v24; // w3
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_List_object__o *workSePlayerStatusList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  const MethodInfo *v38; // [xsp+10h] [xbp-80h]

  if ( (byte_5938014 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__Add__);
    sub_21FFC50(&SePlayer_TypeInfo);
    byte_5938014 = 1;
  }
  v21 = SePlayer_TypeInfo;
  v22 = this->fields.sePlayNum + 1;
  this->fields.sePlayNum = v22;
  v23 = (SePlayer_o *)sub_21FFEBC(v21);
  SePlayer___ctor(
    v23,
    v22,
    seType,
    v24,
    pathName,
    name,
    volume,
    isLoop,
    fadeinTime,
    callbackFunc,
    notOverwrite,
    ignorePreDelay,
    v38);
  workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
  if ( workSePlayerStatusList )
  {
    items = workSePlayerStatusList->fields._items;
    v34 = Method_System_Collections_Generic_List_SePlayer__Add__;
    ++workSePlayerStatusList->fields._version;
    if ( !items )
      sub_21FFECC(workSePlayerStatusList, v25);
    size = workSePlayerStatusList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        workSePlayerStatusList,
        (Il2CppObject *)v23,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = &items->obj.klass + size;
      workSePlayerStatusList->fields._size = size + 1;
      v36[4] = (Il2CppClass *)v23;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v23, v26, v27, v28, v29, v30, v31);
    }
  }
  return v23;
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
  __int64 v13; // x1
  Il2CppObject *Instance; // x23
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x7

  if ( (byte_5937FF1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FF1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v15 )
    return 0;
  if ( !Instance )
    sub_21FFECC(v15, v16);
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
           v17);
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
  const MethodInfo_476E8C0 *v19; // x0
  int32_t v20; // w26
  SoundManager_o *Instance; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  System_String_o *CueSheet; // x0
  System_String_o *v25; // x28
  SePlayer_o *seAssetBundleList; // x27
  int32_t v27; // w3
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v35; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v37; // x8
  struct System_String_array *residentSeAssetBundleList; // x27
  Il2CppObject *v40; // x0
  int32_t v41; // w8
  __int64 v42; // x8
  Il2CppObject *v43; // x0
  __int64 v44; // x8
  const MethodInfo *v45; // [xsp+10h] [xbp-80h]

  if ( (byte_5938016 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__Add__);
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&SePlayer_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&StringLiteral_11843/*"ResidentSE/"*/);
    sub_21FFC50(&StringLiteral_13162/*"Se/"*/);
    byte_5938016 = 1;
  }
  v19 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__;
  v20 = this->fields.sePlayNum + 1;
  this->fields.sePlayNum = v20;
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance(v19);
  if ( !Instance )
    goto LABEL_35;
  CueSheet = SoundManager__GetCueSheet(Instance, name, v23);
  if ( CueSheet )
  {
    v25 = CueSheet;
LABEL_6:
    seAssetBundleList = (SePlayer_o *)sub_21FFEBC(SePlayer_TypeInfo);
    SePlayer___ctor(
      seAssetBundleList,
      v20,
      seType,
      v27,
      v25,
      name,
      volume,
      isLoop,
      fadeinTime,
      callbackFunc,
      notOverwrite,
      ignorePreDelay,
      v45);
    Instance = (SoundManager_o *)this->fields.workSePlayerStatusList;
    if ( Instance )
    {
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v35 = Method_System_Collections_Generic_List_SePlayer__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( m_CachedPtr )
      {
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)seAssetBundleList,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v37 + 32) = seAssetBundleList;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v37 + 32),
            (int32_t)seAssetBundleList,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
        }
        return seAssetBundleList;
      }
    }
LABEL_35:
    sub_21FFECC(Instance, v22);
  }
  Instance = (SoundManager_o *)SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v22);
    Instance = (SoundManager_o *)SeManager_TypeInfo;
  }
  residentSeAssetBundleList = (struct System_String_array *)*((_QWORD *)Instance[2].monitor + 3);
  if ( residentSeAssetBundleList )
  {
    if ( !HIDWORD(Instance[2].fields.SoundCpkLoader) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v22);
      residentSeAssetBundleList = SeManager_TypeInfo->static_fields->residentSeAssetBundleList;
    }
    v40 = (Il2CppObject *)System_String__Concat_75438412((System_String_o *)StringLiteral_11843/*"ResidentSE/"*/, name, 0);
    v41 = System_Array__IndexOf_object_(
            (System_Object_array *)residentSeAssetBundleList,
            v40,
            (const MethodInfo_39FB15C *)Method_System_Array_IndexOf_string___);
    Instance = (SoundManager_o *)SeManager_TypeInfo;
    if ( (v41 & 0x80000000) == 0 )
    {
      if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v22);
        Instance = (SoundManager_o *)SeManager_TypeInfo;
      }
      v42 = *(_QWORD *)Instance[2].monitor;
      if ( !v42 )
        goto LABEL_35;
      if ( *(_DWORD *)(v42 + 24) )
      {
        v25 = *(System_String_o **)(v42 + 32);
        goto LABEL_6;
      }
LABEL_36:
      sub_21FFED4(Instance);
    }
  }
  if ( !HIDWORD(Instance[2].fields.SoundCpkLoader) )
  {
    j_il2cpp_runtime_class_init_0(Instance, v22);
    Instance = (SoundManager_o *)SeManager_TypeInfo;
  }
  seAssetBundleList = (SePlayer_o *)*((_QWORD *)Instance[2].monitor + 2);
  if ( seAssetBundleList )
  {
    if ( !HIDWORD(Instance[2].fields.SoundCpkLoader) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v22);
      seAssetBundleList = (SePlayer_o *)SeManager_TypeInfo->static_fields->seAssetBundleList;
    }
    v43 = (Il2CppObject *)System_String__Concat_75438412((System_String_o *)StringLiteral_13162/*"Se/"*/, name, 0);
    if ( System_Array__IndexOf_object_(
           (System_Object_array *)seAssetBundleList,
           v43,
           (const MethodInfo_39FB15C *)Method_System_Array_IndexOf_string___) < 0 )
      return 0;
    Instance = (SoundManager_o *)SeManager_TypeInfo;
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v22);
      Instance = (SoundManager_o *)SeManager_TypeInfo;
    }
    v44 = *(_QWORD *)Instance[2].monitor;
    if ( !v44 )
      goto LABEL_35;
    if ( (*(_DWORD *)(v44 + 24) & 0xFFFFFFFE) != 0 )
    {
      v25 = *(System_String_o **)(v44 + 40);
      goto LABEL_6;
    }
    goto LABEL_36;
  }
  return seAssetBundleList;
}


SePlayer_o *SeManager__PlaySeLocal_48438820(
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
  __int64 v9; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x7

  if ( (byte_5937FF4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FF4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_21FFECC(v11, v12);
  return SeManager__PlaySeLocal((SeManager_o *)Instance, 0, name, volume, 1, fadeinTime, 0, 0, ignorePreDelay, v13);
}


SePlayer_o *SeManager__PlaySeLoop_48439136(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v11; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v16; // [xsp+8h] [xbp-58h]

  if ( (byte_5937FF5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FF5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v13 )
    return 0;
  if ( !Instance )
    sub_21FFECC(v13, v14);
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
           v16);
}


SePlayer_o *SeManager__PlaySeLoop_48439388(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v11; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v16; // [xsp+8h] [xbp-58h]

  if ( (byte_5937FF6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FF6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v13 )
    return 0;
  if ( !assetData || !Instance )
    sub_21FFECC(v13, v14);
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
           v16);
}


SePlayer_o *SeManager__PlaySe_48365672(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool notOverwrite,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v15; // x1
  Il2CppObject *Instance; // x24
  _BOOL8 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v20; // [xsp+8h] [xbp-68h]

  if ( (byte_5937FF2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FF2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v17 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v17 )
    return 0;
  if ( !Instance )
    sub_21FFECC(v17, v18);
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
           v20);
}


SePlayer_o *SeManager__PlaySe_48438876(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v13; // x1
  Il2CppObject *Instance; // x23
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v18; // [xsp+8h] [xbp-58h]

  if ( (byte_5937FF3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FF3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v15 )
    return 0;
  if ( !assetData || !Instance )
    sub_21FFECC(v15, v16);
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
           v18);
}


CriAtomSource_o *SeManager__PlaySystemSe(int32_t kind, bool ignorePreDelay, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_5937FE5 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FE5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  return SeManager__PlaySystemSeLocal((SeManager_o *)Instance, kind, ignorePreDelay, v7);
}


// local variable allocation has failed, the output may be wrong!
CriAtomSource_o *SeManager__PlaySystemSeLocal(
        SeManager_o *this,
        int32_t kind,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SeManager_o *v10; // x20
  struct CriAtomSource_array *systemSeSources; // x8
  __int64 systemSeIdx; // x9
  CriAtomSource_o *v13; // x21
  int v14; // w8
  struct CriAtomSource_array *v15; // x9
  struct System_String_array *systemSeClipNames; // x8
  System_String_o *v17; // x23
  int v18; // w10
  struct System_String_o *RESIDENT_RESOURCE_SOUND_NAME; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  SeManager_c *v27; // x0
  const MethodInfo *v28; // x3
  float PreDelayTime; // s0
  CriAtomExPlayer_o *player_k__BackingField; // x24
  SoundManager_c *v31; // x0

  v10 = this;
  if ( (byte_593800D & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    this = (SeManager_o *)sub_21FFC50(&SoundManager_TypeInfo);
    byte_593800D = 1;
  }
  systemSeSources = v10->fields.systemSeSources;
  if ( !systemSeSources )
    goto LABEL_36;
  systemSeIdx = v10->fields.systemSeIdx;
  if ( (unsigned int)systemSeIdx >= LODWORD(systemSeSources->max_length) )
LABEL_37:
    sub_21FFED4(this);
  v13 = systemSeSources->m_Items[systemSeIdx];
  if ( !v13 )
    goto LABEL_36;
  if ( v13->fields._loop )
  {
    this = (SeManager_o *)CriAtomSource__get_status(v13, 0);
    if ( (_DWORD)this == 1 || (this = (SeManager_o *)CriAtomSource__get_status(v13, 0), (_DWORD)this == 2) )
    {
      v14 = (v10->fields.systemSeIdx + 1) % v10->fields.SYSTEM_SE_MAX;
      v15 = v10->fields.systemSeSources;
      v10->fields.systemSeIdx = v14;
      if ( !v15 )
        goto LABEL_36;
      if ( (unsigned int)v14 >= LODWORD(v15->max_length) )
        goto LABEL_37;
      v13 = v15->m_Items[v14];
    }
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, *(_QWORD *)&kind);
  if ( !byte_593809F )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593809F = 1;
  }
  this = (SeManager_o *)SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, *(_QWORD *)&kind);
    this = (SeManager_o *)SeManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)&this[1].fields.SYSTEM_SE_MAX + 32LL) )
  {
    systemSeClipNames = v10->fields.systemSeClipNames;
    if ( !systemSeClipNames )
      goto LABEL_36;
    if ( LODWORD(systemSeClipNames->max_length) > kind )
    {
      v17 = systemSeClipNames->m_Items[kind];
      this = (SeManager_o *)SoundManager_TypeInfo;
      v18 = *(&SoundManager_TypeInfo->_2.cctor_finished + 1);
      v10->fields.systemSeIdx = (v10->fields.systemSeIdx + 1) % v10->fields.SYSTEM_SE_MAX;
      if ( !v18 )
        j_il2cpp_runtime_class_init_0(this, *(_QWORD *)&kind);
      if ( v13 )
      {
        RESIDENT_RESOURCE_SOUND_NAME = SoundManager_TypeInfo->static_fields->RESIDENT_RESOURCE_SOUND_NAME;
        v13->fields._cueSheet = RESIDENT_RESOURCE_SOUND_NAME;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v13->fields._cueSheet,
          (int32_t)RESIDENT_RESOURCE_SOUND_NAME,
          (System_String_o *)ignorePreDelay,
          (System_String_o *)method,
          v4,
          v5,
          v6,
          v7);
        v13->fields._cueName = v17;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v13->fields._cueName,
          (int32_t)v17,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        v27 = SeManager_TypeInfo;
        if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v26);
          v27 = SeManager_TypeInfo;
        }
        CriAtomSource__set_volume(v13, v27->static_fields->masterVolume, 0);
        this = (SeManager_o *)v13->fields._player_k__BackingField;
        if ( this )
        {
          CriAtomExPlayer__Stop((CriAtomExPlayer_o *)this, 1, 0);
          PreDelayTime = 0.0;
          player_k__BackingField = v13->fields._player_k__BackingField;
          v13->fields._loop = 0;
          if ( !ignorePreDelay )
          {
            v31 = SoundManager_TypeInfo;
            if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, *(_QWORD *)&kind);
              v31 = SoundManager_TypeInfo;
            }
            PreDelayTime = SeManager__GetPreDelayTime(v10, v31->static_fields->RESIDENT_RESOURCE_SOUND_NAME, v17, v28);
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
      sub_21FFECC(this, *(_QWORD *)&kind);
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
  __int64 v9; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x7

  if ( (byte_5937FF7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FF7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_21FFECC(v11, v12);
  return SeManager__PlaySeLocal((SeManager_o *)Instance, 1, name, volume, 0, 0.0, callbackFunc, 0, ignorePreDelay, v13);
}


SePlayer_o *SeManager__PlayVoice_48439888(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v11; // x1
  Il2CppObject *Instance; // x23
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v16; // [xsp+8h] [xbp-58h]

  if ( (byte_5937FF8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FF8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v13 )
    return 0;
  if ( !Instance )
    sub_21FFECC(v13, v14);
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
           v16);
}


SePlayer_o *SeManager__PlayVoice_48440140(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v11; // x1
  Il2CppObject *Instance; // x23
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v16; // [xsp+8h] [xbp-58h]

  if ( (byte_5937FF9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FF9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v13 )
    return 0;
  if ( !assetData || !Instance )
    sub_21FFECC(v13, v14);
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
           v16);
}


bool SeManager__ReleaseAudioSource(SeManager_o *this, SePlayer_o *player, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t seMax; // w8
  struct SePlayer_array *sePlayerStatusList; // x9
  SeManager_o *v10; // x19
  char v11; // w20
  __int64 v12; // x12
  __int64 v13; // x21
  int32_t v14; // w13
  struct CriAtomSource_array *seSources; // x8

  seMax = this->fields.seMax;
  if ( seMax < 1 )
    return 0;
  sePlayerStatusList = this->fields.sePlayerStatusList;
  v10 = this;
  if ( !sePlayerStatusList )
    goto LABEL_15;
  v11 = 1;
  v12 = -32;
  v13 = 4;
  while ( 1 )
  {
    if ( (_DWORD)v13 - LODWORD(sePlayerStatusList->max_length) == 4 )
      goto LABEL_14;
    if ( *((SePlayer_o **)&sePlayerStatusList->obj.klass + v13) == player )
      break;
    v14 = v13++ - 3;
    v12 -= 8;
    v11 = v14 < seMax;
    if ( (_DWORD)v13 - seMax == 4 )
      return v11;
  }
  *((_QWORD *)&sePlayerStatusList->obj.klass + v13) = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)((char *)sePlayerStatusList - v12),
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  seSources = v10->fields.seSources;
  if ( !seSources )
    goto LABEL_15;
  if ( (unsigned int)(v13 - 4) >= LODWORD(seSources->max_length) )
LABEL_14:
    sub_21FFED4(this);
  this = (SeManager_o *)*((_QWORD *)&seSources->obj.klass + v13);
  if ( !this )
LABEL_15:
    sub_21FFECC(this, player);
  CriAtomSource__Stop((CriAtomSource_o *)this, 0);
  return v11;
}


void SeManager__ReleaseSe(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_5937FF0 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FF0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v2);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !Instance && !v4 )
    sub_21FFECC(v4, v5);
}


void SeManager__ReleaseSeLocal(SeManager_o *this, System_String_o *name, const MethodInfo *method)
{
  ;
}


void SeManager__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_5937FDE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FDE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v3 )
  {
    if ( !Instance )
      sub_21FFECC(v3, v4);
    SeManager__StopSeAllLocal((SeManager_o *)Instance, 0.0, v4);
  }
}


void SeManager__ResetLocal(SeManager_o *this, const MethodInfo *method)
{
  SeManager__StopSeAllLocal(this, 0.0, method);
}


void SeManager__SetMasterVolume(float volume, const MethodInfo *method)
{
  __int64 v2; // x1
  SeManager_c *v4; // x0
  struct SeManager_StaticFields *static_fields; // x8
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_5937FE3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FE3 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v2);
    v4 = SeManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->masterVolume != volume )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, v2);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    static_fields->masterVolume = volume;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v8 )
    {
      if ( !Instance )
        sub_21FFECC(v8, v9);
      SeManager__SetMuteLocal((SeManager_o *)Instance, v9);
    }
  }
}


void SeManager__SetMute(bool isMute, const MethodInfo *method)
{
  SeManager_c *v3; // x0
  _BOOL4 v4; // w19
  struct SeManager_StaticFields *static_fields; // x8
  const MethodInfo_476E8C0 *v6; // x0
  __int64 v7; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_5937FE0 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FE0 = 1;
  }
  v3 = SeManager_TypeInfo;
  v4 = isMute;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
    v3 = SeManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->isMute != v4 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    v6 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__;
    static_fields->isMute = v4;
    Instance = SingletonMonoBehaviour_object___get_Instance(v6);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v9 )
    {
      if ( !Instance )
        sub_21FFECC(v9, v10);
      SeManager__SetMuteLocal((SeManager_o *)Instance, v10);
    }
  }
}


void SeManager__SetMuteLocal(SeManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SeManager_o *Item; // x0
  unsigned __int64 v5; // x20
  struct CriAtomSource_array *systemSeSources; // x8
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int size; // w20

  if ( (byte_593800B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593800B = 1;
  }
  Item = (SeManager_o *)SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
    Item = (SeManager_o *)SeManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)&Item[1].fields.SYSTEM_SE_MAX + 32LL) && this->fields.SYSTEM_SE_MAX >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      systemSeSources = this->fields.systemSeSources;
      if ( !systemSeSources )
        break;
      if ( v5 >= LODWORD(systemSeSources->max_length) )
        sub_21FFED4(Item);
      SeManager__StopLocal(Item, systemSeSources->m_Items[v5++], v2);
      if ( (__int64)v5 >= this->fields.SYSTEM_SE_MAX )
        goto LABEL_11;
    }
LABEL_17:
    sub_21FFECC(Item, method);
  }
LABEL_11:
  workSePlayerStatusList = this->fields.workSePlayerStatusList;
  if ( workSePlayerStatusList )
  {
    size = workSePlayerStatusList->fields._size;
    if ( size - 1 >= 0 )
    {
      while ( 1 )
      {
        Item = (SeManager_o *)this->fields.workSePlayerStatusList;
        if ( !Item )
          break;
        Item = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Item,
                                --size,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
        if ( !Item )
          break;
        SePlayer__MuteSe((SePlayer_o *)Item, method);
        if ( size <= 0 )
          return;
      }
      goto LABEL_17;
    }
  }
}


void SeManager__SetPitchSe(System_String_o *name, float pitch, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  SePlayer_o *SePlayer_48446292; // x0

  if ( (byte_5938004 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5938004 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v7 )
  {
    if ( !Instance )
      sub_21FFECC(v7, v8);
    SePlayer_48446292 = SeManager__GetSePlayer_48446292((SeManager_o *)Instance, name, v9);
    if ( SePlayer_48446292 )
    {
      SePlayer_48446292->fields.pitchValue = pitch;
      SePlayer_48446292->fields.changePitchRequest = 1;
    }
  }
}


void SeManager__SetPitchSeLocal(SeManager_o *this, System_String_o *name, float pitch, const MethodInfo *method)
{
  SePlayer_o *SePlayer_48446292; // x0

  SePlayer_48446292 = SeManager__GetSePlayer_48446292(this, name, method);
  if ( SePlayer_48446292 )
  {
    SePlayer_48446292->fields.pitchValue = pitch;
    SePlayer_48446292->fields.changePitchRequest = 1;
  }
}


void SeManager__SetVoiceMasterVolume(float volume, const MethodInfo *method)
{
  __int64 v2; // x1
  SeManager_c *v4; // x0
  struct SeManager_StaticFields *static_fields; // x8
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_5937FE4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FE4 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v2);
    v4 = SeManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->masterVoiceVolume != volume )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, v2);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    static_fields->masterVoiceVolume = volume;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v8 )
    {
      if ( !Instance )
        sub_21FFECC(v8, v9);
      SeManager__SetMuteLocal((SeManager_o *)Instance, v9);
    }
  }
}


void SeManager__StopLocal(SeManager_o *this, CriAtomSource_o *player, const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_5938015 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5938015 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, player);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)player, 0, 0);
  if ( v4 )
  {
    if ( !player )
      sub_21FFECC(v4, v5);
    if ( CriAtomSource__get_status(player, 0) == 2 )
      CriAtomSource__Stop(player, 0);
  }
}


void SeManager__StopSe(int32_t num, float fadeoutTime, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_5937FFA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FFA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v7 )
  {
    if ( !Instance )
      sub_21FFECC(v7, v8);
    SeManager__StopSeLocal((SeManager_o *)Instance, num, fadeoutTime, v9);
  }
}


void SeManager__StopSeAll(float fadeoutTime, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_5938000 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5938000 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v5 )
  {
    if ( !Instance )
      sub_21FFECC(v5, v6);
    SeManager__StopSeAllLocal((SeManager_o *)Instance, fadeoutTime, v6);
  }
}


void SeManager__StopSeAllLocal(SeManager_o *this, float fadeoutTime, const MethodInfo *method)
{
  SeManager_o *v4; // x19
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int size; // w20

  v4 = this;
  if ( (byte_5938017 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    this = (SeManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_5938017 = 1;
  }
  workSePlayerStatusList = v4->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_9;
  size = workSePlayerStatusList->fields._size;
  if ( size - 1 >= 0 )
  {
    while ( 1 )
    {
      this = (SeManager_o *)v4->fields.workSePlayerStatusList;
      if ( !this )
        break;
      this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)this,
                              --size,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !this )
        break;
      SePlayer__StopSe((SePlayer_o *)this, fadeoutTime, method);
      if ( size <= 0 )
        return;
    }
LABEL_9:
    sub_21FFECC(this, method);
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


void SeManager__StopSeLocal_48440640(
        SeManager_o *this,
        System_String_o *name,
        float fadeoutTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_48446292; // x0
  const MethodInfo *v6; // x1

  SePlayer_48446292 = SeManager__GetSePlayer_48446292(this, name, method);
  if ( SePlayer_48446292 )
    SePlayer__StopSe(SePlayer_48446292, fadeoutTime, v6);
}


void SeManager__StopSeLocal_48440892(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float fadeoutTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_48446468; // x0
  const MethodInfo *v7; // x1

  SePlayer_48446468 = SeManager__GetSePlayer_48446468(this, assetName, objectName, method);
  if ( SePlayer_48446468 )
    SePlayer__StopSe(SePlayer_48446468, fadeoutTime, v7);
}


void SeManager__StopSe_48367476(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_5937FFB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FFB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v7 )
  {
    if ( !Instance )
      sub_21FFECC(v7, v8);
    SeManager__StopSeLocal_48440640((SeManager_o *)Instance, name, fadeoutTime, v9);
  }
}


void SeManager__StopSe_48440688(
        System_String_o *assetName,
        System_String_o *objectName,
        float fadeoutTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_5937FFC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FFC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v9 )
  {
    if ( !Instance )
      sub_21FFECC(v9, v10);
    SeManager__StopSeLocal_48440892((SeManager_o *)Instance, assetName, objectName, fadeoutTime, v11);
  }
}


void SeManager__StopSe_48440940(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_5937FFD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FFD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v11 )
  {
    if ( !Instance )
      sub_21FFECC(v11, v12);
    SeManager__ChangeVolumeSeLocal_48441152((SeManager_o *)Instance, assetName, objectName, volume, fadeTime, v13);
  }
}


void SeManager__StopSystemSe(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_5937FFE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FFE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v3 )
  {
    if ( !Instance )
      sub_21FFECC(v3, v4);
    SeManager__StopSystemSeLocal((SeManager_o *)Instance, v4);
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
        sub_21FFED4(this);
      this = (SeManager_o *)systemSeSources->m_Items[v3];
      if ( !this )
LABEL_8:
        sub_21FFECC(this, method);
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
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_5937FFF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5937FFF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v9 )
  {
    if ( !Instance )
      sub_21FFECC(v9, v10);
    SeManager__StopVoiceLocal((SeManager_o *)Instance, assetName, objectName, fadeoutTime, v11);
  }
}


void SeManager__StopVoiceAll(float fadeoutTime, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_5938001 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_5938001 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v5 )
  {
    if ( !Instance )
      sub_21FFECC(v5, v6);
    SeManager__StopVoiceAllLocal((SeManager_o *)Instance, fadeoutTime, v6);
  }
}


void SeManager__StopVoiceAllLocal(SeManager_o *this, float fadeoutTime, const MethodInfo *method)
{
  SeManager_o *v4; // x19
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int size; // w20

  v4 = this;
  if ( (byte_5938018 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    this = (SeManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_5938018 = 1;
  }
  workSePlayerStatusList = v4->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_11;
  size = workSePlayerStatusList->fields._size;
  if ( size - 1 >= 0 )
  {
    while ( 1 )
    {
      this = (SeManager_o *)v4->fields.workSePlayerStatusList;
      if ( !this )
        break;
      this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)this,
                              --size,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !this )
        break;
      if ( LODWORD(this->fields.m_CachedPtr) == 1 )
        SePlayer__StopSe((SePlayer_o *)this, fadeoutTime, method);
      if ( size <= 0 )
        return;
    }
LABEL_11:
    sub_21FFECC(this, method);
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
  SePlayer_o *SePlayer_48446892; // x0
  const MethodInfo *v8; // x1

  SePlayer_48446892 = SeManager__GetSePlayer_48446892(this, 1, assetName, objectName, v5);
  if ( SePlayer_48446892 )
    SePlayer__StopSe(SePlayer_48446892, fadeoutTime, v8);
}


System_String_array *SeManager__getLoadSeNameList(const MethodInfo *method)
{
  __int64 v1; // x1
  SeManager_c *v2; // x0

  if ( (byte_5937FDB & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5937FDB = 1;
  }
  v2 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v1);
    v2 = SeManager_TypeInfo;
  }
  return v2->static_fields->LoadSeList;
}


bool SeManager__get_IsMute(const MethodInfo *method)
{
  __int64 v1; // x1
  SeManager_c *v2; // x0

  if ( (byte_5937FDF & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5937FDF = 1;
  }
  v2 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v1);
    v2 = SeManager_TypeInfo;
  }
  return v2->static_fields->isMute;
}


float SeManager__get_MasterVoiceVolume(const MethodInfo *method)
{
  __int64 v1; // x1
  SeManager_c *v2; // x0

  if ( (byte_5937FE2 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5937FE2 = 1;
  }
  v2 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v1);
    v2 = SeManager_TypeInfo;
  }
  return v2->static_fields->masterVoiceVolume;
}


float SeManager__get_MasterVolume(const MethodInfo *method)
{
  __int64 v1; // x1
  SeManager_c *v2; // x0

  if ( (byte_5937FE1 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5937FE1 = 1;
  }
  v2 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v1);
    v2 = SeManager_TypeInfo;
  }
  return v2->static_fields->masterVolume;
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
  MethodInfo *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  int32_t i_5__2; // w8
  Il2CppObject **v11; // x19
  bool result; // w0
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v14; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t kind; // w20
  _BOOL4 ignorePreDelay; // w21

  if ( (byte_593801F & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_593801F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    kind = this->fields.kind;
    ignorePreDelay = this->fields.ignorePreDelay;
    this->fields.__1__state = -1;
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
    SeManager__PlayCommonSe(kind, ignorePreDelay, v2);
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields._i_5__2 = 0;
      this->fields.__1__state = -1;
      goto LABEL_8;
    }
    return 0;
  }
  i_5__2 = this->fields._i_5__2;
  this->fields.__1__state = -1;
  _1__state = i_5__2 + 1;
  this->fields._i_5__2 = _1__state;
LABEL_8:
  if ( _1__state >= this->fields.waitFrameCount )
  {
    delay = this->fields.delay;
    v14 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v14, delay, 0);
    this->fields.__2__current = (Il2CppObject *)v14;
    p__2__current = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v14, v16, v17, v18, v19, v20, v21);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 2;
  }
  else
  {
    this->fields.__2__current = 0;
    v11 = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v11, 0, (System_String_o *)v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)v11 - 2) = 1;
  }
  return result;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_SeManager__PlayCommonSeWithDelay_d__50_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593801C & 1) == 0 )
  {
    sub_21FFC50(&SeManager___c_TypeInfo);
    byte_593801C = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(SeManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SeManager___c_TypeInfo->static_fields->__9 = (struct SeManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SeManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_593801D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13162/*"Se/"*/);
    byte_593801D = 1;
  }
  return System_String__Concat_75438412((System_String_o *)StringLiteral_13162/*"Se/"*/, str, 0);
}


System_String_o *SeManager___c___LoadEndResidentSeAsset_b__31_1(
        SeManager___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_593801E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11843/*"ResidentSE/"*/);
    byte_593801E = 1;
  }
  return System_String__Concat_75438412((System_String_o *)StringLiteral_11843/*"ResidentSE/"*/, str, 0);
}