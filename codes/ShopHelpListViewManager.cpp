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
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct System_String_array *v58; // x20
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct System_String_array *v79; // x20
  System_Int32_array **v80; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct ShopHelpItemInfo_array *v94; // x20
  ShopHelpItemInfo_o *v95; // x21
  const MethodInfo *v96; // x5
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  ShopHelpItemInfo_o *v103; // x21
  const MethodInfo *v104; // x5
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  ShopHelpItemInfo_o *v111; // x21
  const MethodInfo *v112; // x5
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  ShopHelpItemInfo_o *v119; // x21
  const MethodInfo *v120; // x5
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  ShopHelpItemInfo_o *v127; // x21
  const MethodInfo *v128; // x5
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  ShopHelpItemInfo_o *v135; // x21
  const MethodInfo *v136; // x5
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  ShopHelpItemInfo_o *v143; // x21
  const MethodInfo *v144; // x5
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  ShopHelpItemInfo_o *v151; // x21
  const MethodInfo *v152; // x5
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  ShopHelpItemInfo_o *v159; // x21
  const MethodInfo *v160; // x5
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  ShopHelpItemInfo_o *v167; // x21
  const MethodInfo *v168; // x5
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  ShopHelpItemInfo_o *v175; // x21
  const MethodInfo *v176; // x5
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  ShopHelpItemInfo_o *v183; // x21
  const MethodInfo *v184; // x5
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  ShopHelpItemInfo_o *v191; // x21
  const MethodInfo *v192; // x5
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  ShopHelpItemInfo_o *v199; // x21
  const MethodInfo *v200; // x5
  System_String_array **v201; // x2
  System_String_array **v202; // x3
  System_Boolean_array **v203; // x4
  System_Int32_array **v204; // x5
  System_Int32_array *v205; // x6
  System_Int32_array *v206; // x7
  ShopHelpItemInfo_o *v207; // x21
  const MethodInfo *v208; // x5
  System_String_array **v209; // x2
  System_String_array **v210; // x3
  System_Boolean_array **v211; // x4
  System_Int32_array **v212; // x5
  System_Int32_array *v213; // x6
  System_Int32_array *v214; // x7
  ShopHelpItemInfo_o *v215; // x21
  const MethodInfo *v216; // x5
  System_String_array **v217; // x2
  System_String_array **v218; // x3
  System_Boolean_array **v219; // x4
  System_Int32_array **v220; // x5
  System_Int32_array *v221; // x6
  System_Int32_array *v222; // x7
  ShopHelpItemInfo_o *v223; // x21
  const MethodInfo *v224; // x5
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  ShopHelpItemInfo_o *v231; // x21
  const MethodInfo *v232; // x5
  System_String_array **v233; // x2
  System_String_array **v234; // x3
  System_Boolean_array **v235; // x4
  System_Int32_array **v236; // x5
  System_Int32_array *v237; // x6
  System_Int32_array *v238; // x7
  ShopHelpItemInfo_o *v239; // x21
  const MethodInfo *v240; // x5
  System_String_array **v241; // x2
  System_String_array **v242; // x3
  System_Boolean_array **v243; // x4
  System_Int32_array **v244; // x5
  System_Int32_array *v245; // x6
  System_Int32_array *v246; // x7
  ShopHelpItemInfo_o *v247; // x21
  const MethodInfo *v248; // x5
  System_String_array **v249; // x2
  System_String_array **v250; // x3
  System_Boolean_array **v251; // x4
  System_Int32_array **v252; // x5
  System_Int32_array *v253; // x6
  System_Int32_array *v254; // x7
  System_String_array **v255; // x2
  System_String_array **v256; // x3
  System_Boolean_array **v257; // x4
  System_Int32_array **v258; // x5
  System_Int32_array *v259; // x6
  System_Int32_array *v260; // x7
  System_Array_o *v261; // x20
  System_String_array **v262; // x2
  System_String_array **v263; // x3
  System_Boolean_array **v264; // x4
  System_Int32_array **v265; // x5
  System_Int32_array *v266; // x6
  System_Int32_array *v267; // x7
  __int64 v268; // x0
  __int64 v269; // x0
  System_RuntimeFieldHandle_o v270; // 0:w1.4

  if ( (byte_418916D & 1) == 0 )
  {
    sub_B2C35C(&ShopHelpItemInfo_ItemKind___TypeInfo, method);
    sub_B2C35C(&ShopHelpItemInfo___TypeInfo, v3);
    sub_B2C35C(&ShopHelpItemInfo_TypeInfo, v4);
    sub_B2C35C(&string___TypeInfo, v5);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335,
      v6);
    sub_B2C35C(&StringLiteral_12154/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/, v7);
    sub_B2C35C(&StringLiteral_12163/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/, v8);
    sub_B2C35C(&StringLiteral_14577/*"Tutorial/tutorial_alpha"*/, v9);
    sub_B2C35C(&StringLiteral_19613/*"img_shop_15"*/, v10);
    sub_B2C35C(&StringLiteral_19622/*"img_shop_7"*/, v11);
    sub_B2C35C(&StringLiteral_19609/*"img_shop_11"*/, v12);
    sub_B2C35C(&StringLiteral_12148/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/, v13);
    sub_B2C35C(&StringLiteral_12153/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/, v14);
    sub_B2C35C(&StringLiteral_12155/*"SHOP_HELP_SHOP04_SHOP_EXPLANATION"*/, v15);
    sub_B2C35C(&StringLiteral_19619/*"img_shop_22"*/, v16);
    sub_B2C35C(&StringLiteral_12159/*"SHOP_HELP_START_UP_SUMMON"*/, v17);
    sub_B2C35C(&StringLiteral_22827/*"tutorial_0006"*/, v18);
    sub_B2C35C(&StringLiteral_12145/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/, v19);
    sub_B2C35C(&StringLiteral_12151/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/, v20);
    sub_B2C35C(&StringLiteral_12147/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/, v21);
    sub_B2C35C(&StringLiteral_12156/*"SHOP_HELP_SHOP13_EXPLANATION"*/, v22);
    sub_B2C35C(&StringLiteral_19611/*"img_shop_13"*/, v23);
    sub_B2C35C(&StringLiteral_19624/*"img_shop_9"*/, v24);
    sub_B2C35C(&StringLiteral_12161/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/, v25);
    sub_B2C35C(&StringLiteral_12162/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/, v26);
    sub_B2C35C(&StringLiteral_19608/*"img_shop_10"*/, v27);
    sub_B2C35C(&StringLiteral_12150/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/, v28);
    sub_B2C35C(&StringLiteral_19614/*"img_shop_16"*/, v29);
    sub_B2C35C(&StringLiteral_19615/*"img_shop_17"*/, v30);
    sub_B2C35C(&StringLiteral_19617/*"img_shop_20"*/, v31);
    sub_B2C35C(&StringLiteral_19623/*"img_shop_8"*/, v32);
    sub_B2C35C(&StringLiteral_19621/*"img_shop_4"*/, v33);
    sub_B2C35C(&StringLiteral_12146/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/, v34);
    sub_B2C35C(&StringLiteral_19618/*"img_shop_21"*/, v35);
    sub_B2C35C(&StringLiteral_19616/*"img_shop_18"*/, v36);
    sub_B2C35C(&StringLiteral_12158/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/, v37);
    sub_B2C35C(&StringLiteral_12149/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/, v38);
    sub_B2C35C(&StringLiteral_19620/*"img_shop_3"*/, v39);
    sub_B2C35C(&StringLiteral_19606/*"img_shop_0"*/, v40);
    sub_B2C35C(&StringLiteral_14576/*"Tutorial/tutorial_0006"*/, v41);
    sub_B2C35C(&StringLiteral_1/*""*/, v42);
    sub_B2C35C(&StringLiteral_19612/*"img_shop_14"*/, v43);
    sub_B2C35C(&StringLiteral_12160/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/, v44);
    sub_B2C35C(&StringLiteral_19607/*"img_shop_1"*/, v45);
    sub_B2C35C(&StringLiteral_22828/*"tutorial_alpha"*/, v46);
    sub_B2C35C(&StringLiteral_12152/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/, v47);
    sub_B2C35C(&StringLiteral_19610/*"img_shop_12"*/, v48);
    sub_B2C35C(&StringLiteral_12157/*"SHOP_HELP_SHOP15_EXPLANATION"*/, v49);
    byte_418916D = 1;
  }
  v50 = sub_B2C374(string___TypeInfo, 2LL);
  if ( !v50 )
    goto LABEL_89;
  v58 = (struct System_String_array *)v50;
  v50 = StringLiteral_14576/*"Tutorial/tutorial_0006"*/;
  if ( StringLiteral_14576/*"Tutorial/tutorial_0006"*/ )
  {
    v50 = sub_B2C41C(StringLiteral_14576/*"Tutorial/tutorial_0006"*/, v58->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
    v59 = (System_Int32_array **)StringLiteral_14576/*"Tutorial/tutorial_0006"*/;
  }
  else
  {
    v59 = 0LL;
  }
  if ( !v58->max_length )
    goto LABEL_87;
  v58->m_Items[0] = (System_String_o *)v59;
  sub_B2C2F8((BattleServantConfConponent_o *)v58->m_Items, v59, v52, v53, v54, v55, v56, v57);
  v50 = StringLiteral_14577/*"Tutorial/tutorial_alpha"*/;
  if ( StringLiteral_14577/*"Tutorial/tutorial_alpha"*/ )
  {
    v50 = sub_B2C41C(StringLiteral_14577/*"Tutorial/tutorial_alpha"*/, v58->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
    v66 = (System_Int32_array **)StringLiteral_14577/*"Tutorial/tutorial_alpha"*/;
  }
  else
  {
    v66 = 0LL;
  }
  if ( v58->max_length <= 1 )
    goto LABEL_87;
  v58->m_Items[1] = (System_String_o *)v66;
  sub_B2C2F8((BattleServantConfConponent_o *)&v58->m_Items[1], v66, v60, v61, v62, v63, v64, v65);
  this->fields.helpBasePaths = v58;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.helpBasePaths,
    (System_Int32_array **)v58,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v50 = sub_B2C374(string___TypeInfo, 2LL);
  if ( !v50 )
    goto LABEL_89;
  v79 = (struct System_String_array *)v50;
  v50 = StringLiteral_22827/*"tutorial_0006"*/;
  if ( StringLiteral_22827/*"tutorial_0006"*/ )
  {
    v50 = sub_B2C41C(StringLiteral_22827/*"tutorial_0006"*/, v79->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
    v80 = (System_Int32_array **)StringLiteral_22827/*"tutorial_0006"*/;
  }
  else
  {
    v80 = 0LL;
  }
  if ( !v79->max_length )
    goto LABEL_87;
  v79->m_Items[0] = (System_String_o *)v80;
  sub_B2C2F8((BattleServantConfConponent_o *)v79->m_Items, v80, v73, v74, v75, v76, v77, v78);
  v50 = StringLiteral_22828/*"tutorial_alpha"*/;
  if ( StringLiteral_22828/*"tutorial_alpha"*/ )
  {
    v50 = sub_B2C41C(StringLiteral_22828/*"tutorial_alpha"*/, v79->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
    v87 = (System_Int32_array **)StringLiteral_22828/*"tutorial_alpha"*/;
  }
  else
  {
    v87 = 0LL;
  }
  if ( v79->max_length <= 1 )
    goto LABEL_87;
  v79->m_Items[1] = (System_String_o *)v87;
  sub_B2C2F8((BattleServantConfConponent_o *)&v79->m_Items[1], v87, v81, v82, v83, v84, v85, v86);
  this->fields.helpBaseNames = v79;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.helpBaseNames,
    (System_Int32_array **)v79,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  v94 = (struct ShopHelpItemInfo_array *)sub_B2C374(ShopHelpItemInfo___TypeInfo, 20LL);
  v95 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v95,
    1,
    (System_String_o *)StringLiteral_12148/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19623/*"img_shop_8"*/,
    2,
    v96);
  if ( !v94 )
LABEL_89:
    sub_B2C434(v50, v51);
  if ( v95 )
  {
    v50 = sub_B2C41C(v95, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( !v94->max_length )
    goto LABEL_87;
  v94->m_Items[0] = v95;
  sub_B2C2F8((BattleServantConfConponent_o *)v94->m_Items, (System_Int32_array **)v95, v97, v98, v99, v100, v101, v102);
  v103 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v103,
    16,
    (System_String_o *)StringLiteral_12159/*"SHOP_HELP_START_UP_SUMMON"*/,
    (System_String_o *)StringLiteral_19615/*"img_shop_17"*/,
    2,
    v104);
  if ( v103 )
  {
    v50 = sub_B2C41C(v103, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 1 )
    goto LABEL_87;
  v94->m_Items[1] = v103;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[1],
    (System_Int32_array **)v103,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  v111 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v111,
    2,
    (System_String_o *)StringLiteral_12153/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19621/*"img_shop_4"*/,
    2,
    v112);
  if ( v111 )
  {
    v50 = sub_B2C41C(v111, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 2 )
    goto LABEL_87;
  v94->m_Items[2] = v111;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[2],
    (System_Int32_array **)v111,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  v119 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v119,
    3,
    (System_String_o *)StringLiteral_12151/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19620/*"img_shop_3"*/,
    1,
    v120);
  if ( v119 )
  {
    v50 = sub_B2C41C(v119, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 3 )
    goto LABEL_87;
  v94->m_Items[3] = v119;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[3],
    (System_Int32_array **)v119,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  v127 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v127,
    4,
    (System_String_o *)StringLiteral_12152/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19609/*"img_shop_11"*/,
    2,
    v128);
  if ( v127 )
  {
    v50 = sub_B2C41C(v127, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 4 )
    goto LABEL_87;
  v94->m_Items[4] = v127;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[4],
    (System_Int32_array **)v127,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
  v135 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v135,
    5,
    (System_String_o *)StringLiteral_12160/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19624/*"img_shop_9"*/,
    1,
    v136);
  if ( v135 )
  {
    v50 = sub_B2C41C(v135, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 5 )
    goto LABEL_87;
  v94->m_Items[5] = v135;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[5],
    (System_Int32_array **)v135,
    v137,
    v138,
    v139,
    v140,
    v141,
    v142);
  v143 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v143,
    6,
    (System_String_o *)StringLiteral_12161/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19607/*"img_shop_1"*/,
    1,
    v144);
  if ( v143 )
  {
    v50 = sub_B2C41C(v143, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 6 )
    goto LABEL_87;
  v94->m_Items[6] = v143;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[6],
    (System_Int32_array **)v143,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  v151 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v151,
    7,
    (System_String_o *)StringLiteral_12154/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19610/*"img_shop_12"*/,
    1,
    v152);
  if ( v151 )
  {
    v50 = sub_B2C41C(v151, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 7 )
    goto LABEL_87;
  v94->m_Items[7] = v151;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[7],
    (System_Int32_array **)v151,
    v153,
    v154,
    v155,
    v156,
    v157,
    v158);
  v159 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v159,
    8,
    (System_String_o *)StringLiteral_12147/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19611/*"img_shop_13"*/,
    1,
    v160);
  if ( v159 )
  {
    v50 = sub_B2C41C(v159, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 8 )
    goto LABEL_87;
  v94->m_Items[8] = v159;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[8],
    (System_Int32_array **)v159,
    v161,
    v162,
    v163,
    v164,
    v165,
    v166);
  v167 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v167,
    11,
    (System_String_o *)StringLiteral_12145/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19608/*"img_shop_10"*/,
    1,
    v168);
  if ( v167 )
  {
    v50 = sub_B2C41C(v167, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 9 )
    goto LABEL_87;
  v94->m_Items[9] = v167;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[9],
    (System_Int32_array **)v167,
    v169,
    v170,
    v171,
    v172,
    v173,
    v174);
  v175 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v175,
    13,
    (System_String_o *)StringLiteral_12158/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19612/*"img_shop_14"*/,
    2,
    v176);
  if ( v175 )
  {
    v50 = sub_B2C41C(v175, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 0xA )
    goto LABEL_87;
  v94->m_Items[10] = v175;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[10],
    (System_Int32_array **)v175,
    v177,
    v178,
    v179,
    v180,
    v181,
    v182);
  v183 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v183,
    12,
    (System_String_o *)StringLiteral_12162/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19622/*"img_shop_7"*/,
    1,
    v184);
  if ( v183 )
  {
    v50 = sub_B2C41C(v183, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 0xB )
    goto LABEL_87;
  v94->m_Items[11] = v183;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[11],
    (System_Int32_array **)v183,
    v185,
    v186,
    v187,
    v188,
    v189,
    v190);
  v191 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v191,
    14,
    (System_String_o *)StringLiteral_12150/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19613/*"img_shop_15"*/,
    1,
    v192);
  if ( v191 )
  {
    v50 = sub_B2C41C(v191, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 0xC )
    goto LABEL_87;
  v94->m_Items[12] = v191;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[12],
    (System_Int32_array **)v191,
    v193,
    v194,
    v195,
    v196,
    v197,
    v198);
  v199 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v199,
    15,
    (System_String_o *)StringLiteral_12155/*"SHOP_HELP_SHOP04_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19614/*"img_shop_16"*/,
    2,
    v200);
  if ( v199 )
  {
    v50 = sub_B2C41C(v199, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 0xD )
    goto LABEL_87;
  v94->m_Items[13] = v199;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[13],
    (System_Int32_array **)v199,
    v201,
    v202,
    v203,
    v204,
    v205,
    v206);
  v207 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v207,
    17,
    (System_String_o *)StringLiteral_12146/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19615/*"img_shop_17"*/,
    2,
    v208);
  if ( v207 )
  {
    v50 = sub_B2C41C(v207, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 0xE )
    goto LABEL_87;
  v94->m_Items[14] = v207;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[14],
    (System_Int32_array **)v207,
    v209,
    v210,
    v211,
    v212,
    v213,
    v214);
  v215 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v215,
    18,
    (System_String_o *)StringLiteral_12156/*"SHOP_HELP_SHOP13_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19616/*"img_shop_18"*/,
    1,
    v216);
  if ( v215 )
  {
    v50 = sub_B2C41C(v215, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 0xF )
    goto LABEL_87;
  v94->m_Items[15] = v215;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[15],
    (System_Int32_array **)v215,
    v217,
    v218,
    v219,
    v220,
    v221,
    v222);
  v223 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v223,
    19,
    (System_String_o *)StringLiteral_12163/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19617/*"img_shop_20"*/,
    2,
    v224);
  if ( v223 )
  {
    v50 = sub_B2C41C(v223, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 0x10 )
    goto LABEL_87;
  v94->m_Items[16] = v223;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[16],
    (System_Int32_array **)v223,
    v225,
    v226,
    v227,
    v228,
    v229,
    v230);
  v231 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v231,
    20,
    (System_String_o *)StringLiteral_12157/*"SHOP_HELP_SHOP15_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19618/*"img_shop_21"*/,
    2,
    v232);
  if ( v231 )
  {
    v50 = sub_B2C41C(v231, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 0x11 )
    goto LABEL_87;
  v94->m_Items[17] = v231;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[17],
    (System_Int32_array **)v231,
    v233,
    v234,
    v235,
    v236,
    v237,
    v238);
  v239 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v239,
    21,
    (System_String_o *)StringLiteral_12149/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_19619/*"img_shop_22"*/,
    2,
    v240);
  if ( v239 )
  {
    v50 = sub_B2C41C(v239, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_88;
  }
  if ( v94->max_length <= 0x12 )
    goto LABEL_87;
  v94->m_Items[18] = v239;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[18],
    (System_Int32_array **)v239,
    v241,
    v242,
    v243,
    v244,
    v245,
    v246);
  v247 = (ShopHelpItemInfo_o *)sub_B2C42C(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v247, 22, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_19606/*"img_shop_0"*/, 1, v248);
  if ( v247 )
  {
    v50 = sub_B2C41C(v247, v94->obj.klass->_1.element_class);
    if ( !v50 )
    {
LABEL_88:
      v269 = sub_B2C454(v50);
      sub_B2C400(v269, 0LL);
    }
  }
  if ( v94->max_length <= 0x13 )
  {
LABEL_87:
    v268 = sub_B2C460(v50);
    sub_B2C400(v268, 0LL);
  }
  v94->m_Items[19] = v247;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v94->m_Items[19],
    (System_Int32_array **)v247,
    v249,
    v250,
    v251,
    v252,
    v253,
    v254);
  this->fields.itemInfoList = v94;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemInfoList,
    (System_Int32_array **)v94,
    v255,
    v256,
    v257,
    v258,
    v259,
    v260);
  v261 = (System_Array_o *)sub_B2C374(ShopHelpItemInfo_ItemKind___TypeInfo, 18LL);
  v270.fields.value = Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v261, v270, 0LL);
  this->fields.kinds = (struct ShopHelpItemInfo_ItemKind_array *)v261;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.kinds,
    (System_Int32_array **)v261,
    v262,
    v263,
    v264,
    v265,
    v266,
    v267);
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
    sub_B2C2F8(p_onFadeOut, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_418916B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ShopHelpListViewManager_CallOnFadeOut__, v10);
    byte_418916B = 1;
  }
  this->fields.onFadeOut = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onFadeOut,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseDialog = this->fields.baseDialog;
  v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0LL);
  if ( !baseDialog )
    sub_B2C434(v13, v14);
  ShopHelpMenu__Close(baseDialog, v12, v15);
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
  const MethodInfo *v15; // x1
  BaseDialog_o *baseDialog; // x0
  struct ShopHelpItemInfo_ItemKind_array *kinds; // x8
  struct ShopHelpItemInfo_ItemKind_array *v18; // x24
  __int64 v19; // x8
  unsigned __int64 v20; // x25
  int32_t v21; // w21
  ShopRootConstants_c *v22; // x0
  struct ShopHelpItemInfo_array *itemInfoList; // x11
  unsigned __int64 max_length; // x8
  unsigned __int64 v25; // x9
  ShopHelpItemInfo_o **m_Items; // x11
  ShopHelpItemInfo_o *v27; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x21
  int32_t size; // w22
  __int64 v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x0

  if ( (byte_418916A & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_ShopMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_B2C35C(&ShopHelpListViewItem_TypeInfo, v13);
    sub_B2C35C(&ShopRootConstants_TypeInfo, v14);
    byte_418916A = 1;
  }
  this->fields.onFadeOut = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.onFadeOut, 0LL, v2, v3, v4, v5, v6, v7);
  baseDialog = (BaseDialog_o *)this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_40;
  BaseDialog__Open(baseDialog, 0LL, 0, 0LL);
  kinds = this->fields.kinds;
  if ( !kinds )
    goto LABEL_40;
  ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0LL);
  v18 = this->fields.kinds;
  if ( !v18 )
    goto LABEL_40;
  v19 = *(_QWORD *)&v18->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v19 )
      {
LABEL_39:
        v37 = sub_B2C460(baseDialog);
        sub_B2C400(v37, 0LL);
      }
      v21 = v18->m_Items[v20 + 1];
      switch ( v21 )
      {
        case 15:
          v22 = ShopRootConstants_TypeInfo;
          if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ShopRootConstants_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          }
          baseDialog = (BaseDialog_o *)ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v22);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_37;
          goto LABEL_27;
        case 16:
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          baseDialog = (BaseDialog_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopMaster___);
          if ( !baseDialog )
            goto LABEL_40;
          baseDialog = (BaseDialog_o *)ShopMaster__IsEnableEventShop_27646972((ShopMaster_o *)baseDialog, v15);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_37;
LABEL_27:
          itemInfoList = this->fields.itemInfoList;
          if ( !itemInfoList )
            goto LABEL_40;
          max_length = itemInfoList->max_length;
          if ( (__int64)(max_length << 32) < 1 )
            goto LABEL_37;
          v25 = 0LL;
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
        if ( v25 >= max_length )
          goto LABEL_39;
        v27 = m_Items[v25];
        if ( v27 )
        {
          if ( v27->fields._Kind_k__BackingField == v21 )
            break;
        }
        if ( (__int64)++v25 >= (int)max_length )
          goto LABEL_37;
      }
      itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
      if ( !itemList )
        break;
      size = itemList->fields._size;
      v30 = sub_B2C42C(ShopHelpListViewItem_TypeInfo);
      ListViewItem___ctor_24128628((ListViewItem_o *)v30, size, 0LL);
      *(_QWORD *)(v30 + 112) = v27;
      sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 112), (System_Int32_array **)v27, v31, v32, v33, v34, v35, v36);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
LABEL_37:
      LODWORD(v19) = v18->max_length;
      if ( (__int64)++v20 >= (int)v19 )
        goto LABEL_38;
    }
LABEL_40:
    sub_B2C434(baseDialog, v15);
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
  __int64 v8; // x1

  if ( (byte_4189168 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, path);
    sub_B2C35C(&AssetManager_TypeInfo, v6);
    byte_4189168 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( !AssetStorage )
    sub_B2C434(0LL, v8);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
}


void __fastcall ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_array *helpBasePaths; // x20
  System_Action_o *v6; // x21

  if ( (byte_4189166 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    sub_B2C35C(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, v4);
    byte_4189166 = 1;
  }
  if ( !this->fields.initMode )
  {
    this->fields.initMode = 1;
    helpBasePaths = this->fields.helpBasePaths;
    v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage_30159204(helpBasePaths, v6, 1, 0LL);
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

  if ( (byte_4189169 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_B2C35C(&AssetManager_TypeInfo, paths);
    byte_4189169 = 1;
  }
  if ( !paths )
    sub_B2C434(this, paths);
  v4 = *(_QWORD *)&paths->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)v4 )
      {
        v7 = sub_B2C460(this);
        sub_B2C400(v7, 0LL);
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
  __int64 v4; // x1
  UnityEngine_GameObject_o *BaseWindow; // x0

  v3 = this;
  if ( (byte_4189167 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    byte_4189167 = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL)) == 0LL
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_B2C434(BaseWindow, v4);
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

  if ( (byte_418916C & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_B2C35C(&ShopHelpListViewObject_TypeInfo, obj);
    byte_418916C = 1;
  }
  if ( !obj
    || (v5 = *(&ShopHelpListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
  UnityEngine_Material_o *v8; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *BaseWindow; // x0
  const MethodInfo *v11; // x3
  struct System_String_array *helpBasePaths; // x8
  struct System_String_array *helpBaseNames; // x9
  const MethodInfo *v14; // x3
  struct System_String_array *v15; // x8
  struct System_String_array *v16; // x9
  UnityEngine_Texture_o *AssetStorageTexture2D; // x0
  __int64 v18; // x0

  v3 = this;
  if ( (byte_418916E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_4537/*"Custom/SpriteWithMask"*/, v5);
    this = (ShopHelpListViewManager_o *)sub_B2C35C(&StringLiteral_16015/*"_MaskTex"*/, v6);
    byte_418916E = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v7 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4537/*"Custom/SpriteWithMask"*/, 0LL);
    v8 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0LL);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL);
      if ( BaseWindow )
      {
        BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)BaseWindow,
                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
        if ( BaseWindow )
        {
          BaseWindow = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseWindow->klass[1].vtable._2_GetHashCode.method)(
                                                     BaseWindow,
                                                     v8,
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
                                                         v11);
              if ( v8 )
              {
                UnityEngine_Material__set_mainTexture(v8, (UnityEngine_Texture_o *)BaseWindow, 0LL);
                v15 = v3->fields.helpBasePaths;
                if ( v15 )
                {
                  if ( v15->max_length <= 1 )
                    goto LABEL_19;
                  v16 = v3->fields.helpBaseNames;
                  if ( v16 )
                  {
                    if ( v16->max_length > 1 )
                    {
                      AssetStorageTexture2D = (UnityEngine_Texture_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                                         (ShopHelpListViewManager_o *)BaseWindow,
                                                                         v15->m_Items[1],
                                                                         v16->m_Items[1],
                                                                         v14);
                      UnityEngine_Material__SetTexture(
                        v8,
                        (System_String_o *)StringLiteral_16015/*"_MaskTex"*/,
                        AssetStorageTexture2D,
                        0LL);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    v18 = sub_B2C460(BaseWindow);
                    sub_B2C400(v18, 0LL);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_B2C434(BaseWindow, v9);
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}