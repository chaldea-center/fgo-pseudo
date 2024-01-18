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
  __int64 v38; // x1
  float v39; // s4
  float v40; // s5
  float v41; // s6
  float v42; // s7
  struct UICharaGraphRender_StaticFields *v43; // x8
  float v44; // s0
  float v45; // s1
  float v46; // s4
  float v47; // s5
  float v48; // s6
  float v49; // s7
  struct UICharaGraphRender_StaticFields *v50; // x8
  float v51; // s0
  float v52; // s1
  float v53; // s4
  float v54; // s5
  float v55; // s6
  float v56; // s7
  struct UICharaGraphRender_StaticFields *v57; // x8
  float v58; // s0
  float v59; // s1
  float v60; // s4
  float v61; // s5
  float v62; // s6
  float v63; // s7
  struct UICharaGraphRender_StaticFields *v64; // x8
  float v65; // s0
  float v66; // s1
  float v67; // s4
  float v68; // s5
  float v69; // s6
  float v70; // s7
  struct UICharaGraphRender_StaticFields *v71; // x8
  float v72; // s0
  float v73; // s1
  float v74; // s4
  float v75; // s5
  float v76; // s6
  float v77; // s7
  struct UICharaGraphRender_StaticFields *v78; // x8
  float v79; // s0
  float v80; // s1
  float v81; // s4
  float v82; // s5
  float v83; // s6
  float v84; // s7
  struct UICharaGraphRender_StaticFields *v85; // x8
  float v86; // s0
  float v87; // s1
  float v88; // s4
  float v89; // s5
  float v90; // s6
  float v91; // s7
  struct UICharaGraphRender_StaticFields *v92; // x8
  float v93; // s0
  float v94; // s1
  float v95; // s4
  float v96; // s5
  float v97; // s6
  float v98; // s7
  struct UICharaGraphRender_StaticFields *v99; // x8
  float v100; // s0
  float v101; // s1
  float v102; // s4
  float v103; // s5
  float v104; // s6
  float v105; // s7
  struct UICharaGraphRender_StaticFields *v106; // x8
  float v107; // s0
  float v108; // s1
  float v109; // s5
  float v110; // s6
  float v111; // s7
  struct UICharaGraphRender_StaticFields *v112; // x8
  float v113; // s0
  float v114; // s4
  System_Int32_array **Only_Rect; // x0
  struct UICharaGraphRender_StaticFields *v116; // x8
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  float v123; // s4
  float v124; // s5
  float v125; // s6
  float v126; // s7
  UICharaGraphRender_c *v127; // x8
  System_Array_o *v128; // x19
  struct UICharaGraphRender_StaticFields *v129; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_Int32_array **v142; // x19
  System_Int32_array **v143; // x1
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_Int32_array **v150; // x1
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  System_Int32_array **v157; // x1
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Int32_array **v164; // x1
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  System_Int32_array **v171; // x1
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_Int32_array **v178; // x1
  struct UICharaGraphRender_StaticFields *v179; // x0
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  System_Int32_array **v192; // x19
  System_Int32_array **v193; // x1
  System_String_array **v194; // x2
  System_String_array **v195; // x3
  System_Boolean_array **v196; // x4
  System_Int32_array **v197; // x5
  System_Int32_array *v198; // x6
  System_Int32_array *v199; // x7
  System_Int32_array **v200; // x1
  System_String_array **v201; // x2
  System_String_array **v202; // x3
  System_Boolean_array **v203; // x4
  System_Int32_array **v204; // x5
  System_Int32_array *v205; // x6
  System_Int32_array *v206; // x7
  System_Int32_array **v207; // x1
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  System_Int32_array **v214; // x1
  System_String_array **v215; // x2
  System_String_array **v216; // x3
  System_Boolean_array **v217; // x4
  System_Int32_array **v218; // x5
  System_Int32_array *v219; // x6
  System_Int32_array *v220; // x7
  System_Int32_array **v221; // x1
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  System_Int32_array **v228; // x1
  System_String_array **v229; // x2
  System_String_array **v230; // x3
  System_Boolean_array **v231; // x4
  System_Int32_array **v232; // x5
  System_Int32_array *v233; // x6
  System_Int32_array *v234; // x7
  System_Int32_array **v235; // x1
  System_String_array **v236; // x2
  System_String_array **v237; // x3
  System_Boolean_array **v238; // x4
  System_Int32_array **v239; // x5
  System_Int32_array *v240; // x6
  System_Int32_array *v241; // x7
  System_Int32_array **v242; // x1
  struct UICharaGraphRender_StaticFields *v243; // x0
  System_String_array **v244; // x2
  System_String_array **v245; // x3
  System_Boolean_array **v246; // x4
  System_Int32_array **v247; // x5
  System_Int32_array *v248; // x6
  System_Int32_array *v249; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v250; // x19
  System_String_array **v251; // x2
  System_String_array **v252; // x3
  System_Boolean_array **v253; // x4
  System_Int32_array **v254; // x5
  System_Int32_array *v255; // x6
  System_Int32_array *v256; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o *v257; // x20
  System_Int32_array **v258; // x1
  System_String_array **v259; // x2
  System_String_array **v260; // x3
  System_Boolean_array **v261; // x4
  System_Int32_array **v262; // x5
  System_Int32_array *v263; // x6
  System_Int32_array *v264; // x7
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
  WarBoardEvalValueSquare_EvalValueSquare_o *v286; // x20
  System_Int32_array **v287; // x1
  System_String_array **v288; // x2
  System_String_array **v289; // x3
  System_Boolean_array **v290; // x4
  System_Int32_array **v291; // x5
  System_Int32_array *v292; // x6
  System_Int32_array *v293; // x7
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
  struct UICharaGraphRender_StaticFields *v309; // x0
  System_String_array **v310; // x2
  System_String_array **v311; // x3
  System_Boolean_array **v312; // x4
  System_Int32_array **v313; // x5
  System_Int32_array *v314; // x6
  System_Int32_array *v315; // x7
  System_String_array **v316; // x2
  System_String_array **v317; // x3
  System_Boolean_array **v318; // x4
  System_Int32_array **v319; // x5
  System_Int32_array *v320; // x6
  System_Int32_array *v321; // x7
  System_Int32_array **v322; // x19
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
  System_String_array **v345; // x2
  System_String_array **v346; // x3
  System_Boolean_array **v347; // x4
  System_Int32_array **v348; // x5
  System_Int32_array *v349; // x6
  System_Int32_array *v350; // x7
  System_Int32_array **v351; // x1
  System_String_array **v352; // x2
  System_String_array **v353; // x3
  System_Boolean_array **v354; // x4
  System_Int32_array **v355; // x5
  System_Int32_array *v356; // x6
  System_Int32_array *v357; // x7
  System_Int32_array **v358; // x1
  struct UICharaGraphRender_StaticFields *v359; // x0
  System_String_array **v360; // x2
  System_String_array **v361; // x3
  System_Boolean_array **v362; // x4
  System_Int32_array **v363; // x5
  System_Int32_array *v364; // x6
  System_Int32_array *v365; // x7
  __int64 v366; // x0
  __int64 v367; // x0
  struct UnityEngine_Rect_o v368; // [xsp+0h] [xbp-140h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-130h] BYREF
  MethodInfo v370; // [xsp+60h] [xbp-E0h] BYREF
  MethodInfo v371; // [xsp+B0h] [xbp-90h] BYREF
  System_RuntimeFieldHandle_o v372; // 0:w1.4
  UnityEngine_Rect_o v373; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
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

  if ( (byte_418ED0A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_AsReadOnly_Rect___, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__string____Add__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__string_____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__string____TypeInfo, v4);
    sub_B2C35C(&int___TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Rect___TypeInfo, v6);
    sub_B2C35C(&string___TypeInfo, v7);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C,
      v8);
    sub_B2C35C(&UICharaGraphRender_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_18877/*"frame5"*/, v10);
    sub_B2C35C(&StringLiteral_16220/*"a"*/, v11);
    sub_B2C35C(&StringLiteral_18878/*"frame6"*/, v12);
    sub_B2C35C(&StringLiteral_18879/*"frame7"*/, v13);
    sub_B2C35C(&StringLiteral_16547/*"b"*/, v14);
    sub_B2C35C(&StringLiteral_17160/*"c"*/, v15);
    sub_B2C35C(&StringLiteral_18874/*"frame20"*/, v16);
    sub_B2C35C(&StringLiteral_18875/*"frame3"*/, v17);
    sub_B2C35C(&StringLiteral_18871/*"frame1"*/, v18);
    sub_B2C35C(&StringLiteral_18870/*"frame0"*/, v19);
    sub_B2C35C(&StringLiteral_18872/*"frame17"*/, v20);
    sub_B2C35C(&StringLiteral_18873/*"frame2"*/, v21);
    sub_B2C35C(&StringLiteral_18876/*"frame4"*/, v22);
    byte_418ED0A = 1;
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
  v30 = sub_B2C374(UnityEngine_Rect___TypeInfo, 12LL);
  v31 = UICharaGraphRender_TypeInfo->static_fields;
  SERVANT_BODY_U = v31->SERVANT_BODY_U;
  SERVANT_BODY_V = v31->SERVANT_BODY_V;
  v373.fields.m_Width = v31->SERVANT_BODY_W;
  v373.fields.m_Height = v31->SERVANT_BODY_H;
  v371.name = 0LL;
  v371.klass = 0LL;
  v373.fields.m_XMin = SERVANT_BODY_U + 0.0;
  v373.fields.m_YMin = SERVANT_BODY_V + 0.0;
  UnityEngine_Rect___ctor(v373, SERVANT_BODY_V, v34, v35, v36, (const MethodInfo *)&v371.name);
  if ( !v30 )
    goto LABEL_165;
  if ( !*(_DWORD *)(v30 + 24) )
    goto LABEL_163;
  *(_OWORD *)(v30 + 32) = *(_OWORD *)&v371.name;
  v43 = UICharaGraphRender_TypeInfo->static_fields;
  v44 = v43->SERVANT_BODY_U;
  v45 = v43->SERVANT_BODY_V;
  v374.fields.m_Width = v43->SERVANT_BODY_W;
  v374.fields.m_Height = v43->SERVANT_BODY_H;
  v371.methodPointer = 0LL;
  v371.invoker_method = 0LL;
  v374.fields.m_XMin = v44 + 0.5;
  v374.fields.m_YMin = v45 + 0.0;
  UnityEngine_Rect___ctor(v374, v39, v40, v41, v42, &v371);
  if ( *(_DWORD *)(v30 + 24) <= 1u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 48) = *(_OWORD *)&v371.methodPointer;
  v50 = UICharaGraphRender_TypeInfo->static_fields;
  v51 = v50->SERVANT_BODY_U;
  v52 = v50->SERVANT_BODY_V;
  v375.fields.m_Width = v50->SERVANT_BODY_W;
  v375.fields.m_Height = v50->SERVANT_BODY_H;
  *(_QWORD *)&v370.token = 0LL;
  *(_QWORD *)&v370.slot = 0LL;
  v375.fields.m_XMin = v51 + 0.0;
  v375.fields.m_YMin = v52 + 0.0;
  UnityEngine_Rect___ctor(v375, v46, v47, v48, v49, (const MethodInfo *)&v370.token);
  if ( *(_DWORD *)(v30 + 24) <= 2u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 64) = *(_OWORD *)&v370.token;
  v57 = UICharaGraphRender_TypeInfo->static_fields;
  v58 = v57->SERVANT_BODY_U;
  v59 = v57->SERVANT_BODY_V;
  v376.fields.m_Width = v57->SERVANT_BODY_W;
  v376.fields.m_Height = v57->SERVANT_BODY_H;
  v370.rgctx_data = 0LL;
  v370.genericMethod = 0LL;
  v376.fields.m_XMin = v58 + 0.5;
  v376.fields.m_YMin = v59 + 0.0;
  UnityEngine_Rect___ctor(v376, v53, v54, v55, v56, (const MethodInfo *)&v370.rgctx_data);
  if ( *(_DWORD *)(v30 + 24) <= 3u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 80) = *(_OWORD *)&v370.rgctx_data;
  v64 = UICharaGraphRender_TypeInfo->static_fields;
  v65 = v64->SERVANT_BODY_U;
  v66 = v64->SERVANT_BODY_V;
  v377.fields.m_Width = v64->SERVANT_BODY_W;
  v377.fields.m_Height = v64->SERVANT_BODY_H;
  v370.return_type = 0LL;
  v370.parameters = 0LL;
  v377.fields.m_XMin = v65 + 0.0;
  v377.fields.m_YMin = v66 + 0.0;
  UnityEngine_Rect___ctor(v377, v60, v61, v62, v63, (const MethodInfo *)&v370.return_type);
  if ( *(_DWORD *)(v30 + 24) <= 4u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 96) = *(_OWORD *)&v370.return_type;
  v71 = UICharaGraphRender_TypeInfo->static_fields;
  v72 = v71->SERVANT_BODY_U;
  v73 = v71->SERVANT_BODY_V;
  v378.fields.m_Width = v71->SERVANT_BODY_W;
  v378.fields.m_Height = v71->SERVANT_BODY_H;
  v370.name = 0LL;
  v370.klass = 0LL;
  v378.fields.m_XMin = v72 + 0.5;
  v378.fields.m_YMin = v73 + 0.0;
  UnityEngine_Rect___ctor(v378, v67, v68, v69, v70, (const MethodInfo *)&v370.name);
  if ( *(_DWORD *)(v30 + 24) <= 5u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 112) = *(_OWORD *)&v370.name;
  v78 = UICharaGraphRender_TypeInfo->static_fields;
  v79 = v78->SERVANT_BODY_U;
  v80 = v78->SERVANT_BODY_V;
  v379.fields.m_Width = v78->SERVANT_BODY_W;
  v379.fields.m_Height = v78->SERVANT_BODY_H;
  v370.methodPointer = 0LL;
  v370.invoker_method = 0LL;
  v379.fields.m_XMin = v79 + 0.0;
  v379.fields.m_YMin = v80 + 0.0;
  UnityEngine_Rect___ctor(v379, v74, v75, v76, v77, &v370);
  if ( *(_DWORD *)(v30 + 24) <= 6u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 128) = *(_OWORD *)&v370.methodPointer;
  v85 = UICharaGraphRender_TypeInfo->static_fields;
  v86 = v85->SERVANT_BODY_U;
  v87 = v85->SERVANT_BODY_V;
  v380.fields.m_Width = v85->SERVANT_BODY_W;
  v380.fields.m_Height = v85->SERVANT_BODY_H;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  v380.fields.m_XMin = v86 + 0.5;
  v380.fields.m_YMin = v87 + 0.0;
  UnityEngine_Rect___ctor(v380, v81, v82, v83, v84, (const MethodInfo *)&methoda.token);
  if ( *(_DWORD *)(v30 + 24) <= 7u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 144) = *(_OWORD *)&methoda.token;
  v92 = UICharaGraphRender_TypeInfo->static_fields;
  v93 = v92->SERVANT_BODY_U;
  v94 = v92->SERVANT_BODY_V;
  v381.fields.m_Width = v92->SERVANT_BODY_W;
  v381.fields.m_Height = v92->SERVANT_BODY_H;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  v381.fields.m_XMin = v93 + 0.0;
  v381.fields.m_YMin = v94 + 0.0;
  UnityEngine_Rect___ctor(v381, v88, v89, v90, v91, (const MethodInfo *)&methoda.rgctx_data);
  if ( *(_DWORD *)(v30 + 24) <= 8u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 160) = *(_OWORD *)&methoda.rgctx_data;
  v99 = UICharaGraphRender_TypeInfo->static_fields;
  v100 = v99->SERVANT_BODY_U;
  v101 = v99->SERVANT_BODY_V;
  v382.fields.m_Width = v99->SERVANT_BODY_W;
  v382.fields.m_Height = v99->SERVANT_BODY_H;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  v382.fields.m_XMin = v100 + 0.5;
  v382.fields.m_YMin = v101 + 0.0;
  UnityEngine_Rect___ctor(v382, v95, v96, v97, v98, (const MethodInfo *)&methoda.return_type);
  if ( *(_DWORD *)(v30 + 24) <= 9u )
    goto LABEL_163;
  *(_OWORD *)(v30 + 176) = *(_OWORD *)&methoda.return_type;
  v106 = UICharaGraphRender_TypeInfo->static_fields;
  v107 = v106->SERVANT_BODY_U;
  v108 = v106->SERVANT_BODY_V;
  v383.fields.m_Width = v106->SERVANT_BODY_W;
  v383.fields.m_Height = v106->SERVANT_BODY_H;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  v383.fields.m_XMin = v107 + 0.0;
  v383.fields.m_YMin = v108 + 0.0;
  UnityEngine_Rect___ctor(v383, v102, v103, v104, v105, (const MethodInfo *)&methoda.name);
  if ( *(_DWORD *)(v30 + 24) <= 0xAu )
    goto LABEL_163;
  *(_OWORD *)(v30 + 192) = *(_OWORD *)&methoda.name;
  v112 = UICharaGraphRender_TypeInfo->static_fields;
  v113 = v112->SERVANT_BODY_U;
  v114 = v112->SERVANT_BODY_V;
  v384.fields.m_Width = v112->SERVANT_BODY_W;
  v384.fields.m_Height = v112->SERVANT_BODY_H;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  v384.fields.m_XMin = v113 + 0.5;
  v384.fields.m_YMin = v114 + 0.0;
  UnityEngine_Rect___ctor(v384, v114, v109, v110, v111, &methoda);
  if ( *(_DWORD *)(v30 + 24) <= 0xBu )
  {
LABEL_163:
    v366 = sub_B2C460(v37);
    sub_B2C400(v366, 0LL);
  }
  *(_OWORD *)(v30 + 208) = *(_OWORD *)&methoda.methodPointer;
  Only_Rect = (System_Int32_array **)System_Array__AsReadOnly_Rect_(
                                       (UnityEngine_Rect_array *)v30,
                                       (const MethodInfo_2D7AD38 *)Method_System_Array_AsReadOnly_Rect___);
  v116 = UICharaGraphRender_TypeInfo->static_fields;
  v116->servantBodyRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_B2C2F8((BattleServantConfConponent_o *)&v116->servantBodyRectTable, Only_Rect, v117, v118, v119, v120, v121, v122);
  v385 = *(UnityEngine_Rect_o *)&UICharaGraphRender_TypeInfo->static_fields->SERVANT_EQUIP_BODY_U;
  v368 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v385, v123, v124, v125, v126, (const MethodInfo *)&v368);
  v127 = UICharaGraphRender_TypeInfo;
  UICharaGraphRender_TypeInfo->static_fields->servantEquipBodyRect = v368;
  v127->static_fields->SERVANT_NAME_UV_DIFF_Y = 0.25;
  v127->static_fields->MAX_SERVANT_NAME_UV_DIFF_COUNT = 4;
  v128 = (System_Array_o *)sub_B2C374(int___TypeInfo, 4LL);
  v372.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v128, v372, 0LL);
  v129 = UICharaGraphRender_TypeInfo->static_fields;
  v129->SERVANT_NAME_TARGET_LIMIT_COUNT = (struct System_Int32_array *)v128;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v129->SERVANT_NAME_TARGET_LIMIT_COUNT,
    (System_Int32_array **)v128,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  v37 = (System_Int32_array **)sub_B2C374(string___TypeInfo, 6LL);
  if ( !v37 )
    goto LABEL_165;
  v142 = v37;
  v37 = (System_Int32_array **)StringLiteral_16220/*"a"*/;
  if ( StringLiteral_16220/*"a"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_16220/*"a"*/, *(_QWORD *)&(*v142)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v143 = (System_Int32_array **)StringLiteral_16220/*"a"*/;
  }
  else
  {
    v143 = 0LL;
  }
  if ( !*((_DWORD *)v142 + 6) )
    goto LABEL_163;
  v142[4] = (System_Int32_array *)v143;
  sub_B2C2F8((BattleServantConfConponent_o *)(v142 + 4), v143, v136, v137, v138, v139, v140, v141);
  v37 = (System_Int32_array **)StringLiteral_16220/*"a"*/;
  if ( StringLiteral_16220/*"a"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_16220/*"a"*/, *(_QWORD *)&(*v142)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v150 = (System_Int32_array **)StringLiteral_16220/*"a"*/;
  }
  else
  {
    v150 = 0LL;
  }
  if ( *((_DWORD *)v142 + 6) <= 1u )
    goto LABEL_163;
  v142[5] = (System_Int32_array *)v150;
  sub_B2C2F8((BattleServantConfConponent_o *)(v142 + 5), v150, v144, v145, v146, v147, v148, v149);
  v37 = (System_Int32_array **)StringLiteral_16547/*"b"*/;
  if ( StringLiteral_16547/*"b"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_16547/*"b"*/, *(_QWORD *)&(*v142)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v157 = (System_Int32_array **)StringLiteral_16547/*"b"*/;
  }
  else
  {
    v157 = 0LL;
  }
  if ( *((_DWORD *)v142 + 6) <= 2u )
    goto LABEL_163;
  v142[6] = (System_Int32_array *)v157;
  sub_B2C2F8((BattleServantConfConponent_o *)(v142 + 6), v157, v151, v152, v153, v154, v155, v156);
  v37 = (System_Int32_array **)StringLiteral_16547/*"b"*/;
  if ( StringLiteral_16547/*"b"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_16547/*"b"*/, *(_QWORD *)&(*v142)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v164 = (System_Int32_array **)StringLiteral_16547/*"b"*/;
  }
  else
  {
    v164 = 0LL;
  }
  if ( *((_DWORD *)v142 + 6) <= 3u )
    goto LABEL_163;
  v142[7] = (System_Int32_array *)v164;
  sub_B2C2F8((BattleServantConfConponent_o *)(v142 + 7), v164, v158, v159, v160, v161, v162, v163);
  v37 = (System_Int32_array **)StringLiteral_17160/*"c"*/;
  if ( StringLiteral_17160/*"c"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_17160/*"c"*/, *(_QWORD *)&(*v142)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v171 = (System_Int32_array **)StringLiteral_17160/*"c"*/;
  }
  else
  {
    v171 = 0LL;
  }
  if ( *((_DWORD *)v142 + 6) <= 4u )
    goto LABEL_163;
  v142[8] = (System_Int32_array *)v171;
  sub_B2C2F8((BattleServantConfConponent_o *)(v142 + 8), v171, v165, v166, v167, v168, v169, v170);
  v37 = (System_Int32_array **)StringLiteral_17160/*"c"*/;
  if ( StringLiteral_17160/*"c"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_17160/*"c"*/, *(_QWORD *)&(*v142)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v178 = (System_Int32_array **)StringLiteral_17160/*"c"*/;
  }
  else
  {
    v178 = 0LL;
  }
  if ( *((_DWORD *)v142 + 6) <= 5u )
    goto LABEL_163;
  v142[9] = (System_Int32_array *)v178;
  sub_B2C2F8((BattleServantConfConponent_o *)(v142 + 9), v178, v172, v173, v174, v175, v176, v177);
  v179 = UICharaGraphRender_TypeInfo->static_fields;
  v179->bodyTextureNameTable = (struct System_String_array *)v142;
  sub_B2C2F8((BattleServantConfConponent_o *)&v179->bodyTextureNameTable, v142, v180, v181, v182, v183, v184, v185);
  v37 = (System_Int32_array **)sub_B2C374(string___TypeInfo, 8LL);
  if ( !v37 )
    goto LABEL_165;
  v192 = v37;
  v37 = (System_Int32_array **)StringLiteral_18870/*"frame0"*/;
  if ( StringLiteral_18870/*"frame0"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18870/*"frame0"*/, *(_QWORD *)&(*v192)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v193 = (System_Int32_array **)StringLiteral_18870/*"frame0"*/;
  }
  else
  {
    v193 = 0LL;
  }
  if ( !*((_DWORD *)v192 + 6) )
    goto LABEL_163;
  v192[4] = (System_Int32_array *)v193;
  sub_B2C2F8((BattleServantConfConponent_o *)(v192 + 4), v193, v186, v187, v188, v189, v190, v191);
  v37 = (System_Int32_array **)StringLiteral_18871/*"frame1"*/;
  if ( StringLiteral_18871/*"frame1"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18871/*"frame1"*/, *(_QWORD *)&(*v192)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v200 = (System_Int32_array **)StringLiteral_18871/*"frame1"*/;
  }
  else
  {
    v200 = 0LL;
  }
  if ( *((_DWORD *)v192 + 6) <= 1u )
    goto LABEL_163;
  v192[5] = (System_Int32_array *)v200;
  sub_B2C2F8((BattleServantConfConponent_o *)(v192 + 5), v200, v194, v195, v196, v197, v198, v199);
  v37 = (System_Int32_array **)StringLiteral_18873/*"frame2"*/;
  if ( StringLiteral_18873/*"frame2"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18873/*"frame2"*/, *(_QWORD *)&(*v192)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v207 = (System_Int32_array **)StringLiteral_18873/*"frame2"*/;
  }
  else
  {
    v207 = 0LL;
  }
  if ( *((_DWORD *)v192 + 6) <= 2u )
    goto LABEL_163;
  v192[6] = (System_Int32_array *)v207;
  sub_B2C2F8((BattleServantConfConponent_o *)(v192 + 6), v207, v201, v202, v203, v204, v205, v206);
  v37 = (System_Int32_array **)StringLiteral_18875/*"frame3"*/;
  if ( StringLiteral_18875/*"frame3"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18875/*"frame3"*/, *(_QWORD *)&(*v192)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v214 = (System_Int32_array **)StringLiteral_18875/*"frame3"*/;
  }
  else
  {
    v214 = 0LL;
  }
  if ( *((_DWORD *)v192 + 6) <= 3u )
    goto LABEL_163;
  v192[7] = (System_Int32_array *)v214;
  sub_B2C2F8((BattleServantConfConponent_o *)(v192 + 7), v214, v208, v209, v210, v211, v212, v213);
  v37 = (System_Int32_array **)StringLiteral_18876/*"frame4"*/;
  if ( StringLiteral_18876/*"frame4"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18876/*"frame4"*/, *(_QWORD *)&(*v192)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v221 = (System_Int32_array **)StringLiteral_18876/*"frame4"*/;
  }
  else
  {
    v221 = 0LL;
  }
  if ( *((_DWORD *)v192 + 6) <= 4u )
    goto LABEL_163;
  v192[8] = (System_Int32_array *)v221;
  sub_B2C2F8((BattleServantConfConponent_o *)(v192 + 8), v221, v215, v216, v217, v218, v219, v220);
  v37 = (System_Int32_array **)StringLiteral_18877/*"frame5"*/;
  if ( StringLiteral_18877/*"frame5"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18877/*"frame5"*/, *(_QWORD *)&(*v192)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v228 = (System_Int32_array **)StringLiteral_18877/*"frame5"*/;
  }
  else
  {
    v228 = 0LL;
  }
  if ( *((_DWORD *)v192 + 6) <= 5u )
    goto LABEL_163;
  v192[9] = (System_Int32_array *)v228;
  sub_B2C2F8((BattleServantConfConponent_o *)(v192 + 9), v228, v222, v223, v224, v225, v226, v227);
  v37 = (System_Int32_array **)StringLiteral_18878/*"frame6"*/;
  if ( StringLiteral_18878/*"frame6"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18878/*"frame6"*/, *(_QWORD *)&(*v192)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v235 = (System_Int32_array **)StringLiteral_18878/*"frame6"*/;
  }
  else
  {
    v235 = 0LL;
  }
  if ( *((_DWORD *)v192 + 6) <= 6u )
    goto LABEL_163;
  v192[10] = (System_Int32_array *)v235;
  sub_B2C2F8((BattleServantConfConponent_o *)(v192 + 10), v235, v229, v230, v231, v232, v233, v234);
  v37 = (System_Int32_array **)StringLiteral_18879/*"frame7"*/;
  if ( StringLiteral_18879/*"frame7"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18879/*"frame7"*/, *(_QWORD *)&(*v192)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v242 = (System_Int32_array **)StringLiteral_18879/*"frame7"*/;
  }
  else
  {
    v242 = 0LL;
  }
  if ( *((_DWORD *)v192 + 6) <= 7u )
    goto LABEL_163;
  v192[11] = (System_Int32_array *)v242;
  sub_B2C2F8((BattleServantConfConponent_o *)(v192 + 11), v242, v236, v237, v238, v239, v240, v241);
  v243 = UICharaGraphRender_TypeInfo->static_fields;
  v243->baseFrameList = (struct System_String_array *)v192;
  sub_B2C2F8((BattleServantConfConponent_o *)&v243->baseFrameList, v192, v244, v245, v246, v247, v248, v249);
  v250 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__string____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v250,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__string_____ctor__);
  v37 = (System_Int32_array **)sub_B2C374(string___TypeInfo, 4LL);
  if ( !v37 )
    goto LABEL_165;
  v257 = (WarBoardEvalValueSquare_EvalValueSquare_o *)v37;
  v37 = (System_Int32_array **)StringLiteral_18872/*"frame17"*/;
  if ( StringLiteral_18872/*"frame17"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18872/*"frame17"*/, v257->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v258 = (System_Int32_array **)StringLiteral_18872/*"frame17"*/;
  }
  else
  {
    v258 = 0LL;
  }
  if ( !LODWORD(v257->fields._EvalValueWarsituation_k__BackingField) )
    goto LABEL_163;
  *(_QWORD *)&v257->fields._EvalValue_k__BackingField = v258;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v257->fields._EvalValue_k__BackingField,
    v258,
    v251,
    v252,
    v253,
    v254,
    v255,
    v256);
  v37 = (System_Int32_array **)StringLiteral_18872/*"frame17"*/;
  if ( StringLiteral_18872/*"frame17"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18872/*"frame17"*/, v257->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v265 = (System_Int32_array **)StringLiteral_18872/*"frame17"*/;
  }
  else
  {
    v265 = 0LL;
  }
  if ( LODWORD(v257->fields._EvalValueWarsituation_k__BackingField) <= 1 )
    goto LABEL_163;
  *(_QWORD *)&v257->fields._WarAdjustmentValueB_k__BackingField = v265;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v257->fields._WarAdjustmentValueB_k__BackingField,
    v265,
    v259,
    v260,
    v261,
    v262,
    v263,
    v264);
  v37 = (System_Int32_array **)StringLiteral_18872/*"frame17"*/;
  if ( StringLiteral_18872/*"frame17"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18872/*"frame17"*/, v257->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v272 = (System_Int32_array **)StringLiteral_18872/*"frame17"*/;
  }
  else
  {
    v272 = 0LL;
  }
  if ( LODWORD(v257->fields._EvalValueWarsituation_k__BackingField) <= 2 )
    goto LABEL_163;
  *(_QWORD *)&v257->fields._BenAdjustmentValueB_k__BackingField = v272;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v257->fields._BenAdjustmentValueB_k__BackingField,
    v272,
    v266,
    v267,
    v268,
    v269,
    v270,
    v271);
  v37 = (System_Int32_array **)StringLiteral_18872/*"frame17"*/;
  if ( StringLiteral_18872/*"frame17"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18872/*"frame17"*/, v257->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v279 = (System_Int32_array **)StringLiteral_18872/*"frame17"*/;
  }
  else
  {
    v279 = 0LL;
  }
  if ( LODWORD(v257->fields._EvalValueWarsituation_k__BackingField) <= 3 )
    goto LABEL_163;
  v257[1].klass = (WarBoardEvalValueSquare_EvalValueSquare_c *)v279;
  sub_B2C2F8((BattleServantConfConponent_o *)&v257[1], v279, v273, v274, v275, v276, v277, v278);
  if ( !v250 )
    goto LABEL_165;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v250,
    17,
    v257,
    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v37 = (System_Int32_array **)sub_B2C374(string___TypeInfo, 4LL);
  if ( !v37 )
    goto LABEL_165;
  v286 = (WarBoardEvalValueSquare_EvalValueSquare_o *)v37;
  v37 = (System_Int32_array **)StringLiteral_18874/*"frame20"*/;
  if ( StringLiteral_18874/*"frame20"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18874/*"frame20"*/, v286->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v287 = (System_Int32_array **)StringLiteral_18874/*"frame20"*/;
  }
  else
  {
    v287 = 0LL;
  }
  if ( !LODWORD(v286->fields._EvalValueWarsituation_k__BackingField) )
    goto LABEL_163;
  *(_QWORD *)&v286->fields._EvalValue_k__BackingField = v287;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v286->fields._EvalValue_k__BackingField,
    v287,
    v280,
    v281,
    v282,
    v283,
    v284,
    v285);
  v37 = (System_Int32_array **)StringLiteral_18874/*"frame20"*/;
  if ( StringLiteral_18874/*"frame20"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18874/*"frame20"*/, v286->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v294 = (System_Int32_array **)StringLiteral_18874/*"frame20"*/;
  }
  else
  {
    v294 = 0LL;
  }
  if ( LODWORD(v286->fields._EvalValueWarsituation_k__BackingField) <= 1 )
    goto LABEL_163;
  *(_QWORD *)&v286->fields._WarAdjustmentValueB_k__BackingField = v294;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v286->fields._WarAdjustmentValueB_k__BackingField,
    v294,
    v288,
    v289,
    v290,
    v291,
    v292,
    v293);
  v37 = (System_Int32_array **)StringLiteral_18874/*"frame20"*/;
  if ( StringLiteral_18874/*"frame20"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18874/*"frame20"*/, v286->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v301 = (System_Int32_array **)StringLiteral_18874/*"frame20"*/;
  }
  else
  {
    v301 = 0LL;
  }
  if ( LODWORD(v286->fields._EvalValueWarsituation_k__BackingField) <= 2 )
    goto LABEL_163;
  *(_QWORD *)&v286->fields._BenAdjustmentValueB_k__BackingField = v301;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v286->fields._BenAdjustmentValueB_k__BackingField,
    v301,
    v295,
    v296,
    v297,
    v298,
    v299,
    v300);
  v37 = (System_Int32_array **)StringLiteral_18874/*"frame20"*/;
  if ( StringLiteral_18874/*"frame20"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18874/*"frame20"*/, v286->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_164;
    v308 = (System_Int32_array **)StringLiteral_18874/*"frame20"*/;
  }
  else
  {
    v308 = 0LL;
  }
  if ( LODWORD(v286->fields._EvalValueWarsituation_k__BackingField) <= 3 )
    goto LABEL_163;
  v286[1].klass = (WarBoardEvalValueSquare_EvalValueSquare_c *)v308;
  sub_B2C2F8((BattleServantConfConponent_o *)&v286[1], v308, v302, v303, v304, v305, v306, v307);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v250,
    20,
    v286,
    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v309 = UICharaGraphRender_TypeInfo->static_fields;
  v309->baseFrameTable = (struct System_Collections_Generic_Dictionary_int__string____o *)v250;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v309->baseFrameTable,
    (System_Int32_array **)v250,
    v310,
    v311,
    v312,
    v313,
    v314,
    v315);
  v37 = (System_Int32_array **)sub_B2C374(string___TypeInfo, 6LL);
  if ( !v37 )
LABEL_165:
    sub_B2C434(v37, v38);
  v322 = v37;
  v37 = (System_Int32_array **)StringLiteral_18870/*"frame0"*/;
  if ( StringLiteral_18870/*"frame0"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18870/*"frame0"*/, *(_QWORD *)&(*v322)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v323 = (System_Int32_array **)StringLiteral_18870/*"frame0"*/;
  }
  else
  {
    v323 = 0LL;
  }
  if ( !*((_DWORD *)v322 + 6) )
    goto LABEL_163;
  v322[4] = (System_Int32_array *)v323;
  sub_B2C2F8((BattleServantConfConponent_o *)(v322 + 4), v323, v316, v317, v318, v319, v320, v321);
  v37 = (System_Int32_array **)StringLiteral_18871/*"frame1"*/;
  if ( StringLiteral_18871/*"frame1"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18871/*"frame1"*/, *(_QWORD *)&(*v322)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v330 = (System_Int32_array **)StringLiteral_18871/*"frame1"*/;
  }
  else
  {
    v330 = 0LL;
  }
  if ( *((_DWORD *)v322 + 6) <= 1u )
    goto LABEL_163;
  v322[5] = (System_Int32_array *)v330;
  sub_B2C2F8((BattleServantConfConponent_o *)(v322 + 5), v330, v324, v325, v326, v327, v328, v329);
  v37 = (System_Int32_array **)StringLiteral_18871/*"frame1"*/;
  if ( StringLiteral_18871/*"frame1"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18871/*"frame1"*/, *(_QWORD *)&(*v322)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v337 = (System_Int32_array **)StringLiteral_18871/*"frame1"*/;
  }
  else
  {
    v337 = 0LL;
  }
  if ( *((_DWORD *)v322 + 6) <= 2u )
    goto LABEL_163;
  v322[6] = (System_Int32_array *)v337;
  sub_B2C2F8((BattleServantConfConponent_o *)(v322 + 6), v337, v331, v332, v333, v334, v335, v336);
  v37 = (System_Int32_array **)StringLiteral_18873/*"frame2"*/;
  if ( StringLiteral_18873/*"frame2"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18873/*"frame2"*/, *(_QWORD *)&(*v322)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v344 = (System_Int32_array **)StringLiteral_18873/*"frame2"*/;
  }
  else
  {
    v344 = 0LL;
  }
  if ( *((_DWORD *)v322 + 6) <= 3u )
    goto LABEL_163;
  v322[7] = (System_Int32_array *)v344;
  sub_B2C2F8((BattleServantConfConponent_o *)(v322 + 7), v344, v338, v339, v340, v341, v342, v343);
  v37 = (System_Int32_array **)StringLiteral_18875/*"frame3"*/;
  if ( StringLiteral_18875/*"frame3"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18875/*"frame3"*/, *(_QWORD *)&(*v322)->m_Items[9]);
    if ( !v37 )
      goto LABEL_164;
    v351 = (System_Int32_array **)StringLiteral_18875/*"frame3"*/;
  }
  else
  {
    v351 = 0LL;
  }
  if ( *((_DWORD *)v322 + 6) <= 4u )
    goto LABEL_163;
  v322[8] = (System_Int32_array *)v351;
  sub_B2C2F8((BattleServantConfConponent_o *)(v322 + 8), v351, v345, v346, v347, v348, v349, v350);
  v37 = (System_Int32_array **)StringLiteral_18875/*"frame3"*/;
  if ( StringLiteral_18875/*"frame3"*/ )
  {
    v37 = (System_Int32_array **)sub_B2C41C(StringLiteral_18875/*"frame3"*/, *(_QWORD *)&(*v322)->m_Items[9]);
    if ( v37 )
    {
      v358 = (System_Int32_array **)StringLiteral_18875/*"frame3"*/;
      goto LABEL_161;
    }
LABEL_164:
    v367 = sub_B2C454(v37);
    sub_B2C400(v367, 0LL);
  }
  v358 = 0LL;
LABEL_161:
  if ( *((_DWORD *)v322 + 6) <= 5u )
    goto LABEL_163;
  v322[9] = (System_Int32_array *)v358;
  sub_B2C2F8((BattleServantConfConponent_o *)(v322 + 9), v358, v352, v353, v354, v355, v356, v357);
  v359 = UICharaGraphRender_TypeInfo->static_fields;
  v359->commandCodeBaseFrameList = (struct System_String_array *)v322;
  sub_B2C2F8((BattleServantConfConponent_o *)&v359->commandCodeBaseFrameList, v322, v360, v361, v362, v363, v364, v365);
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
  __int64 v14; // x1
  System_String_o *v15; // x0
  System_String_o *v16; // x19
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  System_String_o *v19; // x0
  int32_t IntValue; // [xsp+Ch] [xbp-34h] BYREF
  WarEntity_o *v22; // [xsp+10h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF
  int32_t imageLimitCounta; // [xsp+28h] [xbp-18h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-14h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_418ECF7 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_20365/*"maleImageId"*/, v10);
    sub_B2C35C(&StringLiteral_3931/*"CharaGraph/100000"*/, v11);
    sub_B2C35C(&StringLiteral_3930/*"CharaGraph/"*/, v12);
    byte_418ECF7 = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  IntValue = 0;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_33;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
  }
  v15 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  v16 = System_String__Concat_44305532((System_String_o *)StringLiteral_3930/*"CharaGraph/"*/, v15, 0LL);
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_33;
  if ( UserGameEntity__IsMale((UserGameEntity_o *)Instance, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  &entity,
                                  svtIda,
                                  (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_33;
      IntValue = EntityScriptUtil__GetIntValue(
                   *(System_Collections_Generic_Dictionary_string__object__o **)&entity[1].fields.flag,
                   (System_String_o *)StringLiteral_20365/*"maleImageId"*/,
                   0,
                   0LL);
      if ( IntValue )
      {
        v17 = System_Int32__ToString((int32_t)&IntValue, 0LL);
        v16 = System_String__Concat_44305532((System_String_o *)StringLiteral_3930/*"CharaGraph/"*/, v17, 0LL);
      }
    }
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v16, 0LL) )
    return v16;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_33;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &v22,
          svtIda,
          (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_3931/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v22;
  if ( !v22 )
    goto LABEL_33;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v22, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_3931/*"CharaGraph/100000"*/;
  if ( !v22 )
LABEL_33:
    sub_B2C434(Instance, v14);
  *(_QWORD *)&v26.fields.currentCryptoKey = &v22->fields.name;
  *(_QWORD *)&v26.fields.fakeValue = 0LL;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v18);
  v16 = System_String__Concat_44305532((System_String_o *)StringLiteral_3930/*"CharaGraph/"*/, v19, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v16, 0LL) )
    return (System_String_o *)StringLiteral_3931/*"CharaGraph/100000"*/;
  return v16;
}


System_String_o *__fastcall UICharaGraphRender__GetAssetName_35706424(int32_t imageSvtId, const MethodInfo *method)
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
  __int64 v13; // x1
  System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  System_String_o *v16; // x0
  ServantEntity_o *v18; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t IntValue; // [xsp+18h] [xbp-18h] BYREF
  int32_t v21; // [xsp+1Ch] [xbp-14h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v21 = imageSvtId;
  if ( (byte_418ECF8 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v2);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_20365/*"maleImageId"*/, v7);
    sub_B2C35C(&StringLiteral_3931/*"CharaGraph/100000"*/, v8);
    sub_B2C35C(&StringLiteral_3930/*"CharaGraph/"*/, v9);
    byte_418ECF8 = 1;
  }
  v18 = 0LL;
  entity = 0LL;
  IntValue = 0;
  v10 = System_Int32__ToString((int32_t)&v21, 0LL);
  v11 = System_String__Concat_44305532((System_String_o *)StringLiteral_3930/*"CharaGraph/"*/, v10, 0LL);
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_29;
  if ( UserGameEntity__IsMale((UserGameEntity_o *)SelfUserGame, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_29;
    SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    SelfUserGame,
                                                                    &entity,
                                                                    v21,
                                                                    (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_29;
      IntValue = EntityScriptUtil__GetIntValue(
                   *(System_Collections_Generic_Dictionary_string__object__o **)&entity[1].fields.flag,
                   (System_String_o *)StringLiteral_20365/*"maleImageId"*/,
                   0,
                   0LL);
      if ( IntValue )
      {
        v14 = System_Int32__ToString((int32_t)&IntValue, 0LL);
        v11 = System_String__Concat_44305532((System_String_o *)StringLiteral_3930/*"CharaGraph/"*/, v14, 0LL);
      }
    }
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v11, 0LL) )
    return v11;
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_29;
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)SelfUserGame,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_29;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          SelfUserGame,
          (WarEntity_o **)&v18,
          v21,
          (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_3931/*"CharaGraph/100000"*/;
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)v18;
  if ( !v18 )
    goto LABEL_29;
  SelfUserGame = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEntity__get_IsServantMaterialTd(v18, 0LL);
  if ( ((unsigned __int8)SelfUserGame & 1) == 0 )
    return (System_String_o *)StringLiteral_3931/*"CharaGraph/100000"*/;
  if ( !v18 )
LABEL_29:
    sub_B2C434(SelfUserGame, v13);
  *(_QWORD *)&v22.fields.currentCryptoKey = &v18->fields.baseSvtId;
  *(_QWORD *)&v22.fields.fakeValue = 0LL;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v15);
  v11 = System_String__Concat_44305532((System_String_o *)StringLiteral_3930/*"CharaGraph/"*/, v16, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v11, 0LL) )
    return (System_String_o *)StringLiteral_3931/*"CharaGraph/100000"*/;
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

  if ( (byte_418ECFF & 1) == 0 )
  {
    sub_B2C35C(&UICharaGraphRender_TypeInfo, method);
    byte_418ECFF = 1;
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
  const MethodInfo_1720344 *v10; // x2
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
  if ( (byte_418ED01 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, data);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&UICharaGraphRender_TypeInfo, v6);
    this = (UICharaGraphRender_o *)sub_B2C35C(&StringLiteral_16220/*"a"*/, v7);
    byte_418ED01 = 1;
  }
  if ( v4->fields.baseKind )
  {
    v4->fields.textureImageLimitCount = 0;
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v9 = System_String__Concat_44305532(LastName, (System_String_o *)StringLiteral_16220/*"a"*/, 0LL);
      v10 = (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648;
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(data, v9, v10);
    }
LABEL_22:
    sub_B2C434(this, data);
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
      v20 = sub_B2C460(this);
      sub_B2C400(v20, 0LL);
    }
    p_changeGraphSuffix = (System_String_o **)(v12 + 8 * imageLimitCount + 32);
    if ( !data )
      goto LABEL_22;
  }
  v14 = *p_changeGraphSuffix;
  v15 = AssetData__get_LastName(data, 0LL);
  v16 = System_String__Concat_44305532(v15, v14, 0LL);
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                data,
                                                                v16,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
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
  v9 = System_String__Concat_44305532(v19, v14, 0LL);
  v10 = (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648;
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

  if ( (byte_418ED00 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__, method);
    sub_B2C35C(&UICharaGraphRender_TypeInfo, v3);
    byte_418ED00 = 1;
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
      sub_B2C434(0LL, method);
    *(UnityEngine_Rect_o *)&v6 = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                                   servantBodyRectTable,
                                   this->fields.textureImageLimitCount,
                                   (const MethodInfo_2C2FBF4 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
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
  __int64 v9; // x1
  System_String_o *result; // x0
  int v11; // w20
  int32_t frameType; // w19
  System_String_o *v13; // x19
  System_String_o *v14; // x0
  int32_t AdjustFrameTypeForClass; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418ED07 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v6);
    sub_B2C35C(&StringLiteral_17442/*"class"*/, v7);
    byte_418ED07 = 1;
  }
  AdjustFrameTypeForClass = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v9);
  }
  result = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                this->fields.classId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( result )
  {
    v11 = (int)result;
    frameType = this->fields.frameType;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType, 0LL);
    v13 = System_Int32__ToString((int32_t)&AdjustFrameTypeForClass, 0LL);
    v14 = System_Int32__ToString(v11 + 44, 0LL);
    return System_String__Concat_44308944(
             (System_String_o *)StringLiteral_17442/*"class"*/,
             v13,
             (System_String_o *)StringLiteral_15905/*"_"*/,
             v14,
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
  if ( (byte_418ECF9 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_4169/*"CommandGraph/1000000"*/, v2);
    sub_B2C35C(&StringLiteral_4168/*"CommandGraph/"*/, v3);
    byte_418ECF9 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_44305532((System_String_o *)StringLiteral_4168/*"CommandGraph/"*/, v4, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v5, 0LL) )
    return v5;
  else
    return (System_String_o *)StringLiteral_4169/*"CommandGraph/1000000"*/;
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_String_o *v13; // x0
  ServantEntity_o *v15; // [xsp+0h] [xbp-20h] BYREF
  int32_t key; // [xsp+Ch] [xbp-14h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  key = svtId;
  if ( (byte_418ECFA & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v2);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&StringLiteral_3933/*"CharaGraph/CharaGraphEx/"*/, v5);
    sub_B2C35C(&StringLiteral_3931/*"CharaGraph/100000"*/, v6);
    sub_B2C35C(&StringLiteral_3930/*"CharaGraph/"*/, v7);
    byte_418ECFA = 1;
  }
  v15 = 0LL;
  v8 = System_Int32__ToString((int32_t)&key, 0LL);
  v9 = System_String__Concat_44305532((System_String_o *)StringLiteral_3933/*"CharaGraph/CharaGraphEx/"*/, v8, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v9, 0LL) )
    return v9;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          (WarEntity_o **)&v15,
          key,
          (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_3931/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v15;
  if ( !v15 )
    goto LABEL_19;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd(v15, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_3931/*"CharaGraph/100000"*/;
  if ( !v15 )
LABEL_19:
    sub_B2C434(Instance, v11);
  *(_QWORD *)&v17.fields.currentCryptoKey = &v15->fields.baseSvtId;
  *(_QWORD *)&v17.fields.fakeValue = 0LL;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v17, v12);
  v9 = System_String__Concat_44305532((System_String_o *)StringLiteral_3930/*"CharaGraph/"*/, v13, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v9, 0LL) )
    return (System_String_o *)StringLiteral_3931/*"CharaGraph/100000"*/;
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

  if ( (byte_418ED02 & 1) == 0 )
  {
    sub_B2C35C(&UICharaGraphRender_TypeInfo, method);
    byte_418ED02 = 1;
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
    sub_B2C434(v3, method);
  }
LABEL_12:
  if ( imageLimitCount >= SERVANT_NAME_TARGET_LIMIT_COUNT->max_length )
  {
    v7 = sub_B2C460(v3);
    sub_B2C400(v7, 0LL);
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
  if ( (byte_418ED03 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, data);
    sub_B2C35C(&StringLiteral_16547/*"b"*/, v5);
    this = (UICharaGraphRender_o *)sub_B2C35C(&StringLiteral_21002/*"name"*/, v6);
    byte_418ED03 = 1;
  }
  if ( v4->fields.isEventJoinNameExist )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v8 = &StringLiteral_21002/*"name"*/;
LABEL_6:
      v9 = System_String__Concat_44305532(LastName, (System_String_o *)*v8, 0LL);
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          data,
                                          v9,
                                          (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
    }
    goto LABEL_11;
  }
  if ( !v4->fields.isNameTrue )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v8 = &StringLiteral_16547/*"b"*/;
      goto LABEL_6;
    }
LABEL_11:
    sub_B2C434(this, data);
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
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w20
  ServantLimitMaster_o *v10; // x21
  const MethodInfo *v11; // x1
  unsigned __int32 v12; // s0
  int v14; // s2
  int32_t SaintGraphNameIndex; // w0
  int v17; // w19
  UICharaGraphRender_c *v18; // x0
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  float SERVANT_NAME_UV_DIFF_Y; // s0
  float v21; // s1
  float v22; // s8
  float m_XMin; // s9
  float v24; // s10
  float height; // s3
  float v26; // s4
  float v27; // s5
  float v28; // s6
  float v29; // s7
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s8
  float v34; // s9
  float v35; // s0
  float v36; // s1
  float v37; // s2
  float v38; // s3
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Rect_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  methoda.methodPointer = *(Il2CppMethodPointer *)&defaultValue.fields.m_XMin;
  methoda.invoker_method = *(void **)&defaultValue.fields.m_Width;
  if ( (byte_418ED05 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&UICharaGraphRender_TypeInfo, v5);
    byte_418ED05 = 1;
  }
  entity = 0LL;
  if ( !this->fields.baseKind )
  {
    entity = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             Instance,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      svtId = this->fields.svtId;
      v10 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
      Instance = (DataManager_o *)UICharaGraphRender__GetNameTargetLimitCount(this, v11);
      if ( v10 )
      {
        if ( !ServantLimitMaster__TryGetEntity(v10, &entity, svtId, (int32_t)Instance, 0LL) )
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
              v17 = SaintGraphNameIndex;
              v18 = UICharaGraphRender_TypeInfo;
              if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
              {
                v12 = j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo).n128_u32[0];
                v18 = UICharaGraphRender_TypeInfo;
              }
              static_fields = v18->static_fields;
              if ( v17 < static_fields->MAX_SERVANT_NAME_UV_DIFF_COUNT )
              {
                if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v18);
                  static_fields = UICharaGraphRender_TypeInfo->static_fields;
                }
                SERVANT_NAME_UV_DIFF_Y = static_fields->SERVANT_NAME_UV_DIFF_Y;
                v21 = (float)v17;
                v22 = SERVANT_NAME_UV_DIFF_Y * (float)v17;
                v41.fields.m_XMin = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)(&v14 - 2), &methoda);
                m_XMin = v41.fields.m_XMin;
                v42.fields.m_XMin = UnityEngine_Rect__get_width(v41, &methoda);
                v24 = v42.fields.m_XMin;
                height = UnityEngine_Rect__get_height(v42, &methoda);
                methoda.name = 0LL;
                methoda.klass = 0LL;
                v30 = m_XMin;
                v31 = v22;
                v32 = v24;
                goto LABEL_21;
              }
            }
LABEL_20:
            v43.fields.m_XMin = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v12, &methoda);
            v33 = v43.fields.m_XMin;
            v44.fields.m_XMin = UnityEngine_Rect__get_width(v43, &methoda);
            v34 = v44.fields.m_XMin;
            height = UnityEngine_Rect__get_height(v44, &methoda);
            v31 = 0.0;
            v30 = v33;
            v32 = v34;
            methoda.name = 0LL;
            methoda.klass = 0LL;
LABEL_21:
            UnityEngine_Rect___ctor(*(UnityEngine_Rect_o *)&v30, v26, v27, v28, v29, (const MethodInfo *)&methoda.name);
            goto LABEL_22;
          }
        }
      }
    }
    sub_B2C434(Instance, v7);
  }
  *(_OWORD *)&methoda.name = *(_OWORD *)&methoda.methodPointer;
LABEL_22:
  v36 = *((float *)&methoda.name + 1);
  v35 = *(float *)&methoda.name;
  v38 = *((float *)&methoda.klass + 1);
  v37 = *(float *)&methoda.klass;
  result.fields.m_Height = v38;
  result.fields.m_Width = v37;
  result.fields.m_YMin = v36;
  result.fields.m_XMin = v35;
  return result;
}


System_String_o *__fastcall UICharaGraphRender__GetRaritySprite(UICharaGraphRender_o *this, const MethodInfo *method)
{
  int v2; // w19
  __int64 v3; // x1
  System_String_o *v4; // x20
  System_String_o *v5; // x0

  v2 = (int)this;
  if ( (byte_418ED06 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21703/*"rarity"*/, method);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v3);
    byte_418ED06 = 1;
  }
  v4 = System_Int32__ToString(v2 + 480, 0LL);
  v5 = System_Int32__ToString(v2 + 440, 0LL);
  return System_String__Concat_44308944(
           (System_String_o *)StringLiteral_21703/*"rarity"*/,
           v4,
           (System_String_o *)StringLiteral_15905/*"_"*/,
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
  __int64 v10; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w21
  ServantLimitMaster_o *v13; // x22
  const MethodInfo *v14; // x1
  __int64 *v15; // x20
  System_String_o *LastName; // x0
  System_String_o *v17; // x0
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418ED04 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, data);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_16220/*"a"*/, v7);
    sub_B2C35C(&StringLiteral_21002/*"name"*/, v8);
    byte_418ED04 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  v13 = (ServantLimitMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (DataManager_o *)UICharaGraphRender__GetNameTargetLimitCount(this, v14);
  if ( !v13 )
    goto LABEL_13;
  Instance = (DataManager_o *)ServantLimitMaster__TryGetEntity(v13, &entity, svtId, (int32_t)Instance, 0LL);
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
      v15 = &StringLiteral_16220/*"a"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_B2C434(Instance, v10);
  }
  if ( !data )
    goto LABEL_13;
  v15 = &StringLiteral_21002/*"name"*/;
LABEL_12:
  LastName = AssetData__get_LastName(data, 0LL);
  v17 = System_String__Concat_44305532(LastName, (System_String_o *)*v15, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      data,
                                      v17,
                                      (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
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
void __fastcall UICharaGraphRender__MoveAlpha_35713172(
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
  if ( (byte_418ED08 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, callbackObject);
    byte_418ED08 = 1;
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
      UnityEngine_GameObject__SendMessage_40660564(callbackObject, callbackFunc, 0LL);
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
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v15->fields.eventReceiver,
            (System_Int32_array **)callbackObject,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          v15->fields.callWhenFinished = callbackFunc;
          sub_B2C2F8(
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
        sub_B2C434(v16, v17);
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

  if ( (byte_418ECFB & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v17);
    byte_418ECFB = 1;
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
  UICharaGraphRender__SetCharacter_35708048(this, changeNameType, saintGraphType, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_35708048(
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
  __int64 rarity; // x1
  ServantEntity_o *v24; // x21
  ServantLimitEntity_o *v25; // x24
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

  if ( (byte_418ECFD & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&changeNameType);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExceedMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__string____ContainsKey__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__string____get_Item__, v16);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v17);
    sub_B2C35C(&Rarity_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&UICharaGraphRender_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_1/*""*/, v21);
    byte_418ECFD = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_77;
  v24 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             this->fields.svtId,
                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_77;
  v25 = ServantLimitMaster__GetEntity(
          (ServantLimitMaster_o *)Instance,
          this->fields.svtId,
          this->fields.limitCount,
          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v24 )
    goto LABEL_77;
  this->fields.svtType = v24->fields.type;
  this->fields.classId = v24->fields.classId;
  if ( !v25 )
    goto LABEL_77;
  rarity = (unsigned int)v25->fields.rarity;
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
    v29 = v25->fields.rarity;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    frameType = Rarity__getFrameTypeImage(v29, 0, 0LL);
  }
  exceedCount = this->fields.exceedCount;
  this->fields.frameType = frameType;
  if ( exceedCount >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
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
           (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__string____ContainsKey__) )
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
                                    (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__string____get_Item__);
      if ( !Instance )
        goto LABEL_77;
      v42 = this->fields.frameType;
      if ( (unsigned int)v42 < LODWORD(Instance->fields.datalist) )
      {
        v43 = &Instance->klass + v42;
        goto LABEL_43;
      }
LABEL_78:
      v72 = sub_B2C460(Instance);
      sub_B2C400(v72, 0LL);
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
  sub_B2C2F8(
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
    Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
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
  if ( ServantEntity__get_IsCombineMaterial(v24, 0LL) )
    v49 = -1;
  else
    v49 = ServantEntity__get_IsServantMaterialTd(v24, 0LL) << 31 >> 31;
  this->fields.atk = v49;
  this->fields.hp = v49;
  this->fields.adjustHp = 0;
  this->fields.adjustAtk = 0;
  this->fields.realNameCheck = changeNameType;
  this->fields.saintGraphType = saintGraphType;
  this->fields.isEventJoinNameExist = 0;
  EventJoinNameExistSvtId = ServantEntity__GetEventJoinNameExistSvtId(v24, 0LL);
  if ( EventJoinNameExistSvtId >= 1 )
  {
    this->fields.imageSvtId = EventJoinNameExistSvtId;
    this->fields.isEventJoinNameExist = 1;
  }
  this->fields.isChangeGraph = 0;
  v57 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.changeGraphSuffix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.changeGraphSuffix, v57, v51, v52, v53, v54, v55, v56);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_77;
  if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v63, 0LL, 0, 0LL) )
    goto LABEL_73;
  this->fields.isChangeGraph = 1;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_77:
    sub_B2C434(Instance, rarity);
  v64 = ServantLimitEntity__GetChangeGraphSuffix(entity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.changeGraphSuffix = v64;
  sub_B2C2F8(
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
    LOBYTE(v71) = ServantEntity__IsNameTrue(v24, 0LL);
  else
    v71 = 0x100u >> (8 * (changeNameType - 1));
  this->fields.isNameTrue = v71;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_35709548(
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
  __int64 v23; // x1
  BalanceConfig_c *v24; // x0
  int32_t v25; // w8
  int32_t imageLimitCounta; // [xsp+Ch] [xbp-44h] BYREF

  imageLimitCounta = imageLimitCount;
  if ( (byte_418ECFC & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&UICharaGraphRender_TypeInfo, v19);
    byte_418ECFC = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v23);
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
  v24 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  if ( v24->static_fields->ServantLimitMax < limitCount )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      limitCount = v24->static_fields->ServantLimitMax;
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        limitCount = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
      }
    }
    else
    {
      limitCount = v24->static_fields->ServantLimitMax;
    }
  }
  this->fields.limitCount = limitCount;
  v25 = imageLimitCounta;
  this->fields.exceedCount = exceedCount;
  this->fields.imageLimitCount = v25;
  this->fields.lv = lv;
  UICharaGraphRender__SetCharacter_35708048(
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
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t rarity; // w8
  __int64 v17; // x9
  struct System_String_o *v18; // x1
  __int64 v19; // x0

  if ( (byte_418ECFE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&UICharaGraphRender_TypeInfo, v7);
    byte_418ECFE = 1;
  }
  this->fields.commandCodeId = commandCodeId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               this->fields.commandCodeId,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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
  v17 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 128LL);
  if ( !v17 )
LABEL_12:
    sub_B2C434(Instance, v9);
  if ( (unsigned int)rarity >= *(_DWORD *)(v17 + 24) )
  {
    v19 = sub_B2C460(Instance);
    sub_B2C400(v19, 0LL);
  }
  v18 = *(struct System_String_o **)(v17 + 8LL * rarity + 32);
  this->fields.frameName = v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.frameName,
    (System_Int32_array **)v18,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  *(_OWORD *)&this->fields.atk = xmmword_2FFCFA0;
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
    sub_B2C434(0LL, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0LL) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    UICharaGraphRender__SetLayer_35713736(this, transform, layer, v8);
  }
}


void __fastcall UICharaGraphRender__SetLayer_35713736(
        UICharaGraphRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  System_Collections_IEnumerator_c *v17; // x8
  unsigned __int64 v18; // x10
  System_Collections_IEnumerator_c **v19; // x11
  __int64 v20; // x0
  UnityEngine_Transform_o *v21; // x0
  const MethodInfo *v22; // x3
  __int64 v23; // x10
  __int64 v24; // x0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x19
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0

  v6 = this;
  if ( (byte_418ED09 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, tf);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (UICharaGraphRender_o *)sub_B2C35C(&UnityEngine_Transform_TypeInfo, v8);
    byte_418ED09 = 1;
  }
  if ( !tf
    || (this = (UICharaGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_33:
    sub_B2C434(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        v19 += 2;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
    }
    else
    {
LABEL_17:
      v20 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v16);
    }
    v21 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      v23 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v23
        || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[v23 - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_B2C728(v21);
        goto LABEL_33;
      }
    }
    UICharaGraphRender__SetLayer_35713736(v6, v21, layer, v22);
  }
  v24 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v24 )
  {
    v26 = *(_QWORD *)v24;
    v27 = v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_28;
      }
      v30 = v26 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_28:
      v30 = sub_AC5258(v24, System_IDisposable_TypeInfo, 0LL, v25);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
}