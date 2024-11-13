void __fastcall Voice___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x1
  __int64 v119; // x2
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x1
  __int64 v143; // x2
  __int64 v144; // x1
  __int64 v145; // x2
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x1
  __int64 v149; // x2
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x1
  __int64 v161; // x2
  __int64 v162; // x1
  __int64 v163; // x2
  __int64 v164; // x1
  __int64 v165; // x2
  __int64 v166; // x1
  __int64 v167; // x2
  __int64 v168; // x1
  __int64 v169; // x2
  __int64 v170; // x1
  __int64 v171; // x2
  __int64 v172; // x1
  __int64 v173; // x2
  __int64 v174; // x1
  __int64 v175; // x2
  __int64 v176; // x1
  __int64 v177; // x2
  __int64 v178; // x1
  __int64 v179; // x2
  __int64 v180; // x1
  __int64 v181; // x2
  __int64 v182; // x1
  __int64 v183; // x2
  __int64 v184; // x1
  __int64 v185; // x2
  __int64 v186; // x1
  __int64 v187; // x2
  __int64 v188; // x1
  __int64 v189; // x2
  __int64 v190; // x1
  __int64 v191; // x2
  __int64 v192; // x1
  __int64 v193; // x2
  __int64 v194; // x1
  __int64 v195; // x2
  __int64 v196; // x1
  __int64 v197; // x2
  __int64 v198; // x1
  __int64 v199; // x2
  __int64 v200; // x1
  __int64 v201; // x2
  __int64 v202; // x1
  __int64 v203; // x2
  __int64 v204; // x1
  __int64 v205; // x2
  __int64 v206; // x1
  __int64 v207; // x2
  __int64 v208; // x1
  __int64 v209; // x2
  __int64 v210; // x1
  __int64 v211; // x2
  __int64 v212; // x1
  __int64 v213; // x2
  __int64 v214; // x1
  __int64 v215; // x2
  __int64 v216; // x1
  __int64 v217; // x2
  __int64 v218; // x1
  __int64 v219; // x2
  __int64 v220; // x1
  __int64 v221; // x2
  __int64 v222; // x1
  __int64 v223; // x2
  __int64 v224; // x1
  __int64 v225; // x2
  __int64 v226; // x1
  __int64 v227; // x2
  __int64 v228; // x1
  __int64 v229; // x2
  __int64 v230; // x1
  __int64 v231; // x2
  __int64 v232; // x1
  __int64 v233; // x2
  __int64 v234; // x1
  __int64 v235; // x2
  __int64 v236; // x1
  __int64 v237; // x2
  __int64 v238; // x1
  __int64 v239; // x2
  __int64 v240; // x1
  __int64 v241; // x2
  __int64 v242; // x1
  __int64 v243; // x2
  __int64 v244; // x1
  __int64 v245; // x2
  __int64 v246; // x1
  __int64 v247; // x2
  __int64 v248; // x1
  __int64 v249; // x2
  __int64 v250; // x1
  __int64 v251; // x2
  __int64 v252; // x1
  __int64 v253; // x2
  __int64 v254; // x1
  __int64 v255; // x2
  __int64 v256; // x1
  __int64 v257; // x2
  __int64 v258; // x1
  __int64 v259; // x2
  __int64 v260; // x1
  __int64 v261; // x2
  __int64 v262; // x1
  __int64 v263; // x2
  __int64 v264; // x1
  __int64 v265; // x2
  __int64 v266; // x1
  __int64 v267; // x2
  __int64 v268; // x1
  __int64 v269; // x2
  __int64 v270; // x1
  __int64 v271; // x2
  __int64 v272; // x1
  __int64 v273; // x2
  __int64 v274; // x1
  __int64 v275; // x2
  __int64 v276; // x1
  __int64 v277; // x2
  __int64 v278; // x1
  __int64 v279; // x2
  __int64 v280; // x1
  __int64 v281; // x2
  __int64 v282; // x1
  __int64 v283; // x2
  __int64 v284; // x1
  __int64 v285; // x2
  __int64 v286; // x1
  __int64 v287; // x2
  __int64 v288; // x1
  __int64 v289; // x2
  __int64 v290; // x1
  __int64 v291; // x2
  __int64 v292; // x1
  __int64 v293; // x2
  __int64 v294; // x1
  __int64 v295; // x2
  __int64 v296; // x1
  __int64 v297; // x2
  __int64 v298; // x1
  __int64 v299; // x2
  __int64 v300; // x1
  __int64 v301; // x2
  __int64 v302; // x1
  __int64 v303; // x2
  __int64 v304; // x1
  __int64 v305; // x2
  __int64 v306; // x1
  __int64 v307; // x2
  __int64 v308; // x1
  __int64 v309; // x2
  __int64 v310; // x1
  __int64 v311; // x2
  __int64 v312; // x1
  __int64 v313; // x2
  __int64 v314; // x1
  __int64 v315; // x2
  __int64 v316; // x1
  __int64 v317; // x2
  System_Collections_Generic_List_T__o *v318; // x19
  __int64 v319; // x0
  __int64 v320; // x1
  int64_t v321; // x2
  int32_t v322; // w3
  System_String_o *v323; // x4
  BattleSetupInfo_o *v324; // x5
  FollowerInfo_o *v325; // x6
  PartyListViewItem_o *v326; // x7
  struct System_Object_array *items; // x9
  _QWORD *v328; // x8
  __int64 size; // x10
  __int64 v330; // x10
  __int64 v331; // x10
  __int64 v332; // x10
  __int64 v333; // x10
  __int64 v334; // x10
  __int64 v335; // x10
  __int64 v336; // x10
  __int64 v337; // x1
  __int64 v338; // x2
  __int64 v339; // x3
  System_Collections_Generic_List_T__o *v340; // x19
  int64_t v341; // x2
  int32_t v342; // w3
  System_String_o *v343; // x4
  BattleSetupInfo_o *v344; // x5
  FollowerInfo_o *v345; // x6
  PartyListViewItem_o *v346; // x7
  struct System_Object_array *v347; // x9
  _QWORD *v348; // x8
  __int64 v349; // x10
  __int64 v350; // x10
  __int64 v351; // x10
  __int64 v352; // x10
  __int64 v353; // x10
  __int64 v354; // x10
  __int64 v355; // x10
  __int64 v356; // x10
  __int64 v357; // x10
  struct Voice_StaticFields *static_fields; // x0
  __int64 v359; // x1
  __int64 v360; // x2
  __int64 v361; // x3
  System_Collections_Generic_List_T__o *v362; // x19
  int64_t v363; // x2
  int32_t v364; // w3
  System_String_o *v365; // x4
  BattleSetupInfo_o *v366; // x5
  FollowerInfo_o *v367; // x6
  PartyListViewItem_o *v368; // x7
  _QWORD *v369; // x8
  int32_t *p_version; // x21
  struct System_Object_array *v371; // x9
  __int64 v372; // x10
  int32_t *p_size; // x20
  __int64 v374; // x10
  __int64 v375; // x10
  __int64 v376; // x10
  __int64 v377; // x10
  __int64 v378; // x10
  __int64 v379; // x10
  __int64 v380; // x10
  __int64 v381; // x10
  __int64 v382; // x10
  __int64 v383; // x10
  __int64 v384; // x10
  __int64 v385; // x10
  __int64 v386; // x10
  __int64 v387; // x10
  __int64 v388; // x10
  __int64 v389; // x10
  __int64 v390; // x10
  struct Voice_StaticFields *v391; // x0
  __int64 v392; // x1
  __int64 v393; // x2
  __int64 v394; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v395; // x19
  struct Voice_StaticFields *v396; // x0
  int64_t v397; // x2
  int32_t v398; // w3
  System_String_o *v399; // x4
  BattleSetupInfo_o *v400; // x5
  FollowerInfo_o *v401; // x6
  PartyListViewItem_o *v402; // x7

  if ( (byte_4B1521B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Voice_BATTLE__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Voice_BATTLE___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_Voice_BATTLE__TypeInfo, v12, v13);
    sub_1BCA7E0(&Voice_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_2738/*"B2820"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2666/*"B060"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_2661/*"B051"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_2791/*"B550"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_2771/*"B4042"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_2792/*"B560"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_2757/*"B342"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_2805/*"B880"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_2736/*"B270"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_2668/*"B062"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_2700/*"B190"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_2697/*"B1620"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_2692/*"B1420"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_2739/*"B2830"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_2663/*"B053"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_2705/*"B2080"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_2695/*"B1600"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_2809/*"B930"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_2785/*"B5230"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_2656/*"B040"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_2790/*"B540"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_2765/*"B400"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_2653/*"B010"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_2694/*"B160"*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_2751/*"B320"*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_2733/*"B2560"*/, v66, v67);
    sub_1BCA7E0(&StringLiteral_2769/*"B4040"*/, v68, v69);
    sub_1BCA7E0(&StringLiteral_2707/*"B210"*/, v70, v71);
    sub_1BCA7E0(&StringLiteral_2800/*"B840"*/, v72, v73);
    sub_1BCA7E0(&StringLiteral_2688/*"B130"*/, v74, v75);
    sub_1BCA7E0(&StringLiteral_2754/*"B340"*/, v76, v77);
    sub_1BCA7E0(&StringLiteral_2787/*"B5260"*/, v78, v79);
    sub_1BCA7E0(&StringLiteral_2673/*"B071"*/, v80, v81);
    sub_1BCA7E0(&StringLiteral_2715/*"B2170"*/, v82, v83);
    sub_1BCA7E0(&StringLiteral_2730/*"B2530"*/, v84, v85);
    sub_1BCA7E0(&StringLiteral_2768/*"B4030"*/, v86, v87);
    sub_1BCA7E0(&StringLiteral_2804/*"B8510"*/, v88, v89);
    sub_1BCA7E0(&StringLiteral_2687/*"B1220"*/, v90, v91);
    sub_1BCA7E0(&StringLiteral_2729/*"B2520"*/, v92, v93);
    sub_1BCA7E0(&StringLiteral_2713/*"B2150"*/, v94, v95);
    sub_1BCA7E0(&StringLiteral_2788/*"B5270"*/, v96, v97);
    sub_1BCA7E0(&StringLiteral_2743/*"B300"*/, v98, v99);
    sub_1BCA7E0(&StringLiteral_2745/*"B3020"*/, v100, v101);
    sub_1BCA7E0(&StringLiteral_2657/*"B041"*/, v102, v103);
    sub_1BCA7E0(&StringLiteral_2737/*"B2810"*/, v104, v105);
    sub_1BCA7E0(&StringLiteral_2756/*"B3410"*/, v106, v107);
    sub_1BCA7E0(&StringLiteral_2744/*"B3010"*/, v108, v109);
    sub_1BCA7E0(&StringLiteral_2702/*"B2010"*/, v110, v111);
    sub_1BCA7E0(&StringLiteral_2679/*"B100"*/, v112, v113);
    sub_1BCA7E0(&StringLiteral_2709/*"B2110"*/, v114, v115);
    sub_1BCA7E0(&StringLiteral_2773/*"B420"*/, v116, v117);
    sub_1BCA7E0(&StringLiteral_2781/*"B510"*/, v118, v119);
    sub_1BCA7E0(&StringLiteral_2669/*"B063"*/, v120, v121);
    sub_1BCA7E0(&StringLiteral_2758/*"B3420"*/, v122, v123);
    sub_1BCA7E0(&StringLiteral_2806/*"B890"*/, v124, v125);
    sub_1BCA7E0(&StringLiteral_2748/*"B3060"*/, v126, v127);
    sub_1BCA7E0(&StringLiteral_2706/*"B2090"*/, v128, v129);
    sub_1BCA7E0(&StringLiteral_2690/*"B1400"*/, v130, v131);
    sub_1BCA7E0(&StringLiteral_2674/*"B072"*/, v132, v133);
    sub_1BCA7E0(&StringLiteral_2747/*"B3050"*/, v134, v135);
    sub_1BCA7E0(&StringLiteral_2691/*"B1410"*/, v136, v137);
    sub_1BCA7E0(&StringLiteral_2753/*"B331"*/, v138, v139);
    sub_1BCA7E0(&StringLiteral_2701/*"B200"*/, v140, v141);
    sub_1BCA7E0(&StringLiteral_2678/*"B090"*/, v142, v143);
    sub_1BCA7E0(&StringLiteral_2725/*"B2480"*/, v144, v145);
    sub_1BCA7E0(&StringLiteral_2770/*"B4041"*/, v146, v147);
    sub_1BCA7E0(&StringLiteral_2731/*"B2540"*/, v148, v149);
    sub_1BCA7E0(&StringLiteral_2740/*"B2840"*/, v150, v151);
    sub_1BCA7E0(&StringLiteral_2734/*"B2570"*/, v152, v153);
    sub_1BCA7E0(&StringLiteral_2803/*"B8500"*/, v154, v155);
    sub_1BCA7E0(&StringLiteral_2808/*"B920"*/, v156, v157);
    sub_1BCA7E0(&StringLiteral_2662/*"B052"*/, v158, v159);
    sub_1BCA7E0(&StringLiteral_2716/*"B220"*/, v160, v161);
    sub_1BCA7E0(&StringLiteral_2683/*"B110"*/, v162, v163);
    sub_1BCA7E0(&StringLiteral_2718/*"B240"*/, v164, v165);
    sub_1BCA7E0(&StringLiteral_2761/*"B3810"*/, v166, v167);
    sub_1BCA7E0(&StringLiteral_2746/*"B3030"*/, v168, v169);
    sub_1BCA7E0(&StringLiteral_2724/*"B2442"*/, v170, v171);
    sub_1BCA7E0(&StringLiteral_2675/*"B073"*/, v172, v173);
    sub_1BCA7E0(&StringLiteral_2749/*"B3070"*/, v174, v175);
    sub_1BCA7E0(&StringLiteral_2774/*"B430"*/, v176, v177);
    sub_1BCA7E0(&StringLiteral_2655/*"B030"*/, v178, v179);
    sub_1BCA7E0(&StringLiteral_2721/*"B2430"*/, v180, v181);
    sub_1BCA7E0(&StringLiteral_2789/*"B530"*/, v182, v183);
    sub_1BCA7E0(&StringLiteral_2711/*"B2130"*/, v184, v185);
    sub_1BCA7E0(&StringLiteral_2710/*"B2120"*/, v186, v187);
    sub_1BCA7E0(&StringLiteral_2776/*"B441"*/, v188, v189);
    sub_1BCA7E0(&StringLiteral_2750/*"B310"*/, v190, v191);
    sub_1BCA7E0(&StringLiteral_2681/*"B1010"*/, v192, v193);
    sub_1BCA7E0(&StringLiteral_2689/*"B140"*/, v194, v195);
    sub_1BCA7E0(&StringLiteral_2732/*"B2550"*/, v196, v197);
    sub_1BCA7E0(&StringLiteral_2672/*"B070"*/, v198, v199);
    sub_1BCA7E0(&StringLiteral_2696/*"B1610"*/, v200, v201);
    sub_1BCA7E0(&StringLiteral_2667/*"B061"*/, v202, v203);
    sub_1BCA7E0(&StringLiteral_2779/*"B490"*/, v204, v205);
    sub_1BCA7E0(&StringLiteral_2760/*"B380"*/, v206, v207);
    sub_1BCA7E0(&StringLiteral_2717/*"B230"*/, v208, v209);
    sub_1BCA7E0(&StringLiteral_2712/*"B2140"*/, v210, v211);
    sub_1BCA7E0(&StringLiteral_2699/*"B180"*/, v212, v213);
    sub_1BCA7E0(&StringLiteral_2797/*"B810"*/, v214, v215);
    sub_1BCA7E0(&StringLiteral_2654/*"B020"*/, v216, v217);
    sub_1BCA7E0(&StringLiteral_2762/*"B3820"*/, v218, v219);
    sub_1BCA7E0(&StringLiteral_2772/*"B410"*/, v220, v221);
    sub_1BCA7E0(&StringLiteral_2764/*"B390"*/, v222, v223);
    sub_1BCA7E0(&StringLiteral_2763/*"B3830"*/, v224, v225);
    sub_1BCA7E0(&StringLiteral_2723/*"B2441"*/, v226, v227);
    sub_1BCA7E0(&StringLiteral_2722/*"B2440"*/, v228, v229);
    sub_1BCA7E0(&StringLiteral_2767/*"B4020"*/, v230, v231);
    sub_1BCA7E0(&StringLiteral_2685/*"B1200"*/, v232, v233);
    sub_1BCA7E0(&StringLiteral_2777/*"B442"*/, v234, v235);
    sub_1BCA7E0(&StringLiteral_2782/*"B520"*/, v236, v237);
    sub_1BCA7E0(&StringLiteral_2780/*"B500"*/, v238, v239);
    sub_1BCA7E0(&StringLiteral_2676/*"B074"*/, v240, v241);
    sub_1BCA7E0(&StringLiteral_2670/*"B064"*/, v242, v243);
    sub_1BCA7E0(&StringLiteral_2752/*"B330"*/, v244, v245);
    sub_1BCA7E0(&StringLiteral_2680/*"B1000"*/, v246, v247);
    sub_1BCA7E0(&StringLiteral_2755/*"B341"*/, v248, v249);
    sub_1BCA7E0(&StringLiteral_2778/*"B480"*/, v250, v251);
    sub_1BCA7E0(&StringLiteral_2704/*"B2030"*/, v252, v253);
    sub_1BCA7E0(&StringLiteral_2775/*"B440"*/, v254, v255);
    sub_1BCA7E0(&StringLiteral_2742/*"B2842"*/, v256, v257);
    sub_1BCA7E0(&StringLiteral_2660/*"B050"*/, v258, v259);
    sub_1BCA7E0(&StringLiteral_2784/*"B5220"*/, v260, v261);
    sub_1BCA7E0(&StringLiteral_2698/*"B170"*/, v262, v263);
    sub_1BCA7E0(&StringLiteral_2728/*"B2510"*/, v264, v265);
    sub_1BCA7E0(&StringLiteral_2726/*"B250"*/, v266, v267);
    sub_1BCA7E0(&StringLiteral_2684/*"B120"*/, v268, v269);
    sub_1BCA7E0(&StringLiteral_2795/*"B800"*/, v270, v271);
    sub_1BCA7E0(&StringLiteral_2677/*"B080"*/, v272, v273);
    sub_1BCA7E0(&StringLiteral_2693/*"B150"*/, v274, v275);
    sub_1BCA7E0(&StringLiteral_2799/*"B820"*/, v276, v277);
    sub_1BCA7E0(&StringLiteral_2719/*"B2410"*/, v278, v279);
    sub_1BCA7E0(&StringLiteral_2741/*"B2841"*/, v280, v281);
    sub_1BCA7E0(&StringLiteral_2658/*"B042"*/, v282, v283);
    sub_1BCA7E0(&StringLiteral_2708/*"B2100"*/, v284, v285);
    sub_1BCA7E0(&StringLiteral_2766/*"B4010"*/, v286, v287);
    sub_1BCA7E0(&StringLiteral_2727/*"B2500"*/, v288, v289);
    sub_1BCA7E0(&StringLiteral_2682/*"B1020"*/, v290, v291);
    sub_1BCA7E0(&StringLiteral_2703/*"B2020"*/, v292, v293);
    sub_1BCA7E0(&StringLiteral_2802/*"B842"*/, v294, v295);
    sub_1BCA7E0(&StringLiteral_2801/*"B841"*/, v296, v297);
    sub_1BCA7E0(&StringLiteral_2664/*"B054"*/, v298, v299);
    sub_1BCA7E0(&StringLiteral_2759/*"B3430"*/, v300, v301);
    sub_1BCA7E0(&StringLiteral_2720/*"B2420"*/, v302, v303);
    sub_1BCA7E0(&StringLiteral_2735/*"B260"*/, v304, v305);
    sub_1BCA7E0(&StringLiteral_2793/*"B570"*/, v306, v307);
    sub_1BCA7E0(&StringLiteral_2783/*"B5210"*/, v308, v309);
    sub_1BCA7E0(&StringLiteral_2807/*"B910"*/, v310, v311);
    sub_1BCA7E0(&StringLiteral_2686/*"B1210"*/, v312, v313);
    sub_1BCA7E0(&StringLiteral_2786/*"B5250"*/, v314, v315);
    sub_1BCA7E0(&StringLiteral_2714/*"B2160"*/, v316, v317);
    byte_4B1521B = 1;
  }
  v318 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_List_Voice_BATTLE__TypeInfo,
                                                   v1,
                                                   v2,
                                                   v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v318,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v318 )
    goto LABEL_116;
  items = v318->fields._items;
  v328 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v318->fields._version;
  if ( !items )
    goto LABEL_116;
  size = v318->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v318,
      81,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
    items = v318->fields._items;
    v328 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v318->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v318->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
    ++v318->fields._version;
  }
  v330 = v318->fields._size;
  if ( (unsigned int)v330 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v318,
      82,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
    items = v318->fields._items;
    v328 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v318->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v318->fields._size = v330 + 1;
    *((_DWORD *)items->m_Items + v330) = 82;
    ++v318->fields._version;
  }
  v331 = v318->fields._size;
  if ( (unsigned int)v331 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v318,
      230,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
    items = v318->fields._items;
    v328 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v318->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v318->fields._size = v331 + 1;
    *((_DWORD *)items->m_Items + v331) = 230;
    ++v318->fields._version;
  }
  v332 = v318->fields._size;
  if ( (unsigned int)v332 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v318,
      231,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
    items = v318->fields._items;
    v328 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v318->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v318->fields._size = v332 + 1;
    *((_DWORD *)items->m_Items + v332) = 231;
    ++v318->fields._version;
  }
  v333 = v318->fields._size;
  if ( (unsigned int)v333 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v318,
      285,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
    items = v318->fields._items;
    v328 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v318->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v318->fields._size = v333 + 1;
    *((_DWORD *)items->m_Items + v333) = 285;
    ++v318->fields._version;
  }
  v334 = v318->fields._size;
  if ( (unsigned int)v334 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v318,
      286,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
    items = v318->fields._items;
    v328 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v318->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v318->fields._size = v334 + 1;
    *((_DWORD *)items->m_Items + v334) = 286;
    ++v318->fields._version;
  }
  v335 = v318->fields._size;
  if ( (unsigned int)v335 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v318,
      287,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
    items = v318->fields._items;
    v328 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v318->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v318->fields._size = v335 + 1;
    *((_DWORD *)items->m_Items + v335) = 287;
    ++v318->fields._version;
  }
  v336 = v318->fields._size;
  if ( (unsigned int)v336 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v318,
      288,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
  }
  else
  {
    v318->fields._size = v336 + 1;
    *((_DWORD *)items->m_Items + v336) = 288;
  }
  Voice_TypeInfo->static_fields->deadVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v318;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)Voice_TypeInfo->static_fields,
    (int64_t)v318,
    v321,
    v322,
    v323,
    v324,
    v325,
    v326);
  v340 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_List_Voice_BATTLE__TypeInfo,
                                                   v337,
                                                   v338,
                                                   v339);
  System_Collections_Generic_List_Int32Enum____ctor(
    v340,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v340 )
    goto LABEL_116;
  v347 = v340->fields._items;
  v348 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v340->fields._version;
  if ( !v347 )
    goto LABEL_116;
  v349 = v340->fields._size;
  if ( (unsigned int)v349 >= v347->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v340,
      31,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v348[4] + 192LL) + 112LL));
    v347 = v340->fields._items;
    v348 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v340->fields._version;
    if ( !v347 )
      goto LABEL_116;
  }
  else
  {
    v340->fields._size = v349 + 1;
    *((_DWORD *)v347->m_Items + v349) = 31;
    ++v340->fields._version;
  }
  v350 = v340->fields._size;
  if ( (unsigned int)v350 >= v347->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v340,
      32,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v348[4] + 192LL) + 112LL));
    v347 = v340->fields._items;
    v348 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v340->fields._version;
    if ( !v347 )
      goto LABEL_116;
  }
  else
  {
    v340->fields._size = v350 + 1;
    *((_DWORD *)v347->m_Items + v350) = 32;
    ++v340->fields._version;
  }
  v351 = v340->fields._size;
  if ( (unsigned int)v351 >= v347->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v340,
      223,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v348[4] + 192LL) + 112LL));
    v347 = v340->fields._items;
    v348 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v340->fields._version;
    if ( !v347 )
      goto LABEL_116;
  }
  else
  {
    v340->fields._size = v351 + 1;
    *((_DWORD *)v347->m_Items + v351) = 223;
    ++v340->fields._version;
  }
  v352 = v340->fields._size;
  if ( (unsigned int)v352 >= v347->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v340,
      224,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v348[4] + 192LL) + 112LL));
    v347 = v340->fields._items;
    v348 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v340->fields._version;
    if ( !v347 )
      goto LABEL_116;
  }
  else
  {
    v340->fields._size = v352 + 1;
    *((_DWORD *)v347->m_Items + v352) = 224;
    ++v340->fields._version;
  }
  v353 = v340->fields._size;
  if ( (unsigned int)v353 >= v347->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v340,
      243,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v348[4] + 192LL) + 112LL));
    v347 = v340->fields._items;
    v348 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v340->fields._version;
    if ( !v347 )
      goto LABEL_116;
  }
  else
  {
    v340->fields._size = v353 + 1;
    *((_DWORD *)v347->m_Items + v353) = 243;
    ++v340->fields._version;
  }
  v354 = v340->fields._size;
  if ( (unsigned int)v354 >= v347->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v340,
      244,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v348[4] + 192LL) + 112LL));
    v347 = v340->fields._items;
    v348 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v340->fields._version;
    if ( !v347 )
      goto LABEL_116;
  }
  else
  {
    v340->fields._size = v354 + 1;
    *((_DWORD *)v347->m_Items + v354) = 244;
    ++v340->fields._version;
  }
  v355 = v340->fields._size;
  if ( (unsigned int)v355 >= v347->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v340,
      254,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v348[4] + 192LL) + 112LL));
    v347 = v340->fields._items;
    v348 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v340->fields._version;
    if ( !v347 )
      goto LABEL_116;
  }
  else
  {
    v340->fields._size = v355 + 1;
    *((_DWORD *)v347->m_Items + v355) = 254;
    ++v340->fields._version;
  }
  v356 = v340->fields._size;
  if ( (unsigned int)v356 >= v347->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v340,
      255,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v348[4] + 192LL) + 112LL));
    v347 = v340->fields._items;
    v348 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v340->fields._version;
    if ( !v347 )
      goto LABEL_116;
  }
  else
  {
    v340->fields._size = v356 + 1;
    *((_DWORD *)v347->m_Items + v356) = 255;
    ++v340->fields._version;
  }
  v357 = v340->fields._size;
  if ( (unsigned int)v357 >= v347->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v340,
      256,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v348[4] + 192LL) + 112LL));
  }
  else
  {
    v340->fields._size = v357 + 1;
    *((_DWORD *)v347->m_Items + v357) = 256;
  }
  static_fields = Voice_TypeInfo->static_fields;
  static_fields->skillVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v340;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->skillVoiceList,
    (int64_t)v340,
    v341,
    v342,
    v343,
    v344,
    v345,
    v346);
  v362 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_List_Voice_BATTLE__TypeInfo,
                                                   v359,
                                                   v360,
                                                   v361);
  System_Collections_Generic_List_Int32Enum____ctor(
    v362,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v362 )
    goto LABEL_116;
  v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  p_version = &v362->fields._version;
  ++v362->fields._version;
  v371 = v362->fields._items;
  p_size = &v362->fields._size;
  v372 = v362->fields._size;
  if ( !v371 )
    goto LABEL_116;
  if ( (unsigned int)v372 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      111,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v372 + 1;
    *((_DWORD *)v371->m_Items + v372) = 111;
    ++*p_version;
  }
  v374 = *p_size;
  if ( (unsigned int)v374 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      121,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v374 + 1;
    *((_DWORD *)v371->m_Items + v374) = 121;
    ++*p_version;
  }
  v375 = *p_size;
  if ( (unsigned int)v375 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      131,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v375 + 1;
    *((_DWORD *)v371->m_Items + v375) = 131;
    ++*p_version;
  }
  v376 = *p_size;
  if ( (unsigned int)v376 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      141,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v376 + 1;
    *((_DWORD *)v371->m_Items + v376) = 141;
    ++*p_version;
  }
  v377 = *p_size;
  if ( (unsigned int)v377 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      151,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v377 + 1;
    *((_DWORD *)v371->m_Items + v377) = 151;
    ++*p_version;
  }
  v378 = *p_size;
  if ( (unsigned int)v378 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      161,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v378 + 1;
    *((_DWORD *)v371->m_Items + v378) = 161;
    ++*p_version;
  }
  v379 = *p_size;
  if ( (unsigned int)v379 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      171,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v379 + 1;
    *((_DWORD *)v371->m_Items + v379) = 171;
    ++*p_version;
  }
  v380 = *p_size;
  if ( (unsigned int)v380 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      181,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v380 + 1;
    *((_DWORD *)v371->m_Items + v380) = 181;
    ++*p_version;
  }
  v381 = *p_size;
  if ( (unsigned int)v381 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      191,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v381 + 1;
    *((_DWORD *)v371->m_Items + v381) = 191;
    ++*p_version;
  }
  v382 = *p_size;
  if ( (unsigned int)v382 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      1001,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v382 + 1;
    *((_DWORD *)v371->m_Items + v382) = 1001;
    ++*p_version;
  }
  v383 = *p_size;
  if ( (unsigned int)v383 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      1011,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v383 + 1;
    *((_DWORD *)v371->m_Items + v383) = 1011;
    ++*p_version;
  }
  v384 = *p_size;
  if ( (unsigned int)v384 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      1021,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v384 + 1;
    *((_DWORD *)v371->m_Items + v384) = 1021;
    ++*p_version;
  }
  v385 = *p_size;
  if ( (unsigned int)v385 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      1031,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v385 + 1;
    *((_DWORD *)v371->m_Items + v385) = 1031;
    ++*p_version;
  }
  v386 = *p_size;
  if ( (unsigned int)v386 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      1041,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v386 + 1;
    *((_DWORD *)v371->m_Items + v386) = 1041;
    ++*p_version;
  }
  v387 = *p_size;
  if ( (unsigned int)v387 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      1051,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v387 + 1;
    *((_DWORD *)v371->m_Items + v387) = 1051;
    ++*p_version;
  }
  v388 = *p_size;
  if ( (unsigned int)v388 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      1061,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v388 + 1;
    *((_DWORD *)v371->m_Items + v388) = 1061;
    ++*p_version;
  }
  v389 = *p_size;
  if ( (unsigned int)v389 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      1071,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
    v371 = v362->fields._items;
    v369 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v362->fields._version;
    if ( !v371 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v389 + 1;
    *((_DWORD *)v371->m_Items + v389) = 1071;
    ++*p_version;
  }
  v390 = *p_size;
  if ( (unsigned int)v390 >= v371->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v362,
      1081,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v390 + 1;
    *((_DWORD *)v371->m_Items + v390) = 1081;
  }
  v391 = Voice_TypeInfo->static_fields;
  v391->firstNpVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v362;
  sub_1BCA784((PartyOrganizationUtility_o *)&v391->firstNpVoiceList, (int64_t)v362, v363, v364, v365, v366, v367, v368);
  v395 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo,
                                                                    v392,
                                                                    v393,
                                                                    v394);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v395,
    (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__);
  if ( !v395 )
LABEL_116:
    sub_1BCAA3C(v319, v320);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    0,
    0LL,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    10,
    (Il2CppObject *)StringLiteral_2653/*"B010"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    11,
    (Il2CppObject *)StringLiteral_2654/*"B020"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    12,
    (Il2CppObject *)StringLiteral_2655/*"B030"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    20,
    (Il2CppObject *)StringLiteral_2656/*"B040"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    21,
    (Il2CppObject *)StringLiteral_2657/*"B041"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    22,
    (Il2CppObject *)StringLiteral_2658/*"B042"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    111,
    (Il2CppObject *)StringLiteral_2660/*"B050"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    112,
    (Il2CppObject *)StringLiteral_2661/*"B051"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    113,
    (Il2CppObject *)StringLiteral_2662/*"B052"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    114,
    (Il2CppObject *)StringLiteral_2663/*"B053"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    115,
    (Il2CppObject *)StringLiteral_2664/*"B054"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    121,
    (Il2CppObject *)StringLiteral_2666/*"B060"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    122,
    (Il2CppObject *)StringLiteral_2667/*"B061"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    123,
    (Il2CppObject *)StringLiteral_2668/*"B062"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    124,
    (Il2CppObject *)StringLiteral_2669/*"B063"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    125,
    (Il2CppObject *)StringLiteral_2670/*"B064"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    131,
    (Il2CppObject *)StringLiteral_2672/*"B070"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    132,
    (Il2CppObject *)StringLiteral_2673/*"B071"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    133,
    (Il2CppObject *)StringLiteral_2674/*"B072"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    134,
    (Il2CppObject *)StringLiteral_2675/*"B073"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    135,
    (Il2CppObject *)StringLiteral_2676/*"B074"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    141,
    (Il2CppObject *)StringLiteral_2795/*"B800"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    151,
    (Il2CppObject *)StringLiteral_2797/*"B810"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    161,
    (Il2CppObject *)StringLiteral_2799/*"B820"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    171,
    (Il2CppObject *)StringLiteral_2695/*"B1600"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    181,
    (Il2CppObject *)StringLiteral_2696/*"B1610"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    191,
    (Il2CppObject *)StringLiteral_2697/*"B1620"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    1001,
    (Il2CppObject *)StringLiteral_2680/*"B1000"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    31,
    (Il2CppObject *)StringLiteral_2677/*"B080"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    32,
    (Il2CppObject *)StringLiteral_2678/*"B090"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    41,
    (Il2CppObject *)StringLiteral_2679/*"B100"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    42,
    (Il2CppObject *)StringLiteral_2683/*"B110"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    51,
    (Il2CppObject *)StringLiteral_2684/*"B120"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    52,
    (Il2CppObject *)StringLiteral_2688/*"B130"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    61,
    (Il2CppObject *)StringLiteral_2689/*"B140"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    71,
    (Il2CppObject *)StringLiteral_2693/*"B150"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    81,
    (Il2CppObject *)StringLiteral_2694/*"B160"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    82,
    (Il2CppObject *)StringLiteral_2698/*"B170"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    201,
    (Il2CppObject *)StringLiteral_2699/*"B180"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    202,
    (Il2CppObject *)StringLiteral_2700/*"B190"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    203,
    (Il2CppObject *)StringLiteral_2701/*"B200"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    211,
    (Il2CppObject *)StringLiteral_2707/*"B210"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    212,
    (Il2CppObject *)StringLiteral_2716/*"B220"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    213,
    (Il2CppObject *)StringLiteral_2717/*"B230"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    214,
    (Il2CppObject *)StringLiteral_2743/*"B300"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    215,
    (Il2CppObject *)StringLiteral_2743/*"B300"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    216,
    (Il2CppObject *)StringLiteral_2726/*"B250"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    217,
    (Il2CppObject *)StringLiteral_2772/*"B410"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    218,
    (Il2CppObject *)StringLiteral_2773/*"B420"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    219,
    (Il2CppObject *)StringLiteral_2774/*"B430"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    220,
    (Il2CppObject *)StringLiteral_2775/*"B440"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    221,
    (Il2CppObject *)StringLiteral_2776/*"B441"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    222,
    (Il2CppObject *)StringLiteral_2777/*"B442"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    223,
    (Il2CppObject *)StringLiteral_2778/*"B480"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    224,
    (Il2CppObject *)StringLiteral_2779/*"B490"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    225,
    (Il2CppObject *)StringLiteral_2780/*"B500"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    226,
    (Il2CppObject *)StringLiteral_2781/*"B510"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    227,
    (Il2CppObject *)StringLiteral_2782/*"B520"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    228,
    (Il2CppObject *)StringLiteral_2789/*"B530"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    229,
    (Il2CppObject *)StringLiteral_2790/*"B540"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    230,
    (Il2CppObject *)StringLiteral_2792/*"B560"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    231,
    (Il2CppObject *)StringLiteral_2793/*"B570"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    232,
    (Il2CppObject *)StringLiteral_2750/*"B310"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    233,
    (Il2CppObject *)StringLiteral_2751/*"B320"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    234,
    (Il2CppObject *)StringLiteral_2752/*"B330"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    235,
    (Il2CppObject *)StringLiteral_2753/*"B331"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    236,
    (Il2CppObject *)StringLiteral_2754/*"B340"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    237,
    (Il2CppObject *)StringLiteral_2755/*"B341"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    238,
    (Il2CppObject *)StringLiteral_2757/*"B342"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    239,
    (Il2CppObject *)StringLiteral_2791/*"B550"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    240,
    (Il2CppObject *)StringLiteral_2807/*"B910"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    241,
    (Il2CppObject *)StringLiteral_2808/*"B920"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    242,
    (Il2CppObject *)StringLiteral_2809/*"B930"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    243,
    (Il2CppObject *)StringLiteral_2805/*"B880"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    244,
    (Il2CppObject *)StringLiteral_2806/*"B890"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    245,
    (Il2CppObject *)StringLiteral_2760/*"B380"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    246,
    (Il2CppObject *)StringLiteral_2764/*"B390"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    247,
    (Il2CppObject *)StringLiteral_2765/*"B400"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    248,
    (Il2CppObject *)StringLiteral_2800/*"B840"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    249,
    (Il2CppObject *)StringLiteral_2801/*"B841"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    250,
    (Il2CppObject *)StringLiteral_2802/*"B842"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    251,
    (Il2CppObject *)StringLiteral_2735/*"B260"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    252,
    (Il2CppObject *)StringLiteral_2718/*"B240"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    253,
    (Il2CppObject *)StringLiteral_2736/*"B270"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    254,
    (Il2CppObject *)StringLiteral_2705/*"B2080"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    255,
    (Il2CppObject *)StringLiteral_2706/*"B2090"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    256,
    (Il2CppObject *)StringLiteral_2725/*"B2480"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    257,
    (Il2CppObject *)StringLiteral_2722/*"B2440"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    258,
    (Il2CppObject *)StringLiteral_2723/*"B2441"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    259,
    (Il2CppObject *)StringLiteral_2724/*"B2442"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    260,
    (Il2CppObject *)StringLiteral_2740/*"B2840"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    261,
    (Il2CppObject *)StringLiteral_2741/*"B2841"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    262,
    (Il2CppObject *)StringLiteral_2742/*"B2842"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    263,
    (Il2CppObject *)StringLiteral_2769/*"B4040"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    264,
    (Il2CppObject *)StringLiteral_2770/*"B4041"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    265,
    (Il2CppObject *)StringLiteral_2771/*"B4042"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    266,
    (Il2CppObject *)StringLiteral_2702/*"B2010"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    267,
    (Il2CppObject *)StringLiteral_2703/*"B2020"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    268,
    (Il2CppObject *)StringLiteral_2704/*"B2030"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    269,
    (Il2CppObject *)StringLiteral_2719/*"B2410"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    270,
    (Il2CppObject *)StringLiteral_2720/*"B2420"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    271,
    (Il2CppObject *)StringLiteral_2721/*"B2430"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    272,
    (Il2CppObject *)StringLiteral_2737/*"B2810"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    273,
    (Il2CppObject *)StringLiteral_2738/*"B2820"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    274,
    (Il2CppObject *)StringLiteral_2739/*"B2830"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    275,
    (Il2CppObject *)StringLiteral_2708/*"B2100"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    276,
    (Il2CppObject *)StringLiteral_2709/*"B2110"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    277,
    (Il2CppObject *)StringLiteral_2727/*"B2500"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    278,
    (Il2CppObject *)StringLiteral_2728/*"B2510"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    279,
    (Il2CppObject *)StringLiteral_2744/*"B3010"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    280,
    (Il2CppObject *)StringLiteral_2745/*"B3020"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    281,
    (Il2CppObject *)StringLiteral_2746/*"B3030"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    282,
    (Il2CppObject *)StringLiteral_2756/*"B3410"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    283,
    (Il2CppObject *)StringLiteral_2758/*"B3420"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    284,
    (Il2CppObject *)StringLiteral_2759/*"B3430"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    285,
    (Il2CppObject *)StringLiteral_2714/*"B2160"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    286,
    (Il2CppObject *)StringLiteral_2715/*"B2170"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    287,
    (Il2CppObject *)StringLiteral_2733/*"B2560"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    288,
    (Il2CppObject *)StringLiteral_2734/*"B2570"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    289,
    (Il2CppObject *)StringLiteral_2710/*"B2120"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    290,
    (Il2CppObject *)StringLiteral_2711/*"B2130"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    291,
    (Il2CppObject *)StringLiteral_2729/*"B2520"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    292,
    (Il2CppObject *)StringLiteral_2730/*"B2530"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    293,
    (Il2CppObject *)StringLiteral_2712/*"B2140"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    294,
    (Il2CppObject *)StringLiteral_2731/*"B2540"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    295,
    (Il2CppObject *)StringLiteral_2713/*"B2150"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    296,
    (Il2CppObject *)StringLiteral_2732/*"B2550"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    297,
    (Il2CppObject *)StringLiteral_2747/*"B3050"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    298,
    (Il2CppObject *)StringLiteral_2748/*"B3060"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    299,
    (Il2CppObject *)StringLiteral_2749/*"B3070"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    300,
    (Il2CppObject *)StringLiteral_2783/*"B5210"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    301,
    (Il2CppObject *)StringLiteral_2784/*"B5220"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    302,
    (Il2CppObject *)StringLiteral_2785/*"B5230"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    303,
    (Il2CppObject *)StringLiteral_2786/*"B5250"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    304,
    (Il2CppObject *)StringLiteral_2787/*"B5260"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    305,
    (Il2CppObject *)StringLiteral_2788/*"B5270"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    306,
    (Il2CppObject *)StringLiteral_2803/*"B8500"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    307,
    (Il2CppObject *)StringLiteral_2804/*"B8510"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    308,
    (Il2CppObject *)StringLiteral_2761/*"B3810"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    309,
    (Il2CppObject *)StringLiteral_2762/*"B3820"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    310,
    (Il2CppObject *)StringLiteral_2763/*"B3830"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    311,
    (Il2CppObject *)StringLiteral_2766/*"B4010"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    312,
    (Il2CppObject *)StringLiteral_2767/*"B4020"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    313,
    (Il2CppObject *)StringLiteral_2768/*"B4030"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    1011,
    (Il2CppObject *)StringLiteral_2681/*"B1010"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    1021,
    (Il2CppObject *)StringLiteral_2682/*"B1020"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    1031,
    (Il2CppObject *)StringLiteral_2685/*"B1200"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    1041,
    (Il2CppObject *)StringLiteral_2686/*"B1210"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    1051,
    (Il2CppObject *)StringLiteral_2687/*"B1220"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    1061,
    (Il2CppObject *)StringLiteral_2690/*"B1400"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    1071,
    (Il2CppObject *)StringLiteral_2691/*"B1410"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v395,
    1081,
    (Il2CppObject *)StringLiteral_2692/*"B1420"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  v396 = Voice_TypeInfo->static_fields;
  v396->filelist = (struct System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v395;
  sub_1BCA784((PartyOrganizationUtility_o *)&v396->filelist, (int64_t)v395, v397, v398, v399, v400, v401, v402);
}


void __fastcall Voice___ctor(Voice_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall Voice__GetTypeByFileName(System_String_o *fileName, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Voice_c *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *filelist; // x19
  System_Func_T__TResult__o *v29; // x21

  if ( (byte_4B15219 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____, method, v2);
    sub_1BCA7E0(&System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Key__, v7, v8);
    sub_1BCA7E0(&Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__, v9, v10);
    sub_1BCA7E0(&Voice___c__DisplayClass6_0_TypeInfo, v11, v12);
    sub_1BCA7E0(&Voice_TypeInfo, v13, v14);
    byte_4B15219 = 1;
  }
  v15 = sub_1BCAA2C(Voice___c__DisplayClass6_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = fileName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)fileName, v18, v19, v20, v21, v22, v23);
  v27 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo, v24);
    v27 = Voice_TypeInfo;
  }
  filelist = (System_Collections_Generic_IEnumerable_TSource__o *)v27->static_fields->filelist;
  v29 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo,
                                       v24,
                                       v25,
                                       v26);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v29,
    (Il2CppObject *)v15,
    Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           filelist,
           (System_Func_TSource__bool__o *)v29,
           (const MethodInfo_2F35844 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____).fields.key;
}


bool __fastcall Voice__IsDeadVoice(int32_t voiceBattleType, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  Voice_c *v18; // x0
  System_Collections_Generic_List_T__o *deadVoiceList; // x19
  System_Func_T__TResult__o *v20; // x21

  if ( (byte_4B1521A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_Voice_BATTLE___, method, v2);
    sub_1BCA7E0(&System_Func_Voice_BATTLE__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__, v7, v8);
    sub_1BCA7E0(&Voice___c__DisplayClass7_0_TypeInfo, v9, v10);
    sub_1BCA7E0(&Voice_TypeInfo, v11, v12);
    byte_4B1521A = 1;
  }
  v13 = sub_1BCAA2C(Voice___c__DisplayClass7_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_DWORD *)(v13 + 16) = voiceBattleType;
  v18 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo, v15);
    v18 = Voice_TypeInfo;
  }
  deadVoiceList = (System_Collections_Generic_List_T__o *)v18->static_fields->deadVoiceList;
  v20 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_Voice_BATTLE__bool__TypeInfo, v15, v16, v17);
  System_Func_Int32Enum__bool____ctor(
    v20,
    (Il2CppObject *)v13,
    Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__,
    0LL);
  return BasicHelper__Any_Int32Enum_(
           deadVoiceList,
           (System_Func_T__bool__o *)v20,
           (const MethodInfo_2EFDAB0 *)Method_BasicHelper_Any_Voice_BATTLE___);
}


System_String_o *__fastcall Voice__getFileName(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Voice_c *v8; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  Voice_c *v10; // x0

  if ( (byte_4B15218 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__, v4, v5);
    sub_1BCA7E0(&Voice_TypeInfo, v6, v7);
    byte_4B15218 = 1;
  }
  v8 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo, method);
    v8 = Voice_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8->static_fields->filelist;
  if ( !filelist )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         type,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__) )
  {
    v10 = Voice_TypeInfo;
    if ( !Voice_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Voice_TypeInfo, method);
      v10 = Voice_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v10->static_fields->filelist;
    if ( filelist )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  filelist,
                                  type,
                                  (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__);
LABEL_12:
    sub_1BCAA3C(filelist, method);
  }
  return 0LL;
}


void __fastcall Voice___c__DisplayClass6_0___ctor(Voice___c__DisplayClass6_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Voice___c__DisplayClass6_0___GetTypeByFileName_b__0(
        Voice___c__DisplayClass6_0_o *this,
        System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__o x,
        const MethodInfo *method)
{
  System_String_o *value; // x19

  value = x.fields.value;
  if ( (byte_4B1521C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Value__,
      *(_QWORD *)&x.fields.key,
      x.fields.value);
    byte_4B1521C = 1;
  }
  return System_String__op_Equality(value, this->fields.fileName, 0LL);
}


void __fastcall Voice___c__DisplayClass7_0___ctor(Voice___c__DisplayClass7_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Voice___c__DisplayClass7_0___IsDeadVoice_b__0(
        Voice___c__DisplayClass7_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.voiceBattleType == x;
}