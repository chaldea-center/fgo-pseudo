void __fastcall ShopHelpListViewManager___ctor(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct System_String_array *v57; // x20
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct System_String_array *v78; // x20
  System_Int32_array **v79; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x1
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  struct ShopHelpItemInfo_array *v93; // x20
  __int64 v94; // x1
  __int64 v95; // x2
  ShopHelpItemInfo_o *v96; // x21
  const MethodInfo *v97; // x5
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  __int64 v104; // x1
  __int64 v105; // x2
  ShopHelpItemInfo_o *v106; // x21
  const MethodInfo *v107; // x5
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  __int64 v114; // x1
  __int64 v115; // x2
  ShopHelpItemInfo_o *v116; // x21
  const MethodInfo *v117; // x5
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  __int64 v124; // x1
  __int64 v125; // x2
  ShopHelpItemInfo_o *v126; // x21
  const MethodInfo *v127; // x5
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  __int64 v134; // x1
  __int64 v135; // x2
  ShopHelpItemInfo_o *v136; // x21
  const MethodInfo *v137; // x5
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  __int64 v144; // x1
  __int64 v145; // x2
  ShopHelpItemInfo_o *v146; // x21
  const MethodInfo *v147; // x5
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  __int64 v154; // x1
  __int64 v155; // x2
  ShopHelpItemInfo_o *v156; // x21
  const MethodInfo *v157; // x5
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  __int64 v164; // x1
  __int64 v165; // x2
  ShopHelpItemInfo_o *v166; // x21
  const MethodInfo *v167; // x5
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  __int64 v174; // x1
  __int64 v175; // x2
  ShopHelpItemInfo_o *v176; // x21
  const MethodInfo *v177; // x5
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  __int64 v184; // x1
  __int64 v185; // x2
  ShopHelpItemInfo_o *v186; // x21
  const MethodInfo *v187; // x5
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  __int64 v194; // x1
  __int64 v195; // x2
  ShopHelpItemInfo_o *v196; // x21
  const MethodInfo *v197; // x5
  System_String_array **v198; // x2
  System_String_array **v199; // x3
  System_Boolean_array **v200; // x4
  System_Int32_array **v201; // x5
  System_Int32_array *v202; // x6
  System_Int32_array *v203; // x7
  __int64 v204; // x1
  __int64 v205; // x2
  ShopHelpItemInfo_o *v206; // x21
  const MethodInfo *v207; // x5
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  __int64 v214; // x1
  __int64 v215; // x2
  ShopHelpItemInfo_o *v216; // x21
  const MethodInfo *v217; // x5
  System_String_array **v218; // x2
  System_String_array **v219; // x3
  System_Boolean_array **v220; // x4
  System_Int32_array **v221; // x5
  System_Int32_array *v222; // x6
  System_Int32_array *v223; // x7
  __int64 v224; // x1
  __int64 v225; // x2
  ShopHelpItemInfo_o *v226; // x21
  const MethodInfo *v227; // x5
  System_String_array **v228; // x2
  System_String_array **v229; // x3
  System_Boolean_array **v230; // x4
  System_Int32_array **v231; // x5
  System_Int32_array *v232; // x6
  System_Int32_array *v233; // x7
  __int64 v234; // x1
  __int64 v235; // x2
  ShopHelpItemInfo_o *v236; // x21
  const MethodInfo *v237; // x5
  System_String_array **v238; // x2
  System_String_array **v239; // x3
  System_Boolean_array **v240; // x4
  System_Int32_array **v241; // x5
  System_Int32_array *v242; // x6
  System_Int32_array *v243; // x7
  __int64 v244; // x1
  __int64 v245; // x2
  ShopHelpItemInfo_o *v246; // x21
  const MethodInfo *v247; // x5
  System_String_array **v248; // x2
  System_String_array **v249; // x3
  System_Boolean_array **v250; // x4
  System_Int32_array **v251; // x5
  System_Int32_array *v252; // x6
  System_Int32_array *v253; // x7
  __int64 v254; // x1
  __int64 v255; // x2
  ShopHelpItemInfo_o *v256; // x21
  const MethodInfo *v257; // x5
  System_String_array **v258; // x2
  System_String_array **v259; // x3
  System_Boolean_array **v260; // x4
  System_Int32_array **v261; // x5
  System_Int32_array *v262; // x6
  System_Int32_array *v263; // x7
  __int64 v264; // x1
  __int64 v265; // x2
  ShopHelpItemInfo_o *v266; // x21
  const MethodInfo *v267; // x5
  System_String_array **v268; // x2
  System_String_array **v269; // x3
  System_Boolean_array **v270; // x4
  System_Int32_array **v271; // x5
  System_Int32_array *v272; // x6
  System_Int32_array *v273; // x7
  __int64 v274; // x1
  __int64 v275; // x2
  ShopHelpItemInfo_o *v276; // x21
  const MethodInfo *v277; // x5
  System_String_array **v278; // x2
  System_String_array **v279; // x3
  System_Boolean_array **v280; // x4
  System_Int32_array **v281; // x5
  System_Int32_array *v282; // x6
  System_Int32_array *v283; // x7
  __int64 v284; // x1
  __int64 v285; // x2
  ShopHelpItemInfo_o *v286; // x21
  const MethodInfo *v287; // x5
  System_String_array **v288; // x2
  System_String_array **v289; // x3
  System_Boolean_array **v290; // x4
  System_Int32_array **v291; // x5
  System_Int32_array *v292; // x6
  System_Int32_array *v293; // x7
  System_String_array **v294; // x2
  System_String_array **v295; // x3
  System_Boolean_array **v296; // x4
  System_Int32_array **v297; // x5
  System_Int32_array *v298; // x6
  System_Int32_array *v299; // x7
  System_Array_o *v300; // x20
  System_String_array **v301; // x2
  System_String_array **v302; // x3
  System_Boolean_array **v303; // x4
  System_Int32_array **v304; // x5
  System_Int32_array *v305; // x6
  System_Int32_array *v306; // x7
  __int64 v307; // x0
  __int64 v308; // x0
  System_RuntimeFieldHandle_o v309; // 0:w1.4

  if ( (byte_42160A8 & 1) == 0 )
  {
    sub_B0D8A4(&ShopHelpItemInfo_ItemKind___TypeInfo, method);
    sub_B0D8A4(&ShopHelpItemInfo___TypeInfo, v3);
    sub_B0D8A4(&ShopHelpItemInfo_TypeInfo, v4);
    sub_B0D8A4(&string___TypeInfo, v5);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335,
      v6);
    sub_B0D8A4(&StringLiteral_12192/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/, v7);
    sub_B0D8A4(&StringLiteral_12201/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/, v8);
    sub_B0D8A4(&StringLiteral_14622/*"Tutorial/tutorial_alpha"*/, v9);
    sub_B0D8A4(&StringLiteral_19675/*"img_shop_15"*/, v10);
    sub_B0D8A4(&StringLiteral_19684/*"img_shop_7"*/, v11);
    sub_B0D8A4(&StringLiteral_19671/*"img_shop_11"*/, v12);
    sub_B0D8A4(&StringLiteral_12186/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/, v13);
    sub_B0D8A4(&StringLiteral_12191/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/, v14);
    sub_B0D8A4(&StringLiteral_12193/*"SHOP_HELP_SHOP04_SHOP_EXPLANATION"*/, v15);
    sub_B0D8A4(&StringLiteral_19681/*"img_shop_22"*/, v16);
    sub_B0D8A4(&StringLiteral_12197/*"SHOP_HELP_START_UP_SUMMON"*/, v17);
    sub_B0D8A4(&StringLiteral_22903/*"tutorial_0006"*/, v18);
    sub_B0D8A4(&StringLiteral_12183/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/, v19);
    sub_B0D8A4(&StringLiteral_12189/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/, v20);
    sub_B0D8A4(&StringLiteral_12185/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/, v21);
    sub_B0D8A4(&StringLiteral_12194/*"SHOP_HELP_SHOP13_EXPLANATION"*/, v22);
    sub_B0D8A4(&StringLiteral_19673/*"img_shop_13"*/, v23);
    sub_B0D8A4(&StringLiteral_19686/*"img_shop_9"*/, v24);
    sub_B0D8A4(&StringLiteral_12199/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/, v25);
    sub_B0D8A4(&StringLiteral_12200/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/, v26);
    sub_B0D8A4(&StringLiteral_19670/*"img_shop_10"*/, v27);
    sub_B0D8A4(&StringLiteral_12188/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/, v28);
    sub_B0D8A4(&StringLiteral_19676/*"img_shop_16"*/, v29);
    sub_B0D8A4(&StringLiteral_19677/*"img_shop_17"*/, v30);
    sub_B0D8A4(&StringLiteral_19679/*"img_shop_20"*/, v31);
    sub_B0D8A4(&StringLiteral_19685/*"img_shop_8"*/, v32);
    sub_B0D8A4(&StringLiteral_19683/*"img_shop_4"*/, v33);
    sub_B0D8A4(&StringLiteral_12184/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/, v34);
    sub_B0D8A4(&StringLiteral_19680/*"img_shop_21"*/, v35);
    sub_B0D8A4(&StringLiteral_19678/*"img_shop_18"*/, v36);
    sub_B0D8A4(&StringLiteral_12196/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/, v37);
    sub_B0D8A4(&StringLiteral_12187/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/, v38);
    sub_B0D8A4(&StringLiteral_19682/*"img_shop_3"*/, v39);
    sub_B0D8A4(&StringLiteral_19668/*"img_shop_0"*/, v40);
    sub_B0D8A4(&StringLiteral_14621/*"Tutorial/tutorial_0006"*/, v41);
    sub_B0D8A4(&StringLiteral_1/*""*/, v42);
    sub_B0D8A4(&StringLiteral_19674/*"img_shop_14"*/, v43);
    sub_B0D8A4(&StringLiteral_12198/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/, v44);
    sub_B0D8A4(&StringLiteral_19669/*"img_shop_1"*/, v45);
    sub_B0D8A4(&StringLiteral_22904/*"tutorial_alpha"*/, v46);
    sub_B0D8A4(&StringLiteral_12190/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/, v47);
    sub_B0D8A4(&StringLiteral_19672/*"img_shop_12"*/, v48);
    sub_B0D8A4(&StringLiteral_12195/*"SHOP_HELP_SHOP15_EXPLANATION"*/, v49);
    byte_42160A8 = 1;
  }
  v50 = sub_B0D8BC(string___TypeInfo, 2LL);
  if ( !v50 )
    goto LABEL_89;
  v57 = (struct System_String_array *)v50;
  v50 = StringLiteral_14621/*"Tutorial/tutorial_0006"*/;
  if ( StringLiteral_14621/*"Tutorial/tutorial_0006"*/ )
  {
    v50 = sub_B0D964(StringLiteral_14621/*"Tutorial/tutorial_0006"*/, v57->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
    v58 = (System_Int32_array **)StringLiteral_14621/*"Tutorial/tutorial_0006"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( !v57->max_length )
    goto LABEL_87;
  v57->m_Items[0] = (System_String_o *)v58;
  sub_B0D840((BattleServantConfConponent_o *)v57->m_Items, v58, v51, v52, v53, v54, v55, v56);
  v50 = StringLiteral_14622/*"Tutorial/tutorial_alpha"*/;
  if ( StringLiteral_14622/*"Tutorial/tutorial_alpha"*/ )
  {
    v50 = sub_B0D964(StringLiteral_14622/*"Tutorial/tutorial_alpha"*/, v57->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
    v65 = (System_Int32_array **)StringLiteral_14622/*"Tutorial/tutorial_alpha"*/;
  }
  else
  {
    v65 = 0LL;
  }
  if ( v57->max_length <= 1 )
    goto LABEL_87;
  v57->m_Items[1] = (System_String_o *)v65;
  sub_B0D840((BattleServantConfConponent_o *)&v57->m_Items[1], v65, v59, v60, v61, v62, v63, v64);
  this->fields.helpBasePaths = v57;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.helpBasePaths,
    (System_Int32_array **)v57,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v50 = sub_B0D8BC(string___TypeInfo, 2LL);
  if ( !v50 )
    goto LABEL_89;
  v78 = (struct System_String_array *)v50;
  v50 = StringLiteral_22903/*"tutorial_0006"*/;
  if ( StringLiteral_22903/*"tutorial_0006"*/ )
  {
    v50 = sub_B0D964(StringLiteral_22903/*"tutorial_0006"*/, v78->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
    v79 = (System_Int32_array **)StringLiteral_22903/*"tutorial_0006"*/;
  }
  else
  {
    v79 = 0LL;
  }
  if ( !v78->max_length )
    goto LABEL_87;
  v78->m_Items[0] = (System_String_o *)v79;
  sub_B0D840((BattleServantConfConponent_o *)v78->m_Items, v79, v72, v73, v74, v75, v76, v77);
  v50 = StringLiteral_22904/*"tutorial_alpha"*/;
  if ( StringLiteral_22904/*"tutorial_alpha"*/ )
  {
    v50 = sub_B0D964(StringLiteral_22904/*"tutorial_alpha"*/, v78->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
    v86 = (System_Int32_array **)StringLiteral_22904/*"tutorial_alpha"*/;
  }
  else
  {
    v86 = 0LL;
  }
  if ( v78->max_length <= 1 )
    goto LABEL_87;
  v78->m_Items[1] = (System_String_o *)v86;
  sub_B0D840((BattleServantConfConponent_o *)&v78->m_Items[1], v86, v80, v81, v82, v83, v84, v85);
  this->fields.helpBaseNames = v78;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.helpBaseNames,
    (System_Int32_array **)v78,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  v93 = (struct ShopHelpItemInfo_array *)sub_B0D8BC(ShopHelpItemInfo___TypeInfo, 20LL);
  v96 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v94, v95);
  ShopHelpItemInfo___ctor(
    v96,
    1,
    (System_String_o *)StringLiteral_12186/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19685/*"img_shop_8"*/,
    2,
    v97);
  if ( !v93 )
LABEL_89:
    sub_B0D97C(v50);
  if ( v96 )
  {
    v50 = sub_B0D964(v96, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( !v93->max_length )
    goto LABEL_87;
  v93->m_Items[0] = v96;
  sub_B0D840((BattleServantConfConponent_o *)v93->m_Items, (System_Int32_array **)v96, v98, v99, v100, v101, v102, v103);
  v106 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v104, v105);
  ShopHelpItemInfo___ctor(
    v106,
    16,
    (System_String_o *)StringLiteral_12197/*"SHOP_HELP_START_UP_SUMMON"*/,
    (System_String_o *)StringLiteral_19677/*"img_shop_17"*/,
    2,
    v107);
  if ( v106 )
  {
    v50 = sub_B0D964(v106, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 1 )
    goto LABEL_87;
  v93->m_Items[1] = v106;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[1],
    (System_Int32_array **)v106,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  v116 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v114, v115);
  ShopHelpItemInfo___ctor(
    v116,
    2,
    (System_String_o *)StringLiteral_12191/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19683/*"img_shop_4"*/,
    2,
    v117);
  if ( v116 )
  {
    v50 = sub_B0D964(v116, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 2 )
    goto LABEL_87;
  v93->m_Items[2] = v116;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[2],
    (System_Int32_array **)v116,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  v126 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v124, v125);
  ShopHelpItemInfo___ctor(
    v126,
    3,
    (System_String_o *)StringLiteral_12189/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19682/*"img_shop_3"*/,
    1,
    v127);
  if ( v126 )
  {
    v50 = sub_B0D964(v126, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 3 )
    goto LABEL_87;
  v93->m_Items[3] = v126;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[3],
    (System_Int32_array **)v126,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
  v136 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v134, v135);
  ShopHelpItemInfo___ctor(
    v136,
    4,
    (System_String_o *)StringLiteral_12190/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19671/*"img_shop_11"*/,
    2,
    v137);
  if ( v136 )
  {
    v50 = sub_B0D964(v136, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 4 )
    goto LABEL_87;
  v93->m_Items[4] = v136;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[4],
    (System_Int32_array **)v136,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  v146 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v144, v145);
  ShopHelpItemInfo___ctor(
    v146,
    5,
    (System_String_o *)StringLiteral_12198/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19686/*"img_shop_9"*/,
    1,
    v147);
  if ( v146 )
  {
    v50 = sub_B0D964(v146, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 5 )
    goto LABEL_87;
  v93->m_Items[5] = v146;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[5],
    (System_Int32_array **)v146,
    v148,
    v149,
    v150,
    v151,
    v152,
    v153);
  v156 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v154, v155);
  ShopHelpItemInfo___ctor(
    v156,
    6,
    (System_String_o *)StringLiteral_12199/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19669/*"img_shop_1"*/,
    1,
    v157);
  if ( v156 )
  {
    v50 = sub_B0D964(v156, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 6 )
    goto LABEL_87;
  v93->m_Items[6] = v156;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[6],
    (System_Int32_array **)v156,
    v158,
    v159,
    v160,
    v161,
    v162,
    v163);
  v166 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v164, v165);
  ShopHelpItemInfo___ctor(
    v166,
    7,
    (System_String_o *)StringLiteral_12192/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19672/*"img_shop_12"*/,
    1,
    v167);
  if ( v166 )
  {
    v50 = sub_B0D964(v166, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 7 )
    goto LABEL_87;
  v93->m_Items[7] = v166;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[7],
    (System_Int32_array **)v166,
    v168,
    v169,
    v170,
    v171,
    v172,
    v173);
  v176 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v174, v175);
  ShopHelpItemInfo___ctor(
    v176,
    8,
    (System_String_o *)StringLiteral_12185/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19673/*"img_shop_13"*/,
    1,
    v177);
  if ( v176 )
  {
    v50 = sub_B0D964(v176, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 8 )
    goto LABEL_87;
  v93->m_Items[8] = v176;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[8],
    (System_Int32_array **)v176,
    v178,
    v179,
    v180,
    v181,
    v182,
    v183);
  v186 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v184, v185);
  ShopHelpItemInfo___ctor(
    v186,
    11,
    (System_String_o *)StringLiteral_12183/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19670/*"img_shop_10"*/,
    1,
    v187);
  if ( v186 )
  {
    v50 = sub_B0D964(v186, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 9 )
    goto LABEL_87;
  v93->m_Items[9] = v186;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[9],
    (System_Int32_array **)v186,
    v188,
    v189,
    v190,
    v191,
    v192,
    v193);
  v196 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v194, v195);
  ShopHelpItemInfo___ctor(
    v196,
    13,
    (System_String_o *)StringLiteral_12196/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19674/*"img_shop_14"*/,
    2,
    v197);
  if ( v196 )
  {
    v50 = sub_B0D964(v196, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 0xA )
    goto LABEL_87;
  v93->m_Items[10] = v196;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[10],
    (System_Int32_array **)v196,
    v198,
    v199,
    v200,
    v201,
    v202,
    v203);
  v206 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v204, v205);
  ShopHelpItemInfo___ctor(
    v206,
    12,
    (System_String_o *)StringLiteral_12200/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19684/*"img_shop_7"*/,
    1,
    v207);
  if ( v206 )
  {
    v50 = sub_B0D964(v206, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 0xB )
    goto LABEL_87;
  v93->m_Items[11] = v206;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[11],
    (System_Int32_array **)v206,
    v208,
    v209,
    v210,
    v211,
    v212,
    v213);
  v216 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v214, v215);
  ShopHelpItemInfo___ctor(
    v216,
    14,
    (System_String_o *)StringLiteral_12188/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19675/*"img_shop_15"*/,
    1,
    v217);
  if ( v216 )
  {
    v50 = sub_B0D964(v216, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 0xC )
    goto LABEL_87;
  v93->m_Items[12] = v216;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[12],
    (System_Int32_array **)v216,
    v218,
    v219,
    v220,
    v221,
    v222,
    v223);
  v226 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v224, v225);
  ShopHelpItemInfo___ctor(
    v226,
    15,
    (System_String_o *)StringLiteral_12193/*"SHOP_HELP_SHOP04_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19676/*"img_shop_16"*/,
    2,
    v227);
  if ( v226 )
  {
    v50 = sub_B0D964(v226, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 0xD )
    goto LABEL_87;
  v93->m_Items[13] = v226;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[13],
    (System_Int32_array **)v226,
    v228,
    v229,
    v230,
    v231,
    v232,
    v233);
  v236 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v234, v235);
  ShopHelpItemInfo___ctor(
    v236,
    17,
    (System_String_o *)StringLiteral_12184/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19677/*"img_shop_17"*/,
    2,
    v237);
  if ( v236 )
  {
    v50 = sub_B0D964(v236, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 0xE )
    goto LABEL_87;
  v93->m_Items[14] = v236;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[14],
    (System_Int32_array **)v236,
    v238,
    v239,
    v240,
    v241,
    v242,
    v243);
  v246 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v244, v245);
  ShopHelpItemInfo___ctor(
    v246,
    18,
    (System_String_o *)StringLiteral_12194/*"SHOP_HELP_SHOP13_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19678/*"img_shop_18"*/,
    1,
    v247);
  if ( v246 )
  {
    v50 = sub_B0D964(v246, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 0xF )
    goto LABEL_87;
  v93->m_Items[15] = v246;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[15],
    (System_Int32_array **)v246,
    v248,
    v249,
    v250,
    v251,
    v252,
    v253);
  v256 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v254, v255);
  ShopHelpItemInfo___ctor(
    v256,
    19,
    (System_String_o *)StringLiteral_12201/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19679/*"img_shop_20"*/,
    2,
    v257);
  if ( v256 )
  {
    v50 = sub_B0D964(v256, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 0x10 )
    goto LABEL_87;
  v93->m_Items[16] = v256;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[16],
    (System_Int32_array **)v256,
    v258,
    v259,
    v260,
    v261,
    v262,
    v263);
  v266 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v264, v265);
  ShopHelpItemInfo___ctor(
    v266,
    20,
    (System_String_o *)StringLiteral_12195/*"SHOP_HELP_SHOP15_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19680/*"img_shop_21"*/,
    2,
    v267);
  if ( v266 )
  {
    v50 = sub_B0D964(v266, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 0x11 )
    goto LABEL_87;
  v93->m_Items[17] = v266;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[17],
    (System_Int32_array **)v266,
    v268,
    v269,
    v270,
    v271,
    v272,
    v273);
  v276 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v274, v275);
  ShopHelpItemInfo___ctor(
    v276,
    21,
    (System_String_o *)StringLiteral_12187/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19681/*"img_shop_22"*/,
    2,
    v277);
  if ( v276 )
  {
    v50 = sub_B0D964(v276, v93->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v93->max_length <= 0x12 )
    goto LABEL_87;
  v93->m_Items[18] = v276;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[18],
    (System_Int32_array **)v276,
    v278,
    v279,
    v280,
    v281,
    v282,
    v283);
  v286 = (ShopHelpItemInfo_o *)sub_B0D974(ShopHelpItemInfo_TypeInfo, v284, v285);
  ShopHelpItemInfo___ctor(v286, 22, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_19668/*"img_shop_0"*/, 1, v287);
  if ( v286 )
  {
    v50 = sub_B0D964(v286, v93->obj.klass->_1.element_class);
    if ( !v50 )
    {
LABEL_88:
      v308 = sub_B0D99C(v50);
      sub_B0D948(v308, 0LL);
    }
  }
  if ( v93->max_length <= 0x13 )
  {
LABEL_87:
    v307 = sub_B0D9A8(v50);
    sub_B0D948(v307, 0LL);
  }
  v93->m_Items[19] = v286;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v93->m_Items[19],
    (System_Int32_array **)v286,
    v288,
    v289,
    v290,
    v291,
    v292,
    v293);
  this->fields.itemInfoList = v93;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemInfoList,
    (System_Int32_array **)v93,
    v294,
    v295,
    v296,
    v297,
    v298,
    v299);
  v300 = (System_Array_o *)sub_B0D8BC(ShopHelpItemInfo_ItemKind___TypeInfo, 18LL);
  v309.fields.value = Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v300, v309, 0LL);
  this->fields.kinds = (struct ShopHelpItemInfo_ItemKind_array *)v300;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.kinds,
    (System_Int32_array **)v300,
    v301,
    v302,
    v303,
    v304,
    v305,
    v306);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopHelpListViewManager__CallOnFadeOut(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *onFadeOut; // x19
  BattleServantConfConponent_o *p_onFadeOut; // x0

  onFadeOut = this->fields.onFadeOut;
  if ( onFadeOut )
  {
    p_onFadeOut = (BattleServantConfConponent_o *)&this->fields.onFadeOut;
    p_onFadeOut->klass = 0LL;
    sub_B0D840(p_onFadeOut, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onFadeOut, 0LL);
  }
}


void __fastcall ShopHelpListViewManager__CloseHelpDialog(
        ShopHelpListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  ShopHelpMenu_o *baseDialog; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x21
  __int64 v15; // x0
  const MethodInfo *v16; // x2

  if ( (byte_42160A6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_ShopHelpListViewManager_CallOnFadeOut__, v10);
    byte_42160A6 = 1;
  }
  this->fields.onFadeOut = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onFadeOut,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseDialog = this->fields.baseDialog;
  v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0LL);
  if ( !baseDialog )
    sub_B0D97C(v15);
  ShopHelpMenu__Close(baseDialog, v14, v16);
}


void __fastcall ShopHelpListViewManager__CreateList(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BaseDialog_o *baseDialog; // x0
  struct ShopHelpItemInfo_ItemKind_array *kinds; // x8
  __int64 v17; // x1
  __int64 v18; // x2
  struct ShopHelpItemInfo_ItemKind_array *v19; // x24
  __int64 v20; // x8
  unsigned __int64 v21; // x25
  int32_t v22; // w21
  ShopRootConstants_c *v23; // x0
  const MethodInfo *v24; // x1
  struct ShopHelpItemInfo_array *itemInfoList; // x11
  unsigned __int64 max_length; // x8
  unsigned __int64 v27; // x9
  ShopHelpItemInfo_o **m_Items; // x11
  ShopHelpItemInfo_o *v29; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x21
  int32_t size; // w22
  __int64 v32; // x23
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x0

  if ( (byte_42160A5 & 1) == 0 )
  {
    sub_B0D8A4(&CoinRoomUtility_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_ShopMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_B0D8A4(&ShopHelpListViewItem_TypeInfo, v13);
    sub_B0D8A4(&ShopRootConstants_TypeInfo, v14);
    byte_42160A5 = 1;
  }
  this->fields.onFadeOut = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.onFadeOut, 0LL, v2, v3, v4, v5, v6, v7);
  baseDialog = (BaseDialog_o *)this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_40;
  BaseDialog__Open(baseDialog, 0LL, 0, 0LL);
  kinds = this->fields.kinds;
  if ( !kinds )
    goto LABEL_40;
  ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0LL);
  v19 = this->fields.kinds;
  if ( !v19 )
    goto LABEL_40;
  v20 = *(_QWORD *)&v19->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v20 )
      {
LABEL_39:
        v39 = sub_B0D9A8(baseDialog);
        sub_B0D948(v39, 0LL);
      }
      v22 = v19->m_Items[v21 + 1];
      switch ( v22 )
      {
        case 15:
          v23 = ShopRootConstants_TypeInfo;
          if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ShopRootConstants_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          }
          baseDialog = (BaseDialog_o *)ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v23);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_37;
          goto LABEL_27;
        case 16:
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          baseDialog = (BaseDialog_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ShopMaster___);
          if ( !baseDialog )
            goto LABEL_40;
          baseDialog = (BaseDialog_o *)ShopMaster__IsEnableEventShop_27312364((ShopMaster_o *)baseDialog, v24);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_37;
LABEL_27:
          itemInfoList = this->fields.itemInfoList;
          if ( !itemInfoList )
            goto LABEL_40;
          max_length = itemInfoList->max_length;
          if ( (__int64)(max_length << 32) < 1 )
            goto LABEL_37;
          v27 = 0LL;
          m_Items = itemInfoList->m_Items;
          break;
        case 17:
          if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
          }
          baseDialog = (BaseDialog_o *)CoinRoomUtility__IsTargetQuestClear(0LL);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_37;
          goto LABEL_27;
        case 20:
          baseDialog = (BaseDialog_o *)ConstantMaster__IsFLAG20230402(0LL);
          if ( ((unsigned __int8)baseDialog & 1) != 0 )
            goto LABEL_27;
          goto LABEL_37;
        default:
          goto LABEL_27;
      }
      while ( 1 )
      {
        if ( v27 >= max_length )
          goto LABEL_39;
        v29 = m_Items[v27];
        if ( v29 )
        {
          if ( v29->fields._Kind_k__BackingField == v22 )
            break;
        }
        if ( (__int64)++v27 >= (int)max_length )
          goto LABEL_37;
      }
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v32 = sub_B0D974(ShopHelpListViewItem_TypeInfo, v17, v18);
      ListViewItem___ctor_23700744((ListViewItem_o *)v32, size, 0LL);
      *(_QWORD *)(v32 + 112) = v29;
      sub_B0D840((BattleServantConfConponent_o *)(v32 + 112), (System_Int32_array **)v29, v33, v34, v35, v36, v37, v38);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
LABEL_37:
      LODWORD(v20) = v19->max_length;
      if ( (__int64)++v21 >= (int)v20 )
        goto LABEL_38;
    }
LABEL_40:
    sub_B0D97C(baseDialog);
  }
LABEL_38:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ShopHelpListViewManager__DestroyList(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


UnityEngine_Texture2D_o *__fastcall ShopHelpListViewManager__GetAssetStorageTexture2D(
        ShopHelpListViewManager_o *this,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  AssetData_o *AssetStorage; // x0

  if ( (byte_42160A3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, path);
    sub_B0D8A4(&AssetManager_TypeInfo, v6);
    byte_42160A3 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( !AssetStorage )
    sub_B0D97C(0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
}


void __fastcall ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_array *helpBasePaths; // x20
  System_Action_o *v7; // x21

  if ( (byte_42160A1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v4);
    sub_B0D8A4(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, v5);
    byte_42160A1 = 1;
  }
  if ( !this->fields.initMode )
  {
    this->fields.initMode = 1;
    helpBasePaths = this->fields.helpBasePaths;
    v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage_29522920(helpBasePaths, v7, 1, 0LL);
  }
}


void __fastcall ShopHelpListViewManager__ReleaseAssetStorages(
        ShopHelpListViewManager_o *this,
        System_String_array *paths,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  System_String_o *v6; // x20
  __int64 v7; // x0

  if ( (byte_42160A4 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_B0D8A4(&AssetManager_TypeInfo, paths);
    byte_42160A4 = 1;
  }
  if ( !paths )
    sub_B0D97C(this);
  v4 = *(_QWORD *)&paths->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)v4 )
      {
        v7 = sub_B0D9A8(this);
        sub_B0D948(v7, 0LL);
      }
      v6 = paths->m_Items[v5];
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage(v6, 0LL);
      LODWORD(v4) = paths->max_length;
      ++v5;
    }
    while ( (__int64)v5 < (int)v4 );
  }
}


void __fastcall ShopHelpListViewManager__ReleaseBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopHelpListViewManager_o *v3; // x19
  UnityEngine_GameObject_o *BaseWindow; // x0

  v3 = this;
  if ( (byte_42160A2 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    byte_42160A2 = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL)) == 0LL
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_B0D97C(BaseWindow);
    }
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))BaseWindow->klass[2]._1.gc_desc)(
      BaseWindow,
      0LL,
      BaseWindow->klass[2]._1.name);
  }
  v3->fields.initMode = 0;
}


void __fastcall ShopHelpListViewManager__SetObjectItem(
        ShopHelpListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x10

  if ( (byte_42160A7 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_B0D8A4(&ShopHelpListViewObject_TypeInfo, obj);
    byte_42160A7 = 1;
  }
  if ( !obj
    || (v5 = *(&ShopHelpListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  ShopHelpListViewObject__Init((ShopHelpListViewObject_o *)obj, 2, (const MethodInfo *)item);
}


void __fastcall ShopHelpListViewManager___LoadBaseSprite_b__9_0(
        ShopHelpListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopHelpListViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Shader_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Material_o *v10; // x20
  UnityEngine_GameObject_o *BaseWindow; // x0
  const MethodInfo *v12; // x3
  struct System_String_array *helpBasePaths; // x8
  struct System_String_array *helpBaseNames; // x9
  const MethodInfo *v15; // x3
  struct System_String_array *v16; // x8
  struct System_String_array *v17; // x9
  UnityEngine_Texture_o *AssetStorageTexture2D; // x0
  __int64 v19; // x0

  v3 = this;
  if ( (byte_42160A9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_4552/*"Custom/SpriteWithMask"*/, v5);
    this = (ShopHelpListViewManager_o *)sub_B0D8A4(&StringLiteral_16063/*"_MaskTex"*/, v6);
    byte_42160A9 = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v7 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4552/*"Custom/SpriteWithMask"*/, 0LL);
    v10 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v8, v9);
    UnityEngine_Material___ctor(v10, v7, 0LL);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL);
      if ( BaseWindow )
      {
        BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)BaseWindow,
                                                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
        if ( BaseWindow )
        {
          BaseWindow = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseWindow->klass[1].vtable._2_GetHashCode.method)(
                                                     BaseWindow,
                                                     v10,
                                                     BaseWindow->klass[1].vtable._3_ToString.methodPtr);
          helpBasePaths = v3->fields.helpBasePaths;
          if ( helpBasePaths )
          {
            if ( !helpBasePaths->max_length )
              goto LABEL_19;
            helpBaseNames = v3->fields.helpBaseNames;
            if ( helpBaseNames )
            {
              if ( !helpBaseNames->max_length )
                goto LABEL_19;
              BaseWindow = (UnityEngine_GameObject_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                         (ShopHelpListViewManager_o *)BaseWindow,
                                                         helpBasePaths->m_Items[0],
                                                         helpBaseNames->m_Items[0],
                                                         v12);
              if ( v10 )
              {
                UnityEngine_Material__set_mainTexture(v10, (UnityEngine_Texture_o *)BaseWindow, 0LL);
                v16 = v3->fields.helpBasePaths;
                if ( v16 )
                {
                  if ( v16->max_length <= 1 )
                    goto LABEL_19;
                  v17 = v3->fields.helpBaseNames;
                  if ( v17 )
                  {
                    if ( v17->max_length > 1 )
                    {
                      AssetStorageTexture2D = (UnityEngine_Texture_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                                         (ShopHelpListViewManager_o *)BaseWindow,
                                                                         v16->m_Items[1],
                                                                         v17->m_Items[1],
                                                                         v15);
                      UnityEngine_Material__SetTexture(
                        v10,
                        (System_String_o *)StringLiteral_16063/*"_MaskTex"*/,
                        AssetStorageTexture2D,
                        0LL);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    v19 = sub_B0D9A8(BaseWindow);
                    sub_B0D948(v19, 0LL);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_B0D97C(BaseWindow);
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}