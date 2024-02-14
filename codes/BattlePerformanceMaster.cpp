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

  if ( (byte_42151CB & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceMaster_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_17050/*"btn_master_skill"*/, v8);
    byte_42151CB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17050/*"btn_master_skill"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17050/*"btn_master_skill"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4215192 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_4215192 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__CloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_42151C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_OnCompCloseRetireSA__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_42151C8 = 1;
  }
  win_Retire = this->fields.win_Retire;
  v6 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, method, v2);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompCloseRetireSA__,
    0LL);
  if ( !win_Retire )
    sub_B0D97C(v7);
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Retire->klass->vtable._12_Close.method)(
    win_Retire,
    v6,
    win_Retire->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__CloseSkillConfComp(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_421518D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_421518D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
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
  char *skillBtn; // x0
  struct BattleData_o *data; // x8
  struct CommandSpellWindowComponent_o *win_Spell; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  CommandSpellWindowComponent_CloseButtonCallBack_o *v50; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct CommandSpellWindowComponent_o *v57; // x21
  __int64 v58; // x1
  __int64 v59; // x2
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *v60; // x22
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x1
  UnityEngine_Transform_o *v81; // x21
  int v82; // s1
  int v83; // s0
  int v84; // s2
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x21
  __int64 v86; // x1
  __int64 v87; // x2
  BattleServantConfConponent_CloseButtonCallBack_o *v88; // x22
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  struct BattleServantConfConponent_o *win_EnemyConf; // x21
  __int64 v96; // x1
  __int64 v97; // x2
  BattleServantConfConponent_CloseButtonCallBack_o *v98; // x22
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  UnityEngine_Object_o *fieldConf; // x21
  __int64 v106; // x1
  __int64 v107; // x2
  BattleFieldConfConponent_o *v108; // x21
  System_Action_o *v109; // x22
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x1
  const MethodInfo *v117; // x1
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x1
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  AssetData_o *v126; // x21
  System_Int32_array **v127; // x1
  UnityEngine_GameObject_o *v128; // x21
  UnityEngine_GameObject_array *Children; // x22
  __int64 v130; // x1
  __int64 v131; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v132; // x23
  struct UnityEngine_GameObject_o **p_skillBtnFlashObject; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215171 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, inperf);
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, v9);
    sub_B0D8A4(&AssetManager_TypeInfo, v10);
    sub_B0D8A4(&Method_BasicHelper_Any_GameObject___, v11);
    sub_B0D8A4(&Method_BattlePerformanceMaster_OnCloseFieldConf__, v12);
    sub_B0D8A4(&Method_BattlePerformanceMaster_onCloseEnemyServantConf__, v13);
    sub_B0D8A4(&Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__, v14);
    sub_B0D8A4(&Method_BattlePerformanceMaster_procUseCommandSpell__, v15);
    sub_B0D8A4(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, v16);
    sub_B0D8A4(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Func_GameObject__bool___ctor__, v18);
    sub_B0D8A4(&System_Func_GameObject__bool__TypeInfo, v19);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v20);
    sub_B0D8A4(&Method_BattlePerformanceMaster___c__DisplayClass66_0__Initialize_b__0__, v21);
    sub_B0D8A4(&BattlePerformanceMaster___c__DisplayClass66_0_TypeInfo, v22);
    sub_B0D8A4(&CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo, v23);
    sub_B0D8A4(&StringLiteral_2766/*"Battle/Common"*/, v24);
    sub_B0D8A4(&StringLiteral_18252/*"ef_masterskill_flash"*/, v25);
    byte_4215171 = 1;
  }
  v26 = sub_B0D974(BattlePerformanceMaster___c__DisplayClass66_0_TypeInfo, inperf, indata);
  BattlePerformanceMaster___c__DisplayClass66_0___ctor((BattlePerformanceMaster___c__DisplayClass66_0_o *)v26, 0LL);
  this->fields.perf = inperf;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.data = indata;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.logic = inlogic;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.logic,
    (System_Int32_array **)inlogic,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  skillBtn = (char *)this->fields.skillBtn;
  if ( !skillBtn )
    goto LABEL_58;
  skillBtn = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0LL);
  if ( !skillBtn )
    goto LABEL_58;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0LL);
  skillBtn = (char *)this->fields.menuBtn;
  this->fields.pos_skillbtn = localPosition;
  if ( !skillBtn )
    goto LABEL_58;
  skillBtn = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0LL);
  if ( !skillBtn )
    goto LABEL_58;
  v143 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0LL);
  skillBtn = (char *)this->fields.win_Skill;
  this->fields.pos_menubtn = v143;
  if ( !skillBtn )
    goto LABEL_58;
  BattleMasterSkillWindowComponent__setInitData((BattleMasterSkillWindowComponent_o *)skillBtn, 0, 0.1, 0, 0LL);
  skillBtn = (char *)this->fields.win_Skill;
  if ( !skillBtn )
    goto LABEL_58;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = (char *)this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_58;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_58;
  skillBtn = (char *)this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_58;
  CommandSpellWindowComponent__InitializeCommandSpell(
    (CommandSpellWindowComponent_o *)skillBtn,
    this->fields.perf,
    1,
    data->fields.temporarySpell,
    0LL);
  win_Spell = this->fields.win_Spell;
  v50 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_B0D974(
                                                               CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo,
                                                               v48,
                                                               v49);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v50,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__,
    0LL);
  if ( !win_Spell )
    goto LABEL_58;
  win_Spell->fields.callback_close = v50;
  sub_B0D840(
    (BattleServantConfConponent_o *)&win_Spell->fields.callback_close,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v57 = this->fields.win_Spell;
  v60 = (CommandSpellWindowComponent_UseCommandSpellCallBack_o *)sub_B0D974(
                                                                   CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo,
                                                                   v58,
                                                                   v59);
  CommandSpellWindowComponent_UseCommandSpellCallBack___ctor(
    v60,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procUseCommandSpell__,
    0LL);
  if ( !v57 )
    goto LABEL_58;
  v57->fields.callback_use = v60;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v57->fields.callback_use,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  skillBtn = (char *)this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_58;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = (char *)this->fields.win_Menu;
  if ( !skillBtn )
    goto LABEL_58;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.win_Menu;
  if ( !skillBtn )
    goto LABEL_58;
  v73 = (System_Int32_array **)this->fields.data;
  *((_QWORD *)skillBtn + 10) = v73;
  sub_B0D840((BattleServantConfConponent_o *)(skillBtn + 80), v73, v67, v68, v69, v70, v71, v72);
  skillBtn = (char *)this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_58;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_58;
  v80 = (System_Int32_array **)this->fields.data;
  *((_QWORD *)skillBtn + 18) = v80;
  sub_B0D840((BattleServantConfConponent_o *)(skillBtn + 144), v80, v74, v75, v76, v77, v78, v79);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_58;
  skillBtn = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillBtn, 0LL);
  if ( !this->fields.warBoard_win_EnemyConf )
    goto LABEL_58;
  v81 = (UnityEngine_Transform_o *)skillBtn;
  skillBtn = (char *)UnityEngine_Component__get_transform(
                       (UnityEngine_Component_o *)this->fields.warBoard_win_EnemyConf,
                       0LL);
  if ( !skillBtn )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)(&v82 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)skillBtn,
                                           0LL);
  if ( !v81 )
    goto LABEL_58;
  v83 = 0;
  v84 = 0;
  UnityEngine_Transform__set_localPosition(v81, *(UnityEngine_Vector3_o *)(&v82 - 1), 0LL);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_58;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_58;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  v88 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_B0D974(
                                                              BattleServantConfConponent_CloseButtonCallBack_TypeInfo,
                                                              v86,
                                                              v87);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v88,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0LL);
  if ( !warBoard_win_EnemyConf )
    goto LABEL_58;
  warBoard_win_EnemyConf->fields.callback_close = v88;
  sub_B0D840(
    (BattleServantConfConponent_o *)&warBoard_win_EnemyConf->fields.callback_close,
    (System_Int32_array **)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  skillBtn = (char *)this->fields.win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_58;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_58;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  win_EnemyConf = this->fields.win_EnemyConf;
  v98 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_B0D974(
                                                              BattleServantConfConponent_CloseButtonCallBack_TypeInfo,
                                                              v96,
                                                              v97);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v98,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0LL);
  if ( !win_EnemyConf )
    goto LABEL_58;
  win_EnemyConf->fields.callback_close = v98;
  sub_B0D840(
    (BattleServantConfConponent_o *)&win_EnemyConf->fields.callback_close,
    (System_Int32_array **)v98,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v108 = this->fields.fieldConf;
    v109 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v106, v107);
    System_Action___ctor(v109, (Il2CppObject *)this, Method_BattlePerformanceMaster_OnCloseFieldConf__, 0LL);
    if ( !v108 )
      goto LABEL_58;
    BattleFieldConfConponent__Initialize(v108, v109, 0LL);
  }
  skillBtn = (char *)this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_58;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_58;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = (char *)this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_58;
  v116 = (System_Int32_array **)this->fields.data;
  *((_QWORD *)skillBtn + 12) = v116;
  sub_B0D840((BattleServantConfConponent_o *)(skillBtn + 96), v116, v110, v111, v112, v113, v114, v115);
  BattlePerformanceMaster__updateShortSkill(this, v117);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v118);
  BattlePerformanceMaster__updateSkipDead(this, v119);
  skillBtn = (char *)this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_58;
  BattleSkillConfComponent__setInit((BattleSkillConfComponent_o *)skillBtn, this->fields.data, 0LL);
  skillBtn = (char *)this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_58;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 424LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 432LL));
  skillBtn = (char *)this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_58;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  skillBtn = (char *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_2766/*"Battle/Common"*/, 0LL);
  if ( !v26 )
    goto LABEL_58;
  v126 = (AssetData_o *)skillBtn;
  v127 = (System_Int32_array **)StringLiteral_18252/*"ef_masterskill_flash"*/;
  *(_QWORD *)(v26 + 16) = StringLiteral_18252/*"ef_masterskill_flash"*/;
  sub_B0D840((BattleServantConfConponent_o *)(v26 + 16), v127, v120, v121, v122, v123, v124, v125);
  if ( !v126 )
    goto LABEL_58;
  skillBtn = (char *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                       v126,
                       *(System_String_o **)(v26 + 16),
                       (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !this->fields.win_Menu )
    goto LABEL_58;
  v128 = (UnityEngine_GameObject_o *)skillBtn;
  BattleMenuWindowComponent__Init(this->fields.win_Menu, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v128, 0LL, 0LL) )
  {
    Children = GameObjectExtensions__GetChildren(this->fields.skillBtn, 1, 0LL);
    v132 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                System_Func_GameObject__bool__TypeInfo,
                                                                                v130,
                                                                                v131);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v132,
      (Il2CppObject *)v26,
      Method_BattlePerformanceMaster___c__DisplayClass66_0__Initialize_b__0__,
      (const MethodInfo_26189B8 *)Method_System_Func_GameObject__bool___ctor__);
    if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Children,
           (System_Func_T__bool__o *)v132,
           (const MethodInfo_17071E4 *)Method_BasicHelper_Any_GameObject___) )
    {
      p_skillBtnFlashObject = &this->fields.skillBtnFlashObject;
    }
    else
    {
      skillBtn = (char *)this->fields.skillBtn;
      if ( !skillBtn )
        goto LABEL_58;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v128, transform, 0LL, 0LL);
      p_skillBtnFlashObject = &this->fields.skillBtnFlashObject;
      this->fields.skillBtnFlashObject = Object;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.skillBtnFlashObject,
        (System_Int32_array **)Object,
        v136,
        v137,
        v138,
        v139,
        v140,
        v141);
    }
    skillBtn = (char *)*p_skillBtnFlashObject;
    if ( *p_skillBtnFlashObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillBtn, 0, 0LL);
      return;
    }
LABEL_58:
    sub_B0D97C(skillBtn);
  }
}


bool __fastcall BattlePerformanceMaster__IsCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *fieldConf; // x0

  fieldConf = (BattleWindowComponent_o *)this->fields.fieldConf;
  if ( !fieldConf )
    sub_B0D97C(0LL);
  return BattleWindowComponent__isClose(fieldConf, 0LL);
}


bool __fastcall BattlePerformanceMaster__IsTacticalPhaseWait(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42151CA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15439/*"Wait"*/, method);
    byte_42151CA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm || (myFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_ActiveStateName(myFsm, 0LL)) == 0LL )
    sub_B0D97C(myFsm);
  return System_String__IndexOf_43922252((System_String_o *)myFsm, (System_String_o *)StringLiteral_15439/*"Wait"*/, 0LL) >= 0;
}


void __fastcall BattlePerformanceMaster__OnCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42151BC & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3106/*"CLOSE_CONF"*/, method);
    byte_42151BC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3106/*"CLOSE_CONF"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OnCompCloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42151C9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42151C9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OnCompShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42151C7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42151C7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenBoostSkillConfComplete(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4215190 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_4215190 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenRetireWindowSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42151C5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3063/*"CLICK_CKRETIRE"*/, method);
    byte_42151C5 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3063/*"CLICK_CKRETIRE"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenSkillConfComplete(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_421518B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_421518B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
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
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4215196 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_SkillSelectedAddFunc__, skillInfo);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo, v6);
    byte_4215196 = 1;
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
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(
                                  (UnityEngine_Object_o *)SkillSelectAddFuncConfWindow,
                                  0LL,
                                  0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
    return 0;
  if ( !SkillSelectAddFuncConfWindow )
LABEL_12:
    sub_B0D97C(perf);
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0LL) )
  {
    v11 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_B0D974(
                                                                      BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo,
                                                                      v9,
                                                                      v10);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v11,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_SkillSelectedAddFunc__,
      0LL);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v11;
    sub_B0D840(
      (BattleServantConfConponent_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
  BattleFieldConfConponent_o *v8; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_42151BB & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster__ProcCloseFieldConf_b__154_0__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_42151BB = 1;
  }
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v8 = this->fields.fieldConf;
    v9 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    BattleWindowComponent_EndCall___ctor(
      v9,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcCloseFieldConf_b__154_0__,
      0LL);
    if ( !v8 )
      sub_B0D97C(v10);
    BattleFieldConfConponent__Close(v8, v9, 0LL);
  }
}


void __fastcall BattlePerformanceMaster__ProcOpenFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *fieldConf; // x20
  struct BattleData_o *data; // x8
  BattleFieldConfConponent_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  BattleWindowComponent_EndCall_o *v12; // x21

  if ( (byte_42151BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster__ProcOpenFieldConf_b__153_0__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_12376/*"START_CLOSE"*/, v5);
    byte_42151BA = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_14;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12376/*"START_CLOSE"*/, 0LL);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    data = this->fields.data;
    if ( data )
    {
      perf = (BattlePerformance_o *)this->fields.fieldConf;
      if ( perf )
      {
        BattleFieldConfConponent__SetConfData(
          (BattleFieldConfConponent_o *)perf,
          data->fields._FieldEnvData_k__BackingField,
          0LL);
        v9 = this->fields.fieldConf;
        v12 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v10, v11);
        BattleWindowComponent_EndCall___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster__ProcOpenFieldConf_b__153_0__,
          0LL);
        if ( v9 )
        {
          BattleFieldConfConponent__Open(v9, v12, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B0D97C(perf);
  }
}


void __fastcall BattlePerformanceMaster__ProcWaveRestart(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattleMenuWindowComponent_o *win_Menu; // x0

  BattlePerformanceMaster__proclight(this, this->fields.menuBtn, 0, v2);
  win_Menu = this->fields.win_Menu;
  if ( !win_Menu
    || (BattleMenuWindowComponent__ProcWaveRestart(win_Menu, 0LL),
        (win_Menu = (BattleMenuWindowComponent_o *)this->fields.logic) == 0LL) )
  {
    sub_B0D97C(win_Menu);
  }
  BattleLogic__ProcWaveRestart((BattleLogic_o *)win_Menu, 0LL);
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
  void *mAtlas; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  struct UISprite_o *skillBtnSp; // x8
  System_String_o *v14; // x20

  if ( (byte_4215173 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v3);
    sub_B0D8A4(&BattlePerformanceMaster_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_B0D8A4(&StringLiteral_2766/*"Battle/Common"*/, v6);
    sub_B0D8A4(&StringLiteral_2781/*"BattleAssetUIAtlas"*/, v7);
    byte_4215173 = 1;
  }
  mAtlas = BattlePerformanceMaster_TypeInfo;
  if ( (BYTE3(BattlePerformanceMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo);
    mAtlas = BattlePerformanceMaster_TypeInfo;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_20;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_20;
  v11 = (System_String_o *)**((_QWORD **)mAtlas + 23);
  v12 = System_Int32__ToString((int)data + 104, 0LL);
  mAtlas = System_String__Concat_43849904(v11, v12, 0LL);
  skillBtnSp = this->fields.skillBtnSp;
  if ( !skillBtnSp )
    goto LABEL_20;
  v14 = (System_String_o *)mAtlas;
  mAtlas = skillBtnSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_20;
  if ( UIAtlas__GetSprite((UIAtlas_o *)mAtlas, v14, 0LL) )
    goto LABEL_18;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  mAtlas = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2766/*"Battle/Common"*/, 0LL);
  if ( !mAtlas
    || (mAtlas = AssetData__GetObject_WarBoardWaitTimeSetting_(
                   (AssetData_o *)mAtlas,
                   (System_String_o *)StringLiteral_2781/*"BattleAssetUIAtlas"*/,
                   (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440)) == 0LL
    || (mAtlas = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   (UnityEngine_GameObject_o *)mAtlas,
                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
        !this->fields.skillBtnSp) )
  {
LABEL_20:
    sub_B0D97C(mAtlas);
  }
  UISprite__set_atlas(this->fields.skillBtnSp, (UIAtlas_o *)mAtlas, 0LL);
LABEL_18:
  mAtlas = this->fields.skillBtnSp;
  if ( !mAtlas )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)mAtlas, v14, 0LL);
}


void __fastcall BattlePerformanceMaster__ShowFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42151B9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3072/*"CLICK_FIELD"*/, method);
    byte_42151B9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3072/*"CLICK_FIELD"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__ShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleRetireWindowComponent_o *win_Retire; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_42151C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_OnCompShowRetireSA__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_42151C6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  win_Retire = this->fields.win_Retire;
  v8 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v6, v7);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompShowRetireSA__,
    0LL);
  if ( !win_Retire )
    sub_B0D97C(v9);
  BattleRetireWindowComponent__Open(win_Retire, v8, 0LL);
}


void __fastcall BattlePerformanceMaster__SkillSelectedAddFunc(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t selIndex,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v6; // x20
  const MethodInfo *v7; // x2

  v6 = this;
  if ( (byte_4215197 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_2932/*"CANCEL"*/, skillInfo);
    byte_4215197 = 1;
  }
  if ( selIndex != -1 )
  {
    if ( skillInfo )
    {
      BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, selIndex, 0LL);
      BattlePerformanceMaster__WantUseSkill(v6, skillInfo, v7);
      return;
    }
LABEL_8:
    sub_B0D97C(this);
  }
  this = (BattlePerformanceMaster_o *)v6->fields.myFsm;
  if ( !this )
    goto LABEL_8;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_2932/*"CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__UseSkill(
        BattlePerformanceMaster_o *this,
        bool playSe,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *perf; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct BattleLogic_UseSkillObject_o *useSkillObject; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4215194 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, playSe);
    sub_B0D8A4(&StringLiteral_2932/*"CANCEL"*/, v5);
    byte_4215194 = 1;
  }
  perf = (PlayMakerFSM_o *)this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  if ( BattlePerformance__isOpenOrOpeningMainWindow((BattlePerformance_o *)perf, 0LL) )
  {
    perf = this->fields.myFsm;
    if ( perf )
    {
      PlayMakerFSM__SendEvent(perf, (System_String_o *)StringLiteral_2932/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_16:
    sub_B0D97C(perf);
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
  sub_B0D840(
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
  if ( !BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v16) )
    BattlePerformanceMaster__WantUseSkill(this, skillInfo, v17);
}


void __fastcall BattlePerformanceMaster__WantUseSkill(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Int32_array *ValidTargetTypeArray; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Func_int__bool__o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  System_Int32_array **SelectSvtWindow; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  System_Func_int__bool__o *v24; // x22
  System_Int32_array **SelectMainSubSvtWindow; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t v32; // w1
  const MethodInfo *v33; // x2

  v4 = this;
  if ( (byte_4215195 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, skillInfo);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_Target_isChoose__, v7);
    sub_B0D8A4(&Method_Target_isSubChoose__, v8);
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, v9);
    byte_4215195 = 1;
  }
  if ( !skillInfo )
    goto LABEL_17;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0LL);
  v13 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v11, v12);
  System_Func_int__bool____ctor(
    v13,
    0LL,
    Method_Target_isSubChoose__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__24145568(
         ValidTargetTypeArray,
         (System_Func_T__bool__o *)v13,
         (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312) )
  {
    this = (BattlePerformanceMaster_o *)v4->fields.perf;
    if ( this )
    {
      BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v4->fields.perf;
      if ( this )
      {
        SelectSvtWindow = (System_Int32_array **)BattlePerformance__getSelectSvtWindow((BattlePerformance_o *)this, 0LL);
        v4->fields.skillselectSvtWindow = (struct BattleSelectServantWindow_o *)SelectSvtWindow;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v4->fields.skillselectSvtWindow,
          SelectSvtWindow,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        this = (BattlePerformanceMaster_o *)v4->fields.skillselectSvtWindow;
        if ( this )
        {
          ((void (__fastcall *)(BattlePerformanceMaster_o *, void *))this->klass[1]._1.parent)(
            this,
            this->klass[1]._1.generic_class);
          BattlePerformanceMaster__openSkillSelectMainSubSvtWindow(v4, v23);
          return;
        }
      }
    }
LABEL_17:
    sub_B0D97C(this);
  }
  v24 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v14, v15);
  System_Func_int__bool____ctor(
    v24,
    0LL,
    Method_Target_isChoose__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__24145568(
         ValidTargetTypeArray,
         (System_Func_T__bool__o *)v24,
         (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312) )
  {
    this = (BattlePerformanceMaster_o *)v4->fields.perf;
    if ( !this )
      goto LABEL_17;
    BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)this, 0LL);
    this = (BattlePerformanceMaster_o *)v4->fields.perf;
    if ( !this )
      goto LABEL_17;
    SelectMainSubSvtWindow = (System_Int32_array **)BattlePerformance__getSelectMainSubSvtWindow(
                                                      (BattlePerformance_o *)this,
                                                      0LL);
    v4->fields.selectMSWindow = (struct BattleSelectMainSubServantWindow_o *)SelectMainSubSvtWindow;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v4->fields.selectMSWindow,
      SelectMainSubSvtWindow,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    this = (BattlePerformanceMaster_o *)v4->fields.selectMSWindow;
    if ( !this )
      goto LABEL_17;
    ((void (__fastcall *)(BattlePerformanceMaster_o *, void *))this->klass[1]._1.parent)(
      this,
      this->klass[1]._1.generic_class);
    v32 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
            skillInfo,
            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    BattlePerformanceMaster__openSkillSelectSvtWindow(v4, v32, v33);
  }
  else
  {
    this = (BattlePerformanceMaster_o *)v4->fields.logic;
    if ( !this )
      goto LABEL_17;
    BattleLogic__wantUseSkill((BattleLogic_o *)this, skillInfo, skillInfo->fields.svtUniqueId, -1, 0LL);
    this = (BattlePerformanceMaster_o *)v4->fields.myFsm;
    if ( !this )
      goto LABEL_17;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
  }
}


void __fastcall BattlePerformanceMaster___ProcCloseFieldConf_b__154_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42151CD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42151CD = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster___ProcOpenFieldConf_b__153_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42151CC & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42151CC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__callBackSelectedMainSub(
        BattlePerformanceMaster_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *selectMSWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8

  if ( (byte_421519D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, flg);
    byte_421519D = 1;
  }
  selectMSWindow = (PlayMakerFSM_o *)this->fields.selectMSWindow;
  if ( !selectMSWindow )
    goto LABEL_11;
  ((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, void *, _QWORD, const MethodInfo *))selectMSWindow->klass[1]._1.typeMetadataHandle)(
    selectMSWindow,
    0LL,
    selectMSWindow->klass[1]._1.interopData,
    *(_QWORD *)&subUniqueId,
    method);
  if ( flg )
  {
    selectMSWindow = this->fields.myFsm;
    if ( selectMSWindow )
    {
      PlayMakerFSM__SendEvent(selectMSWindow, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
      actSkillObject = this->fields.actSkillObject;
      if ( actSkillObject )
      {
        selectMSWindow = (PlayMakerFSM_o *)this->fields.logic;
        if ( selectMSWindow )
        {
          BattleLogic__wantUseSkill(
            (BattleLogic_o *)selectMSWindow,
            actSkillObject->fields.skillInfo,
            mainUniqueId,
            subUniqueId,
            0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_B0D97C(selectMSWindow);
  }
  selectMSWindow = (PlayMakerFSM_o *)this->fields.perf;
  if ( !selectMSWindow )
    goto LABEL_11;
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows(
    (BattlePerformance_o *)selectMSWindow,
    this->fields.myFsm,
    0LL);
}


void __fastcall BattlePerformanceMaster__changeShortSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x1

  if ( (byte_42151A3 & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, method);
    byte_42151A3 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipSkillConf(data, 0LL), !this->fields.data) )
    sub_B0D97C(data);
  if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__updateShortSkill(this, v4);
}


void __fastcall BattlePerformanceMaster__changeSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x1

  if ( (byte_42151A7 & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, method);
    byte_42151A7 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipDead(data, 0LL), !this->fields.data) )
    sub_B0D97C(data);
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

  if ( (byte_42151A5 & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, method);
    byte_42151A5 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleTdConstantVelocity(data, 0LL), !this->fields.data) )
    sub_B0D97C(data);
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
  void *Instance; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4215186 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandSpellMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, v5);
    byte_4215186 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               this->fields.tmp_commandSpellId,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance || !this->fields.logic )
    goto LABEL_12;
  if ( BattleLogic__checkSelectFunctionTarget(this->fields.logic, *((System_Int32_array **)Instance + 6), 0, 0LL) )
  {
    BattlePerformanceMaster__openSelectSvtWindow(this, v7);
    return;
  }
  Instance = this->fields.myFsm;
  if ( !Instance
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL),
        (Instance = this->fields.logic) == 0LL) )
  {
LABEL_12:
    sub_B0D97C(Instance);
  }
  BattleLogic__useCommandSpell((BattleLogic_o *)Instance, this->fields.tmp_commandSpellId, -1, 0LL);
}


void __fastcall BattlePerformanceMaster__checkSkipFlg(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleLogic_UseSkillObject_o *v6; // x8
  struct BattleData_o *data; // x8
  struct BattleLogic_UseSkillObject_o *v8; // x8
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 *v15; // x8
  System_Int32_array **v16; // x1

  v2 = this;
  if ( (byte_4215189 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    sub_B0D8A4(&StringLiteral_12295/*"SKIP"*/, v3);
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_9324/*"NG"*/, v4);
    byte_4215189 = 1;
  }
  tmp_useSkill = v2->fields.tmp_useSkill;
  if ( !tmp_useSkill )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)tmp_useSkill->fields.skillInfo;
  if ( !this )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)BattleSkillInfoData__isChargeOK((BattleSkillInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_17;
  v6 = v2->fields.tmp_useSkill;
  if ( !v6 )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)v6->fields.skillInfo;
  if ( !this )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_17:
    this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
    if ( this )
    {
      v15 = &StringLiteral_9324/*"NG"*/;
      goto LABEL_19;
    }
    goto LABEL_22;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.systemflg_skipskillconf )
  {
    v8 = v2->fields.tmp_useSkill;
    if ( v8 )
    {
      this = (BattlePerformanceMaster_o *)v8->fields.skillInfo;
      if ( this )
      {
        if ( BattleSkillInfoData__HasCond((BattleSkillInfoData_o *)this, 0LL) || v2->fields.isLongTap )
          goto LABEL_15;
        v16 = (System_Int32_array **)v2->fields.tmp_useSkill;
        v2->fields.useSkillObject = (struct BattleLogic_UseSkillObject_o *)v16;
        sub_B0D840((BattleServantConfConponent_o *)&v2->fields.useSkillObject, v16, v9, v10, v11, v12, v13, v14);
        this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
        if ( this )
        {
          v15 = &StringLiteral_12295/*"SKIP"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_B0D97C(this);
  }
LABEL_15:
  this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
  if ( !this )
    goto LABEL_22;
  v15 = &StringLiteral_5512/*"END_PROC"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v15, 0LL);
}


void __fastcall BattlePerformanceMaster__checkTutorial(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleLogic_o *logic; // x0
  __int64 *v5; // x9

  if ( (byte_42151B2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9768/*"OK"*/, method);
    sub_B0D8A4(&StringLiteral_12295/*"SKIP"*/, v3);
    byte_42151B2 = 1;
  }
  logic = this->fields.logic;
  if ( !logic || (logic = (BattleLogic_o *)BattleLogic__isTutorialMasterStatus(logic, 0LL), !this->fields.myFsm) )
    sub_B0D97C(logic);
  if ( ((unsigned __int8)logic & 1) != 0 )
    v5 = &StringLiteral_9768/*"OK"*/;
  else
    v5 = &StringLiteral_12295/*"SKIP"*/;
  PlayMakerFSM__SendEvent(this->fields.myFsm, (System_String_o *)*v5, 0LL);
}


void __fastcall BattlePerformanceMaster__clickBoostSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleLogic_UseSkillObject_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_421518E & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_B0D8A4(&StringLiteral_3059/*"CLICK_BOOST"*/, v5);
    byte_421518E = 1;
  }
  v6 = (BattleLogic_UseSkillObject_o *)sub_B0D974(BattleLogic_UseSkillObject_TypeInfo, skillInfo, method);
  BattleLogic_UseSkillObject___ctor(v6, skillInfo, 0LL);
  this->fields.tmp_useSkill = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tmp_useSkill,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3059/*"CLICK_BOOST"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__clickSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLong,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BattleLogic_UseSkillObject_o *v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  PlayMakerFSM_o *logic; // x0

  if ( (byte_4215193 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_B0D8A4(&StringLiteral_3088/*"CLICK_SKILLICON"*/, v7);
    byte_4215193 = 1;
  }
  v8 = (BattleLogic_UseSkillObject_o *)sub_B0D974(BattleLogic_UseSkillObject_TypeInfo, skillInfo, isLong);
  BattleLogic_UseSkillObject___ctor(v8, skillInfo, 0LL);
  this->fields.tmp_useSkill = v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tmp_useSkill,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  logic = (PlayMakerFSM_o *)this->fields.logic;
  this->fields.isLongTap = isLong;
  if ( !logic )
    goto LABEL_8;
  if ( BattleLogic__isTimingUseSkill((BattleLogic_o *)logic, 0LL) )
  {
    logic = this->fields.myFsm;
    if ( logic )
    {
      PlayMakerFSM__SendEvent(logic, (System_String_o *)StringLiteral_3088/*"CLICK_SKILLICON"*/, 0LL);
      return;
    }
LABEL_8:
    sub_B0D97C(logic);
  }
}


void __fastcall BattlePerformanceMaster__compCloseALL(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_421517E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5495/*"END_CLOSEALL"*/, method);
    byte_421517E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5495/*"END_CLOSEALL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42151B8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42151B8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_42151A2 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42151A2 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_421517F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_421517F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSkillWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_421517B & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_421517B = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4215183 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_4215183 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42151B5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42151B5 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenItemListWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42151C4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42151C4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  BattlePerformanceMaster_o *v4; // x0
  const MethodInfo *v5; // x3
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_421517D & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_421517D = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 1, v2);
  BattlePerformanceMaster__proclight(v4, v3->fields.menuBtn, 0, v5);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_42151A0 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42151A0 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.menuBtn, 1, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4215179 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_4215179 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 1, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4215181 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_4215181 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__endMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        UIWidget_o *widget,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  __int64 v5; // x1
  UnityEngine_Object_o *effectTween; // x21
  UnityEngine_Behaviour_o *menuBtn; // x0
  UnityEngine_GameObject_o *master_root; // x21

  Component_srcLineSprite = (UnityEngine_Object_o *)widget;
  if ( (byte_42151C1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, widget);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42151C1 = 1;
  }
  effectTween = (UnityEngine_Object_o *)this->fields.effectTween;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectTween, 0LL, 0LL) )
  {
    menuBtn = (UnityEngine_Behaviour_o *)this->fields.effectTween;
    if ( !menuBtn )
      goto LABEL_23;
    UnityEngine_Behaviour__set_enabled(menuBtn, 0, 0LL);
  }
  menuBtn = (UnityEngine_Behaviour_o *)this->fields.menuBtn;
  if ( !menuBtn )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)menuBtn, 1, 0LL);
  menuBtn = (UnityEngine_Behaviour_o *)this->fields.spellBtn;
  if ( !menuBtn
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)menuBtn, 1, 0LL),
        (menuBtn = (UnityEngine_Behaviour_o *)this->fields.skillBtn) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)menuBtn, 1, 0LL),
        (menuBtn = (UnityEngine_Behaviour_o *)this->fields.perf) == 0LL)
    || (master_root = this->fields.master_root,
        menuBtn = (UnityEngine_Behaviour_o *)BattlePerformance__isPositionTactical((BattlePerformance_o *)menuBtn, 0LL),
        !master_root) )
  {
LABEL_23:
    sub_B0D97C(menuBtn);
  }
  UnityEngine_GameObject__SetActive(master_root, (unsigned __int8)menuBtn & 1, 0LL);
  this->fields.isMasterBuffEffectPlaying = 0;
  if ( !Component_srcLineSprite )
  {
    menuBtn = (UnityEngine_Behaviour_o *)this->fields.master_root;
    if ( !menuBtn )
      goto LABEL_23;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)menuBtn,
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  menuBtn = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)menuBtn & 1) == 0 )
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
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42151C2 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_TypeInfo, method);
    byte_42151C2 = 1;
  }
  v4 = sub_B0D974(BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_TypeInfo, method, v2);
  BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162___ctor(
    (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__endSelectSvtError(
        BattlePerformanceMaster_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_421519E & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    byte_421519E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.perf) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows((BattlePerformance_o *)Instance, this->fields.myFsm, 0LL);
}


void __fastcall BattlePerformanceMaster__endSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42151AA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12400/*"START_TAC"*/, method);
    byte_42151AA = 1;
  }
  BattlePerformanceMaster__updateCommandSpellIcon(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12400/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__flashBoostSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleBoostSkillIconComponent_o *boostSkillIcon; // x0

  boostSkillIcon = this->fields.boostSkillIcon;
  if ( !boostSkillIcon )
    sub_B0D97C(0LL);
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

  data = this->fields.data;
  if ( !data )
    goto LABEL_7;
  if ( !BattleData__IsWarBoard(data, 0LL) )
    goto LABEL_5;
  data = (BattleData_o *)this->fields.warBoard_win_EnemyConf;
  if ( !data )
    goto LABEL_7;
  if ( !data->fields.turnEffect )
  {
LABEL_5:
    data = (BattleData_o *)this->fields.win_EnemyConf;
    if ( data )
      return BattleWindowComponent__isClose((BattleWindowComponent_o *)data, 0LL);
LABEL_7:
    sub_B0D97C(data);
  }
  return BattleWindowComponent__isClose((BattleWindowComponent_o *)data, 0LL);
}


bool __fastcall BattlePerformanceMaster__isWinMenuWindowOpenOrOpening(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_o *win_Menu; // x0

  win_Menu = (BattleWindowComponent_o *)this->fields.win_Menu;
  if ( !win_Menu )
    sub_B0D97C(0LL);
  return BattleWindowComponent__isOpenOrOpening(win_Menu, 0LL);
}


bool __fastcall BattlePerformanceMaster__isWinSpellWindowOpenOrOpening(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_o *win_Spell; // x0

  win_Spell = (BattleWindowComponent_o *)this->fields.win_Spell;
  if ( !win_Spell )
    sub_B0D97C(0LL);
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
  struct BattleData_o *v16; // x8
  int32_t v17; // w20
  int32_t v18; // w8
  const MethodInfo *v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct BattleData_o *v26; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v28; // x9
  struct BattleData_o *v29; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  struct BattleServantSkillIConComponent_array *skillIcon; // x20
  int size; // w24
  int max_length; // w8
  __int64 v34; // x22
  UnityEngine_Object_o *gameObject; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x21
  int v42; // w25
  __int64 v43; // x26
  char v44; // w28
  UILabel_o *skillIconPrefab; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Component_o *v47; // x22
  UnityEngine_Transform_o *v48; // x23
  int v49; // s0
  UnityEngine_Transform_o *v52; // x23
  int v53; // s0
  struct BattlePerformance_o *v56; // x8
  struct BattleData_o *v57; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v58; // x23
  BattleSkillInfoData_o *v59; // x8
  float v60; // s11
  UISprite_o *skillIconSplit; // x23
  struct BattleServantSkillIConComponent_array *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x1
  __int64 v70; // x0
  int32_t overwriteImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215172 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo, v10);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_22225/*"skill_partition"*/, v13);
    sub_B0D8A4(&StringLiteral_18943/*"frame_master_bg_disable"*/, v14);
    byte_4215172 = 1;
  }
  overwriteImageId = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_82;
  data = (BattleData_o *)BattleData__getMasterEquipId(data, 0LL);
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_82;
  v17 = (int)data;
  data = (BattleData_o *)v16->fields.quest_ent;
  if ( !data )
    goto LABEL_82;
  if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x100000000LL, 0LL) )
  {
    data = (BattleData_o *)this->fields.userGrade;
    if ( !data )
      goto LABEL_82;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
    goto LABEL_22;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_82;
  overwriteImageId = BattleData__GetMasterIconImageId(data, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_82;
  BattleData__GetEquipAddImageId(data, &overwriteImageId, 0LL);
  v18 = overwriteImageId;
  if ( !overwriteImageId )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_82;
    overwriteImageId = BattleData__GetOverWriteMasterImageId(data, 0LL);
    if ( !overwriteImageId )
      goto LABEL_17;
    data = (BattleData_o *)this->fields.userGrade;
    if ( !data )
      goto LABEL_82;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
    v18 = overwriteImageId;
  }
  if ( v18 == -1 )
  {
LABEL_22:
    data = (BattleData_o *)this->fields.master_root;
    if ( !data )
      goto LABEL_82;
    data = (BattleData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                             (UnityEngine_GameObject_o *)data,
                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !data )
      goto LABEL_82;
    UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_18943/*"frame_master_bg_disable"*/, 0LL);
    goto LABEL_25;
  }
LABEL_17:
  data = (BattleData_o *)this->fields.face_root;
  if ( !data )
    goto LABEL_82;
  data = (BattleData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
  if ( !data )
    goto LABEL_82;
  data = (BattleData_o *)UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)data, 0LL);
  if ( !(_DWORD)data )
  {
    v26 = this->fields.data;
    if ( !v26 )
      goto LABEL_82;
    data = (BattleData_o *)MasterFaceManager__CreatePrefab_20991704(
                             this->fields.face_root,
                             1,
                             v26->fields.battleGenderType,
                             v17,
                             2,
                             0LL,
                             overwriteImageId,
                             0LL);
  }
LABEL_25:
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_82;
  v28 = perf->fields.data;
  if ( !v28 )
    goto LABEL_82;
  if ( v28->fields.masterSkillIconId >= 1 )
  {
    BattlePerformanceMaster__SetupMasterSkillBtn(this, v19);
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_82;
  }
  v29 = perf->fields.data;
  if ( !v29 )
    goto LABEL_82;
  masterSkillInfo = v29->fields.masterSkillInfo;
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
      v34 = 0LL;
      do
      {
        if ( (unsigned int)v34 >= max_length )
        {
          v70 = sub_B0D9A8(data);
          sub_B0D948(v70, 0LL);
        }
        data = (BattleData_o *)skillIcon->m_Items[v34];
        if ( !data )
          goto LABEL_82;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
        max_length = skillIcon->max_length;
      }
      while ( (int)++v34 < max_length );
    }
    this->fields.skillIcon = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.skillIcon, 0LL, v20, v21, v22, v23, v24, v25);
  }
  data = (BattleData_o *)this->fields.skillIconPrefab;
  if ( !data )
    goto LABEL_82;
  data = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !data )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
  data = (BattleData_o *)this->fields.skillIconSplit;
  if ( !data )
    goto LABEL_82;
  data = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !data )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
  data = (BattleData_o *)this->fields.skillIconPrefab;
  if ( !data )
    goto LABEL_82;
  data = (BattleData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  if ( !data )
    goto LABEL_82;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)data, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo,
                                                                                                  v39,
                                                                                                  v40);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__);
  v42 = size - 1;
  if ( size >= 1 )
  {
    v43 = 0LL;
    v44 = 0;
    while ( 1 )
    {
      data = (BattleData_o *)this->fields.win_Skill;
      if ( !data )
        goto LABEL_82;
      skillIconPrefab = (UILabel_o *)this->fields.skillIconPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = (BattleData_o *)UnityEngine_Object__Instantiate_UILabel_(
                               skillIconPrefab,
                               transform,
                               (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___);
      if ( !data )
        goto LABEL_82;
      v47 = (UnityEngine_Component_o *)data;
      v48 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
      *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Vector3__get_one(0LL);
      if ( !v48 )
        goto LABEL_82;
      UnityEngine_Transform__set_localScale(v48, *(UnityEngine_Vector3_o *)&v49, 0LL);
      v52 = UnityEngine_Component__get_transform(v47, 0LL);
      *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v52 )
        goto LABEL_82;
      UnityEngine_Transform__set_localEulerAngles(v52, *(UnityEngine_Vector3_o *)&v53, 0LL);
      v56 = this->fields.perf;
      if ( !v56 )
        goto LABEL_82;
      v57 = v56->fields.data;
      if ( !v57 )
        goto LABEL_82;
      v58 = v57->fields.masterSkillInfo;
      if ( !v58 )
        goto LABEL_82;
      if ( v58->fields._size <= (unsigned int)v43 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v59 = v58->fields._items->m_Items[v43];
      if ( !v59 )
        goto LABEL_82;
      v60 = x + (float)(this->fields.skillIconOffset * (float)v42);
      if ( v59->fields.isAdd )
      {
        if ( (v44 & 1) == 0 )
        {
          data = (BattleData_o *)this->fields.skillIconSplit;
          if ( !data )
            goto LABEL_82;
          data = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
          if ( !data )
            goto LABEL_82;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
          skillIconSplit = this->fields.skillIconSplit;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventSprite(skillIconSplit, (System_String_o *)StringLiteral_22225/*"skill_partition"*/, 0LL);
        }
        v44 = 1;
        v60 = v60 - this->fields.skillIconSplitSpace;
      }
      data = (BattleData_o *)UnityEngine_Component__get_transform(v47, 0LL);
      if ( !data )
        goto LABEL_82;
      v73.fields.x = v60;
      v73.fields.y = y;
      v73.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v73, 0LL);
      data = (BattleData_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                               v47,
                               (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___);
      if ( !v41 )
        goto LABEL_82;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v41,
        (EventMissionProgressRequest_Argument_ProgressData_o *)data,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__);
      ++v43;
      --v42;
      if ( (int)v43 >= size )
        goto LABEL_77;
    }
  }
  if ( !v41 )
    goto LABEL_82;
LABEL_77:
  v62 = (struct BattleServantSkillIConComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v41,
                                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__);
  this->fields.skillIcon = v62;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillIcon,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  data = (BattleData_o *)this->fields.skillIconPrefab;
  if ( !data
    || (data = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL)) == 0LL )
  {
LABEL_82:
    sub_B0D97C(data);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
LABEL_80:
  BattlePerformanceMaster__updateSkillIcon(this, v19);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v69);
  data = (BattleData_o *)this->fields.master_root;
  if ( !data )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
}


void __fastcall BattlePerformanceMaster__modeCom(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *fieldConf; // x20

  if ( (byte_42151B0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42151B0 = 1;
  }
  BattlePerformanceMaster__endMasterBuffEffect(this, 0LL, v2);
  master_root = this->fields.master_root;
  if ( !master_root )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(master_root, 0, 0LL);
  master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf;
  if ( !master_root )
    goto LABEL_18;
  BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 0, v5);
  BattlePerformanceMaster__procCloseSkill(this, v6);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_Spell;
  if ( !master_root )
    goto LABEL_18;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.events)(
    master_root,
    0LL,
    master_root->klass[1]._1.properties);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_Menu;
  if ( !master_root )
    goto LABEL_18;
  BattleMenuWindowComponent__Close((BattleMenuWindowComponent_o *)master_root, 0LL, 0LL);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_Retire;
  if ( !master_root )
    goto LABEL_18;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.events)(
    master_root,
    0LL,
    master_root->klass[1]._1.properties);
  master_root = (UnityEngine_GameObject_o *)this->fields.warBoard_win_EnemyConf;
  if ( !master_root )
    goto LABEL_18;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)master_root, 0LL, 0LL);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_EnemyConf;
  if ( !master_root )
    goto LABEL_18;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)master_root, 0LL, 0LL);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    master_root = (UnityEngine_GameObject_o *)this->fields.fieldConf;
    if ( !master_root )
      goto LABEL_18;
    BattleFieldConfConponent__Close((BattleFieldConfConponent_o *)master_root, 0LL, 0LL);
  }
  master_root = (UnityEngine_GameObject_o *)this->fields.itemListWindow;
  if ( !master_root )
LABEL_18:
    sub_B0D97C(master_root);
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.events)(
    master_root,
    0LL,
    master_root->klass[1]._1.properties);
}


void __fastcall BattlePerformanceMaster__modeTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_4215177 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_4215177 = 1;
  }
  BattlePerformanceMaster__endMasterBuffEffect(this, 0LL, v2);
  master_root = this->fields.master_root;
  if ( !master_root
    || (UnityEngine_GameObject__SetActive(master_root, 1, 0LL),
        (master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf) == 0LL)
    || (BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 1, v5),
        BattlePerformanceMaster__updateSkillIcon(this, v6),
        (master_root = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B0D97C(master_root);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)master_root, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickMenuButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  if ( (byte_42151BE & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3080/*"CLICK_MENU"*/, method);
    byte_42151BE = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0LL) )
    return;
  perf = (BattlePerformance_o *)this->fields.skillConfWindow;
  if ( !perf )
LABEL_10:
    sub_B0D97C(perf);
  if ( !BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)perf, 0LL) )
  {
    perf = (BattlePerformance_o *)this->fields.myFsm;
    if ( perf )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3080/*"CLICK_MENU"*/, 0LL);
      return;
    }
    goto LABEL_10;
  }
}


void __fastcall BattlePerformanceMaster__onClickSkillCancel(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_421519A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2932/*"CANCEL"*/, method);
    byte_421519A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2932/*"CANCEL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickSkillOK(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleLogic_UseSkillObject_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4215199 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_B0D8A4(&StringLiteral_9768/*"OK"*/, v5);
    byte_4215199 = 1;
  }
  v6 = (BattleLogic_UseSkillObject_o *)sub_B0D974(BattleLogic_UseSkillObject_TypeInfo, skillInfo, method);
  BattleLogic_UseSkillObject___ctor(v6, skillInfo, 0LL);
  this->fields.useSkillObject = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.useSkillObject,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9768/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickSpellButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *perf; // x0
  struct BattleData_o *data; // x8
  struct BattleData_o *v6; // x8

  if ( (byte_42151BD & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3090/*"CLICK_SPELL"*/, v3);
    byte_42151BD = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_20;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0LL) )
    return;
  perf = (BattlePerformance_o *)this->fields.skillConfWindow;
  if ( !perf )
    goto LABEL_20;
  perf = (BattlePerformance_o *)BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)perf, 0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
    return;
  data = this->fields.data;
  if ( !data )
    goto LABEL_20;
  perf = (BattlePerformance_o *)data->fields.quest_ent;
  if ( !perf )
    goto LABEL_20;
  perf = (BattlePerformance_o *)QuestEntity__HasFlag((QuestEntity_o *)perf, 0x400000000LL, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
  {
    v6 = this->fields.data;
    if ( v6 )
    {
      perf = (BattlePerformance_o *)v6->fields.quest_ent;
      if ( perf )
      {
        if ( QuestEntity__HasFlag((QuestEntity_o *)perf, 0x100000000LL, 0LL) )
          goto LABEL_14;
        perf = (BattlePerformance_o *)this->fields.myFsm;
        if ( perf )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3090/*"CLICK_SPELL"*/, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_B0D97C(perf);
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

  if ( (byte_42151B6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3106/*"CLOSE_CONF"*/, method);
    byte_42151B6 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3106/*"CLOSE_CONF"*/, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__openRetireDialog(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42151AC & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceMaster__openRetireDialog_d__134_TypeInfo, method);
    byte_42151AC = 1;
  }
  v4 = sub_B0D974(BattlePerformanceMaster__openRetireDialog_d__134_TypeInfo, method, v2);
  BattlePerformanceMaster__openRetireDialog_d__134___ctor(
    (BattlePerformanceMaster__openRetireDialog_d__134_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
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
  BattleSelectServantWindow_SelectServantCallBack_o *v17; // x22
  __int64 v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleData_o *data; // x0
  BattleSelectServantWindow_o *v26; // x21
  BattleServantData_array *FieldPlayerServantList; // x0

  if ( (byte_4215187 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_selectedSvt__, method);
    sub_B0D8A4(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo, v3);
    byte_4215187 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    sub_B0D97C(0LL);
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  p_selectSvtWindow = &this->fields.selectSvtWindow;
  this->fields.selectSvtWindow = SelectSvtWindow;
  sub_B0D840(
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
    sub_B0D97C(0LL);
  BattleSelectServantWindow__setUseClose(v13, 1, 0LL);
  v14 = *p_selectSvtWindow;
  v17 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_B0D974(
                                                               BattleSelectServantWindow_SelectServantCallBack_TypeInfo,
                                                               v15,
                                                               v16);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSvt__,
    0LL);
  if ( !v14 )
    sub_B0D97C(v18);
  v14->fields.selectCallBack = v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v14->fields.selectCallBack,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  data = this->fields.data;
  if ( !data )
    sub_B0D97C(0LL);
  v26 = this->fields.selectSvtWindow;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !v26 )
    sub_B0D97C(FieldPlayerServantList);
  BattleSelectServantWindow__SetServantData(
    v26,
    FieldPlayerServantList,
    0,
    this->fields.tmp_commandSpellId,
    this->fields.data,
    0LL);
  if ( !*p_selectSvtWindow )
    sub_B0D97C(0LL);
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
  char *data; // x0
  struct BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  struct BattleSelectMainSubServantWindow_o **p_selectMSWindow; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct BattleSelectMainSubServantWindow_o *selectMSWindow; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v37; // x21
  System_String_o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  NotificationDialog_ClickDelegate_o *v41; // x23

  if ( (byte_421519C & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_callBackSelectedMainSub__, method);
    sub_B0D8A4(&Method_BattlePerformanceMaster_endSelectSvtError__, v3);
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_2527/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/, v8);
    sub_B0D8A4(&StringLiteral_2528/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/, v9);
    byte_421519C = 1;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (char *)BattleData__getSubPlayerServantList((BattleData_o *)data, 0LL);
  if ( !data )
    goto LABEL_16;
  if ( *((_QWORD *)data + 3) )
  {
    data = (char *)this->fields.perf;
    if ( data )
    {
      SelectMainSubSvtWindow = BattlePerformance__getSelectMainSubSvtWindow((BattlePerformance_o *)data, 0LL);
      p_selectMSWindow = &this->fields.selectMSWindow;
      this->fields.selectMSWindow = SelectMainSubSvtWindow;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.selectMSWindow,
        (System_Int32_array **)SelectMainSubSvtWindow,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      selectMSWindow = this->fields.selectMSWindow;
      v22 = (BattleSelectMainSubServantWindow_SelectedCallBack_o *)sub_B0D974(
                                                                     BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo,
                                                                     v20,
                                                                     v21);
      BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        v22,
        (Il2CppObject *)this,
        Method_BattlePerformanceMaster_callBackSelectedMainSub__,
        0LL);
      if ( selectMSWindow )
      {
        selectMSWindow->fields.callBack = v22;
        sub_B0D840(
          (BattleServantConfConponent_o *)&selectMSWindow->fields.callBack,
          (System_Int32_array **)v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        data = (char *)this->fields.selectMSWindow;
        if ( data )
        {
          v35 = (System_Int32_array **)this->fields.data;
          *((_QWORD *)data + 18) = v35;
          sub_B0D840((BattleServantConfConponent_o *)(data + 144), v35, v29, v30, v31, v32, v33, v34);
          data = (char *)*p_selectMSWindow;
          if ( *p_selectMSWindow )
          {
            (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*(_QWORD *)data + 472LL))(
              data,
              0LL,
              *(_QWORD *)(*(_QWORD *)data + 480LL));
            return;
          }
        }
      }
    }
LABEL_16:
    sub_B0D97C(data);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2528/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/, 0LL);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_2527/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/, 0LL);
  v41 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, v39, v40);
  NotificationDialog_ClickDelegate___ctor(
    v41,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_endSelectSvtError__,
    0LL);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog_17019096(
    Instance,
    v37,
    v38,
    v41,
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
  struct BattleSelectServantWindow_o *skillselectSvtWindow; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  BattleSelectServantWindow_SelectServantCallBack_o *v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleSelectServantWindow_o *v25; // x20

  if ( (byte_4215198 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_selectedSkillSvt__, *(_QWORD *)&skillId);
    sub_B0D8A4(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo, v5);
    byte_4215198 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  p_skillselectSvtWindow = &this->fields.skillselectSvtWindow;
  this->fields.skillselectSvtWindow = SelectSvtWindow;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillselectSvtWindow,
    (System_Int32_array **)SelectSvtWindow,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  perf = (BattlePerformance_o *)this->fields.skillselectSvtWindow;
  if ( !perf )
    goto LABEL_10;
  BattleSelectServantWindow__setUseClose((BattleSelectServantWindow_o *)perf, 1, 0LL);
  skillselectSvtWindow = this->fields.skillselectSvtWindow;
  v18 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_B0D974(
                                                               BattleSelectServantWindow_SelectServantCallBack_TypeInfo,
                                                               v16,
                                                               v17);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSkillSvt__,
    0LL);
  if ( !skillselectSvtWindow
    || (skillselectSvtWindow->fields.selectCallBack = v18,
        sub_B0D840(
          (BattleServantConfConponent_o *)&skillselectSvtWindow->fields.selectCallBack,
          (System_Int32_array **)v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL)
    || (v25 = this->fields.skillselectSvtWindow,
        perf = (BattlePerformance_o *)BattleData__getFieldPlayerServantList((BattleData_o *)perf, 0LL),
        !v25)
    || (BattleSelectServantWindow__SetServantData(v25, (BattleServantData_array *)perf, skillId, -1, 0LL, 0LL),
        (perf = (BattlePerformance_o *)*p_skillselectSvtWindow) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(perf);
  }
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.typeMetadataHandle)(
    perf,
    0LL,
    perf->klass[1]._1.interopData);
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
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  BattleWindowComponent_EndCall_o *v12; // x21
  UnityEngine_Object_o *fieldConf; // x20

  v3 = this;
  if ( (byte_42151AE & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_compCloseALL__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v4);
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42151AE = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  BattlePerformanceMaster__proclight(v6, v3->fields.menuBtn, 0, v7);
  win_Menu = v3->fields.win_Menu;
  if ( !win_Menu )
    goto LABEL_20;
  BattleMenuWindowComponent__Close(win_Menu, 0LL, 0LL);
  win_Menu = (BattleMenuWindowComponent_o *)v3->fields.win_Retire;
  if ( !win_Menu )
    goto LABEL_20;
  ((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
    win_Menu,
    0LL,
    win_Menu->klass->vtable._13_CompClose.methodPtr);
  win_Skill = v3->fields.win_Skill;
  v12 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v10, v11);
  BattleWindowComponent_EndCall___ctor(v12, (Il2CppObject *)v3, Method_BattlePerformanceMaster_compCloseALL__, 0LL);
  if ( !win_Skill )
    goto LABEL_20;
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    v12,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
  win_Menu = (BattleMenuWindowComponent_o *)v3->fields.win_Spell;
  if ( !win_Menu )
    goto LABEL_20;
  ((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
    win_Menu,
    0LL,
    win_Menu->klass->vtable._13_CompClose.methodPtr);
  win_Menu = (BattleMenuWindowComponent_o *)v3->fields.warBoard_win_EnemyConf;
  if ( !win_Menu )
    goto LABEL_20;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)win_Menu, 0LL, 0LL);
  win_Menu = (BattleMenuWindowComponent_o *)v3->fields.win_EnemyConf;
  if ( !win_Menu )
    goto LABEL_20;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)win_Menu, 0LL, 0LL);
  fieldConf = (UnityEngine_Object_o *)v3->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    win_Menu = (BattleMenuWindowComponent_o *)v3->fields.fieldConf;
    if ( !win_Menu )
      goto LABEL_20;
    BattleFieldConfConponent__Close((BattleFieldConfConponent_o *)win_Menu, 0LL, 0LL);
  }
  win_Menu = (BattleMenuWindowComponent_o *)v3->fields.skillConfWindow;
  if ( !win_Menu
    || (((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
          win_Menu,
          0LL,
          win_Menu->klass->vtable._13_CompClose.methodPtr),
        (win_Menu = (BattleMenuWindowComponent_o *)v3->fields.boostSkillConfWindow) == 0LL)
    || (((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
          win_Menu,
          0LL,
          win_Menu->klass->vtable._13_CompClose.methodPtr),
        (win_Menu = (BattleMenuWindowComponent_o *)v3->fields.perf) == 0LL)
    || (BattlePerformance__CloseSkillSelectAddFuncConfWindow((BattlePerformance_o *)win_Menu, 0LL, 0LL),
        (win_Menu = (BattleMenuWindowComponent_o *)v3->fields.itemListWindow) == 0LL) )
  {
LABEL_20:
    sub_B0D97C(win_Menu);
  }
  ((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
    win_Menu,
    0LL,
    win_Menu->klass->vtable._13_CompClose.methodPtr);
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
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_4215191 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_CloseBoostSkillConfComp__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&SeManager_TypeInfo, v4);
    byte_4215191 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v6, v7);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseBoostSkillConfComp__,
    0LL);
  if ( !boostSkillConfWindow )
    sub_B0D97C(v9);
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))boostSkillConfWindow->klass->vtable._12_Close.method)(
    boostSkillConfWindow,
    v8,
    boostSkillConfWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseButtonCommandSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4215184 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3121/*"CLOSE_SPELL"*/, method);
    byte_4215184 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3121/*"CLOSE_SPELL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_42151B7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_compCloseEnemyConf__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_42151B7 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  data = (BattleData_o *)BattleData__IsWarBoard(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_8;
  warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  if ( !warBoard_win_EnemyConf )
    goto LABEL_10;
  if ( !warBoard_win_EnemyConf->fields.bsvtData )
  {
LABEL_8:
    warBoard_win_EnemyConf = this->fields.win_EnemyConf;
    v8 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v5, v6);
    BattleWindowComponent_EndCall___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_compCloseEnemyConf__,
      0LL);
    if ( warBoard_win_EnemyConf )
      goto LABEL_9;
LABEL_10:
    sub_B0D97C(data);
  }
  v8 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v5, v6);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseEnemyConf__,
    0LL);
LABEL_9:
  BattleServantConfConponent__Close(warBoard_win_EnemyConf, v8, 0LL);
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
  BattleWindowComponent_EndCall_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_42151A1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_compCloseMenu__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&SeManager_TypeInfo, v4);
    byte_42151A1 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  BattlePerformanceMaster__proclight(v5, this->fields.menuBtn, 0, v6);
  win_Menu = this->fields.win_Menu;
  v10 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v8, v9);
  BattleWindowComponent_EndCall___ctor(v10, (Il2CppObject *)this, Method_BattlePerformanceMaster_compCloseMenu__, 0LL);
  if ( !win_Menu )
    sub_B0D97C(v11);
  BattleMenuWindowComponent__Close(win_Menu, v10, 0LL);
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
    sub_B0D97C(0LL);
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
  BattleWindowComponent_EndCall_o *v8; // x21
  BattlePerformance_o *perf; // x0

  if ( (byte_421518C & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_CloseSkillConfComp__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&SeManager_TypeInfo, v4);
    byte_421518C = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v6, v7);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseSkillConfComp__,
    0LL);
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))skillConfWindow->klass->vtable._12_Close.method)(
          skillConfWindow,
          v8,
          skillConfWindow->klass->vtable._13_CompClose.methodPtr),
        (perf = this->fields.perf) == 0LL) )
  {
    sub_B0D97C(perf);
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
  BattleWindowComponent_EndCall_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_421517A & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_compCloseSkillWindow__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&SeManager_TypeInfo, v4);
    byte_421517A = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  BattlePerformanceMaster__proclight(v5, this->fields.skillBtn, 0, v6);
  win_Skill = this->fields.win_Skill;
  v10 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v8, v9);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSkillWindow__,
    0LL);
  if ( !win_Skill )
    sub_B0D97C(v11);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    v10,
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
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_4215182 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_compCloseSpellWindow__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&SeManager_TypeInfo, v4);
    byte_4215182 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  win_Spell = this->fields.win_Spell;
  v8 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v6, v7);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSpellWindow__,
    0LL);
  if ( !win_Spell )
    sub_B0D97C(v9);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Spell->klass->vtable._12_Close.method)(
    win_Spell,
    v8,
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
  struct BattleSkillConfComponent_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  BattleWindowComponent_EndCall_o *v16; // x21

  if ( (byte_421518F & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_421518F = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !boostSkillConfWindow
    || (boostSkillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_B0D840(
          (BattleServantConfConponent_o *)&boostSkillConfWindow->fields.target,
          gameObject,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        !tmp_useSkill)
    || (gameObject = (System_Int32_array **)this->fields.boostSkillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(
          (BattleSkillConfComponent_o *)gameObject,
          tmp_useSkill->fields.skillInfo,
          1,
          0,
          0LL),
        v13 = this->fields.boostSkillConfWindow,
        v16 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v14, v15),
        BattleWindowComponent_EndCall___ctor(
          v16,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__,
          0LL),
        !v13) )
  {
    sub_B0D97C(gameObject);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v13->klass->vtable._10_Open.method)(
    v13,
    v16,
    v13->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattlePerformance_o *perf; // x0
  BattleServantData_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_42151B4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_compOpenEnemyConf__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_12376/*"START_CLOSE"*/, v4);
    byte_42151B4 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12376/*"START_CLOSE"*/, 0LL);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_16;
  perf = (BattlePerformance_o *)BattleData__getEnemyServantDataIndex((BattleData_o *)perf, this->fields.tmp_index, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v6 = (BattleServantData_o *)perf;
  perf = (BattlePerformance_o *)BattleData__IsWarBoard(this->fields.data, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
    goto LABEL_12;
  if ( !v6 )
    goto LABEL_16;
  if ( BattleServantData__IsEquip(v6, 0LL) )
  {
    perf = (BattlePerformance_o *)this->fields.warBoard_win_EnemyConf;
    if ( !perf )
      goto LABEL_16;
    BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)perf, v6, 1, 0LL, 0, 0LL);
    warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  }
  else
  {
LABEL_12:
    perf = (BattlePerformance_o *)this->fields.win_EnemyConf;
    if ( !perf )
      goto LABEL_16;
    BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)perf, v6, 1, 0LL, 0, 0LL);
    warBoard_win_EnemyConf = this->fields.win_EnemyConf;
  }
  v10 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v7, v8);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenEnemyConf__,
    0LL);
  if ( !warBoard_win_EnemyConf )
LABEL_16:
    sub_B0D97C(perf);
  BattleServantConfConponent__Open(warBoard_win_EnemyConf, v10, 0LL);
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
  BattleItemListWindowComponent_o *itemListWindow; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  BattleWindowComponent_EndCall_o *v13; // x21

  v3 = this;
  if ( (byte_42151C3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_compOpenItemListWindow__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_B0D8A4(&SeManager_TypeInfo, v5);
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_12376/*"START_CLOSE"*/, v6);
    byte_42151C3 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  BattlePerformanceMaster__proclight(v7, v3->fields.menuBtn, 0, v8);
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_11;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)v3->fields.otherFsm;
  if ( !perf )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12376/*"START_CLOSE"*/, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  perf = (BattlePerformance_o *)v3->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
          perf,
          0LL,
          perf->klass[1]._1.properties),
        itemListWindow = v3->fields.itemListWindow,
        v13 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v11, v12),
        BattleWindowComponent_EndCall___ctor(
          v13,
          (Il2CppObject *)v3,
          Method_BattlePerformanceMaster_compOpenItemListWindow__,
          0LL),
        !itemListWindow) )
  {
LABEL_11:
    sub_B0D97C(perf);
  }
  BattleItemListWindowComponent__Open(itemListWindow, 0, v13, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *perf; // x0

  if ( (byte_421517C & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_12376/*"START_CLOSE"*/, v3);
    byte_421517C = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12376/*"START_CLOSE"*/, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlaySystemSe(7, 0LL);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf )
LABEL_10:
    sub_B0D97C(perf);
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.typeMetadataHandle)(
    perf,
    0LL,
    perf->klass[1]._1.interopData);
}


void __fastcall BattlePerformanceMaster__procOpenMenuWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  BattlePerformanceMaster_o *v7; // x0
  const MethodInfo *v8; // x3
  BattlePerformanceMaster_o *v9; // x0
  const MethodInfo *v10; // x3
  BattleMenuWindowComponent_o *win_Menu; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  BattleWindowComponent_EndCall_o *v14; // x21

  if ( (byte_421519F & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_compOpenMenu__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&SeManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_12376/*"START_CLOSE"*/, v5);
    byte_421519F = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12376/*"START_CLOSE"*/, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__proclight(v7, this->fields.skillBtn, 0, v8);
  BattlePerformanceMaster__proclight(v9, this->fields.menuBtn, 1, v10);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
          perf,
          0LL,
          perf->klass[1]._1.properties),
        win_Menu = this->fields.win_Menu,
        v14 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v12, v13),
        BattleWindowComponent_EndCall___ctor(
          v14,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenMenu__,
          0LL),
        !win_Menu) )
  {
LABEL_11:
    sub_B0D97C(perf);
  }
  BattleMenuWindowComponent__Open(win_Menu, v14, 0LL);
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
  struct BattleSkillConfComponent_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  BattleWindowComponent_EndCall_o *v16; // x21

  if ( (byte_421518A & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_OpenSkillConfComplete__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_421518A = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  skillConfWindow = this->fields.skillConfWindow;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_B0D840(
          (BattleServantConfConponent_o *)&skillConfWindow->fields.target,
          gameObject,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        !tmp_useSkill)
    || (gameObject = (System_Int32_array **)this->fields.skillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(
          (BattleSkillConfComponent_o *)gameObject,
          tmp_useSkill->fields.skillInfo,
          1,
          0,
          0LL),
        v13 = this->fields.skillConfWindow,
        v16 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v14, v15),
        BattleWindowComponent_EndCall___ctor(
          v16,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenSkillConfComplete__,
          0LL),
        !v13) )
  {
    sub_B0D97C(gameObject);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v13->klass->vtable._10_Open.method)(
    v13,
    v16,
    v13->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  BattlePerformanceMaster_o *v7; // x0
  const MethodInfo *v8; // x3
  BattlePerformanceMaster_o *v9; // x0
  const MethodInfo *v10; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  BattleWindowComponent_EndCall_o *v14; // x21

  if ( (byte_4215178 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_compOpenSkillWindow__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&SeManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_12376/*"START_CLOSE"*/, v5);
    byte_4215178 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12376/*"START_CLOSE"*/, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__proclight(v7, this->fields.skillBtn, 1, v8);
  BattlePerformanceMaster__proclight(v9, this->fields.menuBtn, 0, v10);
  win_Skill = this->fields.win_Skill;
  v14 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v12, v13);
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenSkillWindow__,
    0LL);
  if ( !win_Skill )
LABEL_10:
    sub_B0D97C(perf);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._10_Open.method)(
    win_Skill,
    v14,
    win_Skill->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  BattlePerformanceMaster_o *v7; // x0
  const MethodInfo *v8; // x3
  BattlePerformanceMaster_o *v9; // x0
  const MethodInfo *v10; // x3
  struct BattleData_o *data; // x8
  struct CommandSpellWindowComponent_o *win_Spell; // x9
  struct CommandSpellWindowComponent_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  struct CommandSpellWindowComponent_o *v16; // x20
  BattleWindowComponent_EndCall_o *v17; // x21

  if ( (byte_4215180 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_compOpenSpellWindow__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&SeManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_12376/*"START_CLOSE"*/, v5);
    byte_4215180 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_15;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12376/*"START_CLOSE"*/, 0LL);
  BattlePerformanceMaster__proclight(v7, this->fields.skillBtn, 0, v8);
  BattlePerformanceMaster__proclight(v9, this->fields.menuBtn, 0, v10);
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  win_Spell = this->fields.win_Spell;
  if ( !win_Spell )
    goto LABEL_15;
  win_Spell->fields.temporarySpell = data->fields.temporarySpell;
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_15;
  v13 = this->fields.win_Spell;
  perf = (BattlePerformance_o *)BattleData__IsUseTemporaryCommandSpell((BattleData_o *)perf, 0LL);
  if ( !v13
    || (v13->fields.isUseTemporarySpell = (unsigned __int8)perf & 1,
        v16 = this->fields.win_Spell,
        v17 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v14, v15),
        BattleWindowComponent_EndCall___ctor(
          v17,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenSpellWindow__,
          0LL),
        !v16)
    || (((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v16->klass->vtable._10_Open.method)(
          v16,
          v17,
          v16->klass->vtable._11_CompOpen.methodPtr),
        (perf = (BattlePerformance_o *)this->fields.win_Skill) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(perf);
  }
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
    perf,
    0LL,
    perf->klass[1]._1.properties);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__procUseCommandSpell(
        BattlePerformanceMaster_o *this,
        int32_t commandSpellId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4215185 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3100/*"CLICK_USESPELL"*/, *(_QWORD *)&commandSpellId);
    byte_4215185 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandSpellId = commandSpellId;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3100/*"CLICK_USESPELL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__proclight(
        BattlePerformanceMaster_o *this,
        UnityEngine_GameObject_o *obj,
        bool flg,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42151B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, obj);
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_42151B1 = 1;
  }
  if ( !obj )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      obj,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattlePerformanceMaster_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, flg, 0LL);
      return;
    }
LABEL_11:
    sub_B0D97C(this);
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

  if ( (byte_42151AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    sub_B0D8A4(&StringLiteral_9768/*"OK"*/, v4);
    byte_42151AD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.logic) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9768/*"OK"*/, 0LL);
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
  void *skillselectSvtWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x22
  SkillEntity_o *v19; // x22
  CommonUI_o *Instance; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *v23; // x21
  BattlePerformanceMaster___c_c *v24; // x8
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x9
  System_Action_o *_9__116_0; // x23
  System_String_o *v27; // x22
  Il2CppObject *v28; // x24
  struct BattlePerformanceMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_421519B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&Method_BattlePerformanceMaster___c__selectedSkillSvt_b__116_0__, v10);
    sub_B0D8A4(&BattlePerformanceMaster___c_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    sub_B0D8A4(&StringLiteral_2458/*"BATTLE_INVALID_SELECT_TARGET"*/, v14);
    byte_421519B = 1;
  }
  skillselectSvtWindow = this->fields.skillselectSvtWindow;
  if ( !skillselectSvtWindow )
    goto LABEL_31;
  skillselectSvtWindow = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)skillselectSvtWindow
                                                                                   + 504LL))(
                                   skillselectSvtWindow,
                                   0LL,
                                   *(_QWORD *)(*(_QWORD *)skillselectSvtWindow + 512LL));
  if ( uniqueId != -1 )
  {
    actSkillObject = this->fields.actSkillObject;
    if ( !actSkillObject )
      goto LABEL_31;
    skillInfo = actSkillObject->fields.skillInfo;
    skillselectSvtWindow = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillselectSvtWindow )
      goto LABEL_31;
    skillselectSvtWindow = DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)skillselectSvtWindow,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !skillInfo )
      goto LABEL_31;
    v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillselectSvtWindow;
    skillselectSvtWindow = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                     skillInfo,
                                     skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v18 )
      goto LABEL_31;
    skillselectSvtWindow = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v18,
                             (int32_t)skillselectSvtWindow,
                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_31;
    v19 = (SkillEntity_o *)skillselectSvtWindow;
    skillselectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !skillselectSvtWindow || !v19 )
      goto LABEL_31;
    if ( SkillEntity__checkUseTreasure(v19, *((_DWORD *)skillselectSvtWindow + 77), 0LL) )
    {
      skillselectSvtWindow = this->fields.myFsm;
      if ( skillselectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)skillselectSvtWindow, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
        skillselectSvtWindow = this->fields.logic;
        if ( skillselectSvtWindow )
        {
          BattleLogic__wantUseSkill((BattleLogic_o *)skillselectSvtWindow, skillInfo, uniqueId, 4, 0LL);
          return;
        }
      }
LABEL_31:
      sub_B0D97C(skillselectSvtWindow);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    skillselectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2458/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v23 = (System_String_o *)skillselectSvtWindow;
    v24 = BattlePerformanceMaster___c_TypeInfo;
    if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v24 = BattlePerformanceMaster___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__116_0 = static_fields->__9__116_0;
    v27 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__116_0 )
    {
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__116_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
      System_Action___ctor(_9__116_0, v28, Method_BattlePerformanceMaster___c__selectedSkillSvt_b__116_0__, 0LL);
      v29 = BattlePerformanceMaster___c_TypeInfo->static_fields;
      v29->__9__116_0 = _9__116_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v29->__9__116_0,
        (System_Int32_array **)_9__116_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    if ( !Instance )
      goto LABEL_31;
    CommonUI__OpenNotificationDialog(Instance, v27, v23, _9__116_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
  }
  skillselectSvtWindow = this->fields.perf;
  if ( !skillselectSvtWindow )
    goto LABEL_31;
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows(
    (BattlePerformance_o *)skillselectSvtWindow,
    this->fields.myFsm,
    0LL);
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
  void *selectSvtWindow; // x0
  CommandSpellEntity_o *v17; // x21
  CommonUI_o *Instance; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *v21; // x21
  BattlePerformanceMaster___c_c *v22; // x8
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x9
  System_Action_o *_9__92_0; // x23
  System_String_o *v25; // x22
  Il2CppObject *v26; // x24
  struct BattlePerformanceMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4215188 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&Method_BattlePerformanceMaster___c__selectedSvt_b__92_0__, v10);
    sub_B0D8A4(&BattlePerformanceMaster___c_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_2932/*"CANCEL"*/, v12);
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    sub_B0D8A4(&StringLiteral_2458/*"BATTLE_INVALID_SELECT_TARGET"*/, v15);
    byte_4215188 = 1;
  }
  selectSvtWindow = this->fields.selectSvtWindow;
  if ( !selectSvtWindow )
    goto LABEL_30;
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)selectSvtWindow + 504LL))(
    selectSvtWindow,
    0LL,
    *(_QWORD *)(*(_QWORD *)selectSvtWindow + 512LL));
  selectSvtWindow = this->fields.perf;
  if ( !selectSvtWindow )
    goto LABEL_30;
  BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)selectSvtWindow, 0LL);
  if ( uniqueId != -1 )
  {
    selectSvtWindow = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !selectSvtWindow )
      goto LABEL_30;
    selectSvtWindow = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)selectSvtWindow,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !selectSvtWindow )
      goto LABEL_30;
    selectSvtWindow = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)selectSvtWindow,
                        this->fields.tmp_commandSpellId,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_30;
    v17 = (CommandSpellEntity_o *)selectSvtWindow;
    selectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !selectSvtWindow || !v17 )
      goto LABEL_30;
    if ( CommandSpellEntity__checkUseTreasure(v17, *((_DWORD *)selectSvtWindow + 77), 0LL) )
    {
      selectSvtWindow = this->fields.myFsm;
      if ( selectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
        selectSvtWindow = this->fields.logic;
        if ( selectSvtWindow )
        {
          BattleLogic__useCommandSpell((BattleLogic_o *)selectSvtWindow, this->fields.tmp_commandSpellId, uniqueId, 0LL);
          return;
        }
      }
LABEL_30:
      sub_B0D97C(selectSvtWindow);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    selectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2458/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v21 = (System_String_o *)selectSvtWindow;
    v22 = BattlePerformanceMaster___c_TypeInfo;
    if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v22 = BattlePerformanceMaster___c_TypeInfo;
    }
    static_fields = v22->static_fields;
    _9__92_0 = static_fields->__9__92_0;
    v25 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__92_0 )
    {
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__92_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
      System_Action___ctor(_9__92_0, v26, Method_BattlePerformanceMaster___c__selectedSvt_b__92_0__, 0LL);
      v27 = BattlePerformanceMaster___c_TypeInfo->static_fields;
      v27->__9__92_0 = _9__92_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v27->__9__92_0,
        (System_Int32_array **)_9__92_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    if ( !Instance )
      goto LABEL_30;
    CommonUI__OpenNotificationDialog(Instance, v25, v21, _9__92_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
  }
  selectSvtWindow = this->fields.myFsm;
  if ( !selectSvtWindow )
    goto LABEL_30;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_2932/*"CANCEL"*/, 0LL);
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
  sub_B0D840(
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
  sub_B0D840(
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

  if ( (byte_42151B3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8464/*"LONGPRESS_ENEMY"*/, *(_QWORD *)&index);
    byte_42151B3 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_index = index;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_8464/*"LONGPRESS_ENEMY"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__showRetireDialog(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleLogic_o *logic; // x0
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_42151AB & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_42151AB = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_16;
  BattleLogic__playRetire(logic, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  logic = (BattleLogic_o *)this->fields.win_Menu;
  if ( !logic )
    goto LABEL_16;
  BattleMenuWindowComponent__Close((BattleMenuWindowComponent_o *)logic, 0LL, 0LL);
  logic = (BattleLogic_o *)this->fields.win_Retire;
  if ( !logic )
    goto LABEL_16;
  ((void (__fastcall *)(BattleLogic_o *, _QWORD, void *))logic->klass[1]._1.events)(
    logic,
    0LL,
    logic->klass[1]._1.properties);
  logic = (BattleLogic_o *)this->fields.data;
  if ( !logic )
    goto LABEL_16;
  if ( BattleData__isBattleRetreatQuestClear((BattleData_o *)logic, 0LL) )
    return;
  logic = (BattleLogic_o *)this->fields.perf;
  if ( !logic )
LABEL_16:
    sub_B0D97C(logic);
  BattlePerformance__effectFadeOut((BattlePerformance_o *)logic, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(3, 0LL);
  v6 = BattlePerformanceMaster__openRetireDialog(this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall BattlePerformanceMaster__startCommand(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42151AF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12377/*"START_COM"*/, method);
    byte_42151AF = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12377/*"START_COM"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__startMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
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
  __int64 v22; // x20
  UnityEngine_GameObject_o *master_root; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *masterBuffPopLabelEffect; // x23
  struct UnityEngine_GameObject_o **p_masterBuffPopLabelEffect; // x22
  UnityEngine_Object_o *v33; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x23
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_Transform_o *v51; // x23
  BattleUIRangeLabel_o *v52; // x23
  BattleServantBuffIconComponent_o *v53; // x23
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x23
  UnityEngine_Camera_o *uicamera; // x24
  TrackingMoveCtCComponent_o *v57; // x22
  int v58; // s0
  UnityEngine_Object_o *masterBuffEffect; // x23
  struct UnityEngine_GameObject_o **p_masterBuffEffect; // x22
  UnityEngine_Object_o *v63; // x23
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UnityEngine_GameObject_o *v70; // x23
  UnityEngine_Transform_o *v71; // x0
  struct UnityEngine_GameObject_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  UnityEngine_Object_o *v79; // x23
  UnityEngine_Transform_o *v80; // x23
  struct System_Int32_array *masterBuffEffectList; // x8
  struct System_Int32_array *v82; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v83; // x22
  unsigned __int64 v84; // x26
  unsigned __int64 max_length; // x9
  UnityEngine_GameObject_o *v86; // x23
  System_String_o *monitor; // x23
  srcLineSprite_o *v88; // x22
  struct TweenAlpha_o *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  __int64 v96; // x1
  __int64 v97; // x2
  struct TweenAlpha_o *effectTween; // x8
  UITweener_o *v99; // x19
  EventDelegate_Callback_o *v100; // x21
  __int64 v101; // x0
  int32_t masterBuffPopLabelColor; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42151BF & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EffectMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v10);
    sub_B0D8A4(&int_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_GameObject___, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&SoundManager_TypeInfo, v15);
    sub_B0D8A4(&Method_BattlePerformanceMaster___c__DisplayClass159_0__startMasterBuffEffect_b__0__, v16);
    sub_B0D8A4(&BattlePerformanceMaster___c__DisplayClass159_0_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_18308/*"effect/ef_masterskill_buff"*/, v18);
    sub_B0D8A4(&StringLiteral_18313/*"effect/ef_poplabel{0:00}"*/, v19);
    sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    sub_B0D8A4(&StringLiteral_2763/*"Battle"*/, v21);
    byte_42151BF = 1;
  }
  v22 = sub_B0D974(BattlePerformanceMaster___c__DisplayClass159_0_TypeInfo, method, v2);
  BattlePerformanceMaster___c__DisplayClass159_0___ctor((BattlePerformanceMaster___c__DisplayClass159_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_67;
  *(_QWORD *)(v22 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  master_root = this->fields.master_root;
  if ( !master_root )
    goto LABEL_67;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      master_root,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
      v33 = (UnityEngine_Object_o *)*p_masterBuffPopLabelEffect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v33, 0LL);
      *p_masterBuffPopLabelEffect = 0LL;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.masterBuffPopLabelEffect,
        0LL,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    masterBuffPopLabelColor = this->fields.masterBuffPopLabelColor;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &masterBuffPopLabelColor);
    v41 = System_String__Format((System_String_o *)StringLiteral_18313/*"effect/ef_poplabel{0:00}"*/, v40, 0LL);
    master_root = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                v41,
                                                (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( this->fields.masterBtn )
    {
      v42 = master_root;
      transform = UnityEngine_GameObject__get_transform(this->fields.masterBtn, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v42, transform, 0LL, 0LL);
      this->fields.masterBuffPopLabelEffect = Object;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.masterBuffPopLabelEffect,
        (System_Int32_array **)Object,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      master_root = this->fields.masterBuffPopLabelEffect;
      if ( master_root )
      {
        master_root = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(master_root, 0LL);
        if ( master_root )
        {
          v103.fields.y = -42.0;
          v103.fields.x = 0.0;
          v103.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)master_root, v103, 0LL);
          master_root = *p_masterBuffPopLabelEffect;
          if ( *p_masterBuffPopLabelEffect )
          {
            master_root = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(master_root, 0LL);
            if ( this->fields.master_root )
            {
              v51 = (UnityEngine_Transform_o *)master_root;
              master_root = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                          this->fields.master_root,
                                                          0LL);
              if ( master_root )
              {
                master_root = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                            (UnityEngine_Transform_o *)master_root,
                                                            0LL);
                if ( v51 )
                {
                  UnityEngine_Transform__set_parent(v51, (UnityEngine_Transform_o *)master_root, 0LL);
                  master_root = *p_masterBuffPopLabelEffect;
                  if ( *p_masterBuffPopLabelEffect )
                  {
                    master_root = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                master_root,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
                    if ( master_root )
                    {
                      v52 = (BattleUIRangeLabel_o *)master_root;
                      BattleUIRangeLabel__ParentHasChanged((BattleUIRangeLabel_o *)master_root, 0LL);
                      BattleUIRangeLabel__SetAdjustLabelOffset(
                        v52,
                        this->fields.masterBuffPopLabel,
                        (System_String_o *)StringLiteral_1/*""*/,
                        1,
                        0LL,
                        0,
                        0,
                        0,
                        0LL);
                      BattleUIRangeLabel__AddLabelDepth(v52, 20, 0LL);
                      master_root = this->fields.masterBuffPopLabelEffect;
                      if ( master_root )
                      {
                        master_root = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentInChildren_SimpleAnimation_(
                                                                    master_root,
                                                                    1,
                                                                    (const MethodInfo_1B62C78 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
                        if ( master_root )
                        {
                          v53 = (BattleServantBuffIconComponent_o *)master_root;
                          BattleServantBuffIconComponent__ParentHasChanged(
                            (BattleServantBuffIconComponent_o *)master_root,
                            0LL);
                          BattleServantBuffIconComponent__setImageId(v53, 0, 0LL);
                          master_root = *p_masterBuffPopLabelEffect;
                          if ( *p_masterBuffPopLabelEffect )
                          {
                            master_root = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        master_root,
                                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
                            perf = this->fields.perf;
                            if ( perf )
                            {
                              actorcamera = perf->fields.actorcamera;
                              uicamera = perf->fields.uicamera;
                              v57 = (TrackingMoveCtCComponent_o *)master_root;
                              *(UnityEngine_Vector3_o *)&v58 = UnityEngine_Vector3__get_zero(0LL);
                              if ( v57 )
                              {
                                TrackingMoveCtCComponent__Set(
                                  v57,
                                  actorcamera,
                                  uicamera,
                                  0LL,
                                  *(UnityEngine_Vector3_o *)&v58,
                                  0,
                                  0LL);
                                TrackingMoveCtCComponent__startAct(v57, 0LL);
                                master_root = this->fields.skillBtn;
                                if ( master_root )
                                {
                                  UnityEngine_GameObject__SetActive(master_root, 0, 0LL);
                                  master_root = this->fields.menuBtn;
                                  if ( master_root )
                                  {
                                    UnityEngine_GameObject__SetActive(master_root, 0, 0LL);
                                    master_root = this->fields.spellBtn;
                                    if ( master_root )
                                    {
                                      UnityEngine_GameObject__SetActive(master_root, 0, 0LL);
                                      masterBuffEffect = (UnityEngine_Object_o *)this->fields.masterBuffEffect;
                                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      }
                                      p_masterBuffEffect = &this->fields.masterBuffEffect;
                                      if ( UnityEngine_Object__op_Inequality(masterBuffEffect, 0LL, 0LL) )
                                      {
                                        v63 = (UnityEngine_Object_o *)*p_masterBuffEffect;
                                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                        }
                                        UnityEngine_Object__Destroy_34935276(v63, 0LL);
                                        *p_masterBuffEffect = 0LL;
                                        sub_B0D840(
                                          (BattleServantConfConponent_o *)&this->fields.masterBuffEffect,
                                          0LL,
                                          v64,
                                          v65,
                                          v66,
                                          v67,
                                          v68,
                                          v69);
                                      }
                                      master_root = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                                                  (System_String_o *)StringLiteral_18308/*"effect/ef_masterskill_buff"*/,
                                                                                  (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_GameObject___);
                                      if ( this->fields.masterBtn )
                                      {
                                        v70 = master_root;
                                        v71 = UnityEngine_GameObject__get_transform(this->fields.masterBtn, 0LL);
                                        v72 = BaseMonoBehaviour__createObject(
                                                (BaseMonoBehaviour_o *)this,
                                                v70,
                                                v71,
                                                0LL,
                                                0LL);
                                        this->fields.masterBuffEffect = v72;
                                        sub_B0D840(
                                          (BattleServantConfConponent_o *)&this->fields.masterBuffEffect,
                                          (System_Int32_array **)v72,
                                          v73,
                                          v74,
                                          v75,
                                          v76,
                                          v77,
                                          v78);
                                        *(_DWORD *)(v22 + 24) = 0;
                                        v79 = (UnityEngine_Object_o *)this->fields.masterBuffEffect;
                                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                        }
                                        master_root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                                    v79,
                                                                                    0LL,
                                                                                    0LL);
                                        if ( ((unsigned __int8)master_root & 1) != 0 )
                                        {
                                          master_root = *p_masterBuffEffect;
                                          if ( !*p_masterBuffEffect )
                                            goto LABEL_67;
                                          master_root = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                      master_root,
                                                                                      0LL);
                                          if ( !this->fields.master_root )
                                            goto LABEL_67;
                                          v80 = (UnityEngine_Transform_o *)master_root;
                                          master_root = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                                      this->fields.master_root,
                                                                                      0LL);
                                          if ( !master_root )
                                            goto LABEL_67;
                                          master_root = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                                                      (UnityEngine_Transform_o *)master_root,
                                                                                      0LL);
                                          if ( !v80 )
                                            goto LABEL_67;
                                          UnityEngine_Transform__set_parent(
                                            v80,
                                            (UnityEngine_Transform_o *)master_root,
                                            0LL);
                                          master_root = *p_masterBuffEffect;
                                          if ( !*p_masterBuffEffect )
                                            goto LABEL_67;
                                          UnityEngine_GameObject__SetActive(master_root, 1, 0LL);
                                          masterBuffEffectList = this->fields.masterBuffEffectList;
                                          if ( masterBuffEffectList && *(_QWORD *)&masterBuffEffectList->max_length )
                                          {
                                            master_root = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                            if ( !master_root )
                                              goto LABEL_67;
                                            master_root = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)master_root,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EffectMaster___);
                                            v82 = this->fields.masterBuffEffectList;
                                            if ( !v82 )
                                              goto LABEL_67;
                                            v83 = (DataMasterBase_WarMaster__WarEntity__int__o *)master_root;
                                            v84 = 0LL;
                                            while ( 1 )
                                            {
                                              max_length = v82->max_length;
                                              if ( (__int64)v84 >= (int)max_length )
                                                break;
                                              if ( v84 >= max_length )
                                              {
                                                v101 = sub_B0D9A8(master_root);
                                                sub_B0D948(v101, 0LL);
                                              }
                                              if ( v83 )
                                              {
                                                master_root = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                            v83,
                                                                                            v82->m_Items[v84 + 1],
                                                                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
                                                if ( master_root )
                                                {
                                                  v86 = master_root;
                                                  master_root = (UnityEngine_GameObject_o *)EffectEntity__isSe(
                                                                                              (EffectEntity_o *)master_root,
                                                                                              0LL);
                                                  if ( ((unsigned __int8)master_root & 1) != 0 )
                                                  {
                                                    monitor = (System_String_o *)v86[1].monitor;
                                                    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                      && !SoundManager_TypeInfo->_2.cctor_finished )
                                                    {
                                                      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                                                    }
                                                    master_root = (UnityEngine_GameObject_o *)SoundManager__playSe_24977004(
                                                                                                (System_String_o *)StringLiteral_2763/*"Battle"*/,
                                                                                                monitor,
                                                                                                0LL);
                                                  }
                                                }
                                                v82 = this->fields.masterBuffEffectList;
                                                ++v84;
                                                if ( v82 )
                                                  continue;
                                              }
                                              goto LABEL_67;
                                            }
                                          }
                                          master_root = this->fields.masterBuffEffect;
                                          this->fields.isMasterBuffEffectPlaying = 1;
                                          if ( !master_root )
                                            goto LABEL_67;
                                          v88 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  master_root,
                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
                                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                          }
                                          master_root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                                      (UnityEngine_Object_o *)v88,
                                                                                      0LL,
                                                                                      0LL);
                                          if ( ((unsigned __int8)master_root & 1) != 0 )
                                          {
                                            if ( !v88 )
                                              goto LABEL_67;
                                            *(_DWORD *)(v22 + 24) = v88->fields.mFSM;
                                          }
                                        }
                                        if ( Component_srcLineSprite )
                                        {
                                          ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
                                            Component_srcLineSprite,
                                            Component_srcLineSprite->klass[1]._1.declaringType,
                                            0.01);
                                          master_root = this->fields.master_root;
                                          if ( master_root )
                                          {
                                            UnityEngine_GameObject__SetActive(master_root, 1, 0LL);
                                            v89 = TweenAlpha__Begin(this->fields.master_root, 0.25, 1.0, 0LL);
                                            this->fields.effectTween = v89;
                                            sub_B0D840(
                                              (BattleServantConfConponent_o *)&this->fields.effectTween,
                                              (System_Int32_array **)v89,
                                              v90,
                                              v91,
                                              v92,
                                              v93,
                                              v94,
                                              v95);
                                            effectTween = this->fields.effectTween;
                                            if ( effectTween )
                                            {
                                              effectTween->fields.style = 6;
                                              v99 = (UITweener_o *)this->fields.effectTween;
                                              v100 = (EventDelegate_Callback_o *)sub_B0D974(
                                                                                   EventDelegate_Callback_TypeInfo,
                                                                                   v96,
                                                                                   v97);
                                              EventDelegate_Callback___ctor(
                                                v100,
                                                (Il2CppObject *)v22,
                                                Method_BattlePerformanceMaster___c__DisplayClass159_0__startMasterBuffEffect_b__0__,
                                                0LL);
                                              if ( v99 )
                                              {
                                                UITweener__SetOnFinished(v99, v100, 0LL);
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
    sub_B0D97C(master_root);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__startSkill(
        BattlePerformanceMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  PlayMakerFSM_o *win_Spell; // x0

  if ( (byte_42151A9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12396/*"START_SKILL"*/, *(_QWORD *)&type);
    byte_42151A9 = 1;
  }
  win_Spell = (PlayMakerFSM_o *)this->fields.win_Spell;
  if ( !win_Spell
    || (((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, void *))win_Spell->klass[1]._1.typeMetadataHandle)(
          win_Spell,
          0LL,
          win_Spell->klass[1]._1.interopData),
        (win_Spell = this->fields.myFsm) == 0LL) )
  {
    sub_B0D97C(win_Spell);
  }
  PlayMakerFSM__SendEvent(win_Spell, (System_String_o *)StringLiteral_12396/*"START_SKILL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__startTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4215176 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12400/*"START_TAC"*/, method);
    byte_4215176 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12400/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__updateCommandSpellIcon(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  __int64 v3; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v5; // x8

  v2 = this;
  if ( (byte_4215174 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_18938/*"frame_cs_bg_disable"*/, v3);
    byte_4215174 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_17;
  this = (BattlePerformanceMaster_o *)data->fields.quest_ent;
  if ( !this )
    goto LABEL_17;
  this = (BattlePerformanceMaster_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x400000000LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v5 = v2->fields.data;
    if ( !v5 )
      goto LABEL_17;
    this = (BattlePerformanceMaster_o *)v5->fields.quest_ent;
    if ( !this )
      goto LABEL_17;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)this, 0x100000000LL, 0LL) )
      goto LABEL_11;
  }
  this = (BattlePerformanceMaster_o *)v2->fields.data;
  if ( !this )
    goto LABEL_17;
  if ( BattleData__GetOverwriteCommandSpellIcon((BattleData_o *)this, 0LL) )
  {
LABEL_11:
    this = (BattlePerformanceMaster_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( v2->fields.commandSpellIcon )
    {
      CommandSpellIconComponent__SetDataBattle(
        v2->fields.commandSpellIcon,
        (UserGameEntity_o *)this,
        v2->fields.data,
        0LL);
      return;
    }
LABEL_17:
    sub_B0D97C(this);
  }
  this = (BattlePerformanceMaster_o *)v2->fields.spellBtn;
  if ( !this )
    goto LABEL_17;
  this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_17;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_18938/*"frame_cs_bg_disable"*/, 0LL);
  this = (BattlePerformanceMaster_o *)v2->fields.spellSpr;
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BattlePerformanceMaster__updateShortSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  __int64 v3; // x1
  struct BattleData_o *data; // x8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_42151A4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17057/*"btn_on"*/, method);
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_17056/*"btn_off"*/, v3);
    byte_42151A4 = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.skillSkipBtn) == 0LL )
    sub_B0D97C(this);
  if ( data->fields.systemflg_skipskillconf )
    v5 = &StringLiteral_17056/*"btn_off"*/;
  else
    v5 = &StringLiteral_17057/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__updateSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
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
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  struct BattleServantSkillIConComponent_array *v21; // x8
  struct BattleServantSkillIConComponent_array *v22; // x8
  BattlePerformanceMaster_o *v23; // x27
  __int64 v24; // x22
  char v25; // w21
  il2cpp_array_size_t v26; // w20
  int v27; // w25
  int v28; // w26
  struct BattleServantSkillIConComponent_array *v29; // x8
  BattleSkillInfoData_o *v30; // x23
  int v31; // w28
  bool isChargeOK; // w24
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int v39; // w26
  System_Int32_array **v40; // x25
  BattlePerformanceMaster_c **v41; // x0
  System_Int32_array **v42; // x25
  BattleBuffData_BuffData_array *v43; // x9
  Il2CppClass **v44; // x0
  struct BattleServantSkillIConComponent_array *v45; // x8
  int myFsm; // w8
  BattlePerformanceMaster_o *v47; // x22
  char v48; // w20
  unsigned int v49; // w23
  int v50; // w24
  char v51; // w25
  struct PlayMakerFSM_o *v52; // x8
  __int64 v53; // x9
  __int64 v54; // x11
  int v55; // w11
  UnityEngine_Object_o *skillBtnFlashObject; // x22
  __int64 v57; // x1
  __int64 v58; // x2
  BattlePerformanceMaster___c_c *v59; // x0
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__70_0; // x23
  System_String_o *v62; // x22
  Il2CppObject *v63; // x21
  struct BattlePerformanceMaster___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array *All_BattleBuffData_BuffData; // x0
  struct BattleData_o *data; // x8
  System_String_o *v73; // x21
  BattlePerformanceMaster_o *v74; // x22
  System_String_o *v75; // x1
  System_String_o *v76; // x22
  Il2CppObject *v77; // x0
  BattlePerformanceMaster_o *v78; // x22
  System_String_o *v79; // x1
  float v80; // s8
  __int64 v81; // x1
  __int64 v82; // x2
  BattlePerformanceMaster___c_c *v83; // x0
  UILabel_o *addSkillAddChargeTimeLabel; // x22
  struct BattlePerformanceMaster___c_StaticFields *v85; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__70_1; // x24
  System_String_o *v87; // x23
  Il2CppObject *v88; // x25
  struct BattlePerformanceMaster___c_StaticFields *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array *v96; // x0
  UILabel_o *addSkillAddChargeTimeSplitLabel; // x20
  UnityEngine_Transform_o *v98; // x20
  unsigned int localPosition; // s0
  unsigned int v100; // s9
  int v101; // s2
  unsigned int v102; // s0
  float v103; // s1
  struct BattleData_o *v104; // x8
  struct BattleData_o *v105; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x1
  __int64 v114; // x0
  __int64 v115; // x0
  BattleBuffData_BuffData_array *array; // [xsp+0h] [xbp-80h]
  BattleBuffData_BuffData_array *v117; // [xsp+8h] [xbp-78h]
  int v118; // [xsp+14h] [xbp-6Ch]
  int v119; // [xsp+18h] [xbp-68h] BYREF
  int v120; // [xsp+1Ch] [xbp-64h] BYREF

  v2 = this;
  if ( (byte_4215175 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindAll_string___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___, v3);
    sub_B0D8A4(&int_TypeInfo, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Predicate_string___ctor__, v7);
    sub_B0D8A4(&System_Predicate_string__TypeInfo, v8);
    sub_B0D8A4(&string___TypeInfo, v9);
    sub_B0D8A4(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__70_0__, v10);
    sub_B0D8A4(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__70_1__, v11);
    sub_B0D8A4(&BattlePerformanceMaster___c_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v13);
    sub_B0D8A4(&StringLiteral_2465/*"BATTLE_MASTER_SKILL_CHARGE"*/, v14);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v15);
    sub_B0D8A4(&StringLiteral_17051/*"btn_master_skill_disable"*/, v16);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    sub_B0D8A4(&StringLiteral_2464/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/, v18);
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_9324/*"NG"*/, v19);
    byte_4215175 = 1;
  }
  v120 = 0;
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_148;
  this = (BattlePerformanceMaster_o *)sub_B0D8BC(string___TypeInfo, skillIcon->max_length);
  v21 = v2->fields.skillIcon;
  array = (BattleBuffData_BuffData_array *)this;
  if ( !v21 )
    goto LABEL_148;
  this = (BattlePerformanceMaster_o *)sub_B0D8BC(string___TypeInfo, v21->max_length);
  v22 = v2->fields.skillIcon;
  if ( !v22 )
    goto LABEL_148;
  v23 = this;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  v118 = 0;
  v27 = 0;
  v28 = 0;
  v117 = (BattleBuffData_BuffData_array *)this;
  while ( 1 )
  {
    this = (BattlePerformanceMaster_o *)v2->fields.data;
    if ( !this )
      goto LABEL_148;
    if ( (int)v24 >= (signed int)v22->max_length )
      break;
    this = (BattlePerformanceMaster_o *)BattleData__getMasterSkillInfo((BattleData_o *)this, v24, 0LL);
    if ( this )
    {
      v29 = v2->fields.skillIcon;
      if ( !v29 )
        goto LABEL_148;
      if ( (unsigned int)v24 >= v29->max_length )
        goto LABEL_149;
      v30 = (BattleSkillInfoData_o *)this;
      this = (BattlePerformanceMaster_o *)v29->m_Items[(int)v24];
      if ( !this )
        goto LABEL_148;
      if ( v30->fields.isUseSkill )
        BattleServantSkillIConComponent__SetSkillInfo((BattleServantSkillIConComponent_o *)this, v30, 1, 0, 0, 0, 0LL);
      else
        BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)this, 0, 0LL);
      v31 = v28;
      isChargeOK = BattleSkillInfoData__isChargeOK(v30, 0LL);
      this = (BattlePerformanceMaster_o *)BattleSkillInfoData__getChargeTurn(v30, 0LL);
      v120 = (int)this;
      if ( v30->fields.isAdd )
      {
        v39 = v27;
        if ( (int)this <= 0 )
        {
          v40 = (System_Int32_array **)StringLiteral_753/*"-"*/;
          if ( !v23 )
            goto LABEL_148;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v120, 0LL);
          v40 = (System_Int32_array **)this;
          if ( !v23 )
            goto LABEL_148;
        }
        if ( v40 )
        {
          this = (BattlePerformanceMaster_o *)sub_B0D964(v40, v23->klass->_1.element_class);
          if ( !this )
            goto LABEL_150;
        }
        if ( (unsigned int)v118 >= LODWORD(v23->fields.myFsm) )
          goto LABEL_149;
        v41 = &v23->klass + v118;
        v41[4] = (BattlePerformanceMaster_c *)v40;
        sub_B0D840((BattleServantConfConponent_o *)(v41 + 4), v40, v33, v34, v35, v36, v37, v38);
        ++v118;
      }
      else
      {
        v39 = v27;
        if ( (int)this <= 0 )
        {
          v42 = (System_Int32_array **)StringLiteral_753/*"-"*/;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v120, 0LL);
          v42 = (System_Int32_array **)this;
        }
        v43 = array;
        if ( !array )
          goto LABEL_148;
        if ( v42 )
        {
          this = (BattlePerformanceMaster_o *)sub_B0D964(v42, array->obj.klass->_1.element_class);
          v43 = array;
          if ( !this )
          {
LABEL_150:
            v115 = sub_B0D99C(this);
            sub_B0D948(v115, 0LL);
          }
        }
        if ( v26 >= v43->max_length )
          goto LABEL_149;
        v44 = &v43->obj.klass + (int)v26;
        v44[4] = (Il2CppClass *)v42;
        sub_B0D840((BattleServantConfConponent_o *)(v44 + 4), v42, v33, v34, v35, v36, v37, v38);
        ++v26;
      }
      v23 = (BattlePerformanceMaster_o *)v117;
      v27 = v39 | (v120 > 0);
      v25 |= isChargeOK;
      v28 = v31 | (v30->fields.sealedTurn > 0);
    }
    v45 = v2->fields.skillIcon;
    if ( !v45 )
      goto LABEL_148;
    if ( (unsigned int)v24 >= v45->max_length )
    {
LABEL_149:
      v114 = sub_B0D9A8(this);
      sub_B0D948(v114, 0LL);
    }
    this = (BattlePerformanceMaster_o *)v45->m_Items[v24];
    if ( this )
    {
      BattleServantSkillIConComponent__setflashFlg((BattleServantSkillIConComponent_o *)this, 1, 0LL);
      v22 = v2->fields.skillIcon;
      ++v24;
      if ( v22 )
        continue;
    }
    goto LABEL_148;
  }
  this = (BattlePerformanceMaster_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
  if ( !this )
    goto LABEL_148;
  myFsm = (int)this->fields.myFsm;
  v47 = this;
  v48 = v27;
  if ( myFsm >= 1 )
  {
    v49 = 0;
    v50 = 0;
    v51 = 0;
    while ( 1 )
    {
      if ( v49 >= myFsm )
        goto LABEL_149;
      this = (BattlePerformanceMaster_o *)*((_QWORD *)&v47->fields.otherFsm + (int)v49);
      if ( !this )
        goto LABEL_148;
      this = (BattlePerformanceMaster_o *)BattleServantData__getShortenUserEquipSkill((BattleServantData_o *)this, 0LL);
      if ( !this )
        goto LABEL_148;
      v52 = this->fields.myFsm;
      if ( v52 )
      {
        if ( (int)v52 >= 1 )
        {
          v53 = 0LL;
          do
          {
            v54 = *((_QWORD *)&this->fields.otherFsm + v53);
            if ( !v54 )
              goto LABEL_148;
            v55 = *(_DWORD *)(v54 + 28);
            ++v53;
            if ( v50 <= v55 )
              v50 = v55;
          }
          while ( (int)v53 < (int)v52 );
        }
        v51 = 1;
      }
      myFsm = (int)v47->fields.myFsm;
      if ( (int)++v49 >= myFsm )
        goto LABEL_56;
    }
  }
  v51 = 0;
  v50 = 0;
LABEL_56:
  skillBtnFlashObject = (UnityEngine_Object_o *)v2->fields.skillBtnFlashObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillBtnFlashObject, 0LL, 0LL) )
  {
    this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
    if ( !this )
      goto LABEL_148;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    {
      this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
      if ( !this )
        goto LABEL_148;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
    if ( !this )
      goto LABEL_148;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v25 & 1, 0LL);
  }
  v59 = BattlePerformanceMaster___c_TypeInfo;
  if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
    v59 = BattlePerformanceMaster___c_TypeInfo;
  }
  static_fields = v59->static_fields;
  _9__70_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__70_0;
  v62 = (System_String_o *)StringLiteral_879/*"/"*/;
  if ( !_9__70_0 )
  {
    if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
    }
    v63 = (Il2CppObject *)static_fields->__9;
    _9__70_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_string__TypeInfo,
                                                                          v57,
                                                                          v58);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__70_0,
      v63,
      Method_BattlePerformanceMaster___c__updateSkillIcon_b__70_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_string___ctor__);
    v64 = BattlePerformanceMaster___c_TypeInfo->static_fields;
    v64->__9__70_0 = (struct System_Predicate_string__o *)_9__70_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v64->__9__70_0,
      (System_Int32_array **)_9__70_0,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  All_BattleBuffData_BuffData = (System_String_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                         array,
                                                         (System_Predicate_T__o *)_9__70_0,
                                                         (const MethodInfo_1F68AE0 *)Method_System_Array_FindAll_string___);
  this = (BattlePerformanceMaster_o *)System_String__Join(v62, All_BattleBuffData_BuffData, 0LL);
  data = v2->fields.data;
  if ( !data )
    goto LABEL_148;
  v73 = (System_String_o *)this;
  this = (BattlePerformanceMaster_o *)data->fields.battle_ent;
  if ( !this )
    goto LABEL_148;
  this = (BattlePerformanceMaster_o *)BattleEntity__GetQuestPhaseEntity((BattleEntity_o *)this, 0LL);
  if ( !this )
    goto LABEL_148;
  this = (BattlePerformanceMaster_o *)QuestPhaseEntity__GetMasterSkillDelayInfo((QuestPhaseEntity_o *)this, 0LL);
  if ( !v2->fields.masterSkillBadStatus )
    goto LABEL_148;
  v74 = this;
  UnityEngine_GameObject__SetActive(v2->fields.masterSkillBadStatus, v28 & 1, 0LL);
  this = (BattlePerformanceMaster_o *)v2->fields.masterSkillBadStatusLabel;
  if ( !this )
    goto LABEL_148;
  if ( (v28 & 1) != 0 )
    v75 = (System_String_o *)v74;
  else
    v75 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)this, v75, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_2465/*"BATTLE_MASTER_SKILL_CHARGE"*/, 0LL);
  v119 = v50 + 1;
  v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119);
  this = (BattlePerformanceMaster_o *)System_String__Format(v76, v77, 0LL);
  if ( !v2->fields.masterSkillChargeRoot )
    goto LABEL_148;
  v78 = this;
  UnityEngine_GameObject__SetActive(v2->fields.masterSkillChargeRoot, v51 & 1, 0LL);
  this = (BattlePerformanceMaster_o *)v2->fields.masterSkillChargeLabel;
  if ( !this )
    goto LABEL_148;
  v79 = (v51 & 1) != 0 ? (System_String_o *)v78 : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)this, v79, 0LL);
  this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
  v80 = (((unsigned __int8)v28 | (unsigned __int8)v51) & 1) != 0 ? -58.0 : -38.0;
  if ( !this )
    goto LABEL_148;
  this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_148;
  if ( v118 < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
    if ( !this )
      goto LABEL_148;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_148;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v48 & 1, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeLabel;
    if ( !this )
      goto LABEL_148;
    UILabel__set_text((UILabel_o *)this, v73, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
    if ( !this )
      goto LABEL_148;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v2->fields.chargeTimeRoot )
      goto LABEL_148;
    v98 = (UnityEngine_Transform_o *)this;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)v2->fields.chargeTimeRoot,
                                          0LL);
    if ( !this )
      goto LABEL_148;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
    if ( !this )
      goto LABEL_148;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v48 & 1, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
    if ( !this )
      goto LABEL_148;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_148;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v83 = BattlePerformanceMaster___c_TypeInfo;
    addSkillAddChargeTimeLabel = v2->fields.addSkillAddChargeTimeLabel;
    if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v83 = BattlePerformanceMaster___c_TypeInfo;
    }
    v85 = v83->static_fields;
    _9__70_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v85->__9__70_1;
    v87 = (System_String_o *)StringLiteral_879/*"/"*/;
    if ( !_9__70_1 )
    {
      if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 && !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83);
        v85 = BattlePerformanceMaster___c_TypeInfo->static_fields;
      }
      v88 = (Il2CppObject *)v85->__9;
      _9__70_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                            System_Predicate_string__TypeInfo,
                                                                            v81,
                                                                            v82);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__70_1,
        v88,
        Method_BattlePerformanceMaster___c__updateSkillIcon_b__70_1__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_string___ctor__);
      v89 = BattlePerformanceMaster___c_TypeInfo->static_fields;
      v89->__9__70_1 = (struct System_Predicate_string__o *)_9__70_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v89->__9__70_1,
        (System_Int32_array **)_9__70_1,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
    }
    v96 = (System_String_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                   v117,
                                   (System_Predicate_T__o *)_9__70_1,
                                   (const MethodInfo_1F68AE0 *)Method_System_Array_FindAll_string___);
    this = (BattlePerformanceMaster_o *)System_String__Join(v87, v96, 0LL);
    if ( !addSkillAddChargeTimeLabel )
      goto LABEL_148;
    UILabel__set_text(addSkillAddChargeTimeLabel, (System_String_o *)this, 0LL);
    addSkillAddChargeTimeSplitLabel = v2->fields.addSkillAddChargeTimeSplitLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (BattlePerformanceMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2464/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/, 0LL);
    if ( !addSkillAddChargeTimeSplitLabel )
      goto LABEL_148;
    UILabel__set_text(addSkillAddChargeTimeSplitLabel, (System_String_o *)this, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeLabel;
    if ( !this )
      goto LABEL_148;
    UILabel__set_text((UILabel_o *)this, v73, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
    if ( !this )
      goto LABEL_148;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v2->fields.addSkillChargeTimeRoot )
      goto LABEL_148;
    v98 = (UnityEngine_Transform_o *)this;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)v2->fields.addSkillChargeTimeRoot,
                                          0LL);
    if ( !this )
      goto LABEL_148;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
    if ( !this )
      goto LABEL_148;
  }
  v100 = localPosition;
  this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_148;
  *(UnityEngine_Vector3_o *)(&v101 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v98 )
    goto LABEL_148;
  v102 = v100;
  v103 = v80;
  UnityEngine_Transform__set_localPosition(v98, *(UnityEngine_Vector3_o *)(&v101 - 2), 0LL);
  this = (BattlePerformanceMaster_o *)v2->fields.data;
  if ( !this )
    goto LABEL_148;
  this = (BattlePerformanceMaster_o *)BattleData__getBoostSkillInfo((BattleData_o *)this, 0, 0LL);
  if ( !v2->fields.boostSkillIcon )
    goto LABEL_148;
  if ( this )
    BattleServantSkillIConComponent__SetSkillInfo(
      (BattleServantSkillIConComponent_o *)v2->fields.boostSkillIcon,
      (BattleSkillInfoData_o *)this,
      1,
      0,
      0,
      0,
      0LL);
  else
    BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)v2->fields.boostSkillIcon, 0, 0LL);
  v104 = v2->fields.data;
  if ( !v104 )
    goto LABEL_148;
  this = (BattlePerformanceMaster_o *)v104->fields.quest_ent;
  if ( !this )
    goto LABEL_148;
  this = (BattlePerformanceMaster_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x200000000LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_137;
  v105 = v2->fields.data;
  if ( !v105 )
    goto LABEL_148;
  this = (BattlePerformanceMaster_o *)v105->fields.quest_ent;
  if ( !this )
    goto LABEL_148;
  if ( QuestEntity__HasFlag((QuestEntity_o *)this, 0x100000000LL, 0LL) )
  {
LABEL_137:
    this = (BattlePerformanceMaster_o *)v2->fields.skillBtnSp;
    if ( this )
    {
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17051/*"btn_master_skill_disable"*/, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.skillBtn;
      if ( this )
      {
        ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattlePerformanceMaster_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)ComponentInChildren_Dropdown_DropdownItem,
                                              0LL,
                                              0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_148;
          v113 = (System_Int32_array **)StringLiteral_9324/*"NG"*/;
          ComponentInChildren_Dropdown_DropdownItem->fields.m_Image = (struct UnityEngine_UI_Image_o *)StringLiteral_9324/*"NG"*/;
          sub_B0D840(
            (BattleServantConfConponent_o *)&ComponentInChildren_Dropdown_DropdownItem->fields.m_Image,
            v113,
            v107,
            v108,
            v109,
            v110,
            v111,
            v112);
        }
        this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          return;
        }
      }
    }
LABEL_148:
    sub_B0D97C(this);
  }
}


void __fastcall BattlePerformanceMaster__updateSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  __int64 v3; // x1
  struct BattleData_o *data; // x8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_42151A8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17057/*"btn_on"*/, method);
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_17056/*"btn_off"*/, v3);
    byte_42151A8 = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.skipDeadBtn) == 0LL )
    sub_B0D97C(this);
  if ( data->fields.systemflg_skipDead )
    v5 = &StringLiteral_17057/*"btn_on"*/;
  else
    v5 = &StringLiteral_17056/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall BattlePerformanceMaster__updateTdConstantVelocity(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  __int64 v3; // x1
  struct BattleData_o *data; // x8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_42151A6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17057/*"btn_on"*/, method);
    this = (BattlePerformanceMaster_o *)sub_B0D8A4(&StringLiteral_17056/*"btn_off"*/, v3);
    byte_42151A6 = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.tdConstBtn) == 0LL )
    sub_B0D97C(this);
  if ( data->fields.systemflg_TdConstantvelocity )
    v5 = &StringLiteral_17057/*"btn_on"*/;
  else
    v5 = &StringLiteral_17056/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v5, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__waitMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x20
  __int64 v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42151C0 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceMaster__waitMasterBuffEffect_d__160_TypeInfo, method);
    byte_42151C0 = 1;
  }
  v6 = sub_B0D974(BattlePerformanceMaster__waitMasterBuffEffect_d__160_TypeInfo, method, v3);
  BattlePerformanceMaster__waitMasterBuffEffect_d__160___ctor(
    (BattlePerformanceMaster__waitMasterBuffEffect_d__160_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B0D97C(v7);
  *(_QWORD *)(v6 + 40) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(float *)(v6 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattlePerformanceMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211EB1 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceMaster___c_TypeInfo, v1);
    byte_4211EB1 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattlePerformanceMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattlePerformanceMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  v3 = BattlePerformanceMaster__waitMasterBuffEffect(this->fields.__4__this, this->fields.waitTime, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128(_4__this, v3, 0LL);
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
    sub_B0D97C(0LL);
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
  BattlePerformanceMaster___c__DisplayClass66_0_o *v3; // x19

  if ( !x
    || (v3 = this,
        (this = (BattlePerformanceMaster___c__DisplayClass66_0_o *)UnityEngine_Object__get_name(
                                                                     (UnityEngine_Object_o *)x,
                                                                     0LL)) == 0LL) )
  {
    sub_B0D97C(this);
  }
  return System_String__StartsWith((System_String_o *)this, v3->fields.flashPrefabName, 0LL);
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
  BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x21
  Il2CppObject *v10; // x20
  struct BattlePerformanceMaster_o *v11; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceMaster___c__DisplayClass162_0_o *_8__1; // x20
  struct BattlePerformanceMaster___c__DisplayClass162_0_o *v15; // x8
  UnityEngine_Object_o *widget; // x20
  struct BattlePerformanceMaster___c__DisplayClass162_0_o *v17; // x8
  TweenAlpha_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct TweenAlpha_o *effectTween; // x8
  UITweener_o *v22; // x20
  Il2CppObject *v23; // x21
  EventDelegate_Callback_o *v24; // x19

  v3 = this;
  if ( (byte_4211EB2 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_BattlePerformanceMaster___c__DisplayClass162_0__endMasterBuffEffectFadeOut_b__0__, v6);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *)sub_B0D8A4(
                                                                             &BattlePerformanceMaster___c__DisplayClass162_0_TypeInfo,
                                                                             v7);
    byte_4211EB2 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *)_4__this->fields.perf;
    if ( !this )
      goto LABEL_24;
    if ( !BattlePerformance__isPositionTactical((BattlePerformance_o *)this, 0LL) )
    {
      this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *)_4__this->fields.master_root;
      if ( !this )
        goto LABEL_24;
      _8__1 = v3->fields.__8__1;
      this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                               (UnityEngine_GameObject_o *)this,
                                                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !_8__1 )
        goto LABEL_24;
      _8__1->fields.widget = (struct UIWidget_o *)this;
      sub_B0D840(&_8__1->fields.widget, this);
      v15 = v3->fields.__8__1;
      if ( !v15 )
        goto LABEL_24;
      widget = (UnityEngine_Object_o *)v15->fields.widget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *)UnityEngine_Object__op_Equality(
                                                                               widget,
                                                                               0LL,
                                                                               0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v17 = v3->fields.__8__1;
        if ( !v17 )
          goto LABEL_24;
        this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *)v17->fields.widget;
        if ( !this )
          goto LABEL_24;
        ((void (__fastcall *)(BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
          this,
          this->klass[1]._1.image,
          1.0);
        v18 = TweenAlpha__Begin(_4__this->fields.master_root, 0.25, 0.01, 0LL);
        _4__this->fields.effectTween = v18;
        sub_B0D840(&_4__this->fields.effectTween, v18);
        effectTween = _4__this->fields.effectTween;
        if ( !effectTween )
          goto LABEL_24;
        effectTween->fields.style = 6;
        v22 = (UITweener_o *)_4__this->fields.effectTween;
        v23 = (Il2CppObject *)v3->fields.__8__1;
        v24 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v19, v20);
        EventDelegate_Callback___ctor(
          v24,
          v23,
          Method_BattlePerformanceMaster___c__DisplayClass162_0__endMasterBuffEffectFadeOut_b__0__,
          0LL);
        if ( !v22 )
          goto LABEL_24;
        UITweener__SetOnFinished(v22, v24, 0LL);
      }
    }
  }
  else if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v10 = (Il2CppObject *)sub_B0D974(BattlePerformanceMaster___c__DisplayClass162_0_TypeInfo, method, v2);
    System_Object___ctor(v10, 0LL);
    v3->fields.__8__1 = (struct BattlePerformanceMaster___c__DisplayClass162_0_o *)v10;
    sub_B0D840(&v3->fields.__8__1, v10);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_o *)v3->fields.__8__1;
    if ( this )
    {
      v11 = v3->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v11;
      sub_B0D840(&this->fields, v11);
      if ( _4__this )
      {
        _4__this->fields.isMasterBuffEffectPlaying = 0;
        v3->fields.__2__current = 0LL;
        p__2__current = &v3->fields.__2__current;
        sub_B0D840(p__2__current, 0LL);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_24:
    sub_B0D97C(this);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__162_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  BattlePerformanceMaster__openRetireDialog_d__134_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  DefCoroutine_c *v7; // x0
  Il2CppObject *milliSecSeven; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  Il2CppObject *_4__this; // x21
  BattleLogic_o *klass; // x19
  NotificationDialog_ClickDelegate_o *v13; // x20

  v3 = this;
  if ( (byte_4211EB3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattlePerformanceMaster_retRetireDialog__, method);
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, v4);
    this = (BattlePerformanceMaster__openRetireDialog_d__134_o *)sub_B0D8A4(&DefCoroutine_TypeInfo, v5);
    byte_4211EB3 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = (Il2CppObject *)v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this
      || (klass = (BattleLogic_o *)_4__this[3].klass,
          v13 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, method, v2),
          NotificationDialog_ClickDelegate___ctor(v13, _4__this, Method_BattlePerformanceMaster_retRetireDialog__, 0LL),
          !klass) )
    {
      sub_B0D97C(this);
    }
    BattleLogic__OpenBattleLoseDlg(klass, 1, 1, v13, 0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v7 = DefCoroutine_TypeInfo;
  if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v7 = DefCoroutine_TypeInfo;
  }
  milliSecSeven = (Il2CppObject *)v7->static_fields->milliSecSeven;
  v3->fields.__2__current = milliSecSeven;
  p__2__current = &v3->fields.__2__current;
  sub_B0D840(p__2__current, milliSecSeven);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattlePerformanceMaster__openRetireDialog_d__134_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
      sub_B0D840(&this->fields.__2__current, 0LL);
      v6 = 1;
      result = 1;
    }
    else
    {
      if ( !_4__this )
        sub_B0D97C(0LL);
      v9 = (Il2CppObject *)BattlePerformanceMaster__endMasterBuffEffectFadeOut(_4__this, 0LL);
      this->fields.__2__current = v9;
      sub_B0D840(&this->fields.__2__current, v9);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattlePerformanceMaster__waitMasterBuffEffect_d__160_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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