void __fastcall BuffList___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v14; // x19
  BuffList_TYPE_array *v15; // x0
  struct BuffList_TYPE_array *v16; // x1
  il2cpp_array_size_t max_length; // w8
  BuffList_TYPE_array *v18; // x20
  il2cpp_array_size_t v19; // w8
  BuffList_TYPE_array *v20; // x21
  BuffList_ActInfo_o *v21; // x22
  const MethodInfo *v22; // x4
  il2cpp_array_size_t v23; // w8
  BuffList_TYPE_array *v24; // x20
  il2cpp_array_size_t v25; // w8
  BuffList_TYPE_array *v26; // x21
  BuffList_ActInfo_o *v27; // x22
  const MethodInfo *v28; // x4
  BuffList_TYPE_array *v29; // x20
  BuffList_TYPE_array *v30; // x21
  BuffList_ActInfo_o *v31; // x22
  const MethodInfo *v32; // x4
  BuffList_TYPE_array *v33; // x20
  BuffList_TYPE_array *v34; // x21
  BuffList_ActInfo_o *v35; // x22
  const MethodInfo *v36; // x4
  BuffList_TYPE_array *v37; // x20
  BuffList_TYPE_array *v38; // x21
  BuffList_ActInfo_o *v39; // x22
  const MethodInfo *v40; // x4
  BuffList_TYPE_array *v41; // x20
  BuffList_TYPE_array *v42; // x21
  BuffList_ActInfo_o *v43; // x22
  const MethodInfo *v44; // x4
  BuffList_TYPE_array *v45; // x20
  BuffList_TYPE_array *v46; // x21
  BuffList_ActInfo_o *v47; // x22
  const MethodInfo *v48; // x4
  BuffList_TYPE_array *v49; // x20
  BuffList_TYPE_array *v50; // x21
  BuffList_ActInfo_o *v51; // x22
  const MethodInfo *v52; // x4
  BuffList_TYPE_array *v53; // x20
  BuffList_TYPE_array *v54; // x21
  BuffList_ActInfo_o *v55; // x22
  const MethodInfo *v56; // x4
  BuffList_TYPE_array *v57; // x20
  BuffList_TYPE_array *v58; // x21
  BuffList_ActInfo_o *v59; // x22
  const MethodInfo *v60; // x4
  BuffList_TYPE_array *v61; // x20
  BuffList_TYPE_array *v62; // x21
  BuffList_ActInfo_o *v63; // x22
  const MethodInfo *v64; // x4
  BuffList_TYPE_array *v65; // x20
  BuffList_TYPE_array *v66; // x21
  BuffList_ActInfo_o *v67; // x22
  const MethodInfo *v68; // x4
  BuffList_TYPE_array *v69; // x20
  BuffList_TYPE_array *v70; // x21
  BuffList_ActInfo_o *v71; // x22
  const MethodInfo *v72; // x4
  BuffList_TYPE_array *v73; // x20
  BuffList_TYPE_array *v74; // x21
  BuffList_ActInfo_o *v75; // x22
  const MethodInfo *v76; // x4
  BuffList_TYPE_array *v77; // x20
  BuffList_TYPE_array *v78; // x22
  BuffList_ActInfo_o *v79; // x21
  const MethodInfo *v80; // x4
  BuffList_TYPE_array *v81; // x20
  BuffList_TYPE_array *v82; // x21
  BuffList_ActInfo_o *v83; // x22
  const MethodInfo *v84; // x4
  BuffList_TYPE_array *v85; // x20
  BuffList_TYPE_array *v86; // x21
  BuffList_ActInfo_o *v87; // x22
  const MethodInfo *v88; // x4
  BuffList_TYPE_array *v89; // x20
  BuffList_TYPE_array *v90; // x21
  BuffList_ActInfo_o *v91; // x22
  const MethodInfo *v92; // x4
  BuffList_TYPE_array *v93; // x20
  BuffList_TYPE_array *v94; // x21
  BuffList_ActInfo_o *v95; // x22
  const MethodInfo *v96; // x4
  BuffList_TYPE_array *v97; // x20
  BuffList_TYPE_array *v98; // x21
  BuffList_ActInfo_o *v99; // x22
  const MethodInfo *v100; // x4
  BuffList_TYPE_array *v101; // x20
  BuffList_TYPE_array *v102; // x21
  BuffList_ActInfo_o *v103; // x22
  const MethodInfo *v104; // x4
  BuffList_TYPE_array *v105; // x20
  BuffList_TYPE_array *v106; // x21
  BuffList_ActInfo_o *v107; // x22
  const MethodInfo *v108; // x4
  BuffList_TYPE_array *v109; // x20
  BuffList_TYPE_array *v110; // x21
  BuffList_ActInfo_o *v111; // x22
  const MethodInfo *v112; // x4
  il2cpp_array_size_t v113; // w8
  BuffList_TYPE_array *v114; // x20
  il2cpp_array_size_t v115; // w8
  BuffList_TYPE_array *v116; // x21
  BuffList_ActInfo_o *v117; // x22
  const MethodInfo *v118; // x4
  BuffList_TYPE_array *v119; // x20
  BuffList_TYPE_array *v120; // x21
  BuffList_ActInfo_o *v121; // x22
  const MethodInfo *v122; // x4
  BuffList_TYPE_array *v123; // x20
  BuffList_TYPE_array *v124; // x21
  BuffList_ActInfo_o *v125; // x22
  const MethodInfo *v126; // x4
  BuffList_TYPE_array *v127; // x20
  BuffList_TYPE_array *v128; // x21
  BuffList_ActInfo_o *v129; // x22
  const MethodInfo *v130; // x4
  il2cpp_array_size_t v131; // w8
  BuffList_TYPE_array *v132; // x20
  il2cpp_array_size_t v133; // w8
  BuffList_TYPE_array *v134; // x21
  BuffList_ActInfo_o *v135; // x22
  const MethodInfo *v136; // x4
  BuffList_TYPE_array *v137; // x20
  BuffList_TYPE_array *v138; // x21
  BuffList_ActInfo_o *v139; // x22
  const MethodInfo *v140; // x4
  BuffList_TYPE_array *v141; // x20
  BuffList_TYPE_array *v142; // x21
  BuffList_ActInfo_o *v143; // x22
  const MethodInfo *v144; // x4
  BuffList_TYPE_array *v145; // x20
  BuffList_TYPE_array *v146; // x21
  BuffList_ActInfo_o *v147; // x22
  const MethodInfo *v148; // x4
  BuffList_TYPE_array *v149; // x20
  BuffList_TYPE_array *v150; // x22
  BuffList_ActInfo_o *v151; // x21
  const MethodInfo *v152; // x4
  BuffList_TYPE_array *v153; // x20
  BuffList_TYPE_array *v154; // x22
  BuffList_ActInfo_o *v155; // x21
  const MethodInfo *v156; // x4
  BuffList_TYPE_array *v157; // x20
  BuffList_TYPE_array *v158; // x22
  BuffList_ActInfo_o *v159; // x21
  const MethodInfo *v160; // x4
  BuffList_TYPE_array *v161; // x20
  BuffList_TYPE_array *v162; // x22
  BuffList_ActInfo_o *v163; // x21
  const MethodInfo *v164; // x4
  BuffList_TYPE_array *v165; // x20
  BuffList_TYPE_array *v166; // x21
  BuffList_ActInfo_o *v167; // x22
  const MethodInfo *v168; // x4
  BuffList_TYPE_array *v169; // x20
  BuffList_TYPE_array *v170; // x21
  BuffList_ActInfo_o *v171; // x22
  const MethodInfo *v172; // x4
  BuffList_TYPE_array *v173; // x20
  BuffList_TYPE_array *v174; // x21
  BuffList_ActInfo_o *v175; // x22
  const MethodInfo *v176; // x4
  BuffList_TYPE_array *v177; // x20
  BuffList_TYPE_array *v178; // x21
  BuffList_ActInfo_o *v179; // x22
  const MethodInfo *v180; // x4
  BuffList_TYPE_array *v181; // x20
  BuffList_TYPE_array *v182; // x21
  BuffList_ActInfo_o *v183; // x22
  const MethodInfo *v184; // x4
  BuffList_TYPE_array *v185; // x20
  BuffList_TYPE_array *v186; // x21
  BuffList_ActInfo_o *v187; // x22
  const MethodInfo *v188; // x4
  BuffList_TYPE_array *v189; // x20
  BuffList_TYPE_array *v190; // x21
  BuffList_ActInfo_o *v191; // x22
  const MethodInfo *v192; // x4
  BuffList_TYPE_array *v193; // x20
  BuffList_TYPE_array *v194; // x21
  BuffList_ActInfo_o *v195; // x22
  const MethodInfo *v196; // x4
  BuffList_TYPE_array *v197; // x20
  BuffList_TYPE_array *v198; // x21
  BuffList_ActInfo_o *v199; // x22
  const MethodInfo *v200; // x4
  BuffList_TYPE_array *v201; // x20
  BuffList_TYPE_array *v202; // x21
  BuffList_ActInfo_o *v203; // x22
  const MethodInfo *v204; // x4
  BuffList_TYPE_array *v205; // x20
  BuffList_TYPE_array *v206; // x21
  BuffList_ActInfo_o *v207; // x22
  const MethodInfo *v208; // x4
  BuffList_TYPE_array *v209; // x20
  BuffList_TYPE_array *v210; // x21
  BuffList_ActInfo_o *v211; // x22
  const MethodInfo *v212; // x4
  BuffList_TYPE_array *v213; // x20
  BuffList_TYPE_array *v214; // x21
  BuffList_ActInfo_o *v215; // x22
  const MethodInfo *v216; // x4
  BuffList_TYPE_array *v217; // x20
  BuffList_TYPE_array *v218; // x21
  BuffList_ActInfo_o *v219; // x22
  const MethodInfo *v220; // x4
  BuffList_TYPE_array *v221; // x20
  BuffList_TYPE_array *v222; // x21
  BuffList_ActInfo_o *v223; // x22
  const MethodInfo *v224; // x4
  BuffList_TYPE_array *v225; // x20
  BuffList_TYPE_array *v226; // x22
  BuffList_ActInfo_o *v227; // x21
  const MethodInfo *v228; // x4
  BuffList_TYPE_array *v229; // x20
  BuffList_TYPE_array *v230; // x22
  BuffList_ActInfo_o *v231; // x21
  const MethodInfo *v232; // x4
  BuffList_TYPE_array *v233; // x20
  BuffList_TYPE_array *v234; // x22
  BuffList_ActInfo_o *v235; // x21
  const MethodInfo *v236; // x4
  BuffList_TYPE_array *v237; // x20
  BuffList_TYPE_array *v238; // x21
  BuffList_ActInfo_o *v239; // x22
  const MethodInfo *v240; // x4
  BuffList_TYPE_array *v241; // x20
  BuffList_TYPE_array *v242; // x21
  BuffList_ActInfo_o *v243; // x22
  const MethodInfo *v244; // x4
  BuffList_TYPE_array *v245; // x20
  BuffList_TYPE_array *v246; // x21
  BuffList_ActInfo_o *v247; // x22
  const MethodInfo *v248; // x4
  BuffList_TYPE_array *v249; // x20
  BuffList_TYPE_array *v250; // x21
  BuffList_ActInfo_o *v251; // x22
  const MethodInfo *v252; // x4
  BuffList_TYPE_array *v253; // x20
  BuffList_TYPE_array *v254; // x21
  BuffList_ActInfo_o *v255; // x22
  const MethodInfo *v256; // x4
  BuffList_TYPE_array *v257; // x20
  BuffList_TYPE_array *v258; // x21
  BuffList_ActInfo_o *v259; // x22
  const MethodInfo *v260; // x4
  BuffList_TYPE_array *v261; // x20
  BuffList_TYPE_array *v262; // x21
  BuffList_ActInfo_o *v263; // x22
  const MethodInfo *v264; // x4
  BuffList_TYPE_array *v265; // x20
  BuffList_TYPE_array *v266; // x21
  BuffList_ActInfo_o *v267; // x22
  const MethodInfo *v268; // x4
  BuffList_TYPE_array *v269; // x20
  BuffList_TYPE_array *v270; // x21
  BuffList_ActInfo_o *v271; // x22
  const MethodInfo *v272; // x4
  BuffList_TYPE_array *v273; // x20
  BuffList_TYPE_array *v274; // x21
  BuffList_ActInfo_o *v275; // x22
  const MethodInfo *v276; // x4
  BuffList_TYPE_array *v277; // x20
  BuffList_TYPE_array *v278; // x22
  BuffList_ActInfo_o *v279; // x21
  const MethodInfo *v280; // x4
  BuffList_TYPE_array *v281; // x20
  BuffList_TYPE_array *v282; // x21
  BuffList_ActInfo_o *v283; // x22
  const MethodInfo *v284; // x4
  BuffList_TYPE_array *v285; // x20
  BuffList_TYPE_array *v286; // x21
  BuffList_ActInfo_o *v287; // x22
  const MethodInfo *v288; // x4
  BuffList_TYPE_array *v289; // x20
  BuffList_TYPE_array *v290; // x21
  BuffList_ActInfo_o *v291; // x22
  const MethodInfo *v292; // x4
  BuffList_TYPE_array *v293; // x20
  BuffList_TYPE_array *v294; // x21
  BuffList_ActInfo_o *v295; // x22
  const MethodInfo *v296; // x4
  BuffList_TYPE_array *v297; // x20
  BuffList_TYPE_array *v298; // x21
  BuffList_ActInfo_o *v299; // x22
  const MethodInfo *v300; // x4
  BuffList_TYPE_array *v301; // x20
  BuffList_TYPE_array *v302; // x21
  BuffList_ActInfo_o *v303; // x22
  const MethodInfo *v304; // x4
  BuffList_TYPE_array *v305; // x20
  BuffList_TYPE_array *v306; // x21
  BuffList_ActInfo_o *v307; // x22
  const MethodInfo *v308; // x4
  BuffList_TYPE_array *v309; // x20
  BuffList_TYPE_array *v310; // x21
  BuffList_ActInfo_o *v311; // x22
  const MethodInfo *v312; // x4
  BuffList_TYPE_array *v313; // x20
  BuffList_TYPE_array *v314; // x21
  BuffList_ActInfo_o *v315; // x22
  const MethodInfo *v316; // x4
  BuffList_TYPE_array *v317; // x20
  BuffList_TYPE_array *v318; // x21
  BuffList_ActInfo_o *v319; // x22
  const MethodInfo *v320; // x4
  BuffList_TYPE_array *v321; // x20
  BuffList_TYPE_array *v322; // x21
  BuffList_ActInfo_o *v323; // x22
  const MethodInfo *v324; // x4
  BuffList_TYPE_array *v325; // x20
  BuffList_TYPE_array *v326; // x21
  BuffList_ActInfo_o *v327; // x22
  const MethodInfo *v328; // x4
  BuffList_TYPE_array *v329; // x20
  BuffList_TYPE_array *v330; // x21
  BuffList_ActInfo_o *v331; // x22
  const MethodInfo *v332; // x4
  BuffList_TYPE_array *v333; // x20
  BuffList_TYPE_array *v334; // x21
  BuffList_ActInfo_o *v335; // x22
  const MethodInfo *v336; // x4
  BuffList_TYPE_array *v337; // x20
  BuffList_TYPE_array *v338; // x21
  BuffList_ActInfo_o *v339; // x22
  const MethodInfo *v340; // x4
  BuffList_TYPE_array *v341; // x20
  BuffList_TYPE_array *v342; // x21
  BuffList_ActInfo_o *v343; // x22
  const MethodInfo *v344; // x4
  BuffList_TYPE_array *v345; // x20
  BuffList_TYPE_array *v346; // x21
  BuffList_ActInfo_o *v347; // x22
  const MethodInfo *v348; // x4
  BuffList_TYPE_array *v349; // x20
  BuffList_TYPE_array *v350; // x22
  BuffList_ActInfo_o *v351; // x21
  const MethodInfo *v352; // x4
  BuffList_TYPE_array *v353; // x20
  BuffList_TYPE_array *v354; // x22
  BuffList_ActInfo_o *v355; // x21
  const MethodInfo *v356; // x4
  BuffList_TYPE_array *v357; // x20
  BuffList_TYPE_array *v358; // x21
  BuffList_ActInfo_o *v359; // x22
  const MethodInfo *v360; // x4
  BuffList_TYPE_array *v361; // x20
  BuffList_TYPE_array *v362; // x21
  BuffList_ActInfo_o *v363; // x22
  const MethodInfo *v364; // x4
  BuffList_TYPE_array *v365; // x20
  BuffList_TYPE_array *v366; // x21
  BuffList_ActInfo_o *v367; // x22
  const MethodInfo *v368; // x4
  BuffList_TYPE_array *v369; // x20
  BuffList_TYPE_array *v370; // x21
  BuffList_ActInfo_o *v371; // x22
  const MethodInfo *v372; // x4
  BuffList_TYPE_array *v373; // x20
  BuffList_TYPE_array *v374; // x21
  BuffList_ActInfo_o *v375; // x22
  const MethodInfo *v376; // x4
  BuffList_TYPE_array *v377; // x20
  BuffList_TYPE_array *v378; // x21
  BuffList_ActInfo_o *v379; // x22
  const MethodInfo *v380; // x4
  System_Array_o *v381; // x0
  BuffList_TYPE_array *v382; // x21
  BuffList_TYPE_array *v383; // x22
  BuffList_ActInfo_o *v384; // x20
  const MethodInfo *v385; // x4
  BuffList_TYPE_array *v386; // x20
  BuffList_TYPE_array *v387; // x21
  BuffList_ActInfo_o *v388; // x22
  const MethodInfo *v389; // x4
  BuffList_TYPE_array *v390; // x20
  BuffList_TYPE_array *v391; // x21
  BuffList_ActInfo_o *v392; // x22
  const MethodInfo *v393; // x4
  BuffList_TYPE_array *v394; // x20
  BuffList_TYPE_array *v395; // x21
  BuffList_ActInfo_o *v396; // x22
  const MethodInfo *v397; // x4
  BuffList_TYPE_array *v398; // x20
  BuffList_TYPE_array *v399; // x21
  BuffList_ActInfo_o *v400; // x22
  const MethodInfo *v401; // x4
  BuffList_TYPE_array *v402; // x20
  BuffList_TYPE_array *v403; // x22
  BuffList_ActInfo_o *v404; // x21
  const MethodInfo *v405; // x4
  BuffList_TYPE_array *v406; // x20
  BuffList_TYPE_array *v407; // x21
  BuffList_ActInfo_o *v408; // x22
  const MethodInfo *v409; // x4
  BuffList_TYPE_array *v410; // x20
  BuffList_TYPE_array *v411; // x21
  BuffList_ActInfo_o *v412; // x22
  const MethodInfo *v413; // x4
  BuffList_TYPE_array *v414; // x20
  BuffList_TYPE_array *v415; // x21
  BuffList_ActInfo_o *v416; // x22
  const MethodInfo *v417; // x4
  BuffList_TYPE_array *v418; // x20
  BuffList_TYPE_array *v419; // x21
  BuffList_ActInfo_o *v420; // x22
  const MethodInfo *v421; // x4
  BuffList_TYPE_array *v422; // x20
  BuffList_TYPE_array *v423; // x21
  BuffList_ActInfo_o *v424; // x22
  const MethodInfo *v425; // x4
  BuffList_TYPE_array *v426; // x20
  BuffList_TYPE_array *v427; // x21
  BuffList_ActInfo_o *v428; // x22
  const MethodInfo *v429; // x4
  BuffList_TYPE_array *v430; // x20
  BuffList_TYPE_array *v431; // x22
  BuffList_ActInfo_o *v432; // x21
  const MethodInfo *v433; // x4
  BuffList_TYPE_array *v434; // x20
  BuffList_TYPE_array *v435; // x21
  BuffList_ActInfo_o *v436; // x22
  const MethodInfo *v437; // x4
  BuffList_TYPE_array *v438; // x20
  BuffList_TYPE_array *v439; // x21
  BuffList_ActInfo_o *v440; // x22
  const MethodInfo *v441; // x4
  BuffList_TYPE_array *v442; // x20
  BuffList_TYPE_array *v443; // x21
  BuffList_ActInfo_o *v444; // x22
  const MethodInfo *v445; // x4
  BuffList_TYPE_array *v446; // x20
  BuffList_TYPE_array *v447; // x21
  BuffList_ActInfo_o *v448; // x22
  const MethodInfo *v449; // x4
  BuffList_TYPE_array *v450; // x20
  BuffList_TYPE_array *v451; // x21
  BuffList_ActInfo_o *v452; // x22
  const MethodInfo *v453; // x4
  BuffList_TYPE_array *v454; // x20
  BuffList_TYPE_array *v455; // x21
  BuffList_ActInfo_o *v456; // x22
  const MethodInfo *v457; // x4
  BuffList_TYPE_array *v458; // x20
  BuffList_TYPE_array *v459; // x22
  BuffList_ActInfo_o *v460; // x21
  const MethodInfo *v461; // x4
  BuffList_TYPE_array *v462; // x20
  BuffList_TYPE_array *v463; // x21
  BuffList_ActInfo_o *v464; // x22
  const MethodInfo *v465; // x4
  BuffList_TYPE_array *v466; // x20
  BuffList_TYPE_array *v467; // x21
  BuffList_ActInfo_o *v468; // x22
  const MethodInfo *v469; // x4
  BuffList_TYPE_array *v470; // x20
  BuffList_TYPE_array *v471; // x22
  BuffList_ActInfo_o *v472; // x21
  const MethodInfo *v473; // x4
  BuffList_TYPE_array *v474; // x20
  BuffList_TYPE_array *v475; // x21
  BuffList_ActInfo_o *v476; // x22
  const MethodInfo *v477; // x4
  il2cpp_array_size_t v478; // w8
  BuffList_TYPE_array *v479; // x20
  BuffList_TYPE_array *v480; // x21
  BuffList_ActInfo_o *v481; // x22
  const MethodInfo *v482; // x4
  BuffList_TYPE_array *v483; // x20
  BuffList_TYPE_array *v484; // x22
  BuffList_ActInfo_o *v485; // x21
  const MethodInfo *v486; // x4
  BuffList_TYPE_array *v487; // x20
  BuffList_TYPE_array *v488; // x21
  BuffList_ActInfo_o *v489; // x22
  const MethodInfo *v490; // x4
  BuffList_TYPE_array *v491; // x20
  BuffList_TYPE_array *v492; // x21
  BuffList_ActInfo_o *v493; // x22
  const MethodInfo *v494; // x4
  BuffList_TYPE_array *v495; // x20
  BuffList_TYPE_array *v496; // x21
  BuffList_ActInfo_o *v497; // x22
  const MethodInfo *v498; // x4
  BuffList_TYPE_array *v499; // x20
  BuffList_TYPE_array *v500; // x21
  BuffList_ActInfo_o *v501; // x22
  const MethodInfo *v502; // x4
  BuffList_TYPE_array *v503; // x20
  BuffList_TYPE_array *v504; // x21
  BuffList_ActInfo_o *v505; // x22
  const MethodInfo *v506; // x4
  BuffList_TYPE_array *v507; // x20
  BuffList_TYPE_array *v508; // x21
  BuffList_ActInfo_o *v509; // x22
  const MethodInfo *v510; // x4
  BuffList_TYPE_array *v511; // x20
  BuffList_TYPE_array *v512; // x21
  BuffList_ActInfo_o *v513; // x22
  const MethodInfo *v514; // x4
  BuffList_TYPE_array *v515; // x20
  BuffList_TYPE_array *v516; // x21
  BuffList_ActInfo_o *v517; // x22
  const MethodInfo *v518; // x4
  BuffList_TYPE_array *v519; // x20
  BuffList_TYPE_array *v520; // x21
  BuffList_ActInfo_o *v521; // x22
  const MethodInfo *v522; // x4
  BuffList_TYPE_array *v523; // x20
  BuffList_TYPE_array *v524; // x21
  BuffList_ActInfo_o *v525; // x22
  const MethodInfo *v526; // x4
  BuffList_TYPE_array *v527; // x20
  BuffList_TYPE_array *v528; // x21
  BuffList_ActInfo_o *v529; // x22
  const MethodInfo *v530; // x4
  BuffList_TYPE_array *v531; // x20
  BuffList_TYPE_array *v532; // x21
  BuffList_ActInfo_o *v533; // x22
  const MethodInfo *v534; // x4
  BuffList_TYPE_array *v535; // x20
  BuffList_TYPE_array *v536; // x21
  BuffList_ActInfo_o *v537; // x22
  const MethodInfo *v538; // x4
  BuffList_TYPE_array *v539; // x20
  BuffList_TYPE_array *v540; // x21
  BuffList_ActInfo_o *v541; // x22
  const MethodInfo *v542; // x4
  BuffList_TYPE_array *v543; // x20
  BuffList_TYPE_array *v544; // x21
  BuffList_ActInfo_o *v545; // x22
  const MethodInfo *v546; // x4
  BuffList_TYPE_array *v547; // x20
  BuffList_TYPE_array *v548; // x21
  BuffList_ActInfo_o *v549; // x22
  const MethodInfo *v550; // x4
  il2cpp_array_size_t v551; // w8
  BuffList_TYPE_array *v552; // x20
  BuffList_TYPE_array *v553; // x21
  BuffList_ActInfo_o *v554; // x22
  const MethodInfo *v555; // x4
  BuffList_TYPE_array *v556; // x20
  BuffList_TYPE_array *v557; // x21
  BuffList_ActInfo_o *v558; // x22
  const MethodInfo *v559; // x4
  BuffList_TYPE_array *v560; // x20
  BuffList_TYPE_array *v561; // x21
  BuffList_ActInfo_o *v562; // x22
  const MethodInfo *v563; // x4
  BuffList_TYPE_array *v564; // x20
  BuffList_TYPE_array *v565; // x21
  BuffList_ActInfo_o *v566; // x22
  const MethodInfo *v567; // x4
  BuffList_TYPE_array *v568; // x20
  BuffList_TYPE_array *v569; // x21
  BuffList_ActInfo_o *v570; // x22
  const MethodInfo *v571; // x4
  BuffList_TYPE_array *v572; // x20
  BuffList_TYPE_array *v573; // x21
  BuffList_ActInfo_o *v574; // x22
  const MethodInfo *v575; // x4
  BuffList_TYPE_array *v576; // x20
  BuffList_TYPE_array *v577; // x21
  BuffList_ActInfo_o *v578; // x22
  const MethodInfo *v579; // x4
  BuffList_TYPE_array *v580; // x20
  BuffList_TYPE_array *v581; // x21
  BuffList_ActInfo_o *v582; // x22
  const MethodInfo *v583; // x4
  BuffList_TYPE_array *v584; // x20
  BuffList_TYPE_array *v585; // x21
  BuffList_ActInfo_o *v586; // x22
  const MethodInfo *v587; // x4
  BuffList_TYPE_array *v588; // x20
  BuffList_TYPE_array *v589; // x21
  BuffList_ActInfo_o *v590; // x22
  const MethodInfo *v591; // x4
  BuffList_TYPE_array *v592; // x20
  BuffList_TYPE_array *v593; // x21
  BuffList_ActInfo_o *v594; // x22
  const MethodInfo *v595; // x4
  int32_t v596; // w2
  int32_t v597; // w3
  int32_t v598; // w2
  int32_t v599; // w3
  il2cpp_array_size_t v600; // w8
  struct BuffList_StaticFields *static_fields; // x0
  System_Array_o *v602; // x0
  System_Array_o *v603; // x19
  struct BuffList_StaticFields *v604; // x0
  int32_t v605; // w2
  int32_t v606; // w3
  System_Collections_Generic_HashSet_T__o *v607; // x19
  struct BuffList_StaticFields *v608; // x0
  int32_t v609; // w2
  int32_t v610; // w3
  System_RuntimeFieldHandle_o v611; // 0:w1.4
  System_RuntimeFieldHandle_o v612; // 0:w1.4

  if ( (byte_4A1E9DC & 1) == 0 )
  {
    sub_1B715CC(&BuffList_ACTION___TypeInfo, v1);
    sub_1B715CC(&BuffList_ActInfo_TypeInfo, v2);
    sub_1B715CC(&BuffList_TypeInfo, v3);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo___ctor__, v5);
    sub_1B715CC(&System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__TypeInfo, v6);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_BuffList_TYPE___ctor__, v8);
    sub_1B715CC(&System_Collections_Generic_HashSet_BuffList_TYPE__TypeInfo, v9);
    sub_1B715CC(&BuffList_TYPE___TypeInfo, v10);
    sub_1B715CC(&BuffList_ToFieldActInfo_TypeInfo, v11);
    sub_1B715CC(
      &Field__PrivateImplementationDetails__4EECD95FEC87B9ABE1EA9376D9C9CF1F7F1C01299268E427022C2F5192383D9E,
      v12);
    sub_1B715CC(
      &Field__PrivateImplementationDetails__F74CB50F9D18C1E2A044410ED05D3C7285B0A0EF1A7321D9BD37EE90BF1D943E,
      v13);
    byte_4A1E9DC = 1;
  }
  v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B71818(System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v14,
    (const MethodInfo_31776B4 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo___ctor__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_429;
  max_length = v15->max_length;
  v18 = v15;
  if ( !max_length )
    goto LABEL_430;
  v15->m_Items[1] = 1;
  if ( max_length == 1 )
    goto LABEL_430;
  v15->m_Items[2] = 52;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_429;
  v19 = v15->max_length;
  v20 = v15;
  if ( !v19 )
    goto LABEL_430;
  v15->m_Items[1] = 66;
  if ( v19 == 1 )
    goto LABEL_430;
  v15->m_Items[2] = 60;
  v21 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v21, 3, v18, v20, v22);
  if ( !v14 )
    goto LABEL_429;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    1,
    (Il2CppObject *)v21,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_429;
  v23 = v15->max_length;
  v24 = v15;
  if ( !v23 )
    goto LABEL_430;
  v15->m_Items[1] = 105;
  if ( v23 == 1 )
    goto LABEL_430;
  v15->m_Items[2] = 128;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_429;
  v25 = v15->max_length;
  v26 = v15;
  if ( !v25 )
    goto LABEL_430;
  v15->m_Items[1] = 106;
  if ( v25 == 1 )
    goto LABEL_430;
  v15->m_Items[2] = 129;
  v27 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v27, 1, v24, v26, v28);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    2,
    (Il2CppObject *)v27,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v29 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 9;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v30 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 10;
  v31 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v31, 3, v29, v30, v32);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    3,
    (Il2CppObject *)v31,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v33 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 42;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v34 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 43;
  v35 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v35, 2, v33, v34, v36);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    4,
    (Il2CppObject *)v35,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v37 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v38 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 43;
  v39 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v39, 2, v37, v38, v40);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    5,
    (Il2CppObject *)v39,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v41 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 91;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v42 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 92;
  v43 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v43, 3, v41, v42, v44);
  if ( !v43 )
    goto LABEL_429;
  v43->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    6,
    (Il2CppObject *)v43,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v45 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 11;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v46 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 12;
  v47 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v47, 1, v45, v46, v48);
  if ( !v47 )
    goto LABEL_429;
  v47->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    7,
    (Il2CppObject *)v47,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v49 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 110;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v50 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 111;
  v51 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v51, 1, v49, v50, v52);
  if ( !v51 )
    goto LABEL_429;
  v51->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    8,
    (Il2CppObject *)v51,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v53 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 112;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v54 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 113;
  v55 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v55, 1, v53, v54, v56);
  if ( !v55 )
    goto LABEL_429;
  v55->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    9,
    (Il2CppObject *)v55,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v57 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 20;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v58 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 21;
  v59 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v59, 1, v57, v58, v60);
  if ( !v59 )
    goto LABEL_429;
  v59->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    10,
    (Il2CppObject *)v59,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v61 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 18;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v62 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 19;
  v63 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v63, 1, v61, v62, v64);
  if ( !v63 )
    goto LABEL_429;
  v63->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    11,
    (Il2CppObject *)v63,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v65 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 15;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v66 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 16;
  v67 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v67, 1, v65, v66, v68);
  if ( !v67 )
    goto LABEL_429;
  v67->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    12,
    (Il2CppObject *)v67,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v69 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 13;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v70 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 14;
  v71 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v71, 0, v69, v70, v72);
  if ( !v71 )
    goto LABEL_429;
  v71->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    13,
    (Il2CppObject *)v71,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v73 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 22;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v74 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 23;
  v75 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v75, 0, v73, v74, v76);
  if ( !v75 )
    goto LABEL_429;
  v75->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    14,
    (Il2CppObject *)v75,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v77 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 22;
  v78 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v79 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v79, 0, v77, v78, v80);
  if ( !v79 )
    goto LABEL_429;
  v79->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    133,
    (Il2CppObject *)v79,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v81 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 195;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v82 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 196;
  v83 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v83, 0, v81, v82, v84);
  if ( !v83 )
    goto LABEL_429;
  v83->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    134,
    (Il2CppObject *)v83,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v85 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 72;
  v86 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v87 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v87, 0, v85, v86, v88);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    15,
    (Il2CppObject *)v87,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v89 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 26;
  v90 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v91 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v91, 0, v89, v90, v92);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    16,
    (Il2CppObject *)v91,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v93 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 25;
  v94 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v95 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v95, 0, v93, v94, v96);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    17,
    (Il2CppObject *)v95,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v97 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 24;
  v98 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v99 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v99, 0, v97, v98, v100);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    18,
    (Il2CppObject *)v99,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v101 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 107;
  v102 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v103 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v103, 0, v101, v102, v104);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    19,
    (Il2CppObject *)v103,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v105 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 108;
  v106 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v107 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v107, 0, v105, v106, v108);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    20,
    (Il2CppObject *)v107,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v109 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 109;
  v110 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v111 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v111, 0, v109, v110, v112);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    21,
    (Il2CppObject *)v111,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_429;
  v113 = v15->max_length;
  v114 = v15;
  if ( !v113 )
    goto LABEL_430;
  v15->m_Items[1] = 51;
  if ( v113 == 1 )
    goto LABEL_430;
  v15->m_Items[2] = 52;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_429;
  v115 = v15->max_length;
  v116 = v15;
  if ( !v115 )
    goto LABEL_430;
  v15->m_Items[1] = 68;
  if ( v115 == 1 )
    goto LABEL_430;
  v15->m_Items[2] = 60;
  v117 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v117, 3, v114, v116, v118);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    22,
    (Il2CppObject *)v117,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v119 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 105;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v120 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 106;
  v121 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v121, 1, v119, v120, v122);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    23,
    (Il2CppObject *)v121,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v123 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 17;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v124 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 63;
  v125 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v125, 3, v123, v124, v126);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    24,
    (Il2CppObject *)v125,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v127 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 93;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v128 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 94;
  v129 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v129, 3, v127, v128, v130);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    25,
    (Il2CppObject *)v129,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_429;
  v131 = v15->max_length;
  v132 = v15;
  if ( !v131 )
    goto LABEL_430;
  v15->m_Items[1] = 50;
  if ( v131 == 1 )
    goto LABEL_430;
  v15->m_Items[2] = 52;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_429;
  v133 = v15->max_length;
  v134 = v15;
  if ( !v133 )
    goto LABEL_430;
  v15->m_Items[1] = 67;
  if ( v133 == 1 )
    goto LABEL_430;
  v15->m_Items[2] = 60;
  v135 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v135, 3, v132, v134, v136);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    26,
    (Il2CppObject *)v135,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v137 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 105;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v138 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 106;
  v139 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v139, 1, v137, v138, v140);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    27,
    (Il2CppObject *)v139,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v141 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 3;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v142 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 4;
  v143 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v143, 3, v141, v142, v144);
  if ( !v143 )
    goto LABEL_429;
  v143->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    28,
    (Il2CppObject *)v143,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v145 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 2;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v146 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 61;
  v147 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v147, 3, v145, v146, v148);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    29,
    (Il2CppObject *)v147,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v149 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 5;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v150 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 62;
  v151 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v151, 0, v149, v150, v152);
  if ( !v151 )
    goto LABEL_429;
  v151->fields.baseParam = 0;
  v151->fields.isRec = 0;
  v151->fields.plusAction = 71;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    30,
    (Il2CppObject *)v151,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v153 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 6;
  v154 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v155 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v155, 0, v153, v154, v156);
  if ( !v155 )
    goto LABEL_429;
  v155->fields.baseParam = 0;
  v155->fields.isRec = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    31,
    (Il2CppObject *)v155,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v157 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 7;
  v158 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v159 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v159, 0, v157, v158, v160);
  if ( !v159 )
    goto LABEL_429;
  v159->fields.baseParam = 0;
  v159->fields.isRec = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    32,
    (Il2CppObject *)v159,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v161 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 8;
  v162 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v163 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v163, 0, v161, v162, v164);
  if ( !v163 )
    goto LABEL_429;
  v163->fields.baseParam = 0;
  v163->fields.isRec = 0;
  v163->fields.plusAction = 72;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    33,
    (Il2CppObject *)v163,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v165 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 197;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v166 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 198;
  v167 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v167, 0, v165, v166, v168);
  if ( !v167 )
    goto LABEL_429;
  v167->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    135,
    (Il2CppObject *)v167,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v169 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 64;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v170 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 65;
  v171 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v171, 3, v169, v170, v172);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    34,
    (Il2CppObject *)v171,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v173 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 114;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v174 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 115;
  v175 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v175, 0, v173, v174, v176);
  if ( !v175 )
    goto LABEL_429;
  v175->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    35,
    (Il2CppObject *)v175,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v177 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 27;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v178 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 28;
  v179 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v179, 3, v177, v178, v180);
  if ( !v179 )
    goto LABEL_429;
  v179->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    36,
    (Il2CppObject *)v179,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v181 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 29;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v182 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 30;
  v183 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v183, 3, v181, v182, v184);
  if ( !v183 )
    goto LABEL_429;
  v183->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    37,
    (Il2CppObject *)v183,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v185 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 31;
  v186 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v187 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v187, 0, v185, v186, v188);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    38,
    (Il2CppObject *)v187,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v189 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 32;
  v190 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v191 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v191, 0, v189, v190, v192);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    39,
    (Il2CppObject *)v191,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v193 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 33;
  v194 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v195 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v195, 0, v193, v194, v196);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    40,
    (Il2CppObject *)v195,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v197 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 34;
  v198 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v199 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v199, 0, v197, v198, v200);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    41,
    (Il2CppObject *)v199,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v201 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 35;
  v202 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v203 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v203, 0, v201, v202, v204);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    42,
    (Il2CppObject *)v203,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v205 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 40;
  v206 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v207 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v207, 0, v205, v206, v208);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    43,
    (Il2CppObject *)v207,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v209 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 41;
  v210 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v211 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v211, 0, v209, v210, v212);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    44,
    (Il2CppObject *)v211,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v213 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 38;
  v214 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v215 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v215, 0, v213, v214, v216);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    45,
    (Il2CppObject *)v215,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v217 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 70;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v218 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 71;
  v219 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v219, 3, v217, v218, v220);
  if ( !v219 )
    goto LABEL_429;
  v219->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    46,
    (Il2CppObject *)v219,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v221 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 73;
  v222 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v223 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v223, 3, v221, v222, v224);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    47,
    (Il2CppObject *)v223,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v225 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 74;
  v226 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v227 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v227, 3, v225, v226, v228);
  if ( !v227 )
    goto LABEL_429;
  v227->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    48,
    (Il2CppObject *)v227,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v229 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 75;
  v230 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v231 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v231, 3, v229, v230, v232);
  if ( !v231 )
    goto LABEL_429;
  v231->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    49,
    (Il2CppObject *)v231,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v233 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 77;
  v234 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v235 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v235, 0, v233, v234, v236);
  if ( !v235 )
    goto LABEL_429;
  v235->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    50,
    (Il2CppObject *)v235,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v237 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 78;
  v238 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v239 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v239, 0, v237, v238, v240);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    51,
    (Il2CppObject *)v239,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v241 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 149;
  v242 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v243 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v243, 0, v241, v242, v244);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    89,
    (Il2CppObject *)v243,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v245 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 79;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v246 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 80;
  v247 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v247, 3, v245, v246, v248);
  if ( !v247 )
    goto LABEL_429;
  v247->fields.baseValue = 1000;
  v247->fields.IsChangeMaxHp = 1;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    52,
    (Il2CppObject *)v247,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v249 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 81;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v250 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 82;
  v251 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v251, 0, v249, v250, v252);
  if ( !v251 )
    goto LABEL_429;
  v251->fields.baseParam = 0;
  v251->fields.IsChangeMaxHp = 1;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    53,
    (Il2CppObject *)v251,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v253 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 84;
  v254 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v255 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v255, 0, v253, v254, v256);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    54,
    (Il2CppObject *)v255,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v257 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 85;
  v258 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v259 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v259, 0, v257, v258, v260);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    55,
    (Il2CppObject *)v259,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v261 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 87;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v262 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 88;
  v263 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v263, 3, v261, v262, v264);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    56,
    (Il2CppObject *)v263,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v265 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 89;
  v266 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v267 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v267, 0, v265, v266, v268);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    57,
    (Il2CppObject *)v267,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v269 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 90;
  v270 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v271 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v271, 0, v269, v270, v272);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    58,
    (Il2CppObject *)v271,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v273 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 95;
  v274 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v275 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v275, 0, v273, v274, v276);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    59,
    (Il2CppObject *)v275,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v277 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 96;
  v278 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v279 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v279, 0, v277, v278, v280);
  if ( !v279 )
    goto LABEL_429;
  v279->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    60,
    (Il2CppObject *)v279,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v281 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 98;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v282 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 99;
  v283 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v283, 3, v281, v282, v284);
  if ( !v283 )
    goto LABEL_429;
  v283->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    61,
    (Il2CppObject *)v283,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v285 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 100;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v286 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 101;
  v287 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v287, 3, v285, v286, v288);
  if ( !v287 )
    goto LABEL_429;
  v287->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    62,
    (Il2CppObject *)v287,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v289 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 102;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v290 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 103;
  v291 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v291, 3, v289, v290, v292);
  if ( !v291 )
    goto LABEL_429;
  v291->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    63,
    (Il2CppObject *)v291,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v293 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 86;
  v294 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v295 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v295, 0, v293, v294, v296);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    64,
    (Il2CppObject *)v295,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v297 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 97;
  v298 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v299 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v299, 0, v297, v298, v300);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    65,
    (Il2CppObject *)v299,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v301 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 116;
  v302 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v303 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v303, 0, v301, v302, v304);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    66,
    (Il2CppObject *)v303,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v305 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 117;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v306 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 118;
  v307 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v307, 1, v305, v306, v308);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    67,
    (Il2CppObject *)v307,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v309 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 119;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v310 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 120;
  v311 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v311, 0, v309, v310, v312);
  if ( !v311 )
    goto LABEL_429;
  v311->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    68,
    (Il2CppObject *)v311,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v313 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 121;
  v314 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v315 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v315, 0, v313, v314, v316);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    69,
    (Il2CppObject *)v315,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v317 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 122;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v318 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 123;
  v319 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v319, 0, v317, v318, v320);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    70,
    (Il2CppObject *)v319,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v321 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 124;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v322 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 125;
  v323 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v323, 0, v321, v322, v324);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    71,
    (Il2CppObject *)v323,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v325 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 126;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v326 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 127;
  v327 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v327, 0, v325, v326, v328);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    72,
    (Il2CppObject *)v327,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v329 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 130;
  v330 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v331 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v331, 0, v329, v330, v332);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    73,
    (Il2CppObject *)v331,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v333 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 131;
  v334 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v335 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v335, 0, v333, v334, v336);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    74,
    (Il2CppObject *)v335,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v337 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 132;
  v338 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v339 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v339, 0, v337, v338, v340);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    75,
    (Il2CppObject *)v339,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v341 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 133;
  v342 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v343 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v343, 0, v341, v342, v344);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    76,
    (Il2CppObject *)v343,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v345 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 134;
  v346 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v347 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v347, 0, v345, v346, v348);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    77,
    (Il2CppObject *)v347,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v349 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 135;
  v350 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v351 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v351, 1, v349, v350, v352);
  if ( !v351 )
    goto LABEL_429;
  v351->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    78,
    (Il2CppObject *)v351,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v353 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 136;
  v354 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v355 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v355, 1, v353, v354, v356);
  if ( !v355 )
    goto LABEL_429;
  v355->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    79,
    (Il2CppObject *)v355,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v357 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 137;
  v358 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v359 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v359, 0, v357, v358, v360);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    80,
    (Il2CppObject *)v359,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v361 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 138;
  v362 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v363 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v363, 0, v361, v362, v364);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    81,
    (Il2CppObject *)v363,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v365 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 139;
  v366 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v367 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v367, 0, v365, v366, v368);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    82,
    (Il2CppObject *)v367,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v369 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 140;
  v370 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v371 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v371, 0, v369, v370, v372);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    83,
    (Il2CppObject *)v371,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v373 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 141;
  v374 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v375 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v375, 0, v373, v374, v376);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    84,
    (Il2CppObject *)v375,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v377 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 142;
  v378 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v379 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v379, 0, v377, v378, v380);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    85,
    (Il2CppObject *)v379,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v381 = (System_Array_o *)sub_1B71674(BuffList_TYPE___TypeInfo, 4LL);
  v611.fields.value = Field__PrivateImplementationDetails__F74CB50F9D18C1E2A044410ED05D3C7285B0A0EF1A7321D9BD37EE90BF1D943E;
  v382 = (BuffList_TYPE_array *)v381;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61413584(v381, v611, 0LL);
  v383 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v384 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v384, 0, v382, v383, v385);
  if ( !v384 )
    goto LABEL_429;
  v384->fields.baseParam = -1;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    86,
    (Il2CppObject *)v384,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v386 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 144;
  v387 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v388 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v388, 0, v386, v387, v389);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    87,
    (Il2CppObject *)v388,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v390 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 148;
  v391 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v392 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v392, 0, v390, v391, v393);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    88,
    (Il2CppObject *)v392,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v394 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 150;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v395 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 151;
  v396 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v396, 3, v394, v395, v397);
  if ( !v396 )
    goto LABEL_429;
  v396->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    90,
    (Il2CppObject *)v396,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v398 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 152;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v399 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 153;
  v400 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v400, 3, v398, v399, v401);
  if ( !v400 )
    goto LABEL_429;
  v400->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    91,
    (Il2CppObject *)v400,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v402 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 154;
  v403 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v404 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v404, 3, v402, v403, v405);
  if ( !v404 )
    goto LABEL_429;
  v404->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    92,
    (Il2CppObject *)v404,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v406 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 155;
  v407 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v408 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v408, 3, v406, v407, v409);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    93,
    (Il2CppObject *)v408,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v410 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 156;
  v411 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v412 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v412, 0, v410, v411, v413);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    94,
    (Il2CppObject *)v412,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v414 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 157;
  v415 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v416 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v416, 0, v414, v415, v417);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    95,
    (Il2CppObject *)v416,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v418 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 158;
  v419 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v420 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v420, 0, v418, v419, v421);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    96,
    (Il2CppObject *)v420,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v422 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 159;
  v423 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v424 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v424, 0, v422, v423, v425);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    97,
    (Il2CppObject *)v424,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v426 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 160;
  v427 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v428 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v428, 0, v426, v427, v429);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    98,
    (Il2CppObject *)v428,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v430 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 161;
  v431 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v432 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v432, 0, v430, v431, v433);
  if ( !v432 )
    goto LABEL_429;
  v432->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    99,
    (Il2CppObject *)v432,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v434 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 163;
  v435 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v436 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v436, 0, v434, v435, v437);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    100,
    (Il2CppObject *)v436,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v438 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 162;
  v439 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v440 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v440, 3, v438, v439, v441);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    101,
    (Il2CppObject *)v440,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v442 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 165;
  v443 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v444 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v444, 0, v442, v443, v445);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    102,
    (Il2CppObject *)v444,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v446 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 166;
  v447 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v448 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v448, 0, v446, v447, v449);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    103,
    (Il2CppObject *)v448,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v450 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 10002;
  v451 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v452 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ToFieldActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v452, 0, v450, v451, v453);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    105,
    (Il2CppObject *)v452,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v454 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 10003;
  v455 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v456 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ToFieldActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v456, 0, v454, v455, v457);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    112,
    (Il2CppObject *)v456,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v458 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 27;
  v459 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v460 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v460, 3, v458, v459, v461);
  if ( !v460 )
    goto LABEL_429;
  v460->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    106,
    (Il2CppObject *)v460,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v462 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 167;
  v463 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v464 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v464, 3, v462, v463, v465);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    107,
    (Il2CppObject *)v464,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v466 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 168;
  v467 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v468 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v468, 0, v466, v467, v469);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    108,
    (Il2CppObject *)v468,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v470 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 169;
  v471 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v472 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v472, 0, v470, v471, v473);
  if ( !v472 )
    goto LABEL_429;
  v472->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    109,
    (Il2CppObject *)v472,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v474 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 170;
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v475 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 171;
  v476 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v476, 0, v474, v475, v477);
  if ( !v476 )
    goto LABEL_429;
  v476->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    110,
    (Il2CppObject *)v476,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_429;
  v478 = v15->max_length;
  v479 = v15;
  if ( !v478 )
    goto LABEL_430;
  v15->m_Items[1] = 172;
  if ( v478 == 1 )
    goto LABEL_430;
  v15->m_Items[2] = 173;
  v480 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v481 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v481, 0, v479, v480, v482);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    111,
    (Il2CppObject *)v481,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v483 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 174;
  v484 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v485 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v485, 3, v483, v484, v486);
  if ( !v485
    || (v485->fields.baseParam = 0,
        System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v14,
          113,
          (Il2CppObject *)v485,
          (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__),
        (v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_429:
    sub_1B71828(v15, v16);
  }
  v487 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 175;
  v488 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v489 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v489, 0, v487, v488, v490);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    114,
    (Il2CppObject *)v489,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v491 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 176;
  v492 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v493 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v493, 0, v491, v492, v494);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    115,
    (Il2CppObject *)v493,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v495 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 177;
  v496 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v497 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v497, 0, v495, v496, v498);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    116,
    (Il2CppObject *)v497,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v499 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 178;
  v500 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v501 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v501, 0, v499, v500, v502);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    117,
    (Il2CppObject *)v501,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v503 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 179;
  v504 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v505 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v505, 0, v503, v504, v506);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    118,
    (Il2CppObject *)v505,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v507 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 180;
  v508 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v509 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v509, 0, v507, v508, v510);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    119,
    (Il2CppObject *)v509,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v511 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 181;
  v512 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v513 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v513, 0, v511, v512, v514);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    120,
    (Il2CppObject *)v513,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v515 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 182;
  v516 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v517 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v517, 0, v515, v516, v518);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    121,
    (Il2CppObject *)v517,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v519 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 185;
  v520 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v521 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v521, 0, v519, v520, v522);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    122,
    (Il2CppObject *)v521,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v523 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 187;
  v524 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v525 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v525, 0, v523, v524, v526);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    123,
    (Il2CppObject *)v525,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v527 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 186;
  v528 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v529 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v529, 0, v527, v528, v530);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    124,
    (Il2CppObject *)v529,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v531 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 188;
  v532 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v533 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v533, 0, v531, v532, v534);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    125,
    (Il2CppObject *)v533,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v535 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 189;
  v536 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v537 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v537, 0, v535, v536, v538);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    127,
    (Il2CppObject *)v537,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v539 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 190;
  v540 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v541 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v541, 0, v539, v540, v542);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    128,
    (Il2CppObject *)v541,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v543 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 191;
  v544 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v545 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v545, 0, v543, v544, v546);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    129,
    (Il2CppObject *)v545,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v547 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 192;
  v548 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v549 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v549, 0, v547, v548, v550);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    130,
    (Il2CppObject *)v549,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_429;
  v551 = v15->max_length;
  v552 = v15;
  if ( !v551 )
    goto LABEL_430;
  v15->m_Items[1] = 37;
  if ( v551 == 1 )
    goto LABEL_430;
  v15->m_Items[2] = 104;
  v553 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v554 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v554, 0, v552, v553, v555);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    126,
    (Il2CppObject *)v554,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v556 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 194;
  v557 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v558 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v558, 0, v556, v557, v559);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    131,
    (Il2CppObject *)v558,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v560 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 199;
  v561 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v562 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v562, 0, v560, v561, v563);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    136,
    (Il2CppObject *)v562,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v564 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 193;
  v565 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v566 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v566, 0, v564, v565, v567);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    132,
    (Il2CppObject *)v566,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v568 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 200;
  v569 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v570 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v570, 0, v568, v569, v571);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    137,
    (Il2CppObject *)v570,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v572 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 201;
  v573 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v574 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v574, 0, v572, v573, v575);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    138,
    (Il2CppObject *)v574,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v576 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 202;
  v577 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v578 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v578, 0, v576, v577, v579);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    139,
    (Il2CppObject *)v578,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v580 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 203;
  v581 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v582 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v582, 0, v580, v581, v583);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    140,
    (Il2CppObject *)v582,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v584 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 204;
  v585 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v586 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v586, 0, v584, v585, v587);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    141,
    (Il2CppObject *)v586,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v588 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 205;
  v589 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v590 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v590, 0, v588, v589, v591);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    142,
    (Il2CppObject *)v590,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_429;
  v592 = v15;
  if ( !v15->max_length )
    goto LABEL_430;
  v15->m_Items[1] = 206;
  v593 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 0LL);
  v594 = (BuffList_ActInfo_o *)sub_1B71818(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v594, 0, v592, v593, v595);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    143,
    (Il2CppObject *)v594,
    (const MethodInfo_3178088 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  BuffList_TypeInfo->static_fields->ActionList = (struct System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__o *)v14;
  sub_1B71570((ServantStatusBattleListViewItem_o *)BuffList_TypeInfo->static_fields, (int32_t)v14, v596, v597);
  v15 = (BuffList_TYPE_array *)sub_1B71674(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_429;
  v600 = v15->max_length;
  v16 = v15;
  if ( !v600 || (v15->m_Items[1] = 104, v600 == 1) )
LABEL_430:
    sub_1B71830(v15, v16);
  v15->m_Items[2] = 37;
  static_fields = BuffList_TypeInfo->static_fields;
  static_fields->GutsList = v16;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->GutsList, (int32_t)v16, v598, v599);
  v602 = (System_Array_o *)sub_1B71674(BuffList_ACTION___TypeInfo, 4LL);
  v612.fields.value = Field__PrivateImplementationDetails__4EECD95FEC87B9ABE1EA9376D9C9CF1F7F1C01299268E427022C2F5192383D9E;
  v603 = v602;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61413584(v602, v612, 0LL);
  v604 = BuffList_TypeInfo->static_fields;
  v604->CommandCodeFunctionActs = (struct BuffList_ACTION_array *)v603;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v604->CommandCodeFunctionActs, (int32_t)v603, v605, v606);
  v607 = (System_Collections_Generic_HashSet_T__o *)sub_1B71818(System_Collections_Generic_HashSet_BuffList_TYPE__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v607,
    (const MethodInfo_338AB94 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE___ctor__);
  if ( !v607 )
    goto LABEL_429;
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v607,
    138,
    (const MethodInfo_338BD98 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v607,
    159,
    (const MethodInfo_338BD98 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v607,
    177,
    (const MethodInfo_338BD98 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v607,
    178,
    (const MethodInfo_338BD98 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  v608 = BuffList_TypeInfo->static_fields;
  v608->CommandCodeBuffHash = (struct System_Collections_Generic_HashSet_BuffList_TYPE__o *)v607;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v608->CommandCodeBuffHash, (int32_t)v607, v609, v610);
}


bool __fastcall BuffList__CheckAccumulation(int32_t type, const MethodInfo *method)
{
  if ( (byte_4A1E9D7 & 1) == 0 )
  {
    sub_1B715CC(&BuffList_TypeInfo, method);
    byte_4A1E9D7 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  return type == 97;
}


bool __fastcall BuffList__CheckGutsType(int32_t type, const MethodInfo *method)
{
  BuffList_c *v3; // x0
  struct BuffList_TYPE_array *GutsList; // x9
  int max_length; // w8
  int i; // w10

  if ( (byte_4A1E9D9 & 1) == 0 )
  {
    sub_1B715CC(&BuffList_TypeInfo, method);
    byte_4A1E9D9 = 1;
  }
  v3 = BuffList_TypeInfo;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v3 = BuffList_TypeInfo;
  }
  GutsList = v3->static_fields->GutsList;
  if ( !GutsList )
    sub_1B71828(v3, method);
  max_length = GutsList->max_length;
  if ( max_length < 1 )
  {
    i = 0;
  }
  else
  {
    for ( i = 0; i != max_length; ++i )
    {
      if ( max_length == i )
        sub_1B71830(v3, method);
      if ( GutsList->m_Items[i + 1] == type )
        break;
    }
  }
  return i < max_length;
}


bool __fastcall BuffList__CheckType(int32_t self, int32_t type, const MethodInfo *method)
{
  return self == type;
}


bool __fastcall BuffList__CheckUpdateHp(int32_t type, const MethodInfo *method)
{
  if ( (byte_4A1E9D6 & 1) == 0 )
  {
    sub_1B715CC(&BuffList_TypeInfo, method);
    byte_4A1E9D6 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( type == 81 )
    return 1;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( type == 82 )
    return 1;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( type == 79 )
    return 1;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A1E9DB & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_8736/*"MST_BUFF_INDV_ADD_BUFF_ACTIVE"*/, v1);
    byte_4A1E9DB = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_8736/*"MST_BUFF_INDV_ADD_BUFF_ACTIVE"*/, 0LL) == 1;
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
  unsigned int v4; // w9

  if ( type <= 149 )
  {
    if ( type > 95 )
    {
      if ( (unsigned int)(type - 97) < 0x35 )
        return (0x18030000000001uLL >> ((unsigned __int8)type - 97)) & 1;
LABEL_14:
      LOBYTE(v3) = 0;
      return v3;
    }
    v2 = type - 76;
    if ( (unsigned int)(type - 76) >= 0x14 )
      goto LABEL_14;
    v4 = 550789;
LABEL_16:
    LODWORD(v3) = (v4 >> v2) & 1;
    return v3;
  }
  if ( type <= 165 )
  {
    v2 = type + 97;
    if ( (unsigned int)(type - 159) >= 7 )
      goto LABEL_14;
    v4 = 67;
    goto LABEL_16;
  }
  v2 = type + 88;
  if ( (unsigned int)(type - 168) < 0x1B && ((0x41FFFFFu >> v2) & 1) != 0 )
  {
    v4 = 134118913;
    goto LABEL_16;
  }
  if ( (unsigned int)(type - 200) >= 6 )
    goto LABEL_14;
  LOBYTE(v3) = 1;
  return v3;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BuffList_c *v8; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *ActionList; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *currentValue; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A1E9DA & 1) == 0 )
  {
    sub_1B715CC(&BuffList_TypeInfo, method);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Values__, v3);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__Dispose__,
      v4);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__MoveNext__,
      v5);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__get_Current__,
      v6);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_BuffList_ACTION__BuffList_ActInfo__GetEnumerator__,
      v7);
    byte_4A1E9DA = 1;
  }
  v8 = BuffList_TypeInfo;
  memset(&v14, 0, sizeof(v14));
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v8 = BuffList_TypeInfo;
  }
  ActionList = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)v8->static_fields->ActionList;
  if ( !ActionList
    || (ActionList = System_Collections_Generic_Dictionary_Int32Enum__object___get_Values(
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)ActionList,
                       (const MethodInfo_3177E98 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Values__)) == 0LL )
  {
    sub_1B71828(ActionList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Int32Enum__object___GetEnumerator(
    &v14,
    ActionList,
    (const MethodInfo_37D8A40 *)Method_System_Collections_Generic_Dictionary_ValueCollection_BuffList_ACTION__BuffList_ActInfo__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___MoveNext(
            &v14,
            (const MethodInfo_3294420 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__MoveNext__) )
  {
    currentValue = v14.fields._currentValue;
    if ( !v14.fields._currentValue )
      sub_1B71828(0LL, v10);
    v14.fields._currentValue[4].klass = (Il2CppClass *)setData;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&currentValue[4], (int32_t)setData, v11, v12);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose(
    &v14,
    (const MethodInfo_329441C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__Dispose__);
}


BuffList_ActInfo_o *__fastcall BuffList__getActInfo(
        int32_t action,
        BattleServantData_o *opponentSvt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BuffList_c *v6; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *ActionList; // x0
  Il2CppObject *Item; // x0
  BuffList_ActInfo_o *v9; // x20

  if ( (byte_4A1E9D5 & 1) == 0 )
  {
    sub_1B715CC(&BuffList_TypeInfo, opponentSvt);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Item__, v5);
    byte_4A1E9D5 = 1;
  }
  v6 = BuffList_TypeInfo;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v6 = BuffList_TypeInfo;
  }
  ActionList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v6->static_fields->ActionList;
  if ( !ActionList )
    goto LABEL_10;
  Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
           ActionList,
           action,
           (const MethodInfo_3177FE8 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Item__);
  v9 = (BuffList_ActInfo_o *)Item;
  if ( Item )
  {
    ActionList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)Item[3].monitor;
    if ( ActionList )
    {
      ((void (__fastcall *)(System_Collections_Generic_Dictionary_TKey__TValue__o *, BattleServantData_o *, Il2CppMethodPointer))ActionList->klass->vtable._4_unknown.method)(
        ActionList,
        opponentSvt,
        ActionList->klass->vtable._5_set_Item.methodPtr);
      return v9;
    }
LABEL_10:
    sub_1B71828(ActionList, opponentSvt);
  }
  return v9;
}


bool __fastcall BuffList__isSpHit(int32_t type, const MethodInfo *method)
{
  if ( (byte_4A1E9D8 & 1) == 0 )
  {
    sub_1B715CC(&BuffList_TypeInfo, method);
    byte_4A1E9D8 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( type == 11 )
    return 1;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( type == 110 )
    return 1;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( type == 112 )
    return 1;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( type == 135 )
    return 1;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  struct BuffList_BaseInvokeCond_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  this->fields.limit = 3;
  this->fields.baseParam = 1000;
  this->fields.isRec = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.limit = inLimit;
  this->fields.plusTypes = inPlus;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.plusTypes, (int32_t)inPlus, v9, v10);
  this->fields.minusTypes = inMinus;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.minusTypes, (int32_t)inMinus, v11, v12);
  v13 = (struct BuffList_BaseInvokeCond_o *)((__int64 (__fastcall *)(BuffList_ActInfo_o *, _QWORD, void *))this->klass->vtable._4_MakeInvokeCond.method)(
                                              this,
                                              0LL,
                                              this->klass[1]._1.image);
  this->fields._OpponentInvokeCond_k__BackingField = v13;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._OpponentInvokeCond_k__BackingField,
    (int32_t)v13,
    v14,
    v15);
}


// local variable allocation has failed, the output may be wrong!
BuffList_BaseInvokeCond_o *__fastcall BuffList_ActInfo__MakeInvokeCond(
        BuffList_ActInfo_o *this,
        bool isSelfSide,
        const MethodInfo *method)
{
  BuffList_BaseInvokeCond_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4A1E9E1 & 1) == 0 )
  {
    sub_1B715CC(&BuffList_BaseInvokeCond_TypeInfo, isSelfSide);
    byte_4A1E9E1 = 1;
  }
  v4 = (BuffList_BaseInvokeCond_o *)sub_1B71818(BuffList_BaseInvokeCond_TypeInfo);
  BuffList_BaseInvokeCond___ctor(v4, isSelfSide, v5);
  return v4;
}


BuffList_ActInfo_o *__fastcall BuffList_ActInfo__SetChangeMaxHp(
        BuffList_ActInfo_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.IsChangeMaxHp = flg;
  return this;
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
  int32_t v3; // w3

  this->fields._OpponentInvokeCond_k__BackingField = value;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._OpponentInvokeCond_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BuffList_BaseInvokeCond___ctor(
        BuffList_BaseInvokeCond_o *this,
        bool isSelfSide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_String_o **v17; // x8
  struct System_String_o *v18; // x1

  if ( (byte_4A1E9DE & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int_____ctor__, isSelfSide);
    sub_1B715CC(&System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____TypeInfo, v5);
    sub_1B715CC(&StringLiteral_12537/*"Self"*/, v6);
    sub_1B715CC(&StringLiteral_9987/*"Opponent"*/, v7);
    sub_1B715CC(&StringLiteral_1/*""*/, v8);
    byte_4A1E9DE = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B71818(System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v9,
    (const MethodInfo_31776B4 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int_____ctor__);
  this->fields.dicCacheSelfValue = (struct System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____o *)v9;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicCacheSelfValue, (int32_t)v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.targetSideStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.targetSideStr, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( isSelfSide )
    v17 = (struct System_String_o **)&StringLiteral_12537/*"Self"*/;
  else
    v17 = (struct System_String_o **)&StringLiteral_9987/*"Opponent"*/;
  v18 = *v17;
  this->fields.targetSideStr = *v17;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.targetSideStr, (int32_t)v18, v15, v16);
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
  BattleBuffData_o *dicCacheSelfValue; // x0
  BattleServantData_o *SvtData_k__BackingField; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v14; // x23

  if ( (byte_4A1E9E0 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____ContainsKey__, buffData);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____get_Item__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____set_Item__, v10);
    sub_1B715CC(&int___TypeInfo, v11);
    byte_4A1E9E0 = 1;
  }
  dicCacheSelfValue = (BattleBuffData_o *)this->fields.dicCacheSelfValue;
  if ( !dicCacheSelfValue )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicCacheSelfValue,
          1,
          (const MethodInfo_317827C *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____ContainsKey__) )
  {
    SvtData_k__BackingField = this->fields._SvtData_k__BackingField;
    v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicCacheSelfValue;
    if ( SvtData_k__BackingField )
    {
      dicCacheSelfValue = BattleServantData__get_BuffData(SvtData_k__BackingField, 0LL);
      if ( !dicCacheSelfValue )
        goto LABEL_14;
      dicCacheSelfValue = (BattleBuffData_o *)BattleBuffData__GetGrantBuffTypeArray(dicCacheSelfValue, 1, 1, 0LL);
    }
    else
    {
      dicCacheSelfValue = (BattleBuffData_o *)sub_1B71674(int___TypeInfo, 0LL);
    }
    if ( v14 )
    {
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v14,
        1,
        (Il2CppObject *)dicCacheSelfValue,
        (const MethodInfo_3178074 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____set_Item__);
      goto LABEL_11;
    }
LABEL_14:
    sub_1B71828(dicCacheSelfValue, buffData);
  }
LABEL_11:
  dicCacheSelfValue = (BattleBuffData_o *)this->fields.dicCacheSelfValue;
  if ( !dicCacheSelfValue )
    goto LABEL_14;
  dicCacheSelfValue = (BattleBuffData_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicCacheSelfValue,
                                            1,
                                            (const MethodInfo_3177FE8 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____get_Item__);
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
    sub_1B71828(v13, v14);
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
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_fields; // x20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *monitor; // x0

  if ( (byte_4A1E9DF & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____Clear__, svtData);
    byte_4A1E9DF = 1;
  }
  this->fields._SvtData_k__BackingField = svtData;
  p_fields = (ServantStatusBattleListViewItem_o *)&this->fields;
  sub_1B71570(p_fields, (int32_t)svtData, (int32_t)method, v3);
  monitor = (System_Collections_Generic_Dictionary_TKey__TValue__o *)p_fields->monitor;
  if ( !monitor )
    sub_1B71828(0LL, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Clear(
    monitor,
    (const MethodInfo_3178210 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____Clear__);
}


System_String_o *__fastcall BuffList_BaseInvokeCond__get_BuffTypeCondKeyName(
        BuffList_BaseInvokeCond_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A1E9DD & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_4426/*"Check{0}BuffTypes"*/, method);
    byte_4A1E9DD = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_4426/*"Check{0}BuffTypes"*/, (Il2CppObject *)this->fields.targetSideStr, 0LL);
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
  int32_t v3; // w3

  this->fields._SvtData_k__BackingField = value;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}