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
  __int64 v17; // x2
  il2cpp_array_size_t max_length; // w8
  BuffList_TYPE_array *v19; // x20
  il2cpp_array_size_t v20; // w8
  BuffList_TYPE_array *v21; // x21
  BuffList_ActInfo_o *v22; // x22
  const MethodInfo *v23; // x4
  il2cpp_array_size_t v24; // w8
  BuffList_TYPE_array *v25; // x20
  il2cpp_array_size_t v26; // w8
  BuffList_TYPE_array *v27; // x21
  BuffList_ActInfo_o *v28; // x22
  const MethodInfo *v29; // x4
  BuffList_TYPE_array *v30; // x20
  BuffList_TYPE_array *v31; // x21
  BuffList_ActInfo_o *v32; // x22
  const MethodInfo *v33; // x4
  BuffList_TYPE_array *v34; // x20
  BuffList_TYPE_array *v35; // x21
  BuffList_ActInfo_o *v36; // x22
  const MethodInfo *v37; // x4
  BuffList_TYPE_array *v38; // x20
  BuffList_TYPE_array *v39; // x21
  BuffList_ActInfo_o *v40; // x22
  const MethodInfo *v41; // x4
  BuffList_TYPE_array *v42; // x20
  BuffList_TYPE_array *v43; // x21
  BuffList_ActInfo_o *v44; // x22
  const MethodInfo *v45; // x4
  BuffList_TYPE_array *v46; // x20
  BuffList_TYPE_array *v47; // x21
  BuffList_ActInfo_o *v48; // x22
  const MethodInfo *v49; // x4
  BuffList_TYPE_array *v50; // x20
  BuffList_TYPE_array *v51; // x21
  BuffList_ActInfo_o *v52; // x22
  const MethodInfo *v53; // x4
  BuffList_TYPE_array *v54; // x20
  BuffList_TYPE_array *v55; // x21
  BuffList_ActInfo_o *v56; // x22
  const MethodInfo *v57; // x4
  BuffList_TYPE_array *v58; // x20
  BuffList_TYPE_array *v59; // x21
  BuffList_ActInfo_o *v60; // x22
  const MethodInfo *v61; // x4
  BuffList_TYPE_array *v62; // x20
  BuffList_TYPE_array *v63; // x21
  BuffList_ActInfo_o *v64; // x22
  const MethodInfo *v65; // x4
  BuffList_TYPE_array *v66; // x20
  BuffList_TYPE_array *v67; // x21
  BuffList_ActInfo_o *v68; // x22
  const MethodInfo *v69; // x4
  BuffList_TYPE_array *v70; // x20
  BuffList_TYPE_array *v71; // x21
  BuffList_ActInfo_o *v72; // x22
  const MethodInfo *v73; // x4
  BuffList_TYPE_array *v74; // x20
  BuffList_TYPE_array *v75; // x21
  BuffList_ActInfo_o *v76; // x22
  const MethodInfo *v77; // x4
  BuffList_TYPE_array *v78; // x20
  BuffList_TYPE_array *v79; // x22
  BuffList_ActInfo_o *v80; // x21
  const MethodInfo *v81; // x4
  BuffList_TYPE_array *v82; // x20
  BuffList_TYPE_array *v83; // x21
  BuffList_ActInfo_o *v84; // x22
  const MethodInfo *v85; // x4
  BuffList_TYPE_array *v86; // x20
  BuffList_TYPE_array *v87; // x21
  BuffList_ActInfo_o *v88; // x22
  const MethodInfo *v89; // x4
  BuffList_TYPE_array *v90; // x20
  BuffList_TYPE_array *v91; // x21
  BuffList_ActInfo_o *v92; // x22
  const MethodInfo *v93; // x4
  BuffList_TYPE_array *v94; // x20
  BuffList_TYPE_array *v95; // x21
  BuffList_ActInfo_o *v96; // x22
  const MethodInfo *v97; // x4
  BuffList_TYPE_array *v98; // x20
  BuffList_TYPE_array *v99; // x21
  BuffList_ActInfo_o *v100; // x22
  const MethodInfo *v101; // x4
  BuffList_TYPE_array *v102; // x20
  BuffList_TYPE_array *v103; // x21
  BuffList_ActInfo_o *v104; // x22
  const MethodInfo *v105; // x4
  BuffList_TYPE_array *v106; // x20
  BuffList_TYPE_array *v107; // x21
  BuffList_ActInfo_o *v108; // x22
  const MethodInfo *v109; // x4
  BuffList_TYPE_array *v110; // x20
  BuffList_TYPE_array *v111; // x21
  BuffList_ActInfo_o *v112; // x22
  const MethodInfo *v113; // x4
  BuffList_TYPE_array *v114; // x20
  BuffList_TYPE_array *v115; // x21
  BuffList_ActInfo_o *v116; // x22
  const MethodInfo *v117; // x4
  il2cpp_array_size_t v118; // w8
  BuffList_TYPE_array *v119; // x20
  il2cpp_array_size_t v120; // w8
  BuffList_TYPE_array *v121; // x21
  BuffList_ActInfo_o *v122; // x22
  const MethodInfo *v123; // x4
  il2cpp_array_size_t v124; // w8
  BuffList_TYPE_array *v125; // x20
  il2cpp_array_size_t v126; // w8
  BuffList_TYPE_array *v127; // x21
  BuffList_ActInfo_o *v128; // x22
  const MethodInfo *v129; // x4
  BuffList_TYPE_array *v130; // x20
  BuffList_TYPE_array *v131; // x21
  BuffList_ActInfo_o *v132; // x22
  const MethodInfo *v133; // x4
  BuffList_TYPE_array *v134; // x20
  BuffList_TYPE_array *v135; // x21
  BuffList_ActInfo_o *v136; // x22
  const MethodInfo *v137; // x4
  il2cpp_array_size_t v138; // w8
  BuffList_TYPE_array *v139; // x20
  il2cpp_array_size_t v140; // w8
  BuffList_TYPE_array *v141; // x21
  BuffList_ActInfo_o *v142; // x22
  const MethodInfo *v143; // x4
  il2cpp_array_size_t v144; // w8
  BuffList_TYPE_array *v145; // x20
  il2cpp_array_size_t v146; // w8
  BuffList_TYPE_array *v147; // x21
  BuffList_ActInfo_o *v148; // x22
  const MethodInfo *v149; // x4
  BuffList_TYPE_array *v150; // x20
  BuffList_TYPE_array *v151; // x21
  BuffList_ActInfo_o *v152; // x22
  const MethodInfo *v153; // x4
  BuffList_TYPE_array *v154; // x20
  BuffList_TYPE_array *v155; // x21
  BuffList_ActInfo_o *v156; // x22
  const MethodInfo *v157; // x4
  BuffList_TYPE_array *v158; // x20
  BuffList_TYPE_array *v159; // x22
  BuffList_ActInfo_o *v160; // x21
  const MethodInfo *v161; // x4
  BuffList_TYPE_array *v162; // x20
  BuffList_TYPE_array *v163; // x22
  BuffList_ActInfo_o *v164; // x21
  const MethodInfo *v165; // x4
  BuffList_TYPE_array *v166; // x20
  BuffList_TYPE_array *v167; // x22
  BuffList_ActInfo_o *v168; // x21
  const MethodInfo *v169; // x4
  BuffList_TYPE_array *v170; // x20
  BuffList_TYPE_array *v171; // x22
  BuffList_ActInfo_o *v172; // x21
  const MethodInfo *v173; // x4
  BuffList_TYPE_array *v174; // x20
  BuffList_TYPE_array *v175; // x21
  BuffList_ActInfo_o *v176; // x22
  const MethodInfo *v177; // x4
  BuffList_TYPE_array *v178; // x20
  BuffList_TYPE_array *v179; // x21
  BuffList_ActInfo_o *v180; // x22
  const MethodInfo *v181; // x4
  BuffList_TYPE_array *v182; // x20
  BuffList_TYPE_array *v183; // x21
  BuffList_ActInfo_o *v184; // x22
  const MethodInfo *v185; // x4
  BuffList_TYPE_array *v186; // x20
  BuffList_TYPE_array *v187; // x21
  BuffList_ActInfo_o *v188; // x22
  const MethodInfo *v189; // x4
  BuffList_TYPE_array *v190; // x20
  BuffList_TYPE_array *v191; // x21
  BuffList_ActInfo_o *v192; // x22
  const MethodInfo *v193; // x4
  BuffList_TYPE_array *v194; // x20
  BuffList_TYPE_array *v195; // x21
  BuffList_ActInfo_o *v196; // x22
  const MethodInfo *v197; // x4
  BuffList_TYPE_array *v198; // x20
  BuffList_TYPE_array *v199; // x21
  BuffList_ActInfo_o *v200; // x22
  const MethodInfo *v201; // x4
  BuffList_TYPE_array *v202; // x20
  BuffList_TYPE_array *v203; // x21
  BuffList_ActInfo_o *v204; // x22
  const MethodInfo *v205; // x4
  BuffList_TYPE_array *v206; // x20
  BuffList_TYPE_array *v207; // x21
  BuffList_ActInfo_o *v208; // x22
  const MethodInfo *v209; // x4
  BuffList_TYPE_array *v210; // x20
  BuffList_TYPE_array *v211; // x21
  BuffList_ActInfo_o *v212; // x22
  const MethodInfo *v213; // x4
  BuffList_TYPE_array *v214; // x20
  BuffList_TYPE_array *v215; // x21
  BuffList_ActInfo_o *v216; // x22
  const MethodInfo *v217; // x4
  BuffList_TYPE_array *v218; // x20
  BuffList_TYPE_array *v219; // x21
  BuffList_ActInfo_o *v220; // x22
  const MethodInfo *v221; // x4
  BuffList_TYPE_array *v222; // x20
  BuffList_TYPE_array *v223; // x21
  BuffList_ActInfo_o *v224; // x22
  const MethodInfo *v225; // x4
  BuffList_TYPE_array *v226; // x20
  BuffList_TYPE_array *v227; // x21
  BuffList_ActInfo_o *v228; // x22
  const MethodInfo *v229; // x4
  BuffList_TYPE_array *v230; // x20
  BuffList_TYPE_array *v231; // x21
  BuffList_ActInfo_o *v232; // x22
  const MethodInfo *v233; // x4
  BuffList_TYPE_array *v234; // x20
  BuffList_TYPE_array *v235; // x22
  BuffList_ActInfo_o *v236; // x21
  const MethodInfo *v237; // x4
  BuffList_TYPE_array *v238; // x20
  BuffList_TYPE_array *v239; // x22
  BuffList_ActInfo_o *v240; // x21
  const MethodInfo *v241; // x4
  BuffList_TYPE_array *v242; // x20
  BuffList_TYPE_array *v243; // x22
  BuffList_ActInfo_o *v244; // x21
  const MethodInfo *v245; // x4
  BuffList_TYPE_array *v246; // x20
  BuffList_TYPE_array *v247; // x21
  BuffList_ActInfo_o *v248; // x22
  const MethodInfo *v249; // x4
  BuffList_TYPE_array *v250; // x20
  BuffList_TYPE_array *v251; // x21
  BuffList_ActInfo_o *v252; // x22
  const MethodInfo *v253; // x4
  BuffList_TYPE_array *v254; // x20
  BuffList_TYPE_array *v255; // x21
  BuffList_ActInfo_o *v256; // x22
  const MethodInfo *v257; // x4
  BuffList_TYPE_array *v258; // x20
  BuffList_TYPE_array *v259; // x21
  BuffList_ActInfo_o *v260; // x22
  const MethodInfo *v261; // x4
  BuffList_TYPE_array *v262; // x20
  BuffList_TYPE_array *v263; // x21
  BuffList_ActInfo_o *v264; // x22
  const MethodInfo *v265; // x4
  BuffList_TYPE_array *v266; // x20
  BuffList_TYPE_array *v267; // x21
  BuffList_ActInfo_o *v268; // x22
  const MethodInfo *v269; // x4
  BuffList_TYPE_array *v270; // x20
  BuffList_TYPE_array *v271; // x21
  BuffList_ActInfo_o *v272; // x22
  const MethodInfo *v273; // x4
  BuffList_TYPE_array *v274; // x20
  BuffList_TYPE_array *v275; // x21
  BuffList_ActInfo_o *v276; // x22
  const MethodInfo *v277; // x4
  BuffList_TYPE_array *v278; // x20
  BuffList_TYPE_array *v279; // x21
  BuffList_ActInfo_o *v280; // x22
  const MethodInfo *v281; // x4
  BuffList_TYPE_array *v282; // x20
  BuffList_TYPE_array *v283; // x21
  BuffList_ActInfo_o *v284; // x22
  const MethodInfo *v285; // x4
  BuffList_TYPE_array *v286; // x20
  BuffList_TYPE_array *v287; // x21
  BuffList_ActInfo_o *v288; // x22
  const MethodInfo *v289; // x4
  BuffList_TYPE_array *v290; // x20
  BuffList_TYPE_array *v291; // x22
  BuffList_ActInfo_o *v292; // x21
  const MethodInfo *v293; // x4
  BuffList_TYPE_array *v294; // x20
  BuffList_TYPE_array *v295; // x21
  BuffList_ActInfo_o *v296; // x22
  const MethodInfo *v297; // x4
  BuffList_TYPE_array *v298; // x20
  BuffList_TYPE_array *v299; // x21
  BuffList_ActInfo_o *v300; // x22
  const MethodInfo *v301; // x4
  BuffList_TYPE_array *v302; // x20
  BuffList_TYPE_array *v303; // x21
  BuffList_ActInfo_o *v304; // x22
  const MethodInfo *v305; // x4
  BuffList_TYPE_array *v306; // x20
  BuffList_TYPE_array *v307; // x21
  BuffList_ActInfo_o *v308; // x22
  const MethodInfo *v309; // x4
  BuffList_TYPE_array *v310; // x20
  BuffList_TYPE_array *v311; // x21
  BuffList_ActInfo_o *v312; // x22
  const MethodInfo *v313; // x4
  BuffList_TYPE_array *v314; // x20
  BuffList_TYPE_array *v315; // x21
  BuffList_ActInfo_o *v316; // x22
  const MethodInfo *v317; // x4
  BuffList_TYPE_array *v318; // x20
  BuffList_TYPE_array *v319; // x21
  BuffList_ActInfo_o *v320; // x22
  const MethodInfo *v321; // x4
  BuffList_TYPE_array *v322; // x20
  BuffList_TYPE_array *v323; // x21
  BuffList_ActInfo_o *v324; // x22
  const MethodInfo *v325; // x4
  BuffList_TYPE_array *v326; // x20
  BuffList_TYPE_array *v327; // x21
  BuffList_ActInfo_o *v328; // x22
  const MethodInfo *v329; // x4
  BuffList_TYPE_array *v330; // x20
  BuffList_TYPE_array *v331; // x21
  BuffList_ActInfo_o *v332; // x22
  const MethodInfo *v333; // x4
  BuffList_TYPE_array *v334; // x20
  BuffList_TYPE_array *v335; // x21
  BuffList_ActInfo_o *v336; // x22
  const MethodInfo *v337; // x4
  BuffList_TYPE_array *v338; // x20
  BuffList_TYPE_array *v339; // x21
  BuffList_ActInfo_o *v340; // x22
  const MethodInfo *v341; // x4
  BuffList_TYPE_array *v342; // x20
  BuffList_TYPE_array *v343; // x21
  BuffList_ActInfo_o *v344; // x22
  const MethodInfo *v345; // x4
  BuffList_TYPE_array *v346; // x20
  BuffList_TYPE_array *v347; // x21
  BuffList_ActInfo_o *v348; // x22
  const MethodInfo *v349; // x4
  BuffList_TYPE_array *v350; // x20
  BuffList_TYPE_array *v351; // x21
  BuffList_ActInfo_o *v352; // x22
  const MethodInfo *v353; // x4
  BuffList_TYPE_array *v354; // x20
  BuffList_TYPE_array *v355; // x21
  BuffList_ActInfo_o *v356; // x22
  const MethodInfo *v357; // x4
  BuffList_TYPE_array *v358; // x20
  BuffList_TYPE_array *v359; // x21
  BuffList_ActInfo_o *v360; // x22
  const MethodInfo *v361; // x4
  BuffList_TYPE_array *v362; // x20
  BuffList_TYPE_array *v363; // x21
  BuffList_ActInfo_o *v364; // x22
  const MethodInfo *v365; // x4
  BuffList_TYPE_array *v366; // x20
  BuffList_TYPE_array *v367; // x22
  BuffList_ActInfo_o *v368; // x21
  const MethodInfo *v369; // x4
  BuffList_TYPE_array *v370; // x20
  BuffList_TYPE_array *v371; // x22
  BuffList_ActInfo_o *v372; // x21
  const MethodInfo *v373; // x4
  BuffList_TYPE_array *v374; // x20
  BuffList_TYPE_array *v375; // x21
  BuffList_ActInfo_o *v376; // x22
  const MethodInfo *v377; // x4
  BuffList_TYPE_array *v378; // x20
  BuffList_TYPE_array *v379; // x21
  BuffList_ActInfo_o *v380; // x22
  const MethodInfo *v381; // x4
  BuffList_TYPE_array *v382; // x20
  BuffList_TYPE_array *v383; // x21
  BuffList_ActInfo_o *v384; // x22
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
  System_Array_o *v398; // x0
  BuffList_TYPE_array *v399; // x21
  BuffList_TYPE_array *v400; // x22
  BuffList_ActInfo_o *v401; // x20
  const MethodInfo *v402; // x4
  BuffList_TYPE_array *v403; // x20
  BuffList_TYPE_array *v404; // x21
  BuffList_ActInfo_o *v405; // x22
  const MethodInfo *v406; // x4
  BuffList_TYPE_array *v407; // x20
  BuffList_TYPE_array *v408; // x21
  BuffList_ActInfo_o *v409; // x22
  const MethodInfo *v410; // x4
  BuffList_TYPE_array *v411; // x20
  BuffList_TYPE_array *v412; // x21
  BuffList_ActInfo_o *v413; // x22
  const MethodInfo *v414; // x4
  BuffList_TYPE_array *v415; // x20
  BuffList_TYPE_array *v416; // x21
  BuffList_ActInfo_o *v417; // x22
  const MethodInfo *v418; // x4
  BuffList_TYPE_array *v419; // x20
  BuffList_TYPE_array *v420; // x22
  BuffList_ActInfo_o *v421; // x21
  const MethodInfo *v422; // x4
  BuffList_TYPE_array *v423; // x20
  BuffList_TYPE_array *v424; // x21
  BuffList_ActInfo_o *v425; // x22
  const MethodInfo *v426; // x4
  BuffList_TYPE_array *v427; // x20
  BuffList_TYPE_array *v428; // x21
  BuffList_ActInfo_o *v429; // x22
  const MethodInfo *v430; // x4
  BuffList_TYPE_array *v431; // x20
  BuffList_TYPE_array *v432; // x21
  BuffList_ActInfo_o *v433; // x22
  const MethodInfo *v434; // x4
  BuffList_TYPE_array *v435; // x20
  BuffList_TYPE_array *v436; // x21
  BuffList_ActInfo_o *v437; // x22
  const MethodInfo *v438; // x4
  BuffList_TYPE_array *v439; // x20
  BuffList_TYPE_array *v440; // x21
  BuffList_ActInfo_o *v441; // x22
  const MethodInfo *v442; // x4
  BuffList_TYPE_array *v443; // x20
  BuffList_TYPE_array *v444; // x21
  BuffList_ActInfo_o *v445; // x22
  const MethodInfo *v446; // x4
  BuffList_TYPE_array *v447; // x20
  BuffList_TYPE_array *v448; // x22
  BuffList_ActInfo_o *v449; // x21
  const MethodInfo *v450; // x4
  BuffList_TYPE_array *v451; // x20
  BuffList_TYPE_array *v452; // x21
  BuffList_ActInfo_o *v453; // x22
  const MethodInfo *v454; // x4
  BuffList_TYPE_array *v455; // x20
  BuffList_TYPE_array *v456; // x21
  BuffList_ActInfo_o *v457; // x22
  const MethodInfo *v458; // x4
  BuffList_TYPE_array *v459; // x20
  BuffList_TYPE_array *v460; // x21
  BuffList_ActInfo_o *v461; // x22
  const MethodInfo *v462; // x4
  BuffList_TYPE_array *v463; // x20
  BuffList_TYPE_array *v464; // x21
  BuffList_ActInfo_o *v465; // x22
  const MethodInfo *v466; // x4
  BuffList_TYPE_array *v467; // x20
  BuffList_TYPE_array *v468; // x21
  BuffList_ActInfo_o *v469; // x22
  const MethodInfo *v470; // x4
  BuffList_TYPE_array *v471; // x20
  BuffList_TYPE_array *v472; // x21
  BuffList_ActInfo_o *v473; // x22
  const MethodInfo *v474; // x4
  BuffList_TYPE_array *v475; // x20
  BuffList_TYPE_array *v476; // x22
  BuffList_ActInfo_o *v477; // x21
  const MethodInfo *v478; // x4
  BuffList_TYPE_array *v479; // x20
  BuffList_TYPE_array *v480; // x21
  BuffList_ActInfo_o *v481; // x22
  const MethodInfo *v482; // x4
  BuffList_TYPE_array *v483; // x20
  BuffList_TYPE_array *v484; // x21
  BuffList_ActInfo_o *v485; // x22
  const MethodInfo *v486; // x4
  BuffList_TYPE_array *v487; // x20
  BuffList_TYPE_array *v488; // x22
  BuffList_ActInfo_o *v489; // x21
  const MethodInfo *v490; // x4
  BuffList_TYPE_array *v491; // x20
  BuffList_TYPE_array *v492; // x21
  BuffList_ActInfo_o *v493; // x22
  const MethodInfo *v494; // x4
  il2cpp_array_size_t v495; // w8
  BuffList_TYPE_array *v496; // x20
  BuffList_TYPE_array *v497; // x21
  BuffList_ActInfo_o *v498; // x22
  const MethodInfo *v499; // x4
  BuffList_TYPE_array *v500; // x20
  BuffList_TYPE_array *v501; // x22
  BuffList_ActInfo_o *v502; // x21
  const MethodInfo *v503; // x4
  BuffList_TYPE_array *v504; // x20
  BuffList_TYPE_array *v505; // x21
  BuffList_ActInfo_o *v506; // x22
  const MethodInfo *v507; // x4
  BuffList_TYPE_array *v508; // x20
  BuffList_TYPE_array *v509; // x21
  BuffList_ActInfo_o *v510; // x22
  const MethodInfo *v511; // x4
  BuffList_TYPE_array *v512; // x20
  BuffList_TYPE_array *v513; // x21
  BuffList_ActInfo_o *v514; // x22
  const MethodInfo *v515; // x4
  BuffList_TYPE_array *v516; // x20
  BuffList_TYPE_array *v517; // x21
  BuffList_ActInfo_o *v518; // x22
  const MethodInfo *v519; // x4
  BuffList_TYPE_array *v520; // x20
  BuffList_TYPE_array *v521; // x21
  BuffList_ActInfo_o *v522; // x22
  const MethodInfo *v523; // x4
  BuffList_TYPE_array *v524; // x20
  BuffList_TYPE_array *v525; // x21
  BuffList_ActInfo_o *v526; // x22
  const MethodInfo *v527; // x4
  BuffList_TYPE_array *v528; // x20
  BuffList_TYPE_array *v529; // x21
  BuffList_ActInfo_o *v530; // x22
  const MethodInfo *v531; // x4
  BuffList_TYPE_array *v532; // x20
  BuffList_TYPE_array *v533; // x21
  BuffList_ActInfo_o *v534; // x22
  const MethodInfo *v535; // x4
  BuffList_TYPE_array *v536; // x20
  BuffList_TYPE_array *v537; // x21
  BuffList_ActInfo_o *v538; // x22
  const MethodInfo *v539; // x4
  BuffList_TYPE_array *v540; // x20
  BuffList_TYPE_array *v541; // x21
  BuffList_ActInfo_o *v542; // x22
  const MethodInfo *v543; // x4
  BuffList_TYPE_array *v544; // x20
  BuffList_TYPE_array *v545; // x21
  BuffList_ActInfo_o *v546; // x22
  const MethodInfo *v547; // x4
  BuffList_TYPE_array *v548; // x20
  BuffList_TYPE_array *v549; // x21
  BuffList_ActInfo_o *v550; // x22
  const MethodInfo *v551; // x4
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
  il2cpp_array_size_t v568; // w8
  BuffList_TYPE_array *v569; // x20
  BuffList_TYPE_array *v570; // x21
  BuffList_ActInfo_o *v571; // x22
  const MethodInfo *v572; // x4
  BuffList_TYPE_array *v573; // x20
  BuffList_TYPE_array *v574; // x21
  BuffList_ActInfo_o *v575; // x22
  const MethodInfo *v576; // x4
  BuffList_TYPE_array *v577; // x20
  BuffList_TYPE_array *v578; // x21
  BuffList_ActInfo_o *v579; // x22
  const MethodInfo *v580; // x4
  BuffList_TYPE_array *v581; // x20
  BuffList_TYPE_array *v582; // x21
  BuffList_ActInfo_o *v583; // x22
  const MethodInfo *v584; // x4
  BuffList_TYPE_array *v585; // x20
  BuffList_TYPE_array *v586; // x21
  BuffList_ActInfo_o *v587; // x22
  const MethodInfo *v588; // x4
  BuffList_TYPE_array *v589; // x20
  BuffList_TYPE_array *v590; // x21
  BuffList_ActInfo_o *v591; // x22
  const MethodInfo *v592; // x4
  BuffList_TYPE_array *v593; // x20
  BuffList_TYPE_array *v594; // x21
  BuffList_ActInfo_o *v595; // x22
  const MethodInfo *v596; // x4
  BuffList_TYPE_array *v597; // x20
  BuffList_TYPE_array *v598; // x21
  BuffList_ActInfo_o *v599; // x22
  const MethodInfo *v600; // x4
  BuffList_TYPE_array *v601; // x20
  BuffList_TYPE_array *v602; // x21
  BuffList_ActInfo_o *v603; // x22
  const MethodInfo *v604; // x4
  BuffList_TYPE_array *v605; // x20
  BuffList_TYPE_array *v606; // x21
  BuffList_ActInfo_o *v607; // x22
  const MethodInfo *v608; // x4
  BuffList_TYPE_array *v609; // x20
  BuffList_TYPE_array *v610; // x21
  BuffList_ActInfo_o *v611; // x22
  const MethodInfo *v612; // x4
  BuffList_TYPE_array *v613; // x20
  BuffList_TYPE_array *v614; // x21
  BuffList_ActInfo_o *v615; // x22
  const MethodInfo *v616; // x4
  BuffList_TYPE_array *v617; // x20
  BuffList_TYPE_array *v618; // x21
  BuffList_ActInfo_o *v619; // x22
  const MethodInfo *v620; // x4
  BuffList_TYPE_array *v621; // x20
  BuffList_TYPE_array *v622; // x22
  BuffList_ActInfo_o *v623; // x21
  const MethodInfo *v624; // x4
  BuffList_TYPE_array *v625; // x20
  BuffList_TYPE_array *v626; // x21
  BuffList_ActInfo_o *v627; // x22
  const MethodInfo *v628; // x4
  BuffList_TYPE_array *v629; // x20
  BuffList_TYPE_array *v630; // x21
  BuffList_ActInfo_o *v631; // x22
  const MethodInfo *v632; // x4
  BuffList_TYPE_array *v633; // x20
  BuffList_TYPE_array *v634; // x21
  BuffList_ActInfo_o *v635; // x22
  const MethodInfo *v636; // x4
  BuffList_TYPE_array *v637; // x20
  BuffList_TYPE_array *v638; // x21
  BuffList_ActInfo_o *v639; // x22
  const MethodInfo *v640; // x4
  BuffList_TYPE_array *v641; // x20
  BuffList_TYPE_array *v642; // x21
  BuffList_ActInfo_o *v643; // x22
  const MethodInfo *v644; // x4
  BuffList_TYPE_array *v645; // x20
  BuffList_TYPE_array *v646; // x21
  BuffList_ActInfo_o *v647; // x22
  const MethodInfo *v648; // x4
  int32_t v649; // w2
  const MethodInfo *v650; // x3
  const MethodInfo *v651; // x3
  il2cpp_array_size_t v652; // w8
  struct BuffList_StaticFields *static_fields; // x0
  System_Array_o *v654; // x0
  System_Array_o *v655; // x19
  struct BuffList_StaticFields *v656; // x0
  int32_t v657; // w2
  const MethodInfo *v658; // x3
  System_Collections_Generic_HashSet_T__o *v659; // x19
  struct BuffList_StaticFields *v660; // x0
  int32_t v661; // w2
  const MethodInfo *v662; // x3
  System_RuntimeFieldHandle_o v663; // 0:w1.4
  System_RuntimeFieldHandle_o v664; // 0:w1.4

  if ( (byte_4B438B5 & 1) == 0 )
  {
    sub_1BDB878(&BuffList_ACTION___TypeInfo, v1);
    sub_1BDB878(&BuffList_ActInfo_TypeInfo, v2);
    sub_1BDB878(&BuffList_TypeInfo, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo___ctor__, v5);
    sub_1BDB878(&System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_BuffList_TYPE___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_HashSet_BuffList_TYPE__TypeInfo, v9);
    sub_1BDB878(&BuffList_TYPE___TypeInfo, v10);
    sub_1BDB878(&BuffList_ToFieldActInfo_TypeInfo, v11);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__4EECD95FEC87B9ABE1EA9376D9C9CF1F7F1C01299268E427022C2F5192383D9E,
      v12);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__F74CB50F9D18C1E2A044410ED05D3C7285B0A0EF1A7321D9BD37EE90BF1D943E,
      v13);
    byte_4B438B5 = 1;
  }
  v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v14,
    (const MethodInfo_336C63C *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo___ctor__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  max_length = v15->max_length;
  v19 = v15;
  if ( !max_length )
    goto LABEL_466;
  v15->m_Items[1] = 1;
  if ( max_length == 1 )
    goto LABEL_466;
  v15->m_Items[2] = 52;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  v20 = v15->max_length;
  v21 = v15;
  if ( !v20 )
    goto LABEL_466;
  v15->m_Items[1] = 66;
  if ( v20 == 1 )
    goto LABEL_466;
  v15->m_Items[2] = 60;
  v22 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v22, 3, v19, v21, v23);
  if ( !v14 )
    goto LABEL_465;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    1,
    (Il2CppObject *)v22,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  v24 = v15->max_length;
  v25 = v15;
  if ( !v24 )
    goto LABEL_466;
  v15->m_Items[1] = 105;
  if ( v24 == 1 )
    goto LABEL_466;
  v15->m_Items[2] = 128;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  v26 = v15->max_length;
  v27 = v15;
  if ( !v26 )
    goto LABEL_466;
  v15->m_Items[1] = 106;
  if ( v26 == 1 )
    goto LABEL_466;
  v15->m_Items[2] = 129;
  v28 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v28, 1, v25, v27, v29);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    2,
    (Il2CppObject *)v28,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v30 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 9;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v31 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 10;
  v32 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v32, 3, v30, v31, v33);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    3,
    (Il2CppObject *)v32,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v34 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 42;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v35 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 43;
  v36 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v36, 2, v34, v35, v37);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    4,
    (Il2CppObject *)v36,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v38 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v39 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 43;
  v40 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v40, 2, v38, v39, v41);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    5,
    (Il2CppObject *)v40,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v42 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 91;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v43 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 92;
  v44 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v44, 3, v42, v43, v45);
  if ( !v44 )
    goto LABEL_465;
  v44->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    6,
    (Il2CppObject *)v44,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v46 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 11;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v47 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 12;
  v48 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v48, 1, v46, v47, v49);
  if ( !v48 )
    goto LABEL_465;
  v48->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    7,
    (Il2CppObject *)v48,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v50 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 110;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v51 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 111;
  v52 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v52, 1, v50, v51, v53);
  if ( !v52 )
    goto LABEL_465;
  v52->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    8,
    (Il2CppObject *)v52,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v54 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 112;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v55 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 113;
  v56 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v56, 1, v54, v55, v57);
  if ( !v56 )
    goto LABEL_465;
  v56->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    9,
    (Il2CppObject *)v56,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v58 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 214;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v59 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 215;
  v60 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v60, 2, v58, v59, v61);
  if ( !v60 )
    goto LABEL_465;
  v60->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    10,
    (Il2CppObject *)v60,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v62 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 18;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v63 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 19;
  v64 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v64, 1, v62, v63, v65);
  if ( !v64 )
    goto LABEL_465;
  v64->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    11,
    (Il2CppObject *)v64,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v66 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 15;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v67 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 16;
  v68 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v68, 1, v66, v67, v69);
  if ( !v68 )
    goto LABEL_465;
  v68->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    12,
    (Il2CppObject *)v68,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v70 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 13;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v71 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 14;
  v72 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v72, 0, v70, v71, v73);
  if ( !v72 )
    goto LABEL_465;
  v72->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    13,
    (Il2CppObject *)v72,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v74 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 22;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v75 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 23;
  v76 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v76, 0, v74, v75, v77);
  if ( !v76 )
    goto LABEL_465;
  v76->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    14,
    (Il2CppObject *)v76,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v78 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 22;
  v79 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v80 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v80, 0, v78, v79, v81);
  if ( !v80 )
    goto LABEL_465;
  v80->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    133,
    (Il2CppObject *)v80,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v82 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 195;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v83 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 196;
  v84 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v84, 0, v82, v83, v85);
  if ( !v84 )
    goto LABEL_465;
  v84->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    134,
    (Il2CppObject *)v84,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v86 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v87 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 227;
  v88 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v88, 0, v86, v87, v89);
  if ( !v88 )
    goto LABEL_465;
  v88->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    154,
    (Il2CppObject *)v88,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v90 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 72;
  v91 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v92 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v92, 0, v90, v91, v93);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    15,
    (Il2CppObject *)v92,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v94 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 26;
  v95 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v96 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v96, 0, v94, v95, v97);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    16,
    (Il2CppObject *)v96,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v98 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 25;
  v99 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v100 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v100, 0, v98, v99, v101);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    17,
    (Il2CppObject *)v100,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v102 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 24;
  v103 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v104 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v104, 0, v102, v103, v105);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    18,
    (Il2CppObject *)v104,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v106 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 107;
  v107 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v108 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v108, 0, v106, v107, v109);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    19,
    (Il2CppObject *)v108,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v110 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 108;
  v111 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v112 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v112, 0, v110, v111, v113);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    20,
    (Il2CppObject *)v112,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v114 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 109;
  v115 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v116 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v116, 0, v114, v115, v117);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    21,
    (Il2CppObject *)v116,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  v118 = v15->max_length;
  v119 = v15;
  if ( !v118 )
    goto LABEL_466;
  v15->m_Items[1] = 51;
  if ( v118 == 1 )
    goto LABEL_466;
  v15->m_Items[2] = 52;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  v120 = v15->max_length;
  v121 = v15;
  if ( !v120 )
    goto LABEL_466;
  v15->m_Items[1] = 221;
  if ( v120 == 1 )
    goto LABEL_466;
  v15->m_Items[2] = 60;
  v122 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v122, 3, v119, v121, v123);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    22,
    (Il2CppObject *)v122,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  v124 = v15->max_length;
  v125 = v15;
  if ( !v124 )
    goto LABEL_466;
  v15->m_Items[1] = 105;
  if ( v124 == 1 )
    goto LABEL_466;
  v15->m_Items[2] = 220;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  v126 = v15->max_length;
  v127 = v15;
  if ( !v126 )
    goto LABEL_466;
  v15->m_Items[1] = 106;
  if ( v126 == 1 )
    goto LABEL_466;
  v15->m_Items[2] = 222;
  v128 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v128, 1, v125, v127, v129);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    23,
    (Il2CppObject *)v128,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v130 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 17;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v131 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 63;
  v132 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v132, 3, v130, v131, v133);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    24,
    (Il2CppObject *)v132,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v134 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 93;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v135 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 94;
  v136 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v136, 3, v134, v135, v137);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    25,
    (Il2CppObject *)v136,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  v138 = v15->max_length;
  v139 = v15;
  if ( !v138 )
    goto LABEL_466;
  v15->m_Items[1] = 50;
  if ( v138 == 1 )
    goto LABEL_466;
  v15->m_Items[2] = 52;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  v140 = v15->max_length;
  v141 = v15;
  if ( !v140 )
    goto LABEL_466;
  v15->m_Items[1] = 224;
  if ( v140 == 1 )
    goto LABEL_466;
  v15->m_Items[2] = 60;
  v142 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v142, 3, v139, v141, v143);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    26,
    (Il2CppObject *)v142,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  v144 = v15->max_length;
  v145 = v15;
  if ( !v144 )
    goto LABEL_466;
  v15->m_Items[1] = 105;
  if ( v144 == 1 )
    goto LABEL_466;
  v15->m_Items[2] = 223;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  v146 = v15->max_length;
  v147 = v15;
  if ( !v146 )
    goto LABEL_466;
  v15->m_Items[1] = 106;
  if ( v146 == 1 )
    goto LABEL_466;
  v15->m_Items[2] = 225;
  v148 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v148, 1, v145, v147, v149);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    27,
    (Il2CppObject *)v148,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v150 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 3;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v151 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 4;
  v152 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v152, 3, v150, v151, v153);
  if ( !v152 )
    goto LABEL_465;
  v152->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    28,
    (Il2CppObject *)v152,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v154 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 2;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v155 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 61;
  v156 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v156, 3, v154, v155, v157);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    29,
    (Il2CppObject *)v156,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v158 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 5;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v159 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 62;
  v160 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v160, 0, v158, v159, v161);
  if ( !v160 )
    goto LABEL_465;
  v160->fields.baseParam = 0;
  v160->fields.isRec = 0;
  v160->fields.plusAction = 71;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    30,
    (Il2CppObject *)v160,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v162 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 6;
  v163 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v164 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v164, 0, v162, v163, v165);
  if ( !v164 )
    goto LABEL_465;
  v164->fields.baseParam = 0;
  v164->fields.isRec = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    31,
    (Il2CppObject *)v164,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v166 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 7;
  v167 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v168 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v168, 0, v166, v167, v169);
  if ( !v168 )
    goto LABEL_465;
  v168->fields.baseParam = 0;
  v168->fields.isRec = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    32,
    (Il2CppObject *)v168,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v170 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 8;
  v171 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v172 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v172, 0, v170, v171, v173);
  if ( !v172 )
    goto LABEL_465;
  v172->fields.baseParam = 0;
  v172->fields.isRec = 0;
  v172->fields.plusAction = 72;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    33,
    (Il2CppObject *)v172,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v174 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 197;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v175 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 198;
  v176 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v176, 0, v174, v175, v177);
  if ( !v176 )
    goto LABEL_465;
  v176->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    135,
    (Il2CppObject *)v176,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v178 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 64;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v179 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 65;
  v180 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v180, 3, v178, v179, v181);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    34,
    (Il2CppObject *)v180,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v182 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 114;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v183 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 115;
  v184 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v184, 0, v182, v183, v185);
  if ( !v184 )
    goto LABEL_465;
  v184->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    35,
    (Il2CppObject *)v184,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v186 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 27;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v187 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 28;
  v188 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v188, 3, v186, v187, v189);
  if ( !v188 )
    goto LABEL_465;
  v188->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    36,
    (Il2CppObject *)v188,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v190 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 29;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v191 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 30;
  v192 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v192, 3, v190, v191, v193);
  if ( !v192 )
    goto LABEL_465;
  v192->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    37,
    (Il2CppObject *)v192,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v194 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 31;
  v195 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v196 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v196, 0, v194, v195, v197);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    38,
    (Il2CppObject *)v196,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v198 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 32;
  v199 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v200 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v200, 0, v198, v199, v201);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    39,
    (Il2CppObject *)v200,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v202 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 33;
  v203 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v204 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v204, 0, v202, v203, v205);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    40,
    (Il2CppObject *)v204,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v206 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 34;
  v207 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v208 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v208, 0, v206, v207, v209);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    41,
    (Il2CppObject *)v208,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v210 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 35;
  v211 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v212 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v212, 0, v210, v211, v213);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    42,
    (Il2CppObject *)v212,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v214 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 40;
  v215 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v216 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v216, 0, v214, v215, v217);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    43,
    (Il2CppObject *)v216,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v218 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 41;
  v219 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v220 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v220, 0, v218, v219, v221);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    44,
    (Il2CppObject *)v220,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v222 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 38;
  v223 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v224 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v224, 0, v222, v223, v225);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    45,
    (Il2CppObject *)v224,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v226 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 70;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v227 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 71;
  v228 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v228, 3, v226, v227, v229);
  if ( !v228 )
    goto LABEL_465;
  v228->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    46,
    (Il2CppObject *)v228,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v230 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 73;
  v231 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v232 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v232, 3, v230, v231, v233);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    47,
    (Il2CppObject *)v232,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v234 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 74;
  v235 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v236 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v236, 3, v234, v235, v237);
  if ( !v236 )
    goto LABEL_465;
  v236->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    48,
    (Il2CppObject *)v236,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v238 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 75;
  v239 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v240 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v240, 3, v238, v239, v241);
  if ( !v240 )
    goto LABEL_465;
  v240->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    49,
    (Il2CppObject *)v240,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v242 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 77;
  v243 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v244 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v244, 0, v242, v243, v245);
  if ( !v244 )
    goto LABEL_465;
  v244->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    50,
    (Il2CppObject *)v244,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v246 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 78;
  v247 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v248 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v248, 0, v246, v247, v249);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    51,
    (Il2CppObject *)v248,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v250 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 149;
  v251 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v252 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v252, 0, v250, v251, v253);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    89,
    (Il2CppObject *)v252,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v254 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 79;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v255 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 80;
  v256 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v256, 3, v254, v255, v257);
  if ( !v256 )
    goto LABEL_465;
  v256->fields.baseValue = 1000;
  v256->fields.IsChangeMaxHp = 1;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    52,
    (Il2CppObject *)v256,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v258 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 81;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v259 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 82;
  v260 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v260, 0, v258, v259, v261);
  if ( !v260 )
    goto LABEL_465;
  v260->fields.baseParam = 0;
  v260->fields.IsChangeMaxHp = 1;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    53,
    (Il2CppObject *)v260,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v262 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 84;
  v263 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v264 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v264, 0, v262, v263, v265);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    54,
    (Il2CppObject *)v264,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v266 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 226;
  v267 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v268 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v268, 0, v266, v267, v269);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    153,
    (Il2CppObject *)v268,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v270 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 85;
  v271 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v272 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v272, 0, v270, v271, v273);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    55,
    (Il2CppObject *)v272,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v274 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 87;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v275 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 88;
  v276 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v276, 3, v274, v275, v277);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    56,
    (Il2CppObject *)v276,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v278 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 89;
  v279 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v280 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v280, 0, v278, v279, v281);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    57,
    (Il2CppObject *)v280,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v282 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 90;
  v283 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v284 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v284, 0, v282, v283, v285);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    58,
    (Il2CppObject *)v284,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v286 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 95;
  v287 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v288 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v288, 0, v286, v287, v289);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    59,
    (Il2CppObject *)v288,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v290 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 96;
  v291 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v292 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v292, 0, v290, v291, v293);
  if ( !v292 )
    goto LABEL_465;
  v292->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    60,
    (Il2CppObject *)v292,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v294 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 98;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v295 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 99;
  v296 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v296, 3, v294, v295, v297);
  if ( !v296 )
    goto LABEL_465;
  v296->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    61,
    (Il2CppObject *)v296,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v298 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 100;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v299 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 101;
  v300 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v300, 3, v298, v299, v301);
  if ( !v300 )
    goto LABEL_465;
  v300->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    62,
    (Il2CppObject *)v300,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v302 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 102;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v303 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 103;
  v304 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v304, 3, v302, v303, v305);
  if ( !v304 )
    goto LABEL_465;
  v304->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    63,
    (Il2CppObject *)v304,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v306 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 86;
  v307 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v308 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v308, 0, v306, v307, v309);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    64,
    (Il2CppObject *)v308,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v310 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 97;
  v311 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v312 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v312, 0, v310, v311, v313);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    65,
    (Il2CppObject *)v312,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v314 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 116;
  v315 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v316 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v316, 0, v314, v315, v317);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    66,
    (Il2CppObject *)v316,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v318 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 117;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v319 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 118;
  v320 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v320, 1, v318, v319, v321);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    67,
    (Il2CppObject *)v320,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v322 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 119;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v323 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 120;
  v324 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v324, 0, v322, v323, v325);
  if ( !v324 )
    goto LABEL_465;
  v324->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    68,
    (Il2CppObject *)v324,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v326 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 121;
  v327 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v328 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v328, 0, v326, v327, v329);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    69,
    (Il2CppObject *)v328,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v330 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 122;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v331 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 123;
  v332 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v332, 0, v330, v331, v333);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    70,
    (Il2CppObject *)v332,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v334 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 124;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v335 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 125;
  v336 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v336, 0, v334, v335, v337);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    71,
    (Il2CppObject *)v336,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v338 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 126;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v339 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 127;
  v340 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v340, 0, v338, v339, v341);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    72,
    (Il2CppObject *)v340,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v342 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 130;
  v343 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v344 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v344, 0, v342, v343, v345);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    73,
    (Il2CppObject *)v344,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v346 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 131;
  v347 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v348 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v348, 0, v346, v347, v349);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    74,
    (Il2CppObject *)v348,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v350 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 132;
  v351 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v352 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v352, 0, v350, v351, v353);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    75,
    (Il2CppObject *)v352,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v354 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 133;
  v355 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v356 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v356, 0, v354, v355, v357);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    76,
    (Il2CppObject *)v356,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v358 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 134;
  v359 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v360 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v360, 0, v358, v359, v361);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    77,
    (Il2CppObject *)v360,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v362 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 209;
  v363 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v364 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v364, 0, v362, v363, v365);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    146,
    (Il2CppObject *)v364,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v366 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 135;
  v367 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v368 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v368, 1, v366, v367, v369);
  if ( !v368 )
    goto LABEL_465;
  v368->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    78,
    (Il2CppObject *)v368,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v370 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 136;
  v371 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v372 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v372, 1, v370, v371, v373);
  if ( !v372 )
    goto LABEL_465;
  v372->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    79,
    (Il2CppObject *)v372,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v374 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 137;
  v375 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v376 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v376, 0, v374, v375, v377);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    80,
    (Il2CppObject *)v376,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v378 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 138;
  v379 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v380 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v380, 0, v378, v379, v381);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    81,
    (Il2CppObject *)v380,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v382 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 139;
  v383 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v384 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v384, 0, v382, v383, v385);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    82,
    (Il2CppObject *)v384,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v386 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 140;
  v387 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v388 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v388, 0, v386, v387, v389);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    83,
    (Il2CppObject *)v388,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v390 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 141;
  v391 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v392 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v392, 0, v390, v391, v393);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    84,
    (Il2CppObject *)v392,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v394 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 142;
  v395 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v396 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v396, 0, v394, v395, v397);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    85,
    (Il2CppObject *)v396,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v398 = (System_Array_o *)sub_1BDB920(BuffList_TYPE___TypeInfo, 4LL);
  v663.fields.value = Field__PrivateImplementationDetails__F74CB50F9D18C1E2A044410ED05D3C7285B0A0EF1A7321D9BD37EE90BF1D943E;
  v399 = (BuffList_TYPE_array *)v398;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v398, v663, 0LL);
  v400 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v401 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v401, 0, v399, v400, v402);
  if ( !v401 )
    goto LABEL_465;
  v401->fields.baseParam = -1;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    86,
    (Il2CppObject *)v401,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v403 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 144;
  v404 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v405 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v405, 0, v403, v404, v406);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    87,
    (Il2CppObject *)v405,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v407 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 148;
  v408 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v409 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v409, 0, v407, v408, v410);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    88,
    (Il2CppObject *)v409,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v411 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 150;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v412 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 151;
  v413 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v413, 3, v411, v412, v414);
  if ( !v413 )
    goto LABEL_465;
  v413->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    90,
    (Il2CppObject *)v413,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v415 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 152;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v416 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 153;
  v417 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v417, 3, v415, v416, v418);
  if ( !v417 )
    goto LABEL_465;
  v417->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    91,
    (Il2CppObject *)v417,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v419 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 154;
  v420 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v421 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v421, 3, v419, v420, v422);
  if ( !v421 )
    goto LABEL_465;
  v421->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    92,
    (Il2CppObject *)v421,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v423 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 155;
  v424 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v425 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v425, 3, v423, v424, v426);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    93,
    (Il2CppObject *)v425,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v427 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 156;
  v428 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v429 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v429, 0, v427, v428, v430);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    94,
    (Il2CppObject *)v429,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v431 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 157;
  v432 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v433 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v433, 0, v431, v432, v434);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    95,
    (Il2CppObject *)v433,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v435 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 158;
  v436 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v437 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v437, 0, v435, v436, v438);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    96,
    (Il2CppObject *)v437,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v439 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 159;
  v440 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v441 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v441, 0, v439, v440, v442);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    97,
    (Il2CppObject *)v441,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v443 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 160;
  v444 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v445 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v445, 0, v443, v444, v446);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    98,
    (Il2CppObject *)v445,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v447 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 161;
  v448 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v449 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v449, 0, v447, v448, v450);
  if ( !v449 )
    goto LABEL_465;
  v449->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    99,
    (Il2CppObject *)v449,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v451 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 163;
  v452 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v453 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v453, 0, v451, v452, v454);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    100,
    (Il2CppObject *)v453,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v455 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 162;
  v456 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v457 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v457, 3, v455, v456, v458);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    101,
    (Il2CppObject *)v457,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v459 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 165;
  v460 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v461 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v461, 0, v459, v460, v462);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    102,
    (Il2CppObject *)v461,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v463 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 166;
  v464 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v465 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v465, 0, v463, v464, v466);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    103,
    (Il2CppObject *)v465,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v467 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 10002;
  v468 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v469 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ToFieldActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v469, 0, v467, v468, v470);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    105,
    (Il2CppObject *)v469,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v471 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 10003;
  v472 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v473 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ToFieldActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v473, 0, v471, v472, v474);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    112,
    (Il2CppObject *)v473,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v475 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 27;
  v476 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v477 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v477, 3, v475, v476, v478);
  if ( !v477 )
    goto LABEL_465;
  v477->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    106,
    (Il2CppObject *)v477,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v479 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 167;
  v480 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v481 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v481, 3, v479, v480, v482);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    107,
    (Il2CppObject *)v481,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v483 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 168;
  v484 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v485 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v485, 0, v483, v484, v486);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    108,
    (Il2CppObject *)v485,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v487 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 169;
  v488 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v489 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v489, 0, v487, v488, v490);
  if ( !v489 )
    goto LABEL_465;
  v489->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    109,
    (Il2CppObject *)v489,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v491 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 170;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v492 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 171;
  v493 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v493, 0, v491, v492, v494);
  if ( !v493 )
    goto LABEL_465;
  v493->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    110,
    (Il2CppObject *)v493,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  v495 = v15->max_length;
  v496 = v15;
  if ( !v495 )
    goto LABEL_466;
  v15->m_Items[1] = 172;
  if ( v495 == 1 )
    goto LABEL_466;
  v15->m_Items[2] = 173;
  v497 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v498 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v498, 0, v496, v497, v499);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    111,
    (Il2CppObject *)v498,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v500 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 174;
  v501 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v502 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v502, 3, v500, v501, v503);
  if ( !v502 )
    goto LABEL_465;
  v502->fields.baseParam = 0;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    113,
    (Il2CppObject *)v502,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v504 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 175;
  v505 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v506 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v506, 0, v504, v505, v507);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    114,
    (Il2CppObject *)v506,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v508 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 176;
  v509 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v510 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v510, 0, v508, v509, v511);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    115,
    (Il2CppObject *)v510,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v512 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 177;
  v513 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v514 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v514, 0, v512, v513, v515);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    116,
    (Il2CppObject *)v514,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v516 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 178;
  v517 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v518 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v518, 0, v516, v517, v519);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    117,
    (Il2CppObject *)v518,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v520 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 179;
  v521 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v522 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v522, 0, v520, v521, v523);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    118,
    (Il2CppObject *)v522,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v524 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 180;
  v525 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v526 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v526, 0, v524, v525, v527);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    119,
    (Il2CppObject *)v526,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v528 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 181;
  v529 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v530 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v530, 0, v528, v529, v531);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    120,
    (Il2CppObject *)v530,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v532 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 182;
  v533 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v534 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v534, 0, v532, v533, v535);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    121,
    (Il2CppObject *)v534,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v536 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 185;
  v537 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v538 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v538, 0, v536, v537, v539);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    122,
    (Il2CppObject *)v538,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v540 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 187;
  v541 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v542 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v542, 0, v540, v541, v543);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    123,
    (Il2CppObject *)v542,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v544 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 186;
  v545 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v546 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v546, 0, v544, v545, v547);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    124,
    (Il2CppObject *)v546,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v548 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 188;
  v549 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v550 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v550, 0, v548, v549, v551);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    125,
    (Il2CppObject *)v550,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v552 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 189;
  v553 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v554 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v554, 0, v552, v553, v555);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    127,
    (Il2CppObject *)v554,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v556 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 190;
  v557 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v558 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v558, 0, v556, v557, v559);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    128,
    (Il2CppObject *)v558,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v560 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 191;
  v561 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v562 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v562, 0, v560, v561, v563);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    129,
    (Il2CppObject *)v562,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v564 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 192;
  v565 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v566 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v566, 0, v564, v565, v567);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    130,
    (Il2CppObject *)v566,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  v568 = v15->max_length;
  v569 = v15;
  if ( !v568 )
    goto LABEL_466;
  v15->m_Items[1] = 37;
  if ( v568 == 1 )
    goto LABEL_466;
  v15->m_Items[2] = 104;
  v570 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v571 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v571, 0, v569, v570, v572);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    126,
    (Il2CppObject *)v571,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v573 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 194;
  v574 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v575 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v575, 0, v573, v574, v576);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    131,
    (Il2CppObject *)v575,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v577 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 199;
  v578 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v579 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v579, 0, v577, v578, v580);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    136,
    (Il2CppObject *)v579,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v581 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 193;
  v582 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v583 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v583, 0, v581, v582, v584);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    132,
    (Il2CppObject *)v583,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v585 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 200;
  v586 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v587 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v587, 0, v585, v586, v588);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    137,
    (Il2CppObject *)v587,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v589 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 201;
  v590 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v591 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v591, 0, v589, v590, v592);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    138,
    (Il2CppObject *)v591,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v593 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 202;
  v594 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v595 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v595, 0, v593, v594, v596);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    139,
    (Il2CppObject *)v595,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v597 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 203;
  v598 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v599 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v599, 0, v597, v598, v600);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    140,
    (Il2CppObject *)v599,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v601 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 204;
  v602 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v603 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v603, 0, v601, v602, v604);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    141,
    (Il2CppObject *)v603,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v605 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 205;
  v606 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v607 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v607, 0, v605, v606, v608);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    142,
    (Il2CppObject *)v607,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v609 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 206;
  v610 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v611 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v611, 0, v609, v610, v612);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    143,
    (Il2CppObject *)v611,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v613 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 207;
  v614 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v615 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v615, 0, v613, v614, v616);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    144,
    (Il2CppObject *)v615,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v617 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 208;
  v618 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v619 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v619, 0, v617, v618, v620);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    145,
    (Il2CppObject *)v619,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v621 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 210;
  v622 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v623 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v623, 1, v621, v622, v624);
  if ( !v623 )
    goto LABEL_465;
  v623->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    147,
    (Il2CppObject *)v623,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v625 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 211;
  v626 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v627 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v627, 0, v625, v626, v628);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    148,
    (Il2CppObject *)v627,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v629 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 212;
  v630 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v631 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v631, 0, v629, v630, v632);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    149,
    (Il2CppObject *)v631,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v633 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 213;
  v634 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v635 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v635, 0, v633, v634, v636);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    150,
    (Il2CppObject *)v635,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v637 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 216;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v638 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 217;
  v639 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v639, 2, v637, v638, v640);
  if ( !v639 )
    goto LABEL_465;
  v639->fields.baseValue = 1000;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    151,
    (Il2CppObject *)v639,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v641 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 218;
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_465;
  v642 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 219;
  v643 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v643, 2, v641, v642, v644);
  if ( !v643
    || (v643->fields.baseValue = 1000,
        System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v14,
          152,
          (Il2CppObject *)v643,
          (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__),
        (v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_465:
    sub_1BDBAD4(v15, v16);
  }
  v645 = v15;
  if ( !v15->max_length )
    goto LABEL_466;
  v15->m_Items[1] = 228;
  v646 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 0LL);
  v647 = (BuffList_ActInfo_o *)sub_1BDBAC4(BuffList_ActInfo_TypeInfo);
  BuffList_ActInfo___ctor(v647, 0, v645, v646, v648);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v14,
    155,
    (Il2CppObject *)v647,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__Add__);
  BuffList_TypeInfo->static_fields->ActionList = (struct System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__o *)v14;
  sub_1BDB81C((CGThumbnailListItem_o *)BuffList_TypeInfo->static_fields, (int32_t)v14, v649, v650);
  v15 = (BuffList_TYPE_array *)sub_1BDB920(BuffList_TYPE___TypeInfo, 2LL);
  if ( !v15 )
    goto LABEL_465;
  v652 = v15->max_length;
  v16 = v15;
  if ( !v652 || (v15->m_Items[1] = 104, v652 == 1) )
LABEL_466:
    sub_1BDBADC(v15, v16, v17);
  v15->m_Items[2] = 37;
  static_fields = BuffList_TypeInfo->static_fields;
  static_fields->GutsList = v16;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->GutsList, (int32_t)v16, v17, v651);
  v654 = (System_Array_o *)sub_1BDB920(BuffList_ACTION___TypeInfo, 4LL);
  v664.fields.value = Field__PrivateImplementationDetails__4EECD95FEC87B9ABE1EA9376D9C9CF1F7F1C01299268E427022C2F5192383D9E;
  v655 = v654;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v654, v664, 0LL);
  v656 = BuffList_TypeInfo->static_fields;
  v656->CommandCodeFunctionActs = (struct BuffList_ACTION_array *)v655;
  sub_1BDB81C((CGThumbnailListItem_o *)&v656->CommandCodeFunctionActs, (int32_t)v655, v657, v658);
  v659 = (System_Collections_Generic_HashSet_T__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_BuffList_TYPE__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v659,
    (const MethodInfo_358DB24 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE___ctor__);
  if ( !v659 )
    goto LABEL_465;
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v659,
    138,
    (const MethodInfo_358ED28 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v659,
    159,
    (const MethodInfo_358ED28 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v659,
    177,
    (const MethodInfo_358ED28 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v659,
    178,
    (const MethodInfo_358ED28 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Add__);
  v660 = BuffList_TypeInfo->static_fields;
  v660->CommandCodeBuffHash = (struct System_Collections_Generic_HashSet_BuffList_TYPE__o *)v659;
  sub_1BDB81C((CGThumbnailListItem_o *)&v660->CommandCodeBuffHash, (int32_t)v659, v661, v662);
}


bool __fastcall BuffList__CheckAccumulation(int32_t type, const MethodInfo *method)
{
  if ( (byte_4B438B0 & 1) == 0 )
  {
    sub_1BDB878(&BuffList_TypeInfo, method);
    byte_4B438B0 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  return type == 97;
}


bool __fastcall BuffList__CheckGutsType(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  BuffList_c *v4; // x0
  struct BuffList_TYPE_array *GutsList; // x9
  int max_length; // w8
  int i; // w10

  if ( (byte_4B438B2 & 1) == 0 )
  {
    sub_1BDB878(&BuffList_TypeInfo, method);
    byte_4B438B2 = 1;
  }
  v4 = BuffList_TypeInfo;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v4 = BuffList_TypeInfo;
  }
  GutsList = v4->static_fields->GutsList;
  if ( !GutsList )
    sub_1BDBAD4(v4, method);
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
        sub_1BDBADC(v4, method, v2);
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
  if ( (byte_4B438AF & 1) == 0 )
  {
    sub_1BDB878(&BuffList_TypeInfo, method);
    byte_4B438AF = 1;
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

  if ( (byte_4B438B4 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_8801/*"MST_BUFF_INDV_ADD_BUFF_ACTIVE"*/, v1);
    byte_4B438B4 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_8801/*"MST_BUFF_INDV_ADD_BUFF_ACTIVE"*/, 0LL) == 1;
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
  unsigned __int64 v3; // x9
  _BOOL8 v4; // x0
  char v5; // w8
  unsigned int v6; // w9

  if ( type <= 149 )
  {
    if ( type > 95 )
    {
      v2 = type - 97;
      if ( (unsigned int)(type - 97) < 0x35 )
      {
        v3 = 0x18030000000001LL;
        return (v3 >> v2) & 1;
      }
LABEL_14:
      LOBYTE(v4) = 0;
      return v4;
    }
    v5 = type - 76;
    if ( (unsigned int)(type - 76) >= 0x14 )
      goto LABEL_14;
    v6 = 550789;
LABEL_13:
    LODWORD(v4) = (v6 >> v5) & 1;
    return v4;
  }
  if ( type <= 165 )
  {
    v5 = type + 97;
    if ( (unsigned int)(type - 159) >= 7 )
      goto LABEL_14;
    v6 = 67;
    goto LABEL_13;
  }
  v2 = type + 88;
  if ( (unsigned int)(type - 168) >= 0x3B )
    goto LABEL_14;
  v3 = 0x400193F041E7E01LL;
  return (v3 >> v2) & 1;
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
  const MethodInfo *v12; // x3
  Il2CppObject *currentValue; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B438B3 & 1) == 0 )
  {
    sub_1BDB878(&BuffList_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Values__, v3);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__Dispose__,
      v4);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__MoveNext__,
      v5);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__get_Current__,
      v6);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_BuffList_ACTION__BuffList_ActInfo__GetEnumerator__,
      v7);
    byte_4B438B3 = 1;
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
                       (const MethodInfo_336CE20 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Values__)) == 0LL )
  {
    sub_1BDBAD4(ActionList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Int32Enum__object___GetEnumerator(
    &v14,
    ActionList,
    (const MethodInfo_3A033DC *)Method_System_Collections_Generic_Dictionary_ValueCollection_BuffList_ACTION__BuffList_ActInfo__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___MoveNext(
            &v14,
            (const MethodInfo_34934EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__MoveNext__) )
  {
    currentValue = v14.fields._currentValue;
    if ( !v14.fields._currentValue )
      sub_1BDBAD4(0LL, v10);
    v14.fields._currentValue[4].klass = (Il2CppClass *)setData;
    sub_1BDB81C((CGThumbnailListItem_o *)&currentValue[4], (int32_t)setData, v11, v12);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose(
    &v14,
    (const MethodInfo_34934E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_BuffList_ACTION__BuffList_ActInfo__Dispose__);
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

  if ( (byte_4B438AE & 1) == 0 )
  {
    sub_1BDB878(&BuffList_TypeInfo, opponentSvt);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Item__, v5);
    byte_4B438AE = 1;
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
           (const MethodInfo_336CF70 *)Method_System_Collections_Generic_Dictionary_BuffList_ACTION__BuffList_ActInfo__get_Item__);
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
    sub_1BDBAD4(ActionList, opponentSvt);
  }
  return v9;
}


bool __fastcall BuffList__isSpHit(int32_t type, const MethodInfo *method)
{
  if ( (byte_4B438B1 & 1) == 0 )
  {
    sub_1BDB878(&BuffList_TypeInfo, method);
    byte_4B438B1 = 1;
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
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BuffList_BaseInvokeCond_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  this->fields.limit = 3;
  this->fields.baseParam = 1000;
  this->fields.isRec = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.limit = inLimit;
  this->fields.plusTypes = inPlus;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.plusTypes, (int32_t)inPlus, v9, v10);
  this->fields.minusTypes = inMinus;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.minusTypes, (int32_t)inMinus, v11, v12);
  v13 = (struct BuffList_BaseInvokeCond_o *)((__int64 (__fastcall *)(BuffList_ActInfo_o *, _QWORD, void *))this->klass->vtable._4_MakeInvokeCond.method)(
                                              this,
                                              0LL,
                                              this->klass[1]._1.image);
  this->fields._OpponentInvokeCond_k__BackingField = v13;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._OpponentInvokeCond_k__BackingField, (int32_t)v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
BuffList_BaseInvokeCond_o *__fastcall BuffList_ActInfo__MakeInvokeCond(
        BuffList_ActInfo_o *this,
        bool isSelfSide,
        const MethodInfo *method)
{
  BuffList_BaseInvokeCond_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4B438BA & 1) == 0 )
  {
    sub_1BDB878(&BuffList_BaseInvokeCond_TypeInfo, isSelfSide);
    byte_4B438BA = 1;
  }
  v4 = (BuffList_BaseInvokeCond_o *)sub_1BDBAC4(BuffList_BaseInvokeCond_TypeInfo);
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
  const MethodInfo *v3; // x3

  this->fields._OpponentInvokeCond_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._OpponentInvokeCond_k__BackingField,
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
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_String_o **v17; // x8
  struct System_String_o *v18; // x1

  if ( (byte_4B438B7 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int_____ctor__, isSelfSide);
    sub_1BDB878(&System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____TypeInfo, v5);
    sub_1BDB878(&StringLiteral_12649/*"Self"*/, v6);
    sub_1BDB878(&StringLiteral_10023/*"Opponent"*/, v7);
    sub_1BDB878(&StringLiteral_1/*""*/, v8);
    byte_4B438B7 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v9,
    (const MethodInfo_336C63C *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int_____ctor__);
  this->fields.dicCacheSelfValue = (struct System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____o *)v9;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dicCacheSelfValue, (int32_t)v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.targetSideStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetSideStr, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( isSelfSide )
    v17 = (struct System_String_o **)&StringLiteral_12649/*"Self"*/;
  else
    v17 = (struct System_String_o **)&StringLiteral_10023/*"Opponent"*/;
  v18 = *v17;
  this->fields.targetSideStr = *v17;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetSideStr, (int32_t)v18, v15, v16);
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

  if ( (byte_4B438B9 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____ContainsKey__, buffData);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____get_Item__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____set_Item__, v10);
    sub_1BDB878(&int___TypeInfo, v11);
    byte_4B438B9 = 1;
  }
  dicCacheSelfValue = (BattleBuffData_o *)this->fields.dicCacheSelfValue;
  if ( !dicCacheSelfValue )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicCacheSelfValue,
          1,
          (const MethodInfo_336D204 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____ContainsKey__) )
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
      dicCacheSelfValue = (BattleBuffData_o *)sub_1BDB920(int___TypeInfo, 0LL);
    }
    if ( v14 )
    {
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v14,
        1,
        (Il2CppObject *)dicCacheSelfValue,
        (const MethodInfo_336CFFC *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____set_Item__);
      goto LABEL_11;
    }
LABEL_14:
    sub_1BDBAD4(dicCacheSelfValue, buffData);
  }
LABEL_11:
  dicCacheSelfValue = (BattleBuffData_o *)this->fields.dicCacheSelfValue;
  if ( !dicCacheSelfValue )
    goto LABEL_14;
  dicCacheSelfValue = (BattleBuffData_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicCacheSelfValue,
                                            1,
                                            (const MethodInfo_336CF70 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____get_Item__);
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
    sub_1BDBAD4(v13, v14);
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
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_fields; // x20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *monitor; // x0

  if ( (byte_4B438B8 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____Clear__, svtData);
    byte_4B438B8 = 1;
  }
  this->fields._SvtData_k__BackingField = svtData;
  p_fields = (CGThumbnailListItem_o *)&this->fields;
  sub_1BDB81C(p_fields, (int32_t)svtData, (int32_t)method, v3);
  monitor = (System_Collections_Generic_Dictionary_TKey__TValue__o *)p_fields->monitor;
  if ( !monitor )
    sub_1BDBAD4(0LL, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Clear(
    monitor,
    (const MethodInfo_336D198 *)Method_System_Collections_Generic_Dictionary_BuffList_INVOKE_COND_TYPE__int____Clear__);
}


System_String_o *__fastcall BuffList_BaseInvokeCond__get_BuffTypeCondKeyName(
        BuffList_BaseInvokeCond_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B438B6 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4444/*"Check{0}BuffTypes"*/, method);
    byte_4B438B6 = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_4444/*"Check{0}BuffTypes"*/, (Il2CppObject *)this->fields.targetSideStr, 0LL);
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
  const MethodInfo *v3; // x3

  this->fields._SvtData_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}