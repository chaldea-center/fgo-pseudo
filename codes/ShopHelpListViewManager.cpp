void __fastcall ShopHelpListViewManager___ctor(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x20
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x20
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct ShopHelpItemInfo_array *v47; // x20
  ShopHelpItemInfo_o *v48; // x21
  const MethodInfo *v49; // x5
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  ShopHelpItemInfo_o *v56; // x21
  const MethodInfo *v57; // x5
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  ShopHelpItemInfo_o *v64; // x21
  const MethodInfo *v65; // x5
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  ShopHelpItemInfo_o *v72; // x21
  const MethodInfo *v73; // x5
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  ShopHelpItemInfo_o *v80; // x21
  const MethodInfo *v81; // x5
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  ShopHelpItemInfo_o *v88; // x21
  const MethodInfo *v89; // x5
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  ShopHelpItemInfo_o *v96; // x21
  const MethodInfo *v97; // x5
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  ShopHelpItemInfo_o *v104; // x21
  const MethodInfo *v105; // x5
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  ShopHelpItemInfo_o *v112; // x21
  const MethodInfo *v113; // x5
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  ShopHelpItemInfo_o *v120; // x21
  const MethodInfo *v121; // x5
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  ShopHelpItemInfo_o *v128; // x21
  const MethodInfo *v129; // x5
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  ShopHelpItemInfo_o *v136; // x21
  const MethodInfo *v137; // x5
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  ShopHelpItemInfo_o *v144; // x21
  const MethodInfo *v145; // x5
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  ShopHelpItemInfo_o *v152; // x21
  const MethodInfo *v153; // x5
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  ShopHelpItemInfo_o *v160; // x21
  const MethodInfo *v161; // x5
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  ShopHelpItemInfo_o *v168; // x21
  const MethodInfo *v169; // x5
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  ShopHelpItemInfo_o *v176; // x21
  const MethodInfo *v177; // x5
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  ShopHelpItemInfo_o *v184; // x21
  const MethodInfo *v185; // x5
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  ShopHelpItemInfo_o *v192; // x21
  const MethodInfo *v193; // x5
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  ShopHelpItemInfo_o *v200; // x21
  const MethodInfo *v201; // x5
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  System_Array_o *v214; // x0
  struct ShopHelpItemInfo_ItemKind_array *v215; // x20
  int64_t v216; // x2
  int32_t v217; // w3
  System_String_o *v218; // x4
  BattleSetupInfo_o *v219; // x5
  FollowerInfo_o *v220; // x6
  PartyListViewItem_o *v221; // x7
  __int64 v222; // x0
  System_RuntimeFieldHandle_o v223; // 0:w1.4

  if ( (byte_4BD89FF & 1) == 0 )
  {
    sub_1C21E38(&ShopHelpItemInfo_ItemKind___TypeInfo);
    sub_1C21E38(&ShopHelpItemInfo___TypeInfo);
    sub_1C21E38(&ShopHelpItemInfo_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335);
    sub_1C21E38(&StringLiteral_12277/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_12284/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_12273/*"SHOP_HELP_PURE_PRI_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_14858/*"Tutorial/tutorial_alpha"*/);
    sub_1C21E38(&StringLiteral_20818/*"img_shop_15"*/);
    sub_1C21E38(&StringLiteral_20827/*"img_shop_7"*/);
    sub_1C21E38(&StringLiteral_20814/*"img_shop_11"*/);
    sub_1C21E38(&StringLiteral_12283/*"SHOP_HELP_SVT_COSTUME_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_12269/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_12276/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_20824/*"img_shop_22"*/);
    sub_1C21E38(&StringLiteral_12279/*"SHOP_HELP_START_UP_SUMMON"*/);
    sub_1C21E38(&StringLiteral_24534/*"tutorial_0006"*/);
    sub_1C21E38(&StringLiteral_12266/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_12272/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_12268/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_12275/*"SHOP_HELP_REVIVAL_ITEM_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_20816/*"img_shop_13"*/);
    sub_1C21E38(&StringLiteral_20829/*"img_shop_9"*/);
    sub_1C21E38(&StringLiteral_12281/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_12282/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_20813/*"img_shop_10"*/);
    sub_1C21E38(&StringLiteral_12271/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_20819/*"img_shop_16"*/);
    sub_1C21E38(&StringLiteral_20820/*"img_shop_17"*/);
    sub_1C21E38(&StringLiteral_20822/*"img_shop_20"*/);
    sub_1C21E38(&StringLiteral_20828/*"img_shop_8"*/);
    sub_1C21E38(&StringLiteral_20826/*"img_shop_4"*/);
    sub_1C21E38(&StringLiteral_12267/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_20823/*"img_shop_21"*/);
    sub_1C21E38(&StringLiteral_20821/*"img_shop_18"*/);
    sub_1C21E38(&StringLiteral_12278/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_12270/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_20825/*"img_shop_3"*/);
    sub_1C21E38(&StringLiteral_20811/*"img_shop_0"*/);
    sub_1C21E38(&StringLiteral_14857/*"Tutorial/tutorial_0006"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_20817/*"img_shop_14"*/);
    sub_1C21E38(&StringLiteral_12280/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_20812/*"img_shop_1"*/);
    sub_1C21E38(&StringLiteral_24535/*"tutorial_alpha"*/);
    sub_1C21E38(&StringLiteral_12274/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_20815/*"img_shop_12"*/);
    byte_4BD89FF = 1;
  }
  v3 = sub_1C21EE0(string___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_73;
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_71;
  v12 = StringLiteral_14857/*"Tutorial/tutorial_0006"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_14857/*"Tutorial/tutorial_0006"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_71;
  v19 = StringLiteral_14858/*"Tutorial/tutorial_alpha"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_14858/*"Tutorial/tutorial_alpha"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18);
  this->fields.helpBasePaths = (struct System_String_array *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.helpBasePaths, v11, v20, v21, v22, v23, v24, v25);
  v3 = sub_1C21EE0(string___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_73;
  v32 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_71;
  v33 = StringLiteral_24534/*"tutorial_0006"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_24534/*"tutorial_0006"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), v33, v26, v27, v28, v29, v30, v31);
  if ( *(_DWORD *)(v32 + 24) <= 1u )
    goto LABEL_71;
  v40 = StringLiteral_24535/*"tutorial_alpha"*/;
  *(_QWORD *)(v32 + 40) = StringLiteral_24535/*"tutorial_alpha"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v32 + 40), v40, v34, v35, v36, v37, v38, v39);
  this->fields.helpBaseNames = (struct System_String_array *)v32;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.helpBaseNames, v32, v41, v42, v43, v44, v45, v46);
  v47 = (struct ShopHelpItemInfo_array *)sub_1C21EE0(ShopHelpItemInfo___TypeInfo, 20LL);
  v48 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v48,
    1,
    (System_String_o *)StringLiteral_12269/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20828/*"img_shop_8"*/,
    2,
    v49);
  if ( !v47 )
LABEL_73:
    sub_1C22094(v3, v4);
  if ( v48 )
  {
    v3 = sub_1C21F74(v48, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( !v47->max_length )
    goto LABEL_71;
  v47->m_Items[0] = v48;
  sub_1C21DDC((PartyOrganizationUtility_o *)v47->m_Items, (int64_t)v48, v50, v51, v52, v53, v54, v55);
  v56 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v56,
    16,
    (System_String_o *)StringLiteral_12279/*"SHOP_HELP_START_UP_SUMMON"*/,
    (System_String_o *)StringLiteral_20820/*"img_shop_17"*/,
    2,
    v57);
  if ( v56 )
  {
    v3 = sub_1C21F74(v56, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_71;
  v47->m_Items[1] = v56;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[1], (int64_t)v56, v58, v59, v60, v61, v62, v63);
  v64 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v64,
    2,
    (System_String_o *)StringLiteral_12276/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20826/*"img_shop_4"*/,
    2,
    v65);
  if ( v64 )
  {
    v3 = sub_1C21F74(v64, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_71;
  v47->m_Items[2] = v64;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[2], (int64_t)v64, v66, v67, v68, v69, v70, v71);
  v72 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v72,
    3,
    (System_String_o *)StringLiteral_12272/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20825/*"img_shop_3"*/,
    1,
    v73);
  if ( v72 )
  {
    v3 = sub_1C21F74(v72, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_71;
  v47->m_Items[3] = v72;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[3], (int64_t)v72, v74, v75, v76, v77, v78, v79);
  v80 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v80,
    4,
    (System_String_o *)StringLiteral_12274/*"SHOP_HELP_RARE_PRI_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20814/*"img_shop_11"*/,
    2,
    v81);
  if ( v80 )
  {
    v3 = sub_1C21F74(v80, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_71;
  v47->m_Items[4] = v80;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[4], (int64_t)v80, v82, v83, v84, v85, v86, v87);
  v88 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v88,
    5,
    (System_String_o *)StringLiteral_12280/*"SHOP_HELP_STONE_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20829/*"img_shop_9"*/,
    1,
    v89);
  if ( v88 )
  {
    v3 = sub_1C21F74(v88, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_71;
  v47->m_Items[5] = v88;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[5], (int64_t)v88, v90, v91, v92, v93, v94, v95);
  v96 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v96,
    6,
    (System_String_o *)StringLiteral_12281/*"SHOP_HELP_STONE_PURCHASE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20812/*"img_shop_1"*/,
    1,
    v97);
  if ( v96 )
  {
    v3 = sub_1C21F74(v96, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_71;
  v47->m_Items[6] = v96;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[6], (int64_t)v96, v98, v99, v100, v101, v102, v103);
  v104 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v104,
    7,
    (System_String_o *)StringLiteral_12277/*"SHOP_HELP_SERVANT_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20815/*"img_shop_12"*/,
    1,
    v105);
  if ( v104 )
  {
    v3 = sub_1C21F74(v104, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 7 )
    goto LABEL_71;
  v47->m_Items[7] = v104;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[7], (int64_t)v104, v106, v107, v108, v109, v110, v111);
  v112 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v112,
    8,
    (System_String_o *)StringLiteral_12268/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20816/*"img_shop_13"*/,
    1,
    v113);
  if ( v112 )
  {
    v3 = sub_1C21F74(v112, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 8 )
    goto LABEL_71;
  v47->m_Items[8] = v112;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[8], (int64_t)v112, v114, v115, v116, v117, v118, v119);
  v120 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v120,
    11,
    (System_String_o *)StringLiteral_12266/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20813/*"img_shop_10"*/,
    1,
    v121);
  if ( v120 )
  {
    v3 = sub_1C21F74(v120, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 9 )
    goto LABEL_71;
  v47->m_Items[9] = v120;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[9], (int64_t)v120, v122, v123, v124, v125, v126, v127);
  v128 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v128,
    13,
    (System_String_o *)StringLiteral_12278/*"SHOP_HELP_SPECIAL_ITEM_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20817/*"img_shop_14"*/,
    2,
    v129);
  if ( v128 )
  {
    v3 = sub_1C21F74(v128, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 0xA )
    goto LABEL_71;
  v47->m_Items[10] = v128;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[10], (int64_t)v128, v130, v131, v132, v133, v134, v135);
  v136 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v136,
    12,
    (System_String_o *)StringLiteral_12282/*"SHOP_HELP_STONE_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20827/*"img_shop_7"*/,
    1,
    v137);
  if ( v136 )
  {
    v3 = sub_1C21F74(v136, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 0xB )
    goto LABEL_71;
  v47->m_Items[11] = v136;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[11], (int64_t)v136, v138, v139, v140, v141, v142, v143);
  v144 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v144,
    14,
    (System_String_o *)StringLiteral_12271/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20818/*"img_shop_15"*/,
    1,
    v145);
  if ( v144 )
  {
    v3 = sub_1C21F74(v144, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 0xC )
    goto LABEL_71;
  v47->m_Items[12] = v144;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[12], (int64_t)v144, v146, v147, v148, v149, v150, v151);
  v152 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v152,
    15,
    (System_String_o *)StringLiteral_12283/*"SHOP_HELP_SVT_COSTUME_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20819/*"img_shop_16"*/,
    2,
    v153);
  if ( v152 )
  {
    v3 = sub_1C21F74(v152, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 0xD )
    goto LABEL_71;
  v47->m_Items[13] = v152;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[13], (int64_t)v152, v154, v155, v156, v157, v158, v159);
  v160 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v160,
    17,
    (System_String_o *)StringLiteral_12267/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20820/*"img_shop_17"*/,
    2,
    v161);
  if ( v160 )
  {
    v3 = sub_1C21F74(v160, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 0xE )
    goto LABEL_71;
  v47->m_Items[14] = v160;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[14], (int64_t)v160, v162, v163, v164, v165, v166, v167);
  v168 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v168,
    18,
    (System_String_o *)StringLiteral_12273/*"SHOP_HELP_PURE_PRI_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20821/*"img_shop_18"*/,
    1,
    v169);
  if ( v168 )
  {
    v3 = sub_1C21F74(v168, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 0xF )
    goto LABEL_71;
  v47->m_Items[15] = v168;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[15], (int64_t)v168, v170, v171, v172, v173, v174, v175);
  v176 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v176,
    19,
    (System_String_o *)StringLiteral_12284/*"SHOP_HELP_TRADE_AP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20822/*"img_shop_20"*/,
    2,
    v177);
  if ( v176 )
  {
    v3 = sub_1C21F74(v176, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 0x10 )
    goto LABEL_71;
  v47->m_Items[16] = v176;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[16], (int64_t)v176, v178, v179, v180, v181, v182, v183);
  v184 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v184,
    20,
    (System_String_o *)StringLiteral_12275/*"SHOP_HELP_REVIVAL_ITEM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20823/*"img_shop_21"*/,
    2,
    v185);
  if ( v184 )
  {
    v3 = sub_1C21F74(v184, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 0x11 )
    goto LABEL_71;
  v47->m_Items[17] = v184;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[17], (int64_t)v184, v186, v187, v188, v189, v190, v191);
  v192 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v192,
    21,
    (System_String_o *)StringLiteral_12270/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20824/*"img_shop_22"*/,
    2,
    v193);
  if ( v192 )
  {
    v3 = sub_1C21F74(v192, v47->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_72;
  }
  if ( v47->max_length <= 0x12 )
    goto LABEL_71;
  v47->m_Items[18] = v192;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[18], (int64_t)v192, v194, v195, v196, v197, v198, v199);
  v200 = (ShopHelpItemInfo_o *)sub_1C22084(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v200, 22, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_20811/*"img_shop_0"*/, 1, v201);
  if ( v200 )
  {
    v3 = sub_1C21F74(v200, v47->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_72:
      v222 = sub_1C220B8();
      sub_1C21F60(v222, 0LL);
    }
  }
  if ( v47->max_length <= 0x13 )
LABEL_71:
    sub_1C2209C(v3, v4);
  v47->m_Items[19] = v200;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[19], (int64_t)v200, v202, v203, v204, v205, v206, v207);
  this->fields.itemInfoList = v47;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.itemInfoList,
    (int64_t)v47,
    v208,
    v209,
    v210,
    v211,
    v212,
    v213);
  v214 = (System_Array_o *)sub_1C21EE0(ShopHelpItemInfo_ItemKind___TypeInfo, 18LL);
  v223.fields.value = Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335;
  v215 = (struct ShopHelpItemInfo_ItemKind_array *)v214;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v214, v223, 0LL);
  this->fields.kinds = v215;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.kinds, (int64_t)v215, v216, v217, v218, v219, v220, v221);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopHelpListViewManager__CallOnFadeOut(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *onFadeOut; // x19
  PartyOrganizationUtility_o *p_onFadeOut; // x0

  onFadeOut = this->fields.onFadeOut;
  if ( onFadeOut )
  {
    p_onFadeOut = (PartyOrganizationUtility_o *)&this->fields.onFadeOut;
    p_onFadeOut->klass = 0LL;
    sub_1C21DDC(p_onFadeOut, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onFadeOut->fields.m_target)(
      onFadeOut->fields.original_method_info,
      *(_QWORD *)&onFadeOut->fields.extra_arg);
  }
}


void __fastcall ShopHelpListViewManager__CloseHelpDialog(
        ShopHelpListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ShopHelpMenu_o *baseDialog; // x20
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4BD89FD & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ShopHelpListViewManager_CallOnFadeOut__);
    byte_4BD89FD = 1;
  }
  this->fields.onFadeOut = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.onFadeOut,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseDialog = this->fields.baseDialog;
  v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0LL);
  if ( !baseDialog )
    sub_1C22094(v12, v13);
  ShopHelpMenu__Close(baseDialog, v11, 0LL);
}


void __fastcall ShopHelpListViewManager__CreateList(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  ShopHelpMenu_o *baseDialog; // x0
  struct ShopHelpItemInfo_ItemKind_array *kinds; // x8
  struct ShopHelpItemInfo_ItemKind_array *v12; // x24
  __int64 v13; // x8
  unsigned __int64 i; // x25
  int32_t v15; // w20
  struct ShopHelpItemInfo_array *itemInfoList; // x9
  __int64 v17; // x8
  int64_t *m_Items; // x9
  int64_t v19; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  int64_t v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4BD89FC & 1) == 0 )
  {
    sub_1C21E38(&CoinRoomUtility_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&ShopHelpListViewItem_TypeInfo);
    sub_1C21E38(&ShopRootConstants_TypeInfo);
    byte_4BD89FC = 1;
  }
  this->fields.onFadeOut = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.onFadeOut, 0LL, v2, v3, v4, v5, v6, v7);
  baseDialog = this->fields.baseDialog;
  if ( !baseDialog
    || (ShopHelpMenu__Open(baseDialog, 0LL), (kinds = this->fields.kinds) == 0LL)
    || (ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0LL), (v12 = this->fields.kinds) == 0LL) )
  {
LABEL_39:
    sub_1C22094(baseDialog, v9);
  }
  v13 = *(_QWORD *)&v12->max_length;
  if ( (int)v13 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v13; ++i )
    {
      if ( i >= (unsigned int)v13 )
        sub_1C2209C(baseDialog, v9);
      v15 = v12->m_Items[i + 1];
      switch ( v15 )
      {
        case 17:
          if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)CoinRoomUtility__IsTargetQuestClear(0LL);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_36;
          break;
        case 16:
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopMaster___);
          if ( !baseDialog )
            goto LABEL_39;
          baseDialog = (ShopHelpMenu_o *)ShopMaster__IsEnableEventShop_41197884((ShopMaster_o *)baseDialog, 0LL);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_36;
          break;
        case 15:
          if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          baseDialog = (ShopHelpMenu_o *)ShopRootConstants__IsSvtCostumeShopOpen(0LL);
          if ( ((unsigned __int8)baseDialog & 1) == 0 )
            goto LABEL_36;
          break;
      }
      itemInfoList = this->fields.itemInfoList;
      if ( !itemInfoList )
        goto LABEL_39;
      if ( (int)*(_QWORD *)&itemInfoList->max_length >= 1 )
      {
        v17 = (unsigned int)*(_QWORD *)&itemInfoList->max_length;
        m_Items = (int64_t *)itemInfoList->m_Items;
        while ( 1 )
        {
          v19 = *m_Items;
          if ( *m_Items )
          {
            if ( *(_DWORD *)(v19 + 16) == v15 )
              break;
          }
          --v17;
          ++m_Items;
          if ( !v17 )
            goto LABEL_36;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_39;
        size = itemList->fields._size;
        v22 = sub_1C22084(ShopHelpListViewItem_TypeInfo);
        ListViewItem___ctor_41996612((ListViewItem_o *)v22, size, 0LL);
        *(_QWORD *)(v22 + 112) = v19;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 112), v19, v23, v24, v25, v26, v27, v28);
        items = itemList->fields._items;
        v36 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_39;
        v37 = itemList->fields._size;
        if ( (unsigned int)v37 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v22,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + v37;
          itemList->fields._size = v37 + 1;
          v38[4] = (Il2CppClass *)v22;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v38 + 4), v22, v29, v30, v31, v32, v33, v34);
        }
      }
LABEL_36:
      LODWORD(v13) = v12->max_length;
    }
  }
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
  AssetData_o *AssetStorage; // x0
  __int64 v7; // x1

  if ( (byte_4BD89FA & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D____77626312);
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BD89FA = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( !AssetStorage )
    sub_1C22094(0LL, v7);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__49880776(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
}


void __fastcall ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_array *helpBasePaths; // x20
  System_Action_o *v4; // x21

  if ( (byte_4BD89F8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__);
    byte_4BD89F8 = 1;
  }
  if ( !this->fields.initMode )
  {
    this->fields.initMode = 1;
    helpBasePaths = this->fields.helpBasePaths;
    v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_39041504(helpBasePaths, v4, 1, 0LL);
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

  if ( (byte_4BD89FB & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BD89FB = 1;
  }
  if ( !paths )
    sub_1C22094(this, paths);
  v4 = *(_QWORD *)&paths->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)v4 )
        sub_1C2209C(this, paths);
      v6 = paths->m_Items[v5];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
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
  if ( (byte_4BD89F9 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4BD89F9 = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL)) == 0LL
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_1C22094(BaseWindow, v4);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4BD89FE & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C21E38(&ShopHelpListViewObject_TypeInfo);
    byte_4BD89FE = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopHelpListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_1C22094(this, obj);
  }
  ShopHelpListViewObject__Init((ShopHelpListViewObject_o *)obj, 2, (const MethodInfo *)item);
}


void __fastcall ShopHelpListViewManager___LoadBaseSprite_b__9_0(
        ShopHelpListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopHelpListViewManager_o *v3; // x19
  UnityEngine_Shader_o *v4; // x21
  UnityEngine_Material_o *v5; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *BaseWindow; // x0
  const MethodInfo *v8; // x3
  struct System_String_array *helpBasePaths; // x8
  struct System_String_array *helpBaseNames; // x9
  const MethodInfo *v11; // x3
  struct System_String_array *v12; // x8
  struct System_String_array *v13; // x9
  UnityEngine_Texture_o *AssetStorageTexture2D; // x0

  v3 = this;
  if ( (byte_4BD8A00 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&StringLiteral_5081/*"Custom/SpriteWithMask"*/);
    this = (ShopHelpListViewManager_o *)sub_1C21E38(&StringLiteral_16545/*"_MaskTex"*/);
    byte_4BD8A00 = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v4 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5081/*"Custom/SpriteWithMask"*/, 0LL);
    v5 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v5, v4, 0LL);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL);
      if ( BaseWindow )
      {
        BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)BaseWindow,
                                                   (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
        if ( BaseWindow )
        {
          BaseWindow = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseWindow->klass[1].vtable._2_GetHashCode.method)(
                                                     BaseWindow,
                                                     v5,
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
                                                         v8);
              if ( v5 )
              {
                UnityEngine_Material__set_mainTexture(v5, (UnityEngine_Texture_o *)BaseWindow, 0LL);
                v12 = v3->fields.helpBasePaths;
                if ( v12 )
                {
                  if ( v12->max_length <= 1 )
                    goto LABEL_19;
                  v13 = v3->fields.helpBaseNames;
                  if ( v13 )
                  {
                    if ( v13->max_length > 1 )
                    {
                      AssetStorageTexture2D = (UnityEngine_Texture_o *)ShopHelpListViewManager__GetAssetStorageTexture2D(
                                                                         (ShopHelpListViewManager_o *)BaseWindow,
                                                                         v12->m_Items[1],
                                                                         v13->m_Items[1],
                                                                         v11);
                      UnityEngine_Material__SetTexture(
                        v5,
                        (System_String_o *)StringLiteral_16545/*"_MaskTex"*/,
                        AssetStorageTexture2D,
                        0LL);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    sub_1C2209C(BaseWindow, v6);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C22094(BaseWindow, v6);
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}