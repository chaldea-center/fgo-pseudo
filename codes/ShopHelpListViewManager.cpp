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
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x20
  int64_t v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x20
  int64_t v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x1
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct ShopHelpItemInfo_array *v94; // x20
  ShopHelpItemInfo_o *v95; // x21
  const MethodInfo *v96; // x5
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  ShopHelpItemInfo_o *v103; // x21
  const MethodInfo *v104; // x5
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  ShopHelpItemInfo_o *v111; // x21
  const MethodInfo *v112; // x5
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  ShopHelpItemInfo_o *v119; // x21
  const MethodInfo *v120; // x5
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  ShopHelpItemInfo_o *v127; // x21
  const MethodInfo *v128; // x5
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  ShopHelpItemInfo_o *v135; // x21
  const MethodInfo *v136; // x5
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  ShopHelpItemInfo_o *v143; // x21
  const MethodInfo *v144; // x5
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  ShopHelpItemInfo_o *v151; // x21
  const MethodInfo *v152; // x5
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  ShopHelpItemInfo_o *v159; // x21
  const MethodInfo *v160; // x5
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  ShopHelpItemInfo_o *v167; // x21
  const MethodInfo *v168; // x5
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  ShopHelpItemInfo_o *v175; // x21
  const MethodInfo *v176; // x5
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  ShopHelpItemInfo_o *v183; // x21
  const MethodInfo *v184; // x5
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  ShopHelpItemInfo_o *v191; // x21
  const MethodInfo *v192; // x5
  int64_t v193; // x2
  int32_t v194; // w3
  System_String_o *v195; // x4
  BattleSetupInfo_o *v196; // x5
  FollowerInfo_o *v197; // x6
  PartyListViewItem_o *v198; // x7
  ShopHelpItemInfo_o *v199; // x21
  const MethodInfo *v200; // x5
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  ShopHelpItemInfo_o *v207; // x21
  const MethodInfo *v208; // x5
  int64_t v209; // x2
  int32_t v210; // w3
  System_String_o *v211; // x4
  BattleSetupInfo_o *v212; // x5
  FollowerInfo_o *v213; // x6
  PartyListViewItem_o *v214; // x7
  ShopHelpItemInfo_o *v215; // x21
  const MethodInfo *v216; // x5
  int64_t v217; // x2
  int32_t v218; // w3
  System_String_o *v219; // x4
  BattleSetupInfo_o *v220; // x5
  FollowerInfo_o *v221; // x6
  PartyListViewItem_o *v222; // x7
  ShopHelpItemInfo_o *v223; // x21
  const MethodInfo *v224; // x5
  int64_t v225; // x2
  int32_t v226; // w3
  System_String_o *v227; // x4
  BattleSetupInfo_o *v228; // x5
  FollowerInfo_o *v229; // x6
  PartyListViewItem_o *v230; // x7
  ShopHelpItemInfo_o *v231; // x21
  const MethodInfo *v232; // x5
  int64_t v233; // x2
  int32_t v234; // w3
  System_String_o *v235; // x4
  BattleSetupInfo_o *v236; // x5
  FollowerInfo_o *v237; // x6
  PartyListViewItem_o *v238; // x7
  ShopHelpItemInfo_o *v239; // x21
  const MethodInfo *v240; // x5
  int64_t v241; // x2
  int32_t v242; // w3
  System_String_o *v243; // x4
  BattleSetupInfo_o *v244; // x5
  FollowerInfo_o *v245; // x6
  PartyListViewItem_o *v246; // x7
  ShopHelpItemInfo_o *v247; // x21
  const MethodInfo *v248; // x5
  int64_t v249; // x2
  int32_t v250; // w3
  System_String_o *v251; // x4
  BattleSetupInfo_o *v252; // x5
  FollowerInfo_o *v253; // x6
  PartyListViewItem_o *v254; // x7
  int64_t v255; // x2
  int32_t v256; // w3
  System_String_o *v257; // x4
  BattleSetupInfo_o *v258; // x5
  FollowerInfo_o *v259; // x6
  PartyListViewItem_o *v260; // x7
  System_Array_o *v261; // x0
  struct ShopHelpItemInfo_ItemKind_array *v262; // x20
  int64_t v263; // x2
  int32_t v264; // w3
  System_String_o *v265; // x4
  BattleSetupInfo_o *v266; // x5
  FollowerInfo_o *v267; // x6
  PartyListViewItem_o *v268; // x7
  __int64 v269; // x0
  System_RuntimeFieldHandle_o v270; // 0:w1.4

  if ( (byte_4BB0BB3 & 1) == 0 )
  {
    sub_1C13D24(&ShopHelpItemInfo_ItemKind___TypeInfo, method);
    sub_1C13D24(&ShopHelpItemInfo___TypeInfo, v3);
    sub_1C13D24(&ShopHelpItemInfo_TypeInfo, v4);
    sub_1C13D24(&string___TypeInfo, v5);
    sub_1C13D24(
      &Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335,
      v6);
    sub_1C13D24(&StringLiteral_12255/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/, v7);
    sub_1C13D24(&StringLiteral_12262/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/, v8);
    sub_1C13D24(&StringLiteral_12251/*"SHOP_EVENT_LIST_EMPTY"*/, v9);
    sub_1C13D24(&StringLiteral_14835/*"Trying to remove {0} from rebuild list while we are already inside a rebuild loop. This is not supported."*/, v10);
    sub_1C13D24(&StringLiteral_20787/*"img_return_terminal"*/, v11);
    sub_1C13D24(&StringLiteral_20796/*"img_shop_10"*/, v12);
    sub_1C13D24(&StringLiteral_20783/*"img_return_info"*/, v13);
    sub_1C13D24(&StringLiteral_12261/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/, v14);
    sub_1C13D24(&StringLiteral_12247/*"SHOP_CAN_NOT_RESET_SOLD_OUT_NOTICE_MESSAGE"*/, v15);
    sub_1C13D24(&StringLiteral_12254/*"SHOP_EVENT_SVT_EQUIP"*/, v16);
    sub_1C13D24(&StringLiteral_20793/*"img_servant"*/, v17);
    sub_1C13D24(&StringLiteral_12257/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/, v18);
    sub_1C13D24(&StringLiteral_24494/*"trueRoute"*/, v19);
    sub_1C13D24(&StringLiteral_12244/*"SHOP_BUY_SVT_COSTUME"*/, v20);
    sub_1C13D24(&StringLiteral_12250/*"SHOP_DETAIL_CHECK_DIALOG_FONT_SIZE"*/, v21);
    sub_1C13D24(&StringLiteral_12246/*"SHOP_CAN_NOT_RESET_NOTICE_MESSAGE"*/, v22);
    sub_1C13D24(&StringLiteral_12253/*"SHOP_EVENT_RETURN_ERROR"*/, v23);
    sub_1C13D24(&StringLiteral_20785/*"img_return_modoru2"*/, v24);
    sub_1C13D24(&StringLiteral_20798/*"img_shop_12"*/, v25);
    sub_1C13D24(&StringLiteral_12259/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/, v26);
    sub_1C13D24(&StringLiteral_12260/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/, v27);
    sub_1C13D24(&StringLiteral_20782/*"img_resettxt_"*/, v28);
    sub_1C13D24(&StringLiteral_12249/*"SHOP_COIN_ROOM"*/, v29);
    sub_1C13D24(&StringLiteral_20788/*"img_ribbon_noblephantasmup"*/, v30);
    sub_1C13D24(&StringLiteral_20789/*"img_ribbon_{0}"*/, v31);
    sub_1C13D24(&StringLiteral_20791/*"img_road{0:D4}_{1:D2}"*/, v32);
    sub_1C13D24(&StringLiteral_20797/*"img_shop_11"*/, v33);
    sub_1C13D24(&StringLiteral_20795/*"img_shop_1"*/, v34);
    sub_1C13D24(&StringLiteral_12245/*"SHOP_CANT_BUY"*/, v35);
    sub_1C13D24(&StringLiteral_20792/*"img_rp"*/, v36);
    sub_1C13D24(&StringLiteral_20790/*"img_roadmap_"*/, v37);
    sub_1C13D24(&StringLiteral_12256/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/, v38);
    sub_1C13D24(&StringLiteral_12248/*"SHOP_CAN_RESET_NOTICE_MESSAGE"*/, v39);
    sub_1C13D24(&StringLiteral_20794/*"img_shop_0"*/, v40);
    sub_1C13D24(&StringLiteral_20780/*"img_rank_"*/, v41);
    sub_1C13D24(&StringLiteral_14834/*"Trying to read value of type {0} while reading a value of type {1}"*/, v42);
    sub_1C13D24(&StringLiteral_1/*""*/, v43);
    sub_1C13D24(&StringLiteral_20786/*"img_return_rtF"*/, v44);
    sub_1C13D24(&StringLiteral_12258/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/, v45);
    sub_1C13D24(&StringLiteral_20781/*"img_rank_bg"*/, v46);
    sub_1C13D24(&StringLiteral_24495/*"try"*/, v47);
    sub_1C13D24(&StringLiteral_12252/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/, v48);
    sub_1C13D24(&StringLiteral_20784/*"img_return_modoru"*/, v49);
    byte_4BB0BB3 = 1;
  }
  v50 = sub_1C13DCC(string___TypeInfo, 2LL);
  if ( !v50 )
    goto LABEL_73;
  v58 = v50;
  if ( !*(_DWORD *)(v50 + 24) )
    goto LABEL_71;
  v59 = StringLiteral_14834/*"Trying to read value of type {0} while reading a value of type {1}"*/;
  *(_QWORD *)(v50 + 32) = StringLiteral_14834/*"Trying to read value of type {0} while reading a value of type {1}"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v50 + 32), v59, v52, v53, v54, v55, v56, v57);
  if ( *(_DWORD *)(v58 + 24) <= 1u )
    goto LABEL_71;
  v66 = StringLiteral_14835/*"Trying to remove {0} from rebuild list while we are already inside a rebuild loop. This is not supported."*/;
  *(_QWORD *)(v58 + 40) = StringLiteral_14835/*"Trying to remove {0} from rebuild list while we are already inside a rebuild loop. This is not supported."*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v58 + 40), v66, v60, v61, v62, v63, v64, v65);
  this->fields.helpBasePaths = (struct System_String_array *)v58;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.helpBasePaths, v58, v67, v68, v69, v70, v71, v72);
  v50 = sub_1C13DCC(string___TypeInfo, 2LL);
  if ( !v50 )
    goto LABEL_73;
  v79 = v50;
  if ( !*(_DWORD *)(v50 + 24) )
    goto LABEL_71;
  v80 = StringLiteral_24494/*"trueRoute"*/;
  *(_QWORD *)(v50 + 32) = StringLiteral_24494/*"trueRoute"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v50 + 32), v80, v73, v74, v75, v76, v77, v78);
  if ( *(_DWORD *)(v79 + 24) <= 1u )
    goto LABEL_71;
  v87 = StringLiteral_24495/*"try"*/;
  *(_QWORD *)(v79 + 40) = StringLiteral_24495/*"try"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v79 + 40), v87, v81, v82, v83, v84, v85, v86);
  this->fields.helpBaseNames = (struct System_String_array *)v79;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.helpBaseNames, v79, v88, v89, v90, v91, v92, v93);
  v94 = (struct ShopHelpItemInfo_array *)sub_1C13DCC(ShopHelpItemInfo___TypeInfo, 20LL);
  v95 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v95,
    1,
    (System_String_o *)StringLiteral_12247/*"SHOP_CAN_NOT_RESET_SOLD_OUT_NOTICE_MESSAGE"*/,
    (System_String_o *)StringLiteral_20797/*"img_shop_11"*/,
    2,
    v96);
  if ( !v94 )
LABEL_73:
    sub_1C13F80(v50, v51);
  if ( v95 )
  {
    v50 = sub_1C13E60(v95, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( !v94->max_length )
    goto LABEL_71;
  v94->m_Items[0] = v95;
  sub_1C13CC8((PartyOrganizationUtility_o *)v94->m_Items, (int64_t)v95, v97, v98, v99, v100, v101, v102);
  v103 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v103,
    16,
    (System_String_o *)StringLiteral_12257/*"SHOP_HELP_COIN_ROOM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20789/*"img_ribbon_{0}"*/,
    2,
    v104);
  if ( v103 )
  {
    v50 = sub_1C13E60(v103, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 1 )
    goto LABEL_71;
  v94->m_Items[1] = v103;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[1], (int64_t)v103, v105, v106, v107, v108, v109, v110);
  v111 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v111,
    2,
    (System_String_o *)StringLiteral_12254/*"SHOP_EVENT_SVT_EQUIP"*/,
    (System_String_o *)StringLiteral_20795/*"img_shop_1"*/,
    2,
    v112);
  if ( v111 )
  {
    v50 = sub_1C13E60(v111, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 2 )
    goto LABEL_71;
  v94->m_Items[2] = v111;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[2], (int64_t)v111, v113, v114, v115, v116, v117, v118);
  v119 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v119,
    3,
    (System_String_o *)StringLiteral_12250/*"SHOP_DETAIL_CHECK_DIALOG_FONT_SIZE"*/,
    (System_String_o *)StringLiteral_20794/*"img_shop_0"*/,
    1,
    v120);
  if ( v119 )
  {
    v50 = sub_1C13E60(v119, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 3 )
    goto LABEL_71;
  v94->m_Items[3] = v119;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[3], (int64_t)v119, v121, v122, v123, v124, v125, v126);
  v127 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v127,
    4,
    (System_String_o *)StringLiteral_12252/*"SHOP_EVENT_NO_ITEMS_REQUIRED"*/,
    (System_String_o *)StringLiteral_20783/*"img_return_info"*/,
    2,
    v128);
  if ( v127 )
  {
    v50 = sub_1C13E60(v127, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 4 )
    goto LABEL_71;
  v94->m_Items[4] = v127;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[4], (int64_t)v127, v129, v130, v131, v132, v133, v134);
  v135 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v135,
    5,
    (System_String_o *)StringLiteral_12258/*"SHOP_HELP_EQUIP_FRAME_EXTENSION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20798/*"img_shop_12"*/,
    1,
    v136);
  if ( v135 )
  {
    v50 = sub_1C13E60(v135, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 5 )
    goto LABEL_71;
  v94->m_Items[5] = v135;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[5], (int64_t)v135, v137, v138, v139, v140, v141, v142);
  v143 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v143,
    6,
    (System_String_o *)StringLiteral_12259/*"SHOP_HELP_EVENT_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20781/*"img_rank_bg"*/,
    1,
    v144);
  if ( v143 )
  {
    v50 = sub_1C13E60(v143, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 6 )
    goto LABEL_71;
  v94->m_Items[6] = v143;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[6], (int64_t)v143, v145, v146, v147, v148, v149, v150);
  v151 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v151,
    7,
    (System_String_o *)StringLiteral_12255/*"SHOP_FREE_EXCHANGE_CONDITIONS"*/,
    (System_String_o *)StringLiteral_20784/*"img_return_modoru"*/,
    1,
    v152);
  if ( v151 )
  {
    v50 = sub_1C13E60(v151, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 7 )
    goto LABEL_71;
  v94->m_Items[7] = v151;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[7], (int64_t)v151, v153, v154, v155, v156, v157, v158);
  v159 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v159,
    8,
    (System_String_o *)StringLiteral_12246/*"SHOP_CAN_NOT_RESET_NOTICE_MESSAGE"*/,
    (System_String_o *)StringLiteral_20785/*"img_return_modoru2"*/,
    1,
    v160);
  if ( v159 )
  {
    v50 = sub_1C13E60(v159, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 8 )
    goto LABEL_71;
  v94->m_Items[8] = v159;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[8], (int64_t)v159, v161, v162, v163, v164, v165, v166);
  v167 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v167,
    11,
    (System_String_o *)StringLiteral_12244/*"SHOP_BUY_SVT_COSTUME"*/,
    (System_String_o *)StringLiteral_20782/*"img_resettxt_"*/,
    1,
    v168);
  if ( v167 )
  {
    v50 = sub_1C13E60(v167, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 9 )
    goto LABEL_71;
  v94->m_Items[9] = v167;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[9], (int64_t)v167, v169, v170, v171, v172, v173, v174);
  v175 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v175,
    13,
    (System_String_o *)StringLiteral_12256/*"SHOP_HELP_ANONYMOUS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20786/*"img_return_rtF"*/,
    2,
    v176);
  if ( v175 )
  {
    v50 = sub_1C13E60(v175, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 0xA )
    goto LABEL_71;
  v94->m_Items[10] = v175;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[10], (int64_t)v175, v177, v178, v179, v180, v181, v182);
  v183 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v183,
    12,
    (System_String_o *)StringLiteral_12260/*"SHOP_HELP_EVENT_SVT_EQUIP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20796/*"img_shop_10"*/,
    1,
    v184);
  if ( v183 )
  {
    v50 = sub_1C13E60(v183, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 0xB )
    goto LABEL_71;
  v94->m_Items[11] = v183;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[11], (int64_t)v183, v185, v186, v187, v188, v189, v190);
  v191 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v191,
    14,
    (System_String_o *)StringLiteral_12249/*"SHOP_COIN_ROOM"*/,
    (System_String_o *)StringLiteral_20787/*"img_return_terminal"*/,
    1,
    v192);
  if ( v191 )
  {
    v50 = sub_1C13E60(v191, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 0xC )
    goto LABEL_71;
  v94->m_Items[12] = v191;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[12], (int64_t)v191, v193, v194, v195, v196, v197, v198);
  v199 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v199,
    15,
    (System_String_o *)StringLiteral_12261/*"SHOP_HELP_GRAIL_FRAGMENTS_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20788/*"img_ribbon_noblephantasmup"*/,
    2,
    v200);
  if ( v199 )
  {
    v50 = sub_1C13E60(v199, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 0xD )
    goto LABEL_71;
  v94->m_Items[13] = v199;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[13], (int64_t)v199, v201, v202, v203, v204, v205, v206);
  v207 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v207,
    17,
    (System_String_o *)StringLiteral_12245/*"SHOP_CANT_BUY"*/,
    (System_String_o *)StringLiteral_20789/*"img_ribbon_{0}"*/,
    2,
    v208);
  if ( v207 )
  {
    v50 = sub_1C13E60(v207, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 0xE )
    goto LABEL_71;
  v94->m_Items[14] = v207;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[14], (int64_t)v207, v209, v210, v211, v212, v213, v214);
  v215 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v215,
    18,
    (System_String_o *)StringLiteral_12251/*"SHOP_EVENT_LIST_EMPTY"*/,
    (System_String_o *)StringLiteral_20790/*"img_roadmap_"*/,
    1,
    v216);
  if ( v215 )
  {
    v50 = sub_1C13E60(v215, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 0xF )
    goto LABEL_71;
  v94->m_Items[15] = v215;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[15], (int64_t)v215, v217, v218, v219, v220, v221, v222);
  v223 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v223,
    19,
    (System_String_o *)StringLiteral_12262/*"SHOP_HELP_MANA_SHOP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20791/*"img_road{0:D4}_{1:D2}"*/,
    2,
    v224);
  if ( v223 )
  {
    v50 = sub_1C13E60(v223, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 0x10 )
    goto LABEL_71;
  v94->m_Items[16] = v223;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[16], (int64_t)v223, v225, v226, v227, v228, v229, v230);
  v231 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v231,
    20,
    (System_String_o *)StringLiteral_12253/*"SHOP_EVENT_RETURN_ERROR"*/,
    (System_String_o *)StringLiteral_20792/*"img_rp"*/,
    2,
    v232);
  if ( v231 )
  {
    v50 = sub_1C13E60(v231, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 0x11 )
    goto LABEL_71;
  v94->m_Items[17] = v231;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[17], (int64_t)v231, v233, v234, v235, v236, v237, v238);
  v239 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(
    v239,
    21,
    (System_String_o *)StringLiteral_12248/*"SHOP_CAN_RESET_NOTICE_MESSAGE"*/,
    (System_String_o *)StringLiteral_20793/*"img_servant"*/,
    2,
    v240);
  if ( v239 )
  {
    v50 = sub_1C13E60(v239, v94->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_72;
  }
  if ( v94->max_length <= 0x12 )
    goto LABEL_71;
  v94->m_Items[18] = v239;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[18], (int64_t)v239, v241, v242, v243, v244, v245, v246);
  v247 = (ShopHelpItemInfo_o *)sub_1C13F70(ShopHelpItemInfo_TypeInfo);
  ShopHelpItemInfo___ctor(v247, 22, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_20780/*"img_rank_"*/, 1, v248);
  if ( v247 )
  {
    v50 = sub_1C13E60(v247, v94->obj.klass->_1.element_class);
    if ( !v50 )
    {
LABEL_72:
      v269 = sub_1C13FA4();
      sub_1C13E4C(v269, 0LL);
    }
  }
  if ( v94->max_length <= 0x13 )
LABEL_71:
    sub_1C13F88(v50, v51);
  v94->m_Items[19] = v247;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->m_Items[19], (int64_t)v247, v249, v250, v251, v252, v253, v254);
  this->fields.itemInfoList = v94;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.itemInfoList,
    (int64_t)v94,
    v255,
    v256,
    v257,
    v258,
    v259,
    v260);
  v261 = (System_Array_o *)sub_1C13DCC(ShopHelpItemInfo_ItemKind___TypeInfo, 18LL);
  v270.fields.value = Field__PrivateImplementationDetails__E10CB21B9898DC890A2C12C77D0F3080A4687EE5D6F1EF7922CCF6259D7BB335;
  v262 = (struct ShopHelpItemInfo_ItemKind_array *)v261;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62875280(v261, v270, 0LL);
  this->fields.kinds = v262;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.kinds, (int64_t)v262, v263, v264, v265, v266, v267, v268);
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
    sub_1C13CC8(p_onFadeOut, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v10; // x1
  ShopHelpMenu_o *baseDialog; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4BB0BB1 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_ShopHelpListViewManager_CallOnFadeOut__, v10);
    byte_4BB0BB1 = 1;
  }
  this->fields.onFadeOut = callback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.onFadeOut,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseDialog = this->fields.baseDialog;
  v12 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ShopHelpListViewManager_CallOnFadeOut__, 0LL);
  if ( !baseDialog )
    sub_1C13F80(v13, v14);
  ShopHelpMenu__Close(baseDialog, v12, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ShopHelpMenu_o *baseDialog; // x0
  struct ShopHelpItemInfo_ItemKind_array *kinds; // x8
  struct ShopHelpItemInfo_ItemKind_array *v18; // x24
  __int64 v19; // x8
  unsigned __int64 i; // x25
  int32_t v21; // w20
  struct ShopHelpItemInfo_array *itemInfoList; // x9
  __int64 v23; // x8
  int64_t *m_Items; // x9
  int64_t v25; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  int64_t v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0

  if ( (byte_4BB0BB0 & 1) == 0 )
  {
    sub_1C13D24(&CoinRoomUtility_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMaster_ShopMaster___, v9);
    sub_1C13D24(&DataManager_TypeInfo, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12);
    sub_1C13D24(&ShopHelpListViewItem_TypeInfo, v13);
    sub_1C13D24(&ShopRootConstants_TypeInfo, v14);
    byte_4BB0BB0 = 1;
  }
  this->fields.onFadeOut = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.onFadeOut, 0LL, v2, v3, v4, v5, v6, v7);
  baseDialog = this->fields.baseDialog;
  if ( !baseDialog
    || (ShopHelpMenu__Open(baseDialog, 0LL), (kinds = this->fields.kinds) == 0LL)
    || (ListViewManager__CreateList((ListViewManager_o *)this, kinds->max_length, 0LL), (v18 = this->fields.kinds) == 0LL) )
  {
LABEL_39:
    sub_1C13F80(baseDialog, v15);
  }
  v19 = *(_QWORD *)&v18->max_length;
  if ( (int)v19 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v19; ++i )
    {
      if ( i >= (unsigned int)v19 )
        sub_1C13F88(baseDialog, v15);
      v21 = v18->m_Items[i + 1];
      switch ( v21 )
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
          baseDialog = (ShopHelpMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ShopMaster___);
          if ( !baseDialog )
            goto LABEL_39;
          baseDialog = (ShopHelpMenu_o *)ShopMaster__IsEnableEventShop_41089804((ShopMaster_o *)baseDialog, 0LL);
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
        v23 = (unsigned int)*(_QWORD *)&itemInfoList->max_length;
        m_Items = (int64_t *)itemInfoList->m_Items;
        while ( 1 )
        {
          v25 = *m_Items;
          if ( *m_Items )
          {
            if ( *(_DWORD *)(v25 + 16) == v21 )
              break;
          }
          --v23;
          ++m_Items;
          if ( !v23 )
            goto LABEL_36;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_39;
        size = itemList->fields._size;
        v28 = sub_1C13F70(ShopHelpListViewItem_TypeInfo);
        ListViewItem___ctor_41884928((ListViewItem_o *)v28, size, 0LL);
        *(_QWORD *)(v28 + 112) = v25;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v28 + 112), v25, v29, v30, v31, v32, v33, v34);
        items = itemList->fields._items;
        v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_39;
        v43 = itemList->fields._size;
        if ( (unsigned int)v43 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v28,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + v43;
          itemList->fields._size = v43 + 1;
          v44[4] = (Il2CppClass *)v28;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v44 + 4), v28, v35, v36, v37, v38, v39, v40);
        }
      }
LABEL_36:
      LODWORD(v19) = v18->max_length;
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
  __int64 v6; // x1
  AssetData_o *AssetStorage; // x0
  __int64 v8; // x1

  if ( (byte_4BB0BAE & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_Texture2D____77466824, path);
    sub_1C13D24(&AssetManager_TypeInfo, v6);
    byte_4BB0BAE = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( !AssetStorage )
    sub_1C13F80(0LL, v8);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__49747248(
                                      AssetStorage,
                                      name,
                                      (const MethodInfo_2F71530 *)Method_AssetData_GetObject_Texture2D____77466824);
}


void __fastcall ShopHelpListViewManager__LoadBaseSprite(ShopHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_array *helpBasePaths; // x20
  System_Action_o *v6; // x21

  if ( (byte_4BB0BAC & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AssetManager_TypeInfo, v3);
    sub_1C13D24(&Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, v4);
    byte_4BB0BAC = 1;
  }
  if ( !this->fields.initMode )
  {
    this->fields.initMode = 1;
    helpBasePaths = this->fields.helpBasePaths;
    v6 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ShopHelpListViewManager__LoadBaseSprite_b__9_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_38941952(helpBasePaths, v6, 1, 0LL);
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

  if ( (byte_4BB0BAF & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C13D24(&AssetManager_TypeInfo, paths);
    byte_4BB0BAF = 1;
  }
  if ( !paths )
    sub_1C13F80(this, paths);
  v4 = *(_QWORD *)&paths->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)v4 )
        sub_1C13F88(this, paths);
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
  if ( (byte_4BB0BAD & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    byte_4BB0BAD = 1;
  }
  if ( v3->fields.initMode == 2 )
  {
    ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
    BaseWindow = v3->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL)) == 0LL
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_1C13F80(BaseWindow, v4);
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

  if ( (byte_4BB0BB2 & 1) == 0 )
  {
    this = (ShopHelpListViewManager_o *)sub_1C13D24(&ShopHelpListViewObject_TypeInfo, obj);
    byte_4BB0BB2 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopHelpListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopHelpListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopHelpListViewObject_TypeInfo )
  {
    sub_1C13F80(this, obj);
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

  v3 = this;
  if ( (byte_4BB0BB4 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    sub_1C13D24(&UnityEngine_Material_TypeInfo, v4);
    sub_1C13D24(&StringLiteral_5068/*"Custom/Sprite-ScriptActionFigureSummonCombine"*/, v5);
    this = (ShopHelpListViewManager_o *)sub_1C13D24(&StringLiteral_16520/*"_L"*/, v6);
    byte_4BB0BB4 = 1;
  }
  if ( v3->fields.initMode == 1 )
  {
    v7 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5068/*"Custom/Sprite-ScriptActionFigureSummonCombine"*/, 0LL);
    v8 = (UnityEngine_Material_o *)sub_1C13F70(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0LL);
    BaseWindow = v3->fields.BaseWindow;
    if ( BaseWindow )
    {
      BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL);
      if ( BaseWindow )
      {
        BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)BaseWindow,
                                                   (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UITexture___);
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
                        (System_String_o *)StringLiteral_16520/*"_L"*/,
                        AssetStorageTexture2D,
                        0LL);
                      v3->fields.initMode = 2;
                      return;
                    }
LABEL_19:
                    sub_1C13F88(BaseWindow, v9);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C13F80(BaseWindow, v9);
  }
  ShopHelpListViewManager__ReleaseAssetStorages(this, v3->fields.helpBasePaths, v2);
}