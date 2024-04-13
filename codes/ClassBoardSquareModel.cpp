void __fastcall ClassBoardSquareModel___ctor(
        ClassBoardSquareModel_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **entity; // x20
  __int64 v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x0
  __int64 v53; // x1
  const MethodInfo *v54; // x3
  struct ClassBoardSquareEntity_o *v55; // x8

  if ( (byte_42EA8A9 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSquareUser_TypeInfo, (_DWORD)squareEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo, v15, v16, v17);
    byte_42EA8A9 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.lineList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.entity = squareEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)squareEntity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  entity = (System_Int32_array **)this->fields.entity;
  v39 = sub_B5D694(ClassBoardSquareUser_TypeInfo);
  System_Object___ctor((Il2CppObject *)v39, 0LL);
  *(_QWORD *)(v39 + 24) = entity;
  sub_B5D560((BattleServantConfConponent_o *)(v39 + 24), entity, v40, v41, v42, v43, v44, v45);
  this->fields.user = (struct IClassBoardSquareUser_o *)v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.user,
    (System_Int32_array **)v39,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v55 = this->fields.entity;
  if ( !v55 )
    sub_B5D69C(v52, v53);
  ClassBoardSquareModel__InitializeItemList(this, v55->fields.itemIds, v55->fields.itemNums, v54);
}


void __fastcall ClassBoardSquareModel__AddLine(
        ClassBoardSquareModel_o *this,
        IClassBoardLineModel_o *line,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0

  if ( (byte_42EA8AA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__, (_DWORD)line, (_DWORD)method, v3);
    byte_42EA8AA = 1;
  }
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B5D69C(0LL, line);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)line,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
}


void __fastcall ClassBoardSquareModel__FindLinkSquares(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_List_IClassBoardSquareModel__o **connectSquareList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0
  __int64 v43; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **current; // x1
  __int64 **v53; // x21
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x3
  __int64 *v57; // x23
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x3
  __int64 v65; // x23
  __int64 v66; // x8
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x1
  __int64 v72; // x3
  struct ClassBoardSquareEntity_o *entity; // x8
  System_Collections_Generic_List_T__o *v74; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v75; // x24
  __int64 *v76; // x23
  __int64 v77; // x8
  unsigned __int64 v78; // x10
  IClassBoardLineModel_c **v79; // x11
  __int64 v80; // x0
  __int64 *v81; // x23
  __int64 v82; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *v83; // x22
  unsigned __int64 v84; // x10
  int *v85; // x11
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x1
  __int64 v89; // x3
  __int64 v90; // x23
  __int64 v91; // x8
  unsigned __int64 v92; // x10
  int *v93; // x11
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x1
  struct ClassBoardSquareEntity_o *v97; // x8
  System_Collections_Generic_List_T__o *v98; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v99; // x24
  _BOOL8 v100; // x0
  __int64 v101; // x1
  __int64 v102; // x3
  __int64 *v103; // x23
  __int64 v104; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *v105; // x22
  unsigned __int64 v106; // x10
  IClassBoardLineModel_c **v107; // x11
  __int64 v108; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v109; // x0
  __int64 v110; // x0
  __int64 v111; // x1
  __int64 v112; // x3
  __int64 *v113; // x22
  __int64 v114; // x8
  unsigned __int64 v115; // x10
  int *v116; // x11
  __int64 v117; // x0
  __int64 v118; // x0
  __int64 v119; // x1
  __int64 v120; // x3
  __int64 v121; // x22
  __int64 v122; // x8
  unsigned __int64 v123; // x10
  IClassBoardSquareModel_c **v124; // x11
  __int64 v125; // x0
  __int64 v126; // x0
  __int64 v127; // x1
  __int64 v128; // x3
  __int64 *v129; // x21
  __int64 v130; // x8
  unsigned __int64 v131; // x10
  int *v132; // x11
  __int64 v133; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v134; // x0
  __int64 v135; // x0
  __int64 v136; // x1
  __int64 v137; // x3
  __int64 *v138; // x22
  __int64 v139; // x8
  unsigned __int64 v140; // x10
  IClassBoardLineModel_c **v141; // x11
  __int64 v142; // x0
  __int64 v143; // x0
  __int64 v144; // x1
  __int64 v145; // x3
  __int64 v146; // x22
  __int64 v147; // x8
  unsigned __int64 v148; // x10
  IClassBoardSquareModel_c **v149; // x11
  __int64 v150; // x0
  __int64 v151; // x0
  __int64 v152; // x1
  __int64 v153; // x3
  __int64 *v154; // x21
  __int64 v155; // x8
  unsigned __int64 v156; // x10
  IClassBoardLineModel_c **v157; // x11
  __int64 v158; // x0
  __int64 v159; // x0
  __int64 v160; // x1
  __int64 v161; // x3
  __int64 v162; // x21
  __int64 v163; // x8
  IClassBoardSquareModel_c *v164; // x1
  unsigned __int64 v165; // x10
  IClassBoardSquareModel_c **v166; // x11
  __int64 v167; // x0
  __int64 v168; // x1
  __int64 v169; // x8
  unsigned __int64 v170; // x10
  IClassBoardSquareModel_c **v171; // x11
  System_Collections_Generic_List_Enumerator_T__o v172; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v173; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42EA8AD & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_IClassBoardSquareModel___, (_DWORD)connectSquareList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_IClassBoardSquareModel__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&IClassBoardLineModel_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__, v33, v34, v35);
    sub_B5D5C4(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__, v36, v37, v38);
    sub_B5D5C4(&ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo, v39, v40, v41);
    byte_42EA8AD = 1;
  }
  memset(&v173, 0, sizeof(v173));
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B5D69C(0LL, connectSquareList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v172,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lineList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v173 = v172;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v173,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
  {
    v43 = sub_B5D694(ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo);
    ClassBoardSquareModel___c__DisplayClass38_0___ctor((ClassBoardSquareModel___c__DisplayClass38_0_o *)v43, 0LL);
    if ( !v43 )
      sub_B5D69C(v44, v45);
    current = (System_Int32_array **)v173.fields.current;
    *(_QWORD *)(v43 + 16) = v173.fields.current;
    v53 = (__int64 **)(v43 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v43 + 16), current, v46, v47, v48, v49, v50, v51);
    v57 = *(__int64 **)(v43 + 16);
    if ( !v57 )
      sub_B5D69C(v54, v55);
    v58 = *v57;
    if ( *(_WORD *)(*v57 + 298) )
    {
      v59 = 0LL;
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v60 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v59;
        v60 += 4;
        if ( v59 >= *(unsigned __int16 *)(*v57 + 298) )
          goto LABEL_12;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_12:
      v61 = sub_AF54C0(*v53, IClassBoardLineModel_TypeInfo, 0LL, v56);
    }
    v62 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8));
    v65 = v62;
    if ( !v62 )
      sub_B5D69C(0LL, v63);
    v66 = *(_QWORD *)v62;
    if ( *(_WORD *)(*(_QWORD *)v62 + 298LL) )
    {
      v67 = 0LL;
      v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v68 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v67;
        v68 += 4;
        if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)v62 + 298LL) )
          goto LABEL_19;
      }
      v69 = v66 + 16LL * *v68 + 312;
    }
    else
    {
LABEL_19:
      v69 = sub_AF54C0(v62, IClassBoardSquareModel_TypeInfo, 0LL, v64);
    }
    v70 = (*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v65, *(_QWORD *)(v69 + 8));
    entity = this->fields.entity;
    if ( !entity )
      sub_B5D69C(v70, v71);
    if ( (_DWORD)v70 == entity->fields.id
      || (v74 = (System_Collections_Generic_List_T__o *)*connectSquareList,
          v75 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_IClassBoardSquareModel__bool__TypeInfo),
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v75,
            (Il2CppObject *)v43,
            Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__),
          v70 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                  v74,
                  (System_Func_T__bool__o *)v75,
                  (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_IClassBoardSquareModel___),
          (v70 & 1) != 0) )
    {
      v76 = *v53;
      if ( !*v53 )
        sub_B5D69C(v70, v71);
      v77 = *v76;
      if ( *(_WORD *)(*v76 + 298) )
      {
        v78 = 0LL;
        v79 = (IClassBoardLineModel_c **)(*(_QWORD *)(v77 + 176) + 8LL);
        while ( *(v79 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v78;
          v79 += 2;
          if ( v78 >= *(unsigned __int16 *)(*v76 + 298) )
            goto LABEL_29;
        }
        v80 = v77 + 16LL * (*(_DWORD *)v79 + 1) + 312;
      }
      else
      {
LABEL_29:
        v80 = sub_AF54C0(*v53, IClassBoardLineModel_TypeInfo, 1LL, v72);
      }
      v87 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v80)(v76, *(_QWORD *)(v80 + 8));
      v90 = v87;
      if ( !v87 )
        sub_B5D69C(0LL, v88);
      v91 = *(_QWORD *)v87;
      if ( *(_WORD *)(*(_QWORD *)v87 + 298LL) )
      {
        v92 = 0LL;
        v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v93 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v92;
          v93 += 4;
          if ( v92 >= *(unsigned __int16 *)(*(_QWORD *)v87 + 298LL) )
            goto LABEL_42;
        }
        v94 = v91 + 16LL * *v93 + 312;
      }
      else
      {
LABEL_42:
        v94 = sub_AF54C0(v87, IClassBoardSquareModel_TypeInfo, 0LL, v89);
      }
      v95 = (*(__int64 (__fastcall **)(__int64, _QWORD))v94)(v90, *(_QWORD *)(v94 + 8));
      v97 = this->fields.entity;
      if ( !v97 )
        sub_B5D69C(v95, v96);
      if ( (_DWORD)v95 != v97->fields.id )
      {
        v98 = (System_Collections_Generic_List_T__o *)*connectSquareList;
        v99 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_IClassBoardSquareModel__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v99,
          (Il2CppObject *)v43,
          Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
        v100 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                 v98,
                 (System_Func_T__bool__o *)v99,
                 (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_IClassBoardSquareModel___);
        if ( !v100 )
        {
          v103 = *v53;
          if ( !*v53 )
            sub_B5D69C(v100, v101);
          v104 = *v103;
          v105 = *connectSquareList;
          if ( *(_WORD *)(*v103 + 298) )
          {
            v106 = 0LL;
            v107 = (IClassBoardLineModel_c **)(*(_QWORD *)(v104 + 176) + 8LL);
            while ( *(v107 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v106;
              v107 += 2;
              if ( v106 >= *(unsigned __int16 *)(*v103 + 298) )
                goto LABEL_52;
            }
            v108 = v104 + 16LL * (*(_DWORD *)v107 + 1) + 312;
          }
          else
          {
LABEL_52:
            v108 = sub_AF54C0(*v53, IClassBoardLineModel_TypeInfo, 1LL, v102);
          }
          v134 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v108)(
                                                                          v103,
                                                                          *(_QWORD *)(v108 + 8));
          if ( !v105 )
            sub_B5D69C(v134, v134);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v105,
            v134,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          v138 = *v53;
          if ( !*v53 )
            sub_B5D69C(v135, v136);
          v139 = *v138;
          if ( *(_WORD *)(*v138 + 298) )
          {
            v140 = 0LL;
            v141 = (IClassBoardLineModel_c **)(*(_QWORD *)(v139 + 176) + 8LL);
            while ( *(v141 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v140;
              v141 += 2;
              if ( v140 >= *(unsigned __int16 *)(*v138 + 298) )
                goto LABEL_83;
            }
            v142 = v139 + 16LL * (*(_DWORD *)v141 + 1) + 312;
          }
          else
          {
LABEL_83:
            v142 = sub_AF54C0(*v53, IClassBoardLineModel_TypeInfo, 1LL, v137);
          }
          v143 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v142)(v138, *(_QWORD *)(v142 + 8));
          v146 = v143;
          if ( !v143 )
            sub_B5D69C(0LL, v144);
          v147 = *(_QWORD *)v143;
          if ( *(_WORD *)(*(_QWORD *)v143 + 298LL) )
          {
            v148 = 0LL;
            v149 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v147 + 176) + 8LL);
            while ( *(v149 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v148;
              v149 += 2;
              if ( v148 >= *(unsigned __int16 *)(*(_QWORD *)v143 + 298LL) )
                goto LABEL_90;
            }
            v150 = v147 + 16LL * (*(_DWORD *)v149 + 5) + 312;
          }
          else
          {
LABEL_90:
            v150 = sub_AF54C0(v143, IClassBoardSquareModel_TypeInfo, 5LL, v145);
          }
          v151 = (*(__int64 (__fastcall **)(__int64, _QWORD))v150)(v146, *(_QWORD *)(v150 + 8));
          if ( (v151 & 1) != 0 )
          {
            v154 = *v53;
            if ( !v154 )
              sub_B5D69C(v151, v152);
            v155 = *v154;
            if ( *(_WORD *)(*v154 + 298) )
            {
              v156 = 0LL;
              v157 = (IClassBoardLineModel_c **)(*(_QWORD *)(v155 + 176) + 8LL);
              while ( *(v157 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v156;
                v157 += 2;
                if ( v156 >= *(unsigned __int16 *)(*v154 + 298) )
                  goto LABEL_98;
              }
              v158 = v155 + 16LL * (*(_DWORD *)v157 + 1) + 312;
            }
            else
            {
LABEL_98:
              v158 = sub_AF54C0(v154, IClassBoardLineModel_TypeInfo, 1LL, v153);
            }
            v159 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v158)(v154, *(_QWORD *)(v158 + 8));
            v162 = v159;
            if ( !v159 )
              sub_B5D69C(0LL, v168);
            v169 = *(_QWORD *)v159;
            v164 = IClassBoardSquareModel_TypeInfo;
            if ( !*(_WORD *)(*(_QWORD *)v159 + 298LL) )
              goto LABEL_105;
            v170 = 0LL;
            v171 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v169 + 176) + 8LL);
            while ( *(v171 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v170;
              v171 += 2;
              if ( v170 >= *(unsigned __int16 *)(*(_QWORD *)v159 + 298LL) )
                goto LABEL_105;
            }
            v167 = v169 + 16LL * (*(_DWORD *)v171 + 15) + 312;
            goto LABEL_107;
          }
        }
      }
    }
    else
    {
      v81 = *v53;
      if ( !*v53 )
        sub_B5D69C(v70, v71);
      v82 = *v81;
      v83 = *connectSquareList;
      if ( *(_WORD *)(*v81 + 298) )
      {
        v84 = 0LL;
        v85 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v85 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v84;
          v85 += 4;
          if ( v84 >= *(unsigned __int16 *)(*v81 + 298) )
            goto LABEL_35;
        }
        v86 = v82 + 16LL * *v85 + 312;
      }
      else
      {
LABEL_35:
        v86 = sub_AF54C0(*v53, IClassBoardLineModel_TypeInfo, 0LL, v72);
      }
      v109 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v86)(
                                                                      v81,
                                                                      *(_QWORD *)(v86 + 8));
      if ( !v83 )
        sub_B5D69C(v109, v109);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v83,
        v109,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
      v113 = *v53;
      if ( !*v53 )
        sub_B5D69C(v110, v111);
      v114 = *v113;
      if ( *(_WORD *)(*v113 + 298) )
      {
        v115 = 0LL;
        v116 = (int *)(*(_QWORD *)(v114 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v116 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v115;
          v116 += 4;
          if ( v115 >= *(unsigned __int16 *)(*v113 + 298) )
            goto LABEL_60;
        }
        v117 = v114 + 16LL * *v116 + 312;
      }
      else
      {
LABEL_60:
        v117 = sub_AF54C0(*v53, IClassBoardLineModel_TypeInfo, 0LL, v112);
      }
      v118 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v117)(v113, *(_QWORD *)(v117 + 8));
      v121 = v118;
      if ( !v118 )
        sub_B5D69C(0LL, v119);
      v122 = *(_QWORD *)v118;
      if ( *(_WORD *)(*(_QWORD *)v118 + 298LL) )
      {
        v123 = 0LL;
        v124 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v122 + 176) + 8LL);
        while ( *(v124 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v123;
          v124 += 2;
          if ( v123 >= *(unsigned __int16 *)(*(_QWORD *)v118 + 298LL) )
            goto LABEL_67;
        }
        v125 = v122 + 16LL * (*(_DWORD *)v124 + 5) + 312;
      }
      else
      {
LABEL_67:
        v125 = sub_AF54C0(v118, IClassBoardSquareModel_TypeInfo, 5LL, v120);
      }
      v126 = (*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v121, *(_QWORD *)(v125 + 8));
      if ( (v126 & 1) != 0 )
      {
        v129 = *v53;
        if ( !v129 )
          sub_B5D69C(v126, v127);
        v130 = *v129;
        if ( *(_WORD *)(*v129 + 298) )
        {
          v131 = 0LL;
          v132 = (int *)(*(_QWORD *)(v130 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v132 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v131;
            v132 += 4;
            if ( v131 >= *(unsigned __int16 *)(*v129 + 298) )
              goto LABEL_75;
          }
          v133 = v130 + 16LL * *v132 + 312;
        }
        else
        {
LABEL_75:
          v133 = sub_AF54C0(v129, IClassBoardLineModel_TypeInfo, 0LL, v128);
        }
        v159 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v133)(v129, *(_QWORD *)(v133 + 8));
        v162 = v159;
        if ( !v159 )
          sub_B5D69C(0LL, v160);
        v163 = *(_QWORD *)v159;
        v164 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)(*(_QWORD *)v159 + 298LL) )
        {
LABEL_105:
          v167 = sub_AF54C0(v159, v164, 15LL, v161);
          goto LABEL_107;
        }
        v165 = 0LL;
        v166 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v163 + 176) + 8LL);
        while ( *(v166 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v165;
          v166 += 2;
          if ( v165 >= *(unsigned __int16 *)(*(_QWORD *)v159 + 298LL) )
            goto LABEL_105;
        }
        v167 = v163 + 16LL * (*(_DWORD *)v166 + 15) + 312;
LABEL_107:
        (*(void (__fastcall **)(__int64, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))v167)(
          v162,
          connectSquareList,
          *(_QWORD *)(v167 + 8));
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v173,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
}


int32_t __fastcall ClassBoardSquareModel__GetAcquireFlag(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_HashSet_int__o *v4; // x20
  ClassBoardSquareModel_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  struct IClassBoardSquareUser_o *user; // x21
  IClassBoardSquareUser_c *klass; // x8
  unsigned __int64 v47; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  int32_t v50; // w20
  __int64 v51; // x3
  _BOOL8 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x3
  Il2CppObject *current; // x21
  Il2CppClass *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x3
  __int64 v63; // x22
  __int64 v64; // x8
  unsigned __int64 v65; // x10
  IClassBoardSquareModel_c **v66; // x11
  __int64 v67; // x0
  __int64 v68; // x3
  Il2CppClass *v69; // x8
  unsigned __int64 v70; // x10
  int32_t *v71; // x11
  __int64 v72; // x0
  IClassBoardSquareModel_o *v73; // x1
  const MethodInfo *v74; // x3
  Il2CppClass *v75; // x8
  unsigned __int64 v76; // x10
  IClassBoardLineModel_c **v77; // x11
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x3
  __int64 v82; // x22
  __int64 v83; // x8
  unsigned __int64 v84; // x10
  IClassBoardSquareModel_c **v85; // x11
  __int64 v86; // x0
  __int64 v87; // x3
  Il2CppClass *v88; // x8
  unsigned __int64 v89; // x10
  IClassBoardLineModel_c **v90; // x11
  __int64 v91; // x0
  IClassBoardSquareModel_o *v92; // x1
  const MethodInfo *v93; // x3
  Il2CppClass *v94; // x8
  unsigned __int64 v95; // x10
  int32_t *v96; // x11
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x3
  __int64 v101; // x22
  __int64 v102; // x8
  unsigned __int64 v103; // x10
  int *v104; // x11
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x1
  __int64 v108; // x3
  struct ClassBoardSquareEntity_o *entity; // x8
  Il2CppClass *v110; // x8
  unsigned __int64 v111; // x10
  int32_t *v112; // x11
  __int64 v113; // x0
  __int64 v114; // x0
  __int64 v115; // x1
  __int64 v116; // x3
  __int64 v117; // x22
  __int64 v118; // x8
  unsigned __int64 v119; // x10
  IClassBoardSquareModel_c **v120; // x11
  __int64 v121; // x0
  __int64 v122; // x0
  __int64 v123; // x1
  __int64 v124; // x3
  __int64 v125; // x22
  __int64 v126; // x8
  unsigned __int64 v127; // x10
  int *v128; // x11
  __int64 v129; // x0
  Il2CppClass *v130; // x8
  unsigned __int64 v131; // x10
  IClassBoardLineModel_c **v132; // x11
  __int64 v133; // x0
  __int64 v134; // x0
  __int64 v135; // x1
  __int64 v136; // x3
  __int64 v137; // x22
  __int64 v138; // x8
  unsigned __int64 v139; // x10
  int *v140; // x11
  __int64 v141; // x0
  __int64 v142; // x0
  __int64 v143; // x1
  __int64 v144; // x3
  struct ClassBoardSquareEntity_o *v145; // x8
  Il2CppClass *v146; // x8
  unsigned __int64 v147; // x10
  IClassBoardLineModel_c **v148; // x11
  __int64 v149; // x0
  __int64 v150; // x0
  __int64 v151; // x1
  __int64 v152; // x3
  __int64 v153; // x21
  __int64 v154; // x8
  unsigned __int64 v155; // x10
  IClassBoardSquareModel_c **v156; // x11
  __int64 v157; // x0
  __int64 v158; // x0
  __int64 v159; // x1
  __int64 v160; // x3
  __int64 v161; // x21
  __int64 v162; // x8
  unsigned __int64 v163; // x10
  int *v164; // x11
  __int64 v165; // x0
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x19
  System_Collections_Generic_List_IClassBoardItemModel__c *v167; // x8
  unsigned __int64 v168; // x10
  int *v169; // x11
  __int64 v170; // x0
  __int64 v171; // x1
  __int64 v172; // x3
  __int64 v173; // x19
  __int64 v174; // x8
  unsigned __int64 v175; // x10
  int *v176; // x11
  __int64 v177; // x0
  __int64 v178; // x8
  unsigned __int64 v179; // x10
  int *v180; // x11
  __int64 v181; // x0
  __int64 v182; // x0
  __int64 v183; // x1
  __int64 v184; // x3
  __int64 v185; // x21
  __int64 v186; // x8
  unsigned __int64 v187; // x10
  IClassBoardItemModel_c **v188; // x11
  __int64 v189; // x0
  int v190; // w8
  int v191; // w22
  __int64 v192; // x8
  unsigned __int64 v193; // x10
  int *v194; // x11
  __int64 v195; // x0
  System_Collections_Generic_List_Enumerator_T__o v197; // [xsp+0h] [xbp-90h] BYREF
  int v198[5]; // [xsp+18h] [xbp-78h]
  int v199; // [xsp+2Ch] [xbp-64h]
  System_Collections_Generic_List_Enumerator_T__o v200; // [xsp+30h] [xbp-60h] BYREF

  v4 = checkedBlankIdHashSet;
  v5 = this;
  if ( (byte_42EA8A7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__,
      (_DWORD)checkedBlankIdHashSet,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&IClassBoardItemModel_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&IClassBoardLineModel_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&IClassBoardSquareUser_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v39, v40, v41);
    this = (ClassBoardSquareModel_o *)sub_B5D5C4(
                                        &Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__,
                                        v42,
                                        v43,
                                        v44);
    byte_42EA8A7 = 1;
  }
  memset(&v200, 0, sizeof(v200));
  v199 = 0;
  if ( !v4 )
  {
    v4 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v4,
      (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  }
  user = v5->fields.user;
  if ( !user )
    goto LABEL_189;
  klass = user->klass;
  if ( *(_WORD *)&user->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareUser_c **)p_offset - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v47;
      p_offset += 4;
      if ( v47 >= *(unsigned __int16 *)&user->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AF54C0(v5->fields.user, IClassBoardSquareUser_TypeInfo, 0LL, v3);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareUser_o *, _QWORD))p_method)(user, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    return 1;
  this = (ClassBoardSquareModel_o *)v5->fields.entity;
  if ( !this )
    goto LABEL_189;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsStart(
                                      (ClassBoardSquareEntity_o *)this,
                                      (const MethodInfo *)checkedBlankIdHashSet);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_136;
  this = (ClassBoardSquareModel_o *)v5->fields.lineList;
  if ( !this )
LABEL_189:
    sub_B5D69C(this, checkedBlankIdHashSet);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v197,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v200 = v197;
  while ( 1 )
  {
    v52 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v200,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    if ( !v52 )
    {
      v198[0] = 231;
      v199 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v200,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
      v199 = 0;
      v50 = 2;
LABEL_138:
      itemList = v5->fields.itemList;
      if ( itemList )
      {
        v167 = itemList->klass;
        if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
        {
          v168 = 0LL;
          v169 = &v167->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)v169 - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
          {
            ++v168;
            v169 += 4;
            if ( v168 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
              goto LABEL_143;
          }
          v170 = (__int64)(&v167->vtable._0_Equals.method + 2 * *v169);
        }
        else
        {
LABEL_143:
          v170 = sub_AF54C0(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL, v51);
        }
        v173 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v170)(
                 itemList,
                 *(_QWORD *)(v170 + 8));
        if ( !v173 )
          sub_B5D69C(0LL, v171);
        while ( 1 )
        {
          v174 = *(_QWORD *)v173;
          if ( *(_WORD *)(*(_QWORD *)v173 + 298LL) )
          {
            v175 = 0LL;
            v176 = (int *)(*(_QWORD *)(v174 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v176 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v175;
              v176 += 4;
              if ( v175 >= *(unsigned __int16 *)(*(_QWORD *)v173 + 298LL) )
                goto LABEL_150;
            }
            v177 = v174 + 16LL * *v176 + 312;
          }
          else
          {
LABEL_150:
            v177 = sub_AF54C0(v173, System_Collections_IEnumerator_TypeInfo, 0LL, v172);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v177)(v173, *(_QWORD *)(v177 + 8)) & 1) == 0 )
            break;
          v178 = *(_QWORD *)v173;
          if ( *(_WORD *)(*(_QWORD *)v173 + 298LL) )
          {
            v179 = 0LL;
            v180 = (int *)(*(_QWORD *)(v178 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v180 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
            {
              ++v179;
              v180 += 4;
              if ( v179 >= *(unsigned __int16 *)(*(_QWORD *)v173 + 298LL) )
                goto LABEL_157;
            }
            v181 = v178 + 16LL * *v180 + 312;
          }
          else
          {
LABEL_157:
            v181 = sub_AF54C0(v173, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL, v172);
          }
          v182 = (*(__int64 (__fastcall **)(__int64, _QWORD))v181)(v173, *(_QWORD *)(v181 + 8));
          v185 = v182;
          if ( !v182 )
            sub_B5D69C(0LL, v183);
          v186 = *(_QWORD *)v182;
          if ( *(_WORD *)(*(_QWORD *)v182 + 298LL) )
          {
            v187 = 0LL;
            v188 = (IClassBoardItemModel_c **)(*(_QWORD *)(v186 + 176) + 8LL);
            while ( *(v188 - 1) != IClassBoardItemModel_TypeInfo )
            {
              ++v187;
              v188 += 2;
              if ( v187 >= *(unsigned __int16 *)(*(_QWORD *)v182 + 298LL) )
                goto LABEL_164;
            }
            v189 = v186 + 16LL * (*(_DWORD *)v188 + 2) + 312;
          }
          else
          {
LABEL_164:
            v189 = sub_AF54C0(v182, IClassBoardItemModel_TypeInfo, 2LL, v184);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v189)(v185, *(_QWORD *)(v189 + 8)) & 1) == 0 )
          {
            v198[0] = 308;
            v190 = v199;
            v50 |= 8u;
            goto LABEL_169;
          }
        }
        v198[0] = 308;
        v190 = v199;
LABEL_169:
        v191 = v190 + 1;
        v199 = v190 + 1;
        v192 = *(_QWORD *)v173;
        if ( *(_WORD *)(*(_QWORD *)v173 + 298LL) )
        {
          v193 = 0LL;
          v194 = (int *)(*(_QWORD *)(v192 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v194 - 1) != System_IDisposable_TypeInfo )
          {
            ++v193;
            v194 += 4;
            if ( v193 >= *(unsigned __int16 *)(*(_QWORD *)v173 + 298LL) )
              goto LABEL_174;
          }
          v195 = v192 + 16LL * *v194 + 312;
        }
        else
        {
LABEL_174:
          v195 = sub_AF54C0(v173, System_IDisposable_TypeInfo, 0LL, v172);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v195)(v173, *(_QWORD *)(v195 + 8));
        if ( v191 && v198[v191 - 1] == 308 )
          v199 = v191 - 1;
        return v50;
      }
      goto LABEL_189;
    }
    current = v200.fields.current;
    if ( !v200.fields.current )
      sub_B5D69C(v52, v53);
    v56 = v200.fields.current->klass;
    if ( *(_WORD *)&v200.fields.current->klass->_2.bitflags1 )
    {
      v57 = 0LL;
      v58 = &v56->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v58 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v57;
        v58 += 4;
        if ( v57 >= *(unsigned __int16 *)&v200.fields.current->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      v59 = (__int64)&v56->vtable[*v58].method;
    }
    else
    {
LABEL_24:
      v59 = sub_AF54C0(v200.fields.current, IClassBoardLineModel_TypeInfo, 0LL, v54);
    }
    v60 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v59)(current, *(_QWORD *)(v59 + 8));
    v63 = v60;
    if ( !v60 )
      sub_B5D69C(0LL, v61);
    v64 = *(_QWORD *)v60;
    if ( *(_WORD *)(*(_QWORD *)v60 + 298LL) )
    {
      v65 = 0LL;
      v66 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v64 + 176) + 8LL);
      while ( *(v66 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v65;
        v66 += 2;
        if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v60 + 298LL) )
          goto LABEL_31;
      }
      v67 = v64 + 16LL * (*(_DWORD *)v66 + 5) + 312;
    }
    else
    {
LABEL_31:
      v67 = sub_AF54C0(v60, IClassBoardSquareModel_TypeInfo, 5LL, v62);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v63, *(_QWORD *)(v67 + 8)) & 1) != 0 )
    {
      v69 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v70 = 0LL;
        v71 = &v69->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v71 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v70;
          v71 += 4;
          if ( v70 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_38;
        }
        v72 = (__int64)&v69->vtable[*v71].method;
      }
      else
      {
LABEL_38:
        v72 = sub_AF54C0(current, IClassBoardLineModel_TypeInfo, 0LL, v68);
      }
      v73 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v72)(
                                          current,
                                          *(_QWORD *)(v72 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v5, v73, v4, v74) )
        break;
    }
    v75 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v76 = 0LL;
      v77 = (IClassBoardLineModel_c **)&v75->_1.interfaceOffsets->offset;
      while ( *(v77 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v76;
        v77 += 2;
        if ( v76 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_45;
      }
      v78 = (__int64)&v75->vtable[*(_DWORD *)v77 + 1].method;
    }
    else
    {
LABEL_45:
      v78 = sub_AF54C0(current, IClassBoardLineModel_TypeInfo, 1LL, v68);
    }
    v79 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v78)(current, *(_QWORD *)(v78 + 8));
    v82 = v79;
    if ( !v79 )
      sub_B5D69C(0LL, v80);
    v83 = *(_QWORD *)v79;
    if ( *(_WORD *)(*(_QWORD *)v79 + 298LL) )
    {
      v84 = 0LL;
      v85 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v83 + 176) + 8LL);
      while ( *(v85 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v84;
        v85 += 2;
        if ( v84 >= *(unsigned __int16 *)(*(_QWORD *)v79 + 298LL) )
          goto LABEL_52;
      }
      v86 = v83 + 16LL * (*(_DWORD *)v85 + 5) + 312;
    }
    else
    {
LABEL_52:
      v86 = sub_AF54C0(v79, IClassBoardSquareModel_TypeInfo, 5LL, v81);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v86)(v82, *(_QWORD *)(v86 + 8)) & 1) != 0 )
    {
      v88 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v89 = 0LL;
        v90 = (IClassBoardLineModel_c **)&v88->_1.interfaceOffsets->offset;
        while ( *(v90 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v89;
          v90 += 2;
          if ( v89 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_59;
        }
        v91 = (__int64)&v88->vtable[*(_DWORD *)v90 + 1].method;
      }
      else
      {
LABEL_59:
        v91 = sub_AF54C0(current, IClassBoardLineModel_TypeInfo, 1LL, v87);
      }
      v92 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v91)(
                                          current,
                                          *(_QWORD *)(v91 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v5, v92, v4, v93) )
        break;
    }
    v94 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v95 = 0LL;
      v96 = &v94->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v96 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v95;
        v96 += 4;
        if ( v95 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_66;
      }
      v97 = (__int64)&v94->vtable[*v96].method;
    }
    else
    {
LABEL_66:
      v97 = sub_AF54C0(current, IClassBoardLineModel_TypeInfo, 0LL, v87);
    }
    v98 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v97)(current, *(_QWORD *)(v97 + 8));
    v101 = v98;
    if ( !v98 )
      sub_B5D69C(0LL, v99);
    v102 = *(_QWORD *)v98;
    if ( *(_WORD *)(*(_QWORD *)v98 + 298LL) )
    {
      v103 = 0LL;
      v104 = (int *)(*(_QWORD *)(v102 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v104 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v103;
        v104 += 4;
        if ( v103 >= *(unsigned __int16 *)(*(_QWORD *)v98 + 298LL) )
          goto LABEL_73;
      }
      v105 = v102 + 16LL * *v104 + 312;
    }
    else
    {
LABEL_73:
      v105 = sub_AF54C0(v98, IClassBoardSquareModel_TypeInfo, 0LL, v100);
    }
    v106 = (*(__int64 (__fastcall **)(__int64, _QWORD))v105)(v101, *(_QWORD *)(v105 + 8));
    entity = v5->fields.entity;
    if ( !entity )
      sub_B5D69C(v106, v107);
    if ( (_DWORD)v106 != entity->fields.id )
    {
      v110 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v111 = 0LL;
        v112 = &v110->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v112 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v111;
          v112 += 4;
          if ( v111 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_81;
        }
        v113 = (__int64)&v110->vtable[*v112].method;
      }
      else
      {
LABEL_81:
        v113 = sub_AF54C0(current, IClassBoardLineModel_TypeInfo, 0LL, v108);
      }
      v114 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v113)(current, *(_QWORD *)(v113 + 8));
      v117 = v114;
      if ( !v114 )
        sub_B5D69C(0LL, v115);
      v118 = *(_QWORD *)v114;
      if ( *(_WORD *)(*(_QWORD *)v114 + 298LL) )
      {
        v119 = 0LL;
        v120 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v118 + 176) + 8LL);
        while ( *(v120 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v119;
          v120 += 2;
          if ( v119 >= *(unsigned __int16 *)(*(_QWORD *)v114 + 298LL) )
            goto LABEL_88;
        }
        v121 = v118 + 16LL * (*(_DWORD *)v120 + 12) + 312;
      }
      else
      {
LABEL_88:
        v121 = sub_AF54C0(v114, IClassBoardSquareModel_TypeInfo, 12LL, v116);
      }
      v122 = (*(__int64 (__fastcall **)(__int64, _QWORD))v121)(v117, *(_QWORD *)(v121 + 8));
      v125 = v122;
      if ( !v122 )
        sub_B5D69C(0LL, v123);
      v126 = *(_QWORD *)v122;
      if ( *(_WORD *)(*(_QWORD *)v122 + 298LL) )
      {
        v127 = 0LL;
        v128 = (int *)(*(_QWORD *)(v126 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v128 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          ++v127;
          v128 += 4;
          if ( v127 >= *(unsigned __int16 *)(*(_QWORD *)v122 + 298LL) )
            goto LABEL_95;
        }
        v129 = v126 + 16LL * *v128 + 312;
      }
      else
      {
LABEL_95:
        v129 = sub_AF54C0(v122, IClassBoardSquareUser_TypeInfo, 0LL, v124);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v129)(v125, *(_QWORD *)(v129 + 8)) & 1) != 0 )
        break;
    }
    v130 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v131 = 0LL;
      v132 = (IClassBoardLineModel_c **)&v130->_1.interfaceOffsets->offset;
      while ( *(v132 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v131;
        v132 += 2;
        if ( v131 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_102;
      }
      v133 = (__int64)&v130->vtable[*(_DWORD *)v132 + 1].method;
    }
    else
    {
LABEL_102:
      v133 = sub_AF54C0(current, IClassBoardLineModel_TypeInfo, 1LL, v108);
    }
    v134 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v133)(current, *(_QWORD *)(v133 + 8));
    v137 = v134;
    if ( !v134 )
      sub_B5D69C(0LL, v135);
    v138 = *(_QWORD *)v134;
    if ( *(_WORD *)(*(_QWORD *)v134 + 298LL) )
    {
      v139 = 0LL;
      v140 = (int *)(*(_QWORD *)(v138 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v140 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v139;
        v140 += 4;
        if ( v139 >= *(unsigned __int16 *)(*(_QWORD *)v134 + 298LL) )
          goto LABEL_109;
      }
      v141 = v138 + 16LL * *v140 + 312;
    }
    else
    {
LABEL_109:
      v141 = sub_AF54C0(v134, IClassBoardSquareModel_TypeInfo, 0LL, v136);
    }
    v142 = (*(__int64 (__fastcall **)(__int64, _QWORD))v141)(v137, *(_QWORD *)(v141 + 8));
    v145 = v5->fields.entity;
    if ( !v145 )
      sub_B5D69C(v142, v143);
    if ( (_DWORD)v142 != v145->fields.id )
    {
      v146 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v147 = 0LL;
        v148 = (IClassBoardLineModel_c **)&v146->_1.interfaceOffsets->offset;
        while ( *(v148 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v147;
          v148 += 2;
          if ( v147 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_117;
        }
        v149 = (__int64)&v146->vtable[*(_DWORD *)v148 + 1].method;
      }
      else
      {
LABEL_117:
        v149 = sub_AF54C0(current, IClassBoardLineModel_TypeInfo, 1LL, v144);
      }
      v150 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v149)(current, *(_QWORD *)(v149 + 8));
      v153 = v150;
      if ( !v150 )
        sub_B5D69C(0LL, v151);
      v154 = *(_QWORD *)v150;
      if ( *(_WORD *)(*(_QWORD *)v150 + 298LL) )
      {
        v155 = 0LL;
        v156 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v154 + 176) + 8LL);
        while ( *(v156 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v155;
          v156 += 2;
          if ( v155 >= *(unsigned __int16 *)(*(_QWORD *)v150 + 298LL) )
            goto LABEL_124;
        }
        v157 = v154 + 16LL * (*(_DWORD *)v156 + 12) + 312;
      }
      else
      {
LABEL_124:
        v157 = sub_AF54C0(v150, IClassBoardSquareModel_TypeInfo, 12LL, v152);
      }
      v158 = (*(__int64 (__fastcall **)(__int64, _QWORD))v157)(v153, *(_QWORD *)(v157 + 8));
      v161 = v158;
      if ( !v158 )
        sub_B5D69C(0LL, v159);
      v162 = *(_QWORD *)v158;
      if ( *(_WORD *)(*(_QWORD *)v158 + 298LL) )
      {
        v163 = 0LL;
        v164 = (int *)(*(_QWORD *)(v162 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v164 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          ++v163;
          v164 += 4;
          if ( v163 >= *(unsigned __int16 *)(*(_QWORD *)v158 + 298LL) )
            goto LABEL_131;
        }
        v165 = v162 + 16LL * *v164 + 312;
      }
      else
      {
LABEL_131:
        v165 = sub_AF54C0(v158, IClassBoardSquareUser_TypeInfo, 0LL, v160);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v165)(v161, *(_QWORD *)(v165 + 8)) & 1) != 0 )
        break;
    }
  }
  v198[0] = 231;
  v199 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v200,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
  v199 = 0;
  this = (ClassBoardSquareModel_o *)v5->fields.entity;
  if ( !this )
    goto LABEL_189;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsBlank(
                                      (ClassBoardSquareEntity_o *)this,
                                      (const MethodInfo *)checkedBlankIdHashSet);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_136:
    v50 = 0;
    goto LABEL_138;
  }
  return 1;
}


void __fastcall ClassBoardSquareModel__InitializeItemList(
        ClassBoardSquareModel_o *this,
        System_Int32_array *itemIds,
        System_Int32_array *itemNums,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x22
  struct System_Collections_Generic_List_IClassBoardItemModel__o **p_itemList; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x8
  unsigned __int64 v27; // x25
  int32_t v28; // w23
  int32_t v29; // w24
  ClassBoardItemModel_o *v30; // x22
  const MethodInfo *v31; // x3
  __int64 v32; // x0

  if ( (byte_42EA8AB & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardItemModel_TypeInfo, (_DWORD)itemIds, (_DWORD)itemNums, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardItemModel__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo, v13, v14, v15);
    byte_42EA8AB = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v16;
  p_itemList = &this->fields.itemList;
  sub_B5D560((BattleServantConfConponent_o *)p_itemList, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
  if ( !itemIds )
    goto LABEL_13;
  v26 = *(_QWORD *)&itemIds->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v26 )
        goto LABEL_12;
      if ( !itemNums )
        break;
      if ( v27 >= itemNums->max_length )
      {
LABEL_12:
        v32 = sub_B5D6C8(v24);
        sub_B5D668(v32, 0LL);
      }
      v28 = itemIds->m_Items[v27 + 1];
      v29 = itemNums->m_Items[v27 + 1];
      v30 = (ClassBoardItemModel_o *)sub_B5D694(ClassBoardItemModel_TypeInfo);
      ClassBoardItemModel___ctor(v30, v28, v29, v31);
      v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_itemList;
      if ( !*p_itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v24,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_IClassBoardItemModel__Add__);
      LODWORD(v26) = itemIds->max_length;
      if ( (__int64)++v27 >= (int)v26 )
        return;
    }
LABEL_13:
    sub_B5D69C(v24, v25);
  }
}


bool __fastcall ClassBoardSquareModel__IsBlankConnected(
        ClassBoardSquareModel_o *this,
        IClassBoardSquareModel_o *blankModel,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  ClassBoardSquareModel_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v53; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v56; // x3
  IClassBoardSquareModel_c *v57; // x8
  unsigned __int64 v58; // x10
  int32_t *v59; // x11
  __int64 v60; // x0
  int32_t v61; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x20
  __int64 v63; // x3
  IClassBoardSquareModel_c *v64; // x8
  unsigned __int64 v65; // x10
  int32_t *v66; // x11
  __int64 v67; // x0
  __int64 v68; // x3
  ClassBoardSquareModel_c *v69; // x8
  ClassBoardSquareModel_o *v70; // x22
  unsigned __int64 v71; // x10
  int32_t *v72; // x11
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x3
  __int64 v76; // x22
  __int64 v77; // x8
  unsigned __int64 v78; // x10
  int *v79; // x11
  __int64 v80; // x0
  __int64 v81; // x3
  __int64 v82; // x8
  unsigned __int64 v83; // x10
  int *v84; // x11
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x3
  __int64 v89; // x24
  __int64 v90; // x8
  unsigned __int64 v91; // x10
  int *v92; // x11
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x3
  __int64 v97; // x25
  __int64 v98; // x8
  unsigned __int64 v99; // x10
  int *v100; // x11
  __int64 v101; // x0
  __int64 v102; // x3
  __int64 v103; // x8
  unsigned __int64 v104; // x10
  int *v105; // x11
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x3
  __int64 v110; // x25
  __int64 v111; // x8
  unsigned __int64 v112; // x10
  int *v113; // x11
  __int64 v114; // x0
  __int64 v115; // x0
  __int64 v116; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v118; // x8
  unsigned __int64 v119; // x10
  int *v120; // x11
  __int64 v121; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v122; // x0
  __int64 v123; // x8
  unsigned __int64 v124; // x10
  IClassBoardLineModel_c **v125; // x11
  __int64 v126; // x0
  __int64 v127; // x0
  __int64 v128; // x1
  __int64 v129; // x3
  __int64 v130; // x25
  __int64 v131; // x8
  unsigned __int64 v132; // x10
  int *v133; // x11
  __int64 v134; // x0
  __int64 v135; // x8
  unsigned __int64 v136; // x10
  IClassBoardLineModel_c **v137; // x11
  __int64 v138; // x0
  __int64 v139; // x0
  __int64 v140; // x1
  __int64 v141; // x3
  __int64 v142; // x25
  __int64 v143; // x8
  unsigned __int64 v144; // x10
  int *v145; // x11
  __int64 v146; // x0
  __int64 v147; // x0
  __int64 v148; // x1
  struct ClassBoardSquareEntity_o *v149; // x8
  __int64 v150; // x8
  unsigned __int64 v151; // x10
  IClassBoardLineModel_c **v152; // x11
  __int64 v153; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v154; // x0
  __int64 v155; // x8
  unsigned __int64 v156; // x10
  int *v157; // x11
  __int64 v158; // x0
  int v159; // w19
  _BOOL8 v160; // x0
  __int64 v161; // x1
  __int64 v162; // x3
  Il2CppObject *current; // x20
  Il2CppClass *v164; // x8
  unsigned __int64 v165; // x10
  int32_t *v166; // x11
  __int64 v167; // x0
  System_Enum_o *v168; // x20
  System_Enum_o *v169; // x0
  bool v170; // w19
  int v171; // w8
  int v172; // w23
  int v173; // w9
  System_Collections_Generic_HashSet_int__o *v175; // [xsp+8h] [xbp-A8h]
  int v176; // [xsp+14h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v177; // [xsp+18h] [xbp-98h] BYREF
  int v178[3]; // [xsp+30h] [xbp-80h]
  int v179; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v180; // [xsp+40h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_42EA8AC & 1) == 0 )
  {
    sub_B5D5C4(&AcquireFlag_TypeInfo, (_DWORD)blankModel, (_DWORD)checkedBlankIdHashSet, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, v19, v20, v21);
    sub_B5D5C4(&IClassBoardLineModel_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v46, v47, v48);
    this = (ClassBoardSquareModel_o *)sub_B5D5C4(
                                        &System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                        v49,
                                        v50,
                                        v51);
    byte_42EA8AC = 1;
  }
  memset(&v180, 0, sizeof(v180));
  v179 = 0;
  if ( !blankModel )
    goto LABEL_158;
  klass = blankModel->klass;
  if ( *(_WORD *)&blankModel->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v53;
      p_offset += 4;
      if ( v53 >= *(unsigned __int16 *)&blankModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(blankModel, IClassBoardSquareModel_TypeInfo, 0LL, method);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                      blankModel,
                                      *(_QWORD *)(p_method + 8));
  if ( !checkedBlankIdHashSet )
    goto LABEL_158;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          checkedBlankIdHashSet,
          (int32_t)this,
          (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v57 = blankModel->klass;
    if ( *(_WORD *)&blankModel->klass->_2.bitflags1 )
    {
      v58 = 0LL;
      v59 = &v57->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v59 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)&blankModel->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v60 = (__int64)&v57->vtable[*v59].method;
    }
    else
    {
LABEL_16:
      v60 = sub_AF54C0(blankModel, IClassBoardSquareModel_TypeInfo, 0LL, v56);
    }
    v61 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v60)(blankModel, *(_QWORD *)(v60 + 8));
    v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v62,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    System_Collections_Generic_HashSet_int___Add(
      checkedBlankIdHashSet,
      v61,
      (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
    v64 = blankModel->klass;
    if ( *(_WORD *)&blankModel->klass->_2.bitflags1 )
    {
      v65 = 0LL;
      v66 = &v64->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v66 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v65;
        v66 += 4;
        if ( v65 >= *(unsigned __int16 *)&blankModel->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v67 = (__int64)&v64->vtable[*v66 + 9].method;
    }
    else
    {
LABEL_22:
      v67 = sub_AF54C0(blankModel, IClassBoardSquareModel_TypeInfo, 9LL, v63);
    }
    this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v67)(
                                        blankModel,
                                        *(_QWORD *)(v67 + 8));
    if ( this )
    {
      v69 = this->klass;
      v70 = this;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v71 = 0LL;
        v72 = &v69->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v72 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
        {
          ++v71;
          v72 += 4;
          if ( v71 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_29;
        }
        v73 = (__int64)(&v69->vtable._0_Equals.method + 2 * *v72);
      }
      else
      {
LABEL_29:
        v73 = sub_AF54C0(this, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL, v68);
      }
      v175 = checkedBlankIdHashSet;
      v76 = (*(__int64 (__fastcall **)(ClassBoardSquareModel_o *, _QWORD))v73)(v70, *(_QWORD *)(v73 + 8));
      if ( !v76 )
        sub_B5D69C(0LL, v74);
      while ( 1 )
      {
        v77 = *(_QWORD *)v76;
        if ( *(_WORD *)(*(_QWORD *)v76 + 298LL) )
        {
          v78 = 0LL;
          v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v79 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v78;
            v79 += 4;
            if ( v78 >= *(unsigned __int16 *)(*(_QWORD *)v76 + 298LL) )
              goto LABEL_36;
          }
          v80 = v77 + 16LL * *v79 + 312;
        }
        else
        {
LABEL_36:
          v80 = sub_AF54C0(v76, System_Collections_IEnumerator_TypeInfo, 0LL, v75);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v76, *(_QWORD *)(v80 + 8)) & 1) == 0 )
          break;
        v82 = *(_QWORD *)v76;
        if ( *(_WORD *)(*(_QWORD *)v76 + 298LL) )
        {
          v83 = 0LL;
          v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v84 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
          {
            ++v83;
            v84 += 4;
            if ( v83 >= *(unsigned __int16 *)(*(_QWORD *)v76 + 298LL) )
              goto LABEL_43;
          }
          v85 = v82 + 16LL * *v84 + 312;
        }
        else
        {
LABEL_43:
          v85 = sub_AF54C0(v76, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL, v81);
        }
        v86 = (*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v76, *(_QWORD *)(v85 + 8));
        v89 = v86;
        if ( !v86 )
          sub_B5D69C(0LL, v87);
        v90 = *(_QWORD *)v86;
        if ( *(_WORD *)(*(_QWORD *)v86 + 298LL) )
        {
          v91 = 0LL;
          v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v92 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v91;
            v92 += 4;
            if ( v91 >= *(unsigned __int16 *)(*(_QWORD *)v86 + 298LL) )
              goto LABEL_50;
          }
          v93 = v90 + 16LL * *v92 + 312;
        }
        else
        {
LABEL_50:
          v93 = sub_AF54C0(v86, IClassBoardLineModel_TypeInfo, 0LL, v88);
        }
        v94 = (*(__int64 (__fastcall **)(__int64, _QWORD))v93)(v89, *(_QWORD *)(v93 + 8));
        v97 = v94;
        if ( !v94 )
          sub_B5D69C(0LL, v95);
        v98 = *(_QWORD *)v94;
        if ( *(_WORD *)(*(_QWORD *)v94 + 298LL) )
        {
          v99 = 0LL;
          v100 = (int *)(*(_QWORD *)(v98 + 176) + 8LL);
          while ( *((IClassBoardSquareModel_c **)v100 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v99;
            v100 += 4;
            if ( v99 >= *(unsigned __int16 *)(*(_QWORD *)v94 + 298LL) )
              goto LABEL_57;
          }
          v101 = v98 + 16LL * *v100 + 312;
        }
        else
        {
LABEL_57:
          v101 = sub_AF54C0(v94, IClassBoardSquareModel_TypeInfo, 0LL, v96);
        }
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v101)(v97, *(_QWORD *)(v101 + 8)) != v61 )
        {
          v103 = *(_QWORD *)v89;
          if ( *(_WORD *)(*(_QWORD *)v89 + 298LL) )
          {
            v104 = 0LL;
            v105 = (int *)(*(_QWORD *)(v103 + 176) + 8LL);
            while ( *((IClassBoardLineModel_c **)v105 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v104;
              v105 += 4;
              if ( v104 >= *(unsigned __int16 *)(*(_QWORD *)v89 + 298LL) )
                goto LABEL_64;
            }
            v106 = v103 + 16LL * *v105 + 312;
          }
          else
          {
LABEL_64:
            v106 = sub_AF54C0(v89, IClassBoardLineModel_TypeInfo, 0LL, v102);
          }
          v107 = (*(__int64 (__fastcall **)(__int64, _QWORD))v106)(v89, *(_QWORD *)(v106 + 8));
          v110 = v107;
          if ( !v107 )
            sub_B5D69C(0LL, v108);
          v111 = *(_QWORD *)v107;
          if ( *(_WORD *)(*(_QWORD *)v107 + 298LL) )
          {
            v112 = 0LL;
            v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
            while ( *((IClassBoardSquareModel_c **)v113 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v112;
              v113 += 4;
              if ( v112 >= *(unsigned __int16 *)(*(_QWORD *)v107 + 298LL) )
                goto LABEL_71;
            }
            v114 = v111 + 16LL * *v113 + 312;
          }
          else
          {
LABEL_71:
            v114 = sub_AF54C0(v107, IClassBoardSquareModel_TypeInfo, 0LL, v109);
          }
          v115 = (*(__int64 (__fastcall **)(__int64, _QWORD))v114)(v110, *(_QWORD *)(v114 + 8));
          entity = v6->fields.entity;
          if ( !entity )
            sub_B5D69C(v115, v116);
          if ( (_DWORD)v115 != entity->fields.id )
          {
            v118 = *(_QWORD *)v89;
            if ( *(_WORD *)(*(_QWORD *)v89 + 298LL) )
            {
              v119 = 0LL;
              v120 = (int *)(*(_QWORD *)(v118 + 176) + 8LL);
              while ( *((IClassBoardLineModel_c **)v120 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v119;
                v120 += 4;
                if ( v119 >= *(unsigned __int16 *)(*(_QWORD *)v89 + 298LL) )
                  goto LABEL_79;
              }
              v121 = v118 + 16LL * *v120 + 312;
            }
            else
            {
LABEL_79:
              v121 = sub_AF54C0(v89, IClassBoardLineModel_TypeInfo, 0LL, v102);
            }
            v122 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v121)(
                                                                            v89,
                                                                            *(_QWORD *)(v121 + 8));
            if ( !v62 )
              sub_B5D69C(v122, v122);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v62,
              v122,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          }
        }
        v123 = *(_QWORD *)v89;
        if ( *(_WORD *)(*(_QWORD *)v89 + 298LL) )
        {
          v124 = 0LL;
          v125 = (IClassBoardLineModel_c **)(*(_QWORD *)(v123 + 176) + 8LL);
          while ( *(v125 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v124;
            v125 += 2;
            if ( v124 >= *(unsigned __int16 *)(*(_QWORD *)v89 + 298LL) )
              goto LABEL_87;
          }
          v126 = v123 + 16LL * (*(_DWORD *)v125 + 1) + 312;
        }
        else
        {
LABEL_87:
          v126 = sub_AF54C0(v89, IClassBoardLineModel_TypeInfo, 1LL, v102);
        }
        v127 = (*(__int64 (__fastcall **)(__int64, _QWORD))v126)(v89, *(_QWORD *)(v126 + 8));
        v130 = v127;
        if ( !v127 )
          sub_B5D69C(0LL, v128);
        v131 = *(_QWORD *)v127;
        if ( *(_WORD *)(*(_QWORD *)v127 + 298LL) )
        {
          v132 = 0LL;
          v133 = (int *)(*(_QWORD *)(v131 + 176) + 8LL);
          while ( *((IClassBoardSquareModel_c **)v133 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v132;
            v133 += 4;
            if ( v132 >= *(unsigned __int16 *)(*(_QWORD *)v127 + 298LL) )
              goto LABEL_94;
          }
          v134 = v131 + 16LL * *v133 + 312;
        }
        else
        {
LABEL_94:
          v134 = sub_AF54C0(v127, IClassBoardSquareModel_TypeInfo, 0LL, v129);
        }
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v134)(v130, *(_QWORD *)(v134 + 8)) != v61 )
        {
          v135 = *(_QWORD *)v89;
          if ( *(_WORD *)(*(_QWORD *)v89 + 298LL) )
          {
            v136 = 0LL;
            v137 = (IClassBoardLineModel_c **)(*(_QWORD *)(v135 + 176) + 8LL);
            while ( *(v137 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v136;
              v137 += 2;
              if ( v136 >= *(unsigned __int16 *)(*(_QWORD *)v89 + 298LL) )
                goto LABEL_101;
            }
            v138 = v135 + 16LL * (*(_DWORD *)v137 + 1) + 312;
          }
          else
          {
LABEL_101:
            v138 = sub_AF54C0(v89, IClassBoardLineModel_TypeInfo, 1LL, v75);
          }
          v139 = (*(__int64 (__fastcall **)(__int64, _QWORD))v138)(v89, *(_QWORD *)(v138 + 8));
          v142 = v139;
          if ( !v139 )
            sub_B5D69C(0LL, v140);
          v143 = *(_QWORD *)v139;
          if ( *(_WORD *)(*(_QWORD *)v139 + 298LL) )
          {
            v144 = 0LL;
            v145 = (int *)(*(_QWORD *)(v143 + 176) + 8LL);
            while ( *((IClassBoardSquareModel_c **)v145 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v144;
              v145 += 4;
              if ( v144 >= *(unsigned __int16 *)(*(_QWORD *)v139 + 298LL) )
                goto LABEL_108;
            }
            v146 = v143 + 16LL * *v145 + 312;
          }
          else
          {
LABEL_108:
            v146 = sub_AF54C0(v139, IClassBoardSquareModel_TypeInfo, 0LL, v141);
          }
          v147 = (*(__int64 (__fastcall **)(__int64, _QWORD))v146)(v142, *(_QWORD *)(v146 + 8));
          v149 = v6->fields.entity;
          if ( !v149 )
            sub_B5D69C(v147, v148);
          if ( (_DWORD)v147 != v149->fields.id )
          {
            v150 = *(_QWORD *)v89;
            if ( *(_WORD *)(*(_QWORD *)v89 + 298LL) )
            {
              v151 = 0LL;
              v152 = (IClassBoardLineModel_c **)(*(_QWORD *)(v150 + 176) + 8LL);
              while ( *(v152 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v151;
                v152 += 2;
                if ( v151 >= *(unsigned __int16 *)(*(_QWORD *)v89 + 298LL) )
                  goto LABEL_116;
              }
              v153 = v150 + 16LL * (*(_DWORD *)v152 + 1) + 312;
            }
            else
            {
LABEL_116:
              v153 = sub_AF54C0(v89, IClassBoardLineModel_TypeInfo, 1LL, v75);
            }
            v154 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v153)(
                                                                            v89,
                                                                            *(_QWORD *)(v153 + 8));
            if ( !v62 )
              sub_B5D69C(v154, v154);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v62,
              v154,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          }
        }
      }
      v178[0] = 177;
      v179 = 1;
      v155 = *(_QWORD *)v76;
      if ( *(_WORD *)(*(_QWORD *)v76 + 298LL) )
      {
        v156 = 0LL;
        v157 = (int *)(*(_QWORD *)(v155 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v157 - 1) != System_IDisposable_TypeInfo )
        {
          ++v156;
          v157 += 4;
          if ( v156 >= *(unsigned __int16 *)(*(_QWORD *)v76 + 298LL) )
            goto LABEL_124;
        }
        v158 = v155 + 16LL * *v157 + 312;
      }
      else
      {
LABEL_124:
        v158 = sub_AF54C0(v76, System_IDisposable_TypeInfo, 0LL, v81);
      }
      this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v158)(v76, *(_QWORD *)(v158 + 8));
      v179 = 0;
      if ( v62 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v177,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v62,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
        v159 = 0;
        v180 = v177;
        while ( 1 )
        {
          v160 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v180,
                   (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
          if ( !v160 )
            break;
          current = v180.fields.current;
          if ( !v180.fields.current )
            sub_B5D69C(v160, v161);
          v164 = v180.fields.current->klass;
          if ( *(_WORD *)&v180.fields.current->klass->_2.bitflags1 )
          {
            v165 = 0LL;
            v166 = &v164->_1.interfaceOffsets->offset;
            while ( *((IClassBoardSquareModel_c **)v166 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v165;
              v166 += 4;
              if ( v165 >= *(unsigned __int16 *)&v180.fields.current->klass->_2.bitflags1 )
                goto LABEL_134;
            }
            v167 = (__int64)&v164->vtable[*v166 + 13].method;
          }
          else
          {
LABEL_134:
            v167 = sub_AF54C0(v180.fields.current, IClassBoardSquareModel_TypeInfo, 13LL, v162);
          }
          v159 |= (*(__int64 (__fastcall **)(Il2CppObject *, System_Collections_Generic_HashSet_int__o *, _QWORD))v167)(
                    current,
                    v175,
                    *(_QWORD *)(v167 + 8));
          LODWORD(v177.fields.list) = v159;
          v168 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v177);
          v176 = 1;
          v169 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v176);
          if ( !v168 )
            sub_B5D69C(v169, v169);
          if ( System_Enum__HasFlag(v168, v169, 0LL) )
          {
            v170 = 1;
            v171 = 258;
            goto LABEL_140;
          }
        }
        v170 = 0;
        v171 = 256;
LABEL_140:
        v178[0] = v171;
        v172 = ++v179;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v180,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
        if ( !v172 )
          return 0;
        v173 = v178[v172 - 1];
        if ( v173 == 256 )
        {
          v170 = 0;
        }
        else if ( v173 != 258 )
        {
          return 0;
        }
        v179 = v172 - 1;
        return v170;
      }
    }
LABEL_158:
    sub_B5D69C(this, blankModel);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardSquareModel__UpdatePosition(
        ClassBoardSquareModel_o *this,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8
  double x; // d0
  struct ClassBoardSquareEntity_o *v5; // x8
  float v6; // s1
  double v7; // d0

  entity = this->fields.entity;
  if ( !entity
    || (pos.fields.x != INFINITY ? (x = pos.fields.x) : (x = -pos.fields.x),
        entity->fields.posX = (int)x,
        (v5 = this->fields.entity) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  v7 = v6;
  if ( v6 == INFINITY )
    v7 = -INFINITY;
  v5->fields.posY = (int)v7;
}


int32_t __fastcall ClassBoardSquareModel__get_AssetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B5D69C(this, method);
  return entity->fields.assetId;
}


int32_t __fastcall ClassBoardSquareModel__get_BaseId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B5D69C(this, method);
  return entity->fields.classBoardBaseId;
}


bool __fastcall ClassBoardSquareModel__get_HasLine(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA8A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_IClassBoardLineModel___, (_DWORD)method, v2, v3);
    byte_42EA8A8 = 1;
  }
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
           (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
}


int32_t __fastcall ClassBoardSquareModel__get_IconId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B5D69C(this, method);
  return entity->fields.iconId;
}


int32_t __fastcall ClassBoardSquareModel__get_Id(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B5D69C(this, method);
  return entity->fields.id;
}


bool __fastcall ClassBoardSquareModel__get_IsBlank(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B5D69C(0LL, method);
  return ClassBoardSquareEntity__get_IsBlank(entity, method);
}


bool __fastcall ClassBoardSquareModel__get_IsStart(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B5D69C(0LL, method);
  return ClassBoardSquareEntity__get_IsStart(entity, method);
}


System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *__fastcall ClassBoardSquareModel__get_ItemList(
        ClassBoardSquareModel_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)this->fields.itemList;
}


System_Collections_Generic_IReadOnlyCollection_IClassBoardLineModel__o *__fastcall ClassBoardSquareModel__get_LineList(
        ClassBoardSquareModel_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyCollection_IClassBoardLineModel__o *)this->fields.lineList;
}


UnityEngine_Vector3_o __fastcall ClassBoardSquareModel__get_Position(
        ClassBoardSquareModel_o *this,
        const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8
  float v3; // s2
  float posX; // s0
  float posY; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  entity = this->fields.entity;
  if ( !entity )
    sub_B5D69C(this, method);
  v3 = 0.0;
  posX = (float)entity->fields.posX;
  posY = (float)entity->fields.posY;
  result.fields.z = v3;
  result.fields.y = posY;
  result.fields.x = posX;
  return result;
}


int32_t __fastcall ClassBoardSquareModel__get_SkillType(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B5D69C(this, method);
  return entity->fields.skillType;
}


int32_t __fastcall ClassBoardSquareModel__get_TargetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B5D69C(this, method);
  return entity->fields.targetId;
}


int32_t __fastcall ClassBoardSquareModel__get_UpSkillLv(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B5D69C(this, method);
  return entity->fields.upSkillLv;
}


IClassBoardSquareUser_o *__fastcall ClassBoardSquareModel__get_User(
        ClassBoardSquareModel_o *this,
        const MethodInfo *method)
{
  return this->fields.user;
}


void __fastcall ClassBoardSquareModel___c__DisplayClass38_0___ctor(
        ClassBoardSquareModel___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSquareModel___c__DisplayClass38_0___FindLinkSquares_b__0(
        ClassBoardSquareModel___c__DisplayClass38_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardSquareModel___c__DisplayClass38_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x3
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v15; // x8
  int v16; // w19
  unsigned __int64 v17; // x10
  int *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x3
  ClassBoardSquareModel___c__DisplayClass38_0_c *v21; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v22; // x20
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0

  v5 = this;
  if ( (byte_42E5E91 & 1) == 0 )
  {
    sub_B5D5C4(&IClassBoardLineModel_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v6, v7, v8);
    byte_42E5E91 = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(x, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v5->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v15 = lineModel->klass;
  v16 = (int)this;
  if ( *(_WORD *)&lineModel->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v18 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v17;
      v18 += 4;
      if ( v17 >= *(unsigned __int16 *)&lineModel->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v19 = (__int64)&v15->vtable[*v18].method;
  }
  else
  {
LABEL_15:
    v19 = sub_AF54C0(lineModel, IClassBoardLineModel_TypeInfo, 0LL, v13);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v19)(
                                                            lineModel,
                                                            *(_QWORD *)(v19 + 8));
  if ( !this )
LABEL_25:
    sub_B5D69C(this, x);
  v21 = this->klass;
  v22 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v21->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v24 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v25 = (__int64)(&v21->vtable._0_Equals.method + 2 * *v24);
  }
  else
  {
LABEL_22:
    v25 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 0LL, v20);
  }
  return v16 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v25)(
                  v22,
                  *(_QWORD *)(v25 + 8));
}


bool __fastcall ClassBoardSquareModel___c__DisplayClass38_0___FindLinkSquares_b__1(
        ClassBoardSquareModel___c__DisplayClass38_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardSquareModel___c__DisplayClass38_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x3
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v15; // x8
  int v16; // w19
  unsigned __int64 v17; // x10
  IClassBoardLineModel_c **v18; // x11
  __int64 v19; // x0
  __int64 v20; // x3
  ClassBoardSquareModel___c__DisplayClass38_0_c *v21; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v22; // x20
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0

  v5 = this;
  if ( (byte_42E5E92 & 1) == 0 )
  {
    sub_B5D5C4(&IClassBoardLineModel_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v6, v7, v8);
    byte_42E5E92 = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(x, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v5->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v15 = lineModel->klass;
  v16 = (int)this;
  if ( *(_WORD *)&lineModel->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    v18 = (IClassBoardLineModel_c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v17;
      v18 += 2;
      if ( v17 >= *(unsigned __int16 *)&lineModel->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v19 = (__int64)&v15->vtable[*(_DWORD *)v18 + 1].method;
  }
  else
  {
LABEL_15:
    v19 = sub_AF54C0(lineModel, IClassBoardLineModel_TypeInfo, 1LL, v13);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v19)(
                                                            lineModel,
                                                            *(_QWORD *)(v19 + 8));
  if ( !this )
LABEL_25:
    sub_B5D69C(this, x);
  v21 = this->klass;
  v22 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v21->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v24 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v25 = (__int64)(&v21->vtable._0_Equals.method + 2 * *v24);
  }
  else
  {
LABEL_22:
    v25 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 0LL, v20);
  }
  return v16 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v25)(
                  v22,
                  *(_QWORD *)(v25 + 8));
}