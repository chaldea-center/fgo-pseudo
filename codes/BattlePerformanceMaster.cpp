void __fastcall BattlePerformanceMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40FA881 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceMaster_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16933, v8);
    byte_40FA881 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_16933;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16933;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattlePerformanceMaster___ctor(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  this->fields.tmp_index = -1;
  *(_QWORD *)&this->fields.skillIconOffset = 0x41900000C28E0000LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceMaster__CloseBoostSkillConfComp(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA848 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA848 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__CloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_40FA87E & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_OnCompCloseRetireSA__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v6);
    byte_40FA87E = 1;
  }
  win_Retire = this->fields.win_Retire;
  v8 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3, v4);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompCloseRetireSA__,
    0LL);
  if ( !win_Retire )
    sub_B170D4();
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Retire->klass->vtable._12_Close.method)(
    win_Retire,
    v8,
    win_Retire->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__CloseSkillConfComp(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA843 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA843 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__Initialize(
        BattlePerformanceMaster_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
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
  __int64 v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_GameObject_o *skillBtn; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *menuBtn; // x0
  UnityEngine_Transform_o *v48; // x0
  BattleMasterSkillWindowComponent_o *win_Skill; // x0
  struct BattleMasterSkillWindowComponent_o *v50; // x0
  BattleWindowComponent_o *win_Spell; // x0
  struct BattleData_o *data; // x8
  CommandSpellWindowComponent_o *v53; // x0
  struct CommandSpellWindowComponent_o *v54; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  CommandSpellWindowComponent_CloseButtonCallBack_o *v59; // x22
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct CommandSpellWindowComponent_o *v66; // x21
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *v71; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct CommandSpellWindowComponent_o *v78; // x0
  BattleWindowComponent_o *win_Menu; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct BattleMenuWindowComponent_o *v86; // x0
  System_Int32_array **v87; // x1
  BattleWindowComponent_o *win_Retire; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  struct BattleRetireWindowComponent_o *v95; // x0
  System_Int32_array **v96; // x1
  UnityEngine_Component_o *warBoard_win_EnemyConf; // x0
  UnityEngine_Transform_o *v98; // x0
  UnityEngine_Transform_o *v99; // x21
  UnityEngine_Transform_o *v100; // x0
  int v101; // s1
  int v102; // s0
  int v103; // s2
  BattleWindowComponent_o *v104; // x0
  struct BattleServantConfConponent_o *v105; // x0
  struct BattleServantConfConponent_o *v106; // x21
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  BattleServantConfConponent_CloseButtonCallBack_o *v111; // x22
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  BattleWindowComponent_o *win_EnemyConf; // x0
  struct BattleServantConfConponent_o *v119; // x0
  struct BattleServantConfConponent_o *v120; // x21
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  BattleServantConfConponent_CloseButtonCallBack_o *v125; // x22
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  UnityEngine_Object_o *fieldConf; // x21
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  BattleFieldConfConponent_o *v137; // x21
  System_Action_o *v138; // x22
  BattleWindowComponent_o *itemListWindow; // x0
  struct BattleItemListWindowComponent_o *v140; // x0
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  struct BattleItemListWindowComponent_o *v147; // x0
  System_Int32_array **v148; // x1
  const MethodInfo *v149; // x1
  const MethodInfo *v150; // x1
  const MethodInfo *v151; // x1
  BattleSkillConfComponent_o *boostSkillConfWindow; // x0
  struct BattleSkillConfComponent_o *v153; // x0
  struct BattleSkillConfComponent_o *v154; // x0
  AssetData_o *AssetStorage; // x0
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  AssetData_o *v162; // x21
  System_Int32_array **v163; // x1
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_GameObject_o *v165; // x21
  UnityEngine_GameObject_array *Children; // x22
  __int64 v167; // x1
  __int64 v168; // x2
  __int64 v169; // x3
  __int64 v170; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v171; // x23
  UnityEngine_GameObject_o **p_skillBtnFlashObject; // x20
  UnityEngine_GameObject_o *v173; // x0
  UnityEngine_Transform_o *v174; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v183; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA827 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, inperf);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v9);
    sub_B16FFC(&AssetManager_TypeInfo, v10);
    sub_B16FFC(&Method_BasicHelper_Any_GameObject___, v11);
    sub_B16FFC(&Method_BattlePerformanceMaster_OnCloseFieldConf__, v12);
    sub_B16FFC(&Method_BattlePerformanceMaster_onCloseEnemyServantConf__, v13);
    sub_B16FFC(&Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__, v14);
    sub_B16FFC(&Method_BattlePerformanceMaster_procUseCommandSpell__, v15);
    sub_B16FFC(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, v16);
    sub_B16FFC(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo, v17);
    sub_B16FFC(&Method_System_Func_GameObject__bool___ctor__, v18);
    sub_B16FFC(&System_Func_GameObject__bool__TypeInfo, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&Method_BattlePerformanceMaster___c__DisplayClass66_0__Initialize_b__0__, v21);
    sub_B16FFC(&BattlePerformanceMaster___c__DisplayClass66_0_TypeInfo, v22);
    sub_B16FFC(&CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo, v23);
    sub_B16FFC(&StringLiteral_2743, v24);
    sub_B16FFC(&StringLiteral_18128, v25);
    byte_40FA827 = 1;
  }
  v26 = sub_B170CC(BattlePerformanceMaster___c__DisplayClass66_0_TypeInfo, inperf, indata, inlogic, method);
  BattlePerformanceMaster___c__DisplayClass66_0___ctor((BattlePerformanceMaster___c__DisplayClass66_0_o *)v26, 0LL);
  this->fields.perf = inperf;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.data = indata;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.logic = inlogic;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.logic,
    (System_Int32_array **)inlogic,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  skillBtn = this->fields.skillBtn;
  if ( !skillBtn )
    goto LABEL_58;
  transform = UnityEngine_GameObject__get_transform(skillBtn, 0LL);
  if ( !transform )
    goto LABEL_58;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  menuBtn = this->fields.menuBtn;
  this->fields.pos_skillbtn = localPosition;
  if ( !menuBtn )
    goto LABEL_58;
  v48 = UnityEngine_GameObject__get_transform(menuBtn, 0LL);
  if ( !v48 )
    goto LABEL_58;
  v183 = UnityEngine_Transform__get_localPosition(v48, 0LL);
  win_Skill = this->fields.win_Skill;
  this->fields.pos_menubtn = v183;
  if ( !win_Skill )
    goto LABEL_58;
  BattleMasterSkillWindowComponent__setInitData(win_Skill, 0, 0.1, 0, 0LL);
  v50 = this->fields.win_Skill;
  if ( !v50 )
    goto LABEL_58;
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, Il2CppMethodPointer))v50->klass->vtable._9_setClose.method)(
    v50,
    v50->klass->vtable._10_Open.methodPtr);
  win_Spell = (BattleWindowComponent_o *)this->fields.win_Spell;
  if ( !win_Spell )
    goto LABEL_58;
  BattleWindowComponent__setInitData(win_Spell, 2, 0.15, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_58;
  v53 = this->fields.win_Spell;
  if ( !v53 )
    goto LABEL_58;
  CommandSpellWindowComponent__InitializeCommandSpell(v53, this->fields.perf, 1, data->fields.temporarySpell, 0LL);
  v54 = this->fields.win_Spell;
  v59 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_B170CC(
                                                               CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo,
                                                               v55,
                                                               v56,
                                                               v57,
                                                               v58);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v59,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__,
    0LL);
  if ( !v54 )
    goto LABEL_58;
  v54->fields.callback_close = v59;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v54->fields.callback_close,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = this->fields.win_Spell;
  v71 = (CommandSpellWindowComponent_UseCommandSpellCallBack_o *)sub_B170CC(
                                                                   CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo,
                                                                   v67,
                                                                   v68,
                                                                   v69,
                                                                   v70);
  CommandSpellWindowComponent_UseCommandSpellCallBack___ctor(
    v71,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procUseCommandSpell__,
    0LL);
  if ( !v66 )
    goto LABEL_58;
  v66->fields.callback_use = v71;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v66->fields.callback_use,
    (System_Int32_array **)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v78 = this->fields.win_Spell;
  if ( !v78 )
    goto LABEL_58;
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, Il2CppMethodPointer))v78->klass->vtable._9_setClose.method)(
    v78,
    v78->klass->vtable._10_Open.methodPtr);
  win_Menu = (BattleWindowComponent_o *)this->fields.win_Menu;
  if ( !win_Menu )
    goto LABEL_58;
  BattleWindowComponent__setInitData(win_Menu, 2, 0.15, 0, 0LL);
  v86 = this->fields.win_Menu;
  if ( !v86 )
    goto LABEL_58;
  v87 = (System_Int32_array **)this->fields.data;
  v86->fields.data = (struct BattleData_o *)v87;
  sub_B16F98((BattleServantConfConponent_o *)&v86->fields.data, v87, v80, v81, v82, v83, v84, v85);
  win_Retire = (BattleWindowComponent_o *)this->fields.win_Retire;
  if ( !win_Retire )
    goto LABEL_58;
  BattleWindowComponent__setInitData(win_Retire, 2, 0.15, 0, 0LL);
  v95 = this->fields.win_Retire;
  if ( !v95 )
    goto LABEL_58;
  v96 = (System_Int32_array **)this->fields.data;
  v95->fields._data_k__BackingField = (struct BattleData_o *)v96;
  sub_B16F98((BattleServantConfConponent_o *)&v95->fields._data_k__BackingField, v96, v89, v90, v91, v92, v93, v94);
  warBoard_win_EnemyConf = (UnityEngine_Component_o *)this->fields.warBoard_win_EnemyConf;
  if ( !warBoard_win_EnemyConf )
    goto LABEL_58;
  v98 = UnityEngine_Component__get_transform(warBoard_win_EnemyConf, 0LL);
  if ( !this->fields.warBoard_win_EnemyConf )
    goto LABEL_58;
  v99 = v98;
  v100 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.warBoard_win_EnemyConf, 0LL);
  if ( !v100 )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)(&v101 - 1) = UnityEngine_Transform__get_localPosition(v100, 0LL);
  if ( !v99 )
    goto LABEL_58;
  v102 = 0;
  v103 = 0;
  UnityEngine_Transform__set_localPosition(v99, *(UnityEngine_Vector3_o *)(&v101 - 1), 0LL);
  v104 = (BattleWindowComponent_o *)this->fields.warBoard_win_EnemyConf;
  if ( !v104 )
    goto LABEL_58;
  BattleWindowComponent__setInitData(v104, 2, 0.15, 0, 0LL);
  v105 = this->fields.warBoard_win_EnemyConf;
  if ( !v105 )
    goto LABEL_58;
  ((void (__fastcall *)(struct BattleServantConfConponent_o *, Il2CppMethodPointer))v105->klass->vtable._9_setClose.method)(
    v105,
    v105->klass->vtable._10_Open.methodPtr);
  v106 = this->fields.warBoard_win_EnemyConf;
  v111 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_B170CC(
                                                               BattleServantConfConponent_CloseButtonCallBack_TypeInfo,
                                                               v107,
                                                               v108,
                                                               v109,
                                                               v110);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v111,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0LL);
  if ( !v106 )
    goto LABEL_58;
  v106->fields.callback_close = v111;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v106->fields.callback_close,
    (System_Int32_array **)v111,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  win_EnemyConf = (BattleWindowComponent_o *)this->fields.win_EnemyConf;
  if ( !win_EnemyConf )
    goto LABEL_58;
  BattleWindowComponent__setInitData(win_EnemyConf, 2, 0.15, 0, 0LL);
  v119 = this->fields.win_EnemyConf;
  if ( !v119 )
    goto LABEL_58;
  ((void (__fastcall *)(struct BattleServantConfConponent_o *, Il2CppMethodPointer))v119->klass->vtable._9_setClose.method)(
    v119,
    v119->klass->vtable._10_Open.methodPtr);
  v120 = this->fields.win_EnemyConf;
  v125 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_B170CC(
                                                               BattleServantConfConponent_CloseButtonCallBack_TypeInfo,
                                                               v121,
                                                               v122,
                                                               v123,
                                                               v124);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v125,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0LL);
  if ( !v120 )
    goto LABEL_58;
  v120->fields.callback_close = v125;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v120->fields.callback_close,
    (System_Int32_array **)v125,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v137 = this->fields.fieldConf;
    v138 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v133, v134, v135, v136);
    System_Action___ctor(v138, (Il2CppObject *)this, Method_BattlePerformanceMaster_OnCloseFieldConf__, 0LL);
    if ( !v137 )
      goto LABEL_58;
    BattleFieldConfConponent__Initialize(v137, v138, 0LL);
  }
  itemListWindow = (BattleWindowComponent_o *)this->fields.itemListWindow;
  if ( !itemListWindow )
    goto LABEL_58;
  BattleWindowComponent__setInitData(itemListWindow, 2, 0.15, 0, 0LL);
  v140 = this->fields.itemListWindow;
  if ( !v140 )
    goto LABEL_58;
  ((void (__fastcall *)(struct BattleItemListWindowComponent_o *, Il2CppMethodPointer))v140->klass->vtable._9_setClose.method)(
    v140,
    v140->klass->vtable._10_Open.methodPtr);
  v147 = this->fields.itemListWindow;
  if ( !v147 )
    goto LABEL_58;
  v148 = (System_Int32_array **)this->fields.data;
  v147->fields.battleData = (struct BattleData_o *)v148;
  sub_B16F98((BattleServantConfConponent_o *)&v147->fields.battleData, v148, v141, v142, v143, v144, v145, v146);
  BattlePerformanceMaster__updateShortSkill(this, v149);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v150);
  BattlePerformanceMaster__updateSkipDead(this, v151);
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  if ( !boostSkillConfWindow )
    goto LABEL_58;
  BattleSkillConfComponent__setInit(boostSkillConfWindow, this->fields.data, 0LL);
  v153 = this->fields.boostSkillConfWindow;
  if ( !v153 )
    goto LABEL_58;
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, Il2CppMethodPointer))v153->klass->vtable._7_setInitialPos.method)(
    v153,
    v153->klass->vtable._8_setInitialPosIfDefaultIsZero.methodPtr);
  v154 = this->fields.boostSkillConfWindow;
  if ( !v154 )
    goto LABEL_58;
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, Il2CppMethodPointer))v154->klass->vtable._9_setClose.method)(
    v154,
    v154->klass->vtable._10_Open.methodPtr);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2743, 0LL);
  if ( !v26 )
    goto LABEL_58;
  v162 = AssetStorage;
  v163 = (System_Int32_array **)StringLiteral_18128;
  *(_QWORD *)(v26 + 16) = StringLiteral_18128;
  sub_B16F98((BattleServantConfConponent_o *)(v26 + 16), v163, v156, v157, v158, v159, v160, v161);
  if ( !v162 )
    goto LABEL_58;
  Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                     v162,
                                     *(System_String_o **)(v26 + 16),
                                     (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !this->fields.win_Menu )
    goto LABEL_58;
  v165 = (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  BattleMenuWindowComponent__Init(this->fields.win_Menu, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v165, 0LL, 0LL) )
  {
    Children = GameObjectExtensions__GetChildren(this->fields.skillBtn, 1, 0LL);
    v171 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                System_Func_GameObject__bool__TypeInfo,
                                                                                v167,
                                                                                v168,
                                                                                v169,
                                                                                v170);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v171,
      (Il2CppObject *)v26,
      Method_BattlePerformanceMaster___c__DisplayClass66_0__Initialize_b__0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_GameObject__bool___ctor__);
    if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Children,
           (System_Func_T__bool__o *)v171,
           (const MethodInfo_18B6074 *)Method_BasicHelper_Any_GameObject___) )
    {
      p_skillBtnFlashObject = &this->fields.skillBtnFlashObject;
    }
    else
    {
      v173 = this->fields.skillBtn;
      if ( !v173 )
        goto LABEL_58;
      v174 = UnityEngine_GameObject__get_transform(v173, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v165, v174, 0LL, 0LL);
      p_skillBtnFlashObject = &this->fields.skillBtnFlashObject;
      this->fields.skillBtnFlashObject = Object;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.skillBtnFlashObject,
        (System_Int32_array **)Object,
        v176,
        v177,
        v178,
        v179,
        v180,
        v181);
    }
    if ( *p_skillBtnFlashObject )
    {
      UnityEngine_GameObject__SetActive(*p_skillBtnFlashObject, 0, 0LL);
      return;
    }
LABEL_58:
    sub_B170D4();
  }
}


bool __fastcall BattlePerformanceMaster__IsCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *fieldConf; // x0

  fieldConf = (BattleWindowComponent_o *)this->fields.fieldConf;
  if ( !fieldConf )
    sub_B170D4();
  return BattleWindowComponent__isClose(fieldConf, 0LL);
}


bool __fastcall BattlePerformanceMaster__IsTacticalPhaseWait(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0
  System_String_o *ActiveStateName; // x0

  if ( (byte_40FA880 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15330, method);
    byte_40FA880 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm || (ActiveStateName = PlayMakerFSM__get_ActiveStateName(myFsm, 0LL)) == 0LL )
    sub_B170D4();
  return System_String__IndexOf_43816080(ActiveStateName, (System_String_o *)StringLiteral_15330, 0LL) >= 0;
}


void __fastcall BattlePerformanceMaster__OnCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA872 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3085, method);
    byte_40FA872 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3085, 0LL);
}


void __fastcall BattlePerformanceMaster__OnCompCloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA87F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA87F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__OnCompShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA87D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA87D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenBoostSkillConfComplete(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA846 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA846 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenRetireWindowSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA87B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3042, method);
    byte_40FA87B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3042, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenSkillConfComplete(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA841 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA841 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


bool __fastcall BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  BattlePerformance_o *perf; // x0
  BattleSkillSelectAddFuncConfComponent_o *SkillSelectAddFuncConfWindow; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FA84C & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_SkillSelectedAddFunc__, skillInfo);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo, v6);
    byte_40FA84C = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_12;
  SkillSelectAddFuncConfWindow = BattlePerformance__get_SkillSelectAddFuncConfWindow(perf, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)SkillSelectAddFuncConfWindow, 0LL, 0LL) )
    return 0;
  if ( !SkillSelectAddFuncConfWindow )
LABEL_12:
    sub_B170D4();
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0LL) )
  {
    v13 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_B170CC(
                                                                      BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo,
                                                                      v9,
                                                                      v10,
                                                                      v11,
                                                                      v12);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_SkillSelectedAddFunc__,
      0LL);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v13;
    sub_B16F98(
      (BattleServantConfConponent_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    ((void (__fastcall *)(BattleSkillSelectAddFuncConfComponent_o *, _QWORD, Il2CppMethodPointer))SkillSelectAddFuncConfWindow->klass->vtable._10_Open.method)(
      SkillSelectAddFuncConfWindow,
      0LL,
      SkillSelectAddFuncConfWindow->klass->vtable._11_CompOpen.methodPtr);
    return 1;
  }
  return 0;
}


void __fastcall BattlePerformanceMaster__ProcCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *fieldConf; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  BattleFieldConfConponent_o *v10; // x20
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_40FA871 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster__ProcCloseFieldConf_b__154_0__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FA871 = 1;
  }
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v10 = this->fields.fieldConf;
    v11 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v6, v7, v8, v9);
    BattleWindowComponent_EndCall___ctor(
      v11,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcCloseFieldConf_b__154_0__,
      0LL);
    if ( !v10 )
      sub_B170D4();
    BattleFieldConfConponent__Close(v10, v11, 0LL);
  }
}


void __fastcall BattlePerformanceMaster__ProcOpenFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  PlayMakerFSM_o *otherFsm; // x0
  UnityEngine_Object_o *fieldConf; // x20
  struct BattleData_o *data; // x8
  BattleFieldConfConponent_o *v10; // x0
  BattleFieldConfConponent_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  BattleWindowComponent_EndCall_o *v16; // x21

  if ( (byte_40FA870 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster__ProcOpenFieldConf_b__153_0__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_12285, v5);
    byte_40FA870 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_14;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  otherFsm = this->fields.otherFsm;
  if ( !otherFsm )
    goto LABEL_14;
  PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_12285, 0LL);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v10 = this->fields.fieldConf;
      if ( v10 )
      {
        BattleFieldConfConponent__SetConfData(v10, data->fields._FieldEnvData_k__BackingField, 0LL);
        v11 = this->fields.fieldConf;
        v16 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v12, v13, v14, v15);
        BattleWindowComponent_EndCall___ctor(
          v16,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster__ProcOpenFieldConf_b__153_0__,
          0LL);
        if ( v11 )
        {
          BattleFieldConfConponent__Open(v11, v16, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B170D4();
  }
}


void __fastcall BattlePerformanceMaster__SerializeFieldNotNullCheck(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster__SetupMasterSkillBtn(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattlePerformanceMaster_c *v8; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  System_String_o *MASTER_SKILL_BUTTON_SP_NAME; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  struct UISprite_o *skillBtnSp; // x8
  System_String_o *v15; // x20
  UIAtlas_o *mAtlas; // x0
  AssetData_o *AssetStorage; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UISprite_o *v20; // x0

  if ( (byte_40FA829 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&BattlePerformanceMaster_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_B16FFC(&StringLiteral_2743, v6);
    sub_B16FFC(&StringLiteral_2758, v7);
    byte_40FA829 = 1;
  }
  v8 = BattlePerformanceMaster_TypeInfo;
  if ( (BYTE3(BattlePerformanceMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo);
    v8 = BattlePerformanceMaster_TypeInfo;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_20;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_20;
  MASTER_SKILL_BUTTON_SP_NAME = v8->static_fields->MASTER_SKILL_BUTTON_SP_NAME;
  v12 = System_Int32__ToString((int)data + 104, 0LL);
  v13 = System_String__Concat_43743732(MASTER_SKILL_BUTTON_SP_NAME, v12, 0LL);
  skillBtnSp = this->fields.skillBtnSp;
  if ( !skillBtnSp )
    goto LABEL_20;
  v15 = v13;
  mAtlas = skillBtnSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_20;
  if ( UIAtlas__GetSprite(mAtlas, v15, 0LL) )
    goto LABEL_18;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2743, 0LL);
  if ( !AssetStorage
    || (Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                       AssetStorage,
                                                                       (System_String_o *)StringLiteral_2758,
                                                                       (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784)) == 0LL
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    Object_WarBoardWaitTimeSetting,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
        !this->fields.skillBtnSp) )
  {
LABEL_20:
    sub_B170D4();
  }
  UISprite__set_atlas(this->fields.skillBtnSp, (UIAtlas_o *)Component_srcLineSprite, 0LL);
LABEL_18:
  v20 = this->fields.skillBtnSp;
  if ( !v20 )
    goto LABEL_20;
  UISprite__set_spriteName(v20, v15, 0LL);
}


void __fastcall BattlePerformanceMaster__ShowFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA86F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3051, method);
    byte_40FA86F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3051, 0LL);
}


void __fastcall BattlePerformanceMaster__ShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleRetireWindowComponent_o *win_Retire; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_40FA87C & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_OnCompShowRetireSA__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FA87C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  win_Retire = this->fields.win_Retire;
  v10 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v6, v7, v8, v9);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompShowRetireSA__,
    0LL);
  if ( !win_Retire )
    sub_B170D4();
  BattleRetireWindowComponent__Open(win_Retire, v10, 0LL);
}


void __fastcall BattlePerformanceMaster__SkillSelectedAddFunc(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t selIndex,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA84D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2912, skillInfo);
    byte_40FA84D = 1;
  }
  if ( selIndex != -1 )
  {
    if ( skillInfo )
    {
      BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, selIndex, 0LL);
      BattlePerformanceMaster__WantUseSkill(this, skillInfo, v7);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_8;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2912, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__UseSkill(
        BattlePerformanceMaster_o *this,
        bool playSe,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  PlayMakerFSM_o *myFsm; // x0
  struct BattleLogic_UseSkillObject_o *useSkillObject; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2

  if ( (byte_40FA84A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, playSe);
    sub_B16FFC(&StringLiteral_2912, v5);
    byte_40FA84A = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0LL) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2912, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
  if ( playSe )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
  }
  useSkillObject = this->fields.useSkillObject;
  this->fields.actSkillObject = useSkillObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.actSkillObject,
    (System_Int32_array **)useSkillObject,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  actSkillObject = this->fields.actSkillObject;
  if ( !actSkillObject )
    goto LABEL_16;
  skillInfo = actSkillObject->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_16;
  BattleSkillInfoData__UpdateSelectAddIndex(actSkillObject->fields.skillInfo, -1, 0LL);
  if ( !BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v17) )
    BattlePerformanceMaster__WantUseSkill(this, skillInfo, v18);
}


void __fastcall BattlePerformanceMaster__WantUseSkill(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Int32_array *ValidTargetTypeArray; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Func_int__bool__o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  BattlePerformance_o *perf; // x0
  BattlePerformance_o *v21; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct BattleSelectServantWindow_o *skillselectSvtWindow; // x0
  const MethodInfo *v30; // x1
  System_Func_int__bool__o *v31; // x22
  BattlePerformance_o *v32; // x0
  BattlePerformance_o *v33; // x0
  struct BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct BattleSelectMainSubServantWindow_o *selectMSWindow; // x0
  int32_t v42; // w1
  const MethodInfo *v43; // x2
  BattleLogic_o *logic; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA84B & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, skillInfo);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v5);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v6);
    sub_B16FFC(&Method_Target_isChoose__, v7);
    sub_B16FFC(&Method_Target_isSubChoose__, v8);
    sub_B16FFC(&StringLiteral_5481, v9);
    byte_40FA84B = 1;
  }
  if ( !skillInfo )
    goto LABEL_17;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0LL);
  v15 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v11, v12, v13, v14);
  System_Func_int__bool____ctor(
    v15,
    0LL,
    Method_Target_isSubChoose__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__25910576(
         ValidTargetTypeArray,
         (System_Func_T__bool__o *)v15,
         (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
  {
    perf = this->fields.perf;
    if ( perf )
    {
      BattlePerformance__SetCloseCommandTypeWindow(perf, 0LL);
      v21 = this->fields.perf;
      if ( v21 )
      {
        SelectSvtWindow = BattlePerformance__getSelectSvtWindow(v21, 0LL);
        this->fields.skillselectSvtWindow = SelectSvtWindow;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.skillselectSvtWindow,
          (System_Int32_array **)SelectSvtWindow,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        skillselectSvtWindow = this->fields.skillselectSvtWindow;
        if ( skillselectSvtWindow )
        {
          ((void (__fastcall *)(struct BattleSelectServantWindow_o *, Il2CppMethodPointer))skillselectSvtWindow->klass->vtable._9_setClose.method)(
            skillselectSvtWindow,
            skillselectSvtWindow->klass->vtable._10_Open.methodPtr);
          BattlePerformanceMaster__openSkillSelectMainSubSvtWindow(this, v30);
          return;
        }
      }
    }
LABEL_17:
    sub_B170D4();
  }
  v31 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v16, v17, v18, v19);
  System_Func_int__bool____ctor(
    v31,
    0LL,
    Method_Target_isChoose__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__25910576(
         ValidTargetTypeArray,
         (System_Func_T__bool__o *)v31,
         (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
  {
    v32 = this->fields.perf;
    if ( !v32 )
      goto LABEL_17;
    BattlePerformance__SetCloseCommandTypeWindow(v32, 0LL);
    v33 = this->fields.perf;
    if ( !v33 )
      goto LABEL_17;
    SelectMainSubSvtWindow = BattlePerformance__getSelectMainSubSvtWindow(v33, 0LL);
    this->fields.selectMSWindow = SelectMainSubSvtWindow;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.selectMSWindow,
      (System_Int32_array **)SelectMainSubSvtWindow,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    selectMSWindow = this->fields.selectMSWindow;
    if ( !selectMSWindow )
      goto LABEL_17;
    ((void (__fastcall *)(struct BattleSelectMainSubServantWindow_o *, Il2CppMethodPointer))selectMSWindow->klass->vtable._9_setClose.method)(
      selectMSWindow,
      selectMSWindow->klass->vtable._10_Open.methodPtr);
    v42 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
            skillInfo,
            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    BattlePerformanceMaster__openSkillSelectSvtWindow(this, v42, v43);
  }
  else
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_17;
    BattleLogic__wantUseSkill(logic, skillInfo, skillInfo->fields.svtUniqueId, -1, 0LL);
    myFsm = this->fields.myFsm;
    if ( !myFsm )
      goto LABEL_17;
    PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
  }
}


void __fastcall BattlePerformanceMaster___ProcCloseFieldConf_b__154_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA883 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA883 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster___ProcOpenFieldConf_b__153_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA882 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA882 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__callBackSelectedMainSub(
        BattlePerformanceMaster_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        const MethodInfo *method)
{
  struct BattleSelectMainSubServantWindow_o *selectMSWindow; // x0
  PlayMakerFSM_o *myFsm; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleLogic_o *logic; // x0
  BattlePerformance_o *perf; // x0

  if ( (byte_40FA853 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, flg);
    byte_40FA853 = 1;
  }
  selectMSWindow = this->fields.selectMSWindow;
  if ( !selectMSWindow )
    goto LABEL_11;
  ((void (__fastcall *)(struct BattleSelectMainSubServantWindow_o *, _QWORD, Il2CppMethodPointer, _QWORD, const MethodInfo *))selectMSWindow->klass->vtable._12_Close.method)(
    selectMSWindow,
    0LL,
    selectMSWindow->klass->vtable._13_CompClose.methodPtr,
    *(_QWORD *)&subUniqueId,
    method);
  if ( flg )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
      actSkillObject = this->fields.actSkillObject;
      if ( actSkillObject )
      {
        logic = this->fields.logic;
        if ( logic )
        {
          BattleLogic__wantUseSkill(logic, actSkillObject->fields.skillInfo, mainUniqueId, subUniqueId, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_B170D4();
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows(perf, this->fields.myFsm, 0LL);
}


void __fastcall BattlePerformanceMaster__changeShortSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x1

  if ( (byte_40FA859 & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    byte_40FA859 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipSkillConf(data, 0LL), !this->fields.data) )
    sub_B170D4();
  if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__updateShortSkill(this, v4);
}


void __fastcall BattlePerformanceMaster__changeSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x1

  if ( (byte_40FA85D & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    byte_40FA85D = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipDead(data, 0LL), !this->fields.data) )
    sub_B170D4();
  if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__updateSkipDead(this, v4);
}


void __fastcall BattlePerformanceMaster__changeTdConstantVelocity(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x1

  if ( (byte_40FA85B & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    byte_40FA85B = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleTdConstantVelocity(data, 0LL), !this->fields.data) )
    sub_B170D4();
  if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v4);
}


void __fastcall BattlePerformanceMaster__checkCommandSpellTarget(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v9; // x1
  PlayMakerFSM_o *myFsm; // x0
  BattleLogic_o *logic; // x0

  if ( (byte_40FA83C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandSpellMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&StringLiteral_5481, v5);
    byte_40FA83C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.tmp_commandSpellId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Entity || !this->fields.logic )
    goto LABEL_12;
  if ( BattleLogic__checkSelectFunctionTarget(
         this->fields.logic,
         *(System_Int32_array **)&Entity->fields.bannerId,
         0,
         0LL) )
  {
    BattlePerformanceMaster__openSelectSvtWindow(this, v9);
    return;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL), (logic = this->fields.logic) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  BattleLogic__useCommandSpell(logic, this->fields.tmp_commandSpellId, -1, 0LL);
}


void __fastcall BattlePerformanceMaster__checkSkipFlg(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  BattleSkillInfoData_o *skillInfo; // x0
  struct BattleLogic_UseSkillObject_o *v7; // x8
  BattleSkillInfoData_o *v8; // x0
  struct BattleData_o *data; // x8
  struct BattleLogic_UseSkillObject_o *v10; // x8
  BattleSkillInfoData_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v19; // x8
  struct BattleLogic_UseSkillObject_o *v20; // x1

  if ( (byte_40FA83F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    sub_B16FFC(&StringLiteral_12204, v3);
    sub_B16FFC(&StringLiteral_9271, v4);
    byte_40FA83F = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  if ( !tmp_useSkill )
    goto LABEL_22;
  skillInfo = tmp_useSkill->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_22;
  if ( !BattleSkillInfoData__isChargeOK(skillInfo, 0LL) )
    goto LABEL_17;
  v7 = this->fields.tmp_useSkill;
  if ( !v7 )
    goto LABEL_22;
  v8 = v7->fields.skillInfo;
  if ( !v8 )
    goto LABEL_22;
  if ( !BattleSkillInfoData__IsOpenCond(v8, 0LL) )
  {
LABEL_17:
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      v19 = &StringLiteral_9271;
      goto LABEL_19;
    }
    goto LABEL_22;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.systemflg_skipskillconf )
  {
    v10 = this->fields.tmp_useSkill;
    if ( v10 )
    {
      v11 = v10->fields.skillInfo;
      if ( v11 )
      {
        if ( BattleSkillInfoData__HasCond(v11, 0LL) || this->fields.isLongTap )
          goto LABEL_15;
        v20 = this->fields.tmp_useSkill;
        this->fields.useSkillObject = v20;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.useSkillObject,
          (System_Int32_array **)v20,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        myFsm = this->fields.myFsm;
        if ( myFsm )
        {
          v19 = &StringLiteral_12204;
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_15:
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_22;
  v19 = &StringLiteral_5481;
LABEL_19:
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v19, 0LL);
}


void __fastcall BattlePerformanceMaster__checkTutorial(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleLogic_o *logic; // x0
  bool isTutorialMasterStatus; // w0
  __int64 *v6; // x9

  if ( (byte_40FA868 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9714, method);
    sub_B16FFC(&StringLiteral_12204, v3);
    byte_40FA868 = 1;
  }
  logic = this->fields.logic;
  if ( !logic || (isTutorialMasterStatus = BattleLogic__isTutorialMasterStatus(logic, 0LL), !this->fields.myFsm) )
    sub_B170D4();
  if ( isTutorialMasterStatus )
    v6 = &StringLiteral_9714;
  else
    v6 = &StringLiteral_12204;
  PlayMakerFSM__SendEvent(this->fields.myFsm, (System_String_o *)*v6, 0LL);
}


void __fastcall BattlePerformanceMaster__clickBoostSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  BattleLogic_UseSkillObject_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA844 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_B16FFC(&StringLiteral_3038, v7);
    byte_40FA844 = 1;
  }
  v8 = (BattleLogic_UseSkillObject_o *)sub_B170CC(BattleLogic_UseSkillObject_TypeInfo, skillInfo, method, v3, v4);
  BattleLogic_UseSkillObject___ctor(v8, skillInfo, 0LL);
  this->fields.tmp_useSkill = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tmp_useSkill,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3038, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__clickSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLong,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  BattleLogic_UseSkillObject_o *v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleLogic_o *logic; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA849 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_B16FFC(&StringLiteral_3067, v8);
    byte_40FA849 = 1;
  }
  v9 = (BattleLogic_UseSkillObject_o *)sub_B170CC(BattleLogic_UseSkillObject_TypeInfo, skillInfo, isLong, method, v4);
  BattleLogic_UseSkillObject___ctor(v9, skillInfo, 0LL);
  this->fields.tmp_useSkill = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tmp_useSkill,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  logic = this->fields.logic;
  this->fields.isLongTap = isLong;
  if ( !logic )
    goto LABEL_8;
  if ( BattleLogic__isTimingUseSkill(logic, 0LL) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3067, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
}


void __fastcall BattlePerformanceMaster__compCloseALL(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA834 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5464, method);
    byte_40FA834 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5464, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA86E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA86E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_40FA858 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA858 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA835 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA835 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSkillWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_40FA831 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA831 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_40FA839 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA839 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA86B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA86B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenItemListWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA87A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA87A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  BattlePerformanceMaster_o *v4; // x0
  const MethodInfo *v5; // x3
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_40FA833 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA833 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 1, v2);
  BattlePerformanceMaster__proclight(v4, v3->fields.menuBtn, 0, v5);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_40FA856 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA856 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.menuBtn, 1, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_40FA82F & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA82F = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 1, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA837 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA837 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__endMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        UIWidget_o *widget,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  __int64 v5; // x1
  UnityEngine_Object_o *effectTween; // x21
  UnityEngine_Behaviour_o *v7; // x0
  UnityEngine_GameObject_o *menuBtn; // x0
  UnityEngine_GameObject_o *spellBtn; // x0
  UnityEngine_GameObject_o *skillBtn; // x0
  BattlePerformance_o *perf; // x0
  UnityEngine_GameObject_o *master_root; // x21
  bool isPositionTactical; // w0
  UnityEngine_GameObject_o *v14; // x0

  Component_srcLineSprite = (UnityEngine_Object_o *)widget;
  if ( (byte_40FA877 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, widget);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FA877 = 1;
  }
  effectTween = (UnityEngine_Object_o *)this->fields.effectTween;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectTween, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.effectTween;
    if ( !v7 )
      goto LABEL_23;
    UnityEngine_Behaviour__set_enabled(v7, 0, 0LL);
  }
  menuBtn = this->fields.menuBtn;
  if ( !menuBtn )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(menuBtn, 1, 0LL);
  spellBtn = this->fields.spellBtn;
  if ( !spellBtn
    || (UnityEngine_GameObject__SetActive(spellBtn, 1, 0LL), (skillBtn = this->fields.skillBtn) == 0LL)
    || (UnityEngine_GameObject__SetActive(skillBtn, 1, 0LL), (perf = this->fields.perf) == 0LL)
    || (master_root = this->fields.master_root,
        isPositionTactical = BattlePerformance__isPositionTactical(perf, 0LL),
        !master_root) )
  {
LABEL_23:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(master_root, isPositionTactical, 0LL);
  this->fields.isMasterBuffEffectPlaying = 0;
  if ( !Component_srcLineSprite )
  {
    v14 = this->fields.master_root;
    if ( !v14 )
      goto LABEL_23;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v14,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
        Component_srcLineSprite,
        Component_srcLineSprite->klass[1]._1.declaringType,
        1.0);
      return;
    }
    goto LABEL_23;
  }
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA878 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_TypeInfo, method);
    byte_40FA878 = 1;
  }
  v6 = sub_B170CC(BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_TypeInfo, method, v2, v3, v4);
  BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162___ctor(
    (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__endSelectSvtError(
        BattlePerformanceMaster_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  BattlePerformance_o *perf; // x0

  if ( (byte_40FA854 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    byte_40FA854 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (perf = this->fields.perf) == 0LL) )
    sub_B170D4();
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows(perf, this->fields.myFsm, 0LL);
}


void __fastcall BattlePerformanceMaster__endSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA860 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12307, method);
    byte_40FA860 = 1;
  }
  BattlePerformanceMaster__updateCommandSpellIcon(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12307, 0LL);
}


void __fastcall BattlePerformanceMaster__flashBoostSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleBoostSkillIconComponent_o *boostSkillIcon; // x0

  boostSkillIcon = this->fields.boostSkillIcon;
  if ( !boostSkillIcon )
    sub_B170D4();
  BattleBoostSkillIconComponent__procFlash(boostSkillIcon, 0LL);
}


bool __fastcall BattlePerformanceMaster__get_IsMasterBuffEffectPlaying(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  return this->fields.isMasterBuffEffectPlaying;
}


bool __fastcall BattlePerformanceMaster__isCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleWindowComponent_o *warBoard_win_EnemyConf; // x0

  data = this->fields.data;
  if ( !data )
    goto LABEL_7;
  if ( !BattleData__IsWarBoard(data, 0LL) )
    goto LABEL_5;
  warBoard_win_EnemyConf = (BattleWindowComponent_o *)this->fields.warBoard_win_EnemyConf;
  if ( !warBoard_win_EnemyConf )
    goto LABEL_7;
  if ( !warBoard_win_EnemyConf[2].fields.call_closeComp )
  {
LABEL_5:
    warBoard_win_EnemyConf = (BattleWindowComponent_o *)this->fields.win_EnemyConf;
    if ( warBoard_win_EnemyConf )
      return BattleWindowComponent__isClose(warBoard_win_EnemyConf, 0LL);
LABEL_7:
    sub_B170D4();
  }
  return BattleWindowComponent__isClose(warBoard_win_EnemyConf, 0LL);
}


bool __fastcall BattlePerformanceMaster__isWinMenuWindowOpenOrOpening(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_o *win_Menu; // x0

  win_Menu = (BattleWindowComponent_o *)this->fields.win_Menu;
  if ( !win_Menu )
    sub_B170D4();
  return BattleWindowComponent__isOpenOrOpening(win_Menu, 0LL);
}


bool __fastcall BattlePerformanceMaster__isWinSpellWindowOpenOrOpening(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_o *win_Spell; // x0

  win_Spell = (BattleWindowComponent_o *)this->fields.win_Spell;
  if ( !win_Spell )
    sub_B170D4();
  return BattleWindowComponent__isOpenOrOpening(win_Spell, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__loadData(BattlePerformanceMaster_o *this, const MethodInfo *method)
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
  BattleData_o *data; // x0
  int32_t MasterEquipId; // w0
  struct BattleData_o *v17; // x8
  int32_t v18; // w20
  QuestEntity_o *quest_ent; // x0
  UnityEngine_GameObject_o *userGrade; // x0
  BattleData_o *v21; // x0
  BattleData_o *v22; // x0
  int32_t v23; // w8
  BattleData_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *face_root; // x0
  UnityEngine_Transform_o *transform; // x0
  UIMasterFaceTexture_o *childCount; // x0
  const MethodInfo *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct BattleData_o *v36; // x8
  UnityEngine_GameObject_o *master_root; // x0
  UISprite_o *Component_srcLineSprite; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v40; // x9
  struct BattleData_o *v41; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  struct BattleServantSkillIConComponent_array *skillIcon; // x20
  int size; // w24
  int max_length; // w8
  __int64 v46; // x22
  UnityEngine_Component_o *v47; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Component_o *skillIconPrefab; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Component_o *skillIconSplit; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Component_o *v53; // x0
  UnityEngine_Transform_o *v54; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x21
  int v63; // w25
  __int64 v64; // x26
  char v65; // w28
  UnityEngine_Component_o *win_Skill; // x0
  UILabel_o *v67; // x22
  UnityEngine_Transform_o *v68; // x23
  UnityEngine_Component_o *v69; // x0
  UnityEngine_Component_o *v70; // x22
  UnityEngine_Transform_o *v71; // x23
  int v72; // s0
  UnityEngine_Transform_o *v75; // x23
  int v76; // s0
  struct BattlePerformance_o *v79; // x8
  struct BattleData_o *v80; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v81; // x23
  BattleSkillInfoData_o *v82; // x8
  float v83; // s11
  UnityEngine_Component_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  UISprite_o *v86; // x23
  UnityEngine_Transform_o *v87; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  struct BattleServantSkillIConComponent_array *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  UnityEngine_Component_o *v96; // x0
  UnityEngine_GameObject_o *v97; // x0
  const MethodInfo *v98; // x1
  UnityEngine_GameObject_o *v99; // x0
  int32_t overwriteImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA828 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_22058, v13);
    sub_B16FFC(&StringLiteral_18813, v14);
    byte_40FA828 = 1;
  }
  overwriteImageId = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_82;
  MasterEquipId = BattleData__getMasterEquipId(data, 0LL);
  v17 = this->fields.data;
  if ( !v17 )
    goto LABEL_82;
  v18 = MasterEquipId;
  quest_ent = v17->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_82;
  if ( QuestEntity__HasFlag(quest_ent, 0x100000000LL, 0LL) )
  {
    userGrade = this->fields.userGrade;
    if ( !userGrade )
      goto LABEL_82;
    UnityEngine_GameObject__SetActive(userGrade, 0, 0LL);
    goto LABEL_22;
  }
  v21 = this->fields.data;
  if ( !v21 )
    goto LABEL_82;
  overwriteImageId = BattleData__GetMasterIconImageId(v21, 0LL);
  v22 = this->fields.data;
  if ( !v22 )
    goto LABEL_82;
  BattleData__GetEquipAddImageId(v22, &overwriteImageId, 0LL);
  v23 = overwriteImageId;
  if ( !overwriteImageId )
  {
    v24 = this->fields.data;
    if ( !v24 )
      goto LABEL_82;
    overwriteImageId = BattleData__GetOverWriteMasterImageId(v24, 0LL);
    if ( !overwriteImageId )
      goto LABEL_17;
    v25 = this->fields.userGrade;
    if ( !v25 )
      goto LABEL_82;
    UnityEngine_GameObject__SetActive(v25, 0, 0LL);
    v23 = overwriteImageId;
  }
  if ( v23 == -1 )
  {
LABEL_22:
    master_root = this->fields.master_root;
    if ( !master_root )
      goto LABEL_82;
    Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              master_root,
                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !Component_srcLineSprite )
      goto LABEL_82;
    UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)StringLiteral_18813, 0LL);
    goto LABEL_25;
  }
LABEL_17:
  face_root = this->fields.face_root;
  if ( !face_root )
    goto LABEL_82;
  transform = UnityEngine_GameObject__get_transform(face_root, 0LL);
  if ( !transform )
    goto LABEL_82;
  childCount = (UIMasterFaceTexture_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
  if ( !(_DWORD)childCount )
  {
    v36 = this->fields.data;
    if ( !v36 )
      goto LABEL_82;
    childCount = MasterFaceManager__CreatePrefab_27242376(
                   this->fields.face_root,
                   1,
                   v36->fields.battleGenderType,
                   v18,
                   2,
                   0LL,
                   overwriteImageId,
                   0LL);
  }
LABEL_25:
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_82;
  v40 = perf->fields.data;
  if ( !v40 )
    goto LABEL_82;
  if ( v40->fields.masterSkillIconId >= 1 )
  {
    BattlePerformanceMaster__SetupMasterSkillBtn(this, v29);
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_82;
  }
  v41 = perf->fields.data;
  if ( !v41 )
    goto LABEL_82;
  masterSkillInfo = v41->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_82;
  skillIcon = this->fields.skillIcon;
  size = masterSkillInfo->fields._size;
  if ( skillIcon )
  {
    max_length = skillIcon->max_length;
    if ( size == max_length )
      goto LABEL_80;
    if ( max_length >= 1 )
    {
      v46 = 0LL;
      do
      {
        if ( (unsigned int)v46 >= max_length )
        {
          sub_B17100(childCount, v29, v30);
          sub_B170A0();
        }
        v47 = (UnityEngine_Component_o *)skillIcon->m_Items[v46];
        if ( !v47 )
          goto LABEL_82;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v47, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
        max_length = skillIcon->max_length;
      }
      while ( (int)++v46 < max_length );
    }
    this->fields.skillIcon = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.skillIcon, 0LL, v30, v31, v32, v33, v34, v35);
  }
  skillIconPrefab = (UnityEngine_Component_o *)this->fields.skillIconPrefab;
  if ( !skillIconPrefab )
    goto LABEL_82;
  v50 = UnityEngine_Component__get_gameObject(skillIconPrefab, 0LL);
  if ( !v50 )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive(v50, 1, 0LL);
  skillIconSplit = (UnityEngine_Component_o *)this->fields.skillIconSplit;
  if ( !skillIconSplit )
    goto LABEL_82;
  v52 = UnityEngine_Component__get_gameObject(skillIconSplit, 0LL);
  if ( !v52 )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive(v52, 0, 0LL);
  v53 = (UnityEngine_Component_o *)this->fields.skillIconPrefab;
  if ( !v53 )
    goto LABEL_82;
  v54 = UnityEngine_Component__get_transform(v53, 0LL);
  if ( !v54 )
    goto LABEL_82;
  localPosition = UnityEngine_Transform__get_localPosition(v54, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo,
                                                                                                  v58,
                                                                                                  v59,
                                                                                                  v60,
                                                                                                  v61);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__);
  v63 = size - 1;
  if ( size >= 1 )
  {
    v64 = 0LL;
    v65 = 0;
    while ( 1 )
    {
      win_Skill = (UnityEngine_Component_o *)this->fields.win_Skill;
      if ( !win_Skill )
        goto LABEL_82;
      v67 = (UILabel_o *)this->fields.skillIconPrefab;
      v68 = UnityEngine_Component__get_transform(win_Skill, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v69 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                         v67,
                                         v68,
                                         (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___);
      if ( !v69 )
        goto LABEL_82;
      v70 = v69;
      v71 = UnityEngine_Component__get_transform(v69, 0LL);
      *(UnityEngine_Vector3_o *)&v72 = UnityEngine_Vector3__get_one(0LL);
      if ( !v71 )
        goto LABEL_82;
      UnityEngine_Transform__set_localScale(v71, *(UnityEngine_Vector3_o *)&v72, 0LL);
      v75 = UnityEngine_Component__get_transform(v70, 0LL);
      *(UnityEngine_Vector3_o *)&v76 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v75 )
        goto LABEL_82;
      UnityEngine_Transform__set_localEulerAngles(v75, *(UnityEngine_Vector3_o *)&v76, 0LL);
      v79 = this->fields.perf;
      if ( !v79 )
        goto LABEL_82;
      v80 = v79->fields.data;
      if ( !v80 )
        goto LABEL_82;
      v81 = v80->fields.masterSkillInfo;
      if ( !v81 )
        goto LABEL_82;
      if ( v81->fields._size <= (unsigned int)v64 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v82 = v81->fields._items->m_Items[v64];
      if ( !v82 )
        goto LABEL_82;
      v83 = x + (float)(this->fields.skillIconOffset * (float)v63);
      if ( v82->fields.isAdd )
      {
        if ( (v65 & 1) == 0 )
        {
          v84 = (UnityEngine_Component_o *)this->fields.skillIconSplit;
          if ( !v84 )
            goto LABEL_82;
          v85 = UnityEngine_Component__get_gameObject(v84, 0LL);
          if ( !v85 )
            goto LABEL_82;
          UnityEngine_GameObject__SetActive(v85, 1, 0LL);
          v86 = this->fields.skillIconSplit;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventSprite(v86, (System_String_o *)StringLiteral_22058, 0LL);
        }
        v65 = 1;
        v83 = v83 - this->fields.skillIconSplitSpace;
      }
      v87 = UnityEngine_Component__get_transform(v70, 0LL);
      if ( !v87 )
        goto LABEL_82;
      v102.fields.x = v83;
      v102.fields.y = y;
      v102.fields.z = z;
      UnityEngine_Transform__set_localPosition(v87, v102, 0LL);
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  v70,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___);
      if ( !v62 )
        goto LABEL_82;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v62,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__);
      ++v64;
      --v63;
      if ( (int)v64 >= size )
        goto LABEL_77;
    }
  }
  if ( !v62 )
    goto LABEL_82;
LABEL_77:
  v89 = (struct BattleServantSkillIConComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v62,
                                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__);
  this->fields.skillIcon = v89;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillIcon,
    (System_Int32_array **)v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  v96 = (UnityEngine_Component_o *)this->fields.skillIconPrefab;
  if ( !v96 || (v97 = UnityEngine_Component__get_gameObject(v96, 0LL)) == 0LL )
LABEL_82:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v97, 0, 0LL);
LABEL_80:
  BattlePerformanceMaster__updateSkillIcon(this, v29);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v98);
  v99 = this->fields.master_root;
  if ( !v99 )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive(v99, 1, 0LL);
}


void __fastcall BattlePerformanceMaster__modeCom(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v5; // x2
  BattlePerformanceEnemyMst_o *enemyMasterPerf; // x0
  const MethodInfo *v7; // x1
  struct CommandSpellWindowComponent_o *win_Spell; // x0
  BattleMenuWindowComponent_o *win_Menu; // x0
  struct BattleRetireWindowComponent_o *win_Retire; // x0
  BattleServantConfConponent_o *warBoard_win_EnemyConf; // x0
  BattleServantConfConponent_o *win_EnemyConf; // x0
  UnityEngine_Object_o *fieldConf; // x20
  BattleFieldConfConponent_o *v14; // x0
  struct BattleItemListWindowComponent_o *itemListWindow; // x0

  if ( (byte_40FA866 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA866 = 1;
  }
  BattlePerformanceMaster__endMasterBuffEffect(this, 0LL, v2);
  master_root = this->fields.master_root;
  if ( !master_root )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(master_root, 0, 0LL);
  enemyMasterPerf = this->fields.enemyMasterPerf;
  if ( !enemyMasterPerf )
    goto LABEL_18;
  BattlePerformanceEnemyMst__SetRootActive(enemyMasterPerf, 0, v5);
  BattlePerformanceMaster__procCloseSkill(this, v7);
  win_Spell = this->fields.win_Spell;
  if ( !win_Spell )
    goto LABEL_18;
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Spell->klass->vtable._12_Close.method)(
    win_Spell,
    0LL,
    win_Spell->klass->vtable._13_CompClose.methodPtr);
  win_Menu = this->fields.win_Menu;
  if ( !win_Menu )
    goto LABEL_18;
  BattleMenuWindowComponent__Close(win_Menu, 0LL, 0LL);
  win_Retire = this->fields.win_Retire;
  if ( !win_Retire )
    goto LABEL_18;
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Retire->klass->vtable._12_Close.method)(
    win_Retire,
    0LL,
    win_Retire->klass->vtable._13_CompClose.methodPtr);
  warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  if ( !warBoard_win_EnemyConf )
    goto LABEL_18;
  BattleServantConfConponent__Close(warBoard_win_EnemyConf, 0LL, 0LL);
  win_EnemyConf = this->fields.win_EnemyConf;
  if ( !win_EnemyConf )
    goto LABEL_18;
  BattleServantConfConponent__Close(win_EnemyConf, 0LL, 0LL);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v14 = this->fields.fieldConf;
    if ( !v14 )
      goto LABEL_18;
    BattleFieldConfConponent__Close(v14, 0LL, 0LL);
  }
  itemListWindow = this->fields.itemListWindow;
  if ( !itemListWindow )
LABEL_18:
    sub_B170D4();
  ((void (__fastcall *)(struct BattleItemListWindowComponent_o *, _QWORD, Il2CppMethodPointer))itemListWindow->klass->vtable._12_Close.method)(
    itemListWindow,
    0LL,
    itemListWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__modeTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v5; // x2
  BattlePerformanceEnemyMst_o *enemyMasterPerf; // x0
  const MethodInfo *v7; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA82D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FA82D = 1;
  }
  BattlePerformanceMaster__endMasterBuffEffect(this, 0LL, v2);
  master_root = this->fields.master_root;
  if ( !master_root
    || (UnityEngine_GameObject__SetActive(master_root, 1, 0LL), (enemyMasterPerf = this->fields.enemyMasterPerf) == 0LL)
    || (BattlePerformanceEnemyMst__SetRootActive(enemyMasterPerf, 1, v5),
        BattlePerformanceMaster__updateSkillIcon(this, v7),
        (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickMenuButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattleWindowComponent_o *skillConfWindow; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA874 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3059, method);
    byte_40FA874 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0LL) )
    return;
  skillConfWindow = (BattleWindowComponent_o *)this->fields.skillConfWindow;
  if ( !skillConfWindow )
LABEL_10:
    sub_B170D4();
  if ( !BattleWindowComponent__isOpenOrOpening(skillConfWindow, 0LL) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3059, 0LL);
      return;
    }
    goto LABEL_10;
  }
}


void __fastcall BattlePerformanceMaster__onClickSkillCancel(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA850 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2912, method);
    byte_40FA850 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2912, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickSkillOK(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  BattleLogic_UseSkillObject_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA84F & 1) == 0 )
  {
    sub_B16FFC(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_B16FFC(&StringLiteral_9714, v7);
    byte_40FA84F = 1;
  }
  v8 = (BattleLogic_UseSkillObject_o *)sub_B170CC(BattleLogic_UseSkillObject_TypeInfo, skillInfo, method, v3, v4);
  BattleLogic_UseSkillObject___ctor(v8, skillInfo, 0LL);
  this->fields.useSkillObject = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.useSkillObject,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9714, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickSpellButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *perf; // x0
  BattleWindowComponent_o *skillConfWindow; // x0
  struct BattleData_o *data; // x8
  QuestEntity_o *quest_ent; // x0
  struct BattleData_o *v8; // x8
  QuestEntity_o *v9; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA873 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3069, v3);
    byte_40FA873 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_20;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0LL) )
    return;
  skillConfWindow = (BattleWindowComponent_o *)this->fields.skillConfWindow;
  if ( !skillConfWindow )
    goto LABEL_20;
  if ( BattleWindowComponent__isOpenOrOpening(skillConfWindow, 0LL) )
    return;
  data = this->fields.data;
  if ( !data )
    goto LABEL_20;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_20;
  if ( !QuestEntity__HasFlag(quest_ent, 0x400000000LL, 0LL) )
  {
    v8 = this->fields.data;
    if ( v8 )
    {
      v9 = v8->fields.quest_ent;
      if ( v9 )
      {
        if ( QuestEntity__HasFlag(v9, 0x100000000LL, 0LL) )
          goto LABEL_14;
        myFsm = this->fields.myFsm;
        if ( myFsm )
        {
          PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3069, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_14:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
}


void __fastcall BattlePerformanceMaster__onCloseEnemyServantConf(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA86C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3085, method);
    byte_40FA86C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3085, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__openRetireDialog(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA862 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceMaster__openRetireDialog_d__134_TypeInfo, method);
    byte_40FA862 = 1;
  }
  v6 = sub_B170CC(BattlePerformanceMaster__openRetireDialog_d__134_TypeInfo, method, v2, v3, v4);
  BattlePerformanceMaster__openRetireDialog_d__134___ctor(
    (BattlePerformanceMaster__openRetireDialog_d__134_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattlePerformanceMaster__openSelectSvtWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_selectSvtWindow; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleSelectServantWindow_o *v13; // x0
  struct BattleSelectServantWindow_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BattleSelectServantWindow_SelectServantCallBack_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  BattleData_o *data; // x0
  BattleSelectServantWindow_o *v27; // x21
  BattleServantData_array *FieldPlayerServantList; // x1

  if ( (byte_40FA83D & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_selectedSvt__, method);
    sub_B16FFC(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo, v3);
    byte_40FA83D = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    sub_B170D4();
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  p_selectSvtWindow = &this->fields.selectSvtWindow;
  this->fields.selectSvtWindow = SelectSvtWindow;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectSvtWindow,
    (System_Int32_array **)SelectSvtWindow,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = this->fields.selectSvtWindow;
  if ( !v13 )
    sub_B170D4();
  BattleSelectServantWindow__setUseClose(v13, 1, 0LL);
  v14 = *p_selectSvtWindow;
  v19 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_B170CC(
                                                               BattleSelectServantWindow_SelectServantCallBack_TypeInfo,
                                                               v15,
                                                               v16,
                                                               v17,
                                                               v18);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSvt__,
    0LL);
  if ( !v14 )
    sub_B170D4();
  v14->fields.selectCallBack = v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v14->fields.selectCallBack,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  data = this->fields.data;
  if ( !data )
    sub_B170D4();
  v27 = this->fields.selectSvtWindow;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !v27 )
    sub_B170D4();
  BattleSelectServantWindow__SetServantData(
    v27,
    FieldPlayerServantList,
    0,
    this->fields.tmp_commandSpellId,
    this->fields.data,
    0LL);
  if ( !*p_selectSvtWindow )
    sub_B170D4();
  ((void (__fastcall *)(struct BattleSelectServantWindow_o *, _QWORD, Il2CppMethodPointer))(*p_selectSvtWindow)->klass->vtable._10_Open.method)(
    *p_selectSvtWindow,
    0LL,
    (*p_selectSvtWindow)->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__openSkillSelectMainSubSvtWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleData_o *data; // x0
  BattleServantData_array *SubPlayerServantList; // x0
  BattlePerformance_o *perf; // x0
  struct BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  struct BattleSelectMainSubServantWindow_o **p_selectMSWindow; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct BattleSelectMainSubServantWindow_o *selectMSWindow; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct BattleSelectMainSubServantWindow_o *v39; // x0
  System_Int32_array **v40; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v42; // x21
  System_String_o *v43; // x22
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  NotificationDialog_ClickDelegate_o *v48; // x23

  if ( (byte_40FA852 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_callBackSelectedMainSub__, method);
    sub_B16FFC(&Method_BattlePerformanceMaster_endSelectSvtError__, v3);
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_2506, v8);
    sub_B16FFC(&StringLiteral_2507, v9);
    byte_40FA852 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  SubPlayerServantList = BattleData__getSubPlayerServantList(data, 0LL);
  if ( !SubPlayerServantList )
    goto LABEL_16;
  if ( *(_QWORD *)&SubPlayerServantList->max_length )
  {
    perf = this->fields.perf;
    if ( perf )
    {
      SelectMainSubSvtWindow = BattlePerformance__getSelectMainSubSvtWindow(perf, 0LL);
      p_selectMSWindow = &this->fields.selectMSWindow;
      this->fields.selectMSWindow = SelectMainSubSvtWindow;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.selectMSWindow,
        (System_Int32_array **)SelectMainSubSvtWindow,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      selectMSWindow = this->fields.selectMSWindow;
      v26 = (BattleSelectMainSubServantWindow_SelectedCallBack_o *)sub_B170CC(
                                                                     BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo,
                                                                     v22,
                                                                     v23,
                                                                     v24,
                                                                     v25);
      BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        v26,
        (Il2CppObject *)this,
        Method_BattlePerformanceMaster_callBackSelectedMainSub__,
        0LL);
      if ( selectMSWindow )
      {
        selectMSWindow->fields.callBack = v26;
        sub_B16F98(
          (BattleServantConfConponent_o *)&selectMSWindow->fields.callBack,
          (System_Int32_array **)v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        v39 = this->fields.selectMSWindow;
        if ( v39 )
        {
          v40 = (System_Int32_array **)this->fields.data;
          v39->fields.battleData = (struct BattleData_o *)v40;
          sub_B16F98((BattleServantConfConponent_o *)&v39->fields.battleData, v40, v33, v34, v35, v36, v37, v38);
          if ( *p_selectMSWindow )
          {
            ((void (__fastcall *)(struct BattleSelectMainSubServantWindow_o *, _QWORD, Il2CppMethodPointer))(*p_selectMSWindow)->klass->vtable._10_Open.method)(
              *p_selectMSWindow,
              0LL,
              (*p_selectMSWindow)->klass->vtable._11_CompOpen.methodPtr);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_B170D4();
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2507, 0LL);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_2506, 0LL);
  v48 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(NotificationDialog_ClickDelegate_TypeInfo, v44, v45, v46, v47);
  NotificationDialog_ClickDelegate___ctor(
    v48,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_endSelectSvtError__,
    0LL);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog_18239760(
    Instance,
    v42,
    v43,
    v48,
    -1,
    0,
    0,
    0,
    0,
    1,
    0LL,
    0LL,
    0,
    0,
    0LL,
    1,
    0LL,
    0LL,
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__openSkillSelectSvtWindow(
        BattlePerformanceMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_skillselectSvtWindow; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleSelectServantWindow_o *skillselectSvtWindow; // x0
  struct BattleSelectServantWindow_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  BattleSelectServantWindow_SelectServantCallBack_o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BattleData_o *data; // x0
  BattleSelectServantWindow_o *v29; // x20
  BattleServantData_array *FieldPlayerServantList; // x0

  if ( (byte_40FA84E & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_selectedSkillSvt__, *(_QWORD *)&skillId);
    sub_B16FFC(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo, v5);
    byte_40FA84E = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  p_skillselectSvtWindow = &this->fields.skillselectSvtWindow;
  this->fields.skillselectSvtWindow = SelectSvtWindow;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillselectSvtWindow,
    (System_Int32_array **)SelectSvtWindow,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  skillselectSvtWindow = this->fields.skillselectSvtWindow;
  if ( !skillselectSvtWindow )
    goto LABEL_10;
  BattleSelectServantWindow__setUseClose(skillselectSvtWindow, 1, 0LL);
  v16 = this->fields.skillselectSvtWindow;
  v21 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_B170CC(
                                                               BattleSelectServantWindow_SelectServantCallBack_TypeInfo,
                                                               v17,
                                                               v18,
                                                               v19,
                                                               v20);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v21,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSkillSvt__,
    0LL);
  if ( !v16
    || (v16->fields.selectCallBack = v21,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v16->fields.selectCallBack,
          (System_Int32_array **)v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27),
        (data = this->fields.data) == 0LL)
    || (v29 = this->fields.skillselectSvtWindow,
        FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL),
        !v29)
    || (BattleSelectServantWindow__SetServantData(v29, FieldPlayerServantList, skillId, -1, 0LL, 0LL),
        !*p_skillselectSvtWindow) )
  {
LABEL_10:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleSelectServantWindow_o *, _QWORD, Il2CppMethodPointer))(*p_skillselectSvtWindow)->klass->vtable._10_Open.method)(
    *p_skillselectSvtWindow,
    0LL,
    (*p_skillselectSvtWindow)->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseAll(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformanceMaster_o *v6; // x0
  const MethodInfo *v7; // x3
  BattleMenuWindowComponent_o *win_Menu; // x0
  struct BattleRetireWindowComponent_o *win_Retire; // x0
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  BattleWindowComponent_EndCall_o *v15; // x21
  struct CommandSpellWindowComponent_o *win_Spell; // x0
  BattleServantConfConponent_o *warBoard_win_EnemyConf; // x0
  BattleServantConfConponent_o *win_EnemyConf; // x0
  UnityEngine_Object_o *fieldConf; // x20
  BattleFieldConfConponent_o *v20; // x0
  struct BattleSkillConfComponent_o *skillConfWindow; // x0
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x0
  BattlePerformance_o *perf; // x0
  struct BattleItemListWindowComponent_o *itemListWindow; // x0

  v3 = this;
  if ( (byte_40FA864 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_compCloseALL__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v4);
    this = (BattlePerformanceMaster_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FA864 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  BattlePerformanceMaster__proclight(v6, v3->fields.menuBtn, 0, v7);
  win_Menu = v3->fields.win_Menu;
  if ( !win_Menu )
    goto LABEL_20;
  BattleMenuWindowComponent__Close(win_Menu, 0LL, 0LL);
  win_Retire = v3->fields.win_Retire;
  if ( !win_Retire )
    goto LABEL_20;
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Retire->klass->vtable._12_Close.method)(
    win_Retire,
    0LL,
    win_Retire->klass->vtable._13_CompClose.methodPtr);
  win_Skill = v3->fields.win_Skill;
  v15 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v11, v12, v13, v14);
  BattleWindowComponent_EndCall___ctor(v15, (Il2CppObject *)v3, Method_BattlePerformanceMaster_compCloseALL__, 0LL);
  if ( !win_Skill )
    goto LABEL_20;
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    v15,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
  win_Spell = v3->fields.win_Spell;
  if ( !win_Spell )
    goto LABEL_20;
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Spell->klass->vtable._12_Close.method)(
    win_Spell,
    0LL,
    win_Spell->klass->vtable._13_CompClose.methodPtr);
  warBoard_win_EnemyConf = v3->fields.warBoard_win_EnemyConf;
  if ( !warBoard_win_EnemyConf )
    goto LABEL_20;
  BattleServantConfConponent__Close(warBoard_win_EnemyConf, 0LL, 0LL);
  win_EnemyConf = v3->fields.win_EnemyConf;
  if ( !win_EnemyConf )
    goto LABEL_20;
  BattleServantConfConponent__Close(win_EnemyConf, 0LL, 0LL);
  fieldConf = (UnityEngine_Object_o *)v3->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v20 = v3->fields.fieldConf;
    if ( !v20 )
      goto LABEL_20;
    BattleFieldConfConponent__Close(v20, 0LL, 0LL);
  }
  skillConfWindow = v3->fields.skillConfWindow;
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, _QWORD, Il2CppMethodPointer))skillConfWindow->klass->vtable._12_Close.method)(
          skillConfWindow,
          0LL,
          skillConfWindow->klass->vtable._13_CompClose.methodPtr),
        (boostSkillConfWindow = v3->fields.boostSkillConfWindow) == 0LL)
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, _QWORD, Il2CppMethodPointer))boostSkillConfWindow->klass->vtable._12_Close.method)(
          boostSkillConfWindow,
          0LL,
          boostSkillConfWindow->klass->vtable._13_CompClose.methodPtr),
        (perf = v3->fields.perf) == 0LL)
    || (BattlePerformance__CloseSkillSelectAddFuncConfWindow(perf, 0LL, 0LL),
        (itemListWindow = v3->fields.itemListWindow) == 0LL) )
  {
LABEL_20:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleItemListWindowComponent_o *, _QWORD, Il2CppMethodPointer))itemListWindow->klass->vtable._12_Close.method)(
    itemListWindow,
    0LL,
    itemListWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseBoostSkillConf(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_40FA847 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_CloseBoostSkillConfComp__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SeManager_TypeInfo, v4);
    byte_40FA847 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  v10 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v6, v7, v8, v9);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseBoostSkillConfComp__,
    0LL);
  if ( !boostSkillConfWindow )
    sub_B170D4();
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))boostSkillConfWindow->klass->vtable._12_Close.method)(
    boostSkillConfWindow,
    v10,
    boostSkillConfWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseButtonCommandSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA83A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3100, method);
    byte_40FA83A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3100, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_40FA86D & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_compCloseEnemyConf__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_40FA86D = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  if ( !BattleData__IsWarBoard(data, 0LL) )
    goto LABEL_8;
  warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  if ( !warBoard_win_EnemyConf )
    goto LABEL_10;
  if ( !warBoard_win_EnemyConf->fields.bsvtData )
  {
LABEL_8:
    warBoard_win_EnemyConf = this->fields.win_EnemyConf;
    v10 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7, v8);
    BattleWindowComponent_EndCall___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_compCloseEnemyConf__,
      0LL);
    if ( warBoard_win_EnemyConf )
      goto LABEL_9;
LABEL_10:
    sub_B170D4();
  }
  v10 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7, v8);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseEnemyConf__,
    0LL);
LABEL_9:
  BattleServantConfConponent__Close(warBoard_win_EnemyConf, v10, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseMenuWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattlePerformanceMaster_o *v5; // x0
  const MethodInfo *v6; // x3
  BattleMenuWindowComponent_o *win_Menu; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  BattleWindowComponent_EndCall_o *v12; // x21

  if ( (byte_40FA857 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_compCloseMenu__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SeManager_TypeInfo, v4);
    byte_40FA857 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  BattlePerformanceMaster__proclight(v5, this->fields.menuBtn, 0, v6);
  win_Menu = this->fields.win_Menu;
  v12 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10, v11);
  BattleWindowComponent_EndCall___ctor(v12, (Il2CppObject *)this, Method_BattlePerformanceMaster_compCloseMenu__, 0LL);
  if ( !win_Menu )
    sub_B170D4();
  BattleMenuWindowComponent__Close(win_Menu, v12, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v4; // x0
  const MethodInfo *v5; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x0

  BattlePerformanceMaster__proclight(this, this->fields.skillBtn, 0, v2);
  BattlePerformanceMaster__proclight(v4, this->fields.menuBtn, 0, v5);
  win_Skill = this->fields.win_Skill;
  if ( !win_Skill )
    sub_B170D4();
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    0LL,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  BattleWindowComponent_EndCall_o *v10; // x21
  BattlePerformance_o *perf; // x0

  if ( (byte_40FA842 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_CloseSkillConfComp__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SeManager_TypeInfo, v4);
    byte_40FA842 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  v10 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v6, v7, v8, v9);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseSkillConfComp__,
    0LL);
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))skillConfWindow->klass->vtable._12_Close.method)(
          skillConfWindow,
          v10,
          skillConfWindow->klass->vtable._13_CompClose.methodPtr),
        (perf = this->fields.perf) == 0LL) )
  {
    sub_B170D4();
  }
  BattlePerformance__CloseSkillSelectAddFuncConfWindow(perf, 0LL, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseSkillWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattlePerformanceMaster_o *v5; // x0
  const MethodInfo *v6; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  BattleWindowComponent_EndCall_o *v12; // x21

  if ( (byte_40FA830 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_compCloseSkillWindow__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SeManager_TypeInfo, v4);
    byte_40FA830 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  BattlePerformanceMaster__proclight(v5, this->fields.skillBtn, 0, v6);
  win_Skill = this->fields.win_Skill;
  v12 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10, v11);
  BattleWindowComponent_EndCall___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSkillWindow__,
    0LL);
  if ( !win_Skill )
    sub_B170D4();
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    v12,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct CommandSpellWindowComponent_o *win_Spell; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_40FA838 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_compCloseSpellWindow__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SeManager_TypeInfo, v4);
    byte_40FA838 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  win_Spell = this->fields.win_Spell;
  v10 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v6, v7, v8, v9);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSpellWindow__,
    0LL);
  if ( !win_Spell )
    sub_B170D4();
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Spell->klass->vtable._12_Close.method)(
    win_Spell,
    v10,
    win_Spell->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenBoostSkillConf(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleSkillConfComponent_o *v13; // x0
  struct BattleSkillConfComponent_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BattleWindowComponent_EndCall_o *v19; // x21

  if ( (byte_40FA845 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_40FA845 = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !boostSkillConfWindow
    || (boostSkillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_B16F98(
          (BattleServantConfConponent_o *)&boostSkillConfWindow->fields.target,
          gameObject,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        !tmp_useSkill)
    || (v13 = this->fields.boostSkillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(v13, tmp_useSkill->fields.skillInfo, 1, 0, 0LL),
        v14 = this->fields.boostSkillConfWindow,
        v19 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v15, v16, v17, v18),
        BattleWindowComponent_EndCall___ctor(
          v19,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__,
          0LL),
        !v14) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v14->klass->vtable._10_Open.method)(
    v14,
    v19,
    v14->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattlePerformance_o *perf; // x0
  PlayMakerFSM_o *otherFsm; // x0
  BattleData_o *data; // x0
  BattleServantData_o *EnemyServantDataIndex; // x0
  BattleServantData_o *v9; // x20
  BattleServantConfConponent_o *warBoard_win_EnemyConf; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  BattleServantConfConponent_o *v15; // x20
  BattleServantConfConponent_o *win_EnemyConf; // x0
  BattleWindowComponent_EndCall_o *v17; // x21

  if ( (byte_40FA86A & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_compOpenEnemyConf__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_12285, v4);
    byte_40FA86A = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  otherFsm = this->fields.otherFsm;
  if ( !otherFsm )
    goto LABEL_16;
  PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_12285, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  EnemyServantDataIndex = BattleData__getEnemyServantDataIndex(data, this->fields.tmp_index, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v9 = EnemyServantDataIndex;
  if ( !BattleData__IsWarBoard(this->fields.data, 0LL) )
    goto LABEL_12;
  if ( !v9 )
    goto LABEL_16;
  if ( BattleServantData__IsEquip(v9, 0LL) )
  {
    warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
    if ( !warBoard_win_EnemyConf )
      goto LABEL_16;
    BattleServantConfConponent__setConfData(warBoard_win_EnemyConf, v9, 1, 0LL, 0, 0LL);
    v15 = this->fields.warBoard_win_EnemyConf;
  }
  else
  {
LABEL_12:
    win_EnemyConf = this->fields.win_EnemyConf;
    if ( !win_EnemyConf )
      goto LABEL_16;
    BattleServantConfConponent__setConfData(win_EnemyConf, v9, 1, 0LL, 0, 0LL);
    v15 = this->fields.win_EnemyConf;
  }
  v17 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v11, v12, v13, v14);
  BattleWindowComponent_EndCall___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenEnemyConf__,
    0LL);
  if ( !v15 )
LABEL_16:
    sub_B170D4();
  BattleServantConfConponent__Open(v15, v17, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenItemListWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattlePerformanceMaster_o *v7; // x0
  const MethodInfo *v8; // x3
  BattlePerformance_o *perf; // x0
  PlayMakerFSM_o *otherFsm; // x0
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  BattleWindowComponent_EndCall_o *v17; // x21

  v3 = this;
  if ( (byte_40FA879 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_compOpenItemListWindow__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_B16FFC(&SeManager_TypeInfo, v5);
    this = (BattlePerformanceMaster_o *)sub_B16FFC(&StringLiteral_12285, v6);
    byte_40FA879 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  BattlePerformanceMaster__proclight(v7, v3->fields.menuBtn, 0, v8);
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_11;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  otherFsm = v3->fields.otherFsm;
  if ( !otherFsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_12285, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  win_Skill = v3->fields.win_Skill;
  if ( !win_Skill
    || (((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
          win_Skill,
          0LL,
          win_Skill->klass->vtable._13_CompClose.methodPtr),
        itemListWindow = v3->fields.itemListWindow,
        v17 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v13, v14, v15, v16),
        BattleWindowComponent_EndCall___ctor(
          v17,
          (Il2CppObject *)v3,
          Method_BattlePerformanceMaster_compOpenItemListWindow__,
          0LL),
        !itemListWindow) )
  {
LABEL_11:
    sub_B170D4();
  }
  BattleItemListWindowComponent__Open(itemListWindow, 0, v17, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *perf; // x0
  PlayMakerFSM_o *otherFsm; // x0
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x0

  if ( (byte_40FA832 & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12285, v3);
    byte_40FA832 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  otherFsm = this->fields.otherFsm;
  if ( !otherFsm )
    goto LABEL_10;
  PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_12285, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlaySystemSe(7, 0LL);
  win_Skill = this->fields.win_Skill;
  if ( !win_Skill )
LABEL_10:
    sub_B170D4();
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Skill->klass->vtable._10_Open.method)(
    win_Skill,
    0LL,
    win_Skill->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenMenuWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  PlayMakerFSM_o *otherFsm; // x0
  BattlePerformanceMaster_o *v8; // x0
  const MethodInfo *v9; // x3
  BattlePerformanceMaster_o *v10; // x0
  const MethodInfo *v11; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x0
  BattleMenuWindowComponent_o *win_Menu; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  BattleWindowComponent_EndCall_o *v18; // x21

  if ( (byte_40FA855 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_compOpenMenu__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SeManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_12285, v5);
    byte_40FA855 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  otherFsm = this->fields.otherFsm;
  if ( !otherFsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_12285, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__proclight(v8, this->fields.skillBtn, 0, v9);
  BattlePerformanceMaster__proclight(v10, this->fields.menuBtn, 1, v11);
  win_Skill = this->fields.win_Skill;
  if ( !win_Skill
    || (((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
          win_Skill,
          0LL,
          win_Skill->klass->vtable._13_CompClose.methodPtr),
        win_Menu = this->fields.win_Menu,
        v18 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v14, v15, v16, v17),
        BattleWindowComponent_EndCall___ctor(
          v18,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenMenu__,
          0LL),
        !win_Menu) )
  {
LABEL_11:
    sub_B170D4();
  }
  BattleMenuWindowComponent__Open(win_Menu, v18, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleSkillConfComponent_o *v13; // x0
  struct BattleSkillConfComponent_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BattleWindowComponent_EndCall_o *v19; // x21

  if ( (byte_40FA840 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_OpenSkillConfComplete__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_40FA840 = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  skillConfWindow = this->fields.skillConfWindow;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_B16F98(
          (BattleServantConfConponent_o *)&skillConfWindow->fields.target,
          gameObject,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        !tmp_useSkill)
    || (v13 = this->fields.skillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(v13, tmp_useSkill->fields.skillInfo, 1, 0, 0LL),
        v14 = this->fields.skillConfWindow,
        v19 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v15, v16, v17, v18),
        BattleWindowComponent_EndCall___ctor(
          v19,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenSkillConfComplete__,
          0LL),
        !v14) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v14->klass->vtable._10_Open.method)(
    v14,
    v19,
    v14->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  PlayMakerFSM_o *otherFsm; // x0
  BattlePerformanceMaster_o *v8; // x0
  const MethodInfo *v9; // x3
  BattlePerformanceMaster_o *v10; // x0
  const MethodInfo *v11; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  BattleWindowComponent_EndCall_o *v17; // x21

  if ( (byte_40FA82E & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_compOpenSkillWindow__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SeManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_12285, v5);
    byte_40FA82E = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  otherFsm = this->fields.otherFsm;
  if ( !otherFsm )
    goto LABEL_10;
  PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_12285, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__proclight(v8, this->fields.skillBtn, 1, v9);
  BattlePerformanceMaster__proclight(v10, this->fields.menuBtn, 0, v11);
  win_Skill = this->fields.win_Skill;
  v17 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v13, v14, v15, v16);
  BattleWindowComponent_EndCall___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenSkillWindow__,
    0LL);
  if ( !win_Skill )
LABEL_10:
    sub_B170D4();
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._10_Open.method)(
    win_Skill,
    v17,
    win_Skill->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  PlayMakerFSM_o *otherFsm; // x0
  BattlePerformanceMaster_o *v8; // x0
  const MethodInfo *v9; // x3
  BattlePerformanceMaster_o *v10; // x0
  const MethodInfo *v11; // x3
  struct BattleData_o *data; // x8
  struct CommandSpellWindowComponent_o *win_Spell; // x9
  BattleData_o *v14; // x0
  struct CommandSpellWindowComponent_o *v15; // x20
  bool IsUseTemporaryCommandSpell; // w0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct CommandSpellWindowComponent_o *v21; // x20
  BattleWindowComponent_EndCall_o *v22; // x21
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x0

  if ( (byte_40FA836 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_compOpenSpellWindow__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SeManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_12285, v5);
    byte_40FA836 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_15;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  otherFsm = this->fields.otherFsm;
  if ( !otherFsm )
    goto LABEL_15;
  PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_12285, 0LL);
  BattlePerformanceMaster__proclight(v8, this->fields.skillBtn, 0, v9);
  BattlePerformanceMaster__proclight(v10, this->fields.menuBtn, 0, v11);
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  win_Spell = this->fields.win_Spell;
  if ( !win_Spell )
    goto LABEL_15;
  win_Spell->fields.temporarySpell = data->fields.temporarySpell;
  v14 = this->fields.data;
  if ( !v14 )
    goto LABEL_15;
  v15 = this->fields.win_Spell;
  IsUseTemporaryCommandSpell = BattleData__IsUseTemporaryCommandSpell(v14, 0LL);
  if ( !v15
    || (v15->fields.isUseTemporarySpell = IsUseTemporaryCommandSpell,
        v21 = this->fields.win_Spell,
        v22 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v17, v18, v19, v20),
        BattleWindowComponent_EndCall___ctor(
          v22,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenSpellWindow__,
          0LL),
        !v21)
    || (((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v21->klass->vtable._10_Open.method)(
          v21,
          v22,
          v21->klass->vtable._11_CompOpen.methodPtr),
        (win_Skill = this->fields.win_Skill) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    0LL,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__procUseCommandSpell(
        BattlePerformanceMaster_o *this,
        int32_t commandSpellId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA83B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3079, *(_QWORD *)&commandSpellId);
    byte_40FA83B = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandSpellId = commandSpellId;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3079, 0LL);
}


void __fastcall BattlePerformanceMaster__proclight(
        BattlePerformanceMaster_o *this,
        UnityEngine_GameObject_o *obj,
        bool flg,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UnityEngine_Behaviour_o *Component_srcLineSprite; // x20

  if ( (byte_40FA867 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, obj);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FA867 = 1;
  }
  if ( !obj )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         obj,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      UnityEngine_Behaviour__set_enabled(Component_srcLineSprite, flg, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__retRetireDialog(
        BattlePerformanceMaster_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  BattleLogic_o *logic; // x0

  if ( (byte_40FA863 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    sub_B16FFC(&StringLiteral_9714, v4);
    byte_40FA863 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (logic = this->fields.logic) == 0LL) )
    sub_B170D4();
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9714, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__selectedSkillSvt(
        BattlePerformanceMaster_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
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
  struct BattleSelectServantWindow_o *skillselectSvtWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x22
  int32_t v21; // w0
  WarEntity_o *Entity; // x0
  SkillEntity_o *v23; // x22
  BattleServantData_o *ServantData; // x0
  PlayMakerFSM_o *myFsm; // x0
  BattleLogic_o *logic; // x0
  CommonUI_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_String_o *v32; // x21
  BattlePerformanceMaster___c_c *v33; // x8
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x9
  System_Action_o *_9__116_0; // x23
  System_String_o *v36; // x22
  Il2CppObject *v37; // x24
  struct BattlePerformanceMaster___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  BattlePerformance_o *perf; // x0

  if ( (byte_40FA851 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_BattlePerformanceMaster___c__selectedSkillSvt_b__116_0__, v10);
    sub_B16FFC(&BattlePerformanceMaster___c_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_5481, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    sub_B16FFC(&StringLiteral_2438, v14);
    byte_40FA851 = 1;
  }
  skillselectSvtWindow = this->fields.skillselectSvtWindow;
  if ( !skillselectSvtWindow )
    goto LABEL_31;
  ((void (__fastcall *)(struct BattleSelectServantWindow_o *, _QWORD, Il2CppMethodPointer))skillselectSvtWindow->klass->vtable._12_Close.method)(
    skillselectSvtWindow,
    0LL,
    skillselectSvtWindow->klass->vtable._13_CompClose.methodPtr);
  if ( uniqueId != -1 )
  {
    actSkillObject = this->fields.actSkillObject;
    if ( !actSkillObject )
      goto LABEL_31;
    skillInfo = actSkillObject->fields.skillInfo;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !skillInfo )
      goto LABEL_31;
    v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v21 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
            skillInfo,
            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v20 )
      goto LABEL_31;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v20,
               v21,
               (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_31;
    v23 = (SkillEntity_o *)Entity;
    ServantData = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !ServantData || !v23 )
      goto LABEL_31;
    if ( SkillEntity__checkUseTreasure(v23, ServantData->fields.followerType, 0LL) )
    {
      myFsm = this->fields.myFsm;
      if ( myFsm )
      {
        PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
        logic = this->fields.logic;
        if ( logic )
        {
          BattleLogic__wantUseSkill(logic, skillInfo, uniqueId, 4, 0LL);
          return;
        }
      }
LABEL_31:
      sub_B170D4();
    }
    v27 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2438, 0LL);
    v33 = BattlePerformanceMaster___c_TypeInfo;
    if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v33 = BattlePerformanceMaster___c_TypeInfo;
    }
    static_fields = v33->static_fields;
    _9__116_0 = static_fields->__9__116_0;
    v36 = (System_String_o *)StringLiteral_1;
    if ( !_9__116_0 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      }
      v37 = (Il2CppObject *)static_fields->__9;
      _9__116_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
      System_Action___ctor(_9__116_0, v37, Method_BattlePerformanceMaster___c__selectedSkillSvt_b__116_0__, 0LL);
      v38 = BattlePerformanceMaster___c_TypeInfo->static_fields;
      v38->__9__116_0 = _9__116_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v38->__9__116_0,
        (System_Int32_array **)_9__116_0,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    if ( !v27 )
      goto LABEL_31;
    CommonUI__OpenNotificationDialog(v27, v36, v32, _9__116_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_31;
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows(perf, this->fields.myFsm, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__selectedSvt(
        BattlePerformanceMaster_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
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
  struct BattleSelectServantWindow_o *selectSvtWindow; // x0
  BattlePerformance_o *perf; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  CommandSpellEntity_o *v21; // x21
  BattleServantData_o *ServantData; // x0
  PlayMakerFSM_o *myFsm; // x0
  BattleLogic_o *logic; // x0
  CommonUI_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_String_o *v30; // x21
  BattlePerformanceMaster___c_c *v31; // x8
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x9
  System_Action_o *_9__92_0; // x23
  System_String_o *v34; // x22
  Il2CppObject *v35; // x24
  struct BattlePerformanceMaster___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  PlayMakerFSM_o *v43; // x0

  if ( (byte_40FA83E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandSpellMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_BattlePerformanceMaster___c__selectedSvt_b__92_0__, v10);
    sub_B16FFC(&BattlePerformanceMaster___c_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_2912, v12);
    sub_B16FFC(&StringLiteral_5481, v13);
    sub_B16FFC(&StringLiteral_1, v14);
    sub_B16FFC(&StringLiteral_2438, v15);
    byte_40FA83E = 1;
  }
  selectSvtWindow = this->fields.selectSvtWindow;
  if ( !selectSvtWindow )
    goto LABEL_30;
  ((void (__fastcall *)(struct BattleSelectServantWindow_o *, _QWORD, Il2CppMethodPointer))selectSvtWindow->klass->vtable._12_Close.method)(
    selectSvtWindow,
    0LL,
    selectSvtWindow->klass->vtable._13_CompClose.methodPtr);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_30;
  BattlePerformance__SetCloseCommandTypeWindow(perf, 0LL);
  if ( uniqueId != -1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_30;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               this->fields.tmp_commandSpellId,
               (const MethodInfo_266F388 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_30;
    v21 = (CommandSpellEntity_o *)Entity;
    ServantData = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !ServantData || !v21 )
      goto LABEL_30;
    if ( CommandSpellEntity__checkUseTreasure(v21, ServantData->fields.followerType, 0LL) )
    {
      myFsm = this->fields.myFsm;
      if ( myFsm )
      {
        PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
        logic = this->fields.logic;
        if ( logic )
        {
          BattleLogic__useCommandSpell(logic, this->fields.tmp_commandSpellId, uniqueId, 0LL);
          return;
        }
      }
LABEL_30:
      sub_B170D4();
    }
    v25 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2438, 0LL);
    v31 = BattlePerformanceMaster___c_TypeInfo;
    if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v31 = BattlePerformanceMaster___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__92_0 = static_fields->__9__92_0;
    v34 = (System_String_o *)StringLiteral_1;
    if ( !_9__92_0 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)static_fields->__9;
      _9__92_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
      System_Action___ctor(_9__92_0, v35, Method_BattlePerformanceMaster___c__selectedSvt_b__92_0__, 0LL);
      v36 = BattlePerformanceMaster___c_TypeInfo->static_fields;
      v36->__9__92_0 = _9__92_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v36->__9__92_0,
        (System_Int32_array **)_9__92_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    if ( !v25 )
      goto LABEL_30;
    CommonUI__OpenNotificationDialog(v25, v34, v30, _9__92_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
  }
  v43 = this->fields.myFsm;
  if ( !v43 )
    goto LABEL_30;
  PlayMakerFSM__SendEvent(v43, (System_String_o *)StringLiteral_2912, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__setMasterBuffEffectData(
        BattlePerformanceMaster_o *this,
        System_String_o *popLabel,
        int32_t popLabelColor,
        System_Int32_array *effectList,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  this->fields.masterBuffPopLabel = popLabel;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.masterBuffPopLabel,
    (System_Int32_array **)popLabel,
    *(System_String_array ***)&popLabelColor,
    (System_String_array **)effectList,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.masterBuffPopLabelColor = popLabelColor;
  this->fields.masterBuffEffectList = effectList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.masterBuffEffectList,
    (System_Int32_array **)effectList,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__showEnemyServant(
        BattlePerformanceMaster_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA869 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8414, *(_QWORD *)&index);
    byte_40FA869 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_index = index;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_8414, 0LL);
}


void __fastcall BattlePerformanceMaster__showRetireDialog(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleLogic_o *logic; // x0
  BattleMenuWindowComponent_o *win_Menu; // x0
  struct BattleRetireWindowComponent_o *win_Retire; // x0
  BattleData_o *data; // x0
  BattlePerformance_o *perf; // x0
  const MethodInfo *v9; // x1
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_40FA861 & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FA861 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_16;
  BattleLogic__playRetire(logic, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  win_Menu = this->fields.win_Menu;
  if ( !win_Menu )
    goto LABEL_16;
  BattleMenuWindowComponent__Close(win_Menu, 0LL, 0LL);
  win_Retire = this->fields.win_Retire;
  if ( !win_Retire )
    goto LABEL_16;
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Retire->klass->vtable._12_Close.method)(
    win_Retire,
    0LL,
    win_Retire->klass->vtable._13_CompClose.methodPtr);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  if ( BattleData__isBattleRetreatQuestClear(data, 0LL) )
    return;
  perf = this->fields.perf;
  if ( !perf )
LABEL_16:
    sub_B170D4();
  BattlePerformance__effectFadeOut(perf, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(3, 0LL);
  v10 = BattlePerformanceMaster__openRetireDialog(this, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall BattlePerformanceMaster__startCommand(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA865 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12286, method);
    byte_40FA865 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12286, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__startMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *master_root; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *masterBuffPopLabelEffect; // x23
  UnityEngine_GameObject_o **p_masterBuffPopLabelEffect; // x22
  UnityEngine_GameObject_o *v35; // x23
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  UIAtlas_o *UIAtlas; // x0
  UnityEngine_GameObject_o *v45; // x23
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Transform_o *v55; // x0
  UnityEngine_Transform_o *v56; // x0
  UnityEngine_Transform_o *v57; // x23
  UnityEngine_Transform_o *v58; // x0
  UnityEngine_Transform_o *parent; // x0
  BattleUIRangeLabel_o *v60; // x0
  BattleUIRangeLabel_o *v61; // x23
  UnityEngine_GameObject_o *v62; // x0
  SimpleAnimation_o *ComponentInChildren_SimpleAnimation; // x0
  BattleServantBuffIconComponent_o *v64; // x23
  srcLineSprite_o *v65; // x0
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x23
  UnityEngine_Camera_o *uicamera; // x24
  TrackingMoveCtCComponent_o *v69; // x22
  int v70; // s0
  UnityEngine_GameObject_o *skillBtn; // x0
  UnityEngine_GameObject_o *menuBtn; // x0
  UnityEngine_GameObject_o *spellBtn; // x0
  UnityEngine_Object_o *masterBuffEffect; // x23
  UnityEngine_GameObject_o **p_masterBuffEffect; // x22
  UnityEngine_GameObject_o *v78; // x23
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  UIAtlas_o *v85; // x0
  UnityEngine_GameObject_o *v86; // x23
  UnityEngine_Transform_o *v87; // x0
  struct UnityEngine_GameObject_o *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  UnityEngine_Object_o *v95; // x23
  UnityEngine_Transform_o *v96; // x0
  UnityEngine_Transform_o *v97; // x23
  UnityEngine_Transform_o *v98; // x0
  UnityEngine_Transform_o *v99; // x0
  struct System_Int32_array *masterBuffEffectList; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  struct System_Int32_array *v105; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v106; // x22
  unsigned __int64 v107; // x26
  unsigned __int64 max_length; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *v109; // x23
  System_String_o *list; // x23
  UnityEngine_GameObject_o *v111; // x0
  srcLineSprite_o *v112; // x22
  UnityEngine_GameObject_o *v113; // x0
  struct TweenAlpha_o *v114; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  struct TweenAlpha_o *effectTween; // x8
  UITweener_o *v126; // x19
  EventDelegate_Callback_o *v127; // x21
  int32_t masterBuffPopLabelColor; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA875 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EffectMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_GameObject___, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&SoundManager_TypeInfo, v17);
    sub_B16FFC(&Method_BattlePerformanceMaster___c__DisplayClass159_0__startMasterBuffEffect_b__0__, v18);
    sub_B16FFC(&BattlePerformanceMaster___c__DisplayClass159_0_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_18183, v20);
    sub_B16FFC(&StringLiteral_18188, v21);
    sub_B16FFC(&StringLiteral_1, v22);
    sub_B16FFC(&StringLiteral_2740, v23);
    byte_40FA875 = 1;
  }
  v24 = sub_B170CC(BattlePerformanceMaster___c__DisplayClass159_0_TypeInfo, method, v2, v3, v4);
  BattlePerformanceMaster___c__DisplayClass159_0___ctor((BattlePerformanceMaster___c__DisplayClass159_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_67;
  *(_QWORD *)(v24 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  master_root = this->fields.master_root;
  if ( !master_root )
    goto LABEL_67;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      master_root,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    masterBuffPopLabelEffect = (UnityEngine_Object_o *)this->fields.masterBuffPopLabelEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_masterBuffPopLabelEffect = &this->fields.masterBuffPopLabelEffect;
    if ( UnityEngine_Object__op_Inequality(masterBuffPopLabelEffect, 0LL, 0LL) )
    {
      v35 = *p_masterBuffPopLabelEffect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)v35, 0LL);
      *p_masterBuffPopLabelEffect = 0LL;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.masterBuffPopLabelEffect,
        0LL,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    masterBuffPopLabelColor = this->fields.masterBuffPopLabelColor;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &masterBuffPopLabelColor);
    v43 = System_String__Format((System_String_o *)StringLiteral_18188, v42, 0LL);
    UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
                v43,
                (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( this->fields.masterBtn )
    {
      v45 = (UnityEngine_GameObject_o *)UIAtlas;
      transform = UnityEngine_GameObject__get_transform(this->fields.masterBtn, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v45, transform, 0LL, 0LL);
      this->fields.masterBuffPopLabelEffect = Object;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.masterBuffPopLabelEffect,
        (System_Int32_array **)Object,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      v54 = this->fields.masterBuffPopLabelEffect;
      if ( v54 )
      {
        v55 = UnityEngine_GameObject__get_transform(v54, 0LL);
        if ( v55 )
        {
          v129.fields.y = -42.0;
          v129.fields.x = 0.0;
          v129.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(v55, v129, 0LL);
          if ( *p_masterBuffPopLabelEffect )
          {
            v56 = UnityEngine_GameObject__get_transform(*p_masterBuffPopLabelEffect, 0LL);
            if ( this->fields.master_root )
            {
              v57 = v56;
              v58 = UnityEngine_GameObject__get_transform(this->fields.master_root, 0LL);
              if ( v58 )
              {
                parent = UnityEngine_Transform__get_parent(v58, 0LL);
                if ( v57 )
                {
                  UnityEngine_Transform__set_parent(v57, parent, 0LL);
                  if ( *p_masterBuffPopLabelEffect )
                  {
                    v60 = (BattleUIRangeLabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    *p_masterBuffPopLabelEffect,
                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
                    if ( v60 )
                    {
                      v61 = v60;
                      BattleUIRangeLabel__ParentHasChanged(v60, 0LL);
                      BattleUIRangeLabel__SetAdjustLabelOffset(
                        v61,
                        this->fields.masterBuffPopLabel,
                        (System_String_o *)StringLiteral_1,
                        1,
                        0LL,
                        0,
                        0,
                        0,
                        0LL);
                      BattleUIRangeLabel__AddLabelDepth(v61, 20, 0LL);
                      v62 = this->fields.masterBuffPopLabelEffect;
                      if ( v62 )
                      {
                        ComponentInChildren_SimpleAnimation = UnityEngine_GameObject__GetComponentInChildren_SimpleAnimation_(
                                                                v62,
                                                                1,
                                                                (const MethodInfo_19D15B0 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
                        if ( ComponentInChildren_SimpleAnimation )
                        {
                          v64 = (BattleServantBuffIconComponent_o *)ComponentInChildren_SimpleAnimation;
                          BattleServantBuffIconComponent__ParentHasChanged(
                            (BattleServantBuffIconComponent_o *)ComponentInChildren_SimpleAnimation,
                            0LL);
                          BattleServantBuffIconComponent__setImageId(v64, 0, 0LL);
                          if ( *p_masterBuffPopLabelEffect )
                          {
                            v65 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    *p_masterBuffPopLabelEffect,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
                            perf = this->fields.perf;
                            if ( perf )
                            {
                              actorcamera = perf->fields.actorcamera;
                              uicamera = perf->fields.uicamera;
                              v69 = (TrackingMoveCtCComponent_o *)v65;
                              *(UnityEngine_Vector3_o *)&v70 = UnityEngine_Vector3__get_zero(0LL);
                              if ( v69 )
                              {
                                TrackingMoveCtCComponent__Set(
                                  v69,
                                  actorcamera,
                                  uicamera,
                                  0LL,
                                  *(UnityEngine_Vector3_o *)&v70,
                                  0,
                                  0LL);
                                TrackingMoveCtCComponent__startAct(v69, 0LL);
                                skillBtn = this->fields.skillBtn;
                                if ( skillBtn )
                                {
                                  UnityEngine_GameObject__SetActive(skillBtn, 0, 0LL);
                                  menuBtn = this->fields.menuBtn;
                                  if ( menuBtn )
                                  {
                                    UnityEngine_GameObject__SetActive(menuBtn, 0, 0LL);
                                    spellBtn = this->fields.spellBtn;
                                    if ( spellBtn )
                                    {
                                      UnityEngine_GameObject__SetActive(spellBtn, 0, 0LL);
                                      masterBuffEffect = (UnityEngine_Object_o *)this->fields.masterBuffEffect;
                                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      }
                                      p_masterBuffEffect = &this->fields.masterBuffEffect;
                                      if ( UnityEngine_Object__op_Inequality(masterBuffEffect, 0LL, 0LL) )
                                      {
                                        v78 = *p_masterBuffEffect;
                                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                        }
                                        UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)v78, 0LL);
                                        *p_masterBuffEffect = 0LL;
                                        sub_B16F98(
                                          (BattleServantConfConponent_o *)&this->fields.masterBuffEffect,
                                          0LL,
                                          v79,
                                          v80,
                                          v81,
                                          v82,
                                          v83,
                                          v84);
                                      }
                                      v85 = UnityEngine_Resources__Load_UIAtlas_(
                                              (System_String_o *)StringLiteral_18183,
                                              (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_GameObject___);
                                      if ( this->fields.masterBtn )
                                      {
                                        v86 = (UnityEngine_GameObject_o *)v85;
                                        v87 = UnityEngine_GameObject__get_transform(this->fields.masterBtn, 0LL);
                                        v88 = BaseMonoBehaviour__createObject(
                                                (BaseMonoBehaviour_o *)this,
                                                v86,
                                                v87,
                                                0LL,
                                                0LL);
                                        this->fields.masterBuffEffect = v88;
                                        sub_B16F98(
                                          (BattleServantConfConponent_o *)&this->fields.masterBuffEffect,
                                          (System_Int32_array **)v88,
                                          v89,
                                          v90,
                                          v91,
                                          v92,
                                          v93,
                                          v94);
                                        *(_DWORD *)(v24 + 24) = 0;
                                        v95 = (UnityEngine_Object_o *)this->fields.masterBuffEffect;
                                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                        }
                                        if ( UnityEngine_Object__op_Inequality(v95, 0LL, 0LL) )
                                        {
                                          if ( !*p_masterBuffEffect )
                                            goto LABEL_67;
                                          v96 = UnityEngine_GameObject__get_transform(*p_masterBuffEffect, 0LL);
                                          if ( !this->fields.master_root )
                                            goto LABEL_67;
                                          v97 = v96;
                                          v98 = UnityEngine_GameObject__get_transform(this->fields.master_root, 0LL);
                                          if ( !v98 )
                                            goto LABEL_67;
                                          v99 = UnityEngine_Transform__get_parent(v98, 0LL);
                                          if ( !v97 )
                                            goto LABEL_67;
                                          UnityEngine_Transform__set_parent(v97, v99, 0LL);
                                          if ( !*p_masterBuffEffect )
                                            goto LABEL_67;
                                          UnityEngine_GameObject__SetActive(*p_masterBuffEffect, 1, 0LL);
                                          masterBuffEffectList = this->fields.masterBuffEffectList;
                                          if ( masterBuffEffectList && *(_QWORD *)&masterBuffEffectList->max_length )
                                          {
                                            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                            if ( !Instance )
                                              goto LABEL_67;
                                            MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EffectMaster___);
                                            v105 = this->fields.masterBuffEffectList;
                                            if ( !v105 )
                                              goto LABEL_67;
                                            v106 = MasterData_WarQuestSelectionMaster;
                                            v107 = 0LL;
                                            while ( 1 )
                                            {
                                              max_length = v105->max_length;
                                              if ( (__int64)v107 >= (int)max_length )
                                                break;
                                              if ( v107 >= max_length )
                                              {
                                                sub_B17100(MasterData_WarQuestSelectionMaster, v103, v104);
                                                sub_B170A0();
                                              }
                                              if ( v106 )
                                              {
                                                MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(v106, v105->m_Items[v107 + 1], (const MethodInfo_266F388 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
                                                if ( MasterData_WarQuestSelectionMaster )
                                                {
                                                  v109 = MasterData_WarQuestSelectionMaster;
                                                  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)EffectEntity__isSe((EffectEntity_o *)MasterData_WarQuestSelectionMaster, 0LL);
                                                  if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
                                                  {
                                                    list = (System_String_o *)v109->fields.list;
                                                    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                      && !SoundManager_TypeInfo->_2.cctor_finished )
                                                    {
                                                      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                                                    }
                                                    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SoundManager__playSe_24823480((System_String_o *)StringLiteral_2740, list, 0LL);
                                                  }
                                                }
                                                v105 = this->fields.masterBuffEffectList;
                                                ++v107;
                                                if ( v105 )
                                                  continue;
                                              }
                                              goto LABEL_67;
                                            }
                                          }
                                          v111 = this->fields.masterBuffEffect;
                                          this->fields.isMasterBuffEffectPlaying = 1;
                                          if ( !v111 )
                                            goto LABEL_67;
                                          v112 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v111,
                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
                                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                          }
                                          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v112, 0LL, 0LL) )
                                          {
                                            if ( !v112 )
                                              goto LABEL_67;
                                            *(_DWORD *)(v24 + 24) = v112->fields.mFSM;
                                          }
                                        }
                                        if ( Component_srcLineSprite )
                                        {
                                          ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
                                            Component_srcLineSprite,
                                            Component_srcLineSprite->klass[1]._1.declaringType,
                                            0.01);
                                          v113 = this->fields.master_root;
                                          if ( v113 )
                                          {
                                            UnityEngine_GameObject__SetActive(v113, 1, 0LL);
                                            v114 = TweenAlpha__Begin(this->fields.master_root, 0.25, 1.0, 0LL);
                                            this->fields.effectTween = v114;
                                            sub_B16F98(
                                              (BattleServantConfConponent_o *)&this->fields.effectTween,
                                              (System_Int32_array **)v114,
                                              v115,
                                              v116,
                                              v117,
                                              v118,
                                              v119,
                                              v120);
                                            effectTween = this->fields.effectTween;
                                            if ( effectTween )
                                            {
                                              effectTween->fields.style = 6;
                                              v126 = (UITweener_o *)this->fields.effectTween;
                                              v127 = (EventDelegate_Callback_o *)sub_B170CC(
                                                                                   EventDelegate_Callback_TypeInfo,
                                                                                   v121,
                                                                                   v122,
                                                                                   v123,
                                                                                   v124);
                                              EventDelegate_Callback___ctor(
                                                v127,
                                                (Il2CppObject *)v24,
                                                Method_BattlePerformanceMaster___c__DisplayClass159_0__startMasterBuffEffect_b__0__,
                                                0LL);
                                              if ( v126 )
                                              {
                                                UITweener__SetOnFinished(v126, v127, 0LL);
                                                return;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_67:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__startSkill(
        BattlePerformanceMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct CommandSpellWindowComponent_o *win_Spell; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA85F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12303, *(_QWORD *)&type);
    byte_40FA85F = 1;
  }
  win_Spell = this->fields.win_Spell;
  if ( !win_Spell
    || (((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Spell->klass->vtable._12_Close.method)(
          win_Spell,
          0LL,
          win_Spell->klass->vtable._13_CompClose.methodPtr),
        (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12303, 0LL);
}


void __fastcall BattlePerformanceMaster__startTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA82C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12307, method);
    byte_40FA82C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12307, 0LL);
}


void __fastcall BattlePerformanceMaster__updateCommandSpellIcon(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleData_o *data; // x8
  QuestEntity_o *quest_ent; // x0
  struct BattleData_o *v6; // x8
  QuestEntity_o *v7; // x0
  BattleData_o *v8; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UnityEngine_GameObject_o *spellBtn; // x0
  UISprite_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *spellSpr; // x0

  if ( (byte_40FA82A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_B16FFC(&StringLiteral_18808, v3);
    byte_40FA82A = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_17;
  if ( !QuestEntity__HasFlag(quest_ent, 0x400000000LL, 0LL) )
  {
    v6 = this->fields.data;
    if ( !v6 )
      goto LABEL_17;
    v7 = v6->fields.quest_ent;
    if ( !v7 )
      goto LABEL_17;
    if ( !QuestEntity__HasFlag(v7, 0x100000000LL, 0LL) )
      goto LABEL_11;
  }
  v8 = this->fields.data;
  if ( !v8 )
    goto LABEL_17;
  if ( BattleData__GetOverwriteCommandSpellIcon(v8, 0LL) )
  {
LABEL_11:
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( this->fields.commandSpellIcon )
    {
      CommandSpellIconComponent__SetDataBattle(this->fields.commandSpellIcon, SelfUserGame, this->fields.data, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
  spellBtn = this->fields.spellBtn;
  if ( !spellBtn )
    goto LABEL_17;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            spellBtn,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !Component_srcLineSprite )
    goto LABEL_17;
  UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)StringLiteral_18808, 0LL);
  spellSpr = this->fields.spellSpr;
  if ( !spellSpr )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(spellSpr, 0, 0LL);
}


void __fastcall BattlePerformanceMaster__updateShortSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleData_o *data; // x8
  UISprite_o *skillSkipBtn; // x0
  __int64 *v6; // x8

  if ( (byte_40FA85A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940, method);
    sub_B16FFC(&StringLiteral_16939, v3);
    byte_40FA85A = 1;
  }
  data = this->fields.data;
  if ( !data || (skillSkipBtn = this->fields.skillSkipBtn) == 0LL )
    sub_B170D4();
  if ( data->fields.systemflg_skipskillconf )
    v6 = &StringLiteral_16939;
  else
    v6 = &StringLiteral_16940;
  UISprite__set_spriteName(skillSkipBtn, (System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__updateSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
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
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  __int64 v22; // x0
  __int64 v23; // x2
  struct BattleServantSkillIConComponent_array *v24; // x8
  __int64 v25; // x0
  struct BattleServantSkillIConComponent_array *v26; // x8
  _DWORD *v27; // x27
  __int64 v28; // x22
  char v29; // w21
  il2cpp_array_size_t v30; // w20
  int v31; // w25
  int v32; // w26
  BattleData_o *data; // x0
  __int64 MasterSkillInfo; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  struct BattleServantSkillIConComponent_array *v37; // x8
  BattleSkillInfoData_o *v38; // x23
  BattleServantSkillIConComponent_o *v39; // x0
  int v40; // w28
  bool isChargeOK; // w24
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int v47; // w26
  System_Int32_array **v48; // x25
  _DWORD *v49; // x0
  System_Int32_array **v50; // x25
  BattleBuffData_BuffData_array *v51; // x9
  Il2CppClass **v52; // x0
  struct BattleServantSkillIConComponent_array *v53; // x8
  BattleServantSkillIConComponent_o *v54; // x0
  int v55; // w8
  __int64 v56; // x22
  char v57; // w20
  unsigned int v58; // w23
  int v59; // w24
  char v60; // w25
  BattleServantData_o *v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  __int64 v64; // x11
  int v65; // w11
  UnityEngine_Object_o *skillBtnFlashObject; // x22
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  BattlePerformanceMaster___c_c *v74; // x0
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__70_0; // x23
  System_String_o *v77; // x22
  Il2CppObject *v78; // x21
  struct BattlePerformanceMaster___c_StaticFields *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array *All_BattleBuffData_BuffData; // x0
  System_String_o *v87; // x0
  struct BattleData_o *v88; // x8
  System_String_o *v89; // x21
  BattleEntity_o *battle_ent; // x0
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  System_String_o *MasterSkillDelayInfo; // x0
  System_String_o *v93; // x22
  UILabel_o *masterSkillBadStatusLabel; // x0
  System_String_o *v95; // x1
  System_String_o *v96; // x22
  Il2CppObject *v97; // x0
  System_String_o *v98; // x0
  System_String_o *v99; // x22
  UILabel_o *masterSkillChargeLabel; // x0
  System_String_o *v101; // x1
  UnityEngine_Component_o *addSkillChargeTimeRoot; // x0
  float v103; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v105; // x0
  UnityEngine_GameObject_o *v106; // x0
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  BattlePerformanceMaster___c_c *v111; // x0
  UILabel_o *addSkillAddChargeTimeLabel; // x22
  struct BattlePerformanceMaster___c_StaticFields *v113; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__70_1; // x24
  System_String_o *v115; // x23
  Il2CppObject *v116; // x25
  struct BattlePerformanceMaster___c_StaticFields *v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_String_array *v124; // x0
  System_String_o *v125; // x0
  UILabel_o *addSkillAddChargeTimeSplitLabel; // x20
  System_String_o *v127; // x0
  UILabel_o *addSkillChargeTimeLabel; // x0
  UnityEngine_Component_o *v129; // x0
  UnityEngine_Transform_o *v130; // x0
  UnityEngine_Transform_o *v131; // x20
  UnityEngine_Transform_o *v132; // x0
  unsigned int localPosition; // s0
  UnityEngine_Component_o *v134; // x0
  UnityEngine_Component_o *chargeTimeRoot; // x0
  UnityEngine_GameObject_o *v136; // x0
  UILabel_o *chargeTimeLabel; // x0
  UnityEngine_Component_o *v138; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v140; // x0
  unsigned int v141; // s9
  UnityEngine_Transform_o *v142; // x0
  int v143; // s2
  unsigned int v144; // s0
  float v145; // s1
  BattleData_o *v146; // x0
  BattleSkillInfoData_o *BoostSkillInfo; // x0
  struct BattleData_o *v148; // x8
  QuestEntity_o *quest_ent; // x0
  struct BattleData_o *v150; // x8
  QuestEntity_o *v151; // x0
  UISprite_o *skillBtnSp; // x0
  UnityEngine_GameObject_o *skillBtn; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array **v161; // x1
  UnityEngine_GameObject_o *v162; // x0
  BattleBuffData_BuffData_array *array; // [xsp+0h] [xbp-80h]
  BattleBuffData_BuffData_array *v164; // [xsp+8h] [xbp-78h]
  int v165; // [xsp+14h] [xbp-6Ch]
  int v166; // [xsp+18h] [xbp-68h] BYREF
  int v167; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_40FA82B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindAll_string___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_System_Predicate_string___ctor__, v8);
    sub_B16FFC(&System_Predicate_string__TypeInfo, v9);
    sub_B16FFC(&string___TypeInfo, v10);
    sub_B16FFC(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__70_0__, v11);
    sub_B16FFC(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__70_1__, v12);
    sub_B16FFC(&BattlePerformanceMaster___c_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_746, v14);
    sub_B16FFC(&StringLiteral_2445, v15);
    sub_B16FFC(&StringLiteral_871, v16);
    sub_B16FFC(&StringLiteral_16934, v17);
    sub_B16FFC(&StringLiteral_1, v18);
    sub_B16FFC(&StringLiteral_2444, v19);
    sub_B16FFC(&StringLiteral_9271, v20);
    byte_40FA82B = 1;
  }
  v167 = 0;
  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_148;
  v22 = sub_B17014(string___TypeInfo, skillIcon->max_length, v2);
  v24 = this->fields.skillIcon;
  array = (BattleBuffData_BuffData_array *)v22;
  if ( !v24 )
    goto LABEL_148;
  v25 = sub_B17014(string___TypeInfo, v24->max_length, v23);
  v26 = this->fields.skillIcon;
  if ( !v26 )
    goto LABEL_148;
  v27 = (_DWORD *)v25;
  v28 = 0LL;
  v29 = 0;
  v30 = 0;
  v165 = 0;
  v31 = 0;
  v32 = 0;
  v164 = (BattleBuffData_BuffData_array *)v25;
  while ( 1 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_148;
    if ( (int)v28 >= (signed int)v26->max_length )
      break;
    MasterSkillInfo = (__int64)BattleData__getMasterSkillInfo(data, v28, 0LL);
    if ( MasterSkillInfo )
    {
      v37 = this->fields.skillIcon;
      if ( !v37 )
        goto LABEL_148;
      if ( (unsigned int)v28 >= v37->max_length )
        goto LABEL_149;
      v38 = (BattleSkillInfoData_o *)MasterSkillInfo;
      v39 = v37->m_Items[(int)v28];
      if ( !v39 )
        goto LABEL_148;
      if ( v38->fields.isUseSkill )
        BattleServantSkillIConComponent__SetSkillInfo(v39, v38, 1, 0, 0, 0, 0LL);
      else
        BattleServantSkillIConComponent__setNoSkill(v39, 0, 0LL);
      v40 = v32;
      isChargeOK = BattleSkillInfoData__isChargeOK(v38, 0LL);
      MasterSkillInfo = BattleSkillInfoData__getChargeTurn(v38, 0LL);
      v167 = MasterSkillInfo;
      if ( v38->fields.isAdd )
      {
        v47 = v31;
        if ( (int)MasterSkillInfo <= 0 )
        {
          v48 = (System_Int32_array **)StringLiteral_746;
          if ( !v27 )
            goto LABEL_148;
        }
        else
        {
          MasterSkillInfo = (__int64)System_Int32__ToString((int32_t)&v167, 0LL);
          v48 = (System_Int32_array **)MasterSkillInfo;
          if ( !v27 )
            goto LABEL_148;
        }
        if ( v48 )
        {
          MasterSkillInfo = sub_B170BC(v48, *(_QWORD *)(*(_QWORD *)v27 + 64LL));
          if ( !MasterSkillInfo )
            goto LABEL_150;
        }
        if ( (unsigned int)v165 >= v27[6] )
          goto LABEL_149;
        v49 = &v27[2 * v165];
        *((_QWORD *)v49 + 4) = v48;
        sub_B16F98((BattleServantConfConponent_o *)(v49 + 8), v48, v36, v42, v43, v44, v45, v46);
        ++v165;
      }
      else
      {
        v47 = v31;
        if ( (int)MasterSkillInfo <= 0 )
        {
          v50 = (System_Int32_array **)StringLiteral_746;
        }
        else
        {
          MasterSkillInfo = (__int64)System_Int32__ToString((int32_t)&v167, 0LL);
          v50 = (System_Int32_array **)MasterSkillInfo;
        }
        v51 = array;
        if ( !array )
          goto LABEL_148;
        if ( v50 )
        {
          MasterSkillInfo = sub_B170BC(v50, array->obj.klass->_1.element_class);
          v51 = array;
          if ( !MasterSkillInfo )
          {
LABEL_150:
            sub_B170F4(MasterSkillInfo);
            sub_B170A0();
          }
        }
        if ( v30 >= v51->max_length )
          goto LABEL_149;
        v52 = &v51->obj.klass + (int)v30;
        v52[4] = (Il2CppClass *)v50;
        sub_B16F98((BattleServantConfConponent_o *)(v52 + 4), v50, v36, v42, v43, v44, v45, v46);
        ++v30;
      }
      v27 = v164;
      v31 = v47 | (v167 > 0);
      v29 |= isChargeOK;
      v32 = v40 | (v38->fields.sealedTurn > 0);
    }
    v53 = this->fields.skillIcon;
    if ( !v53 )
      goto LABEL_148;
    if ( (unsigned int)v28 >= v53->max_length )
    {
LABEL_149:
      sub_B17100(MasterSkillInfo, v35, v36);
      sub_B170A0();
    }
    v54 = v53->m_Items[v28];
    if ( v54 )
    {
      BattleServantSkillIConComponent__setflashFlg(v54, 1, 0LL);
      v26 = this->fields.skillIcon;
      ++v28;
      if ( v26 )
        continue;
    }
    goto LABEL_148;
  }
  MasterSkillInfo = (__int64)BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !MasterSkillInfo )
    goto LABEL_148;
  v55 = *(_DWORD *)(MasterSkillInfo + 24);
  v56 = MasterSkillInfo;
  v57 = v31;
  if ( v55 >= 1 )
  {
    v58 = 0;
    v59 = 0;
    v60 = 0;
    while ( 1 )
    {
      if ( v58 >= v55 )
        goto LABEL_149;
      v61 = *(BattleServantData_o **)(v56 + 8LL * (int)v58 + 32);
      if ( !v61 )
        goto LABEL_148;
      MasterSkillInfo = (__int64)BattleServantData__getShortenUserEquipSkill(v61, 0LL);
      if ( !MasterSkillInfo )
        goto LABEL_148;
      v62 = *(_QWORD *)(MasterSkillInfo + 24);
      if ( v62 )
      {
        if ( (int)v62 >= 1 )
        {
          v63 = 0LL;
          do
          {
            v64 = *(_QWORD *)(MasterSkillInfo + 32 + 8 * v63);
            if ( !v64 )
              goto LABEL_148;
            v65 = *(_DWORD *)(v64 + 28);
            ++v63;
            if ( v59 <= v65 )
              v59 = v65;
          }
          while ( (int)v63 < (int)v62 );
        }
        v60 = 1;
      }
      v55 = *(_DWORD *)(v56 + 24);
      if ( (int)++v58 >= v55 )
        goto LABEL_56;
    }
  }
  v60 = 0;
  v59 = 0;
LABEL_56:
  skillBtnFlashObject = (UnityEngine_Object_o *)this->fields.skillBtnFlashObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillBtnFlashObject, 0LL, 0LL) )
  {
    v71 = this->fields.skillBtnFlashObject;
    if ( !v71 )
      goto LABEL_148;
    if ( UnityEngine_GameObject__get_activeSelf(v71, 0LL) )
    {
      v72 = this->fields.skillBtnFlashObject;
      if ( !v72 )
        goto LABEL_148;
      UnityEngine_GameObject__SetActive(v72, 0, 0LL);
    }
    v73 = this->fields.skillBtnFlashObject;
    if ( !v73 )
      goto LABEL_148;
    UnityEngine_GameObject__SetActive(v73, v29 & 1, 0LL);
  }
  v74 = BattlePerformanceMaster___c_TypeInfo;
  if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
    v74 = BattlePerformanceMaster___c_TypeInfo;
  }
  static_fields = v74->static_fields;
  _9__70_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__70_0;
  v77 = (System_String_o *)StringLiteral_871;
  if ( !_9__70_0 )
  {
    if ( (BYTE3(v74->vtable._0_Equals.methodPtr) & 4) != 0 && !v74->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v74);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
    }
    v78 = (Il2CppObject *)static_fields->__9;
    _9__70_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_string__TypeInfo,
                                                                          v67,
                                                                          v68,
                                                                          v69,
                                                                          v70);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__70_0,
      v78,
      Method_BattlePerformanceMaster___c__updateSkillIcon_b__70_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_string___ctor__);
    v79 = BattlePerformanceMaster___c_TypeInfo->static_fields;
    v79->__9__70_0 = (struct System_Predicate_string__o *)_9__70_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v79->__9__70_0,
      (System_Int32_array **)_9__70_0,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
  }
  All_BattleBuffData_BuffData = (System_String_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                         array,
                                                         (System_Predicate_T__o *)_9__70_0,
                                                         (const MethodInfo_2044520 *)Method_System_Array_FindAll_string___);
  v87 = System_String__Join(v77, All_BattleBuffData_BuffData, 0LL);
  v88 = this->fields.data;
  if ( !v88 )
    goto LABEL_148;
  v89 = v87;
  battle_ent = v88->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_148;
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(battle_ent, 0LL);
  if ( !QuestPhaseEntity )
    goto LABEL_148;
  MasterSkillDelayInfo = QuestPhaseEntity__GetMasterSkillDelayInfo(QuestPhaseEntity, 0LL);
  if ( !this->fields.masterSkillBadStatus )
    goto LABEL_148;
  v93 = MasterSkillDelayInfo;
  UnityEngine_GameObject__SetActive(this->fields.masterSkillBadStatus, v32 & 1, 0LL);
  masterSkillBadStatusLabel = this->fields.masterSkillBadStatusLabel;
  if ( !masterSkillBadStatusLabel )
    goto LABEL_148;
  if ( (v32 & 1) != 0 )
    v95 = v93;
  else
    v95 = (System_String_o *)StringLiteral_1;
  UILabel__set_text(masterSkillBadStatusLabel, v95, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_2445, 0LL);
  v166 = v59 + 1;
  v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v166);
  v98 = System_String__Format(v96, v97, 0LL);
  if ( !this->fields.masterSkillChargeRoot )
    goto LABEL_148;
  v99 = v98;
  UnityEngine_GameObject__SetActive(this->fields.masterSkillChargeRoot, v60 & 1, 0LL);
  masterSkillChargeLabel = this->fields.masterSkillChargeLabel;
  if ( !masterSkillChargeLabel )
    goto LABEL_148;
  v101 = (v60 & 1) != 0 ? v99 : (System_String_o *)StringLiteral_1;
  UILabel__set_text(masterSkillChargeLabel, v101, 0LL);
  addSkillChargeTimeRoot = (UnityEngine_Component_o *)this->fields.addSkillChargeTimeRoot;
  v103 = (((unsigned __int8)v32 | (unsigned __int8)v60) & 1) != 0 ? -58.0 : -38.0;
  if ( !addSkillChargeTimeRoot )
    goto LABEL_148;
  gameObject = UnityEngine_Component__get_gameObject(addSkillChargeTimeRoot, 0LL);
  if ( !gameObject )
    goto LABEL_148;
  if ( v165 < 1 )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    chargeTimeRoot = (UnityEngine_Component_o *)this->fields.chargeTimeRoot;
    if ( !chargeTimeRoot )
      goto LABEL_148;
    v136 = UnityEngine_Component__get_gameObject(chargeTimeRoot, 0LL);
    if ( !v136 )
      goto LABEL_148;
    UnityEngine_GameObject__SetActive(v136, v57 & 1, 0LL);
    chargeTimeLabel = this->fields.chargeTimeLabel;
    if ( !chargeTimeLabel )
      goto LABEL_148;
    UILabel__set_text(chargeTimeLabel, v89, 0LL);
    v138 = (UnityEngine_Component_o *)this->fields.chargeTimeRoot;
    if ( !v138 )
      goto LABEL_148;
    transform = UnityEngine_Component__get_transform(v138, 0LL);
    if ( !this->fields.chargeTimeRoot )
      goto LABEL_148;
    v131 = transform;
    v140 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.chargeTimeRoot, 0LL);
    if ( !v140 )
      goto LABEL_148;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(v140, 0LL);
    v134 = (UnityEngine_Component_o *)this->fields.chargeTimeRoot;
    if ( !v134 )
      goto LABEL_148;
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, v57 & 1, 0LL);
    v105 = (UnityEngine_Component_o *)this->fields.chargeTimeRoot;
    if ( !v105 )
      goto LABEL_148;
    v106 = UnityEngine_Component__get_gameObject(v105, 0LL);
    if ( !v106 )
      goto LABEL_148;
    UnityEngine_GameObject__SetActive(v106, 0, 0LL);
    v111 = BattlePerformanceMaster___c_TypeInfo;
    addSkillAddChargeTimeLabel = this->fields.addSkillAddChargeTimeLabel;
    if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v111 = BattlePerformanceMaster___c_TypeInfo;
    }
    v113 = v111->static_fields;
    _9__70_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v113->__9__70_1;
    v115 = (System_String_o *)StringLiteral_871;
    if ( !_9__70_1 )
    {
      if ( (BYTE3(v111->vtable._0_Equals.methodPtr) & 4) != 0 && !v111->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v111);
        v113 = BattlePerformanceMaster___c_TypeInfo->static_fields;
      }
      v116 = (Il2CppObject *)v113->__9;
      _9__70_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                            System_Predicate_string__TypeInfo,
                                                                            v107,
                                                                            v108,
                                                                            v109,
                                                                            v110);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__70_1,
        v116,
        Method_BattlePerformanceMaster___c__updateSkillIcon_b__70_1__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_string___ctor__);
      v117 = BattlePerformanceMaster___c_TypeInfo->static_fields;
      v117->__9__70_1 = (struct System_Predicate_string__o *)_9__70_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v117->__9__70_1,
        (System_Int32_array **)_9__70_1,
        v118,
        v119,
        v120,
        v121,
        v122,
        v123);
    }
    v124 = (System_String_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                    v164,
                                    (System_Predicate_T__o *)_9__70_1,
                                    (const MethodInfo_2044520 *)Method_System_Array_FindAll_string___);
    v125 = System_String__Join(v115, v124, 0LL);
    if ( !addSkillAddChargeTimeLabel )
      goto LABEL_148;
    UILabel__set_text(addSkillAddChargeTimeLabel, v125, 0LL);
    addSkillAddChargeTimeSplitLabel = this->fields.addSkillAddChargeTimeSplitLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v127 = LocalizationManager__Get((System_String_o *)StringLiteral_2444, 0LL);
    if ( !addSkillAddChargeTimeSplitLabel )
      goto LABEL_148;
    UILabel__set_text(addSkillAddChargeTimeSplitLabel, v127, 0LL);
    addSkillChargeTimeLabel = this->fields.addSkillChargeTimeLabel;
    if ( !addSkillChargeTimeLabel )
      goto LABEL_148;
    UILabel__set_text(addSkillChargeTimeLabel, v89, 0LL);
    v129 = (UnityEngine_Component_o *)this->fields.addSkillChargeTimeRoot;
    if ( !v129 )
      goto LABEL_148;
    v130 = UnityEngine_Component__get_transform(v129, 0LL);
    if ( !this->fields.addSkillChargeTimeRoot )
      goto LABEL_148;
    v131 = v130;
    v132 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.addSkillChargeTimeRoot, 0LL);
    if ( !v132 )
      goto LABEL_148;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(v132, 0LL);
    v134 = (UnityEngine_Component_o *)this->fields.addSkillChargeTimeRoot;
    if ( !v134 )
      goto LABEL_148;
  }
  v141 = localPosition;
  v142 = UnityEngine_Component__get_transform(v134, 0LL);
  if ( !v142 )
    goto LABEL_148;
  *(UnityEngine_Vector3_o *)(&v143 - 2) = UnityEngine_Transform__get_localPosition(v142, 0LL);
  if ( !v131 )
    goto LABEL_148;
  v144 = v141;
  v145 = v103;
  UnityEngine_Transform__set_localPosition(v131, *(UnityEngine_Vector3_o *)(&v143 - 2), 0LL);
  v146 = this->fields.data;
  if ( !v146 )
    goto LABEL_148;
  BoostSkillInfo = BattleData__getBoostSkillInfo(v146, 0, 0LL);
  if ( !this->fields.boostSkillIcon )
    goto LABEL_148;
  if ( BoostSkillInfo )
    BattleServantSkillIConComponent__SetSkillInfo(
      (BattleServantSkillIConComponent_o *)this->fields.boostSkillIcon,
      BoostSkillInfo,
      1,
      0,
      0,
      0,
      0LL);
  else
    BattleServantSkillIConComponent__setNoSkill(
      (BattleServantSkillIConComponent_o *)this->fields.boostSkillIcon,
      0,
      0LL);
  v148 = this->fields.data;
  if ( !v148 )
    goto LABEL_148;
  quest_ent = v148->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_148;
  if ( QuestEntity__HasFlag(quest_ent, 0x200000000LL, 0LL) )
    goto LABEL_137;
  v150 = this->fields.data;
  if ( !v150 )
    goto LABEL_148;
  v151 = v150->fields.quest_ent;
  if ( !v151 )
    goto LABEL_148;
  if ( QuestEntity__HasFlag(v151, 0x100000000LL, 0LL) )
  {
LABEL_137:
    skillBtnSp = this->fields.skillBtnSp;
    if ( skillBtnSp )
    {
      UISprite__set_spriteName(skillBtnSp, (System_String_o *)StringLiteral_16934, 0LL);
      skillBtn = this->fields.skillBtn;
      if ( skillBtn )
      {
        ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                      skillBtn,
                                                      (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(
               (UnityEngine_Object_o *)ComponentInChildren_Dropdown_DropdownItem,
               0LL,
               0LL) )
        {
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_148;
          v161 = (System_Int32_array **)StringLiteral_9271;
          ComponentInChildren_Dropdown_DropdownItem->fields.m_Image = (struct UnityEngine_UI_Image_o *)StringLiteral_9271;
          sub_B16F98(
            (BattleServantConfConponent_o *)&ComponentInChildren_Dropdown_DropdownItem->fields.m_Image,
            v161,
            v155,
            v156,
            v157,
            v158,
            v159,
            v160);
        }
        v162 = this->fields.skillBtnFlashObject;
        if ( v162 )
        {
          UnityEngine_GameObject__SetActive(v162, 0, 0LL);
          return;
        }
      }
    }
LABEL_148:
    sub_B170D4();
  }
}


void __fastcall BattlePerformanceMaster__updateSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleData_o *data; // x8
  UISprite_o *skipDeadBtn; // x0
  __int64 *v6; // x8

  if ( (byte_40FA85E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940, method);
    sub_B16FFC(&StringLiteral_16939, v3);
    byte_40FA85E = 1;
  }
  data = this->fields.data;
  if ( !data || (skipDeadBtn = this->fields.skipDeadBtn) == 0LL )
    sub_B170D4();
  if ( data->fields.systemflg_skipDead )
    v6 = &StringLiteral_16940;
  else
    v6 = &StringLiteral_16939;
  UISprite__set_spriteName(skipDeadBtn, (System_String_o *)*v6, 0LL);
}


void __fastcall BattlePerformanceMaster__updateTdConstantVelocity(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleData_o *data; // x8
  UISprite_o *tdConstBtn; // x0
  __int64 *v6; // x8

  if ( (byte_40FA85C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940, method);
    sub_B16FFC(&StringLiteral_16939, v3);
    byte_40FA85C = 1;
  }
  data = this->fields.data;
  if ( !data || (tdConstBtn = this->fields.tdConstBtn) == 0LL )
    sub_B170D4();
  if ( data->fields.systemflg_TdConstantvelocity )
    v6 = &StringLiteral_16940;
  else
    v6 = &StringLiteral_16939;
  UISprite__set_spriteName(tdConstBtn, (System_String_o *)*v6, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__waitMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FA876 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceMaster__waitMasterBuffEffect_d__160_TypeInfo, method);
    byte_40FA876 = 1;
  }
  v8 = sub_B170CC(BattlePerformanceMaster__waitMasterBuffEffect_d__160_TypeInfo, method, v3, v4, v5);
  BattlePerformanceMaster__waitMasterBuffEffect_d__160___ctor(
    (BattlePerformanceMaster__waitMasterBuffEffect_d__160_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(float *)(v8 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall BattlePerformanceMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0

  if ( (byte_40F717C & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceMaster___c_TypeInfo, v1);
    byte_40F717C = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattlePerformanceMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattlePerformanceMaster___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattlePerformanceMaster___c___ctor(BattlePerformanceMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceMaster___c___selectedSkillSvt_b__116_0(
        BattlePerformanceMaster___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster___c___selectedSvt_b__92_0(
        BattlePerformanceMaster___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall BattlePerformanceMaster___c___updateSkillIcon_b__70_0(
        BattlePerformanceMaster___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(x, 0LL);
}


bool __fastcall BattlePerformanceMaster___c___updateSkillIcon_b__70_1(
        BattlePerformanceMaster___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(x, 0LL);
}


void __fastcall BattlePerformanceMaster___c__DisplayClass159_0___ctor(
        BattlePerformanceMaster___c__DisplayClass159_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceMaster___c__DisplayClass159_0___startMasterBuffEffect_b__0(
        BattlePerformanceMaster___c__DisplayClass159_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v3; // x1

  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  v3 = BattlePerformanceMaster__waitMasterBuffEffect(this->fields.__4__this, this->fields.waitTime, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316(_4__this, v3, 0LL);
}


void __fastcall BattlePerformanceMaster___c__DisplayClass162_0___ctor(
        BattlePerformanceMaster___c__DisplayClass162_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceMaster___c__DisplayClass162_0___endMasterBuffEffectFadeOut_b__0(
        BattlePerformanceMaster___c__DisplayClass162_0_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  BattlePerformanceMaster__endMasterBuffEffect(_4__this, this->fields.widget, 0LL);
}


void __fastcall BattlePerformanceMaster___c__DisplayClass66_0___ctor(
        BattlePerformanceMaster___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceMaster___c__DisplayClass66_0___Initialize_b__0(
        BattlePerformanceMaster___c__DisplayClass66_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL)) == 0LL )
    sub_B170D4();
  return System_String__StartsWith(name, this->fields.flashPrefabName, 0LL);
}


void __fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162___ctor(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162__MoveNext(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x21
  Il2CppObject *v12; // x20
  struct BattlePerformanceMaster___c__DisplayClass162_0_o *v13; // x0
  struct BattlePerformanceMaster_o *v14; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  BattlePerformance_o *perf; // x0
  UnityEngine_GameObject_o *master_root; // x0
  struct BattlePerformanceMaster___c__DisplayClass162_0_o *_8__1; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  struct BattlePerformanceMaster___c__DisplayClass162_0_o *v21; // x8
  UnityEngine_Object_o *widget; // x20
  struct BattlePerformanceMaster___c__DisplayClass162_0_o *v23; // x8
  struct UIWidget_o *v24; // x0
  TweenAlpha_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  struct TweenAlpha_o *effectTween; // x8
  UITweener_o *v31; // x20
  Il2CppObject *v32; // x21
  EventDelegate_Callback_o *v33; // x19

  if ( (byte_40F717D & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_BattlePerformanceMaster___c__DisplayClass162_0__endMasterBuffEffectFadeOut_b__0__, v8);
    sub_B16FFC(&BattlePerformanceMaster___c__DisplayClass162_0_TypeInfo, v9);
    byte_40F717D = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
    perf = _4__this->fields.perf;
    if ( !perf )
      goto LABEL_24;
    if ( !BattlePerformance__isPositionTactical(perf, 0LL) )
    {
      master_root = _4__this->fields.master_root;
      if ( !master_root )
        goto LABEL_24;
      _8__1 = this->fields.__8__1;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  master_root,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !_8__1 )
        goto LABEL_24;
      _8__1->fields.widget = (struct UIWidget_o *)Component_srcLineSprite;
      sub_B16F98(&_8__1->fields.widget, Component_srcLineSprite);
      v21 = this->fields.__8__1;
      if ( !v21 )
        goto LABEL_24;
      widget = (UnityEngine_Object_o *)v21->fields.widget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(widget, 0LL, 0LL) )
      {
        v23 = this->fields.__8__1;
        if ( !v23 )
          goto LABEL_24;
        v24 = v23->fields.widget;
        if ( !v24 )
          goto LABEL_24;
        ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v24->klass->vtable._8_set_alpha.method)(
          v24,
          v24->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          1.0);
        v25 = TweenAlpha__Begin(_4__this->fields.master_root, 0.25, 0.01, 0LL);
        _4__this->fields.effectTween = v25;
        sub_B16F98(&_4__this->fields.effectTween, v25);
        effectTween = _4__this->fields.effectTween;
        if ( !effectTween )
          goto LABEL_24;
        effectTween->fields.style = 6;
        v31 = (UITweener_o *)_4__this->fields.effectTween;
        v32 = (Il2CppObject *)this->fields.__8__1;
        v33 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v26, v27, v28, v29);
        EventDelegate_Callback___ctor(
          v33,
          v32,
          Method_BattlePerformanceMaster___c__DisplayClass162_0__endMasterBuffEffectFadeOut_b__0__,
          0LL);
        if ( !v31 )
          goto LABEL_24;
        UITweener__SetOnFinished(v31, v33, 0LL);
      }
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v12 = (Il2CppObject *)sub_B170CC(BattlePerformanceMaster___c__DisplayClass162_0_TypeInfo, method, v2, v3, v4);
    System_Object___ctor(v12, 0LL);
    this->fields.__8__1 = (struct BattlePerformanceMaster___c__DisplayClass162_0_o *)v12;
    sub_B16F98(&this->fields.__8__1, v12);
    v13 = this->fields.__8__1;
    if ( v13 )
    {
      v14 = this->fields.__4__this;
      v13->fields.__4__this = v14;
      sub_B16F98(&v13->fields, v14);
      if ( _4__this )
      {
        _4__this->fields.isMasterBuffEffectPlaying = 0;
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(p__2__current, 0LL);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_24:
    sub_B170D4();
  }
  return 0;
}


Il2CppObject *__fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162__System_IDisposable_Dispose(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster__openRetireDialog_d__134___ctor(
        BattlePerformanceMaster__openRetireDialog_d__134_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceMaster__openRetireDialog_d__134__MoveNext(
        BattlePerformanceMaster__openRetireDialog_d__134_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  DefCoroutine_c *v9; // x0
  Il2CppObject *milliSecSeven; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  Il2CppObject *_4__this; // x21
  BattleLogic_o *klass; // x19
  NotificationDialog_ClickDelegate_o *v15; // x20

  if ( (byte_40F717E & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceMaster_retRetireDialog__, method);
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, v6);
    sub_B16FFC(&DefCoroutine_TypeInfo, v7);
    byte_40F717E = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this
      || (klass = (BattleLogic_o *)_4__this[3].klass,
          v15 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(
                                                        NotificationDialog_ClickDelegate_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3,
                                                        v4),
          NotificationDialog_ClickDelegate___ctor(v15, _4__this, Method_BattlePerformanceMaster_retRetireDialog__, 0LL),
          !klass) )
    {
      sub_B170D4();
    }
    BattleLogic__OpenBattleLoseDlg(klass, 1, 1, v15, 0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v9 = DefCoroutine_TypeInfo;
  if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v9 = DefCoroutine_TypeInfo;
  }
  milliSecSeven = (Il2CppObject *)v9->static_fields->milliSecSeven;
  this->fields.__2__current = milliSecSeven;
  p__2__current = &this->fields.__2__current;
  sub_B16F98(p__2__current, milliSecSeven);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceMaster__openRetireDialog_d__134__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__openRetireDialog_d__134_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__openRetireDialog_d__134__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__openRetireDialog_d__134_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattlePerformanceMaster__openRetireDialog_d__134_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattlePerformanceMaster__openRetireDialog_d__134__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__openRetireDialog_d__134_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__openRetireDialog_d__134__System_IDisposable_Dispose(
        BattlePerformanceMaster__openRetireDialog_d__134_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__160___ctor(
        BattlePerformanceMaster__waitMasterBuffEffect_d__160_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__160__MoveNext(
        BattlePerformanceMaster__waitMasterBuffEffect_d__160_o *this,
        const MethodInfo *method)
{
  unsigned int _1__state; // w8
  bool v4; // cf
  bool v5; // zf
  int32_t v6; // w8
  float waitTime; // s8
  BattlePerformanceMaster_o *_4__this; // x0
  Il2CppObject *v9; // x0
  bool result; // w0
  float deltaTime; // s0

  _1__state = this->fields.__1__state;
  v4 = _1__state >= 2;
  v5 = _1__state == 2;
  v6 = -1;
  if ( !v4 )
  {
    waitTime = this->fields.waitTime;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( waitTime >= 0.0 )
    {
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      this->fields.__2__current = 0LL;
      this->fields.waitTime = waitTime - deltaTime;
      sub_B16F98(&this->fields.__2__current, 0LL);
      v6 = 1;
      result = 1;
    }
    else
    {
      if ( !_4__this )
        sub_B170D4();
      v9 = (Il2CppObject *)BattlePerformanceMaster__endMasterBuffEffectFadeOut(_4__this, 0LL);
      this->fields.__2__current = v9;
      sub_B16F98(&this->fields.__2__current, v9);
      result = 1;
      v6 = 2;
    }
    goto LABEL_8;
  }
  result = 0;
  if ( v5 )
LABEL_8:
    this->fields.__1__state = v6;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__160__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__waitMasterBuffEffect_d__160_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__waitMasterBuffEffect_d__160__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__waitMasterBuffEffect_d__160_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattlePerformanceMaster__waitMasterBuffEffect_d__160_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__160__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__waitMasterBuffEffect_d__160_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__160__System_IDisposable_Dispose(
        BattlePerformanceMaster__waitMasterBuffEffect_d__160_o *this,
        const MethodInfo *method)
{
  ;
}