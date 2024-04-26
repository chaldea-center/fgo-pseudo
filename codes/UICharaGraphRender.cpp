void __fastcall UICharaGraphRender___cctor(const MethodInfo *method)
{
  UICharaGraphRender_c *v1; // x8
  struct UICharaGraphRender_StaticFields *static_fields; // x9
  int MAIN_SIZE_Y; // w10
  float v4; // s3
  struct UICharaGraphRender_StaticFields *v5; // x9
  int v6; // w10
  float v7; // s0
  __int64 v8; // x19
  struct UICharaGraphRender_StaticFields *v9; // x8
  float SERVANT_BODY_U; // s0
  float SERVANT_BODY_V; // s4
  float v12; // s5
  float v13; // s6
  float v14; // s7
  System_Int32_array **v15; // x0
  __int64 v16; // x1
  float v17; // s4
  float v18; // s5
  float v19; // s6
  float v20; // s7
  struct UICharaGraphRender_StaticFields *v21; // x8
  float v22; // s0
  float v23; // s1
  float v24; // s4
  float v25; // s5
  float v26; // s6
  float v27; // s7
  struct UICharaGraphRender_StaticFields *v28; // x8
  float v29; // s0
  float v30; // s1
  float v31; // s4
  float v32; // s5
  float v33; // s6
  float v34; // s7
  struct UICharaGraphRender_StaticFields *v35; // x8
  float v36; // s0
  float v37; // s1
  float v38; // s4
  float v39; // s5
  float v40; // s6
  float v41; // s7
  struct UICharaGraphRender_StaticFields *v42; // x8
  float v43; // s0
  float v44; // s1
  float v45; // s4
  float v46; // s5
  float v47; // s6
  float v48; // s7
  struct UICharaGraphRender_StaticFields *v49; // x8
  float v50; // s0
  float v51; // s1
  float v52; // s4
  float v53; // s5
  float v54; // s6
  float v55; // s7
  struct UICharaGraphRender_StaticFields *v56; // x8
  float v57; // s0
  float v58; // s1
  float v59; // s4
  float v60; // s5
  float v61; // s6
  float v62; // s7
  struct UICharaGraphRender_StaticFields *v63; // x8
  float v64; // s0
  float v65; // s1
  float v66; // s4
  float v67; // s5
  float v68; // s6
  float v69; // s7
  struct UICharaGraphRender_StaticFields *v70; // x8
  float v71; // s0
  float v72; // s1
  float v73; // s4
  float v74; // s5
  float v75; // s6
  float v76; // s7
  struct UICharaGraphRender_StaticFields *v77; // x8
  float v78; // s0
  float v79; // s1
  float v80; // s4
  float v81; // s5
  float v82; // s6
  float v83; // s7
  struct UICharaGraphRender_StaticFields *v84; // x8
  float v85; // s0
  float v86; // s1
  float v87; // s5
  float v88; // s6
  float v89; // s7
  struct UICharaGraphRender_StaticFields *v90; // x8
  float v91; // s0
  float v92; // s4
  System_Int32_array **Only_Rect; // x0
  struct UICharaGraphRender_StaticFields *v94; // x8
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  float v101; // s4
  float v102; // s5
  float v103; // s6
  float v104; // s7
  UICharaGraphRender_c *v105; // x8
  System_Array_o *v106; // x19
  struct UICharaGraphRender_StaticFields *v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x19
  System_Int32_array **v121; // x1
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Int32_array **v128; // x1
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Int32_array **v135; // x1
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_Int32_array **v142; // x1
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Int32_array **v149; // x1
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  System_Int32_array **v156; // x1
  struct UICharaGraphRender_StaticFields *v157; // x0
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  System_Int32_array **v170; // x19
  System_Int32_array **v171; // x1
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_Int32_array **v178; // x1
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  System_Int32_array **v185; // x1
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  System_Int32_array **v192; // x1
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  System_Int32_array **v199; // x1
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  System_Int32_array **v206; // x1
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  System_Int32_array **v213; // x1
  System_String_array **v214; // x2
  System_String_array **v215; // x3
  System_Boolean_array **v216; // x4
  System_Int32_array **v217; // x5
  System_Int32_array *v218; // x6
  System_Int32_array *v219; // x7
  System_Int32_array **v220; // x1
  struct UICharaGraphRender_StaticFields *v221; // x0
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v228; // x19
  System_String_array **v229; // x2
  System_String_array **v230; // x3
  System_Boolean_array **v231; // x4
  System_Int32_array **v232; // x5
  System_Int32_array *v233; // x6
  System_Int32_array *v234; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o *v235; // x20
  System_Int32_array **v236; // x1
  System_String_array **v237; // x2
  System_String_array **v238; // x3
  System_Boolean_array **v239; // x4
  System_Int32_array **v240; // x5
  System_Int32_array *v241; // x6
  System_Int32_array *v242; // x7
  System_Int32_array **v243; // x1
  System_String_array **v244; // x2
  System_String_array **v245; // x3
  System_Boolean_array **v246; // x4
  System_Int32_array **v247; // x5
  System_Int32_array *v248; // x6
  System_Int32_array *v249; // x7
  System_Int32_array **v250; // x1
  System_String_array **v251; // x2
  System_String_array **v252; // x3
  System_Boolean_array **v253; // x4
  System_Int32_array **v254; // x5
  System_Int32_array *v255; // x6
  System_Int32_array *v256; // x7
  System_Int32_array **v257; // x1
  System_String_array **v258; // x2
  System_String_array **v259; // x3
  System_Boolean_array **v260; // x4
  System_Int32_array **v261; // x5
  System_Int32_array *v262; // x6
  System_Int32_array *v263; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o *v264; // x20
  System_Int32_array **v265; // x1
  System_String_array **v266; // x2
  System_String_array **v267; // x3
  System_Boolean_array **v268; // x4
  System_Int32_array **v269; // x5
  System_Int32_array *v270; // x6
  System_Int32_array *v271; // x7
  System_Int32_array **v272; // x1
  System_String_array **v273; // x2
  System_String_array **v274; // x3
  System_Boolean_array **v275; // x4
  System_Int32_array **v276; // x5
  System_Int32_array *v277; // x6
  System_Int32_array *v278; // x7
  System_Int32_array **v279; // x1
  System_String_array **v280; // x2
  System_String_array **v281; // x3
  System_Boolean_array **v282; // x4
  System_Int32_array **v283; // x5
  System_Int32_array *v284; // x6
  System_Int32_array *v285; // x7
  System_Int32_array **v286; // x1
  System_String_array **v287; // x2
  System_String_array **v288; // x3
  System_Boolean_array **v289; // x4
  System_Int32_array **v290; // x5
  System_Int32_array *v291; // x6
  System_Int32_array *v292; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o *v293; // x20
  System_Int32_array **v294; // x1
  System_String_array **v295; // x2
  System_String_array **v296; // x3
  System_Boolean_array **v297; // x4
  System_Int32_array **v298; // x5
  System_Int32_array *v299; // x6
  System_Int32_array *v300; // x7
  System_Int32_array **v301; // x1
  System_String_array **v302; // x2
  System_String_array **v303; // x3
  System_Boolean_array **v304; // x4
  System_Int32_array **v305; // x5
  System_Int32_array *v306; // x6
  System_Int32_array *v307; // x7
  System_Int32_array **v308; // x1
  System_String_array **v309; // x2
  System_String_array **v310; // x3
  System_Boolean_array **v311; // x4
  System_Int32_array **v312; // x5
  System_Int32_array *v313; // x6
  System_Int32_array *v314; // x7
  System_Int32_array **v315; // x1
  System_String_array **v316; // x2
  System_String_array **v317; // x3
  System_Boolean_array **v318; // x4
  System_Int32_array **v319; // x5
  System_Int32_array *v320; // x6
  System_Int32_array *v321; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o *v322; // x20
  System_Int32_array **v323; // x1
  System_String_array **v324; // x2
  System_String_array **v325; // x3
  System_Boolean_array **v326; // x4
  System_Int32_array **v327; // x5
  System_Int32_array *v328; // x6
  System_Int32_array *v329; // x7
  System_Int32_array **v330; // x1
  System_String_array **v331; // x2
  System_String_array **v332; // x3
  System_Boolean_array **v333; // x4
  System_Int32_array **v334; // x5
  System_Int32_array *v335; // x6
  System_Int32_array *v336; // x7
  System_Int32_array **v337; // x1
  System_String_array **v338; // x2
  System_String_array **v339; // x3
  System_Boolean_array **v340; // x4
  System_Int32_array **v341; // x5
  System_Int32_array *v342; // x6
  System_Int32_array *v343; // x7
  System_Int32_array **v344; // x1
  struct UICharaGraphRender_StaticFields *v345; // x0
  System_String_array **v346; // x2
  System_String_array **v347; // x3
  System_Boolean_array **v348; // x4
  System_Int32_array **v349; // x5
  System_Int32_array *v350; // x6
  System_Int32_array *v351; // x7
  System_String_array **v352; // x2
  System_String_array **v353; // x3
  System_Boolean_array **v354; // x4
  System_Int32_array **v355; // x5
  System_Int32_array *v356; // x6
  System_Int32_array *v357; // x7
  System_Int32_array **v358; // x19
  System_Int32_array **v359; // x1
  System_String_array **v360; // x2
  System_String_array **v361; // x3
  System_Boolean_array **v362; // x4
  System_Int32_array **v363; // x5
  System_Int32_array *v364; // x6
  System_Int32_array *v365; // x7
  System_Int32_array **v366; // x1
  System_String_array **v367; // x2
  System_String_array **v368; // x3
  System_Boolean_array **v369; // x4
  System_Int32_array **v370; // x5
  System_Int32_array *v371; // x6
  System_Int32_array *v372; // x7
  System_Int32_array **v373; // x1
  System_String_array **v374; // x2
  System_String_array **v375; // x3
  System_Boolean_array **v376; // x4
  System_Int32_array **v377; // x5
  System_Int32_array *v378; // x6
  System_Int32_array *v379; // x7
  System_Int32_array **v380; // x1
  System_String_array **v381; // x2
  System_String_array **v382; // x3
  System_Boolean_array **v383; // x4
  System_Int32_array **v384; // x5
  System_Int32_array *v385; // x6
  System_Int32_array *v386; // x7
  System_Int32_array **v387; // x1
  System_String_array **v388; // x2
  System_String_array **v389; // x3
  System_Boolean_array **v390; // x4
  System_Int32_array **v391; // x5
  System_Int32_array *v392; // x6
  System_Int32_array *v393; // x7
  System_Int32_array **v394; // x1
  struct UICharaGraphRender_StaticFields *v395; // x0
  System_String_array **v396; // x2
  System_String_array **v397; // x3
  System_Boolean_array **v398; // x4
  System_Int32_array **v399; // x5
  System_Int32_array *v400; // x6
  System_Int32_array *v401; // x7
  __int64 v402; // x0
  __int64 v403; // x0
  struct UnityEngine_Rect_o v404; // [xsp+0h] [xbp-140h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-130h] BYREF
  MethodInfo v406; // [xsp+60h] [xbp-E0h] BYREF
  MethodInfo v407; // [xsp+B0h] [xbp-90h] BYREF
  System_RuntimeFieldHandle_o v408; // 0:w1.4
  UnityEngine_Rect_o v409; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v410; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v411; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v412; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v413; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v414; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v415; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v416; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v417; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v418; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v419; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v420; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v421; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_435939F & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_AsReadOnly_Rect___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__string____Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__string_____ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__string____TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&UnityEngine_Rect___TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C);
    sub_B70694(&UICharaGraphRender_TypeInfo);
    sub_B70694(&StringLiteral_19170/*"frame5"*/);
    sub_B70694(&StringLiteral_16458/*"a"*/);
    sub_B70694(&StringLiteral_19171/*"frame6"*/);
    sub_B70694(&StringLiteral_19172/*"frame7"*/);
    sub_B70694(&StringLiteral_19168/*"frame37"*/);
    sub_B70694(&StringLiteral_16791/*"b"*/);
    sub_B70694(&StringLiteral_17420/*"c"*/);
    sub_B70694(&StringLiteral_19165/*"frame20"*/);
    sub_B70694(&StringLiteral_19167/*"frame36"*/);
    sub_B70694(&StringLiteral_19166/*"frame3"*/);
    sub_B70694(&StringLiteral_19162/*"frame1"*/);
    sub_B70694(&StringLiteral_19161/*"frame0"*/);
    sub_B70694(&StringLiteral_19163/*"frame17"*/);
    sub_B70694(&StringLiteral_19164/*"frame2"*/);
    sub_B70694(&StringLiteral_19169/*"frame4"*/);
    byte_435939F = 1;
  }
  UICharaGraphRender_TypeInfo->static_fields->OTHER_IMAGE_LIMIT_COUNT = 4;
  UICharaGraphRender_TypeInfo->static_fields->MAIN_SIZE_X = 1024;
  v1 = UICharaGraphRender_TypeInfo;
  UICharaGraphRender_TypeInfo->static_fields->MAIN_SIZE_Y = 1024;
  v1->static_fields->SERVANT_BODY_SIZE_X = 510;
  v1->static_fields->SERVANT_BODY_SIZE_Y = 722;
  v1->static_fields->SERVANT_EQUIP_BODY_SIZE_X = 510;
  v1->static_fields->SERVANT_EQUIP_BODY_SIZE_Y = 872;
  v1->static_fields->SERVANT_BODY_U = 1.5 / (float)v1->static_fields->MAIN_SIZE_X;
  static_fields = v1->static_fields;
  MAIN_SIZE_Y = static_fields->MAIN_SIZE_Y;
  v4 = (double)(MAIN_SIZE_Y - static_fields->SERVANT_BODY_SIZE_Y) + -1.5;
  static_fields->SERVANT_BODY_V = v4 / (float)MAIN_SIZE_Y;
  v1->static_fields->SERVANT_BODY_W = (float)(v1->static_fields->SERVANT_BODY_SIZE_X - 1)
                                    / (float)v1->static_fields->MAIN_SIZE_X;
  v1->static_fields->SERVANT_BODY_H = (float)(v1->static_fields->SERVANT_BODY_SIZE_Y - 1)
                                    / (float)v1->static_fields->MAIN_SIZE_Y;
  v1->static_fields->SERVANT_EQUIP_BODY_U = 1.5 / (float)v1->static_fields->MAIN_SIZE_X;
  v5 = v1->static_fields;
  v6 = v5->MAIN_SIZE_Y;
  v7 = (double)(v6 - v5->SERVANT_EQUIP_BODY_SIZE_Y) + -1.5;
  v5->SERVANT_EQUIP_BODY_V = v7 / (float)v6;
  v1->static_fields->SERVANT_EQUIP_BODY_W = (float)(v1->static_fields->SERVANT_EQUIP_BODY_SIZE_X - 1)
                                          / (float)v1->static_fields->MAIN_SIZE_X;
  v1->static_fields->SERVANT_EQUIP_BODY_H = (float)(v1->static_fields->SERVANT_EQUIP_BODY_SIZE_Y - 1)
                                          / (float)v1->static_fields->MAIN_SIZE_Y;
  v8 = sub_B706AC(UnityEngine_Rect___TypeInfo, 12LL);
  v9 = UICharaGraphRender_TypeInfo->static_fields;
  SERVANT_BODY_U = v9->SERVANT_BODY_U;
  SERVANT_BODY_V = v9->SERVANT_BODY_V;
  v409.fields.m_Width = v9->SERVANT_BODY_W;
  v409.fields.m_Height = v9->SERVANT_BODY_H;
  v407.name = 0LL;
  v407.klass = 0LL;
  v409.fields.m_XMin = SERVANT_BODY_U + 0.0;
  v409.fields.m_YMin = SERVANT_BODY_V + 0.0;
  UnityEngine_Rect___ctor(v409, SERVANT_BODY_V, v12, v13, v14, (const MethodInfo *)&v407.name);
  if ( !v8 )
    goto LABEL_207;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_205;
  *(_OWORD *)(v8 + 32) = *(_OWORD *)&v407.name;
  v21 = UICharaGraphRender_TypeInfo->static_fields;
  v22 = v21->SERVANT_BODY_U;
  v23 = v21->SERVANT_BODY_V;
  v410.fields.m_Width = v21->SERVANT_BODY_W;
  v410.fields.m_Height = v21->SERVANT_BODY_H;
  v407.methodPointer = 0LL;
  v407.invoker_method = 0LL;
  v410.fields.m_XMin = v22 + 0.5;
  v410.fields.m_YMin = v23 + 0.0;
  UnityEngine_Rect___ctor(v410, v17, v18, v19, v20, &v407);
  if ( *(_DWORD *)(v8 + 24) <= 1u )
    goto LABEL_205;
  *(_OWORD *)(v8 + 48) = *(_OWORD *)&v407.methodPointer;
  v28 = UICharaGraphRender_TypeInfo->static_fields;
  v29 = v28->SERVANT_BODY_U;
  v30 = v28->SERVANT_BODY_V;
  v411.fields.m_Width = v28->SERVANT_BODY_W;
  v411.fields.m_Height = v28->SERVANT_BODY_H;
  *(_QWORD *)&v406.token = 0LL;
  *(_QWORD *)&v406.slot = 0LL;
  v411.fields.m_XMin = v29 + 0.0;
  v411.fields.m_YMin = v30 + 0.0;
  UnityEngine_Rect___ctor(v411, v24, v25, v26, v27, (const MethodInfo *)&v406.token);
  if ( *(_DWORD *)(v8 + 24) <= 2u )
    goto LABEL_205;
  *(_OWORD *)(v8 + 64) = *(_OWORD *)&v406.token;
  v35 = UICharaGraphRender_TypeInfo->static_fields;
  v36 = v35->SERVANT_BODY_U;
  v37 = v35->SERVANT_BODY_V;
  v412.fields.m_Width = v35->SERVANT_BODY_W;
  v412.fields.m_Height = v35->SERVANT_BODY_H;
  v406.rgctx_data = 0LL;
  v406.genericMethod = 0LL;
  v412.fields.m_XMin = v36 + 0.5;
  v412.fields.m_YMin = v37 + 0.0;
  UnityEngine_Rect___ctor(v412, v31, v32, v33, v34, (const MethodInfo *)&v406.rgctx_data);
  if ( *(_DWORD *)(v8 + 24) <= 3u )
    goto LABEL_205;
  *(_OWORD *)(v8 + 80) = *(_OWORD *)&v406.rgctx_data;
  v42 = UICharaGraphRender_TypeInfo->static_fields;
  v43 = v42->SERVANT_BODY_U;
  v44 = v42->SERVANT_BODY_V;
  v413.fields.m_Width = v42->SERVANT_BODY_W;
  v413.fields.m_Height = v42->SERVANT_BODY_H;
  v406.return_type = 0LL;
  v406.parameters = 0LL;
  v413.fields.m_XMin = v43 + 0.0;
  v413.fields.m_YMin = v44 + 0.0;
  UnityEngine_Rect___ctor(v413, v38, v39, v40, v41, (const MethodInfo *)&v406.return_type);
  if ( *(_DWORD *)(v8 + 24) <= 4u )
    goto LABEL_205;
  *(_OWORD *)(v8 + 96) = *(_OWORD *)&v406.return_type;
  v49 = UICharaGraphRender_TypeInfo->static_fields;
  v50 = v49->SERVANT_BODY_U;
  v51 = v49->SERVANT_BODY_V;
  v414.fields.m_Width = v49->SERVANT_BODY_W;
  v414.fields.m_Height = v49->SERVANT_BODY_H;
  v406.name = 0LL;
  v406.klass = 0LL;
  v414.fields.m_XMin = v50 + 0.5;
  v414.fields.m_YMin = v51 + 0.0;
  UnityEngine_Rect___ctor(v414, v45, v46, v47, v48, (const MethodInfo *)&v406.name);
  if ( *(_DWORD *)(v8 + 24) <= 5u )
    goto LABEL_205;
  *(_OWORD *)(v8 + 112) = *(_OWORD *)&v406.name;
  v56 = UICharaGraphRender_TypeInfo->static_fields;
  v57 = v56->SERVANT_BODY_U;
  v58 = v56->SERVANT_BODY_V;
  v415.fields.m_Width = v56->SERVANT_BODY_W;
  v415.fields.m_Height = v56->SERVANT_BODY_H;
  v406.methodPointer = 0LL;
  v406.invoker_method = 0LL;
  v415.fields.m_XMin = v57 + 0.0;
  v415.fields.m_YMin = v58 + 0.0;
  UnityEngine_Rect___ctor(v415, v52, v53, v54, v55, &v406);
  if ( *(_DWORD *)(v8 + 24) <= 6u )
    goto LABEL_205;
  *(_OWORD *)(v8 + 128) = *(_OWORD *)&v406.methodPointer;
  v63 = UICharaGraphRender_TypeInfo->static_fields;
  v64 = v63->SERVANT_BODY_U;
  v65 = v63->SERVANT_BODY_V;
  v416.fields.m_Width = v63->SERVANT_BODY_W;
  v416.fields.m_Height = v63->SERVANT_BODY_H;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  v416.fields.m_XMin = v64 + 0.5;
  v416.fields.m_YMin = v65 + 0.0;
  UnityEngine_Rect___ctor(v416, v59, v60, v61, v62, (const MethodInfo *)&methoda.token);
  if ( *(_DWORD *)(v8 + 24) <= 7u )
    goto LABEL_205;
  *(_OWORD *)(v8 + 144) = *(_OWORD *)&methoda.token;
  v70 = UICharaGraphRender_TypeInfo->static_fields;
  v71 = v70->SERVANT_BODY_U;
  v72 = v70->SERVANT_BODY_V;
  v417.fields.m_Width = v70->SERVANT_BODY_W;
  v417.fields.m_Height = v70->SERVANT_BODY_H;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  v417.fields.m_XMin = v71 + 0.0;
  v417.fields.m_YMin = v72 + 0.0;
  UnityEngine_Rect___ctor(v417, v66, v67, v68, v69, (const MethodInfo *)&methoda.rgctx_data);
  if ( *(_DWORD *)(v8 + 24) <= 8u )
    goto LABEL_205;
  *(_OWORD *)(v8 + 160) = *(_OWORD *)&methoda.rgctx_data;
  v77 = UICharaGraphRender_TypeInfo->static_fields;
  v78 = v77->SERVANT_BODY_U;
  v79 = v77->SERVANT_BODY_V;
  v418.fields.m_Width = v77->SERVANT_BODY_W;
  v418.fields.m_Height = v77->SERVANT_BODY_H;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  v418.fields.m_XMin = v78 + 0.5;
  v418.fields.m_YMin = v79 + 0.0;
  UnityEngine_Rect___ctor(v418, v73, v74, v75, v76, (const MethodInfo *)&methoda.return_type);
  if ( *(_DWORD *)(v8 + 24) <= 9u )
    goto LABEL_205;
  *(_OWORD *)(v8 + 176) = *(_OWORD *)&methoda.return_type;
  v84 = UICharaGraphRender_TypeInfo->static_fields;
  v85 = v84->SERVANT_BODY_U;
  v86 = v84->SERVANT_BODY_V;
  v419.fields.m_Width = v84->SERVANT_BODY_W;
  v419.fields.m_Height = v84->SERVANT_BODY_H;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  v419.fields.m_XMin = v85 + 0.0;
  v419.fields.m_YMin = v86 + 0.0;
  UnityEngine_Rect___ctor(v419, v80, v81, v82, v83, (const MethodInfo *)&methoda.name);
  if ( *(_DWORD *)(v8 + 24) <= 0xAu )
    goto LABEL_205;
  *(_OWORD *)(v8 + 192) = *(_OWORD *)&methoda.name;
  v90 = UICharaGraphRender_TypeInfo->static_fields;
  v91 = v90->SERVANT_BODY_U;
  v92 = v90->SERVANT_BODY_V;
  v420.fields.m_Width = v90->SERVANT_BODY_W;
  v420.fields.m_Height = v90->SERVANT_BODY_H;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  v420.fields.m_XMin = v91 + 0.5;
  v420.fields.m_YMin = v92 + 0.0;
  UnityEngine_Rect___ctor(v420, v92, v87, v88, v89, &methoda);
  if ( *(_DWORD *)(v8 + 24) <= 0xBu )
  {
LABEL_205:
    v402 = sub_B70798(v15);
    sub_B70738(v402, 0LL);
  }
  *(_OWORD *)(v8 + 208) = *(_OWORD *)&methoda.methodPointer;
  Only_Rect = (System_Int32_array **)System_Array__AsReadOnly_Rect_(
                                       (UnityEngine_Rect_array *)v8,
                                       (const MethodInfo_1FC3A3C *)Method_System_Array_AsReadOnly_Rect___);
  v94 = UICharaGraphRender_TypeInfo->static_fields;
  v94->servantBodyRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_B70630((BattleServantConfConponent_o *)&v94->servantBodyRectTable, Only_Rect, v95, v96, v97, v98, v99, v100);
  v421 = *(UnityEngine_Rect_o *)&UICharaGraphRender_TypeInfo->static_fields->SERVANT_EQUIP_BODY_U;
  v404 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v421, v101, v102, v103, v104, (const MethodInfo *)&v404);
  v105 = UICharaGraphRender_TypeInfo;
  UICharaGraphRender_TypeInfo->static_fields->servantEquipBodyRect = v404;
  v105->static_fields->SERVANT_NAME_UV_DIFF_Y = 0.25;
  v105->static_fields->MAX_SERVANT_NAME_UV_DIFF_COUNT = 4;
  v106 = (System_Array_o *)sub_B706AC(int___TypeInfo, 4LL);
  v408.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v106, v408, 0LL);
  v107 = UICharaGraphRender_TypeInfo->static_fields;
  v107->SERVANT_NAME_TARGET_LIMIT_COUNT = (struct System_Int32_array *)v106;
  sub_B70630(
    (BattleServantConfConponent_o *)&v107->SERVANT_NAME_TARGET_LIMIT_COUNT,
    (System_Int32_array **)v106,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  v15 = (System_Int32_array **)sub_B706AC(string___TypeInfo, 6LL);
  if ( !v15 )
    goto LABEL_207;
  v120 = v15;
  v15 = (System_Int32_array **)StringLiteral_16458/*"a"*/;
  if ( StringLiteral_16458/*"a"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_16458/*"a"*/, *(_QWORD *)&(*v120)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v121 = (System_Int32_array **)StringLiteral_16458/*"a"*/;
  }
  else
  {
    v121 = 0LL;
  }
  if ( !*((_DWORD *)v120 + 6) )
    goto LABEL_205;
  v120[4] = (System_Int32_array *)v121;
  sub_B70630((BattleServantConfConponent_o *)(v120 + 4), v121, v114, v115, v116, v117, v118, v119);
  v15 = (System_Int32_array **)StringLiteral_16458/*"a"*/;
  if ( StringLiteral_16458/*"a"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_16458/*"a"*/, *(_QWORD *)&(*v120)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v128 = (System_Int32_array **)StringLiteral_16458/*"a"*/;
  }
  else
  {
    v128 = 0LL;
  }
  if ( *((_DWORD *)v120 + 6) <= 1u )
    goto LABEL_205;
  v120[5] = (System_Int32_array *)v128;
  sub_B70630((BattleServantConfConponent_o *)(v120 + 5), v128, v122, v123, v124, v125, v126, v127);
  v15 = (System_Int32_array **)StringLiteral_16791/*"b"*/;
  if ( StringLiteral_16791/*"b"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_16791/*"b"*/, *(_QWORD *)&(*v120)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v135 = (System_Int32_array **)StringLiteral_16791/*"b"*/;
  }
  else
  {
    v135 = 0LL;
  }
  if ( *((_DWORD *)v120 + 6) <= 2u )
    goto LABEL_205;
  v120[6] = (System_Int32_array *)v135;
  sub_B70630((BattleServantConfConponent_o *)(v120 + 6), v135, v129, v130, v131, v132, v133, v134);
  v15 = (System_Int32_array **)StringLiteral_16791/*"b"*/;
  if ( StringLiteral_16791/*"b"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_16791/*"b"*/, *(_QWORD *)&(*v120)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v142 = (System_Int32_array **)StringLiteral_16791/*"b"*/;
  }
  else
  {
    v142 = 0LL;
  }
  if ( *((_DWORD *)v120 + 6) <= 3u )
    goto LABEL_205;
  v120[7] = (System_Int32_array *)v142;
  sub_B70630((BattleServantConfConponent_o *)(v120 + 7), v142, v136, v137, v138, v139, v140, v141);
  v15 = (System_Int32_array **)StringLiteral_17420/*"c"*/;
  if ( StringLiteral_17420/*"c"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_17420/*"c"*/, *(_QWORD *)&(*v120)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v149 = (System_Int32_array **)StringLiteral_17420/*"c"*/;
  }
  else
  {
    v149 = 0LL;
  }
  if ( *((_DWORD *)v120 + 6) <= 4u )
    goto LABEL_205;
  v120[8] = (System_Int32_array *)v149;
  sub_B70630((BattleServantConfConponent_o *)(v120 + 8), v149, v143, v144, v145, v146, v147, v148);
  v15 = (System_Int32_array **)StringLiteral_17420/*"c"*/;
  if ( StringLiteral_17420/*"c"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_17420/*"c"*/, *(_QWORD *)&(*v120)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v156 = (System_Int32_array **)StringLiteral_17420/*"c"*/;
  }
  else
  {
    v156 = 0LL;
  }
  if ( *((_DWORD *)v120 + 6) <= 5u )
    goto LABEL_205;
  v120[9] = (System_Int32_array *)v156;
  sub_B70630((BattleServantConfConponent_o *)(v120 + 9), v156, v150, v151, v152, v153, v154, v155);
  v157 = UICharaGraphRender_TypeInfo->static_fields;
  v157->bodyTextureNameTable = (struct System_String_array *)v120;
  sub_B70630((BattleServantConfConponent_o *)&v157->bodyTextureNameTable, v120, v158, v159, v160, v161, v162, v163);
  v15 = (System_Int32_array **)sub_B706AC(string___TypeInfo, 8LL);
  if ( !v15 )
    goto LABEL_207;
  v170 = v15;
  v15 = (System_Int32_array **)StringLiteral_19161/*"frame0"*/;
  if ( StringLiteral_19161/*"frame0"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19161/*"frame0"*/, *(_QWORD *)&(*v170)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v171 = (System_Int32_array **)StringLiteral_19161/*"frame0"*/;
  }
  else
  {
    v171 = 0LL;
  }
  if ( !*((_DWORD *)v170 + 6) )
    goto LABEL_205;
  v170[4] = (System_Int32_array *)v171;
  sub_B70630((BattleServantConfConponent_o *)(v170 + 4), v171, v164, v165, v166, v167, v168, v169);
  v15 = (System_Int32_array **)StringLiteral_19162/*"frame1"*/;
  if ( StringLiteral_19162/*"frame1"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19162/*"frame1"*/, *(_QWORD *)&(*v170)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v178 = (System_Int32_array **)StringLiteral_19162/*"frame1"*/;
  }
  else
  {
    v178 = 0LL;
  }
  if ( *((_DWORD *)v170 + 6) <= 1u )
    goto LABEL_205;
  v170[5] = (System_Int32_array *)v178;
  sub_B70630((BattleServantConfConponent_o *)(v170 + 5), v178, v172, v173, v174, v175, v176, v177);
  v15 = (System_Int32_array **)StringLiteral_19164/*"frame2"*/;
  if ( StringLiteral_19164/*"frame2"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19164/*"frame2"*/, *(_QWORD *)&(*v170)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v185 = (System_Int32_array **)StringLiteral_19164/*"frame2"*/;
  }
  else
  {
    v185 = 0LL;
  }
  if ( *((_DWORD *)v170 + 6) <= 2u )
    goto LABEL_205;
  v170[6] = (System_Int32_array *)v185;
  sub_B70630((BattleServantConfConponent_o *)(v170 + 6), v185, v179, v180, v181, v182, v183, v184);
  v15 = (System_Int32_array **)StringLiteral_19166/*"frame3"*/;
  if ( StringLiteral_19166/*"frame3"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19166/*"frame3"*/, *(_QWORD *)&(*v170)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v192 = (System_Int32_array **)StringLiteral_19166/*"frame3"*/;
  }
  else
  {
    v192 = 0LL;
  }
  if ( *((_DWORD *)v170 + 6) <= 3u )
    goto LABEL_205;
  v170[7] = (System_Int32_array *)v192;
  sub_B70630((BattleServantConfConponent_o *)(v170 + 7), v192, v186, v187, v188, v189, v190, v191);
  v15 = (System_Int32_array **)StringLiteral_19169/*"frame4"*/;
  if ( StringLiteral_19169/*"frame4"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19169/*"frame4"*/, *(_QWORD *)&(*v170)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v199 = (System_Int32_array **)StringLiteral_19169/*"frame4"*/;
  }
  else
  {
    v199 = 0LL;
  }
  if ( *((_DWORD *)v170 + 6) <= 4u )
    goto LABEL_205;
  v170[8] = (System_Int32_array *)v199;
  sub_B70630((BattleServantConfConponent_o *)(v170 + 8), v199, v193, v194, v195, v196, v197, v198);
  v15 = (System_Int32_array **)StringLiteral_19170/*"frame5"*/;
  if ( StringLiteral_19170/*"frame5"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19170/*"frame5"*/, *(_QWORD *)&(*v170)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v206 = (System_Int32_array **)StringLiteral_19170/*"frame5"*/;
  }
  else
  {
    v206 = 0LL;
  }
  if ( *((_DWORD *)v170 + 6) <= 5u )
    goto LABEL_205;
  v170[9] = (System_Int32_array *)v206;
  sub_B70630((BattleServantConfConponent_o *)(v170 + 9), v206, v200, v201, v202, v203, v204, v205);
  v15 = (System_Int32_array **)StringLiteral_19171/*"frame6"*/;
  if ( StringLiteral_19171/*"frame6"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19171/*"frame6"*/, *(_QWORD *)&(*v170)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v213 = (System_Int32_array **)StringLiteral_19171/*"frame6"*/;
  }
  else
  {
    v213 = 0LL;
  }
  if ( *((_DWORD *)v170 + 6) <= 6u )
    goto LABEL_205;
  v170[10] = (System_Int32_array *)v213;
  sub_B70630((BattleServantConfConponent_o *)(v170 + 10), v213, v207, v208, v209, v210, v211, v212);
  v15 = (System_Int32_array **)StringLiteral_19172/*"frame7"*/;
  if ( StringLiteral_19172/*"frame7"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19172/*"frame7"*/, *(_QWORD *)&(*v170)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v220 = (System_Int32_array **)StringLiteral_19172/*"frame7"*/;
  }
  else
  {
    v220 = 0LL;
  }
  if ( *((_DWORD *)v170 + 6) <= 7u )
    goto LABEL_205;
  v170[11] = (System_Int32_array *)v220;
  sub_B70630((BattleServantConfConponent_o *)(v170 + 11), v220, v214, v215, v216, v217, v218, v219);
  v221 = UICharaGraphRender_TypeInfo->static_fields;
  v221->baseFrameList = (struct System_String_array *)v170;
  sub_B70630((BattleServantConfConponent_o *)&v221->baseFrameList, v170, v222, v223, v224, v225, v226, v227);
  v228 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__string____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v228,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__string_____ctor__);
  v15 = (System_Int32_array **)sub_B706AC(string___TypeInfo, 4LL);
  if ( !v15 )
    goto LABEL_207;
  v235 = (WarBoardEvalValueSquare_EvalValueSquare_o *)v15;
  v15 = (System_Int32_array **)StringLiteral_19163/*"frame17"*/;
  if ( StringLiteral_19163/*"frame17"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19163/*"frame17"*/, v235->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v236 = (System_Int32_array **)StringLiteral_19163/*"frame17"*/;
  }
  else
  {
    v236 = 0LL;
  }
  if ( !LODWORD(v235->fields._EvalValueWarsituation_k__BackingField) )
    goto LABEL_205;
  *(_QWORD *)&v235->fields._EvalValue_k__BackingField = v236;
  sub_B70630(
    (BattleServantConfConponent_o *)&v235->fields._EvalValue_k__BackingField,
    v236,
    v229,
    v230,
    v231,
    v232,
    v233,
    v234);
  v15 = (System_Int32_array **)StringLiteral_19163/*"frame17"*/;
  if ( StringLiteral_19163/*"frame17"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19163/*"frame17"*/, v235->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v243 = (System_Int32_array **)StringLiteral_19163/*"frame17"*/;
  }
  else
  {
    v243 = 0LL;
  }
  if ( LODWORD(v235->fields._EvalValueWarsituation_k__BackingField) <= 1 )
    goto LABEL_205;
  *(_QWORD *)&v235->fields._WarAdjustmentValueB_k__BackingField = v243;
  sub_B70630(
    (BattleServantConfConponent_o *)&v235->fields._WarAdjustmentValueB_k__BackingField,
    v243,
    v237,
    v238,
    v239,
    v240,
    v241,
    v242);
  v15 = (System_Int32_array **)StringLiteral_19163/*"frame17"*/;
  if ( StringLiteral_19163/*"frame17"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19163/*"frame17"*/, v235->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v250 = (System_Int32_array **)StringLiteral_19163/*"frame17"*/;
  }
  else
  {
    v250 = 0LL;
  }
  if ( LODWORD(v235->fields._EvalValueWarsituation_k__BackingField) <= 2 )
    goto LABEL_205;
  *(_QWORD *)&v235->fields._BenAdjustmentValueB_k__BackingField = v250;
  sub_B70630(
    (BattleServantConfConponent_o *)&v235->fields._BenAdjustmentValueB_k__BackingField,
    v250,
    v244,
    v245,
    v246,
    v247,
    v248,
    v249);
  v15 = (System_Int32_array **)StringLiteral_19163/*"frame17"*/;
  if ( StringLiteral_19163/*"frame17"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19163/*"frame17"*/, v235->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v257 = (System_Int32_array **)StringLiteral_19163/*"frame17"*/;
  }
  else
  {
    v257 = 0LL;
  }
  if ( LODWORD(v235->fields._EvalValueWarsituation_k__BackingField) <= 3 )
    goto LABEL_205;
  v235[1].klass = (WarBoardEvalValueSquare_EvalValueSquare_c *)v257;
  sub_B70630((BattleServantConfConponent_o *)&v235[1], v257, v251, v252, v253, v254, v255, v256);
  if ( !v228 )
    goto LABEL_207;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v228,
    17,
    v235,
    (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v15 = (System_Int32_array **)sub_B706AC(string___TypeInfo, 4LL);
  if ( !v15 )
    goto LABEL_207;
  v264 = (WarBoardEvalValueSquare_EvalValueSquare_o *)v15;
  v15 = (System_Int32_array **)StringLiteral_19165/*"frame20"*/;
  if ( StringLiteral_19165/*"frame20"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19165/*"frame20"*/, v264->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v265 = (System_Int32_array **)StringLiteral_19165/*"frame20"*/;
  }
  else
  {
    v265 = 0LL;
  }
  if ( !LODWORD(v264->fields._EvalValueWarsituation_k__BackingField) )
    goto LABEL_205;
  *(_QWORD *)&v264->fields._EvalValue_k__BackingField = v265;
  sub_B70630(
    (BattleServantConfConponent_o *)&v264->fields._EvalValue_k__BackingField,
    v265,
    v258,
    v259,
    v260,
    v261,
    v262,
    v263);
  v15 = (System_Int32_array **)StringLiteral_19165/*"frame20"*/;
  if ( StringLiteral_19165/*"frame20"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19165/*"frame20"*/, v264->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v272 = (System_Int32_array **)StringLiteral_19165/*"frame20"*/;
  }
  else
  {
    v272 = 0LL;
  }
  if ( LODWORD(v264->fields._EvalValueWarsituation_k__BackingField) <= 1 )
    goto LABEL_205;
  *(_QWORD *)&v264->fields._WarAdjustmentValueB_k__BackingField = v272;
  sub_B70630(
    (BattleServantConfConponent_o *)&v264->fields._WarAdjustmentValueB_k__BackingField,
    v272,
    v266,
    v267,
    v268,
    v269,
    v270,
    v271);
  v15 = (System_Int32_array **)StringLiteral_19165/*"frame20"*/;
  if ( StringLiteral_19165/*"frame20"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19165/*"frame20"*/, v264->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v279 = (System_Int32_array **)StringLiteral_19165/*"frame20"*/;
  }
  else
  {
    v279 = 0LL;
  }
  if ( LODWORD(v264->fields._EvalValueWarsituation_k__BackingField) <= 2 )
    goto LABEL_205;
  *(_QWORD *)&v264->fields._BenAdjustmentValueB_k__BackingField = v279;
  sub_B70630(
    (BattleServantConfConponent_o *)&v264->fields._BenAdjustmentValueB_k__BackingField,
    v279,
    v273,
    v274,
    v275,
    v276,
    v277,
    v278);
  v15 = (System_Int32_array **)StringLiteral_19165/*"frame20"*/;
  if ( StringLiteral_19165/*"frame20"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19165/*"frame20"*/, v264->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v286 = (System_Int32_array **)StringLiteral_19165/*"frame20"*/;
  }
  else
  {
    v286 = 0LL;
  }
  if ( LODWORD(v264->fields._EvalValueWarsituation_k__BackingField) <= 3 )
    goto LABEL_205;
  v264[1].klass = (WarBoardEvalValueSquare_EvalValueSquare_c *)v286;
  sub_B70630((BattleServantConfConponent_o *)&v264[1], v286, v280, v281, v282, v283, v284, v285);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v228,
    20,
    v264,
    (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v15 = (System_Int32_array **)sub_B706AC(string___TypeInfo, 4LL);
  if ( !v15 )
    goto LABEL_207;
  v293 = (WarBoardEvalValueSquare_EvalValueSquare_o *)v15;
  v15 = (System_Int32_array **)StringLiteral_19167/*"frame36"*/;
  if ( StringLiteral_19167/*"frame36"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19167/*"frame36"*/, v293->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v294 = (System_Int32_array **)StringLiteral_19167/*"frame36"*/;
  }
  else
  {
    v294 = 0LL;
  }
  if ( !LODWORD(v293->fields._EvalValueWarsituation_k__BackingField) )
    goto LABEL_205;
  *(_QWORD *)&v293->fields._EvalValue_k__BackingField = v294;
  sub_B70630(
    (BattleServantConfConponent_o *)&v293->fields._EvalValue_k__BackingField,
    v294,
    v287,
    v288,
    v289,
    v290,
    v291,
    v292);
  v15 = (System_Int32_array **)StringLiteral_19167/*"frame36"*/;
  if ( StringLiteral_19167/*"frame36"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19167/*"frame36"*/, v293->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v301 = (System_Int32_array **)StringLiteral_19167/*"frame36"*/;
  }
  else
  {
    v301 = 0LL;
  }
  if ( LODWORD(v293->fields._EvalValueWarsituation_k__BackingField) <= 1 )
    goto LABEL_205;
  *(_QWORD *)&v293->fields._WarAdjustmentValueB_k__BackingField = v301;
  sub_B70630(
    (BattleServantConfConponent_o *)&v293->fields._WarAdjustmentValueB_k__BackingField,
    v301,
    v295,
    v296,
    v297,
    v298,
    v299,
    v300);
  v15 = (System_Int32_array **)StringLiteral_19167/*"frame36"*/;
  if ( StringLiteral_19167/*"frame36"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19167/*"frame36"*/, v293->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v308 = (System_Int32_array **)StringLiteral_19167/*"frame36"*/;
  }
  else
  {
    v308 = 0LL;
  }
  if ( LODWORD(v293->fields._EvalValueWarsituation_k__BackingField) <= 2 )
    goto LABEL_205;
  *(_QWORD *)&v293->fields._BenAdjustmentValueB_k__BackingField = v308;
  sub_B70630(
    (BattleServantConfConponent_o *)&v293->fields._BenAdjustmentValueB_k__BackingField,
    v308,
    v302,
    v303,
    v304,
    v305,
    v306,
    v307);
  v15 = (System_Int32_array **)StringLiteral_19167/*"frame36"*/;
  if ( StringLiteral_19167/*"frame36"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19167/*"frame36"*/, v293->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v315 = (System_Int32_array **)StringLiteral_19167/*"frame36"*/;
  }
  else
  {
    v315 = 0LL;
  }
  if ( LODWORD(v293->fields._EvalValueWarsituation_k__BackingField) <= 3 )
    goto LABEL_205;
  v293[1].klass = (WarBoardEvalValueSquare_EvalValueSquare_c *)v315;
  sub_B70630((BattleServantConfConponent_o *)&v293[1], v315, v309, v310, v311, v312, v313, v314);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v228,
    36,
    v293,
    (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v15 = (System_Int32_array **)sub_B706AC(string___TypeInfo, 4LL);
  if ( !v15 )
    goto LABEL_207;
  v322 = (WarBoardEvalValueSquare_EvalValueSquare_o *)v15;
  v15 = (System_Int32_array **)StringLiteral_19168/*"frame37"*/;
  if ( StringLiteral_19168/*"frame37"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19168/*"frame37"*/, v322->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v323 = (System_Int32_array **)StringLiteral_19168/*"frame37"*/;
  }
  else
  {
    v323 = 0LL;
  }
  if ( !LODWORD(v322->fields._EvalValueWarsituation_k__BackingField) )
    goto LABEL_205;
  *(_QWORD *)&v322->fields._EvalValue_k__BackingField = v323;
  sub_B70630(
    (BattleServantConfConponent_o *)&v322->fields._EvalValue_k__BackingField,
    v323,
    v316,
    v317,
    v318,
    v319,
    v320,
    v321);
  v15 = (System_Int32_array **)StringLiteral_19168/*"frame37"*/;
  if ( StringLiteral_19168/*"frame37"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19168/*"frame37"*/, v322->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v330 = (System_Int32_array **)StringLiteral_19168/*"frame37"*/;
  }
  else
  {
    v330 = 0LL;
  }
  if ( LODWORD(v322->fields._EvalValueWarsituation_k__BackingField) <= 1 )
    goto LABEL_205;
  *(_QWORD *)&v322->fields._WarAdjustmentValueB_k__BackingField = v330;
  sub_B70630(
    (BattleServantConfConponent_o *)&v322->fields._WarAdjustmentValueB_k__BackingField,
    v330,
    v324,
    v325,
    v326,
    v327,
    v328,
    v329);
  v15 = (System_Int32_array **)StringLiteral_19168/*"frame37"*/;
  if ( StringLiteral_19168/*"frame37"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19168/*"frame37"*/, v322->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v337 = (System_Int32_array **)StringLiteral_19168/*"frame37"*/;
  }
  else
  {
    v337 = 0LL;
  }
  if ( LODWORD(v322->fields._EvalValueWarsituation_k__BackingField) <= 2 )
    goto LABEL_205;
  *(_QWORD *)&v322->fields._BenAdjustmentValueB_k__BackingField = v337;
  sub_B70630(
    (BattleServantConfConponent_o *)&v322->fields._BenAdjustmentValueB_k__BackingField,
    v337,
    v331,
    v332,
    v333,
    v334,
    v335,
    v336);
  v15 = (System_Int32_array **)StringLiteral_19168/*"frame37"*/;
  if ( StringLiteral_19168/*"frame37"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19168/*"frame37"*/, v322->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_206;
    v344 = (System_Int32_array **)StringLiteral_19168/*"frame37"*/;
  }
  else
  {
    v344 = 0LL;
  }
  if ( LODWORD(v322->fields._EvalValueWarsituation_k__BackingField) <= 3 )
    goto LABEL_205;
  v322[1].klass = (WarBoardEvalValueSquare_EvalValueSquare_c *)v344;
  sub_B70630((BattleServantConfConponent_o *)&v322[1], v344, v338, v339, v340, v341, v342, v343);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v228,
    37,
    v322,
    (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v345 = UICharaGraphRender_TypeInfo->static_fields;
  v345->baseFrameTable = (struct System_Collections_Generic_Dictionary_int__string____o *)v228;
  sub_B70630(
    (BattleServantConfConponent_o *)&v345->baseFrameTable,
    (System_Int32_array **)v228,
    v346,
    v347,
    v348,
    v349,
    v350,
    v351);
  v15 = (System_Int32_array **)sub_B706AC(string___TypeInfo, 6LL);
  if ( !v15 )
LABEL_207:
    sub_B7076C(v15, v16);
  v358 = v15;
  v15 = (System_Int32_array **)StringLiteral_19161/*"frame0"*/;
  if ( StringLiteral_19161/*"frame0"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19161/*"frame0"*/, *(_QWORD *)&(*v358)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v359 = (System_Int32_array **)StringLiteral_19161/*"frame0"*/;
  }
  else
  {
    v359 = 0LL;
  }
  if ( !*((_DWORD *)v358 + 6) )
    goto LABEL_205;
  v358[4] = (System_Int32_array *)v359;
  sub_B70630((BattleServantConfConponent_o *)(v358 + 4), v359, v352, v353, v354, v355, v356, v357);
  v15 = (System_Int32_array **)StringLiteral_19162/*"frame1"*/;
  if ( StringLiteral_19162/*"frame1"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19162/*"frame1"*/, *(_QWORD *)&(*v358)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v366 = (System_Int32_array **)StringLiteral_19162/*"frame1"*/;
  }
  else
  {
    v366 = 0LL;
  }
  if ( *((_DWORD *)v358 + 6) <= 1u )
    goto LABEL_205;
  v358[5] = (System_Int32_array *)v366;
  sub_B70630((BattleServantConfConponent_o *)(v358 + 5), v366, v360, v361, v362, v363, v364, v365);
  v15 = (System_Int32_array **)StringLiteral_19162/*"frame1"*/;
  if ( StringLiteral_19162/*"frame1"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19162/*"frame1"*/, *(_QWORD *)&(*v358)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v373 = (System_Int32_array **)StringLiteral_19162/*"frame1"*/;
  }
  else
  {
    v373 = 0LL;
  }
  if ( *((_DWORD *)v358 + 6) <= 2u )
    goto LABEL_205;
  v358[6] = (System_Int32_array *)v373;
  sub_B70630((BattleServantConfConponent_o *)(v358 + 6), v373, v367, v368, v369, v370, v371, v372);
  v15 = (System_Int32_array **)StringLiteral_19164/*"frame2"*/;
  if ( StringLiteral_19164/*"frame2"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19164/*"frame2"*/, *(_QWORD *)&(*v358)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v380 = (System_Int32_array **)StringLiteral_19164/*"frame2"*/;
  }
  else
  {
    v380 = 0LL;
  }
  if ( *((_DWORD *)v358 + 6) <= 3u )
    goto LABEL_205;
  v358[7] = (System_Int32_array *)v380;
  sub_B70630((BattleServantConfConponent_o *)(v358 + 7), v380, v374, v375, v376, v377, v378, v379);
  v15 = (System_Int32_array **)StringLiteral_19166/*"frame3"*/;
  if ( StringLiteral_19166/*"frame3"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19166/*"frame3"*/, *(_QWORD *)&(*v358)->m_Items[9]);
    if ( !v15 )
      goto LABEL_206;
    v387 = (System_Int32_array **)StringLiteral_19166/*"frame3"*/;
  }
  else
  {
    v387 = 0LL;
  }
  if ( *((_DWORD *)v358 + 6) <= 4u )
    goto LABEL_205;
  v358[8] = (System_Int32_array *)v387;
  sub_B70630((BattleServantConfConponent_o *)(v358 + 8), v387, v381, v382, v383, v384, v385, v386);
  v15 = (System_Int32_array **)StringLiteral_19166/*"frame3"*/;
  if ( StringLiteral_19166/*"frame3"*/ )
  {
    v15 = (System_Int32_array **)sub_B70754(StringLiteral_19166/*"frame3"*/, *(_QWORD *)&(*v358)->m_Items[9]);
    if ( v15 )
    {
      v394 = (System_Int32_array **)StringLiteral_19166/*"frame3"*/;
      goto LABEL_203;
    }
LABEL_206:
    v403 = sub_B7078C(v15);
    sub_B70738(v403, 0LL);
  }
  v394 = 0LL;
LABEL_203:
  if ( *((_DWORD *)v358 + 6) <= 5u )
    goto LABEL_205;
  v358[9] = (System_Int32_array *)v394;
  sub_B70630((BattleServantConfConponent_o *)(v358 + 9), v394, v388, v389, v390, v391, v392, v393);
  v395 = UICharaGraphRender_TypeInfo->static_fields;
  v395->commandCodeBaseFrameList = (struct System_String_array *)v358;
  sub_B70630((BattleServantConfConponent_o *)&v395->commandCodeBaseFrameList, v358, v396, v397, v398, v399, v400, v401);
}


void __fastcall UICharaGraphRender___ctor(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


System_String_o *__fastcall UICharaGraphRender__GetAssetName(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x0
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  System_String_o *v10; // x0
  int32_t IntValue; // [xsp+Ch] [xbp-34h] BYREF
  WarEntity_o *v13; // [xsp+10h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF
  int32_t imageLimitCounta; // [xsp+28h] [xbp-18h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-14h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_435938C & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_20684/*"maleImageId"*/);
    sub_B70694(&StringLiteral_4007/*"CharaGraph/100000"*/);
    sub_B70694(&StringLiteral_4006/*"CharaGraph/"*/);
    byte_435938C = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  IntValue = 0;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_33;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
  }
  v6 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  v7 = System_String__Concat_44758168((System_String_o *)StringLiteral_4006/*"CharaGraph/"*/, v6, 0LL);
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_33;
  if ( UserGameEntity__IsMale((UserGameEntity_o *)Instance, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  &entity,
                                  svtIda,
                                  (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_33;
      IntValue = EntityScriptUtil__GetIntValue(
                   *(System_Collections_Generic_Dictionary_string__object__o **)&entity[1].fields.flag,
                   (System_String_o *)StringLiteral_20684/*"maleImageId"*/,
                   0,
                   0LL);
      if ( IntValue )
      {
        v8 = System_Int32__ToString((int32_t)&IntValue, 0LL);
        v7 = System_String__Concat_44758168((System_String_o *)StringLiteral_4006/*"CharaGraph/"*/, v8, 0LL);
      }
    }
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v7, 0LL) )
    return v7;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_33;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &v13,
          svtIda,
          (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4007/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v13;
  if ( !v13 )
    goto LABEL_33;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v13, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_4007/*"CharaGraph/100000"*/;
  if ( !v13 )
LABEL_33:
    sub_B7076C(Instance, v5);
  *(_QWORD *)&v17.fields.currentCryptoKey = &v13->fields.name;
  *(_QWORD *)&v17.fields.fakeValue = 0LL;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v17, v9);
  v7 = System_String__Concat_44758168((System_String_o *)StringLiteral_4006/*"CharaGraph/"*/, v10, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v7, 0LL) )
    return (System_String_o *)StringLiteral_4007/*"CharaGraph/100000"*/;
  return v7;
}


System_String_o *__fastcall UICharaGraphRender__GetAssetName_36426520(int32_t imageSvtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *SelfUserGame; // x0
  __int64 v5; // x1
  System_String_o *v6; // x0
  const MethodInfo *v7; // x2
  System_String_o *v8; // x0
  ServantEntity_o *v10; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t IntValue; // [xsp+18h] [xbp-18h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-14h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v13 = imageSvtId;
  if ( (byte_435938D & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_20684/*"maleImageId"*/);
    sub_B70694(&StringLiteral_4007/*"CharaGraph/100000"*/);
    sub_B70694(&StringLiteral_4006/*"CharaGraph/"*/);
    byte_435938D = 1;
  }
  v10 = 0LL;
  entity = 0LL;
  IntValue = 0;
  v2 = System_Int32__ToString((int32_t)&v13, 0LL);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_4006/*"CharaGraph/"*/, v2, 0LL);
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_29;
  if ( UserGameEntity__IsMale((UserGameEntity_o *)SelfUserGame, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_29;
    SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    SelfUserGame,
                                                                    &entity,
                                                                    v13,
                                                                    (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_29;
      IntValue = EntityScriptUtil__GetIntValue(
                   *(System_Collections_Generic_Dictionary_string__object__o **)&entity[1].fields.flag,
                   (System_String_o *)StringLiteral_20684/*"maleImageId"*/,
                   0,
                   0LL);
      if ( IntValue )
      {
        v6 = System_Int32__ToString((int32_t)&IntValue, 0LL);
        v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_4006/*"CharaGraph/"*/, v6, 0LL);
      }
    }
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0LL) )
    return v3;
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_29;
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)SelfUserGame,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_29;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          SelfUserGame,
          (WarEntity_o **)&v10,
          v13,
          (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4007/*"CharaGraph/100000"*/;
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)v10;
  if ( !v10 )
    goto LABEL_29;
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEntity__get_IsServantMaterialTd(v10, 0LL);
  if ( ((unsigned __int8)SelfUserGame & 1) == 0 )
    return (System_String_o *)StringLiteral_4007/*"CharaGraph/100000"*/;
  if ( !v10 )
LABEL_29:
    sub_B7076C(SelfUserGame, v5);
  *(_QWORD *)&v14.fields.currentCryptoKey = &v10->fields.baseSvtId;
  *(_QWORD *)&v14.fields.fakeValue = 0LL;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v14, v7);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_4006/*"CharaGraph/"*/, v8, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v3, 0LL) )
    return (System_String_o *)StringLiteral_4007/*"CharaGraph/100000"*/;
  return v3;
}


int32_t __fastcall UICharaGraphRender__GetBaseKind(UICharaGraphRender_o *this, const MethodInfo *method)
{
  return this->fields.baseKind;
}


UnityEngine_Vector2_o __fastcall UICharaGraphRender__GetBodySize(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UICharaGraphRender_c *v3; // x0
  struct UICharaGraphRender_StaticFields *static_fields; // x9
  int *p_SERVANT_EQUIP_BODY_SIZE_X; // x8
  int *p_SERVANT_EQUIP_BODY_SIZE_Y; // x9
  struct UICharaGraphRender_StaticFields *v7; // x9
  float v8; // s0
  float v9; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4359394 & 1) == 0 )
  {
    sub_B70694(&UICharaGraphRender_TypeInfo);
    byte_4359394 = 1;
  }
  v3 = UICharaGraphRender_TypeInfo;
  if ( this->fields.baseKind )
  {
    if ( (WORD1(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      v3 = UICharaGraphRender_TypeInfo;
    }
    static_fields = v3->static_fields;
    p_SERVANT_EQUIP_BODY_SIZE_X = &static_fields->SERVANT_EQUIP_BODY_SIZE_X;
    p_SERVANT_EQUIP_BODY_SIZE_Y = &static_fields->SERVANT_EQUIP_BODY_SIZE_Y;
  }
  else
  {
    if ( (WORD1(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      v3 = UICharaGraphRender_TypeInfo;
    }
    v7 = v3->static_fields;
    p_SERVANT_EQUIP_BODY_SIZE_X = &v7->SERVANT_BODY_SIZE_X;
    p_SERVANT_EQUIP_BODY_SIZE_Y = &v7->SERVANT_BODY_SIZE_Y;
  }
  v8 = (float)*p_SERVANT_EQUIP_BODY_SIZE_X;
  v9 = (float)*p_SERVANT_EQUIP_BODY_SIZE_Y;
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}


UnityEngine_Texture2D_o *__fastcall UICharaGraphRender__GetBodyTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v4; // x20
  System_String_o *LastName; // x0
  System_String_o *v6; // x0
  const MethodInfo_1BD6720 *v7; // x2
  System_String_o **p_changeGraphSuffix; // x8
  __int64 v9; // x8
  __int64 imageLimitCount; // x9
  System_String_o *v11; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x22
  UnityEngine_Texture2D_o *result; // x0
  System_String_o *v16; // x0
  __int64 v17; // x0

  v4 = this;
  if ( (byte_4359396 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_Texture2D____69232744);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UICharaGraphRender_TypeInfo);
    this = (UICharaGraphRender_o *)sub_B70694(&StringLiteral_16458/*"a"*/);
    byte_4359396 = 1;
  }
  if ( v4->fields.baseKind )
  {
    v4->fields.textureImageLimitCount = 0;
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v6 = System_String__Concat_44758168(LastName, (System_String_o *)StringLiteral_16458/*"a"*/, 0LL);
      v7 = (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_Texture2D____69232744;
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(data, v6, v7);
    }
LABEL_22:
    sub_B7076C(this, data);
  }
  if ( v4->fields.isChangeGraph )
  {
    p_changeGraphSuffix = &v4->fields.changeGraphSuffix;
    if ( !data )
      goto LABEL_22;
  }
  else
  {
    this = (UICharaGraphRender_o *)UICharaGraphRender_TypeInfo;
    if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      this = (UICharaGraphRender_o *)UICharaGraphRender_TypeInfo;
    }
    v9 = *(_QWORD *)&this->fields.onPostFill[1].fields.method_ptr;
    if ( !v9 )
      goto LABEL_22;
    imageLimitCount = v4->fields.imageLimitCount;
    if ( (unsigned int)imageLimitCount >= *(_DWORD *)(v9 + 24) )
    {
      v17 = sub_B70798(this);
      sub_B70738(v17, 0LL);
    }
    p_changeGraphSuffix = (System_String_o **)(v9 + 8 * imageLimitCount + 32);
    if ( !data )
      goto LABEL_22;
  }
  v11 = *p_changeGraphSuffix;
  v12 = AssetData__get_LastName(data, 0LL);
  v13 = System_String__Concat_44758168(v12, v11, 0LL);
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                data,
                                                                v13,
                                                                (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_Texture2D____69232744);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    result = Object_WarBoardWaitTimeSetting;
    v4->fields.textureImageLimitCount = v4->fields.imageLimitCount;
    return result;
  }
  v4->fields.textureImageLimitCount = 0;
  v16 = AssetData__get_LastName(data, 0LL);
  v6 = System_String__Concat_44758168(v16, v11, 0LL);
  v7 = (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_Texture2D____69232744;
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(data, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall UICharaGraphRender__GetBodyUvRect(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UICharaGraphRender_c *v3; // x0
  float *p_OTHER_IMAGE_LIMIT_COUNT; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  float v8; // s3
  System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *servantBodyRectTable; // x0
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4359395 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
    sub_B70694(&UICharaGraphRender_TypeInfo);
    byte_4359395 = 1;
  }
  v3 = UICharaGraphRender_TypeInfo;
  if ( this->fields.baseKind )
  {
    if ( (WORD1(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      v3 = UICharaGraphRender_TypeInfo;
    }
    p_OTHER_IMAGE_LIMIT_COUNT = (float *)&v3->static_fields->OTHER_IMAGE_LIMIT_COUNT;
    v5 = p_OTHER_IMAGE_LIMIT_COUNT[18];
    v6 = p_OTHER_IMAGE_LIMIT_COUNT[19];
    v7 = p_OTHER_IMAGE_LIMIT_COUNT[20];
    v8 = p_OTHER_IMAGE_LIMIT_COUNT[21];
  }
  else
  {
    if ( (WORD1(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      v3 = UICharaGraphRender_TypeInfo;
    }
    servantBodyRectTable = v3->static_fields->servantBodyRectTable;
    if ( !servantBodyRectTable )
      sub_B7076C(0LL, method);
    *(UnityEngine_Rect_o *)&v5 = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                                   servantBodyRectTable,
                                   this->fields.textureImageLimitCount,
                                   (const MethodInfo_2B2CE7C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
  }
  result.fields.m_Height = v8;
  result.fields.m_Width = v7;
  result.fields.m_YMin = v6;
  result.fields.m_XMin = v5;
  return result;
}


System_String_o *__fastcall UICharaGraphRender__GetClassSprite(UICharaGraphRender_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  System_String_o *result; // x0
  int v6; // w20
  int32_t frameType; // w19
  System_String_o *v8; // x19
  System_String_o *v9; // x0
  int32_t AdjustFrameTypeForClass; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_435939C & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B70694(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    sub_B70694(&StringLiteral_17708/*"class"*/);
    byte_435939C = 1;
  }
  AdjustFrameTypeForClass = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  result = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                this->fields.classId,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( result )
  {
    v6 = (int)result;
    frameType = this->fields.frameType;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType, 0LL);
    v8 = System_Int32__ToString((int32_t)&AdjustFrameTypeForClass, 0LL);
    v9 = System_Int32__ToString(v6 + 44, 0LL);
    return System_String__Concat_44761580(
             (System_String_o *)StringLiteral_17708/*"class"*/,
             v8,
             (System_String_o *)StringLiteral_16127/*"_"*/,
             v9,
             0LL);
  }
  return result;
}


System_String_o *__fastcall UICharaGraphRender__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = commandCodeId;
  if ( (byte_435938E & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&StringLiteral_4249/*"CommandGraph/1000000"*/);
    sub_B70694(&StringLiteral_4248/*"CommandGraph/"*/);
    byte_435938E = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_4248/*"CommandGraph/"*/, v2, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0LL) )
    return v3;
  else
    return (System_String_o *)StringLiteral_4249/*"CommandGraph/1000000"*/;
}


System_String_o *__fastcall UICharaGraphRender__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_String_o *v7; // x0
  ServantEntity_o *v9; // [xsp+0h] [xbp-20h] BYREF
  int32_t key; // [xsp+Ch] [xbp-14h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  key = svtId;
  if ( (byte_435938F & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_4009/*"CharaGraph/CharaGraphEx/"*/);
    sub_B70694(&StringLiteral_4007/*"CharaGraph/100000"*/);
    sub_B70694(&StringLiteral_4006/*"CharaGraph/"*/);
    byte_435938F = 1;
  }
  v9 = 0LL;
  v2 = System_Int32__ToString((int32_t)&key, 0LL);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_4009/*"CharaGraph/CharaGraphEx/"*/, v2, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0LL) )
    return v3;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          (WarEntity_o **)&v9,
          key,
          (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4007/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v9;
  if ( !v9 )
    goto LABEL_19;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd(v9, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_4007/*"CharaGraph/100000"*/;
  if ( !v9 )
LABEL_19:
    sub_B7076C(Instance, v5);
  *(_QWORD *)&v11.fields.currentCryptoKey = &v9->fields.baseSvtId;
  *(_QWORD *)&v11.fields.fakeValue = 0LL;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v11, v6);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_4006/*"CharaGraph/"*/, v7, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v3, 0LL) )
    return (System_String_o *)StringLiteral_4007/*"CharaGraph/100000"*/;
  return v3;
}


UnityEngine_Texture2D_o *__fastcall UICharaGraphRender__GetName2Texture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( this->fields.realNameCheck == 3 )
    return UICharaGraphRender__GetTrueNameTexture(this, data, method);
  else
    return 0LL;
}


int32_t __fastcall UICharaGraphRender__GetNameTargetLimitCount(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UICharaGraphRender_c *v3; // x0
  struct System_Int32_array *SERVANT_NAME_TARGET_LIMIT_COUNT; // x8
  int32_t imageLimitCount; // w9
  __int64 v7; // x0

  if ( (byte_4359397 & 1) == 0 )
  {
    sub_B70694(&UICharaGraphRender_TypeInfo);
    byte_4359397 = 1;
  }
  v3 = UICharaGraphRender_TypeInfo;
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
    v3 = UICharaGraphRender_TypeInfo;
  }
  SERVANT_NAME_TARGET_LIMIT_COUNT = v3->static_fields->SERVANT_NAME_TARGET_LIMIT_COUNT;
  if ( !SERVANT_NAME_TARGET_LIMIT_COUNT )
    goto LABEL_15;
  imageLimitCount = this->fields.imageLimitCount;
  if ( imageLimitCount >= (signed int)SERVANT_NAME_TARGET_LIMIT_COUNT->max_length )
    return 0;
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    SERVANT_NAME_TARGET_LIMIT_COUNT = UICharaGraphRender_TypeInfo->static_fields->SERVANT_NAME_TARGET_LIMIT_COUNT;
    if ( SERVANT_NAME_TARGET_LIMIT_COUNT )
    {
      imageLimitCount = this->fields.imageLimitCount;
      goto LABEL_12;
    }
LABEL_15:
    sub_B7076C(v3, method);
  }
LABEL_12:
  if ( imageLimitCount >= SERVANT_NAME_TARGET_LIMIT_COUNT->max_length )
  {
    v7 = sub_B70798(v3);
    sub_B70738(v7, 0LL);
  }
  return SERVANT_NAME_TARGET_LIMIT_COUNT->m_Items[imageLimitCount + 1];
}


UnityEngine_Texture2D_o *__fastcall UICharaGraphRender__GetNameTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v4; // x20
  System_String_o *LastName; // x0
  __int64 *v6; // x8
  System_String_o *v7; // x0

  v4 = this;
  if ( (byte_4359398 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_Texture2D____69232744);
    sub_B70694(&StringLiteral_16791/*"b"*/);
    this = (UICharaGraphRender_o *)sub_B70694(&StringLiteral_21340/*"name"*/);
    byte_4359398 = 1;
  }
  if ( v4->fields.isEventJoinNameExist )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v6 = &StringLiteral_21340/*"name"*/;
LABEL_6:
      v7 = System_String__Concat_44758168(LastName, (System_String_o *)*v6, 0LL);
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          data,
                                          v7,
                                          (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_Texture2D____69232744);
    }
    goto LABEL_11;
  }
  if ( !v4->fields.isNameTrue )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v6 = &StringLiteral_16791/*"b"*/;
      goto LABEL_6;
    }
LABEL_11:
    sub_B7076C(this, data);
  }
  return UICharaGraphRender__GetTrueNameTexture(v4, data, method);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall UICharaGraphRender__GetNameUvRect(
        UICharaGraphRender_o *this,
        UnityEngine_Rect_o defaultValue,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w20
  ServantLimitMaster_o *v8; // x21
  const MethodInfo *v9; // x1
  unsigned __int32 v10; // s0
  int v12; // s2
  int32_t SaintGraphNameIndex; // w0
  int v15; // w19
  UICharaGraphRender_c *v16; // x0
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  float SERVANT_NAME_UV_DIFF_Y; // s0
  float v19; // s1
  float v20; // s8
  float m_XMin; // s9
  float v22; // s10
  float height; // s3
  float v24; // s4
  float v25; // s5
  float v26; // s6
  float v27; // s7
  float v28; // s0
  float v29; // s1
  float v30; // s2
  float v31; // s8
  float v32; // s9
  float v33; // s0
  float v34; // s1
  float v35; // s2
  float v36; // s3
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Rect_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  methoda.methodPointer = *(Il2CppMethodPointer *)&defaultValue.fields.m_XMin;
  methoda.invoker_method = *(void **)&defaultValue.fields.m_Width;
  if ( (byte_435939A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UICharaGraphRender_TypeInfo);
    byte_435939A = 1;
  }
  entity = 0LL;
  if ( !this->fields.baseKind )
  {
    entity = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             Instance,
                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      svtId = this->fields.svtId;
      v8 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
      Instance = (DataManager_o *)UICharaGraphRender__GetNameTargetLimitCount(this, v9);
      if ( v8 )
      {
        if ( !ServantLimitMaster__TryGetEntity(v8, &entity, svtId, (int32_t)Instance, 0LL) )
          goto LABEL_20;
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          if ( !ServantLimitEntity__IsNeedChangeSaintGraphName(entity, 0LL) )
            goto LABEL_20;
          Instance = (DataManager_o *)entity;
          if ( entity )
          {
            SaintGraphNameIndex = ServantLimitEntity__GetSaintGraphNameIndex(entity, -1, 0LL);
            if ( (SaintGraphNameIndex & 0x80000000) == 0 )
            {
              v15 = SaintGraphNameIndex;
              v16 = UICharaGraphRender_TypeInfo;
              if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
              {
                v10 = j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo).n128_u32[0];
                v16 = UICharaGraphRender_TypeInfo;
              }
              static_fields = v16->static_fields;
              if ( v15 < static_fields->MAX_SERVANT_NAME_UV_DIFF_COUNT )
              {
                if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v16);
                  static_fields = UICharaGraphRender_TypeInfo->static_fields;
                }
                SERVANT_NAME_UV_DIFF_Y = static_fields->SERVANT_NAME_UV_DIFF_Y;
                v19 = (float)v15;
                v20 = SERVANT_NAME_UV_DIFF_Y * (float)v15;
                v39.fields.m_XMin = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)(&v12 - 2), &methoda);
                m_XMin = v39.fields.m_XMin;
                v40.fields.m_XMin = UnityEngine_Rect__get_width(v39, &methoda);
                v22 = v40.fields.m_XMin;
                height = UnityEngine_Rect__get_height(v40, &methoda);
                methoda.name = 0LL;
                methoda.klass = 0LL;
                v28 = m_XMin;
                v29 = v20;
                v30 = v22;
                goto LABEL_21;
              }
            }
LABEL_20:
            v41.fields.m_XMin = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v10, &methoda);
            v31 = v41.fields.m_XMin;
            v42.fields.m_XMin = UnityEngine_Rect__get_width(v41, &methoda);
            v32 = v42.fields.m_XMin;
            height = UnityEngine_Rect__get_height(v42, &methoda);
            v29 = 0.0;
            v28 = v31;
            v30 = v32;
            methoda.name = 0LL;
            methoda.klass = 0LL;
LABEL_21:
            UnityEngine_Rect___ctor(*(UnityEngine_Rect_o *)&v28, v24, v25, v26, v27, (const MethodInfo *)&methoda.name);
            goto LABEL_22;
          }
        }
      }
    }
    sub_B7076C(Instance, v5);
  }
  *(_OWORD *)&methoda.name = *(_OWORD *)&methoda.methodPointer;
LABEL_22:
  v34 = *((float *)&methoda.name + 1);
  v33 = *(float *)&methoda.name;
  v36 = *((float *)&methoda.klass + 1);
  v35 = *(float *)&methoda.klass;
  result.fields.m_Height = v36;
  result.fields.m_Width = v35;
  result.fields.m_YMin = v34;
  result.fields.m_XMin = v33;
  return result;
}


System_String_o *__fastcall UICharaGraphRender__GetRaritySprite(UICharaGraphRender_o *this, const MethodInfo *method)
{
  int v2; // w19
  System_String_o *v3; // x20
  System_String_o *v4; // x0

  v2 = (int)this;
  if ( (byte_435939B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_22064/*"rarity"*/);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    byte_435939B = 1;
  }
  v3 = System_Int32__ToString(v2 + 480, 0LL);
  v4 = System_Int32__ToString(v2 + 440, 0LL);
  return System_String__Concat_44761580(
           (System_String_o *)StringLiteral_22064/*"rarity"*/,
           v3,
           (System_String_o *)StringLiteral_16127/*"_"*/,
           v4,
           0LL);
}


UnityEngine_Texture2D_o *__fastcall UICharaGraphRender__GetTrueNameTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w21
  ServantLimitMaster_o *v9; // x22
  const MethodInfo *v10; // x1
  __int64 *v11; // x20
  System_String_o *LastName; // x0
  System_String_o *v13; // x0
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4359399 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_Texture2D____69232744);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_16458/*"a"*/);
    sub_B70694(&StringLiteral_21340/*"name"*/);
    byte_4359399 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  v9 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (DataManager_o *)UICharaGraphRender__GetNameTargetLimitCount(this, v10);
  if ( !v9 )
    goto LABEL_13;
  Instance = (DataManager_o *)ServantLimitMaster__TryGetEntity(v9, &entity, svtId, (int32_t)Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_10;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_13;
  Instance = (DataManager_o *)ServantLimitEntity__IsNeedChangeSaintGraphName(entity, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
LABEL_10:
    if ( data )
    {
      v11 = &StringLiteral_16458/*"a"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_B7076C(Instance, v6);
  }
  if ( !data )
    goto LABEL_13;
  v11 = &StringLiteral_21340/*"name"*/;
LABEL_12:
  LastName = AssetData__get_LastName(data, 0LL);
  v13 = System_String__Concat_44758168(LastName, (System_String_o *)*v11, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      data,
                                      v13,
                                      (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_Texture2D____69232744);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__MoveAlpha(
        UICharaGraphRender_o *this,
        float duration,
        float alpha,
        const MethodInfo *method)
{
  long double v4; // q9
  long double v5; // q10
  long double v6; // q11
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v10; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  *(float *)&v6 = this->fields.mColor.fields.r;
  *(float *)&v5 = this->fields.mColor.fields.g;
  *(float *)&v4 = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UICharaGraphRender_o *, Il2CppMethodPointer, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.method)(
      this,
      this->klass->vtable._40_GetTweenColor.methodPtr,
      v6,
      v5,
      v4,
      *(long double *)&alpha);
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v10.fields.r = *(float *)&v6;
    v10.fields.g = *(float *)&v5;
    v10.fields.b = *(float *)&v4;
    v10.fields.a = alpha;
    TweenRendererColor__Begin(gameObject, duration, v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__MoveAlpha_36433268(
        UICharaGraphRender_o *this,
        float duration,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        const MethodInfo *method)
{
  long double v6; // q10
  long double v7; // q11
  long double v8; // q12
  long double v11; // q8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRendererColor_o *v15; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Color_o v30; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v11 = *(long double *)&alpha;
  if ( (byte_435939D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435939D = 1;
  }
  *(float *)&v8 = this->fields.mColor.fields.r;
  *(float *)&v7 = this->fields.mColor.fields.g;
  *(float *)&v6 = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UICharaGraphRender_o *, Il2CppMethodPointer, System_String_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.method)(
      this,
      this->klass->vtable._40_GetTweenColor.methodPtr,
      callbackFunc,
      method,
      v8,
      v7,
      v6,
      v11);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0LL, 0LL);
    if ( v16 )
    {
      if ( !callbackObject )
        goto LABEL_21;
      UnityEngine_GameObject__SendMessage_41092720(callbackObject, callbackFunc, 0LL);
    }
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v30.fields.r = *(float *)&v8;
    v30.fields.g = *(float *)&v7;
    v30.fields.b = *(float *)&v6;
    v30.fields.a = *(float *)&v11;
    v15 = TweenRendererColor__Begin(gameObject, duration, v30, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( v16 )
      {
        if ( v15 )
        {
          v15->fields.eventReceiver = callbackObject;
          sub_B70630(
            (BattleServantConfConponent_o *)&v15->fields.eventReceiver,
            (System_Int32_array **)callbackObject,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          v15->fields.callWhenFinished = callbackFunc;
          sub_B70630(
            (BattleServantConfConponent_o *)&v15->fields.callWhenFinished,
            (System_Int32_array **)callbackFunc,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          return;
        }
LABEL_21:
        sub_B7076C(v16, v17);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetAlpha(UICharaGraphRender_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q3

  *(float *)&v3 = this->fields.mColor.fields.r;
  ((void (__fastcall *)(UICharaGraphRender_o *, Il2CppMethodPointer, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.method)(
    this,
    this->klass->vtable._40_GetTweenColor.methodPtr,
    v3,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    *(long double *)&alpha);
}


void __fastcall UICharaGraphRender__SetAtk(
        UICharaGraphRender_o *this,
        int32_t atk,
        int32_t adjustAtk,
        const MethodInfo *method)
{
  if ( (this->fields.atk & 0x80000000) == 0 )
  {
    this->fields.atk = atk;
    this->fields.adjustAtk = adjustAtk;
  }
}


void __fastcall UICharaGraphRender__SetCharacter(
        UICharaGraphRender_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        bool isOwn,
        int32_t lv,
        int32_t changeNameType,
        int32_t saintGraphType,
        const MethodInfo *method)
{
  BalanceConfig_c *v17; // x0
  int32_t ServantLimitMax; // w8
  const MethodInfo *v19; // x3

  if ( (byte_4359390 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&ImageLimitCount_TypeInfo);
    byte_4359390 = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  ServantLimitMax = limitCount;
  if ( v17->static_fields->ServantLimitMax < limitCount )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      ServantLimitMax = v17->static_fields->ServantLimitMax;
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        ServantLimitMax = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
      }
    }
    else
    {
      ServantLimitMax = v17->static_fields->ServantLimitMax;
    }
  }
  this->fields.limitCount = ServantLimitMax;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  this->fields.imageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, isOwn, 0, 0LL);
  this->fields.exceedCount = exceedCount;
  this->fields.lv = lv;
  UICharaGraphRender__SetCharacter_36428144(this, changeNameType, saintGraphType, v19);
}


void __fastcall UICharaGraphRender__SetCharacter_36428144(
        UICharaGraphRender_o *this,
        int32_t changeNameType,
        int32_t saintGraphType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 rarity; // x1
  ServantEntity_o *v9; // x21
  ServantLimitEntity_o *v10; // x24
  ServantExceedEntity_o *v11; // x0
  ServantExceedEntity_o *v12; // x23
  int32_t frameType; // w0
  int32_t v14; // w24
  int32_t exceedCount; // w8
  int32_t classId; // w24
  int32_t FrameId; // w0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t v24; // w24
  UICharaGraphRender_c *v25; // x0
  UICharaGraphRender_c *v26; // x0
  __int64 v27; // x8
  DataManager_c **v28; // x8
  Il2CppObject *syncRoot; // x8
  __int64 v30; // x9
  struct System_String_o *v31; // x1
  int32_t rarityIcon; // w23
  int32_t v33; // w0
  int v34; // w8
  int EventJoinNameExistSvtId; // w0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w23
  int32_t imageLimitCount; // w25
  ServantLimitMaster_o *v46; // x24
  int32_t v47; // w0
  int32_t v48; // w23
  struct System_String_o *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  unsigned int v56; // w8
  __int64 v57; // x0
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4359392 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__string____ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__string____get_Item__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&Rarity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UICharaGraphRender_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4359392 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_77;
  v9 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                            this->fields.svtId,
                            (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_77;
  v10 = ServantLimitMaster__GetEntity(
          (ServantLimitMaster_o *)Instance,
          this->fields.svtId,
          this->fields.limitCount,
          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v9 )
    goto LABEL_77;
  this->fields.svtType = v9->fields.type;
  this->fields.classId = v9->fields.classId;
  if ( !v10 )
    goto LABEL_77;
  rarity = (unsigned int)v10->fields.rarity;
  this->fields.rarity = rarity;
  if ( !Instance )
    goto LABEL_77;
  v11 = ServantExceedMaster__GetEntity((ServantExceedMaster_o *)Instance, rarity, this->fields.exceedCount, 0LL);
  v12 = v11;
  if ( v11 )
  {
    frameType = v11->fields.frameType;
  }
  else
  {
    v14 = v10->fields.rarity;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    frameType = Rarity__getFrameTypeImage(v14, 0, 0LL);
  }
  exceedCount = this->fields.exceedCount;
  this->fields.frameType = frameType;
  if ( exceedCount >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_77;
    this->fields.frameType = ServantLvDetailMaster__GetFrameType(
                               (ServantLvDetailMaster_o *)Instance,
                               this->fields.rarity,
                               this->fields.lv,
                               this->fields.frameType,
                               0LL);
  }
  classId = this->fields.classId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  FrameId = AtlasManager__GetFrameId(classId, 0LL);
  if ( FrameId >= 1 )
  {
    v24 = FrameId;
    v25 = UICharaGraphRender_TypeInfo;
    if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      v25 = UICharaGraphRender_TypeInfo;
    }
    Instance = (DataManager_o *)v25->static_fields->baseFrameTable;
    if ( !Instance )
      goto LABEL_77;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Instance,
           v24,
           (const MethodInfo_2FC67DC *)Method_System_Collections_Generic_Dictionary_int__string____ContainsKey__) )
    {
      v26 = UICharaGraphRender_TypeInfo;
      if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v26 = UICharaGraphRender_TypeInfo;
      }
      Instance = (DataManager_o *)v26->static_fields->baseFrameTable;
      if ( !Instance )
        goto LABEL_77;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                                    v24,
                                    (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__string____get_Item__);
      if ( !Instance )
        goto LABEL_77;
      v27 = this->fields.frameType;
      if ( (unsigned int)v27 < LODWORD(Instance->fields.datalist) )
      {
        v28 = &Instance->klass + v27;
        goto LABEL_43;
      }
LABEL_78:
      v57 = sub_B70798(Instance);
      sub_B70738(v57, 0LL);
    }
  }
  Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
    Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
  }
  syncRoot = Instance[1].fields.saveNameList[2].fields._syncRoot;
  if ( !syncRoot )
    goto LABEL_77;
  v30 = this->fields.frameType;
  if ( (unsigned int)v30 >= LODWORD(syncRoot[1].monitor) )
    goto LABEL_78;
  v28 = (DataManager_c **)(&syncRoot->klass + v30);
LABEL_43:
  v31 = (struct System_String_o *)v28[4];
  this->fields.frameName = v31;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.frameName,
    (System_Int32_array **)v31,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( this->fields.exceedCount < 1 )
  {
    v33 = 0;
  }
  else
  {
    if ( v12 )
      rarityIcon = v12->fields.rarityIcon;
    else
      rarityIcon = 1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_77;
    v33 = ServantLvDetailMaster__GetRarityIcon(
            (ServantLvDetailMaster_o *)Instance,
            this->fields.rarity,
            this->fields.lv,
            rarityIcon,
            0LL);
  }
  this->fields.exceedType = v33;
  if ( ServantEntity__get_IsCombineMaterial(v9, 0LL) )
    v34 = -1;
  else
    v34 = ServantEntity__get_IsServantMaterialTd(v9, 0LL) << 31 >> 31;
  this->fields.atk = v34;
  this->fields.hp = v34;
  this->fields.adjustHp = 0;
  this->fields.adjustAtk = 0;
  this->fields.realNameCheck = changeNameType;
  this->fields.saintGraphType = saintGraphType;
  this->fields.isEventJoinNameExist = 0;
  EventJoinNameExistSvtId = ServantEntity__GetEventJoinNameExistSvtId(v9, 0LL);
  if ( EventJoinNameExistSvtId >= 1 )
  {
    this->fields.imageSvtId = EventJoinNameExistSvtId;
    this->fields.isEventJoinNameExist = 1;
  }
  this->fields.isChangeGraph = 0;
  v42 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.changeGraphSuffix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.changeGraphSuffix, v42, v36, v37, v38, v39, v40, v41);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  imageLimitCount = this->fields.imageLimitCount;
  v46 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimit(imageLimitCount, 0LL);
  if ( !v46 )
    goto LABEL_77;
  if ( !ServantLimitMaster__TryGetEntity(v46, &entity, svtId, (int32_t)Instance, 0LL) )
    goto LABEL_73;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_77;
  v47 = ServantLimitEntity__GetChangeGraphCommonReleaseId(entity, -1, 0LL);
  if ( (v47 & 0x80000000) != 0 )
    goto LABEL_73;
  v48 = v47;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_77;
  if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v48, 0LL, 0, 0LL) )
    goto LABEL_73;
  this->fields.isChangeGraph = 1;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_77:
    sub_B7076C(Instance, rarity);
  v49 = ServantLimitEntity__GetChangeGraphSuffix(entity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.changeGraphSuffix = v49;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.changeGraphSuffix,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
LABEL_73:
  if ( (unsigned int)(changeNameType - 1) >= 3 )
    LOBYTE(v56) = ServantEntity__IsNameTrue(v9, 0LL);
  else
    v56 = 0x100u >> (8 * (changeNameType - 1));
  this->fields.isNameTrue = v56;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_36429644(
        UICharaGraphRender_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t imageLimitCount,
        int32_t exceedCount,
        int32_t lv,
        int32_t changeNameType,
        int32_t saintGraphType,
        const MethodInfo *method)
{
  BalanceConfig_c *v17; // x0
  UICharaGraphRender_c *v18; // x0
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  BalanceConfig_c *v21; // x0
  int32_t v22; // w8
  int32_t imageLimitCounta; // [xsp+Ch] [xbp-44h] BYREF

  imageLimitCounta = imageLimitCount;
  if ( (byte_4359391 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UICharaGraphRender_TypeInfo);
    byte_4359391 = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_B7076C(Instance, v20);
    }
    ServantLimitAddMaster__getCostumeId(
      (ServantLimitAddMaster_o *)Instance,
      &this->fields.imageSvtId,
      &imageLimitCounta,
      0LL);
  }
  else
  {
    v17 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    if ( v17->static_fields->OtherImageLimitCount == imageLimitCount )
    {
      v18 = UICharaGraphRender_TypeInfo;
      if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v18 = UICharaGraphRender_TypeInfo;
      }
      imageLimitCounta = v18->static_fields->OTHER_IMAGE_LIMIT_COUNT;
    }
  }
  v21 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  if ( v21->static_fields->ServantLimitMax < limitCount )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      limitCount = v21->static_fields->ServantLimitMax;
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        limitCount = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
      }
    }
    else
    {
      limitCount = v21->static_fields->ServantLimitMax;
    }
  }
  this->fields.limitCount = limitCount;
  v22 = imageLimitCounta;
  this->fields.exceedCount = exceedCount;
  this->fields.imageLimitCount = v22;
  this->fields.lv = lv;
  UICharaGraphRender__SetCharacter_36428144(
    this,
    changeNameType,
    saintGraphType,
    *(const MethodInfo **)&imageLimitCount);
}


void __fastcall UICharaGraphRender__SetCommand(
        UICharaGraphRender_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  int32_t rarity; // w8
  __int64 v14; // x9
  struct System_String_o *v15; // x1
  __int64 v16; // x0

  if ( (byte_4359393 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B70694(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UICharaGraphRender_TypeInfo);
    byte_4359393 = 1;
  }
  this->fields.commandCodeId = commandCodeId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               this->fields.commandCodeId,
               (const MethodInfo_21C0440 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.classId = 0;
  this->fields.svtType = 0;
  if ( !Instance )
    goto LABEL_12;
  rarity = *((_DWORD *)Instance + 16);
  this->fields.rarity = rarity;
  Instance = UICharaGraphRender_TypeInfo;
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
    Instance = UICharaGraphRender_TypeInfo;
    rarity = this->fields.rarity;
  }
  v14 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 128LL);
  if ( !v14 )
LABEL_12:
    sub_B7076C(Instance, v6);
  if ( (unsigned int)rarity >= *(_DWORD *)(v14 + 24) )
  {
    v16 = sub_B70798(Instance);
    sub_B70738(v16, 0LL);
  }
  v15 = *(struct System_String_o **)(v14 + 8LL * rarity + 32);
  this->fields.frameName = v15;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.frameName,
    (System_Int32_array **)v15,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  *(_OWORD *)&this->fields.atk = xmmword_3143710;
  this->fields.realNameCheck = 0;
  this->fields.isNameTrue = 1;
}


void __fastcall UICharaGraphRender__SetHp(
        UICharaGraphRender_o *this,
        int32_t hp,
        int32_t adjustHp,
        const MethodInfo *method)
{
  if ( (this->fields.hp & 0x80000000) == 0 )
  {
    this->fields.hp = hp;
    this->fields.adjustHp = adjustHp;
  }
}


void __fastcall UICharaGraphRender__SetLayer(UICharaGraphRender_o *this, int32_t layer, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v8; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0LL) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    UICharaGraphRender__SetLayer_36433832(this, transform, layer, v8);
  }
}


void __fastcall UICharaGraphRender__SetLayer_36433832(
        UICharaGraphRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v6; // x21
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  unsigned __int64 v14; // x10
  System_Collections_IEnumerator_c **v15; // x11
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0

  v6 = this;
  if ( (byte_435939E & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    this = (UICharaGraphRender_o *)sub_B70694(&UnityEngine_Transform_TypeInfo);
    byte_435939E = 1;
  }
  if ( !tf
    || (this = (UICharaGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_33:
    sub_B7076C(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
  if ( !Enumerator )
    sub_B7076C(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        v15 += 2;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_17:
      v16 = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      v19 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[v19 - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_B70A60(v17);
        goto LABEL_33;
      }
    }
    UICharaGraphRender__SetLayer_36433832(v6, v17, layer, v18);
  }
  v20 = sub_B70754(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v23 = 0LL;
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_28;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_28:
      v25 = sub_B08590(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
}