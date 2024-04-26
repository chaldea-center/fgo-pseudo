void __fastcall BuffList___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v1; // x19
  BuffList_ActInfo_o *v2; // x0
  __int64 v3; // x1
  int plusTypes; // w8
  BuffList_TYPE_array *v5; // x20
  int v6; // w8
  BuffList_TYPE_array *v7; // x21
  BuffList_ActInfo_o *v8; // x22
  int v9; // w8
  BuffList_TYPE_array *v10; // x20
  int v11; // w8
  BuffList_TYPE_array *v12; // x21
  BuffList_ActInfo_o *v13; // x22
  BuffList_TYPE_array *v14; // x20
  BuffList_TYPE_array *v15; // x21
  BuffList_ActInfo_o *v16; // x22
  BuffList_TYPE_array *v17; // x20
  BuffList_TYPE_array *v18; // x21
  BuffList_ActInfo_o *v19; // x22
  BuffList_TYPE_array *v20; // x20
  BuffList_TYPE_array *v21; // x21
  BuffList_ActInfo_o *v22; // x22
  BuffList_TYPE_array *v23; // x20
  BuffList_TYPE_array *v24; // x21
  BuffList_ActInfo_o *v25; // x22
  System_String_o *v26; // x0
  BuffList_TYPE_array *v27; // x20
  BuffList_TYPE_array *v28; // x21
  BuffList_ActInfo_o *v29; // x22
  System_String_o *v30; // x0
  BuffList_TYPE_array *v31; // x20
  BuffList_TYPE_array *v32; // x21
  BuffList_ActInfo_o *v33; // x22
  System_String_o *v34; // x0
  BuffList_TYPE_array *v35; // x20
  BuffList_TYPE_array *v36; // x21
  BuffList_ActInfo_o *v37; // x22
  System_String_o *v38; // x0
  BuffList_TYPE_array *v39; // x20
  BuffList_TYPE_array *v40; // x21
  BuffList_ActInfo_o *v41; // x22
  System_String_o *v42; // x0
  BuffList_TYPE_array *v43; // x20
  BuffList_TYPE_array *v44; // x21
  BuffList_ActInfo_o *v45; // x22
  System_String_o *v46; // x0
  BuffList_TYPE_array *v47; // x20
  BuffList_TYPE_array *v48; // x21
  BuffList_ActInfo_o *v49; // x22
  System_String_o *v50; // x0
  BuffList_TYPE_array *v51; // x20
  BuffList_TYPE_array *v52; // x21
  BuffList_ActInfo_o *v53; // x22
  System_String_o *v54; // x0
  BuffList_TYPE_array *v55; // x20
  BuffList_TYPE_array *v56; // x21
  BuffList_ActInfo_o *v57; // x22
  System_String_o *v58; // x0
  BuffList_TYPE_array *v59; // x20
  BuffList_TYPE_array *v60; // x22
  BuffList_ActInfo_o *v61; // x21
  System_String_o *v62; // x0
  BuffList_TYPE_array *v63; // x20
  BuffList_TYPE_array *v64; // x21
  BuffList_ActInfo_o *v65; // x22
  System_String_o *v66; // x0
  BuffList_TYPE_array *v67; // x20
  BuffList_TYPE_array *v68; // x21
  BuffList_ActInfo_o *v69; // x22
  BuffList_TYPE_array *v70; // x20
  BuffList_TYPE_array *v71; // x21
  BuffList_ActInfo_o *v72; // x22
  BuffList_TYPE_array *v73; // x20
  BuffList_TYPE_array *v74; // x21
  BuffList_ActInfo_o *v75; // x22
  BuffList_TYPE_array *v76; // x20
  BuffList_TYPE_array *v77; // x21
  BuffList_ActInfo_o *v78; // x22
  BuffList_TYPE_array *v79; // x20
  BuffList_TYPE_array *v80; // x21
  BuffList_ActInfo_o *v81; // x22
  BuffList_TYPE_array *v82; // x20
  BuffList_TYPE_array *v83; // x21
  BuffList_ActInfo_o *v84; // x22
  BuffList_TYPE_array *v85; // x20
  BuffList_TYPE_array *v86; // x21
  BuffList_ActInfo_o *v87; // x22
  int v88; // w8
  BuffList_TYPE_array *v89; // x20
  int v90; // w8
  BuffList_TYPE_array *v91; // x21
  BuffList_ActInfo_o *v92; // x22
  BuffList_TYPE_array *v93; // x20
  BuffList_TYPE_array *v94; // x21
  BuffList_ActInfo_o *v95; // x22
  BuffList_TYPE_array *v96; // x20
  BuffList_TYPE_array *v97; // x21
  BuffList_ActInfo_o *v98; // x22
  BuffList_TYPE_array *v99; // x20
  BuffList_TYPE_array *v100; // x21
  BuffList_ActInfo_o *v101; // x22
  int v102; // w8
  BuffList_TYPE_array *v103; // x20
  int v104; // w8
  BuffList_TYPE_array *v105; // x21
  BuffList_ActInfo_o *v106; // x22
  BuffList_TYPE_array *v107; // x20
  BuffList_TYPE_array *v108; // x21
  BuffList_ActInfo_o *v109; // x22
  BuffList_TYPE_array *v110; // x20
  BuffList_TYPE_array *v111; // x21
  BuffList_ActInfo_o *v112; // x22
  System_String_o *v113; // x0
  BuffList_TYPE_array *v114; // x20
  BuffList_TYPE_array *v115; // x21
  BuffList_ActInfo_o *v116; // x22
  BuffList_TYPE_array *v117; // x20
  BuffList_TYPE_array *v118; // x21
  BuffList_ActInfo_o *v119; // x22
  System_String_o *v120; // x0
  BuffList_TYPE_array *v121; // x20
  BuffList_TYPE_array *v122; // x22
  BuffList_ActInfo_o *v123; // x21
  System_String_o *v124; // x0
  BuffList_TYPE_array *v125; // x20
  BuffList_TYPE_array *v126; // x22
  BuffList_ActInfo_o *v127; // x21
  System_String_o *v128; // x0
  BuffList_TYPE_array *v129; // x20
  BuffList_TYPE_array *v130; // x22
  BuffList_ActInfo_o *v131; // x21
  System_String_o *v132; // x0
  BuffList_TYPE_array *v133; // x20
  BuffList_TYPE_array *v134; // x21
  BuffList_ActInfo_o *v135; // x22
  __int64 v136; // x1
  System_String_o *v137; // x0
  BuffList_TYPE_array *v138; // x20
  BuffList_TYPE_array *v139; // x21
  BuffList_ActInfo_o *v140; // x22
  BuffList_TYPE_array *v141; // x20
  BuffList_TYPE_array *v142; // x21
  BuffList_ActInfo_o *v143; // x22
  System_String_o *v144; // x0
  BuffList_TYPE_array *v145; // x20
  BuffList_TYPE_array *v146; // x21
  BuffList_ActInfo_o *v147; // x22
  System_String_o *v148; // x0
  BuffList_TYPE_array *v149; // x20
  BuffList_TYPE_array *v150; // x21
  BuffList_ActInfo_o *v151; // x22
  System_String_o *v152; // x0
  BuffList_TYPE_array *v153; // x20
  BuffList_TYPE_array *v154; // x21
  BuffList_ActInfo_o *v155; // x22
  BuffList_TYPE_array *v156; // x20
  BuffList_TYPE_array *v157; // x21
  BuffList_ActInfo_o *v158; // x22
  BuffList_TYPE_array *v159; // x20
  BuffList_TYPE_array *v160; // x21
  BuffList_ActInfo_o *v161; // x22
  BuffList_TYPE_array *v162; // x20
  BuffList_TYPE_array *v163; // x21
  BuffList_ActInfo_o *v164; // x22
  BuffList_TYPE_array *v165; // x20
  BuffList_TYPE_array *v166; // x21
  BuffList_ActInfo_o *v167; // x22
  BuffList_TYPE_array *v168; // x20
  BuffList_TYPE_array *v169; // x21
  BuffList_ActInfo_o *v170; // x22
  BuffList_TYPE_array *v171; // x20
  BuffList_TYPE_array *v172; // x21
  BuffList_ActInfo_o *v173; // x22
  BuffList_TYPE_array *v174; // x20
  BuffList_TYPE_array *v175; // x21
  BuffList_ActInfo_o *v176; // x22
  BuffList_TYPE_array *v177; // x20
  BuffList_TYPE_array *v178; // x21
  BuffList_ActInfo_o *v179; // x22
  System_String_o *v180; // x0
  BuffList_TYPE_array *v181; // x20
  BuffList_TYPE_array *v182; // x21
  BuffList_ActInfo_o *v183; // x22
  BuffList_TYPE_array *v184; // x20
  BuffList_TYPE_array *v185; // x22
  BuffList_ActInfo_o *v186; // x21
  System_String_o *v187; // x0
  BuffList_TYPE_array *v188; // x20
  BuffList_TYPE_array *v189; // x22
  BuffList_ActInfo_o *v190; // x21
  System_String_o *v191; // x0
  BuffList_TYPE_array *v192; // x20
  BuffList_TYPE_array *v193; // x22
  BuffList_ActInfo_o *v194; // x21
  System_String_o *v195; // x0
  BuffList_TYPE_array *v196; // x20
  BuffList_TYPE_array *v197; // x21
  BuffList_ActInfo_o *v198; // x22
  BuffList_TYPE_array *v199; // x20
  BuffList_TYPE_array *v200; // x21
  BuffList_ActInfo_o *v201; // x22
  BuffList_TYPE_array *v202; // x20
  BuffList_TYPE_array *v203; // x21
  BuffList_ActInfo_o *v204; // x22
  System_String_o *v205; // x0
  BuffList_TYPE_array *v206; // x20
  BuffList_TYPE_array *v207; // x21
  BuffList_ActInfo_o *v208; // x22
  System_String_o *v209; // x0
  BuffList_TYPE_array *v210; // x20
  BuffList_TYPE_array *v211; // x21
  BuffList_ActInfo_o *v212; // x22
  BuffList_TYPE_array *v213; // x20
  BuffList_TYPE_array *v214; // x21
  BuffList_ActInfo_o *v215; // x22
  BuffList_TYPE_array *v216; // x20
  BuffList_TYPE_array *v217; // x21
  BuffList_ActInfo_o *v218; // x22
  BuffList_TYPE_array *v219; // x20
  BuffList_TYPE_array *v220; // x21
  BuffList_ActInfo_o *v221; // x22
  BuffList_TYPE_array *v222; // x20
  BuffList_TYPE_array *v223; // x21
  BuffList_ActInfo_o *v224; // x22
  BuffList_TYPE_array *v225; // x20
  BuffList_TYPE_array *v226; // x21
  BuffList_ActInfo_o *v227; // x22
  BuffList_TYPE_array *v228; // x20
  BuffList_TYPE_array *v229; // x22
  BuffList_ActInfo_o *v230; // x21
  System_String_o *v231; // x0
  BuffList_TYPE_array *v232; // x20
  BuffList_TYPE_array *v233; // x21
  BuffList_ActInfo_o *v234; // x22
  System_String_o *v235; // x0
  BuffList_TYPE_array *v236; // x20
  BuffList_TYPE_array *v237; // x21
  BuffList_ActInfo_o *v238; // x22
  System_String_o *v239; // x0
  BuffList_TYPE_array *v240; // x20
  BuffList_TYPE_array *v241; // x21
  BuffList_ActInfo_o *v242; // x22
  System_String_o *v243; // x0
  BuffList_TYPE_array *v244; // x20
  BuffList_TYPE_array *v245; // x21
  BuffList_ActInfo_o *v246; // x22
  BuffList_TYPE_array *v247; // x20
  BuffList_TYPE_array *v248; // x21
  BuffList_ActInfo_o *v249; // x22
  BuffList_TYPE_array *v250; // x20
  BuffList_TYPE_array *v251; // x21
  BuffList_ActInfo_o *v252; // x22
  BuffList_TYPE_array *v253; // x20
  BuffList_TYPE_array *v254; // x21
  BuffList_ActInfo_o *v255; // x22
  BuffList_TYPE_array *v256; // x20
  BuffList_TYPE_array *v257; // x21
  BuffList_ActInfo_o *v258; // x22
  System_String_o *v259; // x0
  BuffList_TYPE_array *v260; // x20
  BuffList_TYPE_array *v261; // x21
  BuffList_ActInfo_o *v262; // x22
  BuffList_TYPE_array *v263; // x20
  BuffList_TYPE_array *v264; // x21
  BuffList_ActInfo_o *v265; // x22
  BuffList_TYPE_array *v266; // x20
  BuffList_TYPE_array *v267; // x21
  BuffList_ActInfo_o *v268; // x22
  BuffList_TYPE_array *v269; // x20
  BuffList_TYPE_array *v270; // x21
  BuffList_ActInfo_o *v271; // x22
  BuffList_TYPE_array *v272; // x20
  BuffList_TYPE_array *v273; // x21
  BuffList_ActInfo_o *v274; // x22
  BuffList_TYPE_array *v275; // x20
  BuffList_TYPE_array *v276; // x21
  BuffList_ActInfo_o *v277; // x22
  BuffList_TYPE_array *v278; // x20
  BuffList_TYPE_array *v279; // x21
  BuffList_ActInfo_o *v280; // x22
  BuffList_TYPE_array *v281; // x20
  BuffList_TYPE_array *v282; // x21
  BuffList_ActInfo_o *v283; // x22
  BuffList_TYPE_array *v284; // x20
  BuffList_TYPE_array *v285; // x21
  BuffList_ActInfo_o *v286; // x22
  BuffList_TYPE_array *v287; // x20
  BuffList_TYPE_array *v288; // x22
  BuffList_ActInfo_o *v289; // x21
  System_String_o *v290; // x0
  BuffList_TYPE_array *v291; // x20
  BuffList_TYPE_array *v292; // x22
  BuffList_ActInfo_o *v293; // x21
  System_String_o *v294; // x0
  BuffList_TYPE_array *v295; // x20
  BuffList_TYPE_array *v296; // x21
  BuffList_ActInfo_o *v297; // x22
  BuffList_TYPE_array *v298; // x20
  BuffList_TYPE_array *v299; // x21
  BuffList_ActInfo_o *v300; // x22
  BuffList_TYPE_array *v301; // x20
  BuffList_TYPE_array *v302; // x21
  BuffList_ActInfo_o *v303; // x22
  __int64 v304; // x1
  BuffList_TYPE_array *v305; // x20
  BuffList_TYPE_array *v306; // x21
  BuffList_ActInfo_o *v307; // x22
  BuffList_TYPE_array *v308; // x20
  BuffList_TYPE_array *v309; // x21
  BuffList_ActInfo_o *v310; // x22
  BuffList_TYPE_array *v311; // x20
  BuffList_TYPE_array *v312; // x21
  BuffList_ActInfo_o *v313; // x22
  System_Array_o *v314; // x21
  BuffList_TYPE_array *v315; // x22
  BuffList_ActInfo_o *v316; // x20
  System_String_o *v317; // x0
  BuffList_TYPE_array *v318; // x20
  BuffList_TYPE_array *v319; // x21
  BuffList_ActInfo_o *v320; // x22
  BuffList_TYPE_array *v321; // x20
  BuffList_TYPE_array *v322; // x21
  BuffList_ActInfo_o *v323; // x22
  BuffList_TYPE_array *v324; // x20
  BuffList_TYPE_array *v325; // x21
  BuffList_ActInfo_o *v326; // x22
  System_String_o *v327; // x0
  BuffList_TYPE_array *v328; // x20
  BuffList_TYPE_array *v329; // x21
  BuffList_ActInfo_o *v330; // x22
  System_String_o *v331; // x0
  BuffList_TYPE_array *v332; // x20
  BuffList_TYPE_array *v333; // x22
  BuffList_ActInfo_o *v334; // x21
  System_String_o *v335; // x0
  BuffList_TYPE_array *v336; // x20
  BuffList_TYPE_array *v337; // x21
  BuffList_ActInfo_o *v338; // x22
  BuffList_TYPE_array *v339; // x20
  BuffList_TYPE_array *v340; // x21
  BuffList_ActInfo_o *v341; // x22
  BuffList_TYPE_array *v342; // x20
  BuffList_TYPE_array *v343; // x21
  BuffList_ActInfo_o *v344; // x22
  BuffList_TYPE_array *v345; // x20
  BuffList_TYPE_array *v346; // x21
  BuffList_ActInfo_o *v347; // x22
  BuffList_TYPE_array *v348; // x20
  BuffList_TYPE_array *v349; // x21
  BuffList_ActInfo_o *v350; // x22
  BuffList_TYPE_array *v351; // x20
  BuffList_TYPE_array *v352; // x21
  BuffList_ActInfo_o *v353; // x22
  BuffList_TYPE_array *v354; // x20
  BuffList_TYPE_array *v355; // x22
  BuffList_ActInfo_o *v356; // x21
  System_String_o *v357; // x0
  BuffList_TYPE_array *v358; // x20
  BuffList_TYPE_array *v359; // x21
  BuffList_ActInfo_o *v360; // x22
  BuffList_TYPE_array *v361; // x20
  BuffList_TYPE_array *v362; // x21
  BuffList_ActInfo_o *v363; // x22
  BuffList_TYPE_array *v364; // x20
  BuffList_TYPE_array *v365; // x21
  BuffList_ActInfo_o *v366; // x22
  BuffList_TYPE_array *v367; // x20
  BuffList_TYPE_array *v368; // x21
  BuffList_ActInfo_o *v369; // x22
  BuffList_TYPE_array *v370; // x20
  BuffList_TYPE_array *v371; // x21
  BuffList_ToFieldActInfo_o *v372; // x22
  BuffList_TYPE_array *v373; // x20
  BuffList_TYPE_array *v374; // x21
  BuffList_ToFieldActInfo_o *v375; // x22
  BuffList_TYPE_array *v376; // x20
  BuffList_TYPE_array *v377; // x22
  BuffList_ActInfo_o *v378; // x21
  System_String_o *v379; // x0
  BuffList_TYPE_array *v380; // x20
  BuffList_TYPE_array *v381; // x21
  BuffList_ActInfo_o *v382; // x22
  BuffList_TYPE_array *v383; // x20
  BuffList_TYPE_array *v384; // x21
  BuffList_ActInfo_o *v385; // x22
  BuffList_TYPE_array *v386; // x20
  BuffList_TYPE_array *v387; // x22
  BuffList_ActInfo_o *v388; // x21
  System_String_o *v389; // x0
  BuffList_TYPE_array *v390; // x20
  BuffList_TYPE_array *v391; // x21
  BuffList_ActInfo_o *v392; // x22
  System_String_o *v393; // x0
  int v394; // w8
  BuffList_TYPE_array *v395; // x20
  BuffList_TYPE_array *v396; // x21
  BuffList_ActInfo_o *v397; // x22
  BuffList_TYPE_array *v398; // x20
  BuffList_TYPE_array *v399; // x22
  BuffList_ActInfo_o *v400; // x21
  System_String_o *v401; // x0
  BuffList_TYPE_array *v402; // x20
  BuffList_TYPE_array *v403; // x21
  BuffList_ActInfo_o *v404; // x22
  BuffList_TYPE_array *v405; // x20
  BuffList_TYPE_array *v406; // x21
  BuffList_ActInfo_o *v407; // x22
  BuffList_TYPE_array *v408; // x20
  BuffList_TYPE_array *v409; // x21
  BuffList_ActInfo_o *v410; // x22
  BuffList_TYPE_array *v411; // x20
  BuffList_TYPE_array *v412; // x21
  BuffList_ActInfo_o *v413; // x22
  BuffList_TYPE_array *v414; // x20
  BuffList_TYPE_array *v415; // x21
  BuffList_ActInfo_o *v416; // x22
  BuffList_TYPE_array *v417; // x20
  BuffList_TYPE_array *v418; // x21
  BuffList_ActInfo_o *v419; // x22
  BuffList_TYPE_array *v420; // x20
  BuffList_TYPE_array *v421; // x21
  BuffList_ActInfo_o *v422; // x22
  BuffList_TYPE_array *v423; // x20
  BuffList_TYPE_array *v424; // x21
  BuffList_ActInfo_o *v425; // x22
  BuffList_TYPE_array *v426; // x20
  BuffList_TYPE_array *v427; // x21
  BuffList_ActInfo_o *v428; // x22
  BuffList_TYPE_array *v429; // x20
  BuffList_TYPE_array *v430; // x21
  BuffList_ActInfo_o *v431; // x22
  BuffList_TYPE_array *v432; // x20
  BuffList_TYPE_array *v433; // x21
  BuffList_ActInfo_o *v434; // x22
  BuffList_TYPE_array *v435; // x20
  BuffList_TYPE_array *v436; // x21
  BuffList_ActInfo_o *v437; // x22
  BuffList_TYPE_array *v438; // x20
  BuffList_TYPE_array *v439; // x21
  BuffList_ActInfo_o *v440; // x22
  BuffList_TYPE_array *v441; // x20
  BuffList_TYPE_array *v442; // x21
  BuffList_ActInfo_o *v443; // x22
  BuffList_TYPE_array *v444; // x20
  BuffList_TYPE_array *v445; // x21
  BuffList_ActInfo_o *v446; // x22
  BuffList_TYPE_array *v447; // x20
  BuffList_TYPE_array *v448; // x21
  BuffList_ActInfo_o *v449; // x22
  int v450; // w8
  BuffList_TYPE_array *v451; // x20
  BuffList_TYPE_array *v452; // x21
  BuffList_ActInfo_o *v453; // x22
  BuffList_TYPE_array *v454; // x20
  BuffList_TYPE_array *v455; // x21
  BuffList_ActInfo_o *v456; // x22
  BuffList_TYPE_array *v457; // x20
  BuffList_TYPE_array *v458; // x21
  BuffList_ActInfo_o *v459; // x22
  BuffList_TYPE_array *v460; // x20
  BuffList_TYPE_array *v461; // x21
  BuffList_ActInfo_o *v462; // x22
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v464; // x2
  System_String_array **v465; // x3
  System_Boolean_array **v466; // x4
  System_Int32_array **v467; // x5
  System_Int32_array *v468; // x6
  System_Int32_array *v469; // x7
  System_String_array **v470; // x2
  System_String_array **v471; // x3
  System_Boolean_array **v472; // x4
  System_Int32_array **v473; // x5
  System_Int32_array *v474; // x6
  System_Int32_array *v475; // x7
  int v476; // w8
  System_Int32_array **v477; // x1
  struct BuffList_StaticFields *v478; // x0
  System_Array_o *v479; // x19
  struct BuffList_StaticFields *v480; // x0
  System_String_array **v481; // x2
  System_String_array **v482; // x3
  System_Boolean_array **v483; // x4
  System_Int32_array **v484; // x5
  System_Int32_array *v485; // x6
  System_Int32_array *v486; // x7
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v487; // x19
  struct BuffList_StaticFields *v488; // x0
  System_String_array **v489; // x2
  System_String_array **v490; // x3
  System_Boolean_array **v491; // x4
  System_Int32_array **v492; // x5
  System_Int32_array *v493; // x6
  System_Int32_array *v494; // x7
  __int64 v495; // x0
  __int64 v496; // x0
  __int64 v497; // x0
  System_RuntimeFieldHandle_o v498; // 0:w1.4
  System_RuntimeFieldHandle_o v499; // 0:w1.4

  if ( (byte_4353F41 & 1) == 0 )
  {
    sub_B70694(&BuffList_ACTION___TypeInfo);
    sub_B70694(&BuffList_ActInfo_TypeInfo);
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_BuffList_TYPE___ctor__);
    sub_B70694(&System_Collections_Generic_HashSet_BuffList_TYPE__TypeInfo);
    sub_B70694(&BuffList_TYPE___TypeInfo);
    sub_B70694(&BuffList_ToFieldActInfo_TypeInfo);
    sub_B70694(&Field__PrivateImplementationDetails__4EECD95FEC87B9ABE1EA9376D9C9CF1F7F1C01299268E427022C2F5192383D9E);
    sub_B70694(&Field__PrivateImplementationDetails__F74CB50F9D18C1E2A044410ED05D3C7285B0A0EF1A7321D9BD37EE90BF1D943E);
    byte_4353F41 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B70764(System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F71470 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo___ctor__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_421;
  plusTypes = (int)v2->fields.plusTypes;
  v5 = (BuffList_TYPE_array *)v2;
  if ( !plusTypes )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 1;
  if ( plusTypes == 1 )
    goto LABEL_423;
  HIDWORD(v2->fields.minusTypes) = 52;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_421;
  v6 = (int)v2->fields.plusTypes;
  v7 = (BuffList_TYPE_array *)v2;
  if ( !v6 )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 66;
  if ( v6 == 1 )
    goto LABEL_423;
  HIDWORD(v2->fields.minusTypes) = 60;
  v8 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v8, 3, v5, v7, 0LL);
  if ( !v1 )
    goto LABEL_421;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1,
    (System_String_o *)v8,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_421;
  v9 = (int)v2->fields.plusTypes;
  v10 = (BuffList_TYPE_array *)v2;
  if ( !v9 )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 105;
  if ( v9 == 1 )
    goto LABEL_423;
  HIDWORD(v2->fields.minusTypes) = 128;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_421;
  v11 = (int)v2->fields.plusTypes;
  v12 = (BuffList_TYPE_array *)v2;
  if ( !v11 )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 106;
  if ( v11 == 1 )
    goto LABEL_423;
  HIDWORD(v2->fields.minusTypes) = 129;
  v13 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v13, 1, v10, v12, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    2,
    (System_String_o *)v13,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v14 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 9;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v15 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 10;
  v16 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v16, 3, v14, v15, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    3,
    (System_String_o *)v16,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v17 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 42;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v18 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 43;
  v19 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v19, 2, v17, v18, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    4,
    (System_String_o *)v19,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v20 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v21 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 43;
  v22 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v22, 2, v20, v21, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    5,
    (System_String_o *)v22,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v23 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 91;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v24 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 92;
  v25 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v25, 3, v23, v24, 0LL);
  if ( !v25 )
    goto LABEL_421;
  v26 = (System_String_o *)BuffList_ActInfo__setBaseValue(v25, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    6,
    v26,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v27 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 11;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v28 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 12;
  v29 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v29, 1, v27, v28, 0LL);
  if ( !v29 )
    goto LABEL_421;
  v30 = (System_String_o *)BuffList_ActInfo__setBaseValue(v29, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    7,
    v30,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v31 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 110;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v32 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 111;
  v33 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v33, 1, v31, v32, 0LL);
  if ( !v33 )
    goto LABEL_421;
  v34 = (System_String_o *)BuffList_ActInfo__setBaseValue(v33, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    8,
    v34,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v35 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 112;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v36 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 113;
  v37 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v37, 1, v35, v36, 0LL);
  if ( !v37 )
    goto LABEL_421;
  v38 = (System_String_o *)BuffList_ActInfo__setBaseValue(v37, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    9,
    v38,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v39 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 20;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v40 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 21;
  v41 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v41, 1, v39, v40, 0LL);
  if ( !v41 )
    goto LABEL_421;
  v42 = (System_String_o *)BuffList_ActInfo__setBaseValue(v41, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    10,
    v42,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v43 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 18;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v44 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 19;
  v45 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v45, 1, v43, v44, 0LL);
  if ( !v45 )
    goto LABEL_421;
  v46 = (System_String_o *)BuffList_ActInfo__setBaseValue(v45, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    11,
    v46,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v47 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 15;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v48 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 16;
  v49 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v49, 1, v47, v48, 0LL);
  if ( !v49 )
    goto LABEL_421;
  v50 = (System_String_o *)BuffList_ActInfo__setBaseValue(v49, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    12,
    v50,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v51 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 13;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v52 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 14;
  v53 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v53, 0, v51, v52, 0LL);
  if ( !v53 )
    goto LABEL_421;
  v54 = (System_String_o *)BuffList_ActInfo__setBaseParam(v53, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    13,
    v54,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v55 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 22;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v56 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 23;
  v57 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v57, 0, v55, v56, 0LL);
  if ( !v57 )
    goto LABEL_421;
  v58 = (System_String_o *)BuffList_ActInfo__setBaseParam(v57, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    14,
    v58,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v59 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 22;
  v60 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v61 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v61, 0, v59, v60, 0LL);
  if ( !v61 )
    goto LABEL_421;
  v62 = (System_String_o *)BuffList_ActInfo__setBaseParam(v61, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    133,
    v62,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v63 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 195;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v64 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 196;
  v65 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v65, 0, v63, v64, 0LL);
  if ( !v65 )
    goto LABEL_421;
  v66 = (System_String_o *)BuffList_ActInfo__setBaseParam(v65, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    134,
    v66,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v67 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 72;
  v68 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v69 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v69, 0, v67, v68, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    15,
    (System_String_o *)v69,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v70 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 26;
  v71 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v72 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v72, 0, v70, v71, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    16,
    (System_String_o *)v72,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v73 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 25;
  v74 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v75 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v75, 0, v73, v74, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    17,
    (System_String_o *)v75,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v76 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 24;
  v77 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v78 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v78, 0, v76, v77, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    18,
    (System_String_o *)v78,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v79 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 107;
  v80 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v81 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v81, 0, v79, v80, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    19,
    (System_String_o *)v81,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v82 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 108;
  v83 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v84 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v84, 0, v82, v83, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    20,
    (System_String_o *)v84,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v85 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 109;
  v86 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v87 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v87, 0, v85, v86, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    21,
    (System_String_o *)v87,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_421;
  v88 = (int)v2->fields.plusTypes;
  v89 = (BuffList_TYPE_array *)v2;
  if ( !v88 )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 51;
  if ( v88 == 1 )
    goto LABEL_423;
  HIDWORD(v2->fields.minusTypes) = 52;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_421;
  v90 = (int)v2->fields.plusTypes;
  v91 = (BuffList_TYPE_array *)v2;
  if ( !v90 )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 68;
  if ( v90 == 1 )
    goto LABEL_423;
  HIDWORD(v2->fields.minusTypes) = 60;
  v92 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v92, 3, v89, v91, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    22,
    (System_String_o *)v92,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v93 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 105;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v94 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 106;
  v95 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v95, 1, v93, v94, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    23,
    (System_String_o *)v95,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v96 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 17;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v97 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 63;
  v98 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v98, 3, v96, v97, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    24,
    (System_String_o *)v98,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v99 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 93;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v100 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 94;
  v101 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v101, 3, v99, v100, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    25,
    (System_String_o *)v101,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_421;
  v102 = (int)v2->fields.plusTypes;
  v103 = (BuffList_TYPE_array *)v2;
  if ( !v102 )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 50;
  if ( v102 == 1 )
    goto LABEL_423;
  HIDWORD(v2->fields.minusTypes) = 52;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_421;
  v104 = (int)v2->fields.plusTypes;
  v105 = (BuffList_TYPE_array *)v2;
  if ( !v104 )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 67;
  if ( v104 == 1 )
    goto LABEL_423;
  HIDWORD(v2->fields.minusTypes) = 60;
  v106 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v106, 3, v103, v105, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    26,
    (System_String_o *)v106,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v107 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 105;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v108 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 106;
  v109 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v109, 1, v107, v108, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    27,
    (System_String_o *)v109,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v110 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 3;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v111 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 4;
  v112 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v112, 3, v110, v111, 0LL);
  if ( !v112 )
    goto LABEL_421;
  v113 = (System_String_o *)BuffList_ActInfo__setBaseValue(v112, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    28,
    v113,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v114 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 2;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v115 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 61;
  v116 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v116, 3, v114, v115, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    29,
    (System_String_o *)v116,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v117 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 5;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v118 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
  {
LABEL_423:
    v495 = sub_B70798(v2);
    sub_B70738(v495, 0LL);
  }
  LODWORD(v2->fields.minusTypes) = 62;
  v119 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v119, 0, v117, v118, 0LL);
  if ( !v119 )
    goto LABEL_421;
  v2 = BuffList_ActInfo__setBaseParam(v119, 0, 0LL);
  if ( !v2 )
    goto LABEL_421;
  v2 = BuffList_ActInfo__setRec(v2, 0, 0LL);
  if ( !v2 )
    goto LABEL_421;
  v120 = (System_String_o *)BuffList_ActInfo__setPlusAction(v2, 71, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    30,
    v120,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v121 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 6;
  v122 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v123 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v123, 0, v121, v122, 0LL);
  if ( !v123 )
    goto LABEL_421;
  v2 = BuffList_ActInfo__setBaseParam(v123, 0, 0LL);
  if ( !v2 )
    goto LABEL_421;
  v124 = (System_String_o *)BuffList_ActInfo__setRec(v2, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    31,
    v124,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v125 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 7;
  v126 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v127 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v127, 0, v125, v126, 0LL);
  if ( !v127 )
    goto LABEL_421;
  v2 = BuffList_ActInfo__setBaseParam(v127, 0, 0LL);
  if ( !v2 )
    goto LABEL_421;
  v128 = (System_String_o *)BuffList_ActInfo__setRec(v2, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    32,
    v128,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v129 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 8;
  v130 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v131 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v131, 0, v129, v130, 0LL);
  if ( !v131
    || (v2 = BuffList_ActInfo__setBaseParam(v131, 0, 0LL)) == 0LL
    || (v2 = BuffList_ActInfo__setRec(v2, 0, 0LL)) == 0LL
    || (v132 = (System_String_o *)BuffList_ActInfo__setPlusAction(v2, 72, 0LL),
        System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
          v1,
          33,
          v132,
          (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__),
        (v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_421:
    sub_B7076C(v2, v3);
  }
  v133 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_423;
  LODWORD(v2->fields.minusTypes) = 197;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_421;
  v134 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 198;
  v135 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v135, 0, v133, v134, 0LL);
  if ( !v135 )
    goto LABEL_422;
  v137 = (System_String_o *)BuffList_ActInfo__setBaseParam(v135, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    135,
    v137,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v138 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 64;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v139 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 65;
  v140 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v140, 3, v138, v139, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    34,
    (System_String_o *)v140,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v141 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 114;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v142 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 115;
  v143 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v143, 0, v141, v142, 0LL);
  if ( !v143 )
    goto LABEL_422;
  v144 = (System_String_o *)BuffList_ActInfo__setBaseParam(v143, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    35,
    v144,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v145 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 27;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v146 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 28;
  v147 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v147, 3, v145, v146, 0LL);
  if ( !v147 )
    goto LABEL_422;
  v148 = (System_String_o *)BuffList_ActInfo__setBaseValue(v147, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    36,
    v148,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v149 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 29;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v150 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 30;
  v151 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v151, 3, v149, v150, 0LL);
  if ( !v151 )
    goto LABEL_422;
  v152 = (System_String_o *)BuffList_ActInfo__setBaseValue(v151, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    37,
    v152,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v153 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 31;
  v154 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v155 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v155, 0, v153, v154, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    38,
    (System_String_o *)v155,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v156 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 32;
  v157 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v158 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v158, 0, v156, v157, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    39,
    (System_String_o *)v158,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v159 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 33;
  v160 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v161 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v161, 0, v159, v160, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    40,
    (System_String_o *)v161,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v162 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 34;
  v163 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v164 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v164, 0, v162, v163, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    41,
    (System_String_o *)v164,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v165 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 35;
  v166 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v167 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v167, 0, v165, v166, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    42,
    (System_String_o *)v167,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v168 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 40;
  v169 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v170 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v170, 0, v168, v169, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    43,
    (System_String_o *)v170,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v171 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 41;
  v172 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v173 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v173, 0, v171, v172, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    44,
    (System_String_o *)v173,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v174 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 38;
  v175 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v176 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v176, 0, v174, v175, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    45,
    (System_String_o *)v176,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v177 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 70;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v178 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 71;
  v179 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v179, 3, v177, v178, 0LL);
  if ( !v179 )
    goto LABEL_422;
  v180 = (System_String_o *)BuffList_ActInfo__setBaseValue(v179, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    46,
    v180,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v181 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 73;
  v182 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v183 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v183, 3, v181, v182, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    47,
    (System_String_o *)v183,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v184 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 74;
  v185 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v186 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v186, 3, v184, v185, 0LL);
  if ( !v186 )
    goto LABEL_422;
  v187 = (System_String_o *)BuffList_ActInfo__setBaseValue(v186, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    48,
    v187,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v188 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 75;
  v189 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v190 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v190, 3, v188, v189, 0LL);
  if ( !v190 )
    goto LABEL_422;
  v191 = (System_String_o *)BuffList_ActInfo__setBaseValue(v190, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    49,
    v191,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v192 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 77;
  v193 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v194 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v194, 0, v192, v193, 0LL);
  if ( !v194 )
    goto LABEL_422;
  v195 = (System_String_o *)BuffList_ActInfo__setBaseValue(v194, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    50,
    v195,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v196 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 78;
  v197 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v198 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v198, 0, v196, v197, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    51,
    (System_String_o *)v198,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v199 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 149;
  v200 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v201 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v201, 0, v199, v200, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    89,
    (System_String_o *)v201,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v202 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 79;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v203 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 80;
  v204 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v204, 3, v202, v203, 0LL);
  if ( !v204 )
    goto LABEL_422;
  v205 = (System_String_o *)BuffList_ActInfo__setBaseValue(v204, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    52,
    v205,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v206 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 81;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v207 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 82;
  v208 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v208, 0, v206, v207, 0LL);
  if ( !v208 )
    goto LABEL_422;
  v209 = (System_String_o *)BuffList_ActInfo__setBaseParam(v208, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    53,
    v209,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v210 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 84;
  v211 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v212 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v212, 0, v210, v211, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    54,
    (System_String_o *)v212,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v213 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 85;
  v214 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v215 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v215, 0, v213, v214, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    55,
    (System_String_o *)v215,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v216 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 87;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v217 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 88;
  v218 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v218, 3, v216, v217, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    56,
    (System_String_o *)v218,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v219 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 89;
  v220 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v221 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v221, 0, v219, v220, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    57,
    (System_String_o *)v221,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v222 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 90;
  v223 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v224 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v224, 0, v222, v223, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    58,
    (System_String_o *)v224,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v225 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 95;
  v226 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v227 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v227, 0, v225, v226, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    59,
    (System_String_o *)v227,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v228 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 96;
  v229 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v230 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v230, 0, v228, v229, 0LL);
  if ( !v230 )
    goto LABEL_422;
  v231 = (System_String_o *)BuffList_ActInfo__setBaseParam(v230, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    60,
    v231,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v232 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 98;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v233 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 99;
  v234 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v234, 3, v232, v233, 0LL);
  if ( !v234 )
    goto LABEL_422;
  v235 = (System_String_o *)BuffList_ActInfo__setBaseValue(v234, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    61,
    v235,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v236 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 100;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v237 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 101;
  v238 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v238, 3, v236, v237, 0LL);
  if ( !v238 )
    goto LABEL_422;
  v239 = (System_String_o *)BuffList_ActInfo__setBaseValue(v238, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    62,
    v239,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v240 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 102;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v241 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 103;
  v242 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v242, 3, v240, v241, 0LL);
  if ( !v242 )
    goto LABEL_422;
  v243 = (System_String_o *)BuffList_ActInfo__setBaseValue(v242, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    63,
    v243,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v244 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 86;
  v245 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v246 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v246, 0, v244, v245, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    64,
    (System_String_o *)v246,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v247 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 97;
  v248 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v249 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v249, 0, v247, v248, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    65,
    (System_String_o *)v249,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v250 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 116;
  v251 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v252 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v252, 0, v250, v251, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    66,
    (System_String_o *)v252,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v253 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 117;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v254 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 118;
  v255 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v255, 1, v253, v254, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    67,
    (System_String_o *)v255,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v256 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 119;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v257 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 120;
  v258 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v258, 0, v256, v257, 0LL);
  if ( !v258 )
    goto LABEL_422;
  v259 = (System_String_o *)BuffList_ActInfo__setBaseValue(v258, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    68,
    v259,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v260 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 121;
  v261 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v262 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v262, 0, v260, v261, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    69,
    (System_String_o *)v262,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v263 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 122;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v264 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 123;
  v265 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v265, 0, v263, v264, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    70,
    (System_String_o *)v265,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v266 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 124;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v267 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 125;
  v268 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v268, 0, v266, v267, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    71,
    (System_String_o *)v268,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v269 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 126;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v270 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 127;
  v271 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v271, 0, v269, v270, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    72,
    (System_String_o *)v271,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v272 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 130;
  v273 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v274 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v274, 0, v272, v273, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    73,
    (System_String_o *)v274,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v275 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 131;
  v276 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v277 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v277, 0, v275, v276, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    74,
    (System_String_o *)v277,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v278 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 132;
  v279 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v280 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v280, 0, v278, v279, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    75,
    (System_String_o *)v280,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v281 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 133;
  v282 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v283 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v283, 0, v281, v282, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    76,
    (System_String_o *)v283,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v284 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 134;
  v285 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v286 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v286, 0, v284, v285, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    77,
    (System_String_o *)v286,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v287 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 135;
  v288 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v289 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v289, 1, v287, v288, 0LL);
  if ( !v289 )
    goto LABEL_422;
  v290 = (System_String_o *)BuffList_ActInfo__setBaseValue(v289, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    78,
    v290,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v291 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 136;
  v292 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v293 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v293, 1, v291, v292, 0LL);
  if ( !v293
    || (v294 = (System_String_o *)BuffList_ActInfo__setBaseValue(v293, 1000, 0LL),
        System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
          v1,
          79,
          v294,
          (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__),
        (v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_422:
    sub_B7076C(v2, v136);
  }
  v295 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_424;
  LODWORD(v2->fields.minusTypes) = 137;
  v296 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v297 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v297, 0, v295, v296, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    80,
    (System_String_o *)v297,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v298 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
  {
LABEL_424:
    v496 = sub_B70798(v2);
    sub_B70738(v496, 0LL);
  }
  LODWORD(v2->fields.minusTypes) = 138;
  v299 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v300 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v300, 0, v298, v299, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    81,
    (System_String_o *)v300,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_422;
  v301 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 139;
  v302 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v303 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v303, 0, v301, v302, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    82,
    (System_String_o *)v303,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v305 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 140;
  v306 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v307 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v307, 0, v305, v306, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    83,
    (System_String_o *)v307,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v308 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 141;
  v309 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v310 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v310, 0, v308, v309, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    84,
    (System_String_o *)v310,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v311 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 142;
  v312 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v313 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v313, 0, v311, v312, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    85,
    (System_String_o *)v313,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v314 = (System_Array_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 4LL);
  v498.fields.value = Field__PrivateImplementationDetails__F74CB50F9D18C1E2A044410ED05D3C7285B0A0EF1A7321D9BD37EE90BF1D943E;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v314, v498, 0LL);
  v315 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v316 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v316, 0, (BuffList_TYPE_array *)v314, v315, 0LL);
  if ( !v316 )
    goto LABEL_426;
  v317 = (System_String_o *)BuffList_ActInfo__setBaseParam(v316, -1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    86,
    v317,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v318 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 144;
  v319 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v320 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v320, 0, v318, v319, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    87,
    (System_String_o *)v320,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v321 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 148;
  v322 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v323 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v323, 0, v321, v322, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    88,
    (System_String_o *)v323,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v324 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 150;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v325 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 151;
  v326 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v326, 3, v324, v325, 0LL);
  if ( !v326 )
    goto LABEL_426;
  v327 = (System_String_o *)BuffList_ActInfo__setBaseValue(v326, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    90,
    v327,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v328 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 152;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v329 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 153;
  v330 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v330, 3, v328, v329, 0LL);
  if ( !v330 )
    goto LABEL_426;
  v331 = (System_String_o *)BuffList_ActInfo__setBaseValue(v330, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    91,
    v331,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v332 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 154;
  v333 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v334 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v334, 3, v332, v333, 0LL);
  if ( !v334 )
    goto LABEL_426;
  v335 = (System_String_o *)BuffList_ActInfo__setBaseParam(v334, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    92,
    v335,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v336 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 155;
  v337 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v338 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v338, 3, v336, v337, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    93,
    (System_String_o *)v338,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v339 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 156;
  v340 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v341 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v341, 0, v339, v340, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    94,
    (System_String_o *)v341,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v342 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 157;
  v343 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v344 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v344, 0, v342, v343, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    95,
    (System_String_o *)v344,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v345 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 158;
  v346 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v347 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v347, 0, v345, v346, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    96,
    (System_String_o *)v347,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v348 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 159;
  v349 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v350 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v350, 0, v348, v349, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    97,
    (System_String_o *)v350,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v351 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 160;
  v352 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v353 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v353, 0, v351, v352, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    98,
    (System_String_o *)v353,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v354 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 161;
  v355 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v356 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v356, 0, v354, v355, 0LL);
  if ( !v356 )
    goto LABEL_426;
  v357 = (System_String_o *)BuffList_ActInfo__setBaseParam(v356, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    99,
    v357,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v358 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 163;
  v359 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v360 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v360, 0, v358, v359, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    100,
    (System_String_o *)v360,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v361 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 162;
  v362 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v363 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v363, 3, v361, v362, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    101,
    (System_String_o *)v363,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v364 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 165;
  v365 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v366 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v366, 0, v364, v365, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    102,
    (System_String_o *)v366,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v367 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 166;
  v368 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v369 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v369, 0, v367, v368, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    103,
    (System_String_o *)v369,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v370 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 10002;
  v371 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v372 = (BuffList_ToFieldActInfo_o *)sub_B70764(BuffList_ToFieldActInfo_TypeInfo);
  BuffList_ToFieldActInfo___ctor(v372, 0, v370, v371, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    105,
    (System_String_o *)v372,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v373 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 10003;
  v374 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v375 = (BuffList_ToFieldActInfo_o *)sub_B70764(BuffList_ToFieldActInfo_TypeInfo);
  BuffList_ToFieldActInfo___ctor(v375, 0, v373, v374, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    112,
    (System_String_o *)v375,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v376 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 27;
  v377 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v378 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v378, 3, v376, v377, 0LL);
  if ( !v378 )
    goto LABEL_426;
  v379 = (System_String_o *)BuffList_ActInfo__setBaseValue(v378, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    106,
    v379,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v380 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 167;
  v381 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v382 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v382, 3, v380, v381, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    107,
    (System_String_o *)v382,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v383 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 168;
  v384 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v385 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v385, 0, v383, v384, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    108,
    (System_String_o *)v385,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v386 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 169;
  v387 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v388 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v388, 0, v386, v387, 0LL);
  if ( !v388 )
    goto LABEL_426;
  v389 = (System_String_o *)BuffList_ActInfo__setBaseParam(v388, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    109,
    v389,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v390 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 170;
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v391 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 171;
  v392 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v392, 0, v390, v391, 0LL);
  if ( !v392 )
    goto LABEL_426;
  v393 = (System_String_o *)BuffList_ActInfo__setBaseParam(v392, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    110,
    v393,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_426;
  v394 = (int)v2->fields.plusTypes;
  v395 = (BuffList_TYPE_array *)v2;
  if ( !v394 )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 172;
  if ( v394 == 1 )
    goto LABEL_425;
  HIDWORD(v2->fields.minusTypes) = 173;
  v396 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v397 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v397, 0, v395, v396, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    111,
    (System_String_o *)v397,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v398 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 174;
  v399 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v400 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v400, 3, v398, v399, 0LL);
  if ( !v400
    || (v401 = (System_String_o *)BuffList_ActInfo__setBaseParam(v400, 0, 0LL),
        System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
          v1,
          113,
          v401,
          (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__),
        (v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_426:
    sub_B7076C(v2, v304);
  }
  v402 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 175;
  v403 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v404 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v404, 0, v402, v403, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    114,
    (System_String_o *)v404,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v405 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 176;
  v406 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v407 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v407, 0, v405, v406, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    115,
    (System_String_o *)v407,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v408 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 177;
  v409 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v410 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v410, 0, v408, v409, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    116,
    (System_String_o *)v410,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v411 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 178;
  v412 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v413 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v413, 0, v411, v412, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    117,
    (System_String_o *)v413,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v414 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 179;
  v415 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v416 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v416, 0, v414, v415, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    118,
    (System_String_o *)v416,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v417 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 180;
  v418 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v419 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v419, 0, v417, v418, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    119,
    (System_String_o *)v419,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v420 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 181;
  v421 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v422 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v422, 0, v420, v421, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    120,
    (System_String_o *)v422,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v423 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 182;
  v424 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v425 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v425, 0, v423, v424, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    121,
    (System_String_o *)v425,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v426 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 185;
  v427 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v428 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v428, 0, v426, v427, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    122,
    (System_String_o *)v428,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v429 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 187;
  v430 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v431 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v431, 0, v429, v430, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    123,
    (System_String_o *)v431,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v432 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 186;
  v433 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v434 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v434, 0, v432, v433, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    124,
    (System_String_o *)v434,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v435 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 188;
  v436 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v437 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v437, 0, v435, v436, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    125,
    (System_String_o *)v437,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v438 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 189;
  v439 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v440 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v440, 0, v438, v439, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    127,
    (System_String_o *)v440,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v441 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 190;
  v442 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v443 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v443, 0, v441, v442, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    128,
    (System_String_o *)v443,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v444 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 191;
  v445 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v446 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v446, 0, v444, v445, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    129,
    (System_String_o *)v446,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v447 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 192;
  v448 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v449 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v449, 0, v447, v448, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    130,
    (System_String_o *)v449,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_426;
  v450 = (int)v2->fields.plusTypes;
  v451 = (BuffList_TYPE_array *)v2;
  if ( !v450 )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 37;
  if ( v450 == 1 )
    goto LABEL_425;
  HIDWORD(v2->fields.minusTypes) = 104;
  v452 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v453 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v453, 0, v451, v452, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    126,
    (System_String_o *)v453,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v454 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 194;
  v455 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v456 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v456, 0, v454, v455, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    131,
    (System_String_o *)v456,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v457 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 199;
  v458 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v459 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v459, 0, v457, v458, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    136,
    (System_String_o *)v459,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_426;
  v460 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_425;
  LODWORD(v2->fields.minusTypes) = 193;
  v461 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 0LL);
  v462 = (BuffList_ActInfo_o *)sub_B70764(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v462, 0, v460, v461, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    132,
    (System_String_o *)v462,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  static_fields = (BattleServantConfConponent_o *)BuffList_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v464, v465, v466, v467, v468, v469);
  v2 = (BuffList_ActInfo_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_426;
  v476 = (int)v2->fields.plusTypes;
  v477 = (System_Int32_array **)v2;
  if ( !v476 || (LODWORD(v2->fields.minusTypes) = 104, v476 == 1) )
  {
LABEL_425:
    v497 = sub_B70798(v2);
    sub_B70738(v497, 0LL);
  }
  HIDWORD(v2->fields.minusTypes) = 37;
  v478 = BuffList_TypeInfo->static_fields;
  v478->GutsList = (struct BuffList_TYPE_array *)v477;
  sub_B70630((BattleServantConfConponent_o *)&v478->GutsList, v477, v470, v471, v472, v473, v474, v475);
  v479 = (System_Array_o *)sub_B706AC(BuffList_ACTION___TypeInfo, 4LL);
  v499.fields.value = Field__PrivateImplementationDetails__4EECD95FEC87B9ABE1EA9376D9C9CF1F7F1C01299268E427022C2F5192383D9E;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v479, v499, 0LL);
  v480 = BuffList_TypeInfo->static_fields;
  v480->CommandCodeFunctionActs = (struct BuffList_ACTION_array *)v479;
  sub_B70630(
    (BattleServantConfConponent_o *)&v480->CommandCodeFunctionActs,
    (System_Int32_array **)v479,
    v481,
    v482,
    v483,
    v484,
    v485,
    v486);
  v487 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B70764(System_Collections_Generic_HashSet_BuffList_TYPE__TypeInfo);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v487,
    (const MethodInfo_2EB01EC *)Method_System_Collections_Generic_HashSet_BuffList_TYPE___ctor__);
  if ( !v487 )
    goto LABEL_426;
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v487,
    138,
    (const MethodInfo_2EB13C8 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v487,
    159,
    (const MethodInfo_2EB13C8 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v487,
    177,
    (const MethodInfo_2EB13C8 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v487,
    178,
    (const MethodInfo_2EB13C8 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  v488 = BuffList_TypeInfo->static_fields;
  v488->CommandCodeBuffHash = (struct System_Collections_Generic_HashSet_BuffList_TYPE__o *)v487;
  sub_B70630(
    (BattleServantConfConponent_o *)&v488->CommandCodeBuffHash,
    (System_Int32_array **)v487,
    v489,
    v490,
    v491,
    v492,
    v493,
    v494);
}


bool __fastcall BuffList__CheckAccumulation(int32_t type, const MethodInfo *method)
{
  if ( (byte_4353F3C & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    byte_4353F3C = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  return type == 97;
}


bool __fastcall BuffList__CheckGutsType(int32_t type, const MethodInfo *method)
{
  BuffList_c *v3; // x0
  struct BuffList_TYPE_array *GutsList; // x8
  int max_length; // w9
  unsigned int v6; // w10
  __int64 v8; // x0

  if ( (byte_4353F3E & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    byte_4353F3E = 1;
  }
  v3 = BuffList_TypeInfo;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v3 = BuffList_TypeInfo;
  }
  GutsList = v3->static_fields->GutsList;
  if ( !GutsList )
    sub_B7076C(v3, method);
  max_length = GutsList->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      v8 = sub_B70798(v3);
      sub_B70738(v8, 0LL);
    }
    if ( GutsList->m_Items[v6 + 1] == type )
      break;
    if ( (int)++v6 >= max_length )
      return 0;
  }
  return 1;
}


bool __fastcall BuffList__CheckType(int32_t self, int32_t type, const MethodInfo *method)
{
  return self == type;
}


bool __fastcall BuffList__CheckUpdateHp(int32_t type, const MethodInfo *method)
{
  if ( (byte_4353F3B & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    byte_4353F3B = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( type == 81 )
    return 1;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( type == 82 )
    return 1;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( type == 79 )
    return 1;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  return type == 80;
}


int32_t __fastcall BuffList__GetProgressTurnCond(int32_t type, const MethodInfo *method)
{
  if ( type <= 62 )
  {
    if ( (unsigned int)(type - 5) >= 4 && type != 62 )
      return 3;
    return 2;
  }
  if ( type == 76 || type == 85 || (type & 0xFFFFFFFE) == 114 )
    return 2;
  return 3;
}


bool __fastcall BuffList__IsConstantMasterIndvAddBuffActive(const MethodInfo *method)
{
  if ( (byte_4353F40 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8950/*"MST_BUFF_INDV_ADD_BUFF_ACTIVE"*/);
    byte_4353F40 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_8950/*"MST_BUFF_INDV_ADD_BUFF_ACTIVE"*/, 0LL) == 1;
}


bool __fastcall BuffList__IsCounterFunction(int32_t type, const MethodInfo *method)
{
  return type == 165;
}


bool __fastcall BuffList__IsForceProgressSelfTurnType(int32_t type, const MethodInfo *method)
{
  return type == 8 || type == 85;
}


bool __fastcall BuffList__IsFunctionBuff(int32_t type, const MethodInfo *method)
{
  char v2; // w8
  unsigned int v3; // w9
  _BOOL8 v4; // x0

  if ( type > 138 )
  {
    if ( type <= 160 )
    {
      v2 = type + 108;
      if ( (unsigned int)(type - 148) < 0xD )
      {
        v3 = 6147;
        goto LABEL_12;
      }
    }
    else
    {
      v2 = type + 91;
      if ( (unsigned int)(type - 165) < 0x1E )
      {
        v3 = 552857609;
LABEL_12:
        LODWORD(v4) = (v3 >> v2) & 1;
        return v4;
      }
    }
LABEL_13:
    LOBYTE(v4) = 0;
    return v4;
  }
  if ( type <= 95 )
  {
    v2 = type - 76;
    if ( (unsigned int)(type - 76) < 0x14 )
    {
      v3 = 550789;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  if ( (unsigned int)(type - 97) >= 0x2A )
    goto LABEL_13;
  return (0x30000000001uLL >> ((unsigned __int8)type - 97)) & 1;
}


bool __fastcall BuffList__IsIntervalPossibleBuff(int32_t type, const MethodInfo *method)
{
  char v2; // w8
  unsigned int v3; // w9
  char v4; // w8
  _BOOL8 v5; // x0
  char v6; // w8
  unsigned __int64 v7; // x9

  if ( type > 109 )
  {
    if ( type > 190 )
    {
      if ( type <= 199 )
      {
        v4 = 0;
        if ( type == 194 || type == 199 )
          goto LABEL_31;
        goto LABEL_29;
      }
      if ( (type | 2) != 10003 )
        goto LABEL_29;
LABEL_30:
      v4 = 0;
      goto LABEL_31;
    }
    if ( type > 156 )
    {
      v2 = type + 95;
      if ( (unsigned int)(type - 161) >= 0x10 )
      {
        if ( (unsigned int)(type - 189) > 1 )
          goto LABEL_29;
        goto LABEL_30;
      }
      v3 = 24794;
      goto LABEL_22;
    }
    v6 = type - 122;
    if ( (unsigned int)(type - 122) >= 0x23 )
      goto LABEL_29;
    v7 = 0x3FC01E5FCLL;
    return (v7 >> v6) & 1;
  }
  if ( type <= 76 )
  {
    if ( type > 41 )
    {
      v4 = 0;
      if ( type == 61 || type == 76 )
        goto LABEL_31;
      goto LABEL_29;
    }
    v6 = type - 2;
    if ( (unsigned int)(type - 2) >= 0x28 )
    {
LABEL_29:
      v4 = 1;
LABEL_31:
      LOBYTE(v5) = v4;
      return v5;
    }
    v7 = 0x343FFFFFFELL;
    return (v7 >> v6) & 1;
  }
  if ( type <= 95 )
  {
    v2 = type - 78;
    if ( (unsigned int)(type - 78) >= 0x12 )
      goto LABEL_29;
    v3 = 131040;
  }
  else
  {
    v2 = type - 104;
    if ( (unsigned int)(type - 104) >= 6 )
      goto LABEL_29;
    v3 = 6;
  }
LABEL_22:
  LODWORD(v5) = (v3 >> v2) & 1;
  return v5;
}


void __fastcall BuffList__SetBattleData(BattleData_o *setData, const MethodInfo *method)
{
  BuffList_c *v3; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *ActionList; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  Il2CppObject *currentValue; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4353F3F & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Values__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_BuffList_ACTION__BuffList_ActInfo__GetEnumerator__);
    byte_4353F3F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  v3 = BuffList_TypeInfo;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v3 = BuffList_TypeInfo;
  }
  ActionList = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)v3->static_fields->ActionList;
  if ( !ActionList
    || (ActionList = System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo___get_Values(
                       (System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__o *)ActionList,
                       (const MethodInfo_2F71DC8 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Values__)) == 0LL )
  {
    sub_B7076C(ActionList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_BuffList_ACTION__BuffList_ActInfo___GetEnumerator(
    &v13,
    ActionList,
    (const MethodInfo_25F8F88 *)Method_System_Collections_Generic_Dictionary_ValueCollection_BuffList_ACTION__BuffList_ActInfo__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo___MoveNext(
            &v13,
            (const MethodInfo_2772BB8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__MoveNext__) )
  {
    currentValue = v13.fields.currentValue;
    if ( !v13.fields.currentValue )
      sub_B7076C(0LL, v5);
    v13.fields.currentValue[4].klass = (Il2CppClass *)setData;
    sub_B70630(
      (BattleServantConfConponent_o *)&currentValue[4],
      (System_Int32_array **)setData,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo___Dispose(
    &v13,
    (const MethodInfo_2772BB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__Dispose__);
}


BuffList_ActInfo_o *__fastcall BuffList__getActInfo(
        int32_t action,
        BattleServantData_o *opponentSvt,
        const MethodInfo *method)
{
  BuffList_c *v5; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *ActionList; // x0
  System_String_o *Item; // x0
  BuffList_ActInfo_o *v8; // x20

  if ( (byte_4353F3A & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Item__);
    byte_4353F3A = 1;
  }
  v5 = BuffList_TypeInfo;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v5 = BuffList_TypeInfo;
  }
  ActionList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->ActionList;
  if ( !ActionList )
    goto LABEL_11;
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           ActionList,
           action,
           (const MethodInfo_2F71F60 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Item__);
  v8 = (BuffList_ActInfo_o *)Item;
  if ( Item )
  {
    ActionList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)Item[2].monitor;
    if ( ActionList )
    {
      ((void (__fastcall *)(System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *, BattleServantData_o *, Il2CppMethodPointer))ActionList->klass->vtable._4_unknown.method)(
        ActionList,
        opponentSvt,
        ActionList->klass->vtable._5_set_Item.methodPtr);
      return v8;
    }
LABEL_11:
    sub_B7076C(ActionList, opponentSvt);
  }
  return v8;
}


bool __fastcall BuffList__isSpHit(int32_t type, const MethodInfo *method)
{
  if ( (byte_4353F3D & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    byte_4353F3D = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( type == 11 )
    return 1;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( type == 110 )
    return 1;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( type == 112 )
    return 1;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( type == 135 )
    return 1;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  return type == 136;
}


void __fastcall BuffList_ActInfo___ctor(
        BuffList_ActInfo_o *this,
        int32_t inLimit,
        BuffList_TYPE_array *inPlus,
        BuffList_TYPE_array *inMinus,
        const MethodInfo *method)
{
  long double v9; // q0

  this->fields.limit = 3;
  this->fields.baseParam = 1000;
  this->fields.isRec = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.limit = inLimit;
  this->fields.plusTypes = inPlus;
  sub_B70630(&this->fields.plusTypes);
  this->fields.minusTypes = inMinus;
  *(__n128 *)&v9 = sub_B70630(&this->fields.minusTypes);
  this->fields._OpponentInvokeCond_k__BackingField = (struct BuffList_BaseInvokeCond_o *)((__int64 (__fastcall *)(BuffList_ActInfo_o *, _QWORD, void *, long double))this->klass->vtable._4_MakeInvokeCond.method)(
                                                                                           this,
                                                                                           0LL,
                                                                                           this->klass[1]._1.image,
                                                                                           v9);
  sub_B70630(&this->fields._OpponentInvokeCond_k__BackingField);
}


BuffList_BaseInvokeCond_o *__fastcall BuffList_ActInfo__MakeInvokeCond(
        BuffList_ActInfo_o *this,
        bool isSelfSide,
        const MethodInfo *method)
{
  BuffList_BaseInvokeCond_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_434ED50 & 1) == 0 )
  {
    sub_B70694(&BuffList_BaseInvokeCond_TypeInfo);
    byte_434ED50 = 1;
  }
  v4 = (BuffList_BaseInvokeCond_o *)sub_B70764(BuffList_BaseInvokeCond_TypeInfo);
  BuffList_BaseInvokeCond___ctor(v4, isSelfSide, v5);
  return v4;
}


BuffList_BaseInvokeCond_o *__fastcall BuffList_ActInfo__get_OpponentInvokeCond(
        BuffList_ActInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._OpponentInvokeCond_k__BackingField;
}


bool __fastcall BuffList_ActInfo__isLowerLimit(BuffList_ActInfo_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.limit) >> 1) & 1;
}


bool __fastcall BuffList_ActInfo__isUpperLimit(BuffList_ActInfo_o *this, const MethodInfo *method)
{
  return this->fields.limit & 1;
}


BuffList_ActInfo_o *__fastcall BuffList_ActInfo__setBaseParam(
        BuffList_ActInfo_o *this,
        int32_t inBaseParam,
        const MethodInfo *method)
{
  this->fields.baseParam = inBaseParam;
  return this;
}


BuffList_ActInfo_o *__fastcall BuffList_ActInfo__setBaseValue(
        BuffList_ActInfo_o *this,
        int32_t inBaseValue,
        const MethodInfo *method)
{
  this->fields.baseValue = inBaseValue;
  return this;
}


BuffList_ActInfo_o *__fastcall BuffList_ActInfo__setPlusAction(
        BuffList_ActInfo_o *this,
        int32_t targetAction,
        const MethodInfo *method)
{
  this->fields.plusAction = targetAction;
  return this;
}


BuffList_ActInfo_o *__fastcall BuffList_ActInfo__setRec(BuffList_ActInfo_o *this, bool flg, const MethodInfo *method)
{
  this->fields.isRec = flg;
  return this;
}


void __fastcall BuffList_ActInfo__set_OpponentInvokeCond(
        BuffList_ActInfo_o *this,
        BuffList_BaseInvokeCond_o *value,
        const MethodInfo *method)
{
  this->fields._OpponentInvokeCond_k__BackingField = value;
  sub_B70630(&this->fields._OpponentInvokeCond_k__BackingField);
}


void __fastcall BuffList_BaseInvokeCond___ctor(
        BuffList_BaseInvokeCond_o *this,
        bool isSelfSide,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_String_o **v8; // x8

  if ( (byte_434ED52 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int_____ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____TypeInfo);
    sub_B70694(&StringLiteral_12837/*"Self"*/);
    sub_B70694(&StringLiteral_10241/*"Opponent"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434ED52 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B70764(System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v5,
    (const MethodInfo_2F71470 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int_____ctor__);
  this->fields.dicCacheSelfValue = (struct System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____o *)v5;
  sub_B70630(&this->fields.dicCacheSelfValue);
  this->fields.targetSideStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(&this->fields.targetSideStr);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (struct System_String_o **)&StringLiteral_12837/*"Self"*/;
  if ( !isSelfSide )
    v8 = (struct System_String_o **)&StringLiteral_10241/*"Opponent"*/;
  if ( !this )
    sub_B7076C(v6, v7);
  this->fields.targetSideStr = *v8;
  sub_B70630(&this->fields.targetSideStr);
}


bool __fastcall BuffList_BaseInvokeCond__CheckBuffTypeCond(
        BuffList_BaseInvokeCond_o *this,
        BattleBuffData_o *buffData,
        BuffEntity_o *buffEnt,
        System_Int32_array *condValues,
        const MethodInfo *method)
{
  BattleBuffData_o *dicCacheSelfValue; // x0
  BattleServantData_o *SvtData_k__BackingField; // x0
  struct System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____o *v11; // x23

  if ( (byte_434ED54 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____set_Item__);
    sub_B70694(&int___TypeInfo);
    byte_434ED54 = 1;
  }
  dicCacheSelfValue = (BattleBuffData_o *)this->fields.dicCacheSelfValue;
  if ( !dicCacheSelfValue )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
          (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)dicCacheSelfValue,
          1,
          (const MethodInfo_2F72298 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____ContainsKey__) )
  {
    SvtData_k__BackingField = this->fields._SvtData_k__BackingField;
    v11 = this->fields.dicCacheSelfValue;
    if ( SvtData_k__BackingField )
    {
      dicCacheSelfValue = BattleServantData__get_BuffData(SvtData_k__BackingField, 0LL);
      if ( !dicCacheSelfValue )
        goto LABEL_14;
      dicCacheSelfValue = (BattleBuffData_o *)BattleBuffData__GetGrantBuffTypeArray(dicCacheSelfValue, 1, 1, 0LL);
    }
    else
    {
      dicCacheSelfValue = (BattleBuffData_o *)sub_B706AC(int___TypeInfo, 0LL);
    }
    if ( v11 )
    {
      System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____set_Item(
        (System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v11,
        1,
        (System_Collections_Generic_List_int__o *)dicCacheSelfValue,
        (const MethodInfo_2F71FFC *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____set_Item__);
      goto LABEL_11;
    }
LABEL_14:
    sub_B7076C(dicCacheSelfValue, buffData);
  }
LABEL_11:
  dicCacheSelfValue = (BattleBuffData_o *)this->fields.dicCacheSelfValue;
  if ( !dicCacheSelfValue )
    goto LABEL_14;
  dicCacheSelfValue = (BattleBuffData_o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                            (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)dicCacheSelfValue,
                                            1,
                                            (const MethodInfo_2F71F60 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____get_Item__);
  if ( !buffData )
    goto LABEL_14;
  return BattleBuffData__checkBuffTypeIndiviuality(
           buffData,
           (System_Int32_array *)dicCacheSelfValue,
           condValues,
           buffEnt,
           0LL,
           0LL);
}


bool __fastcall BuffList_BaseInvokeCond__CheckInvokeCond(
        BuffList_BaseInvokeCond_o *this,
        BattleBuffData_o *buffData,
        BuffEntity_o *buffEnt,
        System_Int32_array *selfIndivValues,
        System_Int32_array *condIndivValues,
        System_Int32_array *targetCount,
        const MethodInfo *method)
{
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x25
  System_Int32_array *ScriptIntArray; // x3

  v13 = BuffList_BaseInvokeCond__get_BuffTypeCondKeyName(this, (const MethodInfo *)buffData);
  if ( !buffEnt )
    goto LABEL_6;
  v15 = v13;
  v13 = (System_String_o *)BuffEntity__checkScript(buffEnt, v13, 0LL);
  if ( ((unsigned __int8)v13 & 1) != 0 )
  {
    ScriptIntArray = BuffEntity__GetScriptIntArray(buffEnt, v15, 0LL, 0x2Cu, 0LL);
    return ((__int64 (__fastcall *)(BuffList_BaseInvokeCond_o *, BattleBuffData_o *, BuffEntity_o *, System_Int32_array *, void *))this->klass->vtable._6_CheckBuffTypeCond.method)(
             this,
             buffData,
             buffEnt,
             ScriptIntArray,
             this->klass[1]._1.image);
  }
  if ( !buffData )
LABEL_6:
    sub_B7076C(v13, v14);
  return BattleBuffData__checkBuffTypeIndiviuality(
           buffData,
           selfIndivValues,
           condIndivValues,
           buffEnt,
           targetCount,
           0LL);
}


void __fastcall BuffList_BaseInvokeCond__Init(
        BuffList_BaseInvokeCond_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BuffList_BaseInvokeCond_Fields *p_fields; // x20
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____o *dicCacheSelfValue; // x0

  if ( (byte_434ED53 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____Clear__);
    byte_434ED53 = 1;
  }
  this->fields._SvtData_k__BackingField = svtData;
  p_fields = &this->fields;
  sub_B70630(p_fields);
  dicCacheSelfValue = p_fields->dicCacheSelfValue;
  if ( !dicCacheSelfValue )
    sub_B7076C(0LL, v6);
  System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int_____Clear(
    dicCacheSelfValue,
    (const MethodInfo_2F72200 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____Clear__);
}


System_String_o *__fastcall BuffList_BaseInvokeCond__get_BuffTypeCondKeyName(
        BuffList_BaseInvokeCond_o *this,
        const MethodInfo *method)
{
  if ( (byte_434ED51 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4017/*"Check{0}BuffTypes"*/);
    byte_434ED51 = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_4017/*"Check{0}BuffTypes"*/, (Il2CppObject *)this->fields.targetSideStr, 0LL);
}


BattleServantData_o *__fastcall BuffList_BaseInvokeCond__get_SvtData(
        BuffList_BaseInvokeCond_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtData_k__BackingField;
}


void __fastcall BuffList_BaseInvokeCond__set_SvtData(
        BuffList_BaseInvokeCond_o *this,
        BattleServantData_o *value,
        const MethodInfo *method)
{
  this->fields._SvtData_k__BackingField = value;
  sub_B70630(&this->fields);
}