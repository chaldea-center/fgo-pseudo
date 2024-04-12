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
  BuffList_TYPE_array *v60; // x21
  BuffList_ActInfo_o *v61; // x22
  BuffList_TYPE_array *v62; // x20
  BuffList_TYPE_array *v63; // x21
  BuffList_ActInfo_o *v64; // x22
  BuffList_TYPE_array *v65; // x20
  BuffList_TYPE_array *v66; // x21
  BuffList_ActInfo_o *v67; // x22
  BuffList_TYPE_array *v68; // x20
  BuffList_TYPE_array *v69; // x21
  BuffList_ActInfo_o *v70; // x22
  BuffList_TYPE_array *v71; // x20
  BuffList_TYPE_array *v72; // x21
  BuffList_ActInfo_o *v73; // x22
  BuffList_TYPE_array *v74; // x20
  BuffList_TYPE_array *v75; // x21
  BuffList_ActInfo_o *v76; // x22
  BuffList_TYPE_array *v77; // x20
  BuffList_TYPE_array *v78; // x21
  BuffList_ActInfo_o *v79; // x22
  int v80; // w8
  BuffList_TYPE_array *v81; // x20
  int v82; // w8
  BuffList_TYPE_array *v83; // x21
  BuffList_ActInfo_o *v84; // x22
  BuffList_TYPE_array *v85; // x20
  BuffList_TYPE_array *v86; // x21
  BuffList_ActInfo_o *v87; // x22
  BuffList_TYPE_array *v88; // x20
  BuffList_TYPE_array *v89; // x21
  BuffList_ActInfo_o *v90; // x22
  BuffList_TYPE_array *v91; // x20
  BuffList_TYPE_array *v92; // x21
  BuffList_ActInfo_o *v93; // x22
  int v94; // w8
  BuffList_TYPE_array *v95; // x20
  int v96; // w8
  BuffList_TYPE_array *v97; // x21
  BuffList_ActInfo_o *v98; // x22
  BuffList_TYPE_array *v99; // x20
  BuffList_TYPE_array *v100; // x21
  BuffList_ActInfo_o *v101; // x22
  BuffList_TYPE_array *v102; // x20
  BuffList_TYPE_array *v103; // x21
  BuffList_ActInfo_o *v104; // x22
  System_String_o *v105; // x0
  BuffList_TYPE_array *v106; // x20
  BuffList_TYPE_array *v107; // x21
  BuffList_ActInfo_o *v108; // x22
  BuffList_TYPE_array *v109; // x20
  BuffList_TYPE_array *v110; // x21
  BuffList_ActInfo_o *v111; // x22
  System_String_o *v112; // x0
  BuffList_TYPE_array *v113; // x20
  BuffList_TYPE_array *v114; // x22
  BuffList_ActInfo_o *v115; // x21
  System_String_o *v116; // x0
  BuffList_TYPE_array *v117; // x20
  BuffList_TYPE_array *v118; // x22
  BuffList_ActInfo_o *v119; // x21
  System_String_o *v120; // x0
  BuffList_TYPE_array *v121; // x20
  BuffList_TYPE_array *v122; // x22
  BuffList_ActInfo_o *v123; // x21
  System_String_o *v124; // x0
  BuffList_TYPE_array *v125; // x20
  BuffList_TYPE_array *v126; // x21
  BuffList_ActInfo_o *v127; // x22
  BuffList_TYPE_array *v128; // x20
  BuffList_TYPE_array *v129; // x21
  BuffList_ActInfo_o *v130; // x22
  System_String_o *v131; // x0
  BuffList_TYPE_array *v132; // x20
  BuffList_TYPE_array *v133; // x0
  __int64 v134; // x1
  BuffList_TYPE_array *v135; // x21
  BuffList_ActInfo_o *v136; // x22
  System_String_o *v137; // x0
  BuffList_TYPE_array *v138; // x20
  BuffList_TYPE_array *v139; // x21
  BuffList_ActInfo_o *v140; // x22
  System_String_o *v141; // x0
  BuffList_TYPE_array *v142; // x20
  BuffList_TYPE_array *v143; // x21
  BuffList_ActInfo_o *v144; // x22
  BuffList_TYPE_array *v145; // x20
  BuffList_TYPE_array *v146; // x21
  BuffList_ActInfo_o *v147; // x22
  BuffList_TYPE_array *v148; // x20
  BuffList_TYPE_array *v149; // x21
  BuffList_ActInfo_o *v150; // x22
  BuffList_TYPE_array *v151; // x20
  BuffList_TYPE_array *v152; // x21
  BuffList_ActInfo_o *v153; // x22
  BuffList_TYPE_array *v154; // x20
  BuffList_TYPE_array *v155; // x21
  BuffList_ActInfo_o *v156; // x22
  BuffList_TYPE_array *v157; // x20
  BuffList_TYPE_array *v158; // x21
  BuffList_ActInfo_o *v159; // x22
  BuffList_TYPE_array *v160; // x20
  BuffList_TYPE_array *v161; // x21
  BuffList_ActInfo_o *v162; // x22
  BuffList_TYPE_array *v163; // x20
  BuffList_TYPE_array *v164; // x21
  BuffList_ActInfo_o *v165; // x22
  BuffList_TYPE_array *v166; // x20
  BuffList_TYPE_array *v167; // x21
  BuffList_ActInfo_o *v168; // x22
  System_String_o *v169; // x0
  BuffList_TYPE_array *v170; // x20
  BuffList_TYPE_array *v171; // x21
  BuffList_ActInfo_o *v172; // x22
  BuffList_TYPE_array *v173; // x20
  BuffList_TYPE_array *v174; // x22
  BuffList_ActInfo_o *v175; // x21
  System_String_o *v176; // x0
  BuffList_TYPE_array *v177; // x20
  BuffList_TYPE_array *v178; // x22
  BuffList_ActInfo_o *v179; // x21
  System_String_o *v180; // x0
  BuffList_TYPE_array *v181; // x20
  BuffList_TYPE_array *v182; // x22
  BuffList_ActInfo_o *v183; // x21
  System_String_o *v184; // x0
  BuffList_TYPE_array *v185; // x20
  BuffList_TYPE_array *v186; // x21
  BuffList_ActInfo_o *v187; // x22
  BuffList_TYPE_array *v188; // x20
  BuffList_TYPE_array *v189; // x21
  BuffList_ActInfo_o *v190; // x22
  BuffList_TYPE_array *v191; // x20
  BuffList_TYPE_array *v192; // x21
  BuffList_ActInfo_o *v193; // x22
  System_String_o *v194; // x0
  BuffList_TYPE_array *v195; // x20
  BuffList_TYPE_array *v196; // x21
  BuffList_ActInfo_o *v197; // x22
  System_String_o *v198; // x0
  BuffList_TYPE_array *v199; // x20
  BuffList_TYPE_array *v200; // x21
  BuffList_ActInfo_o *v201; // x22
  BuffList_TYPE_array *v202; // x20
  BuffList_TYPE_array *v203; // x21
  BuffList_ActInfo_o *v204; // x22
  BuffList_TYPE_array *v205; // x20
  BuffList_TYPE_array *v206; // x21
  BuffList_ActInfo_o *v207; // x22
  BuffList_TYPE_array *v208; // x20
  BuffList_TYPE_array *v209; // x21
  BuffList_ActInfo_o *v210; // x22
  BuffList_TYPE_array *v211; // x20
  BuffList_TYPE_array *v212; // x21
  BuffList_ActInfo_o *v213; // x22
  BuffList_TYPE_array *v214; // x20
  BuffList_TYPE_array *v215; // x21
  BuffList_ActInfo_o *v216; // x22
  BuffList_TYPE_array *v217; // x20
  BuffList_TYPE_array *v218; // x22
  BuffList_ActInfo_o *v219; // x21
  System_String_o *v220; // x0
  BuffList_TYPE_array *v221; // x20
  BuffList_TYPE_array *v222; // x21
  BuffList_ActInfo_o *v223; // x22
  System_String_o *v224; // x0
  BuffList_TYPE_array *v225; // x20
  BuffList_TYPE_array *v226; // x21
  BuffList_ActInfo_o *v227; // x22
  System_String_o *v228; // x0
  BuffList_TYPE_array *v229; // x20
  BuffList_TYPE_array *v230; // x21
  BuffList_ActInfo_o *v231; // x22
  System_String_o *v232; // x0
  BuffList_TYPE_array *v233; // x20
  BuffList_TYPE_array *v234; // x21
  BuffList_ActInfo_o *v235; // x22
  BuffList_TYPE_array *v236; // x20
  BuffList_TYPE_array *v237; // x21
  BuffList_ActInfo_o *v238; // x22
  BuffList_TYPE_array *v239; // x20
  BuffList_TYPE_array *v240; // x21
  BuffList_ActInfo_o *v241; // x22
  BuffList_TYPE_array *v242; // x20
  BuffList_TYPE_array *v243; // x21
  BuffList_ActInfo_o *v244; // x22
  BuffList_TYPE_array *v245; // x20
  BuffList_TYPE_array *v246; // x21
  BuffList_ActInfo_o *v247; // x22
  System_String_o *v248; // x0
  BuffList_TYPE_array *v249; // x20
  BuffList_TYPE_array *v250; // x21
  BuffList_ActInfo_o *v251; // x22
  BuffList_TYPE_array *v252; // x20
  BuffList_TYPE_array *v253; // x21
  BuffList_ActInfo_o *v254; // x22
  BuffList_TYPE_array *v255; // x20
  BuffList_TYPE_array *v256; // x21
  BuffList_ActInfo_o *v257; // x22
  BuffList_TYPE_array *v258; // x20
  BuffList_TYPE_array *v259; // x21
  BuffList_ActInfo_o *v260; // x22
  BuffList_TYPE_array *v261; // x20
  BuffList_TYPE_array *v262; // x21
  BuffList_ActInfo_o *v263; // x22
  BuffList_TYPE_array *v264; // x20
  BuffList_TYPE_array *v265; // x21
  BuffList_ActInfo_o *v266; // x22
  BuffList_TYPE_array *v267; // x20
  BuffList_TYPE_array *v268; // x21
  BuffList_ActInfo_o *v269; // x22
  BuffList_TYPE_array *v270; // x20
  BuffList_TYPE_array *v271; // x21
  BuffList_ActInfo_o *v272; // x22
  BuffList_TYPE_array *v273; // x20
  BuffList_TYPE_array *v274; // x21
  BuffList_ActInfo_o *v275; // x22
  BuffList_TYPE_array *v276; // x20
  BuffList_TYPE_array *v277; // x22
  BuffList_ActInfo_o *v278; // x21
  System_String_o *v279; // x0
  BuffList_TYPE_array *v280; // x20
  BuffList_TYPE_array *v281; // x22
  BuffList_ActInfo_o *v282; // x21
  System_String_o *v283; // x0
  BuffList_TYPE_array *v284; // x20
  BuffList_TYPE_array *v285; // x21
  BuffList_ActInfo_o *v286; // x22
  BuffList_TYPE_array *v287; // x20
  BuffList_TYPE_array *v288; // x21
  BuffList_ActInfo_o *v289; // x22
  BuffList_TYPE_array *v290; // x20
  BuffList_TYPE_array *v291; // x21
  BuffList_ActInfo_o *v292; // x22
  BuffList_TYPE_array *v293; // x20
  BuffList_TYPE_array *v294; // x21
  BuffList_ActInfo_o *v295; // x22
  BuffList_TYPE_array *v296; // x20
  BuffList_TYPE_array *v297; // x21
  BuffList_ActInfo_o *v298; // x22
  BuffList_TYPE_array *v299; // x20
  BuffList_TYPE_array *v300; // x21
  BuffList_ActInfo_o *v301; // x22
  System_Array_o *v302; // x21
  BuffList_TYPE_array *v303; // x22
  BuffList_ActInfo_o *v304; // x20
  System_String_o *v305; // x0
  BuffList_TYPE_array *v306; // x20
  BuffList_TYPE_array *v307; // x21
  BuffList_ActInfo_o *v308; // x22
  BuffList_TYPE_array *v309; // x20
  BuffList_TYPE_array *v310; // x21
  BuffList_ActInfo_o *v311; // x22
  BuffList_TYPE_array *v312; // x20
  __int64 v313; // x1
  BuffList_TYPE_array *v314; // x21
  BuffList_ActInfo_o *v315; // x22
  System_String_o *v316; // x0
  BuffList_TYPE_array *v317; // x20
  BuffList_TYPE_array *v318; // x21
  BuffList_ActInfo_o *v319; // x22
  System_String_o *v320; // x0
  BuffList_TYPE_array *v321; // x20
  BuffList_TYPE_array *v322; // x22
  BuffList_ActInfo_o *v323; // x21
  System_String_o *v324; // x0
  BuffList_TYPE_array *v325; // x20
  BuffList_TYPE_array *v326; // x21
  BuffList_ActInfo_o *v327; // x22
  BuffList_TYPE_array *v328; // x20
  BuffList_TYPE_array *v329; // x21
  BuffList_ActInfo_o *v330; // x22
  BuffList_TYPE_array *v331; // x20
  BuffList_TYPE_array *v332; // x21
  BuffList_ActInfo_o *v333; // x22
  BuffList_TYPE_array *v334; // x20
  BuffList_TYPE_array *v335; // x21
  BuffList_ActInfo_o *v336; // x22
  BuffList_TYPE_array *v337; // x20
  BuffList_TYPE_array *v338; // x21
  BuffList_ActInfo_o *v339; // x22
  BuffList_TYPE_array *v340; // x20
  BuffList_TYPE_array *v341; // x21
  BuffList_ActInfo_o *v342; // x22
  BuffList_TYPE_array *v343; // x20
  BuffList_TYPE_array *v344; // x22
  BuffList_ActInfo_o *v345; // x21
  System_String_o *v346; // x0
  BuffList_TYPE_array *v347; // x20
  BuffList_TYPE_array *v348; // x21
  BuffList_ActInfo_o *v349; // x22
  BuffList_TYPE_array *v350; // x20
  BuffList_TYPE_array *v351; // x21
  BuffList_ActInfo_o *v352; // x22
  BuffList_TYPE_array *v353; // x20
  BuffList_TYPE_array *v354; // x21
  BuffList_ActInfo_o *v355; // x22
  BuffList_TYPE_array *v356; // x20
  BuffList_TYPE_array *v357; // x21
  BuffList_ActInfo_o *v358; // x22
  BuffList_TYPE_array *v359; // x20
  BuffList_TYPE_array *v360; // x21
  BuffList_ToFieldActInfo_o *v361; // x22
  BuffList_TYPE_array *v362; // x20
  BuffList_TYPE_array *v363; // x21
  BuffList_ToFieldActInfo_o *v364; // x22
  BuffList_TYPE_array *v365; // x20
  BuffList_TYPE_array *v366; // x22
  BuffList_ActInfo_o *v367; // x21
  System_String_o *v368; // x0
  BuffList_TYPE_array *v369; // x20
  BuffList_TYPE_array *v370; // x21
  BuffList_ActInfo_o *v371; // x22
  BuffList_TYPE_array *v372; // x20
  BuffList_TYPE_array *v373; // x21
  BuffList_ActInfo_o *v374; // x22
  BuffList_TYPE_array *v375; // x20
  BuffList_TYPE_array *v376; // x22
  BuffList_ActInfo_o *v377; // x21
  System_String_o *v378; // x0
  BuffList_TYPE_array *v379; // x20
  BuffList_TYPE_array *v380; // x21
  BuffList_ActInfo_o *v381; // x22
  System_String_o *v382; // x0
  il2cpp_array_size_t max_length; // w8
  BuffList_TYPE_array *v384; // x20
  BuffList_TYPE_array *v385; // x21
  BuffList_ActInfo_o *v386; // x22
  BuffList_TYPE_array *v387; // x20
  BuffList_TYPE_array *v388; // x22
  BuffList_ActInfo_o *v389; // x21
  System_String_o *v390; // x0
  BuffList_TYPE_array *v391; // x20
  BuffList_TYPE_array *v392; // x21
  BuffList_ActInfo_o *v393; // x22
  BuffList_TYPE_array *v394; // x20
  BuffList_TYPE_array *v395; // x21
  BuffList_ActInfo_o *v396; // x22
  BuffList_TYPE_array *v397; // x20
  BuffList_TYPE_array *v398; // x21
  BuffList_ActInfo_o *v399; // x22
  BuffList_TYPE_array *v400; // x20
  BuffList_TYPE_array *v401; // x21
  BuffList_ActInfo_o *v402; // x22
  BuffList_TYPE_array *v403; // x20
  BuffList_TYPE_array *v404; // x21
  BuffList_ActInfo_o *v405; // x22
  BuffList_TYPE_array *v406; // x20
  BuffList_TYPE_array *v407; // x21
  BuffList_ActInfo_o *v408; // x22
  BuffList_TYPE_array *v409; // x20
  BuffList_TYPE_array *v410; // x21
  BuffList_ActInfo_o *v411; // x22
  BuffList_TYPE_array *v412; // x20
  BuffList_TYPE_array *v413; // x21
  BuffList_ActInfo_o *v414; // x22
  BuffList_TYPE_array *v415; // x20
  BuffList_TYPE_array *v416; // x21
  BuffList_ActInfo_o *v417; // x22
  BuffList_TYPE_array *v418; // x20
  BuffList_TYPE_array *v419; // x21
  BuffList_ActInfo_o *v420; // x22
  BuffList_TYPE_array *v421; // x20
  BuffList_TYPE_array *v422; // x21
  BuffList_ActInfo_o *v423; // x22
  BuffList_TYPE_array *v424; // x20
  BuffList_TYPE_array *v425; // x21
  BuffList_ActInfo_o *v426; // x22
  BuffList_TYPE_array *v427; // x20
  BuffList_TYPE_array *v428; // x21
  BuffList_ActInfo_o *v429; // x22
  BuffList_TYPE_array *v430; // x20
  BuffList_TYPE_array *v431; // x21
  BuffList_ActInfo_o *v432; // x22
  il2cpp_array_size_t v433; // w8
  BuffList_TYPE_array *v434; // x20
  BuffList_TYPE_array *v435; // x21
  BuffList_ActInfo_o *v436; // x22
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v438; // x2
  System_String_array **v439; // x3
  System_Boolean_array **v440; // x4
  System_Int32_array **v441; // x5
  System_Int32_array *v442; // x6
  System_Int32_array *v443; // x7
  System_String_array **v444; // x2
  System_String_array **v445; // x3
  System_Boolean_array **v446; // x4
  System_Int32_array **v447; // x5
  System_Int32_array *v448; // x6
  System_Int32_array *v449; // x7
  il2cpp_array_size_t v450; // w8
  System_Int32_array **v451; // x1
  struct BuffList_StaticFields *v452; // x0
  System_Array_o *v453; // x19
  struct BuffList_StaticFields *v454; // x0
  System_String_array **v455; // x2
  System_String_array **v456; // x3
  System_Boolean_array **v457; // x4
  System_Int32_array **v458; // x5
  System_Int32_array *v459; // x6
  System_Int32_array *v460; // x7
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v461; // x19
  struct BuffList_StaticFields *v462; // x0
  System_String_array **v463; // x2
  System_String_array **v464; // x3
  System_Boolean_array **v465; // x4
  System_Int32_array **v466; // x5
  System_Int32_array *v467; // x6
  System_Int32_array *v468; // x7
  __int64 v469; // x0
  __int64 v470; // x0
  __int64 v471; // x0
  System_RuntimeFieldHandle_o v472; // 0:w1.4
  System_RuntimeFieldHandle_o v473; // 0:w1.4

  if ( (byte_42B1839 & 1) == 0 )
  {
    sub_B52984(&BuffList_ACTION___TypeInfo);
    sub_B52984(&BuffList_ActInfo_TypeInfo);
    sub_B52984(&BuffList_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_BuffList_TYPE___ctor__);
    sub_B52984(&System_Collections_Generic_HashSet_BuffList_TYPE__TypeInfo);
    sub_B52984(&BuffList_TYPE___TypeInfo);
    sub_B52984(&BuffList_ToFieldActInfo_TypeInfo);
    sub_B52984(&Field__PrivateImplementationDetails__4EECD95FEC87B9ABE1EA9376D9C9CF1F7F1C01299268E427022C2F5192383D9E);
    sub_B52984(&Field__PrivateImplementationDetails__F74CB50F9D18C1E2A044410ED05D3C7285B0A0EF1A7321D9BD37EE90BF1D943E);
    byte_42B1839 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B52A54(System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F3E9EC *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo___ctor__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_398;
  plusTypes = (int)v2->fields.plusTypes;
  v5 = (BuffList_TYPE_array *)v2;
  if ( !plusTypes )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 1;
  if ( plusTypes == 1 )
    goto LABEL_400;
  HIDWORD(v2->fields.minusTypes) = 52;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_398;
  v6 = (int)v2->fields.plusTypes;
  v7 = (BuffList_TYPE_array *)v2;
  if ( !v6 )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 66;
  if ( v6 == 1 )
    goto LABEL_400;
  HIDWORD(v2->fields.minusTypes) = 60;
  v8 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v8, 3, v5, v7, 0LL);
  if ( !v1 )
    goto LABEL_398;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1,
    (System_String_o *)v8,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_398;
  v9 = (int)v2->fields.plusTypes;
  v10 = (BuffList_TYPE_array *)v2;
  if ( !v9 )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 105;
  if ( v9 == 1 )
    goto LABEL_400;
  HIDWORD(v2->fields.minusTypes) = 128;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_398;
  v11 = (int)v2->fields.plusTypes;
  v12 = (BuffList_TYPE_array *)v2;
  if ( !v11 )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 106;
  if ( v11 == 1 )
    goto LABEL_400;
  HIDWORD(v2->fields.minusTypes) = 129;
  v13 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v13, 1, v10, v12, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    2,
    (System_String_o *)v13,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v14 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 9;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v15 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 10;
  v16 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v16, 3, v14, v15, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    3,
    (System_String_o *)v16,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v17 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 42;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v18 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 43;
  v19 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v19, 2, v17, v18, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    4,
    (System_String_o *)v19,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v20 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v21 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 43;
  v22 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v22, 2, v20, v21, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    5,
    (System_String_o *)v22,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v23 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 91;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v24 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 92;
  v25 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v25, 3, v23, v24, 0LL);
  if ( !v25 )
    goto LABEL_398;
  v26 = (System_String_o *)BuffList_ActInfo__setBaseValue(v25, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    6,
    v26,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v27 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 11;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v28 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 12;
  v29 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v29, 1, v27, v28, 0LL);
  if ( !v29 )
    goto LABEL_398;
  v30 = (System_String_o *)BuffList_ActInfo__setBaseValue(v29, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    7,
    v30,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v31 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 110;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v32 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 111;
  v33 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v33, 1, v31, v32, 0LL);
  if ( !v33 )
    goto LABEL_398;
  v34 = (System_String_o *)BuffList_ActInfo__setBaseValue(v33, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    8,
    v34,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v35 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 112;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v36 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 113;
  v37 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v37, 1, v35, v36, 0LL);
  if ( !v37 )
    goto LABEL_398;
  v38 = (System_String_o *)BuffList_ActInfo__setBaseValue(v37, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    9,
    v38,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v39 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 20;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v40 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 21;
  v41 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v41, 1, v39, v40, 0LL);
  if ( !v41 )
    goto LABEL_398;
  v42 = (System_String_o *)BuffList_ActInfo__setBaseValue(v41, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    10,
    v42,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v43 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 18;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v44 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 19;
  v45 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v45, 1, v43, v44, 0LL);
  if ( !v45 )
    goto LABEL_398;
  v46 = (System_String_o *)BuffList_ActInfo__setBaseValue(v45, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    11,
    v46,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v47 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 15;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v48 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 16;
  v49 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v49, 1, v47, v48, 0LL);
  if ( !v49 )
    goto LABEL_398;
  v50 = (System_String_o *)BuffList_ActInfo__setBaseValue(v49, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    12,
    v50,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v51 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 13;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v52 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 14;
  v53 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v53, 0, v51, v52, 0LL);
  if ( !v53 )
    goto LABEL_398;
  v54 = (System_String_o *)BuffList_ActInfo__setBaseParam(v53, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    13,
    v54,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v55 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 22;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v56 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 23;
  v57 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v57, 0, v55, v56, 0LL);
  if ( !v57 )
    goto LABEL_398;
  v58 = (System_String_o *)BuffList_ActInfo__setBaseParam(v57, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    14,
    v58,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v59 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 72;
  v60 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v61 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v61, 0, v59, v60, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    15,
    (System_String_o *)v61,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v62 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 26;
  v63 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v64 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v64, 0, v62, v63, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    16,
    (System_String_o *)v64,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v65 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 25;
  v66 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v67 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v67, 0, v65, v66, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    17,
    (System_String_o *)v67,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v68 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 24;
  v69 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v70 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v70, 0, v68, v69, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    18,
    (System_String_o *)v70,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v71 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 107;
  v72 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v73 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v73, 0, v71, v72, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    19,
    (System_String_o *)v73,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v74 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 108;
  v75 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v76 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v76, 0, v74, v75, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    20,
    (System_String_o *)v76,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v77 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 109;
  v78 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v79 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v79, 0, v77, v78, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    21,
    (System_String_o *)v79,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_398;
  v80 = (int)v2->fields.plusTypes;
  v81 = (BuffList_TYPE_array *)v2;
  if ( !v80 )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 51;
  if ( v80 == 1 )
    goto LABEL_400;
  HIDWORD(v2->fields.minusTypes) = 52;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_398;
  v82 = (int)v2->fields.plusTypes;
  v83 = (BuffList_TYPE_array *)v2;
  if ( !v82 )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 68;
  if ( v82 == 1 )
    goto LABEL_400;
  HIDWORD(v2->fields.minusTypes) = 60;
  v84 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v84, 3, v81, v83, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    22,
    (System_String_o *)v84,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v85 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 105;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v86 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 106;
  v87 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v87, 1, v85, v86, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    23,
    (System_String_o *)v87,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v88 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 17;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v89 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 63;
  v90 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v90, 3, v88, v89, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    24,
    (System_String_o *)v90,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v91 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 93;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v92 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 94;
  v93 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v93, 3, v91, v92, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    25,
    (System_String_o *)v93,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_398;
  v94 = (int)v2->fields.plusTypes;
  v95 = (BuffList_TYPE_array *)v2;
  if ( !v94 )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 50;
  if ( v94 == 1 )
    goto LABEL_400;
  HIDWORD(v2->fields.minusTypes) = 52;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_398;
  v96 = (int)v2->fields.plusTypes;
  v97 = (BuffList_TYPE_array *)v2;
  if ( !v96 || (LODWORD(v2->fields.minusTypes) = 67, v96 == 1) )
  {
LABEL_400:
    v469 = sub_B52A88(v2);
    sub_B52A28(v469, 0LL);
  }
  HIDWORD(v2->fields.minusTypes) = 60;
  v98 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v98, 3, v95, v97, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    26,
    (System_String_o *)v98,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v99 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 105;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v100 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 106;
  v101 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v101, 1, v99, v100, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    27,
    (System_String_o *)v101,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v102 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 3;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v103 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 4;
  v104 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v104, 3, v102, v103, 0LL);
  if ( !v104 )
    goto LABEL_398;
  v105 = (System_String_o *)BuffList_ActInfo__setBaseValue(v104, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    28,
    v105,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v106 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 2;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v107 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 61;
  v108 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v108, 3, v106, v107, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    29,
    (System_String_o *)v108,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v109 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 5;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v110 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 62;
  v111 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v111, 0, v109, v110, 0LL);
  if ( !v111 )
    goto LABEL_398;
  v2 = BuffList_ActInfo__setBaseParam(v111, 0, 0LL);
  if ( !v2 )
    goto LABEL_398;
  v2 = BuffList_ActInfo__setRec(v2, 0, 0LL);
  if ( !v2 )
    goto LABEL_398;
  v112 = (System_String_o *)BuffList_ActInfo__setPlusAction(v2, 71, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    30,
    v112,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v113 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 6;
  v114 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v115 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v115, 0, v113, v114, 0LL);
  if ( !v115 )
    goto LABEL_398;
  v2 = BuffList_ActInfo__setBaseParam(v115, 0, 0LL);
  if ( !v2 )
    goto LABEL_398;
  v116 = (System_String_o *)BuffList_ActInfo__setRec(v2, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    31,
    v116,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v117 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 7;
  v118 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v119 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v119, 0, v117, v118, 0LL);
  if ( !v119 )
    goto LABEL_398;
  v2 = BuffList_ActInfo__setBaseParam(v119, 0, 0LL);
  if ( !v2 )
    goto LABEL_398;
  v120 = (System_String_o *)BuffList_ActInfo__setRec(v2, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    32,
    v120,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v121 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 8;
  v122 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v123 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v123, 0, v121, v122, 0LL);
  if ( !v123 )
    goto LABEL_398;
  v2 = BuffList_ActInfo__setBaseParam(v123, 0, 0LL);
  if ( !v2 )
    goto LABEL_398;
  v2 = BuffList_ActInfo__setRec(v2, 0, 0LL);
  if ( !v2 )
    goto LABEL_398;
  v124 = (System_String_o *)BuffList_ActInfo__setPlusAction(v2, 72, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    33,
    v124,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v125 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 64;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v126 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 65;
  v127 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v127, 3, v125, v126, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    34,
    (System_String_o *)v127,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v128 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 114;
  v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v2 )
    goto LABEL_398;
  v129 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 115;
  v130 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v130, 0, v128, v129, 0LL);
  if ( !v130
    || (v131 = (System_String_o *)BuffList_ActInfo__setBaseParam(v130, 0, 0LL),
        System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
          v1,
          35,
          v131,
          (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__),
        (v2 = (BuffList_ActInfo_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_398:
    sub_B52A5C(v2, v3);
  }
  v132 = (BuffList_TYPE_array *)v2;
  if ( !LODWORD(v2->fields.plusTypes) )
    goto LABEL_400;
  LODWORD(v2->fields.minusTypes) = 27;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v135 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 28;
  v136 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v136, 3, v132, v135, 0LL);
  if ( !v136 )
    goto LABEL_399;
  v137 = (System_String_o *)BuffList_ActInfo__setBaseValue(v136, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    36,
    v137,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v138 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 29;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v139 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 30;
  v140 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v140, 3, v138, v139, 0LL);
  if ( !v140 )
    goto LABEL_399;
  v141 = (System_String_o *)BuffList_ActInfo__setBaseValue(v140, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    37,
    v141,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v142 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 31;
  v143 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v144 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v144, 0, v142, v143, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    38,
    (System_String_o *)v144,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v145 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 32;
  v146 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v147 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v147, 0, v145, v146, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    39,
    (System_String_o *)v147,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v148 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 33;
  v149 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v150 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v150, 0, v148, v149, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    40,
    (System_String_o *)v150,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v151 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 34;
  v152 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v153 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v153, 0, v151, v152, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    41,
    (System_String_o *)v153,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v154 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 35;
  v155 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v156 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v156, 0, v154, v155, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    42,
    (System_String_o *)v156,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v157 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 40;
  v158 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v159 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v159, 0, v157, v158, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    43,
    (System_String_o *)v159,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v160 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 41;
  v161 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v162 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v162, 0, v160, v161, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    44,
    (System_String_o *)v162,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v163 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 38;
  v164 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v165 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v165, 0, v163, v164, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    45,
    (System_String_o *)v165,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v166 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 70;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v167 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 71;
  v168 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v168, 3, v166, v167, 0LL);
  if ( !v168 )
    goto LABEL_399;
  v169 = (System_String_o *)BuffList_ActInfo__setBaseValue(v168, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    46,
    v169,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v170 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 73;
  v171 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v172 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v172, 3, v170, v171, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    47,
    (System_String_o *)v172,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v173 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 74;
  v174 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v175 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v175, 3, v173, v174, 0LL);
  if ( !v175 )
    goto LABEL_399;
  v176 = (System_String_o *)BuffList_ActInfo__setBaseValue(v175, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    48,
    v176,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v177 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 75;
  v178 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v179 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v179, 3, v177, v178, 0LL);
  if ( !v179 )
    goto LABEL_399;
  v180 = (System_String_o *)BuffList_ActInfo__setBaseValue(v179, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    49,
    v180,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v181 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 77;
  v182 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v183 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v183, 0, v181, v182, 0LL);
  if ( !v183 )
    goto LABEL_399;
  v184 = (System_String_o *)BuffList_ActInfo__setBaseValue(v183, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    50,
    v184,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v185 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 78;
  v186 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v187 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v187, 0, v185, v186, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    51,
    (System_String_o *)v187,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v188 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 149;
  v189 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v190 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v190, 0, v188, v189, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    89,
    (System_String_o *)v190,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v191 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 79;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v192 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 80;
  v193 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v193, 3, v191, v192, 0LL);
  if ( !v193 )
    goto LABEL_399;
  v194 = (System_String_o *)BuffList_ActInfo__setBaseValue(v193, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    52,
    v194,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v195 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 81;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v196 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 82;
  v197 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v197, 0, v195, v196, 0LL);
  if ( !v197 )
    goto LABEL_399;
  v198 = (System_String_o *)BuffList_ActInfo__setBaseParam(v197, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    53,
    v198,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v199 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 84;
  v200 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v201 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v201, 0, v199, v200, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    54,
    (System_String_o *)v201,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v202 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 85;
  v203 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v204 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v204, 0, v202, v203, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    55,
    (System_String_o *)v204,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v205 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 87;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v206 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 88;
  v207 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v207, 3, v205, v206, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    56,
    (System_String_o *)v207,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v208 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 89;
  v209 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v210 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v210, 0, v208, v209, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    57,
    (System_String_o *)v210,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v211 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 90;
  v212 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v213 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v213, 0, v211, v212, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    58,
    (System_String_o *)v213,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v214 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 95;
  v215 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v216 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v216, 0, v214, v215, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    59,
    (System_String_o *)v216,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v217 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 96;
  v218 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v219 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v219, 0, v217, v218, 0LL);
  if ( !v219 )
    goto LABEL_399;
  v220 = (System_String_o *)BuffList_ActInfo__setBaseParam(v219, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    60,
    v220,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v221 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 98;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v222 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 99;
  v223 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v223, 3, v221, v222, 0LL);
  if ( !v223 )
    goto LABEL_399;
  v224 = (System_String_o *)BuffList_ActInfo__setBaseValue(v223, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    61,
    v224,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v225 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 100;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v226 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 101;
  v227 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v227, 3, v225, v226, 0LL);
  if ( !v227 )
    goto LABEL_399;
  v228 = (System_String_o *)BuffList_ActInfo__setBaseValue(v227, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    62,
    v228,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v229 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 102;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v230 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 103;
  v231 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v231, 3, v229, v230, 0LL);
  if ( !v231 )
    goto LABEL_399;
  v232 = (System_String_o *)BuffList_ActInfo__setBaseValue(v231, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    63,
    v232,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v233 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 86;
  v234 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v235 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v235, 0, v233, v234, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    64,
    (System_String_o *)v235,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v236 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 97;
  v237 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v238 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v238, 0, v236, v237, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    65,
    (System_String_o *)v238,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v239 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 116;
  v240 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v241 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v241, 0, v239, v240, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    66,
    (System_String_o *)v241,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v242 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 117;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v243 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 118;
  v244 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v244, 1, v242, v243, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    67,
    (System_String_o *)v244,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v245 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 119;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v246 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 120;
  v247 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v247, 0, v245, v246, 0LL);
  if ( !v247 )
    goto LABEL_399;
  v248 = (System_String_o *)BuffList_ActInfo__setBaseValue(v247, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    68,
    v248,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v249 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 121;
  v250 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v251 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v251, 0, v249, v250, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    69,
    (System_String_o *)v251,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v252 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 122;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v253 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 123;
  v254 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v254, 0, v252, v253, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    70,
    (System_String_o *)v254,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v255 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 124;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v256 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 125;
  v257 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v257, 0, v255, v256, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    71,
    (System_String_o *)v257,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v258 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 126;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v259 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 127;
  v260 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v260, 0, v258, v259, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    72,
    (System_String_o *)v260,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v261 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 130;
  v262 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v263 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v263, 0, v261, v262, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    73,
    (System_String_o *)v263,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v264 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 131;
  v265 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v266 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v266, 0, v264, v265, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    74,
    (System_String_o *)v266,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v267 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 132;
  v268 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v269 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v269, 0, v267, v268, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    75,
    (System_String_o *)v269,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v270 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 133;
  v271 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v272 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v272, 0, v270, v271, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    76,
    (System_String_o *)v272,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v273 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 134;
  v274 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v275 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v275, 0, v273, v274, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    77,
    (System_String_o *)v275,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v276 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 135;
  v277 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v278 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v278, 1, v276, v277, 0LL);
  if ( !v278 )
    goto LABEL_399;
  v279 = (System_String_o *)BuffList_ActInfo__setBaseValue(v278, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    78,
    v279,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v280 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 136;
  v281 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v282 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v282, 1, v280, v281, 0LL);
  if ( !v282 )
    goto LABEL_399;
  v283 = (System_String_o *)BuffList_ActInfo__setBaseValue(v282, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    79,
    v283,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v284 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 137;
  v285 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v286 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v286, 0, v284, v285, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    80,
    (System_String_o *)v286,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v287 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 138;
  v288 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v289 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v289, 0, v287, v288, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    81,
    (System_String_o *)v289,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v290 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 139;
  v291 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v292 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v292, 0, v290, v291, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    82,
    (System_String_o *)v292,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v293 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 140;
  v294 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v295 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v295, 0, v293, v294, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    83,
    (System_String_o *)v295,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v296 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 141;
  v297 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v298 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v298, 0, v296, v297, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    84,
    (System_String_o *)v298,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v299 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 142;
  v300 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v301 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v301, 0, v299, v300, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    85,
    (System_String_o *)v301,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v302 = (System_Array_o *)sub_B5299C(BuffList_TYPE___TypeInfo, 4LL);
  v472.fields.value = Field__PrivateImplementationDetails__F74CB50F9D18C1E2A044410ED05D3C7285B0A0EF1A7321D9BD37EE90BF1D943E;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v302, v472, 0LL);
  v303 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v304 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v304, 0, (BuffList_TYPE_array *)v302, v303, 0LL);
  if ( !v304
    || (v305 = (System_String_o *)BuffList_ActInfo__setBaseParam(v304, -1, 0LL),
        System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
          v1,
          86,
          v305,
          (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__),
        (v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_399:
    sub_B52A5C(v133, v134);
  }
  v306 = v133;
  if ( !v133->max_length )
    goto LABEL_401;
  v133->m_Items[1] = 144;
  v307 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v308 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v308, 0, v306, v307, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    87,
    (System_String_o *)v308,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v309 = v133;
  if ( !v133->max_length )
  {
LABEL_401:
    v470 = sub_B52A88(v133);
    sub_B52A28(v470, 0LL);
  }
  v133->m_Items[1] = 148;
  v310 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v311 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v311, 0, v309, v310, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    88,
    (System_String_o *)v311,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_399;
  v312 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 150;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v314 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 151;
  v315 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v315, 3, v312, v314, 0LL);
  if ( !v315 )
    goto LABEL_403;
  v316 = (System_String_o *)BuffList_ActInfo__setBaseValue(v315, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    90,
    v316,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v317 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 152;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v318 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 153;
  v319 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v319, 3, v317, v318, 0LL);
  if ( !v319 )
    goto LABEL_403;
  v320 = (System_String_o *)BuffList_ActInfo__setBaseValue(v319, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    91,
    v320,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v321 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 154;
  v322 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v323 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v323, 3, v321, v322, 0LL);
  if ( !v323 )
    goto LABEL_403;
  v324 = (System_String_o *)BuffList_ActInfo__setBaseParam(v323, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    92,
    v324,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v325 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 155;
  v326 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v327 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v327, 3, v325, v326, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    93,
    (System_String_o *)v327,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v328 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 156;
  v329 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v330 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v330, 0, v328, v329, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    94,
    (System_String_o *)v330,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v331 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 157;
  v332 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v333 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v333, 0, v331, v332, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    95,
    (System_String_o *)v333,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v334 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 158;
  v335 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v336 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v336, 0, v334, v335, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    96,
    (System_String_o *)v336,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v337 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 159;
  v338 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v339 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v339, 0, v337, v338, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    97,
    (System_String_o *)v339,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v340 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 160;
  v341 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v342 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v342, 0, v340, v341, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    98,
    (System_String_o *)v342,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v343 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 161;
  v344 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v345 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v345, 0, v343, v344, 0LL);
  if ( !v345 )
    goto LABEL_403;
  v346 = (System_String_o *)BuffList_ActInfo__setBaseParam(v345, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    99,
    v346,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v347 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 163;
  v348 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v349 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v349, 0, v347, v348, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    100,
    (System_String_o *)v349,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v350 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 162;
  v351 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v352 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v352, 3, v350, v351, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    101,
    (System_String_o *)v352,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v353 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 165;
  v354 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v355 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v355, 0, v353, v354, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    102,
    (System_String_o *)v355,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v356 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 166;
  v357 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v358 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v358, 0, v356, v357, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    103,
    (System_String_o *)v358,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v359 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 10002;
  v360 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v361 = (BuffList_ToFieldActInfo_o *)sub_B52A54(BuffList_ToFieldActInfo_TypeInfo);
  BuffList_ToFieldActInfo___ctor(v361, 0, v359, v360, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    105,
    (System_String_o *)v361,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v362 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 10003;
  v363 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v364 = (BuffList_ToFieldActInfo_o *)sub_B52A54(BuffList_ToFieldActInfo_TypeInfo);
  BuffList_ToFieldActInfo___ctor(v364, 0, v362, v363, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    112,
    (System_String_o *)v364,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v365 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 27;
  v366 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v367 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v367, 3, v365, v366, 0LL);
  if ( !v367 )
    goto LABEL_403;
  v368 = (System_String_o *)BuffList_ActInfo__setBaseValue(v367, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    106,
    v368,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v369 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 167;
  v370 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v371 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v371, 3, v369, v370, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    107,
    (System_String_o *)v371,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v372 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 168;
  v373 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v374 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v374, 0, v372, v373, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    108,
    (System_String_o *)v374,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v375 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 169;
  v376 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v377 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v377, 0, v375, v376, 0LL);
  if ( !v377 )
    goto LABEL_403;
  v378 = (System_String_o *)BuffList_ActInfo__setBaseParam(v377, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    109,
    v378,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v379 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 170;
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v380 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 171;
  v381 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v381, 0, v379, v380, 0LL);
  if ( !v381 )
    goto LABEL_403;
  v382 = (System_String_o *)BuffList_ActInfo__setBaseParam(v381, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    110,
    v382,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v133 )
    goto LABEL_403;
  max_length = v133->max_length;
  v384 = v133;
  if ( !max_length )
    goto LABEL_402;
  v133->m_Items[1] = 172;
  if ( max_length == 1 )
    goto LABEL_402;
  v133->m_Items[2] = 173;
  v385 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v386 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v386, 0, v384, v385, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    111,
    (System_String_o *)v386,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v387 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 174;
  v388 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v389 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v389, 3, v387, v388, 0LL);
  if ( !v389
    || (v390 = (System_String_o *)BuffList_ActInfo__setBaseParam(v389, 0, 0LL),
        System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
          v1,
          113,
          v390,
          (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__),
        (v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_403:
    sub_B52A5C(v133, v313);
  }
  v391 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 175;
  v392 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v393 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v393, 0, v391, v392, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    114,
    (System_String_o *)v393,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v394 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 176;
  v395 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v396 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v396, 0, v394, v395, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    115,
    (System_String_o *)v396,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v397 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 177;
  v398 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v399 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v399, 0, v397, v398, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    116,
    (System_String_o *)v399,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v400 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 178;
  v401 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v402 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v402, 0, v400, v401, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    117,
    (System_String_o *)v402,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v403 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 179;
  v404 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v405 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v405, 0, v403, v404, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    118,
    (System_String_o *)v405,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v406 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 180;
  v407 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v408 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v408, 0, v406, v407, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    119,
    (System_String_o *)v408,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v409 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 181;
  v410 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v411 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v411, 0, v409, v410, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    120,
    (System_String_o *)v411,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v412 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 182;
  v413 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v414 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v414, 0, v412, v413, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    121,
    (System_String_o *)v414,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v415 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 185;
  v416 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v417 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v417, 0, v415, v416, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    122,
    (System_String_o *)v417,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v418 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 187;
  v419 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v420 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v420, 0, v418, v419, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    123,
    (System_String_o *)v420,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v421 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 186;
  v422 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v423 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v423, 0, v421, v422, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    124,
    (System_String_o *)v423,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v424 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 188;
  v425 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v426 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v426, 0, v424, v425, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    125,
    (System_String_o *)v426,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v427 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 189;
  v428 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v429 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v429, 0, v427, v428, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    127,
    (System_String_o *)v429,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v133 )
    goto LABEL_403;
  v430 = v133;
  if ( !v133->max_length )
    goto LABEL_402;
  v133->m_Items[1] = 190;
  v431 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v432 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v432, 0, v430, v431, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    128,
    (System_String_o *)v432,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v133 )
    goto LABEL_403;
  v433 = v133->max_length;
  v434 = v133;
  if ( !v433 )
    goto LABEL_402;
  v133->m_Items[1] = 37;
  if ( v433 == 1 )
    goto LABEL_402;
  v133->m_Items[2] = 104;
  v435 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 0LL);
  v436 = (BuffList_ActInfo_o *)sub_B52A54(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v436, 0, v434, v435, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    126,
    (System_String_o *)v436,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  static_fields = (BattleServantConfConponent_o *)BuffList_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v438, v439, v440, v441, v442, v443);
  v133 = (BuffList_TYPE_array *)sub_B5299C(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v133 )
    goto LABEL_403;
  v450 = v133->max_length;
  v451 = (System_Int32_array **)v133;
  if ( !v450 || (v133->m_Items[1] = 104, v450 == 1) )
  {
LABEL_402:
    v471 = sub_B52A88(v133);
    sub_B52A28(v471, 0LL);
  }
  v133->m_Items[2] = 37;
  v452 = BuffList_TypeInfo->static_fields;
  v452->GutsList = (struct BuffList_TYPE_array *)v451;
  sub_B52920((BattleServantConfConponent_o *)&v452->GutsList, v451, v444, v445, v446, v447, v448, v449);
  v453 = (System_Array_o *)sub_B5299C(BuffList_ACTION___TypeInfo, 4LL);
  v473.fields.value = Field__PrivateImplementationDetails__4EECD95FEC87B9ABE1EA9376D9C9CF1F7F1C01299268E427022C2F5192383D9E;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v453, v473, 0LL);
  v454 = BuffList_TypeInfo->static_fields;
  v454->CommandCodeFunctionActs = (struct BuffList_ACTION_array *)v453;
  sub_B52920(
    (BattleServantConfConponent_o *)&v454->CommandCodeFunctionActs,
    (System_Int32_array **)v453,
    v455,
    v456,
    v457,
    v458,
    v459,
    v460);
  v461 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B52A54(System_Collections_Generic_HashSet_BuffList_TYPE__TypeInfo);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v461,
    (const MethodInfo_24DB9C0 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE___ctor__);
  if ( !v461 )
    goto LABEL_403;
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v461,
    138,
    (const MethodInfo_24DCB9C *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v461,
    159,
    (const MethodInfo_24DCB9C *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v461,
    177,
    (const MethodInfo_24DCB9C *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v461,
    178,
    (const MethodInfo_24DCB9C *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  v462 = BuffList_TypeInfo->static_fields;
  v462->CommandCodeBuffHash = (struct System_Collections_Generic_HashSet_BuffList_TYPE__o *)v461;
  sub_B52920(
    (BattleServantConfConponent_o *)&v462->CommandCodeBuffHash,
    (System_Int32_array **)v461,
    v463,
    v464,
    v465,
    v466,
    v467,
    v468);
}


bool __fastcall BuffList__CheckAccumulation(int32_t type, const MethodInfo *method)
{
  if ( (byte_42B1834 & 1) == 0 )
  {
    sub_B52984(&BuffList_TypeInfo);
    byte_42B1834 = 1;
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

  if ( (byte_42B1836 & 1) == 0 )
  {
    sub_B52984(&BuffList_TypeInfo);
    byte_42B1836 = 1;
  }
  v3 = BuffList_TypeInfo;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v3 = BuffList_TypeInfo;
  }
  GutsList = v3->static_fields->GutsList;
  if ( !GutsList )
    sub_B52A5C(v3, method);
  max_length = GutsList->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      v8 = sub_B52A88(v3);
      sub_B52A28(v8, 0LL);
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
  if ( (byte_42B1833 & 1) == 0 )
  {
    sub_B52984(&BuffList_TypeInfo);
    byte_42B1833 = 1;
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
  if ( (byte_42B1838 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_8898/*"MST_BUFF_INDV_ADD_BUFF_ACTIVE"*/);
    byte_42B1838 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_8898/*"MST_BUFF_INDV_ADD_BUFF_ACTIVE"*/, 0LL) == 1;
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
      if ( (unsigned int)(type - 165) < 0x18 )
      {
        v3 = 15986697;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BuffList__IsIntervalPossibleBuff(int32_t type, const MethodInfo *method)
{
  char v2; // w8
  char v3; // w8
  unsigned __int64 v4; // x9

  if ( type <= 104 )
  {
    if ( type > 61 )
    {
      if ( type > 82 )
      {
        v2 = 0;
        if ( type == 95 || type == 104 )
          goto LABEL_24;
        goto LABEL_22;
      }
      if ( (unsigned int)(type - 76) < 7 )
      {
        LOBYTE(type) = (((_BYTE)type - 76) & 0x7F) == 1;
        return type;
      }
      goto LABEL_22;
    }
    v3 = type - 2;
    if ( (unsigned int)(type - 2) >= 0x3C )
      goto LABEL_22;
    v4 = 0x7FFFF343FFFFFFELL;
  }
  else
  {
    if ( type > 156 )
    {
      if ( type > 190 )
      {
        if ( (type | 2) != 10003 )
          goto LABEL_22;
LABEL_23:
        v2 = 0;
        goto LABEL_24;
      }
      if ( (unsigned int)(type - 161) < 0x10 )
        return (0x60DAu >> (type + 95)) & 1;
      if ( (unsigned int)(type - 189) <= 1 )
        goto LABEL_23;
LABEL_22:
      v2 = 1;
LABEL_24:
      LOBYTE(type) = v2;
      return type;
    }
    if ( (unsigned int)(type - 107) < 3 )
      goto LABEL_23;
    v3 = type - 122;
    if ( (unsigned int)(type - 122) >= 0x23 )
      goto LABEL_22;
    v4 = 0x3FC01E5FCLL;
  }
  *(_QWORD *)&type = (v4 >> v3) & 1;
  return type;
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

  if ( (byte_42B1837 & 1) == 0 )
  {
    sub_B52984(&BuffList_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Values__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_BuffList_ACTION__BuffList_ActInfo__GetEnumerator__);
    byte_42B1837 = 1;
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
                       (const MethodInfo_2F3F344 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Values__)) == 0LL )
  {
    sub_B52A5C(ActionList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_BuffList_ACTION__BuffList_ActInfo___GetEnumerator(
    &v13,
    ActionList,
    (const MethodInfo_2415854 *)Method_System_Collections_Generic_Dictionary_ValueCollection_BuffList_ACTION__BuffList_ActInfo__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo___MoveNext(
            &v13,
            (const MethodInfo_288F2B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__MoveNext__) )
  {
    currentValue = v13.fields.currentValue;
    if ( !v13.fields.currentValue )
      sub_B52A5C(0LL, v5);
    v13.fields.currentValue[4].klass = (Il2CppClass *)setData;
    sub_B52920(
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
    (const MethodInfo_288F2B0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__Dispose__);
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

  if ( (byte_42B1832 & 1) == 0 )
  {
    sub_B52984(&BuffList_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Item__);
    byte_42B1832 = 1;
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
           (const MethodInfo_2F3F4DC *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Item__);
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
    sub_B52A5C(ActionList, opponentSvt);
  }
  return v8;
}


bool __fastcall BuffList__isSpHit(int32_t type, const MethodInfo *method)
{
  if ( (byte_42B1835 & 1) == 0 )
  {
    sub_B52984(&BuffList_TypeInfo);
    byte_42B1835 = 1;
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
  sub_B52920(&this->fields.plusTypes);
  this->fields.minusTypes = inMinus;
  *(__n128 *)&v9 = sub_B52920(&this->fields.minusTypes);
  this->fields._OpponentInvokeCond_k__BackingField = (struct BuffList_BaseInvokeCond_o *)((__int64 (__fastcall *)(BuffList_ActInfo_o *, _QWORD, void *, long double))this->klass->vtable._4_MakeInvokeCond.method)(
                                                                                           this,
                                                                                           0LL,
                                                                                           this->klass[1]._1.image,
                                                                                           v9);
  sub_B52920(&this->fields._OpponentInvokeCond_k__BackingField);
}


BuffList_BaseInvokeCond_o *__fastcall BuffList_ActInfo__MakeInvokeCond(
        BuffList_ActInfo_o *this,
        bool isSelfSide,
        const MethodInfo *method)
{
  BuffList_BaseInvokeCond_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_42AD67E & 1) == 0 )
  {
    sub_B52984(&BuffList_BaseInvokeCond_TypeInfo);
    byte_42AD67E = 1;
  }
  v4 = (BuffList_BaseInvokeCond_o *)sub_B52A54(BuffList_BaseInvokeCond_TypeInfo);
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
  sub_B52920(&this->fields._OpponentInvokeCond_k__BackingField);
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

  if ( (byte_42AD680 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int_____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____TypeInfo);
    sub_B52984(&StringLiteral_12757/*"Self"*/);
    sub_B52984(&StringLiteral_10182/*"Opponent"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD680 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B52A54(System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v5,
    (const MethodInfo_2F3E9EC *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int_____ctor__);
  this->fields.dicCacheSelfValue = (struct System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____o *)v5;
  sub_B52920(&this->fields.dicCacheSelfValue);
  this->fields.targetSideStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(&this->fields.targetSideStr);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (struct System_String_o **)&StringLiteral_12757/*"Self"*/;
  if ( !isSelfSide )
    v8 = (struct System_String_o **)&StringLiteral_10182/*"Opponent"*/;
  if ( !this )
    sub_B52A5C(v6, v7);
  this->fields.targetSideStr = *v8;
  sub_B52920(&this->fields.targetSideStr);
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

  if ( (byte_42AD682 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____set_Item__);
    sub_B52984(&int___TypeInfo);
    byte_42AD682 = 1;
  }
  dicCacheSelfValue = (BattleBuffData_o *)this->fields.dicCacheSelfValue;
  if ( !dicCacheSelfValue )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
          (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)dicCacheSelfValue,
          1,
          (const MethodInfo_2F3F814 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____ContainsKey__) )
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
      dicCacheSelfValue = (BattleBuffData_o *)sub_B5299C(int___TypeInfo, 0LL);
    }
    if ( v11 )
    {
      System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____set_Item(
        (System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v11,
        1,
        (System_Collections_Generic_List_int__o *)dicCacheSelfValue,
        (const MethodInfo_2F3F578 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____set_Item__);
      goto LABEL_11;
    }
LABEL_14:
    sub_B52A5C(dicCacheSelfValue, buffData);
  }
LABEL_11:
  dicCacheSelfValue = (BattleBuffData_o *)this->fields.dicCacheSelfValue;
  if ( !dicCacheSelfValue )
    goto LABEL_14;
  dicCacheSelfValue = (BattleBuffData_o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                            (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)dicCacheSelfValue,
                                            1,
                                            (const MethodInfo_2F3F4DC *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____get_Item__);
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
    sub_B52A5C(v13, v14);
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

  if ( (byte_42AD681 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____Clear__);
    byte_42AD681 = 1;
  }
  this->fields._SvtData_k__BackingField = svtData;
  p_fields = &this->fields;
  sub_B52920(p_fields);
  dicCacheSelfValue = p_fields->dicCacheSelfValue;
  if ( !dicCacheSelfValue )
    sub_B52A5C(0LL, v6);
  System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int_____Clear(
    dicCacheSelfValue,
    (const MethodInfo_2F3F77C *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____Clear__);
}


System_String_o *__fastcall BuffList_BaseInvokeCond__get_BuffTypeCondKeyName(
        BuffList_BaseInvokeCond_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AD67F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3975/*"Check{0}BuffTypes"*/);
    byte_42AD67F = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_3975/*"Check{0}BuffTypes"*/, (Il2CppObject *)this->fields.targetSideStr, 0LL);
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
  sub_B52920(&this->fields);
}