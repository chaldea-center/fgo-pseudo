void __fastcall UICharaGraphRender___cctor(const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  UICharaGraphRender_c *v23; // x8
  struct UICharaGraphRender_StaticFields *static_fields; // x9
  int MAIN_SIZE_Y; // w10
  float v26; // s3
  struct UICharaGraphRender_StaticFields *v27; // x9
  int v28; // w10
  float v29; // s0
  __int64 v30; // x19
  struct UICharaGraphRender_StaticFields *v31; // x8
  float SERVANT_BODY_U; // s0
  float SERVANT_BODY_V; // s4
  float v34; // s5
  float v35; // s6
  float v36; // s7
  System_Int32_array **v37; // x0
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
  float v87; // s4
  float v88; // s5
  float v89; // s6
  float v90; // s7
  struct UICharaGraphRender_StaticFields *v91; // x8
  float v92; // s0
  float v93; // s1
  float v94; // s4
  float v95; // s5
  float v96; // s6
  float v97; // s7
  struct UICharaGraphRender_StaticFields *v98; // x8
  float v99; // s0
  float v100; // s1
  float v101; // s4
  float v102; // s5
  float v103; // s6
  float v104; // s7
  struct UICharaGraphRender_StaticFields *v105; // x8
  float v106; // s0
  float v107; // s1
  float v108; // s5
  float v109; // s6
  float v110; // s7
  struct UICharaGraphRender_StaticFields *v111; // x8
  float v112; // s0
  float v113; // s4
  System_Int32_array **Only_Rect; // x0
  struct UICharaGraphRender_StaticFields *v115; // x8
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  float v122; // s4
  float v123; // s5
  float v124; // s6
  float v125; // s7
  UICharaGraphRender_c *v126; // x8
  System_Array_o *v127; // x19
  struct UICharaGraphRender_StaticFields *v128; // x0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **v141; // x19
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
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  System_Int32_array **v163; // x1
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  System_Int32_array **v170; // x1
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  System_Int32_array **v177; // x1
  struct UICharaGraphRender_StaticFields *v178; // x0
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  System_Int32_array **v191; // x19
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
  System_String_array **v221; // x2
  System_String_array **v222; // x3
  System_Boolean_array **v223; // x4
  System_Int32_array **v224; // x5
  System_Int32_array *v225; // x6
  System_Int32_array *v226; // x7
  System_Int32_array **v227; // x1
  System_String_array **v228; // x2
  System_String_array **v229; // x3
  System_Boolean_array **v230; // x4
  System_Int32_array **v231; // x5
  System_Int32_array *v232; // x6
  System_Int32_array *v233; // x7
  System_Int32_array **v234; // x1
  System_String_array **v235; // x2
  System_String_array **v236; // x3
  System_Boolean_array **v237; // x4
  System_Int32_array **v238; // x5
  System_Int32_array *v239; // x6
  System_Int32_array *v240; // x7
  System_Int32_array **v241; // x1
  struct UICharaGraphRender_StaticFields *v242; // x0
  System_String_array **v243; // x2
  System_String_array **v244; // x3
  System_Boolean_array **v245; // x4
  System_Int32_array **v246; // x5
  System_Int32_array *v247; // x6
  System_Int32_array *v248; // x7
  __int64 v249; // x1
  __int64 v250; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v251; // x19
  System_String_array **v252; // x2
  System_String_array **v253; // x3
  System_Boolean_array **v254; // x4
  System_Int32_array **v255; // x5
  System_Int32_array *v256; // x6
  System_Int32_array *v257; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o *v258; // x20
  System_Int32_array **v259; // x1
  System_String_array **v260; // x2
  System_String_array **v261; // x3
  System_Boolean_array **v262; // x4
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  System_Int32_array **v266; // x1
  System_String_array **v267; // x2
  System_String_array **v268; // x3
  System_Boolean_array **v269; // x4
  System_Int32_array **v270; // x5
  System_Int32_array *v271; // x6
  System_Int32_array *v272; // x7
  System_Int32_array **v273; // x1
  System_String_array **v274; // x2
  System_String_array **v275; // x3
  System_Boolean_array **v276; // x4
  System_Int32_array **v277; // x5
  System_Int32_array *v278; // x6
  System_Int32_array *v279; // x7
  System_Int32_array **v280; // x1
  System_String_array **v281; // x2
  System_String_array **v282; // x3
  System_Boolean_array **v283; // x4
  System_Int32_array **v284; // x5
  System_Int32_array *v285; // x6
  System_Int32_array *v286; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o *v287; // x20
  System_Int32_array **v288; // x1
  System_String_array **v289; // x2
  System_String_array **v290; // x3
  System_Boolean_array **v291; // x4
  System_Int32_array **v292; // x5
  System_Int32_array *v293; // x6
  System_Int32_array *v294; // x7
  System_Int32_array **v295; // x1
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  System_Int32_array **v302; // x1
  System_String_array **v303; // x2
  System_String_array **v304; // x3
  System_Boolean_array **v305; // x4
  System_Int32_array **v306; // x5
  System_Int32_array *v307; // x6
  System_Int32_array *v308; // x7
  System_Int32_array **v309; // x1
  struct UICharaGraphRender_StaticFields *v310; // x0
  System_String_array **v311; // x2
  System_String_array **v312; // x3
  System_Boolean_array **v313; // x4
  System_Int32_array **v314; // x5
  System_Int32_array *v315; // x6
  System_Int32_array *v316; // x7
  System_String_array **v317; // x2
  System_String_array **v318; // x3
  System_Boolean_array **v319; // x4
  System_Int32_array **v320; // x5
  System_Int32_array *v321; // x6
  System_Int32_array *v322; // x7
  System_Int32_array **v323; // x19
  System_Int32_array **v324; // x1
  System_String_array **v325; // x2
  System_String_array **v326; // x3
  System_Boolean_array **v327; // x4
  System_Int32_array **v328; // x5
  System_Int32_array *v329; // x6
  System_Int32_array *v330; // x7
  System_Int32_array **v331; // x1
  System_String_array **v332; // x2
  System_String_array **v333; // x3
  System_Boolean_array **v334; // x4
  System_Int32_array **v335; // x5
  System_Int32_array *v336; // x6
  System_Int32_array *v337; // x7
  System_Int32_array **v338; // x1
  System_String_array **v339; // x2
  System_String_array **v340; // x3
  System_Boolean_array **v341; // x4
  System_Int32_array **v342; // x5
  System_Int32_array *v343; // x6
  System_Int32_array *v344; // x7
  System_Int32_array **v345; // x1
  System_String_array **v346; // x2
  System_String_array **v347; // x3
  System_Boolean_array **v348; // x4
  System_Int32_array **v349; // x5
  System_Int32_array *v350; // x6
  System_Int32_array *v351; // x7
  System_Int32_array **v352; // x1
  System_String_array **v353; // x2
  System_String_array **v354; // x3
  System_Boolean_array **v355; // x4
  System_Int32_array **v356; // x5
  System_Int32_array *v357; // x6
  System_Int32_array *v358; // x7
  System_Int32_array **v359; // x1
  struct UICharaGraphRender_StaticFields *v360; // x0
  System_String_array **v361; // x2
  System_String_array **v362; // x3
  System_Boolean_array **v363; // x4
  System_Int32_array **v364; // x5
  System_Int32_array *v365; // x6
  System_Int32_array *v366; // x7
  __int64 v367; // x0
  __int64 v368; // x0
  struct UnityEngine_Rect_o v369; // [xsp+0h] [xbp-140h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-130h] BYREF
  MethodInfo v371; // [xsp+60h] [xbp-E0h] BYREF
  MethodInfo v372; // [xsp+B0h] [xbp-90h] BYREF
  System_RuntimeFieldHandle_o v373; // 0:w1.4
  UnityEngine_Rect_o v374; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v375; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v376; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v377; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v378; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v379; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v380; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v381; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v382; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v383; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v384; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v385; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v386; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421BD73 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_AsReadOnly_Rect___, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__string____Add__, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__string_____ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__string____TypeInfo, v4);
    sub_B0D8A4(&int___TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Rect___TypeInfo, v6);
    sub_B0D8A4(&string___TypeInfo, v7);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C,
      v8);
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_18935/*"frame5"*/, v10);
    sub_B0D8A4(&StringLiteral_16268/*"a"*/, v11);
    sub_B0D8A4(&StringLiteral_18936/*"frame6"*/, v12);
    sub_B0D8A4(&StringLiteral_18937/*"frame7"*/, v13);
    sub_B0D8A4(&StringLiteral_16596/*"b"*/, v14);
    sub_B0D8A4(&StringLiteral_17212/*"c"*/, v15);
    sub_B0D8A4(&StringLiteral_18932/*"frame20"*/, v16);
    sub_B0D8A4(&StringLiteral_18933/*"frame3"*/, v17);
    sub_B0D8A4(&StringLiteral_18929/*"frame1"*/, v18);
    sub_B0D8A4(&StringLiteral_18928/*"frame0"*/, v19);
    sub_B0D8A4(&StringLiteral_18930/*"frame17"*/, v20);
    sub_B0D8A4(&StringLiteral_18931/*"frame2"*/, v21);
    sub_B0D8A4(&StringLiteral_18934/*"frame4"*/, v22);
    byte_421BD73 = 1;
  }
  UICharaGraphRender_TypeInfo->static_fields->OTHER_IMAGE_LIMIT_COUNT = 4;
  UICharaGraphRender_TypeInfo->static_fields->MAIN_SIZE_X = 1024;
  v23 = UICharaGraphRender_TypeInfo;
  UICharaGraphRender_TypeInfo->static_fields->MAIN_SIZE_Y = 1024;
  v23->static_fields->SERVANT_BODY_SIZE_X = 510;
  v23->static_fields->SERVANT_BODY_SIZE_Y = 722;
  v23->static_fields->SERVANT_EQUIP_BODY_SIZE_X = 510;
  v23->static_fields->SERVANT_EQUIP_BODY_SIZE_Y = 872;
  v23->static_fields->SERVANT_BODY_U = 1.5 / (float)v23->static_fields->MAIN_SIZE_X;
  static_fields = v23->static_fields;
  MAIN_SIZE_Y = static_fields->MAIN_SIZE_Y;
  v26 = (double)(MAIN_SIZE_Y - static_fields->SERVANT_BODY_SIZE_Y) + -1.5;
  static_fields->SERVANT_BODY_V = v26 / (float)MAIN_SIZE_Y;
  v23->static_fields->SERVANT_BODY_W = (float)(v23->static_fields->SERVANT_BODY_SIZE_X - 1)
                                     / (float)v23->static_fields->MAIN_SIZE_X;
  v23->static_fields->SERVANT_BODY_H = (float)(v23->static_fields->SERVANT_BODY_SIZE_Y - 1)
                                     / (float)v23->static_fields->MAIN_SIZE_Y;
  v23->static_fields->SERVANT_EQUIP_BODY_U = 1.5 / (float)v23->static_fields->MAIN_SIZE_X;
  v27 = v23->static_fields;
  v28 = v27->MAIN_SIZE_Y;
  v29 = (double)(v28 - v27->SERVANT_EQUIP_BODY_SIZE_Y) + -1.5;
  v27->SERVANT_EQUIP_BODY_V = v29 / (float)v28;
  v23->static_fields->SERVANT_EQUIP_BODY_W = (float)(v23->static_fields->SERVANT_EQUIP_BODY_SIZE_X - 1)
                                           / (float)v23->static_fields->MAIN_SIZE_X;
  v23->static_fields->SERVANT_EQUIP_BODY_H = (float)(v23->static_fields->SERVANT_EQUIP_BODY_SIZE_Y - 1)
                                           / (float)v23->static_fields->MAIN_SIZE_Y;
  v30 = sub_B0D8BC(UnityEngine_Rect___TypeInfo, 12LL);
  v31 = UICharaGraphRender_TypeInfo->static_fields;
  SERVANT_BODY_U = v31->SERVANT_BODY_U;
  SERVANT_BODY_V = v31->SERVANT_BODY_V;
  v374.fields.m_Width = v31->SERVANT_BODY_W;
  v374.fields.m_Height = v31->SERVANT_BODY_H;
  v372.name = 0LL;
  v372.klass = 0LL;
  v374.fields.m_XMin = SERVANT_BODY_U + 0.0;
  v374.fields.m_YMin = SERVANT_BODY_V + 0.0;
  UnityEngine_Rect___ctor(v374, SERVANT_BODY_V, v34, v35, v36, (const MethodInfo *)&v372.name);
  if ( !v30 )
    goto LABEL_165;
  if ( !*(_DWORD *)(v30 + 24) )
    goto LABEL_163;
  *(_OWORD *)(v30 + 32) = *(_OWORD *)&v372.name;
  v42 = UICharaGraphRender_TypeInfo->static_fields;
  v43 = v42->SERVANT_BODY_U;
  v44 = v42->SERVANT_BODY_V;
  v375.fields.m_Width = v42->SERVANT_BODY_W;
  v375.fields.m_Height = v42->SERVANT_BODY_H;
  v372.methodPointer = 0LL;
  v372.invoker_method = 0LL;
  v375.fields.m_XMin = v43 + 0.5;
  v375.fields.m_YMin = v44 + 0.0;
  UnityEngine_Rect___ctor(v375, v38, v39, v40, v41, &v372);
  if ( *(_DWORD *)(v30 + 24) <= 1u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 48) = *(_OWORD *)&v372.methodPointer;
  v49 = UICharaGraphRender_TypeInfo->static_fields;
  v50 = v49->SERVANT_BODY_U;
  v51 = v49->SERVANT_BODY_V;
  v376.fields.m_Width = v49->SERVANT_BODY_W;
  v376.fields.m_Height = v49->SERVANT_BODY_H;
  *(_QWORD *)&v371.token = 0LL;
  *(_QWORD *)&v371.slot = 0LL;
  v376.fields.m_XMin = v50 + 0.0;
  v376.fields.m_YMin = v51 + 0.0;
  UnityEngine_Rect___ctor(v376, v45, v46, v47, v48, (const MethodInfo *)&v371.token);
  if ( *(_DWORD *)(v30 + 24) <= 2u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 64) = *(_OWORD *)&v371.token;
  v56 = UICharaGraphRender_TypeInfo->static_fields;
  v57 = v56->SERVANT_BODY_U;
  v58 = v56->SERVANT_BODY_V;
  v377.fields.m_Width = v56->SERVANT_BODY_W;
  v377.fields.m_Height = v56->SERVANT_BODY_H;
  v371.rgctx_data = 0LL;
  v371.genericMethod = 0LL;
  v377.fields.m_XMin = v57 + 0.5;
  v377.fields.m_YMin = v58 + 0.0;
  UnityEngine_Rect___ctor(v377, v52, v53, v54, v55, (const MethodInfo *)&v371.rgctx_data);
  if ( *(_DWORD *)(v30 + 24) <= 3u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 80) = *(_OWORD *)&v371.rgctx_data;
  v63 = UICharaGraphRender_TypeInfo->static_fields;
  v64 = v63->SERVANT_BODY_U;
  v65 = v63->SERVANT_BODY_V;
  v378.fields.m_Width = v63->SERVANT_BODY_W;
  v378.fields.m_Height = v63->SERVANT_BODY_H;
  v371.return_type = 0LL;
  v371.parameters = 0LL;
  v378.fields.m_XMin = v64 + 0.0;
  v378.fields.m_YMin = v65 + 0.0;
  UnityEngine_Rect___ctor(v378, v59, v60, v61, v62, (const MethodInfo *)&v371.return_type);
  if ( *(_DWORD *)(v30 + 24) <= 4u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 96) = *(_OWORD *)&v371.return_type;
  v70 = UICharaGraphRender_TypeInfo->static_fields;
  v71 = v70->SERVANT_BODY_U;
  v72 = v70->SERVANT_BODY_V;
  v379.fields.m_Width = v70->SERVANT_BODY_W;
  v379.fields.m_Height = v70->SERVANT_BODY_H;
  v371.name = 0LL;
  v371.klass = 0LL;
  v379.fields.m_XMin = v71 + 0.5;
  v379.fields.m_YMin = v72 + 0.0;
  UnityEngine_Rect___ctor(v379, v66, v67, v68, v69, (const MethodInfo *)&v371.name);
  if ( *(_DWORD *)(v30 + 24) <= 5u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 112) = *(_OWORD *)&v371.name;
  v77 = UICharaGraphRender_TypeInfo->static_fields;
  v78 = v77->SERVANT_BODY_U;
  v79 = v77->SERVANT_BODY_V;
  v380.fields.m_Width = v77->SERVANT_BODY_W;
  v380.fields.m_Height = v77->SERVANT_BODY_H;
  v371.methodPointer = 0LL;
  v371.invoker_method = 0LL;
  v380.fields.m_XMin = v78 + 0.0;
  v380.fields.m_YMin = v79 + 0.0;
  UnityEngine_Rect___ctor(v380, v73, v74, v75, v76, &v371);
  if ( *(_DWORD *)(v30 + 24) <= 6u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 128) = *(_OWORD *)&v371.methodPointer;
  v84 = UICharaGraphRender_TypeInfo->static_fields;
  v85 = v84->SERVANT_BODY_U;
  v86 = v84->SERVANT_BODY_V;
  v381.fields.m_Width = v84->SERVANT_BODY_W;
  v381.fields.m_Height = v84->SERVANT_BODY_H;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  v381.fields.m_XMin = v85 + 0.5;
  v381.fields.m_YMin = v86 + 0.0;
  UnityEngine_Rect___ctor(v381, v80, v81, v82, v83, (const MethodInfo *)&methoda.token);
  if ( *(_DWORD *)(v30 + 24) <= 7u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 144) = *(_OWORD *)&methoda.token;
  v91 = UICharaGraphRender_TypeInfo->static_fields;
  v92 = v91->SERVANT_BODY_U;
  v93 = v91->SERVANT_BODY_V;
  v382.fields.m_Width = v91->SERVANT_BODY_W;
  v382.fields.m_Height = v91->SERVANT_BODY_H;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  v382.fields.m_XMin = v92 + 0.0;
  v382.fields.m_YMin = v93 + 0.0;
  UnityEngine_Rect___ctor(v382, v87, v88, v89, v90, (const MethodInfo *)&methoda.rgctx_data);
  if ( *(_DWORD *)(v30 + 24) <= 8u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 160) = *(_OWORD *)&methoda.rgctx_data;
  v98 = UICharaGraphRender_TypeInfo->static_fields;
  v99 = v98->SERVANT_BODY_U;
  v100 = v98->SERVANT_BODY_V;
  v383.fields.m_Width = v98->SERVANT_BODY_W;
  v383.fields.m_Height = v98->SERVANT_BODY_H;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  v383.fields.m_XMin = v99 + 0.5;
  v383.fields.m_YMin = v100 + 0.0;
  UnityEngine_Rect___ctor(v383, v94, v95, v96, v97, (const MethodInfo *)&methoda.return_type);
  if ( *(_DWORD *)(v30 + 24) <= 9u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 176) = *(_OWORD *)&methoda.return_type;
  v105 = UICharaGraphRender_TypeInfo->static_fields;
  v106 = v105->SERVANT_BODY_U;
  v107 = v105->SERVANT_BODY_V;
  v384.fields.m_Width = v105->SERVANT_BODY_W;
  v384.fields.m_Height = v105->SERVANT_BODY_H;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  v384.fields.m_XMin = v106 + 0.0;
  v384.fields.m_YMin = v107 + 0.0;
  UnityEngine_Rect___ctor(v384, v101, v102, v103, v104, (const MethodInfo *)&methoda.name);
  if ( *(_DWORD *)(v30 + 24) <= 0xAu )
    goto LABEL_163;
  *(_OWORD *)(v30 + 192) = *(_OWORD *)&methoda.name;
  v111 = UICharaGraphRender_TypeInfo->static_fields;
  v112 = v111->SERVANT_BODY_U;
  v113 = v111->SERVANT_BODY_V;
  v385.fields.m_Width = v111->SERVANT_BODY_W;
  v385.fields.m_Height = v111->SERVANT_BODY_H;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  v385.fields.m_XMin = v112 + 0.5;
  v385.fields.m_YMin = v113 + 0.0;
  UnityEngine_Rect___ctor(v385, v113, v108, v109, v110, &methoda);
  if ( *(_DWORD *)(v30 + 24) <= 0xBu )
  {
LABEL_163:
    v367 = sub_B0D9A8(v37);
    sub_B0D948(v367, 0LL);
  }
  *(_OWORD *)(v30 + 208) = *(_OWORD *)&methoda.methodPointer;
  Only_Rect = (System_Int32_array **)System_Array__AsReadOnly_Rect_(
                                       (UnityEngine_Rect_array *)v30,
                                       (const MethodInfo_2DAB8C0 *)Method_System_Array_AsReadOnly_Rect___);
  v115 = UICharaGraphRender_TypeInfo->static_fields;
  v115->servantBodyRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_B0D840((BattleServantConfConponent_o *)&v115->servantBodyRectTable, Only_Rect, v116, v117, v118, v119, v120, v121);
  v386 = *(UnityEngine_Rect_o *)&UICharaGraphRender_TypeInfo->static_fields->SERVANT_EQUIP_BODY_U;
  v369 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v386, v122, v123, v124, v125, (const MethodInfo *)&v369);
  v126 = UICharaGraphRender_TypeInfo;
  UICharaGraphRender_TypeInfo->static_fields->servantEquipBodyRect = v369;
  v126->static_fields->SERVANT_NAME_UV_DIFF_Y = 0.25;
  v126->static_fields->MAX_SERVANT_NAME_UV_DIFF_COUNT = 4;
  v127 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 4LL);
  v373.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v127, v373, 0LL);
  v128 = UICharaGraphRender_TypeInfo->static_fields;
  v128->SERVANT_NAME_TARGET_LIMIT_COUNT = (struct System_Int32_array *)v127;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v128->SERVANT_NAME_TARGET_LIMIT_COUNT,
    (System_Int32_array **)v127,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
  v37 = (System_Int32_array **)sub_B0D8BC(string___TypeInfo, 6LL);
  if ( !v37 )
    goto LABEL_165;
  v141 = v37;
  v37 = (System_Int32_array **)StringLiteral_16268/*"a"*/;
  if ( StringLiteral_16268/*"a"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_16268/*"a"*/, *(_QWORD *)&(*v141)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v142 = (System_Int32_array **)StringLiteral_16268/*"a"*/;
  }
  else
  {
    v142 = 0LL;
  }
  if ( !*((_DWORD *)v141 + 6) )
    goto LABEL_163;
  v141[4] = (System_Int32_array *)v142;
  sub_B0D840((BattleServantConfConponent_o *)(v141 + 4), v142, v135, v136, v137, v138, v139, v140);
  v37 = (System_Int32_array **)StringLiteral_16268/*"a"*/;
  if ( StringLiteral_16268/*"a"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_16268/*"a"*/, *(_QWORD *)&(*v141)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v149 = (System_Int32_array **)StringLiteral_16268/*"a"*/;
  }
  else
  {
    v149 = 0LL;
  }
  if ( *((_DWORD *)v141 + 6) <= 1u )
    goto LABEL_163;
  v141[5] = (System_Int32_array *)v149;
  sub_B0D840((BattleServantConfConponent_o *)(v141 + 5), v149, v143, v144, v145, v146, v147, v148);
  v37 = (System_Int32_array **)StringLiteral_16596/*"b"*/;
  if ( StringLiteral_16596/*"b"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_16596/*"b"*/, *(_QWORD *)&(*v141)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v156 = (System_Int32_array **)StringLiteral_16596/*"b"*/;
  }
  else
  {
    v156 = 0LL;
  }
  if ( *((_DWORD *)v141 + 6) <= 2u )
    goto LABEL_163;
  v141[6] = (System_Int32_array *)v156;
  sub_B0D840((BattleServantConfConponent_o *)(v141 + 6), v156, v150, v151, v152, v153, v154, v155);
  v37 = (System_Int32_array **)StringLiteral_16596/*"b"*/;
  if ( StringLiteral_16596/*"b"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_16596/*"b"*/, *(_QWORD *)&(*v141)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v163 = (System_Int32_array **)StringLiteral_16596/*"b"*/;
  }
  else
  {
    v163 = 0LL;
  }
  if ( *((_DWORD *)v141 + 6) <= 3u )
    goto LABEL_163;
  v141[7] = (System_Int32_array *)v163;
  sub_B0D840((BattleServantConfConponent_o *)(v141 + 7), v163, v157, v158, v159, v160, v161, v162);
  v37 = (System_Int32_array **)StringLiteral_17212/*"c"*/;
  if ( StringLiteral_17212/*"c"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_17212/*"c"*/, *(_QWORD *)&(*v141)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v170 = (System_Int32_array **)StringLiteral_17212/*"c"*/;
  }
  else
  {
    v170 = 0LL;
  }
  if ( *((_DWORD *)v141 + 6) <= 4u )
    goto LABEL_163;
  v141[8] = (System_Int32_array *)v170;
  sub_B0D840((BattleServantConfConponent_o *)(v141 + 8), v170, v164, v165, v166, v167, v168, v169);
  v37 = (System_Int32_array **)StringLiteral_17212/*"c"*/;
  if ( StringLiteral_17212/*"c"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_17212/*"c"*/, *(_QWORD *)&(*v141)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v177 = (System_Int32_array **)StringLiteral_17212/*"c"*/;
  }
  else
  {
    v177 = 0LL;
  }
  if ( *((_DWORD *)v141 + 6) <= 5u )
    goto LABEL_163;
  v141[9] = (System_Int32_array *)v177;
  sub_B0D840((BattleServantConfConponent_o *)(v141 + 9), v177, v171, v172, v173, v174, v175, v176);
  v178 = UICharaGraphRender_TypeInfo->static_fields;
  v178->bodyTextureNameTable = (struct System_String_array *)v141;
  sub_B0D840((BattleServantConfConponent_o *)&v178->bodyTextureNameTable, v141, v179, v180, v181, v182, v183, v184);
  v37 = (System_Int32_array **)sub_B0D8BC(string___TypeInfo, 8LL);
  if ( !v37 )
    goto LABEL_165;
  v191 = v37;
  v37 = (System_Int32_array **)StringLiteral_18928/*"frame0"*/;
  if ( StringLiteral_18928/*"frame0"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18928/*"frame0"*/, *(_QWORD *)&(*v191)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v192 = (System_Int32_array **)StringLiteral_18928/*"frame0"*/;
  }
  else
  {
    v192 = 0LL;
  }
  if ( !*((_DWORD *)v191 + 6) )
    goto LABEL_163;
  v191[4] = (System_Int32_array *)v192;
  sub_B0D840((BattleServantConfConponent_o *)(v191 + 4), v192, v185, v186, v187, v188, v189, v190);
  v37 = (System_Int32_array **)StringLiteral_18929/*"frame1"*/;
  if ( StringLiteral_18929/*"frame1"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18929/*"frame1"*/, *(_QWORD *)&(*v191)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v199 = (System_Int32_array **)StringLiteral_18929/*"frame1"*/;
  }
  else
  {
    v199 = 0LL;
  }
  if ( *((_DWORD *)v191 + 6) <= 1u )
    goto LABEL_163;
  v191[5] = (System_Int32_array *)v199;
  sub_B0D840((BattleServantConfConponent_o *)(v191 + 5), v199, v193, v194, v195, v196, v197, v198);
  v37 = (System_Int32_array **)StringLiteral_18931/*"frame2"*/;
  if ( StringLiteral_18931/*"frame2"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18931/*"frame2"*/, *(_QWORD *)&(*v191)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v206 = (System_Int32_array **)StringLiteral_18931/*"frame2"*/;
  }
  else
  {
    v206 = 0LL;
  }
  if ( *((_DWORD *)v191 + 6) <= 2u )
    goto LABEL_163;
  v191[6] = (System_Int32_array *)v206;
  sub_B0D840((BattleServantConfConponent_o *)(v191 + 6), v206, v200, v201, v202, v203, v204, v205);
  v37 = (System_Int32_array **)StringLiteral_18933/*"frame3"*/;
  if ( StringLiteral_18933/*"frame3"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18933/*"frame3"*/, *(_QWORD *)&(*v191)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v213 = (System_Int32_array **)StringLiteral_18933/*"frame3"*/;
  }
  else
  {
    v213 = 0LL;
  }
  if ( *((_DWORD *)v191 + 6) <= 3u )
    goto LABEL_163;
  v191[7] = (System_Int32_array *)v213;
  sub_B0D840((BattleServantConfConponent_o *)(v191 + 7), v213, v207, v208, v209, v210, v211, v212);
  v37 = (System_Int32_array **)StringLiteral_18934/*"frame4"*/;
  if ( StringLiteral_18934/*"frame4"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18934/*"frame4"*/, *(_QWORD *)&(*v191)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v220 = (System_Int32_array **)StringLiteral_18934/*"frame4"*/;
  }
  else
  {
    v220 = 0LL;
  }
  if ( *((_DWORD *)v191 + 6) <= 4u )
    goto LABEL_163;
  v191[8] = (System_Int32_array *)v220;
  sub_B0D840((BattleServantConfConponent_o *)(v191 + 8), v220, v214, v215, v216, v217, v218, v219);
  v37 = (System_Int32_array **)StringLiteral_18935/*"frame5"*/;
  if ( StringLiteral_18935/*"frame5"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18935/*"frame5"*/, *(_QWORD *)&(*v191)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v227 = (System_Int32_array **)StringLiteral_18935/*"frame5"*/;
  }
  else
  {
    v227 = 0LL;
  }
  if ( *((_DWORD *)v191 + 6) <= 5u )
    goto LABEL_163;
  v191[9] = (System_Int32_array *)v227;
  sub_B0D840((BattleServantConfConponent_o *)(v191 + 9), v227, v221, v222, v223, v224, v225, v226);
  v37 = (System_Int32_array **)StringLiteral_18936/*"frame6"*/;
  if ( StringLiteral_18936/*"frame6"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18936/*"frame6"*/, *(_QWORD *)&(*v191)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v234 = (System_Int32_array **)StringLiteral_18936/*"frame6"*/;
  }
  else
  {
    v234 = 0LL;
  }
  if ( *((_DWORD *)v191 + 6) <= 6u )
    goto LABEL_163;
  v191[10] = (System_Int32_array *)v234;
  sub_B0D840((BattleServantConfConponent_o *)(v191 + 10), v234, v228, v229, v230, v231, v232, v233);
  v37 = (System_Int32_array **)StringLiteral_18937/*"frame7"*/;
  if ( StringLiteral_18937/*"frame7"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18937/*"frame7"*/, *(_QWORD *)&(*v191)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v241 = (System_Int32_array **)StringLiteral_18937/*"frame7"*/;
  }
  else
  {
    v241 = 0LL;
  }
  if ( *((_DWORD *)v191 + 6) <= 7u )
    goto LABEL_163;
  v191[11] = (System_Int32_array *)v241;
  sub_B0D840((BattleServantConfConponent_o *)(v191 + 11), v241, v235, v236, v237, v238, v239, v240);
  v242 = UICharaGraphRender_TypeInfo->static_fields;
  v242->baseFrameList = (struct System_String_array *)v191;
  sub_B0D840((BattleServantConfConponent_o *)&v242->baseFrameList, v191, v243, v244, v245, v246, v247, v248);
  v251 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_Dictionary_int__string____TypeInfo,
                                                                                                    v249,
                                                                                                    v250);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v251,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__string_____ctor__);
  v37 = (System_Int32_array **)sub_B0D8BC(string___TypeInfo, 4LL);
  if ( !v37 )
    goto LABEL_165;
  v258 = (WarBoardEvalValueSquare_EvalValueSquare_o *)v37;
  v37 = (System_Int32_array **)StringLiteral_18930/*"frame17"*/;
  if ( StringLiteral_18930/*"frame17"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18930/*"frame17"*/, v258->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v259 = (System_Int32_array **)StringLiteral_18930/*"frame17"*/;
  }
  else
  {
    v259 = 0LL;
  }
  if ( !LODWORD(v258->fields._EvalValueWarsituation_k__BackingField) )
    goto LABEL_163;
  *(_QWORD *)&v258->fields._EvalValue_k__BackingField = v259;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v258->fields._EvalValue_k__BackingField,
    v259,
    v252,
    v253,
    v254,
    v255,
    v256,
    v257);
  v37 = (System_Int32_array **)StringLiteral_18930/*"frame17"*/;
  if ( StringLiteral_18930/*"frame17"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18930/*"frame17"*/, v258->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v266 = (System_Int32_array **)StringLiteral_18930/*"frame17"*/;
  }
  else
  {
    v266 = 0LL;
  }
  if ( LODWORD(v258->fields._EvalValueWarsituation_k__BackingField) <= 1 )
    goto LABEL_163;
  *(_QWORD *)&v258->fields._WarAdjustmentValueB_k__BackingField = v266;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v258->fields._WarAdjustmentValueB_k__BackingField,
    v266,
    v260,
    v261,
    v262,
    v263,
    v264,
    v265);
  v37 = (System_Int32_array **)StringLiteral_18930/*"frame17"*/;
  if ( StringLiteral_18930/*"frame17"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18930/*"frame17"*/, v258->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v273 = (System_Int32_array **)StringLiteral_18930/*"frame17"*/;
  }
  else
  {
    v273 = 0LL;
  }
  if ( LODWORD(v258->fields._EvalValueWarsituation_k__BackingField) <= 2 )
    goto LABEL_163;
  *(_QWORD *)&v258->fields._BenAdjustmentValueB_k__BackingField = v273;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v258->fields._BenAdjustmentValueB_k__BackingField,
    v273,
    v267,
    v268,
    v269,
    v270,
    v271,
    v272);
  v37 = (System_Int32_array **)StringLiteral_18930/*"frame17"*/;
  if ( StringLiteral_18930/*"frame17"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18930/*"frame17"*/, v258->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v280 = (System_Int32_array **)StringLiteral_18930/*"frame17"*/;
  }
  else
  {
    v280 = 0LL;
  }
  if ( LODWORD(v258->fields._EvalValueWarsituation_k__BackingField) <= 3 )
    goto LABEL_163;
  v258[1].klass = (WarBoardEvalValueSquare_EvalValueSquare_c *)v280;
  sub_B0D840((BattleServantConfConponent_o *)&v258[1], v280, v274, v275, v276, v277, v278, v279);
  if ( !v251 )
    goto LABEL_165;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v251,
    17,
    v258,
    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v37 = (System_Int32_array **)sub_B0D8BC(string___TypeInfo, 4LL);
  if ( !v37 )
    goto LABEL_165;
  v287 = (WarBoardEvalValueSquare_EvalValueSquare_o *)v37;
  v37 = (System_Int32_array **)StringLiteral_18932/*"frame20"*/;
  if ( StringLiteral_18932/*"frame20"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18932/*"frame20"*/, v287->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v288 = (System_Int32_array **)StringLiteral_18932/*"frame20"*/;
  }
  else
  {
    v288 = 0LL;
  }
  if ( !LODWORD(v287->fields._EvalValueWarsituation_k__BackingField) )
    goto LABEL_163;
  *(_QWORD *)&v287->fields._EvalValue_k__BackingField = v288;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v287->fields._EvalValue_k__BackingField,
    v288,
    v281,
    v282,
    v283,
    v284,
    v285,
    v286);
  v37 = (System_Int32_array **)StringLiteral_18932/*"frame20"*/;
  if ( StringLiteral_18932/*"frame20"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18932/*"frame20"*/, v287->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v295 = (System_Int32_array **)StringLiteral_18932/*"frame20"*/;
  }
  else
  {
    v295 = 0LL;
  }
  if ( LODWORD(v287->fields._EvalValueWarsituation_k__BackingField) <= 1 )
    goto LABEL_163;
  *(_QWORD *)&v287->fields._WarAdjustmentValueB_k__BackingField = v295;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v287->fields._WarAdjustmentValueB_k__BackingField,
    v295,
    v289,
    v290,
    v291,
    v292,
    v293,
    v294);
  v37 = (System_Int32_array **)StringLiteral_18932/*"frame20"*/;
  if ( StringLiteral_18932/*"frame20"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18932/*"frame20"*/, v287->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v302 = (System_Int32_array **)StringLiteral_18932/*"frame20"*/;
  }
  else
  {
    v302 = 0LL;
  }
  if ( LODWORD(v287->fields._EvalValueWarsituation_k__BackingField) <= 2 )
    goto LABEL_163;
  *(_QWORD *)&v287->fields._BenAdjustmentValueB_k__BackingField = v302;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v287->fields._BenAdjustmentValueB_k__BackingField,
    v302,
    v296,
    v297,
    v298,
    v299,
    v300,
    v301);
  v37 = (System_Int32_array **)StringLiteral_18932/*"frame20"*/;
  if ( StringLiteral_18932/*"frame20"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18932/*"frame20"*/, v287->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v309 = (System_Int32_array **)StringLiteral_18932/*"frame20"*/;
  }
  else
  {
    v309 = 0LL;
  }
  if ( LODWORD(v287->fields._EvalValueWarsituation_k__BackingField) <= 3 )
    goto LABEL_163;
  v287[1].klass = (WarBoardEvalValueSquare_EvalValueSquare_c *)v309;
  sub_B0D840((BattleServantConfConponent_o *)&v287[1], v309, v303, v304, v305, v306, v307, v308);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v251,
    20,
    v287,
    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v310 = UICharaGraphRender_TypeInfo->static_fields;
  v310->baseFrameTable = (struct System_Collections_Generic_Dictionary_int__string____o *)v251;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v310->baseFrameTable,
    (System_Int32_array **)v251,
    v311,
    v312,
    v313,
    v314,
    v315,
    v316);
  v37 = (System_Int32_array **)sub_B0D8BC(string___TypeInfo, 6LL);
  if ( !v37 )
LABEL_165:
    sub_B0D97C(v37);
  v323 = v37;
  v37 = (System_Int32_array **)StringLiteral_18928/*"frame0"*/;
  if ( StringLiteral_18928/*"frame0"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18928/*"frame0"*/, *(_QWORD *)&(*v323)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v324 = (System_Int32_array **)StringLiteral_18928/*"frame0"*/;
  }
  else
  {
    v324 = 0LL;
  }
  if ( !*((_DWORD *)v323 + 6) )
    goto LABEL_163;
  v323[4] = (System_Int32_array *)v324;
  sub_B0D840((BattleServantConfConponent_o *)(v323 + 4), v324, v317, v318, v319, v320, v321, v322);
  v37 = (System_Int32_array **)StringLiteral_18929/*"frame1"*/;
  if ( StringLiteral_18929/*"frame1"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18929/*"frame1"*/, *(_QWORD *)&(*v323)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v331 = (System_Int32_array **)StringLiteral_18929/*"frame1"*/;
  }
  else
  {
    v331 = 0LL;
  }
  if ( *((_DWORD *)v323 + 6) <= 1u )
    goto LABEL_163;
  v323[5] = (System_Int32_array *)v331;
  sub_B0D840((BattleServantConfConponent_o *)(v323 + 5), v331, v325, v326, v327, v328, v329, v330);
  v37 = (System_Int32_array **)StringLiteral_18929/*"frame1"*/;
  if ( StringLiteral_18929/*"frame1"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18929/*"frame1"*/, *(_QWORD *)&(*v323)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v338 = (System_Int32_array **)StringLiteral_18929/*"frame1"*/;
  }
  else
  {
    v338 = 0LL;
  }
  if ( *((_DWORD *)v323 + 6) <= 2u )
    goto LABEL_163;
  v323[6] = (System_Int32_array *)v338;
  sub_B0D840((BattleServantConfConponent_o *)(v323 + 6), v338, v332, v333, v334, v335, v336, v337);
  v37 = (System_Int32_array **)StringLiteral_18931/*"frame2"*/;
  if ( StringLiteral_18931/*"frame2"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18931/*"frame2"*/, *(_QWORD *)&(*v323)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v345 = (System_Int32_array **)StringLiteral_18931/*"frame2"*/;
  }
  else
  {
    v345 = 0LL;
  }
  if ( *((_DWORD *)v323 + 6) <= 3u )
    goto LABEL_163;
  v323[7] = (System_Int32_array *)v345;
  sub_B0D840((BattleServantConfConponent_o *)(v323 + 7), v345, v339, v340, v341, v342, v343, v344);
  v37 = (System_Int32_array **)StringLiteral_18933/*"frame3"*/;
  if ( StringLiteral_18933/*"frame3"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18933/*"frame3"*/, *(_QWORD *)&(*v323)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v352 = (System_Int32_array **)StringLiteral_18933/*"frame3"*/;
  }
  else
  {
    v352 = 0LL;
  }
  if ( *((_DWORD *)v323 + 6) <= 4u )
    goto LABEL_163;
  v323[8] = (System_Int32_array *)v352;
  sub_B0D840((BattleServantConfConponent_o *)(v323 + 8), v352, v346, v347, v348, v349, v350, v351);
  v37 = (System_Int32_array **)StringLiteral_18933/*"frame3"*/;
  if ( StringLiteral_18933/*"frame3"*/ )
  {
    v37 = (System_Int32_array **)sub_B0D964(StringLiteral_18933/*"frame3"*/, *(_QWORD *)&(*v323)->m_Items[9]);
    if ( v37 )
    {
      v359 = (System_Int32_array **)StringLiteral_18933/*"frame3"*/;
      goto LABEL_161;
    }
LABEL_164:
    v368 = sub_B0D99C(v37);
    sub_B0D948(v368, 0LL);
  }
  v359 = 0LL;
LABEL_161:
  if ( *((_DWORD *)v323 + 6) <= 5u )
    goto LABEL_163;
  v323[9] = (System_Int32_array *)v359;
  sub_B0D840((BattleServantConfConponent_o *)(v323 + 9), v359, v353, v354, v355, v356, v357, v358);
  v360 = UICharaGraphRender_TypeInfo->static_fields;
  v360->commandCodeBaseFrameList = (struct System_String_array *)v323;
  sub_B0D840((BattleServantConfConponent_o *)&v360->commandCodeBaseFrameList, v323, v361, v362, v363, v364, v365, v366);
}


void __fastcall UICharaGraphRender___ctor(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UICharaGraphRender__GetAssetName(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x19
  System_String_o *v16; // x0
  const MethodInfo *v17; // x2
  System_String_o *v18; // x0
  int32_t IntValue; // [xsp+Ch] [xbp-34h] BYREF
  WarEntity_o *v21; // [xsp+10h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF
  int32_t imageLimitCounta; // [xsp+28h] [xbp-18h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-14h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_421BD60 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_20428/*"maleImageId"*/, v10);
    sub_B0D8A4(&StringLiteral_3944/*"CharaGraph/100000"*/, v11);
    sub_B0D8A4(&StringLiteral_3943/*"CharaGraph/"*/, v12);
    byte_421BD60 = 1;
  }
  v21 = 0LL;
  entity = 0LL;
  IntValue = 0;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_33;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
  }
  v14 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  v15 = System_String__Concat_43849904((System_String_o *)StringLiteral_3943/*"CharaGraph/"*/, v14, 0LL);
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_33;
  if ( UserGameEntity__IsMale((UserGameEntity_o *)Instance, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  &entity,
                                  svtIda,
                                  (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_33;
      IntValue = EntityScriptUtil__GetIntValue(
                   *(System_Collections_Generic_Dictionary_string__object__o **)&entity[1].fields.flag,
                   (System_String_o *)StringLiteral_20428/*"maleImageId"*/,
                   0,
                   0LL);
      if ( IntValue )
      {
        v16 = System_Int32__ToString((int32_t)&IntValue, 0LL);
        v15 = System_String__Concat_43849904((System_String_o *)StringLiteral_3943/*"CharaGraph/"*/, v16, 0LL);
      }
    }
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v15, 0LL) )
    return v15;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_33;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &v21,
          svtIda,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_3944/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v21;
  if ( !v21 )
    goto LABEL_33;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v21, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_3944/*"CharaGraph/100000"*/;
  if ( !v21 )
LABEL_33:
    sub_B0D97C(Instance);
  *(_QWORD *)&v25.fields.currentCryptoKey = &v21->fields.name;
  *(_QWORD *)&v25.fields.fakeValue = 0LL;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v25, v17);
  v15 = System_String__Concat_43849904((System_String_o *)StringLiteral_3943/*"CharaGraph/"*/, v18, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v15, 0LL) )
    return (System_String_o *)StringLiteral_3944/*"CharaGraph/100000"*/;
  return v15;
}


System_String_o *__fastcall UICharaGraphRender__GetAssetName_35229380(int32_t imageSvtId, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x0
  System_String_o *v11; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *SelfUserGame; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  System_String_o *v15; // x0
  ServantEntity_o *v17; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t IntValue; // [xsp+18h] [xbp-18h] BYREF
  int32_t v20; // [xsp+1Ch] [xbp-14h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v20 = imageSvtId;
  if ( (byte_421BD61 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v2);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_20428/*"maleImageId"*/, v7);
    sub_B0D8A4(&StringLiteral_3944/*"CharaGraph/100000"*/, v8);
    sub_B0D8A4(&StringLiteral_3943/*"CharaGraph/"*/, v9);
    byte_421BD61 = 1;
  }
  v17 = 0LL;
  entity = 0LL;
  IntValue = 0;
  v10 = System_Int32__ToString((int32_t)&v20, 0LL);
  v11 = System_String__Concat_43849904((System_String_o *)StringLiteral_3943/*"CharaGraph/"*/, v10, 0LL);
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_29;
  if ( UserGameEntity__IsMale((UserGameEntity_o *)SelfUserGame, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_29;
    SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    SelfUserGame,
                                                                    &entity,
                                                                    v20,
                                                                    (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_29;
      IntValue = EntityScriptUtil__GetIntValue(
                   *(System_Collections_Generic_Dictionary_string__object__o **)&entity[1].fields.flag,
                   (System_String_o *)StringLiteral_20428/*"maleImageId"*/,
                   0,
                   0LL);
      if ( IntValue )
      {
        v13 = System_Int32__ToString((int32_t)&IntValue, 0LL);
        v11 = System_String__Concat_43849904((System_String_o *)StringLiteral_3943/*"CharaGraph/"*/, v13, 0LL);
      }
    }
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v11, 0LL) )
    return v11;
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_29;
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)SelfUserGame,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_29;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          SelfUserGame,
          (WarEntity_o **)&v17,
          v20,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_3944/*"CharaGraph/100000"*/;
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)v17;
  if ( !v17 )
    goto LABEL_29;
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEntity__get_IsServantMaterialTd(v17, 0LL);
  if ( ((unsigned __int8)SelfUserGame & 1) == 0 )
    return (System_String_o *)StringLiteral_3944/*"CharaGraph/100000"*/;
  if ( !v17 )
LABEL_29:
    sub_B0D97C(SelfUserGame);
  *(_QWORD *)&v21.fields.currentCryptoKey = &v17->fields.baseSvtId;
  *(_QWORD *)&v21.fields.fakeValue = 0LL;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v21, v14);
  v11 = System_String__Concat_43849904((System_String_o *)StringLiteral_3943/*"CharaGraph/"*/, v15, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v11, 0LL) )
    return (System_String_o *)StringLiteral_3944/*"CharaGraph/100000"*/;
  return v11;
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

  if ( (byte_421BD68 & 1) == 0 )
  {
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, method);
    byte_421BD68 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *LastName; // x0
  System_String_o *v9; // x0
  const MethodInfo_1700DD0 *v10; // x2
  System_String_o **p_changeGraphSuffix; // x8
  __int64 v12; // x8
  __int64 imageLimitCount; // x9
  System_String_o *v14; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x22
  UnityEngine_Texture2D_o *result; // x0
  System_String_o *v19; // x0
  __int64 v20; // x0

  v4 = this;
  if ( (byte_421BD6A & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, data);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, v6);
    this = (UICharaGraphRender_o *)sub_B0D8A4(&StringLiteral_16268/*"a"*/, v7);
    byte_421BD6A = 1;
  }
  if ( v4->fields.baseKind )
  {
    v4->fields.textureImageLimitCount = 0;
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v9 = System_String__Concat_43849904(LastName, (System_String_o *)StringLiteral_16268/*"a"*/, 0LL);
      v10 = (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464;
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(data, v9, v10);
    }
LABEL_22:
    sub_B0D97C(this);
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
    v12 = *(_QWORD *)&this->fields.onPostFill[1].fields.method_ptr;
    if ( !v12 )
      goto LABEL_22;
    imageLimitCount = v4->fields.imageLimitCount;
    if ( (unsigned int)imageLimitCount >= *(_DWORD *)(v12 + 24) )
    {
      v20 = sub_B0D9A8(this);
      sub_B0D948(v20, 0LL);
    }
    p_changeGraphSuffix = (System_String_o **)(v12 + 8 * imageLimitCount + 32);
    if ( !data )
      goto LABEL_22;
  }
  v14 = *p_changeGraphSuffix;
  v15 = AssetData__get_LastName(data, 0LL);
  v16 = System_String__Concat_43849904(v15, v14, 0LL);
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                data,
                                                                v16,
                                                                (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
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
  v19 = AssetData__get_LastName(data, 0LL);
  v9 = System_String__Concat_43849904(v19, v14, 0LL);
  v10 = (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464;
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(data, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall UICharaGraphRender__GetBodyUvRect(UICharaGraphRender_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UICharaGraphRender_c *v4; // x0
  float *p_OTHER_IMAGE_LIMIT_COUNT; // x8
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *servantBodyRectTable; // x0
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421BD69 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__, method);
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, v3);
    byte_421BD69 = 1;
  }
  v4 = UICharaGraphRender_TypeInfo;
  if ( this->fields.baseKind )
  {
    if ( (WORD1(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      v4 = UICharaGraphRender_TypeInfo;
    }
    p_OTHER_IMAGE_LIMIT_COUNT = (float *)&v4->static_fields->OTHER_IMAGE_LIMIT_COUNT;
    v6 = p_OTHER_IMAGE_LIMIT_COUNT[18];
    v7 = p_OTHER_IMAGE_LIMIT_COUNT[19];
    v8 = p_OTHER_IMAGE_LIMIT_COUNT[20];
    v9 = p_OTHER_IMAGE_LIMIT_COUNT[21];
  }
  else
  {
    if ( (WORD1(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      v4 = UICharaGraphRender_TypeInfo;
    }
    servantBodyRectTable = v4->static_fields->servantBodyRectTable;
    if ( !servantBodyRectTable )
      sub_B0D97C(0LL);
    *(UnityEngine_Rect_o *)&v6 = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                                   servantBodyRectTable,
                                   this->fields.textureImageLimitCount,
                                   (const MethodInfo_2C5A230 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
  }
  result.fields.m_Height = v9;
  result.fields.m_Width = v8;
  result.fields.m_YMin = v7;
  result.fields.m_XMin = v6;
  return result;
}


System_String_o *__fastcall UICharaGraphRender__GetClassSprite(UICharaGraphRender_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  System_String_o *result; // x0
  int v10; // w20
  int32_t frameType; // w19
  System_String_o *v12; // x19
  System_String_o *v13; // x0
  int32_t AdjustFrameTypeForClass; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421BD70 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v6);
    sub_B0D8A4(&StringLiteral_17498/*"class"*/, v7);
    byte_421BD70 = 1;
  }
  AdjustFrameTypeForClass = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  result = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                this->fields.classId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( result )
  {
    v10 = (int)result;
    frameType = this->fields.frameType;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType, 0LL);
    v12 = System_Int32__ToString((int32_t)&AdjustFrameTypeForClass, 0LL);
    v13 = System_Int32__ToString(v10 + 44, 0LL);
    return System_String__Concat_43853316(
             (System_String_o *)StringLiteral_17498/*"class"*/,
             v12,
             (System_String_o *)StringLiteral_15952/*"_"*/,
             v13,
             0LL);
  }
  return result;
}


System_String_o *__fastcall UICharaGraphRender__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  int32_t v7; // [xsp+Ch] [xbp-4h] BYREF

  v7 = commandCodeId;
  if ( (byte_421BD62 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_4184/*"CommandGraph/1000000"*/, v2);
    sub_B0D8A4(&StringLiteral_4183/*"CommandGraph/"*/, v3);
    byte_421BD62 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_43849904((System_String_o *)StringLiteral_4183/*"CommandGraph/"*/, v4, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v5, 0LL) )
    return v5;
  else
    return (System_String_o *)StringLiteral_4184/*"CommandGraph/1000000"*/;
}


System_String_o *__fastcall UICharaGraphRender__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  System_String_o *v9; // x19
  DataManager_o *Instance; // x0
  const MethodInfo *v11; // x2
  System_String_o *v12; // x0
  ServantEntity_o *v14; // [xsp+0h] [xbp-20h] BYREF
  int32_t key; // [xsp+Ch] [xbp-14h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  key = svtId;
  if ( (byte_421BD63 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v2);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&StringLiteral_3946/*"CharaGraph/CharaGraphEx/"*/, v5);
    sub_B0D8A4(&StringLiteral_3944/*"CharaGraph/100000"*/, v6);
    sub_B0D8A4(&StringLiteral_3943/*"CharaGraph/"*/, v7);
    byte_421BD63 = 1;
  }
  v14 = 0LL;
  v8 = System_Int32__ToString((int32_t)&key, 0LL);
  v9 = System_String__Concat_43849904((System_String_o *)StringLiteral_3946/*"CharaGraph/CharaGraphEx/"*/, v8, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v9, 0LL) )
    return v9;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          (WarEntity_o **)&v14,
          key,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_3944/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v14;
  if ( !v14 )
    goto LABEL_19;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd(v14, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_3944/*"CharaGraph/100000"*/;
  if ( !v14 )
LABEL_19:
    sub_B0D97C(Instance);
  *(_QWORD *)&v16.fields.currentCryptoKey = &v14->fields.baseSvtId;
  *(_QWORD *)&v16.fields.fakeValue = 0LL;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v16, v11);
  v9 = System_String__Concat_43849904((System_String_o *)StringLiteral_3943/*"CharaGraph/"*/, v12, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v9, 0LL) )
    return (System_String_o *)StringLiteral_3944/*"CharaGraph/100000"*/;
  return v9;
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

  if ( (byte_421BD6B & 1) == 0 )
  {
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, method);
    byte_421BD6B = 1;
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
    sub_B0D97C(v3);
  }
LABEL_12:
  if ( imageLimitCount >= SERVANT_NAME_TARGET_LIMIT_COUNT->max_length )
  {
    v7 = sub_B0D9A8(v3);
    sub_B0D948(v7, 0LL);
  }
  return SERVANT_NAME_TARGET_LIMIT_COUNT->m_Items[imageLimitCount + 1];
}


UnityEngine_Texture2D_o *__fastcall UICharaGraphRender__GetNameTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *LastName; // x0
  __int64 *v8; // x8
  System_String_o *v9; // x0

  v4 = this;
  if ( (byte_421BD6C & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, data);
    sub_B0D8A4(&StringLiteral_16596/*"b"*/, v5);
    this = (UICharaGraphRender_o *)sub_B0D8A4(&StringLiteral_21069/*"name"*/, v6);
    byte_421BD6C = 1;
  }
  if ( v4->fields.isEventJoinNameExist )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v8 = &StringLiteral_21069/*"name"*/;
LABEL_6:
      v9 = System_String__Concat_43849904(LastName, (System_String_o *)*v8, 0LL);
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          data,
                                          v9,
                                          (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
    }
    goto LABEL_11;
  }
  if ( !v4->fields.isNameTrue )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v8 = &StringLiteral_16596/*"b"*/;
      goto LABEL_6;
    }
LABEL_11:
    sub_B0D97C(this);
  }
  return UICharaGraphRender__GetTrueNameTexture(v4, data, method);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall UICharaGraphRender__GetNameUvRect(
        UICharaGraphRender_o *this,
        UnityEngine_Rect_o defaultValue,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w20
  ServantLimitMaster_o *v9; // x21
  const MethodInfo *v10; // x1
  unsigned __int32 v11; // s0
  int v13; // s2
  int32_t SaintGraphNameIndex; // w0
  int v16; // w19
  UICharaGraphRender_c *v17; // x0
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  float SERVANT_NAME_UV_DIFF_Y; // s0
  float v20; // s1
  float v21; // s8
  float m_XMin; // s9
  float v23; // s10
  float height; // s3
  float v25; // s4
  float v26; // s5
  float v27; // s6
  float v28; // s7
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s8
  float v33; // s9
  float v34; // s0
  float v35; // s1
  float v36; // s2
  float v37; // s3
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Rect_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  methoda.methodPointer = *(Il2CppMethodPointer *)&defaultValue.fields.m_XMin;
  methoda.invoker_method = *(void **)&defaultValue.fields.m_Width;
  if ( (byte_421BD6E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, v5);
    byte_421BD6E = 1;
  }
  entity = 0LL;
  if ( !this->fields.baseKind )
  {
    entity = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             Instance,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      svtId = this->fields.svtId;
      v9 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
      Instance = (DataManager_o *)UICharaGraphRender__GetNameTargetLimitCount(this, v10);
      if ( v9 )
      {
        if ( !ServantLimitMaster__TryGetEntity(v9, &entity, svtId, (int32_t)Instance, 0LL) )
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
              v16 = SaintGraphNameIndex;
              v17 = UICharaGraphRender_TypeInfo;
              if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
              {
                v11 = j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo).n128_u32[0];
                v17 = UICharaGraphRender_TypeInfo;
              }
              static_fields = v17->static_fields;
              if ( v16 < static_fields->MAX_SERVANT_NAME_UV_DIFF_COUNT )
              {
                if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v17);
                  static_fields = UICharaGraphRender_TypeInfo->static_fields;
                }
                SERVANT_NAME_UV_DIFF_Y = static_fields->SERVANT_NAME_UV_DIFF_Y;
                v20 = (float)v16;
                v21 = SERVANT_NAME_UV_DIFF_Y * (float)v16;
                v40.fields.m_XMin = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)(&v13 - 2), &methoda);
                m_XMin = v40.fields.m_XMin;
                v41.fields.m_XMin = UnityEngine_Rect__get_width(v40, &methoda);
                v23 = v41.fields.m_XMin;
                height = UnityEngine_Rect__get_height(v41, &methoda);
                methoda.name = 0LL;
                methoda.klass = 0LL;
                v29 = m_XMin;
                v30 = v21;
                v31 = v23;
                goto LABEL_21;
              }
            }
LABEL_20:
            v42.fields.m_XMin = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v11, &methoda);
            v32 = v42.fields.m_XMin;
            v43.fields.m_XMin = UnityEngine_Rect__get_width(v42, &methoda);
            v33 = v43.fields.m_XMin;
            height = UnityEngine_Rect__get_height(v43, &methoda);
            v30 = 0.0;
            v29 = v32;
            v31 = v33;
            methoda.name = 0LL;
            methoda.klass = 0LL;
LABEL_21:
            UnityEngine_Rect___ctor(*(UnityEngine_Rect_o *)&v29, v25, v26, v27, v28, (const MethodInfo *)&methoda.name);
            goto LABEL_22;
          }
        }
      }
    }
    sub_B0D97C(Instance);
  }
  *(_OWORD *)&methoda.name = *(_OWORD *)&methoda.methodPointer;
LABEL_22:
  v35 = *((float *)&methoda.name + 1);
  v34 = *(float *)&methoda.name;
  v37 = *((float *)&methoda.klass + 1);
  v36 = *(float *)&methoda.klass;
  result.fields.m_Height = v37;
  result.fields.m_Width = v36;
  result.fields.m_YMin = v35;
  result.fields.m_XMin = v34;
  return result;
}


System_String_o *__fastcall UICharaGraphRender__GetRaritySprite(UICharaGraphRender_o *this, const MethodInfo *method)
{
  int v2; // w19
  __int64 v3; // x1
  System_String_o *v4; // x20
  System_String_o *v5; // x0

  v2 = (int)this;
  if ( (byte_421BD6F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21773/*"rarity"*/, method);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v3);
    byte_421BD6F = 1;
  }
  v4 = System_Int32__ToString(v2 + 480, 0LL);
  v5 = System_Int32__ToString(v2 + 440, 0LL);
  return System_String__Concat_43853316(
           (System_String_o *)StringLiteral_21773/*"rarity"*/,
           v4,
           (System_String_o *)StringLiteral_15952/*"_"*/,
           v5,
           0LL);
}


UnityEngine_Texture2D_o *__fastcall UICharaGraphRender__GetTrueNameTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w21
  ServantLimitMaster_o *v12; // x22
  const MethodInfo *v13; // x1
  __int64 *v14; // x20
  System_String_o *LastName; // x0
  System_String_o *v16; // x0
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421BD6D & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, data);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_16268/*"a"*/, v7);
    sub_B0D8A4(&StringLiteral_21069/*"name"*/, v8);
    byte_421BD6D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  v12 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (DataManager_o *)UICharaGraphRender__GetNameTargetLimitCount(this, v13);
  if ( !v12 )
    goto LABEL_13;
  Instance = (DataManager_o *)ServantLimitMaster__TryGetEntity(v12, &entity, svtId, (int32_t)Instance, 0LL);
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
      v14 = &StringLiteral_16268/*"a"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_B0D97C(Instance);
  }
  if ( !data )
    goto LABEL_13;
  v14 = &StringLiteral_21069/*"name"*/;
LABEL_12:
  LastName = AssetData__get_LastName(data, 0LL);
  v16 = System_String__Concat_43849904(LastName, (System_String_o *)*v14, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      data,
                                      v16,
                                      (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
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
void __fastcall UICharaGraphRender__MoveAlpha_35236128(
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Color_o v29; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v11 = *(long double *)&alpha;
  if ( (byte_421BD71 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, callbackObject);
    byte_421BD71 = 1;
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
      UnityEngine_GameObject__SendMessage_40784904(callbackObject, callbackFunc, 0LL);
    }
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v29.fields.r = *(float *)&v8;
    v29.fields.g = *(float *)&v7;
    v29.fields.b = *(float *)&v6;
    v29.fields.a = *(float *)&v11;
    v15 = TweenRendererColor__Begin(gameObject, duration, v29, 0LL);
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
          sub_B0D840(
            (BattleServantConfConponent_o *)&v15->fields.eventReceiver,
            (System_Int32_array **)callbackObject,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
          v15->fields.callWhenFinished = callbackFunc;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v15->fields.callWhenFinished,
            (System_Int32_array **)callbackFunc,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          return;
        }
LABEL_21:
        sub_B0D97C(v16);
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v17; // x1
  BalanceConfig_c *v18; // x0
  int32_t ServantLimitMax; // w8
  const MethodInfo *v20; // x3

  if ( (byte_421BD64 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v17);
    byte_421BD64 = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  v18 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  ServantLimitMax = limitCount;
  if ( v18->static_fields->ServantLimitMax < limitCount )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      ServantLimitMax = v18->static_fields->ServantLimitMax;
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        ServantLimitMax = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
      }
    }
    else
    {
      ServantLimitMax = v18->static_fields->ServantLimitMax;
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
  UICharaGraphRender__SetCharacter_35231004(this, changeNameType, saintGraphType, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_35231004(
        UICharaGraphRender_o *this,
        int32_t changeNameType,
        int32_t saintGraphType,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  DataManager_o *Instance; // x0
  ServantEntity_o *v23; // x21
  ServantLimitEntity_o *v24; // x24
  int32_t rarity; // w1
  ServantExceedEntity_o *v26; // x0
  ServantExceedEntity_o *v27; // x23
  int32_t frameType; // w0
  int32_t v29; // w24
  int32_t exceedCount; // w8
  int32_t classId; // w24
  int32_t FrameId; // w0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int32_t v39; // w24
  UICharaGraphRender_c *v40; // x0
  UICharaGraphRender_c *v41; // x0
  __int64 v42; // x8
  DataManager_c **v43; // x8
  Il2CppObject *syncRoot; // x8
  __int64 v45; // x9
  struct System_String_o *v46; // x1
  int32_t rarityIcon; // w23
  int32_t v48; // w0
  int v49; // w8
  int EventJoinNameExistSvtId; // w0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w23
  int32_t imageLimitCount; // w25
  ServantLimitMaster_o *v61; // x24
  int32_t v62; // w0
  int32_t v63; // w23
  struct System_String_o *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  unsigned int v71; // w8
  __int64 v72; // x0
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_421BD66 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&changeNameType);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExceedMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__string____ContainsKey__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__string____get_Item__, v16);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v17);
    sub_B0D8A4(&Rarity_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, v20);
    sub_B0D8A4(&StringLiteral_1/*""*/, v21);
    byte_421BD66 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_77;
  v23 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             this->fields.svtId,
                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_77;
  v24 = ServantLimitMaster__GetEntity(
          (ServantLimitMaster_o *)Instance,
          this->fields.svtId,
          this->fields.limitCount,
          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v23 )
    goto LABEL_77;
  this->fields.svtType = v23->fields.type;
  this->fields.classId = v23->fields.classId;
  if ( !v24 )
    goto LABEL_77;
  rarity = v24->fields.rarity;
  this->fields.rarity = rarity;
  if ( !Instance )
    goto LABEL_77;
  v26 = ServantExceedMaster__GetEntity((ServantExceedMaster_o *)Instance, rarity, this->fields.exceedCount, 0LL);
  v27 = v26;
  if ( v26 )
  {
    frameType = v26->fields.frameType;
  }
  else
  {
    v29 = v24->fields.rarity;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    frameType = Rarity__getFrameTypeImage(v29, 0, 0LL);
  }
  exceedCount = this->fields.exceedCount;
  this->fields.frameType = frameType;
  if ( exceedCount >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
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
    v39 = FrameId;
    v40 = UICharaGraphRender_TypeInfo;
    if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      v40 = UICharaGraphRender_TypeInfo;
    }
    Instance = (DataManager_o *)v40->static_fields->baseFrameTable;
    if ( !Instance )
      goto LABEL_77;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Instance,
           v39,
           (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__string____ContainsKey__) )
    {
      v41 = UICharaGraphRender_TypeInfo;
      if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v41 = UICharaGraphRender_TypeInfo;
      }
      Instance = (DataManager_o *)v41->static_fields->baseFrameTable;
      if ( !Instance )
        goto LABEL_77;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Instance,
                                    v39,
                                    (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__string____get_Item__);
      if ( !Instance )
        goto LABEL_77;
      v42 = this->fields.frameType;
      if ( (unsigned int)v42 < LODWORD(Instance->fields.datalist) )
      {
        v43 = &Instance->klass + v42;
        goto LABEL_43;
      }
LABEL_78:
      v72 = sub_B0D9A8(Instance);
      sub_B0D948(v72, 0LL);
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
  v45 = this->fields.frameType;
  if ( (unsigned int)v45 >= LODWORD(syncRoot[1].monitor) )
    goto LABEL_78;
  v43 = (DataManager_c **)(&syncRoot->klass + v45);
LABEL_43:
  v46 = (struct System_String_o *)v43[4];
  this->fields.frameName = v46;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.frameName,
    (System_Int32_array **)v46,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( this->fields.exceedCount < 1 )
  {
    v48 = 0;
  }
  else
  {
    if ( v27 )
      rarityIcon = v27->fields.rarityIcon;
    else
      rarityIcon = 1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_77;
    v48 = ServantLvDetailMaster__GetRarityIcon(
            (ServantLvDetailMaster_o *)Instance,
            this->fields.rarity,
            this->fields.lv,
            rarityIcon,
            0LL);
  }
  this->fields.exceedType = v48;
  if ( ServantEntity__get_IsCombineMaterial(v23, 0LL) )
    v49 = -1;
  else
    v49 = ServantEntity__get_IsServantMaterialTd(v23, 0LL) << 31 >> 31;
  this->fields.atk = v49;
  this->fields.hp = v49;
  this->fields.adjustHp = 0;
  this->fields.adjustAtk = 0;
  this->fields.realNameCheck = changeNameType;
  this->fields.saintGraphType = saintGraphType;
  this->fields.isEventJoinNameExist = 0;
  EventJoinNameExistSvtId = ServantEntity__GetEventJoinNameExistSvtId(v23, 0LL);
  if ( EventJoinNameExistSvtId >= 1 )
  {
    this->fields.imageSvtId = EventJoinNameExistSvtId;
    this->fields.isEventJoinNameExist = 1;
  }
  this->fields.isChangeGraph = 0;
  v57 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.changeGraphSuffix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.changeGraphSuffix, v57, v51, v52, v53, v54, v55, v56);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  imageLimitCount = this->fields.imageLimitCount;
  v61 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimit(imageLimitCount, 0LL);
  if ( !v61 )
    goto LABEL_77;
  if ( !ServantLimitMaster__TryGetEntity(v61, &entity, svtId, (int32_t)Instance, 0LL) )
    goto LABEL_73;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_77;
  v62 = ServantLimitEntity__GetChangeGraphCommonReleaseId(entity, -1, 0LL);
  if ( (v62 & 0x80000000) != 0 )
    goto LABEL_73;
  v63 = v62;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_77;
  if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v63, 0LL, 0, 0LL) )
    goto LABEL_73;
  this->fields.isChangeGraph = 1;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_77:
    sub_B0D97C(Instance);
  v64 = ServantLimitEntity__GetChangeGraphSuffix(entity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.changeGraphSuffix = v64;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.changeGraphSuffix,
    (System_Int32_array **)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
LABEL_73:
  if ( (unsigned int)(changeNameType - 1) >= 3 )
    LOBYTE(v71) = ServantEntity__IsNameTrue(v23, 0LL);
  else
    v71 = 0x100u >> (8 * (changeNameType - 1));
  this->fields.isNameTrue = v71;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_35232504(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  BalanceConfig_c *v20; // x0
  UICharaGraphRender_c *v21; // x0
  DataManager_o *Instance; // x0
  BalanceConfig_c *v23; // x0
  int32_t v24; // w8
  int32_t imageLimitCounta; // [xsp+Ch] [xbp-44h] BYREF

  imageLimitCounta = imageLimitCount;
  if ( (byte_421BD65 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, v19);
    byte_421BD65 = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_B0D97C(Instance);
    }
    ServantLimitAddMaster__getCostumeId(
      (ServantLimitAddMaster_o *)Instance,
      &this->fields.imageSvtId,
      &imageLimitCounta,
      0LL);
  }
  else
  {
    v20 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    if ( v20->static_fields->OtherImageLimitCount == imageLimitCount )
    {
      v21 = UICharaGraphRender_TypeInfo;
      if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v21 = UICharaGraphRender_TypeInfo;
      }
      imageLimitCounta = v21->static_fields->OTHER_IMAGE_LIMIT_COUNT;
    }
  }
  v23 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  if ( v23->static_fields->ServantLimitMax < limitCount )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      limitCount = v23->static_fields->ServantLimitMax;
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        limitCount = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
      }
    }
    else
    {
      limitCount = v23->static_fields->ServantLimitMax;
    }
  }
  this->fields.limitCount = limitCount;
  v24 = imageLimitCounta;
  this->fields.exceedCount = exceedCount;
  this->fields.imageLimitCount = v24;
  this->fields.lv = lv;
  UICharaGraphRender__SetCharacter_35231004(
    this,
    changeNameType,
    saintGraphType,
    *(const MethodInfo **)&imageLimitCount);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCommand(
        UICharaGraphRender_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *Instance; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t rarity; // w8
  __int64 v16; // x9
  struct System_String_o *v17; // x1
  __int64 v18; // x0

  if ( (byte_421BD67 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_B0D8A4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, v7);
    byte_421BD67 = 1;
  }
  this->fields.commandCodeId = commandCodeId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               this->fields.commandCodeId,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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
  v16 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 128LL);
  if ( !v16 )
LABEL_12:
    sub_B0D97C(Instance);
  if ( (unsigned int)rarity >= *(_DWORD *)(v16 + 24) )
  {
    v18 = sub_B0D9A8(Instance);
    sub_B0D948(v18, 0LL);
  }
  v17 = *(struct System_String_o **)(v16 + 8LL * rarity + 32);
  this->fields.frameName = v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.frameName,
    (System_Int32_array **)v17,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  *(_OWORD *)&this->fields.atk = xmmword_3205990;
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
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v7; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0LL) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    UICharaGraphRender__SetLayer_35236692(this, transform, layer, v7);
  }
}


void __fastcall UICharaGraphRender__SetLayer_35236692(
        UICharaGraphRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v14; // x8
  unsigned __int64 v15; // x10
  System_Collections_IEnumerator_c **v16; // x11
  __int64 v17; // x0
  UnityEngine_Transform_o *v18; // x0
  const MethodInfo *v19; // x3
  __int64 v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x19
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0

  v6 = this;
  if ( (byte_421BD72 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, tf);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (UICharaGraphRender_o *)sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v8);
    byte_421BD72 = 1;
  }
  if ( !tf
    || (this = (UICharaGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_33:
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        v16 += 2;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_17:
      v17 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v18 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    if ( v18 )
    {
      v20 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[v20 - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_B0DC70(v18);
        goto LABEL_33;
      }
    }
    UICharaGraphRender__SetLayer_35236692(v6, v18, layer, v19);
  }
  v21 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_28;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_28:
      v26 = sub_AA67A0(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
}