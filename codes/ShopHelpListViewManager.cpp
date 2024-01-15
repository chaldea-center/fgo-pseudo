void __fastcall ShopHelpListViewManager___ctor(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v50; // x1
  __int64 v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct System_String_array *v58; // x20
  __int64 v59; // x0
  System_Int32_array **v60; // x1
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  __int64 v72; // x2
  __int64 v73; // x0
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct System_String_array *v79; // x20
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  __int64 v91; // x2
  struct ShopHelpItemInfo_array *v92; // x20
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  ShopHelpItemInfo_o *v97; // x21
  const MethodInfo *v98; // x5
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  ShopHelpItemInfo_o *v108; // x21
  const MethodInfo *v109; // x5
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  ShopHelpItemInfo_o *v119; // x21
  const MethodInfo *v120; // x5
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  __int64 v129; // x4
  ShopHelpItemInfo_o *v130; // x21
  const MethodInfo *v131; // x5
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  ShopHelpItemInfo_o *v141; // x21
  const MethodInfo *v142; // x5
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  __int64 v148; // x1
  __int64 v149; // x2
  __int64 v150; // x3
  __int64 v151; // x4
  ShopHelpItemInfo_o *v152; // x21
  const MethodInfo *v153; // x5
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  __int64 v159; // x1
  __int64 v160; // x2
  __int64 v161; // x3
  __int64 v162; // x4
  ShopHelpItemInfo_o *v163; // x21
  const MethodInfo *v164; // x5
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  __int64 v170; // x1
  __int64 v171; // x2
  __int64 v172; // x3
  __int64 v173; // x4
  ShopHelpItemInfo_o *v174; // x21
  const MethodInfo *v175; // x5
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  __int64 v181; // x1
  __int64 v182; // x2
  __int64 v183; // x3
  __int64 v184; // x4
  ShopHelpItemInfo_o *v185; // x21
  const MethodInfo *v186; // x5
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  __int64 v192; // x1
  __int64 v193; // x2
  __int64 v194; // x3
  __int64 v195; // x4
  ShopHelpItemInfo_o *v196; // x21
  const MethodInfo *v197; // x5
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  __int64 v203; // x1
  __int64 v204; // x2
  __int64 v205; // x3
  __int64 v206; // x4
  ShopHelpItemInfo_o *v207; // x21
  const MethodInfo *v208; // x5
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  __int64 v214; // x1
  __int64 v215; // x2
  __int64 v216; // x3
  __int64 v217; // x4
  ShopHelpItemInfo_o *v218; // x21
  const MethodInfo *v219; // x5
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  __int64 v225; // x1
  __int64 v226; // x2
  __int64 v227; // x3
  __int64 v228; // x4
  ShopHelpItemInfo_o *v229; // x21
  const MethodInfo *v230; // x5
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  __int64 v236; // x1
  __int64 v237; // x2
  __int64 v238; // x3
  __int64 v239; // x4
  ShopHelpItemInfo_o *v240; // x21
  const MethodInfo *v241; // x5
  System_String_array **v242; // x3
  System_Boolean_array **v243; // x4
  System_Int32_array **v244; // x5
  System_Int32_array *v245; // x6
  System_Int32_array *v246; // x7
  __int64 v247; // x1
  __int64 v248; // x2
  __int64 v249; // x3
  __int64 v250; // x4
  ShopHelpItemInfo_o *v251; // x21
  const MethodInfo *v252; // x5
  System_String_array **v253; // x3
  System_Boolean_array **v254; // x4
  System_Int32_array **v255; // x5
  System_Int32_array *v256; // x6
  System_Int32_array *v257; // x7
  __int64 v258; // x1
  __int64 v259; // x2
  __int64 v260; // x3
  __int64 v261; // x4
  ShopHelpItemInfo_o *v262; // x21
  const MethodInfo *v263; // x5
  System_String_array **v264; // x3
  System_Boolean_array **v265; // x4
  System_Int32_array **v266; // x5
  System_Int32_array *v267; // x6
  System_Int32_array *v268; // x7
  __int64 v269; // x1
  __int64 v270; // x2
  __int64 v271; // x3
  __int64 v272; // x4
  ShopHelpItemInfo_o *v273; // x21
  const MethodInfo *v274; // x5
  System_String_array **v275; // x3
  System_Boolean_array **v276; // x4
  System_Int32_array **v277; // x5
  System_Int32_array *v278; // x6
  System_Int32_array *v279; // x7
  __int64 v280; // x1
  __int64 v281; // x2
  __int64 v282; // x3
  __int64 v283; // x4
  ShopHelpItemInfo_o *v284; // x21
  const MethodInfo *v285; // x5
  System_String_array **v286; // x3
  System_Boolean_array **v287; // x4
  System_Int32_array **v288; // x5
  System_Int32_array *v289; // x6
  System_Int32_array *v290; // x7
  __int64 v291; // x1
  __int64 v292; // x2
  __int64 v293; // x3
  __int64 v294; // x4
  ShopHelpItemInfo_o *v295; // x21
  const MethodInfo *v296; // x5
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  __int64 v302; // x1
  __int64 v303; // x2
  __int64 v304; // x3
  __int64 v305; // x4
  ShopHelpItemInfo_o *v306; // x21
  const MethodInfo *v307; // x5
  System_String_array **v308; // x3
  System_Boolean_array **v309; // x4
  System_Int32_array **v310; // x5
  System_Int32_array *v311; // x6
  System_Int32_array *v312; // x7
  System_String_array **v313; // x2
  System_String_array **v314; // x3
  System_Boolean_array **v315; // x4
  System_Int32_array **v316; // x5
  System_Int32_array *v317; // x6
  System_Int32_array *v318; // x7
  __int64 v319; // x2
  System_Array_o *v320; // x20
  System_String_array **v321; // x2
  System_String_array **v322; // x3
  System_Boolean_array **v323; // x4
  System_Int32_array **v324; // x5
  System_Int32_array *v325; // x6
  System_Int32_array *v326; // x7
  System_RuntimeFieldHandle_o v327; // 0:w1.4

  if ( (byte_40FB731 & 1) == 0 )
  {
    sub_B16FFC(&ShopHelpItemInfo_ItemKind___TypeInfo, method);
    sub_B16FFC(&ShopHelpItemInfo___TypeInfo, v4);
    sub_B16FFC(&ShopHelpItemInfo_TypeInfo, v5);
    sub_B16FFC(&string___TypeInfo, v6);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335,
      v7);
    sub_B16FFC(&StringLiteral_12102/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/, v8);
    sub_B16FFC(&StringLiteral_12111/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/, v9);
    sub_B16FFC(&StringLiteral_14517/*"Tutorial/tutorial_alpha"*/, v10);
    sub_B16FFC(&StringLiteral_19539/*"img_shop_15"*/, v11);
    sub_B16FFC(&StringLiteral_19548/*"img_shop_7"*/, v12);
    sub_B16FFC(&StringLiteral_19535/*"img_shop_11"*/, v13);
    sub_B16FFC(&StringLiteral_12096/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/, v14);
    sub_B16FFC(&StringLiteral_12101/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/, v15);
    sub_B16FFC(&StringLiteral_12103/*"SHOP_HELP_SHOP04_SHOP_EXPLANATION"*/, v16);
    sub_B16FFC(&StringLiteral_19545/*"img_shop_22"*/, v17);
    sub_B16FFC(&StringLiteral_12107/*"SHOP_HELP_START_UP_SUMMON"*/, v18);
    sub_B16FFC(&StringLiteral_22734/*"tutorial_0006"*/, v19);
    sub_B16FFC(&StringLiteral_12093/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/, v20);
    sub_B16FFC(&StringLiteral_12099/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/, v21);
    sub_B16FFC(&StringLiteral_12095/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/, v22);
    sub_B16FFC(&StringLiteral_12104/*"SHOP_HELP_SHOP13_EXPLANATION"*/, v23);
    sub_B16FFC(&StringLiteral_19537/*"img_shop_13"*/, v24);
    sub_B16FFC(&StringLiteral_19550/*"img_shop_9"*/, v25);
    sub_B16FFC(&StringLiteral_12109/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/, v26);
    sub_B16FFC(&StringLiteral_12110/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/, v27);
    sub_B16FFC(&StringLiteral_19534/*"img_shop_10"*/, v28);
    sub_B16FFC(&StringLiteral_12098/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/, v29);
    sub_B16FFC(&StringLiteral_19540/*"img_shop_16"*/, v30);
    sub_B16FFC(&StringLiteral_19541/*"img_shop_17"*/, v31);
    sub_B16FFC(&StringLiteral_19543/*"img_shop_20"*/, v32);
    sub_B16FFC(&StringLiteral_19549/*"img_shop_8"*/, v33);
    sub_B16FFC(&StringLiteral_19547/*"img_shop_4"*/, v34);
    sub_B16FFC(&StringLiteral_12094/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/, v35);
    sub_B16FFC(&StringLiteral_19544/*"img_shop_21"*/, v36);
    sub_B16FFC(&StringLiteral_19542/*"img_shop_18"*/, v37);
    sub_B16FFC(&StringLiteral_12106/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/, v38);
    sub_B16FFC(&StringLiteral_12097/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/, v39);
    sub_B16FFC(&StringLiteral_19546/*"img_shop_3"*/, v40);
    sub_B16FFC(&StringLiteral_19532/*"img_shop_0"*/, v41);
    sub_B16FFC(&StringLiteral_14516/*"Tutorial/tutorial_0006"*/, v42);
    sub_B16FFC(&StringLiteral_1/*""*/, v43);
    sub_B16FFC(&StringLiteral_19538/*"img_shop_14"*/, v44);
    sub_B16FFC(&StringLiteral_12108/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/, v45);
    sub_B16FFC(&StringLiteral_19533/*"img_shop_1"*/, v46);
    sub_B16FFC(&StringLiteral_22735/*"tutorial_alpha"*/, v47);
    sub_B16FFC(&StringLiteral_12100/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/, v48);
    sub_B16FFC(&StringLiteral_19536/*"img_shop_12"*/, v49);
    sub_B16FFC(&StringLiteral_12105/*"SHOP_HELP_SHOP15_EXPLANATION"*/, v50);
    byte_40FB731 = 1;
  }
  v51 = sub_B17014(string___TypeInfo, 2LL, v2);
  if ( !v51 )
    goto LABEL_89;
  v58 = (struct System_String_array *)v51;
  v59 = StringLiteral_14516/*"Tutorial/tutorial_0006"*/;
  if ( StringLiteral_14516/*"Tutorial/tutorial_0006"*/ )
  {
    v59 = sub_B170BC(StringLiteral_14516/*"Tutorial/tutorial_0006"*/, v58->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
    v60 = (System_Int32_array **)StringLiteral_14516/*"Tutorial/tutorial_0006"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( !v58->max_length )
    goto LABEL_87;
  v58->m_Items[0] = (System_String_o *)v60;
  sub_B16F98((BattleServantConfConponent_o *)v58->m_Items, v60, v52, v53, v54, v55, v56, v57);
  v59 = StringLiteral_14517/*"Tutorial/tutorial_alpha"*/;
  if ( StringLiteral_14517/*"Tutorial/tutorial_alpha"*/ )
  {
    v59 = sub_B170BC(StringLiteral_14517/*"Tutorial/tutorial_alpha"*/, v58->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
    v60 = (System_Int32_array **)StringLiteral_14517/*"Tutorial/tutorial_alpha"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v58->max_length <= 1 )
    goto LABEL_87;
  v58->m_Items[1] = (System_String_o *)v60;
  sub_B16F98((BattleServantConfConponent_o *)&v58->m_Items[1], v60, v52, v61, v62, v63, v64, v65);
  this->fields.helpBasePaths = v58;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.helpBasePaths,
    (System_Int32_array **)v58,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v73 = sub_B17014(string___TypeInfo, 2LL, v72);
  if ( !v73 )
    goto LABEL_89;
  v79 = (struct System_String_array *)v73;
  v59 = StringLiteral_22734/*"tutorial_0006"*/;
  if ( StringLiteral_22734/*"tutorial_0006"*/ )
  {
    v59 = sub_B170BC(StringLiteral_22734/*"tutorial_0006"*/, v79->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
    v60 = (System_Int32_array **)StringLiteral_22734/*"tutorial_0006"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( !v79->max_length )
    goto LABEL_87;
  v79->m_Items[0] = (System_String_o *)v60;
  sub_B16F98((BattleServantConfConponent_o *)v79->m_Items, v60, v52, v74, v75, v76, v77, v78);
  v59 = StringLiteral_22735/*"tutorial_alpha"*/;
  if ( StringLiteral_22735/*"tutorial_alpha"*/ )
  {
    v59 = sub_B170BC(StringLiteral_22735/*"tutorial_alpha"*/, v79->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
    v60 = (System_Int32_array **)StringLiteral_22735/*"tutorial_alpha"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v79->max_length <= 1 )
    goto LABEL_87;
  v79->m_Items[1] = (System_String_o *)v60;
  sub_B16F98((BattleServantConfConponent_o *)&v79->m_Items[1], v60, v52, v80, v81, v82, v83, v84);
  this->fields.helpBaseNames = v79;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.helpBaseNames,
    (System_Int32_array **)v79,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  v92 = (struct ShopHelpItemInfo_array *)sub_B17014(ShopHelpItemInfo___TypeInfo, 20LL, v91);
  v97 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v93, v94, v95, v96);
  ShopHelpItemInfo___ctor(
    v97,
    1,
    (System_String_o *)StringLiteral_12096/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19549/*"img_shop_8"*/,
    2,
    v98);
  if ( !v92 )
LABEL_89:
    sub_B170D4();
  if ( v97 )
  {
    v59 = sub_B170BC(v97, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( !v92->max_length )
    goto LABEL_87;
  v92->m_Items[0] = v97;
  sub_B16F98((BattleServantConfConponent_o *)v92->m_Items, (System_Int32_array **)v97, v52, v99, v100, v101, v102, v103);
  v108 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v104, v105, v106, v107);
  ShopHelpItemInfo___ctor(
    v108,
    16,
    (System_String_o *)StringLiteral_12107/*"SHOP_HELP_START_UP_SUMMON"*/,
    (System_String_o *)StringLiteral_19541/*"img_shop_17"*/,
    2,
    v109);
  if ( v108 )
  {
    v59 = sub_B170BC(v108, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 1 )
    goto LABEL_87;
  v92->m_Items[1] = v108;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[1],
    (System_Int32_array **)v108,
    v52,
    v110,
    v111,
    v112,
    v113,
    v114);
  v119 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v115, v116, v117, v118);
  ShopHelpItemInfo___ctor(
    v119,
    2,
    (System_String_o *)StringLiteral_12101/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19547/*"img_shop_4"*/,
    2,
    v120);
  if ( v119 )
  {
    v59 = sub_B170BC(v119, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 2 )
    goto LABEL_87;
  v92->m_Items[2] = v119;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[2],
    (System_Int32_array **)v119,
    v52,
    v121,
    v122,
    v123,
    v124,
    v125);
  v130 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v126, v127, v128, v129);
  ShopHelpItemInfo___ctor(
    v130,
    3,
    (System_String_o *)StringLiteral_12099/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19546/*"img_shop_3"*/,
    1,
    v131);
  if ( v130 )
  {
    v59 = sub_B170BC(v130, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 3 )
    goto LABEL_87;
  v92->m_Items[3] = v130;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[3],
    (System_Int32_array **)v130,
    v52,
    v132,
    v133,
    v134,
    v135,
    v136);
  v141 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v137, v138, v139, v140);
  ShopHelpItemInfo___ctor(
    v141,
    4,
    (System_String_o *)StringLiteral_12100/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19535/*"img_shop_11"*/,
    2,
    v142);
  if ( v141 )
  {
    v59 = sub_B170BC(v141, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 4 )
    goto LABEL_87;
  v92->m_Items[4] = v141;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[4],
    (System_Int32_array **)v141,
    v52,
    v143,
    v144,
    v145,
    v146,
    v147);
  v152 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v148, v149, v150, v151);
  ShopHelpItemInfo___ctor(
    v152,
    5,
    (System_String_o *)StringLiteral_12108/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19550/*"img_shop_9"*/,
    1,
    v153);
  if ( v152 )
  {
    v59 = sub_B170BC(v152, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 5 )
    goto LABEL_87;
  v92->m_Items[5] = v152;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[5],
    (System_Int32_array **)v152,
    v52,
    v154,
    v155,
    v156,
    v157,
    v158);
  v163 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v159, v160, v161, v162);
  ShopHelpItemInfo___ctor(
    v163,
    6,
    (System_String_o *)StringLiteral_12109/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19533/*"img_shop_1"*/,
    1,
    v164);
  if ( v163 )
  {
    v59 = sub_B170BC(v163, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 6 )
    goto LABEL_87;
  v92->m_Items[6] = v163;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[6],
    (System_Int32_array **)v163,
    v52,
    v165,
    v166,
    v167,
    v168,
    v169);
  v174 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v170, v171, v172, v173);
  ShopHelpItemInfo___ctor(
    v174,
    7,
    (System_String_o *)StringLiteral_12102/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19536/*"img_shop_12"*/,
    1,
    v175);
  if ( v174 )
  {
    v59 = sub_B170BC(v174, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 7 )
    goto LABEL_87;
  v92->m_Items[7] = v174;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[7],
    (System_Int32_array **)v174,
    v52,
    v176,
    v177,
    v178,
    v179,
    v180);
  v185 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v181, v182, v183, v184);
  ShopHelpItemInfo___ctor(
    v185,
    8,
    (System_String_o *)StringLiteral_12095/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19537/*"img_shop_13"*/,
    1,
    v186);
  if ( v185 )
  {
    v59 = sub_B170BC(v185, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 8 )
    goto LABEL_87;
  v92->m_Items[8] = v185;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[8],
    (System_Int32_array **)v185,
    v52,
    v187,
    v188,
    v189,
    v190,
    v191);
  v196 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v192, v193, v194, v195);
  ShopHelpItemInfo___ctor(
    v196,
    11,
    (System_String_o *)StringLiteral_12093/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19534/*"img_shop_10"*/,
    1,
    v197);
  if ( v196 )
  {
    v59 = sub_B170BC(v196, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 9 )
    goto LABEL_87;
  v92->m_Items[9] = v196;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[9],
    (System_Int32_array **)v196,
    v52,
    v198,
    v199,
    v200,
    v201,
    v202);
  v207 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v203, v204, v205, v206);
  ShopHelpItemInfo___ctor(
    v207,
    13,
    (System_String_o *)StringLiteral_12106/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19538/*"img_shop_14"*/,
    2,
    v208);
  if ( v207 )
  {
    v59 = sub_B170BC(v207, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 0xA )
    goto LABEL_87;
  v92->m_Items[10] = v207;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[10],
    (System_Int32_array **)v207,
    v52,
    v209,
    v210,
    v211,
    v212,
    v213);
  v218 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v214, v215, v216, v217);
  ShopHelpItemInfo___ctor(
    v218,
    12,
    (System_String_o *)StringLiteral_12110/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19548/*"img_shop_7"*/,
    1,
    v219);
  if ( v218 )
  {
    v59 = sub_B170BC(v218, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 0xB )
    goto LABEL_87;
  v92->m_Items[11] = v218;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[11],
    (System_Int32_array **)v218,
    v52,
    v220,
    v221,
    v222,
    v223,
    v224);
  v229 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v225, v226, v227, v228);
  ShopHelpItemInfo___ctor(
    v229,
    14,
    (System_String_o *)StringLiteral_12098/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19539/*"img_shop_15"*/,
    1,
    v230);
  if ( v229 )
  {
    v59 = sub_B170BC(v229, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 0xC )
    goto LABEL_87;
  v92->m_Items[12] = v229;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[12],
    (System_Int32_array **)v229,
    v52,
    v231,
    v232,
    v233,
    v234,
    v235);
  v240 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v236, v237, v238, v239);
  ShopHelpItemInfo___ctor(
    v240,
    15,
    (System_String_o *)StringLiteral_12103/*"SHOP_HELP_SHOP04_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19540/*"img_shop_16"*/,
    2,
    v241);
  if ( v240 )
  {
    v59 = sub_B170BC(v240, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 0xD )
    goto LABEL_87;
  v92->m_Items[13] = v240;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[13],
    (System_Int32_array **)v240,
    v52,
    v242,
    v243,
    v244,
    v245,
    v246);
  v251 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v247, v248, v249, v250);
  ShopHelpItemInfo___ctor(
    v251,
    17,
    (System_String_o *)StringLiteral_12094/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19541/*"img_shop_17"*/,
    2,
    v252);
  if ( v251 )
  {
    v59 = sub_B170BC(v251, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 0xE )
    goto LABEL_87;
  v92->m_Items[14] = v251;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[14],
    (System_Int32_array **)v251,
    v52,
    v253,
    v254,
    v255,
    v256,
    v257);
  v262 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v258, v259, v260, v261);
  ShopHelpItemInfo___ctor(
    v262,
    18,
    (System_String_o *)StringLiteral_12104/*"SHOP_HELP_SHOP13_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19542/*"img_shop_18"*/,
    1,
    v263);
  if ( v262 )
  {
    v59 = sub_B170BC(v262, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 0xF )
    goto LABEL_87;
  v92->m_Items[15] = v262;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[15],
    (System_Int32_array **)v262,
    v52,
    v264,
    v265,
    v266,
    v267,
    v268);
  v273 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v269, v270, v271, v272);
  ShopHelpItemInfo___ctor(
    v273,
    19,
    (System_String_o *)StringLiteral_12111/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19543/*"img_shop_20"*/,
    2,
    v274);
  if ( v273 )
  {
    v59 = sub_B170BC(v273, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 0x10 )
    goto LABEL_87;
  v92->m_Items[16] = v273;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[16],
    (System_Int32_array **)v273,
    v52,
    v275,
    v276,
    v277,
    v278,
    v279);
  v284 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v280, v281, v282, v283);
  ShopHelpItemInfo___ctor(
    v284,
    20,
    (System_String_o *)StringLiteral_12105/*"SHOP_HELP_SHOP15_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19544/*"img_shop_21"*/,
    2,
    v285);
  if ( v284 )
  {
    v59 = sub_B170BC(v284, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 0x11 )
    goto LABEL_87;
  v92->m_Items[17] = v284;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[17],
    (System_Int32_array **)v284,
    v52,
    v286,
    v287,
    v288,
    v289,
    v290);
  v295 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v291, v292, v293, v294);
  ShopHelpItemInfo___ctor(
    v295,
    21,
    (System_String_o *)StringLiteral_12097/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19545/*"img_shop_22"*/,
    2,
    v296);
  if ( v295 )
  {
    v59 = sub_B170BC(v295, v92->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_88;
  }
  if ( v92->max_length <= 0x12 )
    goto LABEL_87;
  v92->m_Items[18] = v295;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[18],
    (System_Int32_array **)v295,
    v52,
    v297,
    v298,
    v299,
    v300,
    v301);
  v306 = (ShopHelpItemInfo_o *)sub_B170CC(ShopHelpItemInfo_TypeInfo, v302, v303, v304, v305);
  ShopHelpItemInfo___ctor(v306, 22, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_19532/*"img_shop_0"*/, 1, v307);
  if ( v306 )
  {
    v59 = sub_B170BC(v306, v92->obj.klass->_1.element_class);
    if ( !v59 )
    {
LABEL_88:
      sub_B170F4(v59);
      sub_B170A0();
    }
  }
  if ( v92->max_length <= 0x13 )
  {
LABEL_87:
    sub_B17100(v59, v60, v52);
    sub_B170A0();
  }
  v92->m_Items[19] = v306;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v92->m_Items[19],
    (System_Int32_array **)v306,
    v52,
    v308,
    v309,
    v310,
    v311,
    v312);
  this->fields.itemInfoList = v92;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemInfoList,
    (System_Int32_array **)v92,
    v313,
    v314,
    v315,
    v316,
    v317,
    v318);
  v320 = (System_Array_o *)sub_B17014(ShopHelpItemInfo_ItemKind___TypeInfo, 18LL, v319);
  v327.fields.value = Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v320, v327, 0LL);
  this->fields.kinds = (struct ShopHelpItemInfo_ItemKind_array *)v320;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.kinds,
    (System_Int32_array **)v320,
    v321,
    v322,
    v323,
    v324,
    v325,
    v326);
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
    sub_B16F98(p_onFadeOut, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x21
  const MethodInfo *v17; // x2

  if ( (byte_40FB72F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ShopHelpListViewManager_CallOnFadeOut__, v10);
    byte_40FB72F = 1;
  }
  this->fields.onFadeOut = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onFadeOut,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseDialog = this->fields.baseDialog;
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0LL);
  if ( !baseDialog )
    sub_B170D4();
  ShopHelpMenu__Close(baseDialog, v16, v17);
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
  _BOOL8 IsSvtCostumeShopOpen; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct ShopHelpItemInfo_ItemKind_array *v22; // x24
  __int64 v23; // x8
  unsigned __int64 v24; // x25
  int32_t v25; // w21
  ShopRootConstants_c *v26; // x0
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v28; // x1
  struct ShopHelpItemInfo_array *itemInfoList; // x11
  unsigned __int64 max_length; // x8
  unsigned __int64 v31; // x9
  ShopHelpItemInfo_o **m_Items; // x11
  ShopHelpItemInfo_o *v33; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x21
  int32_t size; // w22
  __int64 v36; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_40FB72E & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomUtility_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_ShopMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_B16FFC(&ShopHelpListViewItem_TypeInfo, v13);
    sub_B16FFC(&ShopRootConstants_TypeInfo, v14);
    byte_40FB72E = 1;
  }
  this->fields.onFadeOut = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onFadeOut, 0LL, v2, v3, v4, v5, v6, v7);
  baseDialog = (BaseDialog_o *)this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_40;
  BaseDialog__Open(baseDialog, 0LL, 0, 0LL);
  kinds = this->fields.kinds;
  if ( !kinds )
    goto LABEL_40;
  ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0LL);
  v22 = this->fields.kinds;
  if ( !v22 )
    goto LABEL_40;
  v23 = *(_QWORD *)&v22->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v23 )
      {
LABEL_39:
        sub_B17100(IsSvtCostumeShopOpen, v18, v19);
        sub_B170A0();
      }
      v25 = v22->m_Items[v24 + 1];
      switch ( v25 )
      {
        case 15:
          v26 = ShopRootConstants_TypeInfo;
          if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ShopRootConstants_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          }
          IsSvtCostumeShopOpen = ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v26);
          if ( !IsSvtCostumeShopOpen )
            goto LABEL_37;
          goto LABEL_27;
        case 16:
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopMaster___);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_40;
          IsSvtCostumeShopOpen = ShopMaster__IsEnableEventShop_27843620(Master_WarQuestSelectionMaster, v28);
          if ( !IsSvtCostumeShopOpen )
            goto LABEL_37;
LABEL_27:
          itemInfoList = this->fields.itemInfoList;
          if ( !itemInfoList )
            goto LABEL_40;
          max_length = itemInfoList->max_length;
          if ( (__int64)(max_length << 32) < 1 )
            goto LABEL_37;
          v31 = 0LL;
          m_Items = itemInfoList->m_Items;
          break;
        case 17:
          if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
          }
          IsSvtCostumeShopOpen = CoinRoomUtility__IsTargetQuestClear(0LL);
          if ( !IsSvtCostumeShopOpen )
            goto LABEL_37;
          goto LABEL_27;
        case 20:
          IsSvtCostumeShopOpen = ConstantMaster__IsFLAG20230402(0LL);
          if ( IsSvtCostumeShopOpen )
            goto LABEL_27;
          goto LABEL_37;
        default:
          goto LABEL_27;
      }
      while ( 1 )
      {
        if ( v31 >= max_length )
          goto LABEL_39;
        v33 = m_Items[v31];
        if ( v33 )
        {
          if ( v33->fields._Kind_k__BackingField == v25 )
            break;
        }
        if ( (__int64)++v31 >= (int)max_length )
          goto LABEL_37;
      }
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v36 = sub_B170CC(ShopHelpListViewItem_TypeInfo, v18, v19, v20, v21);
      ListViewItem___ctor_30173668((ListViewItem_o *)v36, size, 0LL);
      *(_QWORD *)(v36 + 112) = v33;
      sub_B16F98((BattleServantConfConponent_o *)(v36 + 112), (System_Int32_array **)v33, v37, v38, v39, v40, v41, v42);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
LABEL_37:
      LODWORD(v23) = v22->max_length;
      if ( (__int64)++v24 >= (int)v23 )
        goto LABEL_38;
    }
LABEL_40:
    sub_B170D4();
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

  if ( (byte_40FB72C & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, path);
    sub_B16FFC(&AssetManager_TypeInfo, v6);
    byte_40FB72C = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( !AssetStorage )
    sub_B170D4();
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
}


void __fastcall ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_array *helpBasePaths; // x20
  System_Action_o *v9; // x21

  if ( (byte_40FB72A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AssetManager_TypeInfo, v6);
    sub_B16FFC(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, v7);
    byte_40FB72A = 1;
  }
  if ( !this->fields.initMode )
  {
    this->fields.initMode = 1;
    helpBasePaths = this->fields.helpBasePaths;
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage_29953896(helpBasePaths, v9, 1, 0LL);
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

  if ( (byte_40FB72D & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_B16FFC(&AssetManager_TypeInfo, paths);
    byte_40FB72D = 1;
  }
  if ( !paths )
    sub_B170D4();
  v4 = *(_QWORD *)&paths->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)v4 )
      {
        sub_B17100(this, paths, method);
        sub_B170A0();
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
  UnityEngine_Component_o *transform; // x0
  WebViewObject_o *Component_WebViewObject; // x0

  v3 = this;
  if ( (byte_40FB72B & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    byte_40FB72B = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL)) == 0LL
      || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      transform,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_B170D4();
    }
    ((void (__fastcall *)(WebViewObject_o *, _QWORD, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._3_ToString.method)(
      Component_WebViewObject,
      0LL,
      Component_WebViewObject->klass[1].vtable._4_OnDestroy.methodPtr);
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

  if ( (byte_40FB730 & 1) == 0 )
  {
    sub_B16FFC(&ShopHelpListViewObject_TypeInfo, obj);
    byte_40FB730 = 1;
  }
  if ( !obj
    || (v5 = *(&ShopHelpListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_B170D4();
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
  __int64 v10; // x3
  __int64 v11; // x4
  UnityEngine_Material_o *v12; // x20
  UnityEngine_GameObject_o *BaseWindow; // x0
  UnityEngine_Component_o *transform; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  ShopHelpListViewManager_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  struct System_String_array *helpBasePaths; // x8
  struct System_String_array *helpBaseNames; // x9
  UnityEngine_Texture_o *AssetStorageTexture2D; // x0
  const MethodInfo *v23; // x3
  struct System_String_array *v24; // x8
  struct System_String_array *v25; // x9
  UnityEngine_Texture_o *v26; // x0

  v3 = this;
  if ( (byte_40FB732 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_4519/*"Custom/SpriteWithMask"*/, v5);
    this = (ShopHelpListViewManager_o *)sub_B16FFC(&StringLiteral_15952/*"_MaskTex"*/, v6);
    byte_40FB732 = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v7 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4519/*"Custom/SpriteWithMask"*/, 0LL);
    v12 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v8, v9, v10, v11);
    UnityEngine_Material___ctor(v12, v7, 0LL);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL);
      if ( transform )
      {
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    transform,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
        if ( Component_WebViewObject )
        {
          v16 = (ShopHelpListViewManager_o *)((__int64 (__fastcall *)(WebViewObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._1_Finalize.method)(
                                               Component_WebViewObject,
                                               v12,
                                               Component_WebViewObject->klass[1].vtable._2_GetHashCode.methodPtr);
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
              AssetStorageTexture2D = (UnityEngine_Texture_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                                 v16,
                                                                 helpBasePaths->m_Items[0],
                                                                 helpBaseNames->m_Items[0],
                                                                 v19);
              if ( v12 )
              {
                UnityEngine_Material__set_mainTexture(v12, AssetStorageTexture2D, 0LL);
                v24 = v3->fields.helpBasePaths;
                if ( v24 )
                {
                  if ( v24->max_length <= 1 )
                    goto LABEL_19;
                  v25 = v3->fields.helpBaseNames;
                  if ( v25 )
                  {
                    if ( v25->max_length > 1 )
                    {
                      v26 = (UnityEngine_Texture_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                       v16,
                                                       v24->m_Items[1],
                                                       v25->m_Items[1],
                                                       v23);
                      UnityEngine_Material__SetTexture(v12, (System_String_o *)StringLiteral_15952/*"_MaskTex"*/, v26, 0LL);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    sub_B17100(v16, v17, v18);
                    sub_B170A0();
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_B170D4();
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}