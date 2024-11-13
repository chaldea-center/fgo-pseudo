void __fastcall AccountExtensions___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x0
  __int64 v92; // x1
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x19
  int64_t v100; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x1
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t v114; // x1
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  int64_t v121; // x1
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  int64_t v128; // x1
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  int64_t v135; // x1
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  int64_t v142; // x1
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  int64_t v149; // x1
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  int64_t v156; // x1
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  int64_t v163; // x1
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  int64_t v170; // x1
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  int64_t v177; // x1
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  int64_t v184; // x1
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  int64_t v191; // x1
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  int64_t v198; // x1
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  int64_t v205; // x1
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  int64_t v212; // x1
  int64_t v213; // x2
  int32_t v214; // w3
  System_String_o *v215; // x4
  BattleSetupInfo_o *v216; // x5
  FollowerInfo_o *v217; // x6
  PartyListViewItem_o *v218; // x7
  int64_t v219; // x1
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  int64_t v226; // x1
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  int64_t v233; // x1
  int64_t v234; // x2
  int32_t v235; // w3
  System_String_o *v236; // x4
  BattleSetupInfo_o *v237; // x5
  FollowerInfo_o *v238; // x6
  PartyListViewItem_o *v239; // x7
  int64_t v240; // x1
  int64_t v241; // x2
  int32_t v242; // w3
  System_String_o *v243; // x4
  BattleSetupInfo_o *v244; // x5
  FollowerInfo_o *v245; // x6
  PartyListViewItem_o *v246; // x7
  int64_t v247; // x1
  int64_t v248; // x2
  int32_t v249; // w3
  System_String_o *v250; // x4
  BattleSetupInfo_o *v251; // x5
  FollowerInfo_o *v252; // x6
  PartyListViewItem_o *v253; // x7
  void *v254; // x1
  int64_t v255; // x2
  int32_t v256; // w3
  System_String_o *v257; // x4
  BattleSetupInfo_o *v258; // x5
  FollowerInfo_o *v259; // x6
  PartyListViewItem_o *v260; // x7
  int64_t v261; // x1
  int64_t v262; // x2
  int32_t v263; // w3
  System_String_o *v264; // x4
  BattleSetupInfo_o *v265; // x5
  FollowerInfo_o *v266; // x6
  PartyListViewItem_o *v267; // x7
  int64_t v268; // x1
  int64_t v269; // x2
  int32_t v270; // w3
  System_String_o *v271; // x4
  BattleSetupInfo_o *v272; // x5
  FollowerInfo_o *v273; // x6
  PartyListViewItem_o *v274; // x7
  int64_t v275; // x1
  int64_t v276; // x2
  int32_t v277; // w3
  System_String_o *v278; // x4
  BattleSetupInfo_o *v279; // x5
  FollowerInfo_o *v280; // x6
  PartyListViewItem_o *v281; // x7
  int64_t v282; // x1
  int64_t v283; // x2
  int32_t v284; // w3
  System_String_o *v285; // x4
  BattleSetupInfo_o *v286; // x5
  FollowerInfo_o *v287; // x6
  PartyListViewItem_o *v288; // x7
  int64_t v289; // x1
  int64_t v290; // x2
  int32_t v291; // w3
  System_String_o *v292; // x4
  BattleSetupInfo_o *v293; // x5
  FollowerInfo_o *v294; // x6
  PartyListViewItem_o *v295; // x7
  int64_t v296; // x1
  int64_t v297; // x2
  int32_t v298; // w3
  System_String_o *v299; // x4
  BattleSetupInfo_o *v300; // x5
  FollowerInfo_o *v301; // x6
  PartyListViewItem_o *v302; // x7
  int64_t v303; // x1
  int64_t v304; // x2
  int32_t v305; // w3
  System_String_o *v306; // x4
  BattleSetupInfo_o *v307; // x5
  FollowerInfo_o *v308; // x6
  PartyListViewItem_o *v309; // x7
  int64_t v310; // x1
  int64_t v311; // x2
  int32_t v312; // w3
  System_String_o *v313; // x4
  BattleSetupInfo_o *v314; // x5
  FollowerInfo_o *v315; // x6
  PartyListViewItem_o *v316; // x7
  int64_t v317; // x1
  int64_t v318; // x2
  int32_t v319; // w3
  System_String_o *v320; // x4
  BattleSetupInfo_o *v321; // x5
  FollowerInfo_o *v322; // x6
  PartyListViewItem_o *v323; // x7
  int64_t v324; // x1
  int64_t v325; // x2
  int32_t v326; // w3
  System_String_o *v327; // x4
  BattleSetupInfo_o *v328; // x5
  FollowerInfo_o *v329; // x6
  PartyListViewItem_o *v330; // x7
  int64_t v331; // x1
  int64_t v332; // x2
  int32_t v333; // w3
  System_String_o *v334; // x4
  BattleSetupInfo_o *v335; // x5
  FollowerInfo_o *v336; // x6
  PartyListViewItem_o *v337; // x7
  int64_t v338; // x1
  int64_t v339; // x2
  int32_t v340; // w3
  System_String_o *v341; // x4
  BattleSetupInfo_o *v342; // x5
  FollowerInfo_o *v343; // x6
  PartyListViewItem_o *v344; // x7
  int64_t v345; // x1
  int64_t v346; // x2
  int32_t v347; // w3
  System_String_o *v348; // x4
  BattleSetupInfo_o *v349; // x5
  FollowerInfo_o *v350; // x6
  PartyListViewItem_o *v351; // x7
  int64_t v352; // x1
  int64_t v353; // x2
  int32_t v354; // w3
  System_String_o *v355; // x4
  BattleSetupInfo_o *v356; // x5
  FollowerInfo_o *v357; // x6
  PartyListViewItem_o *v358; // x7
  int64_t v359; // x1
  int64_t v360; // x2
  int32_t v361; // w3
  System_String_o *v362; // x4
  BattleSetupInfo_o *v363; // x5
  FollowerInfo_o *v364; // x6
  PartyListViewItem_o *v365; // x7
  int64_t v366; // x1
  int64_t v367; // x2
  int32_t v368; // w3
  System_String_o *v369; // x4
  BattleSetupInfo_o *v370; // x5
  FollowerInfo_o *v371; // x6
  PartyListViewItem_o *v372; // x7
  int64_t v373; // x1
  int64_t v374; // x2
  int32_t v375; // w3
  System_String_o *v376; // x4
  BattleSetupInfo_o *v377; // x5
  FollowerInfo_o *v378; // x6
  PartyListViewItem_o *v379; // x7
  int64_t v380; // x1
  int64_t v381; // x2
  int32_t v382; // w3
  System_String_o *v383; // x4
  BattleSetupInfo_o *v384; // x5
  FollowerInfo_o *v385; // x6
  PartyListViewItem_o *v386; // x7
  int64_t v387; // x1
  int64_t v388; // x2
  int32_t v389; // w3
  System_String_o *v390; // x4
  BattleSetupInfo_o *v391; // x5
  FollowerInfo_o *v392; // x6
  PartyListViewItem_o *v393; // x7
  int64_t v394; // x1
  int64_t v395; // x2
  int32_t v396; // w3
  System_String_o *v397; // x4
  BattleSetupInfo_o *v398; // x5
  FollowerInfo_o *v399; // x6
  PartyListViewItem_o *v400; // x7

  if ( (byte_4B1421E & 1) == 0 )
  {
    sub_1BCA7E0(&AccountExtensions_TypeInfo, v1, v2);
    sub_1BCA7E0(&string___TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_9053/*"Maverick"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_13899/*"The Evacuator"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_22218/*"n3o"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_10764/*"Plank"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11304/*"Read End Connection"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_9015/*"Mark"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_10731/*"Penis Man"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_2816/*"BARRY"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_15833/*"Wizard"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_13247/*"Sundown"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10686/*"Parmesian"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_2203/*"AXIX"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_15098/*"Unconventional"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_9054/*"Max"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_9114/*"Merlin"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_15971/*"Z - Ray"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3324/*"Blind"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_8320/*"Kenneth"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_8060/*"Ironside"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_15526/*"Vitamin C"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_10730/*"Penetrator"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_15793/*"White Mice"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_15974/*"Zoolander"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_13870/*"The Bin Man"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_12965/*"Slider"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_8280/*"Jester"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_2310/*"Alpro"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_5999/*"Egg-man"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_13057/*"Spitfire"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_11357/*"Redtail"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_10644/*"Palette"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_13397/*"T-Bag"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_7559/*"Ice Man"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_9511/*"Neo1988"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_7171/*"Giant Lump"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_13959/*"The Sperminator"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_6008/*"Ejaculatory"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_12766/*"Sergio Georgini"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_6271/*"Eva"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_5602/*"ETC"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_11320/*"RearEnd"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_7698/*"Infiltrator"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_4618/*"Coaster"*/, v89, v90);
    byte_4B1421E = 1;
  }
  v91 = sub_1BCA888(string___TypeInfo, 43LL);
  if ( !v91 )
    sub_1BCAA3C(0LL, v92);
  v99 = v91;
  if ( !*(_DWORD *)(v91 + 24) )
    goto LABEL_48;
  v100 = StringLiteral_10730/*"Penetrator"*/;
  *(_QWORD *)(v91 + 32) = StringLiteral_10730/*"Penetrator"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 32), v100, v93, v94, v95, v96, v97, v98);
  if ( *(_DWORD *)(v99 + 24) <= 1u )
    goto LABEL_48;
  v107 = StringLiteral_8320/*"Kenneth"*/;
  *(_QWORD *)(v99 + 40) = StringLiteral_8320/*"Kenneth"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 40), v107, v101, v102, v103, v104, v105, v106);
  if ( *(_DWORD *)(v99 + 24) <= 2u )
    goto LABEL_48;
  v114 = StringLiteral_10644/*"Palette"*/;
  *(_QWORD *)(v99 + 48) = StringLiteral_10644/*"Palette"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 48), v114, v108, v109, v110, v111, v112, v113);
  if ( *(_DWORD *)(v99 + 24) <= 3u )
    goto LABEL_48;
  v121 = StringLiteral_9015/*"Mark"*/;
  *(_QWORD *)(v99 + 56) = StringLiteral_9015/*"Mark"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 56), v121, v115, v116, v117, v118, v119, v120);
  if ( *(_DWORD *)(v99 + 24) <= 4u )
    goto LABEL_48;
  v128 = StringLiteral_10686/*"Parmesian"*/;
  *(_QWORD *)(v99 + 64) = StringLiteral_10686/*"Parmesian"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 64), v128, v122, v123, v124, v125, v126, v127);
  if ( *(_DWORD *)(v99 + 24) <= 5u )
    goto LABEL_48;
  v135 = StringLiteral_13057/*"Spitfire"*/;
  *(_QWORD *)(v99 + 72) = StringLiteral_13057/*"Spitfire"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 72), v135, v129, v130, v131, v132, v133, v134);
  if ( *(_DWORD *)(v99 + 24) <= 6u )
    goto LABEL_48;
  v142 = StringLiteral_6271/*"Eva"*/;
  *(_QWORD *)(v99 + 80) = StringLiteral_6271/*"Eva"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 80), v142, v136, v137, v138, v139, v140, v141);
  if ( *(_DWORD *)(v99 + 24) <= 7u )
    goto LABEL_48;
  v149 = StringLiteral_2310/*"Alpro"*/;
  *(_QWORD *)(v99 + 88) = StringLiteral_2310/*"Alpro"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 88), v149, v143, v144, v145, v146, v147, v148);
  if ( *(_DWORD *)(v99 + 24) <= 8u )
    goto LABEL_48;
  v156 = StringLiteral_11357/*"Redtail"*/;
  *(_QWORD *)(v99 + 96) = StringLiteral_11357/*"Redtail"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 96), v156, v150, v151, v152, v153, v154, v155);
  if ( *(_DWORD *)(v99 + 24) <= 9u )
    goto LABEL_48;
  v163 = StringLiteral_7698/*"Infiltrator"*/;
  *(_QWORD *)(v99 + 104) = StringLiteral_7698/*"Infiltrator"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 104), v163, v157, v158, v159, v160, v161, v162);
  if ( *(_DWORD *)(v99 + 24) <= 0xAu )
    goto LABEL_48;
  v170 = StringLiteral_11320/*"RearEnd"*/;
  *(_QWORD *)(v99 + 112) = StringLiteral_11320/*"RearEnd"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 112), v170, v164, v165, v166, v167, v168, v169);
  if ( *(_DWORD *)(v99 + 24) <= 0xBu )
    goto LABEL_48;
  v177 = StringLiteral_15793/*"White Mice"*/;
  *(_QWORD *)(v99 + 120) = StringLiteral_15793/*"White Mice"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 120), v177, v171, v172, v173, v174, v175, v176);
  if ( *(_DWORD *)(v99 + 24) <= 0xCu )
    goto LABEL_48;
  v184 = StringLiteral_15098/*"Unconventional"*/;
  *(_QWORD *)(v99 + 128) = StringLiteral_15098/*"Unconventional"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 128), v184, v178, v179, v180, v181, v182, v183);
  if ( *(_DWORD *)(v99 + 24) <= 0xDu )
    goto LABEL_48;
  v191 = StringLiteral_10731/*"Penis Man"*/;
  *(_QWORD *)(v99 + 136) = StringLiteral_10731/*"Penis Man"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 136), v191, v185, v186, v187, v188, v189, v190);
  if ( *(_DWORD *)(v99 + 24) <= 0xEu )
    goto LABEL_48;
  v198 = StringLiteral_13870/*"The Bin Man"*/;
  *(_QWORD *)(v99 + 144) = StringLiteral_13870/*"The Bin Man"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 144), v198, v192, v193, v194, v195, v196, v197);
  if ( *(_DWORD *)(v99 + 24) <= 0xFu )
    goto LABEL_48;
  v205 = StringLiteral_13899/*"The Evacuator"*/;
  *(_QWORD *)(v99 + 152) = StringLiteral_13899/*"The Evacuator"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 152), v205, v199, v200, v201, v202, v203, v204);
  if ( *(_DWORD *)(v99 + 24) <= 0x10u )
    goto LABEL_48;
  v212 = StringLiteral_7171/*"Giant Lump"*/;
  *(_QWORD *)(v99 + 160) = StringLiteral_7171/*"Giant Lump"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 160), v212, v206, v207, v208, v209, v210, v211);
  if ( *(_DWORD *)(v99 + 24) <= 0x11u )
    goto LABEL_48;
  v219 = StringLiteral_6008/*"Ejaculatory"*/;
  *(_QWORD *)(v99 + 168) = StringLiteral_6008/*"Ejaculatory"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 168), v219, v213, v214, v215, v216, v217, v218);
  if ( *(_DWORD *)(v99 + 24) <= 0x12u )
    goto LABEL_48;
  v226 = StringLiteral_13959/*"The Sperminator"*/;
  *(_QWORD *)(v99 + 176) = StringLiteral_13959/*"The Sperminator"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 176), v226, v220, v221, v222, v223, v224, v225);
  if ( *(_DWORD *)(v99 + 24) <= 0x13u )
    goto LABEL_48;
  v233 = StringLiteral_8280/*"Jester"*/;
  *(_QWORD *)(v99 + 184) = StringLiteral_8280/*"Jester"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 184), v233, v227, v228, v229, v230, v231, v232);
  if ( *(_DWORD *)(v99 + 24) <= 0x14u )
    goto LABEL_48;
  v240 = StringLiteral_9053/*"Maverick"*/;
  *(_QWORD *)(v99 + 192) = StringLiteral_9053/*"Maverick"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 192), v240, v234, v235, v236, v237, v238, v239);
  if ( *(_DWORD *)(v99 + 24) <= 0x15u )
    goto LABEL_48;
  v247 = StringLiteral_7559/*"Ice Man"*/;
  *(_QWORD *)(v99 + 200) = StringLiteral_7559/*"Ice Man"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 200), v247, v241, v242, v243, v244, v245, v246);
  if ( *(_DWORD *)(v99 + 24) <= 0x16u )
    goto LABEL_48;
  v254 = StringLiteral_12965/*"Slider"*/;
  *(_QWORD *)(v99 + 208) = StringLiteral_12965/*"Slider"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 208), (int64_t)v254, v248, v249, v250, v251, v252, v253);
  if ( *(_DWORD *)(v99 + 24) <= 0x17u )
    goto LABEL_48;
  v261 = StringLiteral_8060/*"Ironside"*/;
  *(_QWORD *)(v99 + 216) = StringLiteral_8060/*"Ironside"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 216), v261, v255, v256, v257, v258, v259, v260);
  if ( *(_DWORD *)(v99 + 24) <= 0x18u )
    goto LABEL_48;
  v268 = StringLiteral_13397/*"T-Bag"*/;
  *(_QWORD *)(v99 + 224) = StringLiteral_13397/*"T-Bag"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 224), v268, v262, v263, v264, v265, v266, v267);
  if ( *(_DWORD *)(v99 + 24) <= 0x19u )
    goto LABEL_48;
  v275 = StringLiteral_13247/*"Sundown"*/;
  *(_QWORD *)(v99 + 232) = StringLiteral_13247/*"Sundown"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 232), v275, v269, v270, v271, v272, v273, v274);
  if ( *(_DWORD *)(v99 + 24) <= 0x1Au )
    goto LABEL_48;
  v282 = StringLiteral_9054/*"Max"*/;
  *(_QWORD *)(v99 + 240) = StringLiteral_9054/*"Max"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 240), v282, v276, v277, v278, v279, v280, v281);
  if ( *(_DWORD *)(v99 + 24) <= 0x1Bu )
    goto LABEL_48;
  v289 = StringLiteral_15833/*"Wizard"*/;
  *(_QWORD *)(v99 + 248) = StringLiteral_15833/*"Wizard"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 248), v289, v283, v284, v285, v286, v287, v288);
  if ( *(_DWORD *)(v99 + 24) <= 0x1Cu )
    goto LABEL_48;
  v296 = StringLiteral_9114/*"Merlin"*/;
  *(_QWORD *)(v99 + 256) = StringLiteral_9114/*"Merlin"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 256), v296, v290, v291, v292, v293, v294, v295);
  if ( *(_DWORD *)(v99 + 24) <= 0x1Du )
    goto LABEL_48;
  v303 = StringLiteral_2816/*"BARRY"*/;
  *(_QWORD *)(v99 + 264) = StringLiteral_2816/*"BARRY"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 264), v303, v297, v298, v299, v300, v301, v302);
  if ( *(_DWORD *)(v99 + 24) <= 0x1Eu )
    goto LABEL_48;
  v310 = StringLiteral_15526/*"Vitamin C"*/;
  *(_QWORD *)(v99 + 272) = StringLiteral_15526/*"Vitamin C"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 272), v310, v304, v305, v306, v307, v308, v309);
  if ( *(_DWORD *)(v99 + 24) <= 0x1Fu )
    goto LABEL_48;
  v317 = StringLiteral_15974/*"Zoolander"*/;
  *(_QWORD *)(v99 + 280) = StringLiteral_15974/*"Zoolander"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 280), v317, v311, v312, v313, v314, v315, v316);
  if ( *(_DWORD *)(v99 + 24) <= 0x20u )
    goto LABEL_48;
  v324 = StringLiteral_4618/*"Coaster"*/;
  *(_QWORD *)(v99 + 288) = StringLiteral_4618/*"Coaster"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 288), v324, v318, v319, v320, v321, v322, v323);
  if ( *(_DWORD *)(v99 + 24) <= 0x21u )
    goto LABEL_48;
  v331 = StringLiteral_10764/*"Plank"*/;
  *(_QWORD *)(v99 + 296) = StringLiteral_10764/*"Plank"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 296), v331, v325, v326, v327, v328, v329, v330);
  if ( *(_DWORD *)(v99 + 24) <= 0x22u )
    goto LABEL_48;
  v338 = StringLiteral_9511/*"Neo1988"*/;
  *(_QWORD *)(v99 + 304) = StringLiteral_9511/*"Neo1988"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 304), v338, v332, v333, v334, v335, v336, v337);
  if ( *(_DWORD *)(v99 + 24) <= 0x23u )
    goto LABEL_48;
  v345 = StringLiteral_22218/*"n3o"*/;
  *(_QWORD *)(v99 + 312) = StringLiteral_22218/*"n3o"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 312), v345, v339, v340, v341, v342, v343, v344);
  if ( *(_DWORD *)(v99 + 24) <= 0x24u )
    goto LABEL_48;
  v352 = StringLiteral_5602/*"ETC"*/;
  *(_QWORD *)(v99 + 320) = StringLiteral_5602/*"ETC"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 320), v352, v346, v347, v348, v349, v350, v351);
  if ( *(_DWORD *)(v99 + 24) <= 0x25u )
    goto LABEL_48;
  v359 = StringLiteral_11304/*"Read End Connection"*/;
  *(_QWORD *)(v99 + 328) = StringLiteral_11304/*"Read End Connection"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 328), v359, v353, v354, v355, v356, v357, v358);
  if ( *(_DWORD *)(v99 + 24) <= 0x26u )
    goto LABEL_48;
  v366 = StringLiteral_3324/*"Blind"*/;
  *(_QWORD *)(v99 + 336) = StringLiteral_3324/*"Blind"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 336), v366, v360, v361, v362, v363, v364, v365);
  if ( *(_DWORD *)(v99 + 24) <= 0x27u )
    goto LABEL_48;
  v373 = StringLiteral_15971/*"Z - Ray"*/;
  *(_QWORD *)(v99 + 344) = StringLiteral_15971/*"Z - Ray"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 344), v373, v367, v368, v369, v370, v371, v372);
  if ( *(_DWORD *)(v99 + 24) <= 0x28u
    || (v380 = StringLiteral_5999/*"Egg-man"*/,
        *(_QWORD *)(v99 + 352) = StringLiteral_5999/*"Egg-man"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 352), v380, v374, v375, v376, v377, v378, v379),
        *(_DWORD *)(v99 + 24) <= 0x29u)
    || (v387 = StringLiteral_2203/*"AXIX"*/,
        *(_QWORD *)(v99 + 360) = StringLiteral_2203/*"AXIX"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 360), v387, v381, v382, v383, v384, v385, v386),
        *(_DWORD *)(v99 + 24) <= 0x2Au) )
  {
LABEL_48:
    sub_1BCAA44(v91, v92);
  }
  v394 = StringLiteral_12766/*"Sergio Georgini"*/;
  *(_QWORD *)(v99 + 368) = StringLiteral_12766/*"Sergio Georgini"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 368), v394, v388, v389, v390, v391, v392, v393);
  AccountExtensions_TypeInfo->static_fields->names = (struct System_String_array *)v99;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AccountExtensions_TypeInfo->static_fields,
    v99,
    v395,
    v396,
    v397,
    v398,
    v399,
    v400);
}


System_String_o *__fastcall AccountExtensions__GetRandomName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AccountExtensions_c *v3; // x0
  struct System_String_array *names; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B1421D & 1) == 0 )
  {
    sub_1BCA7E0(&AccountExtensions_TypeInfo, v1, v2);
    byte_4B1421D = 1;
  }
  v3 = AccountExtensions_TypeInfo;
  if ( !AccountExtensions_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountExtensions_TypeInfo, v1);
    v3 = AccountExtensions_TypeInfo;
  }
  names = v3->static_fields->names;
  if ( !names )
    sub_1BCAA3C(v3, v1);
  v5 = UnityEngine_Random__Range_70113984(0, names->max_length - 1, 0LL);
  if ( (unsigned int)v5 >= names->max_length )
    sub_1BCAA44(v5, v6);
  return names->m_Items[(int)v5];
}


bool __fastcall AccountExtensions__IsValidEmailAddress(System_String_o *email, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_Text_RegularExpressions_Regex_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B1421C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_RegularExpressions_Regex_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16267/*"^(?!\\.)(\"([^\"\\r\\\\]|\\\\[\"\\r\\\\])*\"|([-a-z0-9!#$%&'*+/=?^_`{|}~]|(?<!\\.)\\.)*)(?<!\\.)@[a-z0-9][\\w\\.-]*[a-z0-9]\\.[a-z][a-z\\.]*[a-z]$"*/, v4, v5);
    byte_4B1421C = 1;
  }
  if ( System_String__IsNullOrEmpty(email, 0LL) )
    return 0;
  v10 = (System_Text_RegularExpressions_Regex_o *)sub_1BCAA2C(System_Text_RegularExpressions_Regex_TypeInfo, v6, v7, v8);
  System_Text_RegularExpressions_Regex___ctor_68962024(v10, (System_String_o *)StringLiteral_16267/*"^(?!\\.)(\"([^\"\\r\\\\]|\\\\[\"\\r\\\\])*\"|([-a-z0-9!#$%&'*+/=?^_`{|}~]|(?<!\\.)\\.)*)(?<!\\.)@[a-z0-9][\\w\\.-]*[a-z0-9]\\.[a-z][a-z\\.]*[a-z]$"*/, 1, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  return System_Text_RegularExpressions_Regex__IsMatch_68957388(v10, email, 0LL);
}