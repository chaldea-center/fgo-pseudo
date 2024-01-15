void __fastcall BuffList___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v17; // x19
  __int64 v18; // x2
  BuffList_TYPE_array *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  il2cpp_array_size_t max_length; // w8
  BuffList_TYPE_array *v23; // x20
  __int64 v24; // x3
  __int64 v25; // x4
  il2cpp_array_size_t v26; // w8
  BuffList_TYPE_array *v27; // x21
  BuffList_ActInfo_o *v28; // x22
  __int64 v29; // x2
  il2cpp_array_size_t v30; // w8
  BuffList_TYPE_array *v31; // x20
  __int64 v32; // x3
  __int64 v33; // x4
  il2cpp_array_size_t v34; // w8
  BuffList_TYPE_array *v35; // x21
  BuffList_ActInfo_o *v36; // x22
  __int64 v37; // x2
  BuffList_TYPE_array *v38; // x20
  __int64 v39; // x3
  __int64 v40; // x4
  BuffList_TYPE_array *v41; // x21
  BuffList_ActInfo_o *v42; // x22
  __int64 v43; // x2
  BuffList_TYPE_array *v44; // x20
  __int64 v45; // x3
  __int64 v46; // x4
  BuffList_TYPE_array *v47; // x21
  BuffList_ActInfo_o *v48; // x22
  __int64 v49; // x2
  BuffList_TYPE_array *v50; // x20
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  BuffList_TYPE_array *v54; // x21
  BuffList_ActInfo_o *v55; // x22
  __int64 v56; // x2
  BuffList_TYPE_array *v57; // x20
  __int64 v58; // x3
  __int64 v59; // x4
  BuffList_TYPE_array *v60; // x21
  BuffList_ActInfo_o *v61; // x22
  System_String_o *v62; // x0
  __int64 v63; // x2
  BuffList_TYPE_array *v64; // x20
  __int64 v65; // x3
  __int64 v66; // x4
  BuffList_TYPE_array *v67; // x21
  BuffList_ActInfo_o *v68; // x22
  System_String_o *v69; // x0
  __int64 v70; // x2
  BuffList_TYPE_array *v71; // x20
  __int64 v72; // x3
  __int64 v73; // x4
  BuffList_TYPE_array *v74; // x21
  BuffList_ActInfo_o *v75; // x22
  System_String_o *v76; // x0
  __int64 v77; // x2
  BuffList_TYPE_array *v78; // x20
  __int64 v79; // x3
  __int64 v80; // x4
  BuffList_TYPE_array *v81; // x21
  BuffList_ActInfo_o *v82; // x22
  System_String_o *v83; // x0
  __int64 v84; // x2
  BuffList_TYPE_array *v85; // x20
  __int64 v86; // x3
  __int64 v87; // x4
  BuffList_TYPE_array *v88; // x21
  BuffList_ActInfo_o *v89; // x22
  System_String_o *v90; // x0
  __int64 v91; // x2
  BuffList_TYPE_array *v92; // x20
  __int64 v93; // x3
  __int64 v94; // x4
  BuffList_TYPE_array *v95; // x21
  BuffList_ActInfo_o *v96; // x22
  System_String_o *v97; // x0
  __int64 v98; // x2
  BuffList_TYPE_array *v99; // x20
  __int64 v100; // x3
  __int64 v101; // x4
  BuffList_TYPE_array *v102; // x21
  BuffList_ActInfo_o *v103; // x22
  System_String_o *v104; // x0
  __int64 v105; // x2
  BuffList_TYPE_array *v106; // x20
  __int64 v107; // x3
  __int64 v108; // x4
  BuffList_TYPE_array *v109; // x21
  BuffList_ActInfo_o *v110; // x22
  System_String_o *v111; // x0
  __int64 v112; // x2
  BuffList_TYPE_array *v113; // x20
  __int64 v114; // x3
  __int64 v115; // x4
  BuffList_TYPE_array *v116; // x21
  BuffList_ActInfo_o *v117; // x22
  System_String_o *v118; // x0
  __int64 v119; // x2
  BuffList_TYPE_array *v120; // x20
  BuffList_TYPE_array *v121; // x21
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x3
  __int64 v125; // x4
  BuffList_ActInfo_o *v126; // x22
  __int64 v127; // x2
  BuffList_TYPE_array *v128; // x20
  BuffList_TYPE_array *v129; // x21
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  BuffList_ActInfo_o *v134; // x22
  __int64 v135; // x2
  BuffList_TYPE_array *v136; // x20
  BuffList_TYPE_array *v137; // x21
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x3
  __int64 v141; // x4
  BuffList_ActInfo_o *v142; // x22
  __int64 v143; // x2
  BuffList_TYPE_array *v144; // x20
  BuffList_TYPE_array *v145; // x21
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x3
  __int64 v149; // x4
  BuffList_ActInfo_o *v150; // x22
  __int64 v151; // x2
  BuffList_TYPE_array *v152; // x20
  BuffList_TYPE_array *v153; // x21
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x3
  __int64 v157; // x4
  BuffList_ActInfo_o *v158; // x22
  __int64 v159; // x2
  BuffList_TYPE_array *v160; // x20
  BuffList_TYPE_array *v161; // x21
  __int64 v162; // x1
  __int64 v163; // x2
  __int64 v164; // x3
  __int64 v165; // x4
  BuffList_ActInfo_o *v166; // x22
  __int64 v167; // x2
  BuffList_TYPE_array *v168; // x20
  BuffList_TYPE_array *v169; // x21
  __int64 v170; // x1
  __int64 v171; // x2
  __int64 v172; // x3
  __int64 v173; // x4
  BuffList_ActInfo_o *v174; // x22
  __int64 v175; // x2
  il2cpp_array_size_t v176; // w8
  BuffList_TYPE_array *v177; // x20
  __int64 v178; // x3
  __int64 v179; // x4
  il2cpp_array_size_t v180; // w8
  BuffList_TYPE_array *v181; // x21
  BuffList_ActInfo_o *v182; // x22
  __int64 v183; // x2
  BuffList_TYPE_array *v184; // x20
  __int64 v185; // x3
  __int64 v186; // x4
  BuffList_TYPE_array *v187; // x21
  BuffList_ActInfo_o *v188; // x22
  __int64 v189; // x2
  BuffList_TYPE_array *v190; // x20
  __int64 v191; // x3
  __int64 v192; // x4
  BuffList_TYPE_array *v193; // x21
  BuffList_ActInfo_o *v194; // x22
  __int64 v195; // x2
  BuffList_TYPE_array *v196; // x20
  __int64 v197; // x3
  __int64 v198; // x4
  BuffList_TYPE_array *v199; // x21
  BuffList_ActInfo_o *v200; // x22
  __int64 v201; // x2
  il2cpp_array_size_t v202; // w8
  BuffList_TYPE_array *v203; // x20
  __int64 v204; // x3
  __int64 v205; // x4
  il2cpp_array_size_t v206; // w8
  BuffList_TYPE_array *v207; // x21
  BuffList_ActInfo_o *v208; // x22
  __int64 v209; // x2
  BuffList_TYPE_array *v210; // x20
  __int64 v211; // x3
  __int64 v212; // x4
  BuffList_TYPE_array *v213; // x21
  BuffList_ActInfo_o *v214; // x22
  __int64 v215; // x2
  BuffList_TYPE_array *v216; // x20
  __int64 v217; // x3
  __int64 v218; // x4
  BuffList_TYPE_array *v219; // x21
  BuffList_ActInfo_o *v220; // x22
  System_String_o *v221; // x0
  __int64 v222; // x2
  BuffList_TYPE_array *v223; // x20
  __int64 v224; // x3
  __int64 v225; // x4
  BuffList_TYPE_array *v226; // x21
  BuffList_ActInfo_o *v227; // x22
  __int64 v228; // x2
  BuffList_TYPE_array *v229; // x20
  __int64 v230; // x3
  __int64 v231; // x4
  BuffList_TYPE_array *v232; // x21
  BuffList_ActInfo_o *v233; // x22
  BuffList_ActInfo_o *v234; // x0
  BuffList_ActInfo_o *v235; // x0
  System_String_o *v236; // x0
  __int64 v237; // x2
  BuffList_TYPE_array *v238; // x20
  BuffList_TYPE_array *v239; // x22
  __int64 v240; // x1
  __int64 v241; // x2
  __int64 v242; // x3
  __int64 v243; // x4
  BuffList_ActInfo_o *v244; // x21
  BuffList_ActInfo_o *v245; // x0
  System_String_o *v246; // x0
  __int64 v247; // x2
  BuffList_TYPE_array *v248; // x20
  BuffList_TYPE_array *v249; // x22
  __int64 v250; // x1
  __int64 v251; // x2
  __int64 v252; // x3
  __int64 v253; // x4
  BuffList_ActInfo_o *v254; // x21
  BuffList_ActInfo_o *v255; // x0
  System_String_o *v256; // x0
  __int64 v257; // x2
  BuffList_TYPE_array *v258; // x20
  BuffList_TYPE_array *v259; // x22
  __int64 v260; // x1
  __int64 v261; // x2
  __int64 v262; // x3
  __int64 v263; // x4
  BuffList_ActInfo_o *v264; // x21
  BuffList_ActInfo_o *v265; // x0
  BuffList_ActInfo_o *v266; // x0
  System_String_o *v267; // x0
  __int64 v268; // x2
  BuffList_TYPE_array *v269; // x20
  __int64 v270; // x3
  __int64 v271; // x4
  BuffList_TYPE_array *v272; // x21
  BuffList_ActInfo_o *v273; // x22
  __int64 v274; // x2
  BuffList_TYPE_array *v275; // x20
  __int64 v276; // x3
  __int64 v277; // x4
  BuffList_TYPE_array *v278; // x21
  BuffList_ActInfo_o *v279; // x22
  System_String_o *v280; // x0
  __int64 v281; // x2
  BuffList_TYPE_array *v282; // x20
  __int64 v283; // x0
  __int64 v284; // x1
  __int64 v285; // x2
  __int64 v286; // x3
  __int64 v287; // x4
  BuffList_TYPE_array *v288; // x21
  BuffList_ActInfo_o *v289; // x22
  System_String_o *v290; // x0
  __int64 v291; // x2
  BuffList_TYPE_array *v292; // x20
  __int64 v293; // x3
  __int64 v294; // x4
  BuffList_TYPE_array *v295; // x21
  BuffList_ActInfo_o *v296; // x22
  System_String_o *v297; // x0
  __int64 v298; // x2
  BuffList_TYPE_array *v299; // x20
  BuffList_TYPE_array *v300; // x21
  __int64 v301; // x1
  __int64 v302; // x2
  __int64 v303; // x3
  __int64 v304; // x4
  BuffList_ActInfo_o *v305; // x22
  __int64 v306; // x2
  BuffList_TYPE_array *v307; // x20
  BuffList_TYPE_array *v308; // x21
  __int64 v309; // x1
  __int64 v310; // x2
  __int64 v311; // x3
  __int64 v312; // x4
  BuffList_ActInfo_o *v313; // x22
  __int64 v314; // x2
  BuffList_TYPE_array *v315; // x20
  BuffList_TYPE_array *v316; // x21
  __int64 v317; // x1
  __int64 v318; // x2
  __int64 v319; // x3
  __int64 v320; // x4
  BuffList_ActInfo_o *v321; // x22
  __int64 v322; // x2
  BuffList_TYPE_array *v323; // x20
  BuffList_TYPE_array *v324; // x21
  __int64 v325; // x1
  __int64 v326; // x2
  __int64 v327; // x3
  __int64 v328; // x4
  BuffList_ActInfo_o *v329; // x22
  __int64 v330; // x2
  BuffList_TYPE_array *v331; // x20
  BuffList_TYPE_array *v332; // x21
  __int64 v333; // x1
  __int64 v334; // x2
  __int64 v335; // x3
  __int64 v336; // x4
  BuffList_ActInfo_o *v337; // x22
  __int64 v338; // x2
  BuffList_TYPE_array *v339; // x20
  BuffList_TYPE_array *v340; // x21
  __int64 v341; // x1
  __int64 v342; // x2
  __int64 v343; // x3
  __int64 v344; // x4
  BuffList_ActInfo_o *v345; // x22
  __int64 v346; // x2
  BuffList_TYPE_array *v347; // x20
  BuffList_TYPE_array *v348; // x21
  __int64 v349; // x1
  __int64 v350; // x2
  __int64 v351; // x3
  __int64 v352; // x4
  BuffList_ActInfo_o *v353; // x22
  __int64 v354; // x2
  BuffList_TYPE_array *v355; // x20
  BuffList_TYPE_array *v356; // x21
  __int64 v357; // x1
  __int64 v358; // x2
  __int64 v359; // x3
  __int64 v360; // x4
  BuffList_ActInfo_o *v361; // x22
  __int64 v362; // x2
  BuffList_TYPE_array *v363; // x20
  __int64 v364; // x3
  __int64 v365; // x4
  BuffList_TYPE_array *v366; // x21
  BuffList_ActInfo_o *v367; // x22
  System_String_o *v368; // x0
  __int64 v369; // x2
  BuffList_TYPE_array *v370; // x20
  BuffList_TYPE_array *v371; // x21
  __int64 v372; // x1
  __int64 v373; // x2
  __int64 v374; // x3
  __int64 v375; // x4
  BuffList_ActInfo_o *v376; // x22
  __int64 v377; // x2
  BuffList_TYPE_array *v378; // x20
  BuffList_TYPE_array *v379; // x22
  __int64 v380; // x1
  __int64 v381; // x2
  __int64 v382; // x3
  __int64 v383; // x4
  BuffList_ActInfo_o *v384; // x21
  System_String_o *v385; // x0
  __int64 v386; // x2
  BuffList_TYPE_array *v387; // x20
  BuffList_TYPE_array *v388; // x22
  __int64 v389; // x1
  __int64 v390; // x2
  __int64 v391; // x3
  __int64 v392; // x4
  BuffList_ActInfo_o *v393; // x21
  System_String_o *v394; // x0
  __int64 v395; // x2
  BuffList_TYPE_array *v396; // x20
  BuffList_TYPE_array *v397; // x22
  __int64 v398; // x1
  __int64 v399; // x2
  __int64 v400; // x3
  __int64 v401; // x4
  BuffList_ActInfo_o *v402; // x21
  System_String_o *v403; // x0
  __int64 v404; // x2
  BuffList_TYPE_array *v405; // x20
  BuffList_TYPE_array *v406; // x21
  __int64 v407; // x1
  __int64 v408; // x2
  __int64 v409; // x3
  __int64 v410; // x4
  BuffList_ActInfo_o *v411; // x22
  __int64 v412; // x2
  BuffList_TYPE_array *v413; // x20
  BuffList_TYPE_array *v414; // x21
  __int64 v415; // x1
  __int64 v416; // x2
  __int64 v417; // x3
  __int64 v418; // x4
  BuffList_ActInfo_o *v419; // x22
  __int64 v420; // x2
  BuffList_TYPE_array *v421; // x20
  __int64 v422; // x3
  __int64 v423; // x4
  BuffList_TYPE_array *v424; // x21
  BuffList_ActInfo_o *v425; // x22
  System_String_o *v426; // x0
  __int64 v427; // x2
  BuffList_TYPE_array *v428; // x20
  __int64 v429; // x3
  __int64 v430; // x4
  BuffList_TYPE_array *v431; // x21
  BuffList_ActInfo_o *v432; // x22
  System_String_o *v433; // x0
  __int64 v434; // x2
  BuffList_TYPE_array *v435; // x20
  BuffList_TYPE_array *v436; // x21
  __int64 v437; // x1
  __int64 v438; // x2
  __int64 v439; // x3
  __int64 v440; // x4
  BuffList_ActInfo_o *v441; // x22
  __int64 v442; // x2
  BuffList_TYPE_array *v443; // x20
  BuffList_TYPE_array *v444; // x21
  __int64 v445; // x1
  __int64 v446; // x2
  __int64 v447; // x3
  __int64 v448; // x4
  BuffList_ActInfo_o *v449; // x22
  __int64 v450; // x2
  BuffList_TYPE_array *v451; // x20
  __int64 v452; // x3
  __int64 v453; // x4
  BuffList_TYPE_array *v454; // x21
  BuffList_ActInfo_o *v455; // x22
  __int64 v456; // x2
  BuffList_TYPE_array *v457; // x20
  BuffList_TYPE_array *v458; // x21
  __int64 v459; // x1
  __int64 v460; // x2
  __int64 v461; // x3
  __int64 v462; // x4
  BuffList_ActInfo_o *v463; // x22
  __int64 v464; // x2
  BuffList_TYPE_array *v465; // x20
  BuffList_TYPE_array *v466; // x21
  __int64 v467; // x1
  __int64 v468; // x2
  __int64 v469; // x3
  __int64 v470; // x4
  BuffList_ActInfo_o *v471; // x22
  __int64 v472; // x2
  BuffList_TYPE_array *v473; // x20
  BuffList_TYPE_array *v474; // x21
  __int64 v475; // x1
  __int64 v476; // x2
  __int64 v477; // x3
  __int64 v478; // x4
  BuffList_ActInfo_o *v479; // x22
  __int64 v480; // x2
  BuffList_TYPE_array *v481; // x20
  BuffList_TYPE_array *v482; // x22
  __int64 v483; // x1
  __int64 v484; // x2
  __int64 v485; // x3
  __int64 v486; // x4
  BuffList_ActInfo_o *v487; // x21
  System_String_o *v488; // x0
  __int64 v489; // x2
  BuffList_TYPE_array *v490; // x20
  __int64 v491; // x3
  __int64 v492; // x4
  BuffList_TYPE_array *v493; // x21
  BuffList_ActInfo_o *v494; // x22
  System_String_o *v495; // x0
  __int64 v496; // x2
  BuffList_TYPE_array *v497; // x20
  __int64 v498; // x3
  __int64 v499; // x4
  BuffList_TYPE_array *v500; // x21
  BuffList_ActInfo_o *v501; // x22
  System_String_o *v502; // x0
  __int64 v503; // x2
  BuffList_TYPE_array *v504; // x20
  __int64 v505; // x3
  __int64 v506; // x4
  BuffList_TYPE_array *v507; // x21
  BuffList_ActInfo_o *v508; // x22
  System_String_o *v509; // x0
  __int64 v510; // x2
  BuffList_TYPE_array *v511; // x20
  BuffList_TYPE_array *v512; // x21
  __int64 v513; // x1
  __int64 v514; // x2
  __int64 v515; // x3
  __int64 v516; // x4
  BuffList_ActInfo_o *v517; // x22
  __int64 v518; // x2
  BuffList_TYPE_array *v519; // x20
  BuffList_TYPE_array *v520; // x21
  __int64 v521; // x1
  __int64 v522; // x2
  __int64 v523; // x3
  __int64 v524; // x4
  BuffList_ActInfo_o *v525; // x22
  __int64 v526; // x2
  BuffList_TYPE_array *v527; // x20
  BuffList_TYPE_array *v528; // x21
  __int64 v529; // x1
  __int64 v530; // x2
  __int64 v531; // x3
  __int64 v532; // x4
  BuffList_ActInfo_o *v533; // x22
  __int64 v534; // x2
  BuffList_TYPE_array *v535; // x20
  __int64 v536; // x3
  __int64 v537; // x4
  BuffList_TYPE_array *v538; // x21
  BuffList_ActInfo_o *v539; // x22
  __int64 v540; // x2
  BuffList_TYPE_array *v541; // x20
  __int64 v542; // x3
  __int64 v543; // x4
  BuffList_TYPE_array *v544; // x21
  BuffList_ActInfo_o *v545; // x22
  System_String_o *v546; // x0
  __int64 v547; // x2
  BuffList_TYPE_array *v548; // x20
  BuffList_TYPE_array *v549; // x21
  __int64 v550; // x1
  __int64 v551; // x2
  __int64 v552; // x3
  __int64 v553; // x4
  BuffList_ActInfo_o *v554; // x22
  __int64 v555; // x2
  BuffList_TYPE_array *v556; // x20
  __int64 v557; // x3
  __int64 v558; // x4
  BuffList_TYPE_array *v559; // x21
  BuffList_ActInfo_o *v560; // x22
  __int64 v561; // x2
  BuffList_TYPE_array *v562; // x20
  __int64 v563; // x3
  __int64 v564; // x4
  BuffList_TYPE_array *v565; // x21
  BuffList_ActInfo_o *v566; // x22
  __int64 v567; // x2
  BuffList_TYPE_array *v568; // x20
  __int64 v569; // x3
  __int64 v570; // x4
  BuffList_TYPE_array *v571; // x21
  BuffList_ActInfo_o *v572; // x22
  __int64 v573; // x2
  BuffList_TYPE_array *v574; // x20
  BuffList_TYPE_array *v575; // x21
  __int64 v576; // x1
  __int64 v577; // x2
  __int64 v578; // x3
  __int64 v579; // x4
  BuffList_ActInfo_o *v580; // x22
  __int64 v581; // x2
  BuffList_TYPE_array *v582; // x20
  BuffList_TYPE_array *v583; // x21
  __int64 v584; // x1
  __int64 v585; // x2
  __int64 v586; // x3
  __int64 v587; // x4
  BuffList_ActInfo_o *v588; // x22
  __int64 v589; // x2
  BuffList_TYPE_array *v590; // x20
  BuffList_TYPE_array *v591; // x21
  __int64 v592; // x1
  __int64 v593; // x2
  __int64 v594; // x3
  __int64 v595; // x4
  BuffList_ActInfo_o *v596; // x22
  __int64 v597; // x2
  BuffList_TYPE_array *v598; // x20
  BuffList_TYPE_array *v599; // x21
  __int64 v600; // x1
  __int64 v601; // x2
  __int64 v602; // x3
  __int64 v603; // x4
  BuffList_ActInfo_o *v604; // x22
  __int64 v605; // x2
  BuffList_TYPE_array *v606; // x20
  BuffList_TYPE_array *v607; // x21
  __int64 v608; // x1
  __int64 v609; // x2
  __int64 v610; // x3
  __int64 v611; // x4
  BuffList_ActInfo_o *v612; // x22
  __int64 v613; // x2
  BuffList_TYPE_array *v614; // x20
  BuffList_TYPE_array *v615; // x22
  __int64 v616; // x1
  __int64 v617; // x2
  __int64 v618; // x3
  __int64 v619; // x4
  BuffList_ActInfo_o *v620; // x21
  System_String_o *v621; // x0
  __int64 v622; // x2
  BuffList_TYPE_array *v623; // x20
  BuffList_TYPE_array *v624; // x22
  __int64 v625; // x1
  __int64 v626; // x2
  __int64 v627; // x3
  __int64 v628; // x4
  BuffList_ActInfo_o *v629; // x21
  System_String_o *v630; // x0
  __int64 v631; // x2
  BuffList_TYPE_array *v632; // x20
  BuffList_TYPE_array *v633; // x21
  __int64 v634; // x1
  __int64 v635; // x2
  __int64 v636; // x3
  __int64 v637; // x4
  BuffList_ActInfo_o *v638; // x22
  __int64 v639; // x2
  BuffList_TYPE_array *v640; // x20
  BuffList_TYPE_array *v641; // x21
  __int64 v642; // x1
  __int64 v643; // x2
  __int64 v644; // x3
  __int64 v645; // x4
  BuffList_ActInfo_o *v646; // x22
  __int64 v647; // x2
  BuffList_TYPE_array *v648; // x20
  BuffList_TYPE_array *v649; // x21
  __int64 v650; // x1
  __int64 v651; // x2
  __int64 v652; // x3
  __int64 v653; // x4
  BuffList_ActInfo_o *v654; // x22
  __int64 v655; // x2
  BuffList_TYPE_array *v656; // x20
  BuffList_TYPE_array *v657; // x21
  __int64 v658; // x1
  __int64 v659; // x2
  __int64 v660; // x3
  __int64 v661; // x4
  BuffList_ActInfo_o *v662; // x22
  __int64 v663; // x2
  BuffList_TYPE_array *v664; // x20
  BuffList_TYPE_array *v665; // x21
  __int64 v666; // x1
  __int64 v667; // x2
  __int64 v668; // x3
  __int64 v669; // x4
  BuffList_ActInfo_o *v670; // x22
  __int64 v671; // x2
  BuffList_TYPE_array *v672; // x20
  BuffList_TYPE_array *v673; // x21
  __int64 v674; // x1
  __int64 v675; // x2
  __int64 v676; // x3
  __int64 v677; // x4
  BuffList_ActInfo_o *v678; // x22
  __int64 v679; // x2
  System_Array_o *v680; // x21
  __int64 v681; // x2
  BuffList_TYPE_array *v682; // x22
  __int64 v683; // x1
  __int64 v684; // x2
  __int64 v685; // x3
  __int64 v686; // x4
  BuffList_ActInfo_o *v687; // x20
  System_String_o *v688; // x0
  __int64 v689; // x2
  BuffList_TYPE_array *v690; // x20
  BuffList_TYPE_array *v691; // x21
  __int64 v692; // x1
  __int64 v693; // x2
  __int64 v694; // x3
  __int64 v695; // x4
  BuffList_ActInfo_o *v696; // x22
  __int64 v697; // x2
  BuffList_TYPE_array *v698; // x20
  BuffList_TYPE_array *v699; // x21
  __int64 v700; // x1
  __int64 v701; // x2
  __int64 v702; // x3
  __int64 v703; // x4
  BuffList_ActInfo_o *v704; // x22
  __int64 v705; // x2
  BuffList_TYPE_array *v706; // x0
  System_Int32_array **v707; // x1
  System_String_array **v708; // x2
  BuffList_TYPE_array *v709; // x20
  __int64 v710; // x3
  __int64 v711; // x4
  BuffList_TYPE_array *v712; // x21
  BuffList_ActInfo_o *v713; // x22
  System_String_o *v714; // x0
  __int64 v715; // x2
  BuffList_TYPE_array *v716; // x20
  __int64 v717; // x3
  __int64 v718; // x4
  BuffList_TYPE_array *v719; // x21
  BuffList_ActInfo_o *v720; // x22
  System_String_o *v721; // x0
  __int64 v722; // x2
  BuffList_TYPE_array *v723; // x20
  BuffList_TYPE_array *v724; // x22
  __int64 v725; // x1
  __int64 v726; // x2
  __int64 v727; // x3
  __int64 v728; // x4
  BuffList_ActInfo_o *v729; // x21
  System_String_o *v730; // x0
  __int64 v731; // x2
  BuffList_TYPE_array *v732; // x20
  BuffList_TYPE_array *v733; // x21
  __int64 v734; // x1
  __int64 v735; // x2
  __int64 v736; // x3
  __int64 v737; // x4
  BuffList_ActInfo_o *v738; // x22
  __int64 v739; // x2
  BuffList_TYPE_array *v740; // x20
  BuffList_TYPE_array *v741; // x21
  __int64 v742; // x1
  __int64 v743; // x2
  __int64 v744; // x3
  __int64 v745; // x4
  BuffList_ActInfo_o *v746; // x22
  __int64 v747; // x2
  BuffList_TYPE_array *v748; // x20
  BuffList_TYPE_array *v749; // x21
  __int64 v750; // x1
  __int64 v751; // x2
  __int64 v752; // x3
  __int64 v753; // x4
  BuffList_ActInfo_o *v754; // x22
  __int64 v755; // x2
  BuffList_TYPE_array *v756; // x20
  BuffList_TYPE_array *v757; // x21
  __int64 v758; // x1
  __int64 v759; // x2
  __int64 v760; // x3
  __int64 v761; // x4
  BuffList_ActInfo_o *v762; // x22
  __int64 v763; // x2
  BuffList_TYPE_array *v764; // x20
  BuffList_TYPE_array *v765; // x21
  __int64 v766; // x1
  __int64 v767; // x2
  __int64 v768; // x3
  __int64 v769; // x4
  BuffList_ActInfo_o *v770; // x22
  __int64 v771; // x2
  BuffList_TYPE_array *v772; // x20
  BuffList_TYPE_array *v773; // x21
  __int64 v774; // x1
  __int64 v775; // x2
  __int64 v776; // x3
  __int64 v777; // x4
  BuffList_ActInfo_o *v778; // x22
  __int64 v779; // x2
  BuffList_TYPE_array *v780; // x20
  BuffList_TYPE_array *v781; // x22
  __int64 v782; // x1
  __int64 v783; // x2
  __int64 v784; // x3
  __int64 v785; // x4
  BuffList_ActInfo_o *v786; // x21
  System_String_o *v787; // x0
  __int64 v788; // x2
  BuffList_TYPE_array *v789; // x20
  BuffList_TYPE_array *v790; // x21
  __int64 v791; // x1
  __int64 v792; // x2
  __int64 v793; // x3
  __int64 v794; // x4
  BuffList_ActInfo_o *v795; // x22
  __int64 v796; // x2
  BuffList_TYPE_array *v797; // x20
  BuffList_TYPE_array *v798; // x21
  __int64 v799; // x1
  __int64 v800; // x2
  __int64 v801; // x3
  __int64 v802; // x4
  BuffList_ActInfo_o *v803; // x22
  __int64 v804; // x2
  BuffList_TYPE_array *v805; // x20
  BuffList_TYPE_array *v806; // x21
  __int64 v807; // x1
  __int64 v808; // x2
  __int64 v809; // x3
  __int64 v810; // x4
  BuffList_ActInfo_o *v811; // x22
  __int64 v812; // x2
  BuffList_TYPE_array *v813; // x20
  BuffList_TYPE_array *v814; // x21
  __int64 v815; // x1
  __int64 v816; // x2
  __int64 v817; // x3
  __int64 v818; // x4
  BuffList_ActInfo_o *v819; // x22
  __int64 v820; // x2
  BuffList_TYPE_array *v821; // x20
  BuffList_TYPE_array *v822; // x21
  __int64 v823; // x1
  __int64 v824; // x2
  __int64 v825; // x3
  __int64 v826; // x4
  BuffList_ToFieldActInfo_o *v827; // x22
  __int64 v828; // x2
  BuffList_TYPE_array *v829; // x20
  BuffList_TYPE_array *v830; // x21
  __int64 v831; // x1
  __int64 v832; // x2
  __int64 v833; // x3
  __int64 v834; // x4
  BuffList_ToFieldActInfo_o *v835; // x22
  __int64 v836; // x2
  BuffList_TYPE_array *v837; // x20
  BuffList_TYPE_array *v838; // x22
  __int64 v839; // x1
  __int64 v840; // x2
  __int64 v841; // x3
  __int64 v842; // x4
  BuffList_ActInfo_o *v843; // x21
  System_String_o *v844; // x0
  __int64 v845; // x2
  BuffList_TYPE_array *v846; // x20
  BuffList_TYPE_array *v847; // x21
  __int64 v848; // x1
  __int64 v849; // x2
  __int64 v850; // x3
  __int64 v851; // x4
  BuffList_ActInfo_o *v852; // x22
  __int64 v853; // x2
  BuffList_TYPE_array *v854; // x20
  BuffList_TYPE_array *v855; // x21
  __int64 v856; // x1
  __int64 v857; // x2
  __int64 v858; // x3
  __int64 v859; // x4
  BuffList_ActInfo_o *v860; // x22
  __int64 v861; // x2
  BuffList_TYPE_array *v862; // x20
  BuffList_TYPE_array *v863; // x22
  __int64 v864; // x1
  __int64 v865; // x2
  __int64 v866; // x3
  __int64 v867; // x4
  BuffList_ActInfo_o *v868; // x21
  System_String_o *v869; // x0
  __int64 v870; // x2
  BuffList_TYPE_array *v871; // x20
  __int64 v872; // x3
  __int64 v873; // x4
  BuffList_TYPE_array *v874; // x21
  BuffList_ActInfo_o *v875; // x22
  System_String_o *v876; // x0
  __int64 v877; // x2
  il2cpp_array_size_t v878; // w8
  BuffList_TYPE_array *v879; // x20
  BuffList_TYPE_array *v880; // x21
  __int64 v881; // x1
  __int64 v882; // x2
  __int64 v883; // x3
  __int64 v884; // x4
  BuffList_ActInfo_o *v885; // x22
  __int64 v886; // x2
  BuffList_TYPE_array *v887; // x20
  BuffList_TYPE_array *v888; // x22
  __int64 v889; // x1
  __int64 v890; // x2
  __int64 v891; // x3
  __int64 v892; // x4
  BuffList_ActInfo_o *v893; // x21
  System_String_o *v894; // x0
  __int64 v895; // x2
  BuffList_TYPE_array *v896; // x20
  BuffList_TYPE_array *v897; // x21
  __int64 v898; // x1
  __int64 v899; // x2
  __int64 v900; // x3
  __int64 v901; // x4
  BuffList_ActInfo_o *v902; // x22
  __int64 v903; // x2
  BuffList_TYPE_array *v904; // x20
  BuffList_TYPE_array *v905; // x21
  __int64 v906; // x1
  __int64 v907; // x2
  __int64 v908; // x3
  __int64 v909; // x4
  BuffList_ActInfo_o *v910; // x22
  __int64 v911; // x2
  BuffList_TYPE_array *v912; // x20
  BuffList_TYPE_array *v913; // x21
  __int64 v914; // x1
  __int64 v915; // x2
  __int64 v916; // x3
  __int64 v917; // x4
  BuffList_ActInfo_o *v918; // x22
  __int64 v919; // x2
  BuffList_TYPE_array *v920; // x20
  BuffList_TYPE_array *v921; // x21
  __int64 v922; // x1
  __int64 v923; // x2
  __int64 v924; // x3
  __int64 v925; // x4
  BuffList_ActInfo_o *v926; // x22
  __int64 v927; // x2
  BuffList_TYPE_array *v928; // x20
  BuffList_TYPE_array *v929; // x21
  __int64 v930; // x1
  __int64 v931; // x2
  __int64 v932; // x3
  __int64 v933; // x4
  BuffList_ActInfo_o *v934; // x22
  __int64 v935; // x2
  BuffList_TYPE_array *v936; // x20
  BuffList_TYPE_array *v937; // x21
  __int64 v938; // x1
  __int64 v939; // x2
  __int64 v940; // x3
  __int64 v941; // x4
  BuffList_ActInfo_o *v942; // x22
  __int64 v943; // x2
  BuffList_TYPE_array *v944; // x20
  BuffList_TYPE_array *v945; // x21
  __int64 v946; // x1
  __int64 v947; // x2
  __int64 v948; // x3
  __int64 v949; // x4
  BuffList_ActInfo_o *v950; // x22
  __int64 v951; // x2
  BuffList_TYPE_array *v952; // x20
  BuffList_TYPE_array *v953; // x21
  __int64 v954; // x1
  __int64 v955; // x2
  __int64 v956; // x3
  __int64 v957; // x4
  BuffList_ActInfo_o *v958; // x22
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v960; // x2
  System_String_array **v961; // x3
  System_Boolean_array **v962; // x4
  System_Int32_array **v963; // x5
  System_Int32_array *v964; // x6
  System_Int32_array *v965; // x7
  __int64 v966; // x2
  System_String_array **v967; // x3
  System_Boolean_array **v968; // x4
  System_Int32_array **v969; // x5
  System_Int32_array *v970; // x6
  System_Int32_array *v971; // x7
  il2cpp_array_size_t v972; // w8
  struct BuffList_StaticFields *v973; // x0
  __int64 v974; // x2
  System_Array_o *v975; // x19
  struct BuffList_StaticFields *v976; // x0
  System_String_array **v977; // x2
  System_String_array **v978; // x3
  System_Boolean_array **v979; // x4
  System_Int32_array **v980; // x5
  System_Int32_array *v981; // x6
  System_Int32_array *v982; // x7
  __int64 v983; // x1
  __int64 v984; // x2
  __int64 v985; // x3
  __int64 v986; // x4
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v987; // x19
  struct BuffList_StaticFields *v988; // x0
  System_String_array **v989; // x2
  System_String_array **v990; // x3
  System_Boolean_array **v991; // x4
  System_Int32_array **v992; // x5
  System_Int32_array *v993; // x6
  System_Int32_array *v994; // x7
  System_RuntimeFieldHandle_o v995; // 0:w1.4
  System_RuntimeFieldHandle_o v996; // 0:w1.4

  if ( (byte_40FB4F0 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_ACTION___TypeInfo, v1);
    sub_B16FFC(&BuffList_ActInfo_TypeInfo, v5);
    sub_B16FFC(&BuffList_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BuffList_TYPE___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_HashSet_BuffList_TYPE__TypeInfo, v12);
    sub_B16FFC(&BuffList_TYPE___TypeInfo, v13);
    sub_B16FFC(&BuffList_ToFieldActInfo_TypeInfo, v14);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__4EECD95FEC87B9ABE1EA9376D9C9CF1F7F1C01299268E427022C2F5192383D9E,
      v15);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__F74CB50F9D18C1E2A044410ED05D3C7285B0A0EF1A7321D9BD37EE90BF1D943E,
      v16);
    byte_40FB4F0 = 1;
  }
  v17 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__TypeInfo,
                                                                           v1,
                                                                           v2,
                                                                           v3,
                                                                           v4);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v17,
    (const MethodInfo_2DFF0A0 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo___ctor__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 2LL, v18);
  if ( !v19 )
    goto LABEL_383;
  max_length = v19->max_length;
  v23 = v19;
  if ( !max_length )
    goto LABEL_385;
  v19->m_Items[1] = 1;
  if ( max_length == 1 )
    goto LABEL_385;
  v19->m_Items[2] = 52;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 2LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v26 = v19->max_length;
  v27 = v19;
  if ( !v26 )
    goto LABEL_385;
  v19->m_Items[1] = 66;
  if ( v26 == 1 )
    goto LABEL_385;
  v19->m_Items[2] = 60;
  v28 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v24, v25);
  BuffList_ActInfo___ctor(v28, 3, v23, v27, 0LL);
  if ( !v17 )
    goto LABEL_383;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    1,
    (System_String_o *)v28,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 2LL, v29);
  if ( !v19 )
    goto LABEL_383;
  v30 = v19->max_length;
  v31 = v19;
  if ( !v30 )
    goto LABEL_385;
  v19->m_Items[1] = 105;
  if ( v30 == 1 )
    goto LABEL_385;
  v19->m_Items[2] = 128;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 2LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v34 = v19->max_length;
  v35 = v19;
  if ( !v34 )
    goto LABEL_385;
  v19->m_Items[1] = 106;
  if ( v34 == 1 )
    goto LABEL_385;
  v19->m_Items[2] = 129;
  v36 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v32, v33);
  BuffList_ActInfo___ctor(v36, 1, v31, v35, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    2,
    (System_String_o *)v36,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v37);
  if ( !v19 )
    goto LABEL_383;
  v38 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 9;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v41 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 10;
  v42 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v39, v40);
  BuffList_ActInfo___ctor(v42, 3, v38, v41, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    3,
    (System_String_o *)v42,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v43);
  if ( !v19 )
    goto LABEL_383;
  v44 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 42;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v47 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 43;
  v48 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v45, v46);
  BuffList_ActInfo___ctor(v48, 2, v44, v47, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    4,
    (System_String_o *)v48,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v50 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v49);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v51);
  if ( !v19 )
    goto LABEL_383;
  v54 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 43;
  v55 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v52, v53);
  BuffList_ActInfo___ctor(v55, 2, v50, v54, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    5,
    (System_String_o *)v55,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v56);
  if ( !v19 )
    goto LABEL_383;
  v57 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 91;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v60 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 92;
  v61 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v58, v59);
  BuffList_ActInfo___ctor(v61, 3, v57, v60, 0LL);
  if ( !v61 )
    goto LABEL_383;
  v62 = (System_String_o *)BuffList_ActInfo__setBaseValue(v61, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    6,
    v62,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v63);
  if ( !v19 )
    goto LABEL_383;
  v64 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 11;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v67 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 12;
  v68 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v65, v66);
  BuffList_ActInfo___ctor(v68, 1, v64, v67, 0LL);
  if ( !v68 )
    goto LABEL_383;
  v69 = (System_String_o *)BuffList_ActInfo__setBaseValue(v68, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    7,
    v69,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v70);
  if ( !v19 )
    goto LABEL_383;
  v71 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 110;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v74 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 111;
  v75 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v72, v73);
  BuffList_ActInfo___ctor(v75, 1, v71, v74, 0LL);
  if ( !v75 )
    goto LABEL_383;
  v76 = (System_String_o *)BuffList_ActInfo__setBaseValue(v75, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    8,
    v76,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v77);
  if ( !v19 )
    goto LABEL_383;
  v78 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 112;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v81 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 113;
  v82 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v79, v80);
  BuffList_ActInfo___ctor(v82, 1, v78, v81, 0LL);
  if ( !v82 )
    goto LABEL_383;
  v83 = (System_String_o *)BuffList_ActInfo__setBaseValue(v82, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    9,
    v83,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v84);
  if ( !v19 )
    goto LABEL_383;
  v85 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 20;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v88 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 21;
  v89 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v86, v87);
  BuffList_ActInfo___ctor(v89, 1, v85, v88, 0LL);
  if ( !v89 )
    goto LABEL_383;
  v90 = (System_String_o *)BuffList_ActInfo__setBaseValue(v89, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    10,
    v90,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v91);
  if ( !v19 )
    goto LABEL_383;
  v92 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 18;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v95 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 19;
  v96 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v93, v94);
  BuffList_ActInfo___ctor(v96, 1, v92, v95, 0LL);
  if ( !v96 )
    goto LABEL_383;
  v97 = (System_String_o *)BuffList_ActInfo__setBaseValue(v96, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    11,
    v97,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v98);
  if ( !v19 )
    goto LABEL_383;
  v99 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 15;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v102 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 16;
  v103 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v100, v101);
  BuffList_ActInfo___ctor(v103, 1, v99, v102, 0LL);
  if ( !v103 )
    goto LABEL_383;
  v104 = (System_String_o *)BuffList_ActInfo__setBaseValue(v103, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    12,
    v104,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v105);
  if ( !v19 )
    goto LABEL_383;
  v106 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 13;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v109 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 14;
  v110 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v107, v108);
  BuffList_ActInfo___ctor(v110, 0, v106, v109, 0LL);
  if ( !v110 )
    goto LABEL_383;
  v111 = (System_String_o *)BuffList_ActInfo__setBaseParam(v110, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    13,
    v111,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v112);
  if ( !v19 )
    goto LABEL_383;
  v113 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 22;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v116 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 23;
  v117 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v114, v115);
  BuffList_ActInfo___ctor(v117, 0, v113, v116, 0LL);
  if ( !v117 )
    goto LABEL_383;
  v118 = (System_String_o *)BuffList_ActInfo__setBaseParam(v117, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    14,
    v118,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v119);
  if ( !v19 )
    goto LABEL_383;
  v120 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 72;
  v121 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v21);
  v126 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v122, v123, v124, v125);
  BuffList_ActInfo___ctor(v126, 0, v120, v121, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    15,
    (System_String_o *)v126,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v127);
  if ( !v19 )
    goto LABEL_383;
  v128 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 26;
  v129 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v21);
  v134 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v130, v131, v132, v133);
  BuffList_ActInfo___ctor(v134, 0, v128, v129, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    16,
    (System_String_o *)v134,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v135);
  if ( !v19 )
    goto LABEL_383;
  v136 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 25;
  v137 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v21);
  v142 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v138, v139, v140, v141);
  BuffList_ActInfo___ctor(v142, 0, v136, v137, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    17,
    (System_String_o *)v142,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v143);
  if ( !v19 )
    goto LABEL_383;
  v144 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 24;
  v145 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v21);
  v150 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v146, v147, v148, v149);
  BuffList_ActInfo___ctor(v150, 0, v144, v145, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    18,
    (System_String_o *)v150,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v151);
  if ( !v19 )
    goto LABEL_383;
  v152 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 107;
  v153 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v21);
  v158 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v154, v155, v156, v157);
  BuffList_ActInfo___ctor(v158, 0, v152, v153, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    19,
    (System_String_o *)v158,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v159);
  if ( !v19 )
    goto LABEL_383;
  v160 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 108;
  v161 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v21);
  v166 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v162, v163, v164, v165);
  BuffList_ActInfo___ctor(v166, 0, v160, v161, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    20,
    (System_String_o *)v166,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v167);
  if ( !v19 )
    goto LABEL_383;
  v168 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 109;
  v169 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v21);
  v174 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v170, v171, v172, v173);
  BuffList_ActInfo___ctor(v174, 0, v168, v169, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    21,
    (System_String_o *)v174,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 2LL, v175);
  if ( !v19 )
    goto LABEL_383;
  v176 = v19->max_length;
  v177 = v19;
  if ( !v176 )
    goto LABEL_385;
  v19->m_Items[1] = 51;
  if ( v176 == 1 )
    goto LABEL_385;
  v19->m_Items[2] = 52;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 2LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v180 = v19->max_length;
  v181 = v19;
  if ( !v180 )
    goto LABEL_385;
  v19->m_Items[1] = 68;
  if ( v180 == 1 )
    goto LABEL_385;
  v19->m_Items[2] = 60;
  v182 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v178, v179);
  BuffList_ActInfo___ctor(v182, 3, v177, v181, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    22,
    (System_String_o *)v182,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v183);
  if ( !v19 )
    goto LABEL_383;
  v184 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 105;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v187 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 106;
  v188 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v185, v186);
  BuffList_ActInfo___ctor(v188, 1, v184, v187, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    23,
    (System_String_o *)v188,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v189);
  if ( !v19 )
    goto LABEL_383;
  v190 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 17;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v193 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 63;
  v194 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v191, v192);
  BuffList_ActInfo___ctor(v194, 3, v190, v193, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    24,
    (System_String_o *)v194,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v195);
  if ( !v19 )
    goto LABEL_383;
  v196 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 93;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v199 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 94;
  v200 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v197, v198);
  BuffList_ActInfo___ctor(v200, 3, v196, v199, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    25,
    (System_String_o *)v200,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 2LL, v201);
  if ( !v19 )
    goto LABEL_383;
  v202 = v19->max_length;
  v203 = v19;
  if ( !v202 )
    goto LABEL_385;
  v19->m_Items[1] = 50;
  if ( v202 == 1 )
    goto LABEL_385;
  v19->m_Items[2] = 52;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 2LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v206 = v19->max_length;
  v207 = v19;
  if ( !v206 || (v19->m_Items[1] = 67, v206 == 1) )
  {
LABEL_385:
    sub_B17100(v19, v20, v21);
    sub_B170A0();
  }
  v19->m_Items[2] = 60;
  v208 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v204, v205);
  BuffList_ActInfo___ctor(v208, 3, v203, v207, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    26,
    (System_String_o *)v208,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v209);
  if ( !v19 )
    goto LABEL_383;
  v210 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 105;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v213 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 106;
  v214 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v211, v212);
  BuffList_ActInfo___ctor(v214, 1, v210, v213, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    27,
    (System_String_o *)v214,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v215);
  if ( !v19 )
    goto LABEL_383;
  v216 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 3;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v219 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 4;
  v220 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v217, v218);
  BuffList_ActInfo___ctor(v220, 3, v216, v219, 0LL);
  if ( !v220 )
    goto LABEL_383;
  v221 = (System_String_o *)BuffList_ActInfo__setBaseValue(v220, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    28,
    v221,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v222);
  if ( !v19 )
    goto LABEL_383;
  v223 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 2;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v226 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 61;
  v227 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v224, v225);
  BuffList_ActInfo___ctor(v227, 3, v223, v226, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    29,
    (System_String_o *)v227,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v228);
  if ( !v19 )
    goto LABEL_383;
  v229 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 5;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v232 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 62;
  v233 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v230, v231);
  BuffList_ActInfo___ctor(v233, 0, v229, v232, 0LL);
  if ( !v233 )
    goto LABEL_383;
  v234 = BuffList_ActInfo__setBaseParam(v233, 0, 0LL);
  if ( !v234 )
    goto LABEL_383;
  v235 = BuffList_ActInfo__setRec(v234, 0, 0LL);
  if ( !v235 )
    goto LABEL_383;
  v236 = (System_String_o *)BuffList_ActInfo__setPlusAction(v235, 71, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    30,
    v236,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v237);
  if ( !v19 )
    goto LABEL_383;
  v238 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 6;
  v239 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v21);
  v244 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v240, v241, v242, v243);
  BuffList_ActInfo___ctor(v244, 0, v238, v239, 0LL);
  if ( !v244 )
    goto LABEL_383;
  v245 = BuffList_ActInfo__setBaseParam(v244, 0, 0LL);
  if ( !v245 )
    goto LABEL_383;
  v246 = (System_String_o *)BuffList_ActInfo__setRec(v245, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    31,
    v246,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v247);
  if ( !v19 )
    goto LABEL_383;
  v248 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 7;
  v249 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v21);
  v254 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v250, v251, v252, v253);
  BuffList_ActInfo___ctor(v254, 0, v248, v249, 0LL);
  if ( !v254 )
    goto LABEL_383;
  v255 = BuffList_ActInfo__setBaseParam(v254, 0, 0LL);
  if ( !v255 )
    goto LABEL_383;
  v256 = (System_String_o *)BuffList_ActInfo__setRec(v255, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    32,
    v256,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v257);
  if ( !v19 )
    goto LABEL_383;
  v258 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 8;
  v259 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v21);
  v264 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v260, v261, v262, v263);
  BuffList_ActInfo___ctor(v264, 0, v258, v259, 0LL);
  if ( !v264 )
    goto LABEL_383;
  v265 = BuffList_ActInfo__setBaseParam(v264, 0, 0LL);
  if ( !v265 )
    goto LABEL_383;
  v266 = BuffList_ActInfo__setRec(v265, 0, 0LL);
  if ( !v266 )
    goto LABEL_383;
  v267 = (System_String_o *)BuffList_ActInfo__setPlusAction(v266, 72, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    33,
    v267,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v268);
  if ( !v19 )
    goto LABEL_383;
  v269 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 64;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v272 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 65;
  v273 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v270, v271);
  BuffList_ActInfo___ctor(v273, 3, v269, v272, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    34,
    (System_String_o *)v273,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v274);
  if ( !v19 )
    goto LABEL_383;
  v275 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 114;
  v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v19 )
    goto LABEL_383;
  v278 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 115;
  v279 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v20, v21, v276, v277);
  BuffList_ActInfo___ctor(v279, 0, v275, v278, 0LL);
  if ( !v279
    || (v280 = (System_String_o *)BuffList_ActInfo__setBaseParam(v279, 0, 0LL),
        System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
          v17,
          35,
          v280,
          (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__),
        (v19 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v281)) == 0LL) )
  {
LABEL_383:
    sub_B170D4();
  }
  v282 = v19;
  if ( !v19->max_length )
    goto LABEL_385;
  v19->m_Items[1] = 27;
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v21);
  if ( !v283 )
    goto LABEL_384;
  v288 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 28;
  v289 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v284, v285, v286, v287);
  BuffList_ActInfo___ctor(v289, 3, v282, v288, 0LL);
  if ( !v289 )
    goto LABEL_384;
  v290 = (System_String_o *)BuffList_ActInfo__setBaseValue(v289, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    36,
    v290,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v291);
  if ( !v283 )
    goto LABEL_384;
  v292 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 29;
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v285);
  if ( !v283 )
    goto LABEL_384;
  v295 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 30;
  v296 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v284, v285, v293, v294);
  BuffList_ActInfo___ctor(v296, 3, v292, v295, 0LL);
  if ( !v296 )
    goto LABEL_384;
  v297 = (System_String_o *)BuffList_ActInfo__setBaseValue(v296, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    37,
    v297,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v298);
  if ( !v283 )
    goto LABEL_384;
  v299 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 31;
  v300 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v305 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v301, v302, v303, v304);
  BuffList_ActInfo___ctor(v305, 0, v299, v300, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    38,
    (System_String_o *)v305,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v306);
  if ( !v283 )
    goto LABEL_384;
  v307 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 32;
  v308 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v313 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v309, v310, v311, v312);
  BuffList_ActInfo___ctor(v313, 0, v307, v308, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    39,
    (System_String_o *)v313,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v314);
  if ( !v283 )
    goto LABEL_384;
  v315 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 33;
  v316 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v321 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v317, v318, v319, v320);
  BuffList_ActInfo___ctor(v321, 0, v315, v316, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    40,
    (System_String_o *)v321,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v322);
  if ( !v283 )
    goto LABEL_384;
  v323 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 34;
  v324 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v329 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v325, v326, v327, v328);
  BuffList_ActInfo___ctor(v329, 0, v323, v324, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    41,
    (System_String_o *)v329,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v330);
  if ( !v283 )
    goto LABEL_384;
  v331 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 35;
  v332 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v337 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v333, v334, v335, v336);
  BuffList_ActInfo___ctor(v337, 0, v331, v332, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    42,
    (System_String_o *)v337,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v338);
  if ( !v283 )
    goto LABEL_384;
  v339 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 40;
  v340 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v345 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v341, v342, v343, v344);
  BuffList_ActInfo___ctor(v345, 0, v339, v340, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    43,
    (System_String_o *)v345,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v346);
  if ( !v283 )
    goto LABEL_384;
  v347 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 41;
  v348 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v353 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v349, v350, v351, v352);
  BuffList_ActInfo___ctor(v353, 0, v347, v348, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    44,
    (System_String_o *)v353,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v354);
  if ( !v283 )
    goto LABEL_384;
  v355 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 38;
  v356 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v361 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v357, v358, v359, v360);
  BuffList_ActInfo___ctor(v361, 0, v355, v356, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    45,
    (System_String_o *)v361,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v362);
  if ( !v283 )
    goto LABEL_384;
  v363 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 70;
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v285);
  if ( !v283 )
    goto LABEL_384;
  v366 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 71;
  v367 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v284, v285, v364, v365);
  BuffList_ActInfo___ctor(v367, 3, v363, v366, 0LL);
  if ( !v367 )
    goto LABEL_384;
  v368 = (System_String_o *)BuffList_ActInfo__setBaseValue(v367, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    46,
    v368,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v369);
  if ( !v283 )
    goto LABEL_384;
  v370 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 73;
  v371 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v376 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v372, v373, v374, v375);
  BuffList_ActInfo___ctor(v376, 3, v370, v371, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    47,
    (System_String_o *)v376,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v377);
  if ( !v283 )
    goto LABEL_384;
  v378 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 74;
  v379 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v384 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v380, v381, v382, v383);
  BuffList_ActInfo___ctor(v384, 3, v378, v379, 0LL);
  if ( !v384 )
    goto LABEL_384;
  v385 = (System_String_o *)BuffList_ActInfo__setBaseValue(v384, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    48,
    v385,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v386);
  if ( !v283 )
    goto LABEL_384;
  v387 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 75;
  v388 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v393 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v389, v390, v391, v392);
  BuffList_ActInfo___ctor(v393, 3, v387, v388, 0LL);
  if ( !v393 )
    goto LABEL_384;
  v394 = (System_String_o *)BuffList_ActInfo__setBaseValue(v393, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    49,
    v394,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v395);
  if ( !v283 )
    goto LABEL_384;
  v396 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 77;
  v397 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v402 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v398, v399, v400, v401);
  BuffList_ActInfo___ctor(v402, 0, v396, v397, 0LL);
  if ( !v402 )
    goto LABEL_384;
  v403 = (System_String_o *)BuffList_ActInfo__setBaseValue(v402, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    50,
    v403,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v404);
  if ( !v283 )
    goto LABEL_384;
  v405 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 78;
  v406 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v411 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v407, v408, v409, v410);
  BuffList_ActInfo___ctor(v411, 0, v405, v406, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    51,
    (System_String_o *)v411,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v412);
  if ( !v283 )
    goto LABEL_384;
  v413 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 149;
  v414 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v419 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v415, v416, v417, v418);
  BuffList_ActInfo___ctor(v419, 0, v413, v414, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    89,
    (System_String_o *)v419,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v420);
  if ( !v283 )
    goto LABEL_384;
  v421 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 79;
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v285);
  if ( !v283 )
    goto LABEL_384;
  v424 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 80;
  v425 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v284, v285, v422, v423);
  BuffList_ActInfo___ctor(v425, 3, v421, v424, 0LL);
  if ( !v425 )
    goto LABEL_384;
  v426 = (System_String_o *)BuffList_ActInfo__setBaseValue(v425, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    52,
    v426,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v427);
  if ( !v283 )
    goto LABEL_384;
  v428 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 81;
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v285);
  if ( !v283 )
    goto LABEL_384;
  v431 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 82;
  v432 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v284, v285, v429, v430);
  BuffList_ActInfo___ctor(v432, 0, v428, v431, 0LL);
  if ( !v432 )
    goto LABEL_384;
  v433 = (System_String_o *)BuffList_ActInfo__setBaseParam(v432, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    53,
    v433,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v434);
  if ( !v283 )
    goto LABEL_384;
  v435 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 84;
  v436 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v441 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v437, v438, v439, v440);
  BuffList_ActInfo___ctor(v441, 0, v435, v436, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    54,
    (System_String_o *)v441,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v442);
  if ( !v283 )
    goto LABEL_384;
  v443 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 85;
  v444 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v449 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v445, v446, v447, v448);
  BuffList_ActInfo___ctor(v449, 0, v443, v444, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    55,
    (System_String_o *)v449,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v450);
  if ( !v283 )
    goto LABEL_384;
  v451 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 87;
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v285);
  if ( !v283 )
    goto LABEL_384;
  v454 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 88;
  v455 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v284, v285, v452, v453);
  BuffList_ActInfo___ctor(v455, 3, v451, v454, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    56,
    (System_String_o *)v455,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v456);
  if ( !v283 )
    goto LABEL_384;
  v457 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 89;
  v458 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v463 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v459, v460, v461, v462);
  BuffList_ActInfo___ctor(v463, 0, v457, v458, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    57,
    (System_String_o *)v463,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v464);
  if ( !v283 )
    goto LABEL_384;
  v465 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 90;
  v466 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v471 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v467, v468, v469, v470);
  BuffList_ActInfo___ctor(v471, 0, v465, v466, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    58,
    (System_String_o *)v471,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v472);
  if ( !v283 )
    goto LABEL_384;
  v473 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 95;
  v474 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v479 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v475, v476, v477, v478);
  BuffList_ActInfo___ctor(v479, 0, v473, v474, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    59,
    (System_String_o *)v479,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v480);
  if ( !v283 )
    goto LABEL_384;
  v481 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 96;
  v482 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v487 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v483, v484, v485, v486);
  BuffList_ActInfo___ctor(v487, 0, v481, v482, 0LL);
  if ( !v487 )
    goto LABEL_384;
  v488 = (System_String_o *)BuffList_ActInfo__setBaseParam(v487, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    60,
    v488,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v489);
  if ( !v283 )
    goto LABEL_384;
  v490 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 98;
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v285);
  if ( !v283 )
    goto LABEL_384;
  v493 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 99;
  v494 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v284, v285, v491, v492);
  BuffList_ActInfo___ctor(v494, 3, v490, v493, 0LL);
  if ( !v494 )
    goto LABEL_384;
  v495 = (System_String_o *)BuffList_ActInfo__setBaseValue(v494, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    61,
    v495,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v496);
  if ( !v283 )
    goto LABEL_384;
  v497 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 100;
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v285);
  if ( !v283 )
    goto LABEL_384;
  v500 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 101;
  v501 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v284, v285, v498, v499);
  BuffList_ActInfo___ctor(v501, 3, v497, v500, 0LL);
  if ( !v501 )
    goto LABEL_384;
  v502 = (System_String_o *)BuffList_ActInfo__setBaseValue(v501, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    62,
    v502,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v503);
  if ( !v283 )
    goto LABEL_384;
  v504 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 102;
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v285);
  if ( !v283 )
    goto LABEL_384;
  v507 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 103;
  v508 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v284, v285, v505, v506);
  BuffList_ActInfo___ctor(v508, 3, v504, v507, 0LL);
  if ( !v508 )
    goto LABEL_384;
  v509 = (System_String_o *)BuffList_ActInfo__setBaseValue(v508, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    63,
    v509,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v510);
  if ( !v283 )
    goto LABEL_384;
  v511 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 86;
  v512 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v517 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v513, v514, v515, v516);
  BuffList_ActInfo___ctor(v517, 0, v511, v512, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    64,
    (System_String_o *)v517,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v518);
  if ( !v283 )
    goto LABEL_384;
  v519 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 97;
  v520 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v525 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v521, v522, v523, v524);
  BuffList_ActInfo___ctor(v525, 0, v519, v520, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    65,
    (System_String_o *)v525,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v526);
  if ( !v283 )
    goto LABEL_384;
  v527 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 116;
  v528 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v533 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v529, v530, v531, v532);
  BuffList_ActInfo___ctor(v533, 0, v527, v528, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    66,
    (System_String_o *)v533,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v534);
  if ( !v283 )
    goto LABEL_384;
  v535 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 117;
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v285);
  if ( !v283 )
    goto LABEL_384;
  v538 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 118;
  v539 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v284, v285, v536, v537);
  BuffList_ActInfo___ctor(v539, 1, v535, v538, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    67,
    (System_String_o *)v539,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v540);
  if ( !v283 )
    goto LABEL_384;
  v541 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 119;
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v285);
  if ( !v283 )
    goto LABEL_384;
  v544 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 120;
  v545 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v284, v285, v542, v543);
  BuffList_ActInfo___ctor(v545, 0, v541, v544, 0LL);
  if ( !v545 )
    goto LABEL_384;
  v546 = (System_String_o *)BuffList_ActInfo__setBaseValue(v545, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    68,
    v546,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v547);
  if ( !v283 )
    goto LABEL_384;
  v548 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 121;
  v549 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v554 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v550, v551, v552, v553);
  BuffList_ActInfo___ctor(v554, 0, v548, v549, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    69,
    (System_String_o *)v554,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v555);
  if ( !v283 )
    goto LABEL_384;
  v556 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 122;
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v285);
  if ( !v283 )
    goto LABEL_384;
  v559 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 123;
  v560 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v284, v285, v557, v558);
  BuffList_ActInfo___ctor(v560, 0, v556, v559, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    70,
    (System_String_o *)v560,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v561);
  if ( !v283 )
    goto LABEL_384;
  v562 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 124;
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v285);
  if ( !v283 )
    goto LABEL_384;
  v565 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 125;
  v566 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v284, v285, v563, v564);
  BuffList_ActInfo___ctor(v566, 0, v562, v565, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    71,
    (System_String_o *)v566,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v567);
  if ( !v283 )
    goto LABEL_384;
  v568 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 126;
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v285);
  if ( !v283 )
    goto LABEL_384;
  v571 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 127;
  v572 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v284, v285, v569, v570);
  BuffList_ActInfo___ctor(v572, 0, v568, v571, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    72,
    (System_String_o *)v572,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v573);
  if ( !v283 )
    goto LABEL_384;
  v574 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 130;
  v575 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v580 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v576, v577, v578, v579);
  BuffList_ActInfo___ctor(v580, 0, v574, v575, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    73,
    (System_String_o *)v580,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v581);
  if ( !v283 )
    goto LABEL_384;
  v582 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 131;
  v583 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v588 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v584, v585, v586, v587);
  BuffList_ActInfo___ctor(v588, 0, v582, v583, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    74,
    (System_String_o *)v588,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v589);
  if ( !v283 )
    goto LABEL_384;
  v590 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 132;
  v591 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v596 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v592, v593, v594, v595);
  BuffList_ActInfo___ctor(v596, 0, v590, v591, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    75,
    (System_String_o *)v596,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v597);
  if ( !v283 )
    goto LABEL_384;
  v598 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 133;
  v599 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v604 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v600, v601, v602, v603);
  BuffList_ActInfo___ctor(v604, 0, v598, v599, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    76,
    (System_String_o *)v604,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v605);
  if ( !v283 )
    goto LABEL_384;
  v606 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 134;
  v607 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v612 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v608, v609, v610, v611);
  BuffList_ActInfo___ctor(v612, 0, v606, v607, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    77,
    (System_String_o *)v612,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v613);
  if ( !v283 )
    goto LABEL_384;
  v614 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 135;
  v615 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v620 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v616, v617, v618, v619);
  BuffList_ActInfo___ctor(v620, 1, v614, v615, 0LL);
  if ( !v620 )
    goto LABEL_384;
  v621 = (System_String_o *)BuffList_ActInfo__setBaseValue(v620, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    78,
    v621,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v622);
  if ( !v283 )
    goto LABEL_384;
  v623 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 136;
  v624 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v629 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v625, v626, v627, v628);
  BuffList_ActInfo___ctor(v629, 1, v623, v624, 0LL);
  if ( !v629 )
    goto LABEL_384;
  v630 = (System_String_o *)BuffList_ActInfo__setBaseValue(v629, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    79,
    v630,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v631);
  if ( !v283 )
    goto LABEL_384;
  v632 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 137;
  v633 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v638 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v634, v635, v636, v637);
  BuffList_ActInfo___ctor(v638, 0, v632, v633, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    80,
    (System_String_o *)v638,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v639);
  if ( !v283 )
    goto LABEL_384;
  v640 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 138;
  v641 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v646 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v642, v643, v644, v645);
  BuffList_ActInfo___ctor(v646, 0, v640, v641, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    81,
    (System_String_o *)v646,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v647);
  if ( !v283 )
    goto LABEL_384;
  v648 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 139;
  v649 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v654 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v650, v651, v652, v653);
  BuffList_ActInfo___ctor(v654, 0, v648, v649, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    82,
    (System_String_o *)v654,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v655);
  if ( !v283 )
    goto LABEL_384;
  v656 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 140;
  v657 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v662 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v658, v659, v660, v661);
  BuffList_ActInfo___ctor(v662, 0, v656, v657, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    83,
    (System_String_o *)v662,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v663);
  if ( !v283 )
    goto LABEL_384;
  v664 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 141;
  v665 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v670 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v666, v667, v668, v669);
  BuffList_ActInfo___ctor(v670, 0, v664, v665, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    84,
    (System_String_o *)v670,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v671);
  if ( !v283 )
    goto LABEL_384;
  v672 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 142;
  v673 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v678 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v674, v675, v676, v677);
  BuffList_ActInfo___ctor(v678, 0, v672, v673, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    85,
    (System_String_o *)v678,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v680 = (System_Array_o *)sub_B17014(BuffList_TYPE___TypeInfo, 4LL, v679);
  v995.fields.value = Field__PrivateImplementationDetails__F74CB50F9D18C1E2A044410ED05D3C7285B0A0EF1A7321D9BD37EE90BF1D943E;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v680, v995, 0LL);
  v682 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v681);
  v687 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v683, v684, v685, v686);
  BuffList_ActInfo___ctor(v687, 0, (BuffList_TYPE_array *)v680, v682, 0LL);
  if ( !v687
    || (v688 = (System_String_o *)BuffList_ActInfo__setBaseParam(v687, -1, 0LL),
        System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
          v17,
          86,
          v688,
          (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__),
        (v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v689)) == 0) )
  {
LABEL_384:
    sub_B170D4();
  }
  v690 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
    goto LABEL_386;
  *(_DWORD *)(v283 + 32) = 144;
  v691 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v696 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v692, v693, v694, v695);
  BuffList_ActInfo___ctor(v696, 0, v690, v691, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    87,
    (System_String_o *)v696,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v283 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v697);
  if ( !v283 )
    goto LABEL_384;
  v698 = (BuffList_TYPE_array *)v283;
  if ( !*(_DWORD *)(v283 + 24) )
  {
LABEL_386:
    sub_B17100(v283, v284, v285);
    sub_B170A0();
  }
  *(_DWORD *)(v283 + 32) = 148;
  v699 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v285);
  v704 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v700, v701, v702, v703);
  BuffList_ActInfo___ctor(v704, 0, v698, v699, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    88,
    (System_String_o *)v704,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v705);
  if ( !v706 )
    goto LABEL_384;
  v709 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 150;
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v708);
  if ( !v706 )
    goto LABEL_387;
  v712 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 151;
  v713 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v707, v708, v710, v711);
  BuffList_ActInfo___ctor(v713, 3, v709, v712, 0LL);
  if ( !v713 )
    goto LABEL_387;
  v714 = (System_String_o *)BuffList_ActInfo__setBaseValue(v713, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    90,
    v714,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v715);
  if ( !v706 )
    goto LABEL_387;
  v716 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 152;
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v708);
  if ( !v706 )
    goto LABEL_387;
  v719 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 153;
  v720 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v707, v708, v717, v718);
  BuffList_ActInfo___ctor(v720, 3, v716, v719, 0LL);
  if ( !v720 )
    goto LABEL_387;
  v721 = (System_String_o *)BuffList_ActInfo__setBaseValue(v720, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    91,
    v721,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v722);
  if ( !v706 )
    goto LABEL_387;
  v723 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 154;
  v724 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v729 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v725, v726, v727, v728);
  BuffList_ActInfo___ctor(v729, 3, v723, v724, 0LL);
  if ( !v729 )
    goto LABEL_387;
  v730 = (System_String_o *)BuffList_ActInfo__setBaseParam(v729, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    92,
    v730,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v731);
  if ( !v706 )
    goto LABEL_387;
  v732 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 155;
  v733 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v738 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v734, v735, v736, v737);
  BuffList_ActInfo___ctor(v738, 3, v732, v733, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    93,
    (System_String_o *)v738,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v739);
  if ( !v706 )
    goto LABEL_387;
  v740 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 156;
  v741 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v746 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v742, v743, v744, v745);
  BuffList_ActInfo___ctor(v746, 0, v740, v741, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    94,
    (System_String_o *)v746,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v747);
  if ( !v706 )
    goto LABEL_387;
  v748 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 157;
  v749 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v754 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v750, v751, v752, v753);
  BuffList_ActInfo___ctor(v754, 0, v748, v749, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    95,
    (System_String_o *)v754,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v755);
  if ( !v706 )
    goto LABEL_387;
  v756 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 158;
  v757 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v762 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v758, v759, v760, v761);
  BuffList_ActInfo___ctor(v762, 0, v756, v757, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    96,
    (System_String_o *)v762,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v763);
  if ( !v706 )
    goto LABEL_387;
  v764 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 159;
  v765 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v770 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v766, v767, v768, v769);
  BuffList_ActInfo___ctor(v770, 0, v764, v765, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    97,
    (System_String_o *)v770,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v771);
  if ( !v706 )
    goto LABEL_387;
  v772 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 160;
  v773 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v778 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v774, v775, v776, v777);
  BuffList_ActInfo___ctor(v778, 0, v772, v773, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    98,
    (System_String_o *)v778,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v779);
  if ( !v706 )
    goto LABEL_387;
  v780 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 161;
  v781 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v786 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v782, v783, v784, v785);
  BuffList_ActInfo___ctor(v786, 0, v780, v781, 0LL);
  if ( !v786 )
    goto LABEL_387;
  v787 = (System_String_o *)BuffList_ActInfo__setBaseParam(v786, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    99,
    v787,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v788);
  if ( !v706 )
    goto LABEL_387;
  v789 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 163;
  v790 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v795 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v791, v792, v793, v794);
  BuffList_ActInfo___ctor(v795, 0, v789, v790, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    100,
    (System_String_o *)v795,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v796);
  if ( !v706 )
    goto LABEL_387;
  v797 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 162;
  v798 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v803 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v799, v800, v801, v802);
  BuffList_ActInfo___ctor(v803, 3, v797, v798, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    101,
    (System_String_o *)v803,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v804);
  if ( !v706 )
    goto LABEL_387;
  v805 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 165;
  v806 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v811 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v807, v808, v809, v810);
  BuffList_ActInfo___ctor(v811, 0, v805, v806, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    102,
    (System_String_o *)v811,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v812);
  if ( !v706 )
    goto LABEL_387;
  v813 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 166;
  v814 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v819 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v815, v816, v817, v818);
  BuffList_ActInfo___ctor(v819, 0, v813, v814, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    103,
    (System_String_o *)v819,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v820);
  if ( !v706 )
    goto LABEL_387;
  v821 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 10002;
  v822 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v827 = (BuffList_ToFieldActInfo_o *)sub_B170CC(BuffList_ToFieldActInfo_TypeInfo, v823, v824, v825, v826);
  BuffList_ToFieldActInfo___ctor(v827, 0, v821, v822, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    105,
    (System_String_o *)v827,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v828);
  if ( !v706 )
    goto LABEL_387;
  v829 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 10003;
  v830 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v835 = (BuffList_ToFieldActInfo_o *)sub_B170CC(BuffList_ToFieldActInfo_TypeInfo, v831, v832, v833, v834);
  BuffList_ToFieldActInfo___ctor(v835, 0, v829, v830, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    112,
    (System_String_o *)v835,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v836);
  if ( !v706 )
    goto LABEL_387;
  v837 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 27;
  v838 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v843 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v839, v840, v841, v842);
  BuffList_ActInfo___ctor(v843, 3, v837, v838, 0LL);
  if ( !v843 )
    goto LABEL_387;
  v844 = (System_String_o *)BuffList_ActInfo__setBaseValue(v843, 1000, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    106,
    v844,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v845);
  if ( !v706 )
    goto LABEL_387;
  v846 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 167;
  v847 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v852 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v848, v849, v850, v851);
  BuffList_ActInfo___ctor(v852, 3, v846, v847, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    107,
    (System_String_o *)v852,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v853);
  if ( !v706 )
    goto LABEL_387;
  v854 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 168;
  v855 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v860 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v856, v857, v858, v859);
  BuffList_ActInfo___ctor(v860, 0, v854, v855, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    108,
    (System_String_o *)v860,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v861);
  if ( !v706 )
    goto LABEL_387;
  v862 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 169;
  v863 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v868 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v864, v865, v866, v867);
  BuffList_ActInfo___ctor(v868, 0, v862, v863, 0LL);
  if ( !v868 )
    goto LABEL_387;
  v869 = (System_String_o *)BuffList_ActInfo__setBaseParam(v868, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    109,
    v869,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v870);
  if ( !v706 )
    goto LABEL_387;
  v871 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 170;
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v708);
  if ( !v706 )
    goto LABEL_387;
  v874 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 171;
  v875 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v707, v708, v872, v873);
  BuffList_ActInfo___ctor(v875, 0, v871, v874, 0LL);
  if ( !v875 )
    goto LABEL_387;
  v876 = (System_String_o *)BuffList_ActInfo__setBaseParam(v875, 0, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    110,
    v876,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 2LL, v877);
  if ( !v706 )
    goto LABEL_387;
  v878 = v706->max_length;
  v879 = v706;
  if ( !v878 )
    goto LABEL_388;
  v706->m_Items[1] = 172;
  if ( v878 == 1 )
    goto LABEL_388;
  v706->m_Items[2] = 173;
  v880 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v885 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v881, v882, v883, v884);
  BuffList_ActInfo___ctor(v885, 0, v879, v880, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    111,
    (System_String_o *)v885,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v886);
  if ( !v706 )
    goto LABEL_387;
  v887 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 174;
  v888 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v893 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v889, v890, v891, v892);
  BuffList_ActInfo___ctor(v893, 3, v887, v888, 0LL);
  if ( !v893
    || (v894 = (System_String_o *)BuffList_ActInfo__setBaseParam(v893, 0, 0LL),
        System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
          v17,
          113,
          v894,
          (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__),
        (v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v895)) == 0LL) )
  {
LABEL_387:
    sub_B170D4();
  }
  v896 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 175;
  v897 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v902 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v898, v899, v900, v901);
  BuffList_ActInfo___ctor(v902, 0, v896, v897, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    114,
    (System_String_o *)v902,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v903);
  if ( !v706 )
    goto LABEL_387;
  v904 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 176;
  v905 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v910 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v906, v907, v908, v909);
  BuffList_ActInfo___ctor(v910, 0, v904, v905, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    115,
    (System_String_o *)v910,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v911);
  if ( !v706 )
    goto LABEL_387;
  v912 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 177;
  v913 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v918 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v914, v915, v916, v917);
  BuffList_ActInfo___ctor(v918, 0, v912, v913, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    116,
    (System_String_o *)v918,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v919);
  if ( !v706 )
    goto LABEL_387;
  v920 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 178;
  v921 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v926 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v922, v923, v924, v925);
  BuffList_ActInfo___ctor(v926, 0, v920, v921, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    117,
    (System_String_o *)v926,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v927);
  if ( !v706 )
    goto LABEL_387;
  v928 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 179;
  v929 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v934 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v930, v931, v932, v933);
  BuffList_ActInfo___ctor(v934, 0, v928, v929, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    118,
    (System_String_o *)v934,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v935);
  if ( !v706 )
    goto LABEL_387;
  v936 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 180;
  v937 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v942 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v938, v939, v940, v941);
  BuffList_ActInfo___ctor(v942, 0, v936, v937, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    119,
    (System_String_o *)v942,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v943);
  if ( !v706 )
    goto LABEL_387;
  v944 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 181;
  v945 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v950 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v946, v947, v948, v949);
  BuffList_ActInfo___ctor(v950, 0, v944, v945, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    120,
    (System_String_o *)v950,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v951);
  if ( !v706 )
    goto LABEL_387;
  v952 = v706;
  if ( !v706->max_length )
    goto LABEL_388;
  v706->m_Items[1] = 182;
  v953 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 0LL, v708);
  v958 = (BuffList_ActInfo_o *)sub_B170CC(BuffList_ActInfo_TypeInfo, v954, v955, v956, v957);
  BuffList_ActInfo___ctor(v958, 0, v952, v953, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v17,
    121,
    (System_String_o *)v958,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  static_fields = (BattleServantConfConponent_o *)BuffList_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v17;
  sub_B16F98(static_fields, (System_Int32_array **)v17, v960, v961, v962, v963, v964, v965);
  v706 = (BuffList_TYPE_array *)sub_B17014(BuffList_TYPE___TypeInfo, 2LL, v966);
  if ( !v706 )
    goto LABEL_387;
  v972 = v706->max_length;
  v707 = (System_Int32_array **)v706;
  if ( !v972 || (v706->m_Items[1] = 104, v972 == 1) )
  {
LABEL_388:
    sub_B17100(v706, v707, v708);
    sub_B170A0();
  }
  v706->m_Items[2] = 37;
  v973 = BuffList_TypeInfo->static_fields;
  v973->GutsList = (struct BuffList_TYPE_array *)v707;
  sub_B16F98((BattleServantConfConponent_o *)&v973->GutsList, v707, v708, v967, v968, v969, v970, v971);
  v975 = (System_Array_o *)sub_B17014(BuffList_ACTION___TypeInfo, 4LL, v974);
  v996.fields.value = Field__PrivateImplementationDetails__4EECD95FEC87B9ABE1EA9376D9C9CF1F7F1C01299268E427022C2F5192383D9E;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v975, v996, 0LL);
  v976 = BuffList_TypeInfo->static_fields;
  v976->CommandCodeFunctionActs = (struct BuffList_ACTION_array *)v975;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v976->CommandCodeFunctionActs,
    (System_Int32_array **)v975,
    v977,
    v978,
    v979,
    v980,
    v981,
    v982);
  v987 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_HashSet_BuffList_TYPE__TypeInfo,
                                                                                                 v983,
                                                                                                 v984,
                                                                                                 v985,
                                                                                                 v986);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v987,
    (const MethodInfo_21DA2F8 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE___ctor__);
  if ( !v987 )
    goto LABEL_387;
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v987,
    138,
    (const MethodInfo_21DB4D4 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v987,
    159,
    (const MethodInfo_21DB4D4 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v987,
    177,
    (const MethodInfo_21DB4D4 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v987,
    178,
    (const MethodInfo_21DB4D4 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  v988 = BuffList_TypeInfo->static_fields;
  v988->CommandCodeBuffHash = (struct System_Collections_Generic_HashSet_BuffList_TYPE__o *)v987;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v988->CommandCodeBuffHash,
    (System_Int32_array **)v987,
    v989,
    v990,
    v991,
    v992,
    v993,
    v994);
}


bool __fastcall BuffList__CheckAccumulation(int32_t type, const MethodInfo *method)
{
  if ( (byte_40FB4EB & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, method);
    byte_40FB4EB = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  return type == 97;
}


bool __fastcall BuffList__CheckGutsType(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  BuffList_c *v4; // x0
  struct BuffList_TYPE_array *GutsList; // x8
  int max_length; // w9
  unsigned int v7; // w10

  if ( (byte_40FB4ED & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, method);
    byte_40FB4ED = 1;
  }
  v4 = BuffList_TypeInfo;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v4 = BuffList_TypeInfo;
  }
  GutsList = v4->static_fields->GutsList;
  if ( !GutsList )
    sub_B170D4();
  max_length = GutsList->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
      sub_B17100(v4, method, v2);
      sub_B170A0();
    }
    if ( GutsList->m_Items[v7 + 1] == type )
      break;
    if ( (int)++v7 >= max_length )
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
  if ( (byte_40FB4EA & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, method);
    byte_40FB4EA = 1;
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
  __int64 v1; // x1

  if ( (byte_40FB4EF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8815/*"MST_BUFF_INDV_ADD_BUFF_ACTIVE"*/, v1);
    byte_40FB4EF = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_8815/*"MST_BUFF_INDV_ADD_BUFF_ACTIVE"*/, 0LL) == 1;
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
  _BOOL8 v3; // x0
  char v4; // w8
  unsigned int v5; // w9

  if ( type > 138 )
  {
    if ( type > 160 )
    {
      v2 = 1;
      if ( type == 165 || type == 168 )
        goto LABEL_16;
      if ( (unsigned int)(type - 177) < 6 )
      {
        v2 = 1;
LABEL_16:
        LOBYTE(v3) = v2;
        return v3;
      }
LABEL_15:
      v2 = 0;
      goto LABEL_16;
    }
    v4 = type + 108;
    if ( (unsigned int)(type - 148) >= 0xD )
      goto LABEL_15;
    v5 = 6147;
    goto LABEL_14;
  }
  if ( type <= 95 )
  {
    v4 = type - 76;
    if ( (unsigned int)(type - 76) >= 0x14 )
      goto LABEL_15;
    v5 = 550789;
LABEL_14:
    LODWORD(v3) = (v5 >> v4) & 1;
    return v3;
  }
  if ( (unsigned int)(type - 97) >= 0x2A )
    goto LABEL_15;
  return (0x30000000001uLL >> ((unsigned __int8)type - 97)) & 1;
}


bool __fastcall BuffList__IsIntervalPossibleBuff(int32_t type, const MethodInfo *method)
{
  _BOOL8 v2; // x0
  char v3; // w8
  unsigned int v4; // w9
  char v5; // w8
  unsigned __int64 v6; // x9

  if ( type <= 95 )
  {
    if ( type > 61 )
    {
      v3 = type - 76;
      if ( (unsigned int)(type - 76) >= 0x14 )
        goto LABEL_17;
      v4 = 524162;
LABEL_16:
      LODWORD(v2) = (v4 >> v3) & 1;
      return v2;
    }
    v5 = type - 2;
    if ( (unsigned int)(type - 2) >= 0x3C )
      goto LABEL_17;
    v6 = 0x7FFFF343FFFFFFELL;
    return (v6 >> v5) & 1;
  }
  if ( type <= 147 )
  {
    v5 = type - 104;
    if ( (unsigned int)(type - 104) >= 0x2C )
      goto LABEL_17;
    v6 = 0x797F3FFC6LL;
    return (v6 >> v5) & 1;
  }
  if ( type <= 176 )
  {
    v3 = type + 100;
    if ( (unsigned int)(type - 156) >= 0x15 )
      goto LABEL_17;
    v4 = 793438;
    goto LABEL_16;
  }
  if ( (type | 2) != 10003 )
  {
LABEL_17:
    LOBYTE(v2) = 1;
    return v2;
  }
  LOBYTE(v2) = 0;
  return v2;
}


void __fastcall BuffList__SetBattleData(BattleData_o *setData, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BuffList_c *v8; // x0
  System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__o *ActionList; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  Il2CppObject *currentValue; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FB4EE & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Values__, v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__Dispose__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__MoveNext__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__get_Current__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_BuffList_ACTION__BuffList_ActInfo__GetEnumerator__,
      v7);
    byte_40FB4EE = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v8 = BuffList_TypeInfo;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v8 = BuffList_TypeInfo;
  }
  ActionList = v8->static_fields->ActionList;
  if ( !ActionList
    || (Values = System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo___get_Values(
                   ActionList,
                   (const MethodInfo_2DFF9F8 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Values__)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_BuffList_ACTION__BuffList_ActInfo___GetEnumerator(
    &v18,
    Values,
    (const MethodInfo_227F948 *)Method_System_Collections_Generic_Dictionary_ValueCollection_BuffList_ACTION__BuffList_ActInfo__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo___MoveNext(
            &v18,
            (const MethodInfo_26B5228 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__MoveNext__) )
  {
    currentValue = v18.fields.currentValue;
    if ( !v18.fields.currentValue )
      sub_B170D4();
    v18.fields.currentValue[4].klass = (Il2CppClass *)setData;
    sub_B16F98(
      (BattleServantConfConponent_o *)&currentValue[4],
      (System_Int32_array **)setData,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo___Dispose(
    &v18,
    (const MethodInfo_26B5224 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__Dispose__);
}


BuffList_ActInfo_o *__fastcall BuffList__getActInfo(
        int32_t action,
        BattleServantData_o *opponentSvt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BuffList_c *v6; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *ActionList; // x0
  System_String_o *Item; // x0
  BuffList_ActInfo_o *v9; // x20
  void *monitor; // x0

  if ( (byte_40FB4E9 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, opponentSvt);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Item__, v5);
    byte_40FB4E9 = 1;
  }
  v6 = BuffList_TypeInfo;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v6 = BuffList_TypeInfo;
  }
  ActionList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v6->static_fields->ActionList;
  if ( !ActionList )
    goto LABEL_11;
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           ActionList,
           action,
           (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Item__);
  v9 = (BuffList_ActInfo_o *)Item;
  if ( Item )
  {
    monitor = Item[2].monitor;
    if ( monitor )
    {
      (*(void (__fastcall **)(void *, BattleServantData_o *, _QWORD))(*(_QWORD *)monitor + 376LL))(
        monitor,
        opponentSvt,
        *(_QWORD *)(*(_QWORD *)monitor + 384LL));
      return v9;
    }
LABEL_11:
    sub_B170D4();
  }
  return v9;
}


bool __fastcall BuffList__isSpHit(int32_t type, const MethodInfo *method)
{
  if ( (byte_40FB4EC & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, method);
    byte_40FB4EC = 1;
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
  struct BuffList_BaseInvokeCond_o *v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  this->fields.limit = 3;
  this->fields.baseParam = 1000;
  this->fields.isRec = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.limit = inLimit;
  this->fields.plusTypes = inPlus;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.plusTypes,
    (System_Int32_array **)inPlus,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.minusTypes = inMinus;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.minusTypes,
    (System_Int32_array **)inMinus,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (struct BuffList_BaseInvokeCond_o *)((__int64 (__fastcall *)(BuffList_ActInfo_o *, _QWORD, void *))this->klass->vtable._4_MakeInvokeCond.method)(
                                              this,
                                              0LL,
                                              this->klass[1]._1.image);
  this->fields._OpponentInvokeCond_k__BackingField = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._OpponentInvokeCond_k__BackingField,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


// local variable allocation has failed, the output may be wrong!
BuffList_BaseInvokeCond_o *__fastcall BuffList_ActInfo__MakeInvokeCond(
        BuffList_ActInfo_o *this,
        bool isSelfSide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BuffList_BaseInvokeCond_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_40F70A5 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_BaseInvokeCond_TypeInfo, isSelfSide);
    byte_40F70A5 = 1;
  }
  v6 = (BuffList_BaseInvokeCond_o *)sub_B170CC(BuffList_BaseInvokeCond_TypeInfo, isSelfSide, method, v3, v4);
  BuffList_BaseInvokeCond___ctor(v6, isSelfSide, v7);
  return v6;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OpponentInvokeCond_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._OpponentInvokeCond_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BuffList_BaseInvokeCond___ctor(
        BuffList_BaseInvokeCond_o *this,
        bool isSelfSide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
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
  struct System_String_o **v31; // x8
  struct System_String_o *v32; // x1

  if ( (byte_40F70A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int_____ctor__, isSelfSide);
    sub_B16FFC(&System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____TypeInfo, v7);
    sub_B16FFC(&StringLiteral_12610/*"Self"*/, v8);
    sub_B16FFC(&StringLiteral_10086/*"Opponent"*/, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40F70A7 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____TypeInfo,
                                                                           isSelfSide,
                                                                           method,
                                                                           v3,
                                                                           v4);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v11,
    (const MethodInfo_2DFF0A0 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int_____ctor__);
  this->fields.dicCacheSelfValue = (struct System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____o *)v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicCacheSelfValue,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.targetSideStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.targetSideStr, v18, v19, v20, v21, v22, v23, v24);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v31 = (struct System_String_o **)&StringLiteral_12610/*"Self"*/;
  if ( !isSelfSide )
    v31 = (struct System_String_o **)&StringLiteral_10086/*"Opponent"*/;
  if ( !this )
    sub_B170D4();
  v32 = *v31;
  this->fields.targetSideStr = *v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetSideStr,
    (System_Int32_array **)v32,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


bool __fastcall BuffList_BaseInvokeCond__CheckBuffTypeCond(
        BuffList_BaseInvokeCond_o *this,
        BattleBuffData_o *buffData,
        BuffEntity_o *buffEnt,
        System_Int32_array *condValues,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____o *dicCacheSelfValue; // x0
  __int64 v13; // x2
  BattleServantData_o *SvtData_k__BackingField; // x0
  struct System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____o *v15; // x23
  BattleBuffData_o *v16; // x0
  System_Collections_Generic_List_int__o *GrantBuffTypeArray; // x0
  struct System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____o *v18; // x0
  System_String_o *Item; // x0

  if ( (byte_40F70A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____ContainsKey__, buffData);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____get_Item__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____set_Item__, v10);
    sub_B16FFC(&int___TypeInfo, v11);
    byte_40F70A9 = 1;
  }
  dicCacheSelfValue = this->fields.dicCacheSelfValue;
  if ( !dicCacheSelfValue )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
          (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)dicCacheSelfValue,
          1,
          (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____ContainsKey__) )
  {
    SvtData_k__BackingField = this->fields._SvtData_k__BackingField;
    v15 = this->fields.dicCacheSelfValue;
    if ( SvtData_k__BackingField )
    {
      v16 = BattleServantData__get_BuffData(SvtData_k__BackingField, 0LL);
      if ( !v16 )
        goto LABEL_14;
      GrantBuffTypeArray = (System_Collections_Generic_List_int__o *)BattleBuffData__GetGrantBuffTypeArray(
                                                                       v16,
                                                                       1,
                                                                       1,
                                                                       0LL);
    }
    else
    {
      GrantBuffTypeArray = (System_Collections_Generic_List_int__o *)sub_B17014(int___TypeInfo, 0LL, v13);
    }
    if ( v15 )
    {
      System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____set_Item(
        (System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v15,
        1,
        GrantBuffTypeArray,
        (const MethodInfo_2DFFC2C *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____set_Item__);
      goto LABEL_11;
    }
LABEL_14:
    sub_B170D4();
  }
LABEL_11:
  v18 = this->fields.dicCacheSelfValue;
  if ( !v18 )
    goto LABEL_14;
  Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v18,
           1,
           (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____get_Item__);
  if ( !buffData )
    goto LABEL_14;
  return BattleBuffData__checkBuffTypeIndiviuality(buffData, (System_Int32_array *)Item, condValues, buffEnt, 0LL, 0LL);
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
  System_String_o *v14; // x25
  System_Int32_array *ScriptIntArray; // x3

  v13 = BuffList_BaseInvokeCond__get_BuffTypeCondKeyName(this, (const MethodInfo *)buffData);
  if ( !buffEnt )
    goto LABEL_6;
  v14 = v13;
  if ( BuffEntity__checkScript(buffEnt, v13, 0LL) )
  {
    ScriptIntArray = BuffEntity__GetScriptIntArray(buffEnt, v14, 0LL, 0x2Cu, 0LL);
    return ((__int64 (__fastcall *)(BuffList_BaseInvokeCond_o *, BattleBuffData_o *, BuffEntity_o *, System_Int32_array *, void *))this->klass->vtable._6_CheckBuffTypeCond.method)(
             this,
             buffData,
             buffEnt,
             ScriptIntArray,
             this->klass[1]._1.image);
  }
  if ( !buffData )
LABEL_6:
    sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_fields; // x20
  System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____o *monitor; // x0

  if ( (byte_40F70A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____Clear__, svtData);
    byte_40F70A8 = 1;
  }
  this->fields._SvtData_k__BackingField = svtData;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  sub_B16F98(p_fields, (System_Int32_array **)svtData, (System_String_array **)method, v3, v4, v5, v6, v7);
  monitor = (System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____o *)p_fields->monitor;
  if ( !monitor )
    sub_B170D4();
  System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int_____Clear(
    monitor,
    (const MethodInfo_2DFFE30 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____Clear__);
}


System_String_o *__fastcall BuffList_BaseInvokeCond__get_BuffTypeCondKeyName(
        BuffList_BaseInvokeCond_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F70A6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3925/*"Check{0}BuffTypes"*/, method);
    byte_40F70A6 = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_3925/*"Check{0}BuffTypes"*/, (Il2CppObject *)this->fields.targetSideStr, 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SvtData_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}