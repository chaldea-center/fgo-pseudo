void __fastcall ClassBoardSquareModel___ctor(
        ClassBoardSquareModel_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
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
  System_Int32_array **entity; // x20
  __int64 v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x3
  struct ClassBoardSquareEntity_o *v46; // x8

  if ( (byte_4189594 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSquareUser_TypeInfo, squareEntity);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo, v8);
    byte_4189594 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v9;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.lineList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.entity = squareEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)squareEntity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  entity = (System_Int32_array **)this->fields.entity;
  v30 = sub_B2C42C(ClassBoardSquareUser_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  *(_QWORD *)(v30 + 24) = entity;
  sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 24), entity, v31, v32, v33, v34, v35, v36);
  this->fields.user = (struct IClassBoardSquareUser_o *)v30;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.user,
    (System_Int32_array **)v30,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v46 = this->fields.entity;
  if ( !v46 )
    sub_B2C434(v43, v44);
  ClassBoardSquareModel__InitializeItemList(this, v46->fields.itemIds, v46->fields.itemNums, v45);
}


void __fastcall ClassBoardSquareModel__AddLine(
        ClassBoardSquareModel_o *this,
        IClassBoardLineModel_o *line,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0

  if ( (byte_4189595 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__, line);
    byte_4189595 = 1;
  }
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B2C434(0LL, line);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)line,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
}


void __fastcall ClassBoardSquareModel__FindLinkSquares(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_List_IClassBoardSquareModel__o **connectSquareList,
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
  __int64 v16; // x1
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0
  __int64 v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **current; // x1
  __int64 **v28; // x21
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  __int64 *v32; // x23
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x3
  __int64 v40; // x23
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x3
  struct ClassBoardSquareEntity_o *entity; // x8
  System_Collections_Generic_List_T__o *v49; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v50; // x24
  __int64 *v51; // x23
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  IClassBoardLineModel_c **v54; // x11
  __int64 v55; // x0
  __int64 *v56; // x23
  __int64 v57; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *v58; // x22
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
  struct ClassBoardSquareEntity_o *v72; // x8
  System_Collections_Generic_List_T__o *v73; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v74; // x24
  _BOOL8 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x3
  __int64 *v78; // x23
  __int64 v79; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *v80; // x22
  unsigned __int64 v81; // x10
  IClassBoardLineModel_c **v82; // x11
  __int64 v83; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v84; // x0
  __int64 v85; // x0
  __int64 v86; // x1
  __int64 v87; // x3
  __int64 *v88; // x22
  __int64 v89; // x8
  unsigned __int64 v90; // x10
  int *v91; // x11
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x3
  __int64 v96; // x22
  __int64 v97; // x8
  unsigned __int64 v98; // x10
  IClassBoardSquareModel_c **v99; // x11
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x1
  __int64 v103; // x3
  __int64 *v104; // x21
  __int64 v105; // x8
  unsigned __int64 v106; // x10
  int *v107; // x11
  __int64 v108; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v109; // x0
  __int64 v110; // x0
  __int64 v111; // x1
  __int64 v112; // x3
  __int64 *v113; // x22
  __int64 v114; // x8
  unsigned __int64 v115; // x10
  IClassBoardLineModel_c **v116; // x11
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
  IClassBoardLineModel_c **v132; // x11
  __int64 v133; // x0
  __int64 v134; // x0
  __int64 v135; // x1
  __int64 v136; // x3
  __int64 v137; // x21
  __int64 v138; // x8
  IClassBoardSquareModel_c *v139; // x1
  unsigned __int64 v140; // x10
  IClassBoardSquareModel_c **v141; // x11
  __int64 v142; // x0
  __int64 v143; // x1
  __int64 v144; // x8
  unsigned __int64 v145; // x10
  IClassBoardSquareModel_c **v146; // x11
  System_Collections_Generic_List_Enumerator_T__o v147; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v148; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4189598 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_IClassBoardSquareModel___, connectSquareList);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__, v7);
    sub_B2C35C(&Method_System_Func_IClassBoardSquareModel__bool___ctor__, v8);
    sub_B2C35C(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v9);
    sub_B2C35C(&IClassBoardLineModel_TypeInfo, v10);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__, v13);
    sub_B2C35C(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__, v14);
    sub_B2C35C(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__, v15);
    sub_B2C35C(&ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo, v16);
    byte_4189598 = 1;
  }
  memset(&v148, 0, sizeof(v148));
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B2C434(0LL, connectSquareList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v147,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lineList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v148 = v147;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v148,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
  {
    v18 = sub_B2C42C(ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo);
    ClassBoardSquareModel___c__DisplayClass38_0___ctor((ClassBoardSquareModel___c__DisplayClass38_0_o *)v18, 0LL);
    if ( !v18 )
      sub_B2C434(v19, v20);
    current = (System_Int32_array **)v148.fields.current;
    *(_QWORD *)(v18 + 16) = v148.fields.current;
    v28 = (__int64 **)(v18 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), current, v21, v22, v23, v24, v25, v26);
    v32 = *(__int64 **)(v18 + 16);
    if ( !v32 )
      sub_B2C434(v29, v30);
    v33 = *v32;
    if ( *(_WORD *)(*v32 + 298) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v35 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*v32 + 298) )
          goto LABEL_12;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_12:
      v36 = sub_AC5258(*v28, IClassBoardLineModel_TypeInfo, 0LL, v31);
    }
    v37 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
    v40 = v37;
    if ( !v37 )
      sub_B2C434(0LL, v38);
    v41 = *(_QWORD *)v37;
    if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
    {
      v42 = 0LL;
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v43 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
          goto LABEL_19;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_19:
      v44 = sub_AC5258(v37, IClassBoardSquareModel_TypeInfo, 0LL, v39);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8));
    entity = this->fields.entity;
    if ( !entity )
      sub_B2C434(v45, v46);
    if ( (_DWORD)v45 == entity->fields.id
      || (v49 = (System_Collections_Generic_List_T__o *)*connectSquareList,
          v50 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_IClassBoardSquareModel__bool__TypeInfo),
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v50,
            (Il2CppObject *)v18,
            Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__,
            (const MethodInfo_2711C04 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__),
          v45 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                  v49,
                  (System_Func_T__bool__o *)v50,
                  (const MethodInfo_17266AC *)Method_BasicHelper_Any_IClassBoardSquareModel___),
          (v45 & 1) != 0) )
    {
      v51 = *v28;
      if ( !*v28 )
        sub_B2C434(v45, v46);
      v52 = *v51;
      if ( *(_WORD *)(*v51 + 298) )
      {
        v53 = 0LL;
        v54 = (IClassBoardLineModel_c **)(*(_QWORD *)(v52 + 176) + 8LL);
        while ( *(v54 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v53;
          v54 += 2;
          if ( v53 >= *(unsigned __int16 *)(*v51 + 298) )
            goto LABEL_29;
        }
        v55 = v52 + 16LL * (*(_DWORD *)v54 + 1) + 312;
      }
      else
      {
LABEL_29:
        v55 = sub_AC5258(*v28, IClassBoardLineModel_TypeInfo, 1LL, v47);
      }
      v62 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8));
      v65 = v62;
      if ( !v62 )
        sub_B2C434(0LL, v63);
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
            goto LABEL_42;
        }
        v69 = v66 + 16LL * *v68 + 312;
      }
      else
      {
LABEL_42:
        v69 = sub_AC5258(v62, IClassBoardSquareModel_TypeInfo, 0LL, v64);
      }
      v70 = (*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v65, *(_QWORD *)(v69 + 8));
      v72 = this->fields.entity;
      if ( !v72 )
        sub_B2C434(v70, v71);
      if ( (_DWORD)v70 != v72->fields.id )
      {
        v73 = (System_Collections_Generic_List_T__o *)*connectSquareList;
        v74 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_IClassBoardSquareModel__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v74,
          (Il2CppObject *)v18,
          Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__,
          (const MethodInfo_2711C04 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
        v75 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                v73,
                (System_Func_T__bool__o *)v74,
                (const MethodInfo_17266AC *)Method_BasicHelper_Any_IClassBoardSquareModel___);
        if ( !v75 )
        {
          v78 = *v28;
          if ( !*v28 )
            sub_B2C434(v75, v76);
          v79 = *v78;
          v80 = *connectSquareList;
          if ( *(_WORD *)(*v78 + 298) )
          {
            v81 = 0LL;
            v82 = (IClassBoardLineModel_c **)(*(_QWORD *)(v79 + 176) + 8LL);
            while ( *(v82 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v81;
              v82 += 2;
              if ( v81 >= *(unsigned __int16 *)(*v78 + 298) )
                goto LABEL_52;
            }
            v83 = v79 + 16LL * (*(_DWORD *)v82 + 1) + 312;
          }
          else
          {
LABEL_52:
            v83 = sub_AC5258(*v28, IClassBoardLineModel_TypeInfo, 1LL, v77);
          }
          v109 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v83)(
                                                                          v78,
                                                                          *(_QWORD *)(v83 + 8));
          if ( !v80 )
            sub_B2C434(v109, v109);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v80,
            v109,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          v113 = *v28;
          if ( !*v28 )
            sub_B2C434(v110, v111);
          v114 = *v113;
          if ( *(_WORD *)(*v113 + 298) )
          {
            v115 = 0LL;
            v116 = (IClassBoardLineModel_c **)(*(_QWORD *)(v114 + 176) + 8LL);
            while ( *(v116 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v115;
              v116 += 2;
              if ( v115 >= *(unsigned __int16 *)(*v113 + 298) )
                goto LABEL_83;
            }
            v117 = v114 + 16LL * (*(_DWORD *)v116 + 1) + 312;
          }
          else
          {
LABEL_83:
            v117 = sub_AC5258(*v28, IClassBoardLineModel_TypeInfo, 1LL, v112);
          }
          v118 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v117)(v113, *(_QWORD *)(v117 + 8));
          v121 = v118;
          if ( !v118 )
            sub_B2C434(0LL, v119);
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
                goto LABEL_90;
            }
            v125 = v122 + 16LL * (*(_DWORD *)v124 + 5) + 312;
          }
          else
          {
LABEL_90:
            v125 = sub_AC5258(v118, IClassBoardSquareModel_TypeInfo, 5LL, v120);
          }
          v126 = (*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v121, *(_QWORD *)(v125 + 8));
          if ( (v126 & 1) != 0 )
          {
            v129 = *v28;
            if ( !v129 )
              sub_B2C434(v126, v127);
            v130 = *v129;
            if ( *(_WORD *)(*v129 + 298) )
            {
              v131 = 0LL;
              v132 = (IClassBoardLineModel_c **)(*(_QWORD *)(v130 + 176) + 8LL);
              while ( *(v132 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v131;
                v132 += 2;
                if ( v131 >= *(unsigned __int16 *)(*v129 + 298) )
                  goto LABEL_98;
              }
              v133 = v130 + 16LL * (*(_DWORD *)v132 + 1) + 312;
            }
            else
            {
LABEL_98:
              v133 = sub_AC5258(v129, IClassBoardLineModel_TypeInfo, 1LL, v128);
            }
            v134 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v133)(v129, *(_QWORD *)(v133 + 8));
            v137 = v134;
            if ( !v134 )
              sub_B2C434(0LL, v143);
            v144 = *(_QWORD *)v134;
            v139 = IClassBoardSquareModel_TypeInfo;
            if ( !*(_WORD *)(*(_QWORD *)v134 + 298LL) )
              goto LABEL_105;
            v145 = 0LL;
            v146 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v144 + 176) + 8LL);
            while ( *(v146 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v145;
              v146 += 2;
              if ( v145 >= *(unsigned __int16 *)(*(_QWORD *)v134 + 298LL) )
                goto LABEL_105;
            }
            v142 = v144 + 16LL * (*(_DWORD *)v146 + 15) + 312;
            goto LABEL_107;
          }
        }
      }
    }
    else
    {
      v56 = *v28;
      if ( !*v28 )
        sub_B2C434(v45, v46);
      v57 = *v56;
      v58 = *connectSquareList;
      if ( *(_WORD *)(*v56 + 298) )
      {
        v59 = 0LL;
        v60 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v60 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v59;
          v60 += 4;
          if ( v59 >= *(unsigned __int16 *)(*v56 + 298) )
            goto LABEL_35;
        }
        v61 = v57 + 16LL * *v60 + 312;
      }
      else
      {
LABEL_35:
        v61 = sub_AC5258(*v28, IClassBoardLineModel_TypeInfo, 0LL, v47);
      }
      v84 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v61)(
                                                                     v56,
                                                                     *(_QWORD *)(v61 + 8));
      if ( !v58 )
        sub_B2C434(v84, v84);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v58,
        v84,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
      v88 = *v28;
      if ( !*v28 )
        sub_B2C434(v85, v86);
      v89 = *v88;
      if ( *(_WORD *)(*v88 + 298) )
      {
        v90 = 0LL;
        v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v91 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v90;
          v91 += 4;
          if ( v90 >= *(unsigned __int16 *)(*v88 + 298) )
            goto LABEL_60;
        }
        v92 = v89 + 16LL * *v91 + 312;
      }
      else
      {
LABEL_60:
        v92 = sub_AC5258(*v28, IClassBoardLineModel_TypeInfo, 0LL, v87);
      }
      v93 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v92)(v88, *(_QWORD *)(v92 + 8));
      v96 = v93;
      if ( !v93 )
        sub_B2C434(0LL, v94);
      v97 = *(_QWORD *)v93;
      if ( *(_WORD *)(*(_QWORD *)v93 + 298LL) )
      {
        v98 = 0LL;
        v99 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v97 + 176) + 8LL);
        while ( *(v99 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v98;
          v99 += 2;
          if ( v98 >= *(unsigned __int16 *)(*(_QWORD *)v93 + 298LL) )
            goto LABEL_67;
        }
        v100 = v97 + 16LL * (*(_DWORD *)v99 + 5) + 312;
      }
      else
      {
LABEL_67:
        v100 = sub_AC5258(v93, IClassBoardSquareModel_TypeInfo, 5LL, v95);
      }
      v101 = (*(__int64 (__fastcall **)(__int64, _QWORD))v100)(v96, *(_QWORD *)(v100 + 8));
      if ( (v101 & 1) != 0 )
      {
        v104 = *v28;
        if ( !v104 )
          sub_B2C434(v101, v102);
        v105 = *v104;
        if ( *(_WORD *)(*v104 + 298) )
        {
          v106 = 0LL;
          v107 = (int *)(*(_QWORD *)(v105 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v107 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v106;
            v107 += 4;
            if ( v106 >= *(unsigned __int16 *)(*v104 + 298) )
              goto LABEL_75;
          }
          v108 = v105 + 16LL * *v107 + 312;
        }
        else
        {
LABEL_75:
          v108 = sub_AC5258(v104, IClassBoardLineModel_TypeInfo, 0LL, v103);
        }
        v134 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v108)(v104, *(_QWORD *)(v108 + 8));
        v137 = v134;
        if ( !v134 )
          sub_B2C434(0LL, v135);
        v138 = *(_QWORD *)v134;
        v139 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)(*(_QWORD *)v134 + 298LL) )
        {
LABEL_105:
          v142 = sub_AC5258(v134, v139, 15LL, v136);
          goto LABEL_107;
        }
        v140 = 0LL;
        v141 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v138 + 176) + 8LL);
        while ( *(v141 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v140;
          v141 += 2;
          if ( v140 >= *(unsigned __int16 *)(*(_QWORD *)v134 + 298LL) )
            goto LABEL_105;
        }
        v142 = v138 + 16LL * (*(_DWORD *)v141 + 15) + 312;
LABEL_107:
        (*(void (__fastcall **)(__int64, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))v142)(
          v137,
          connectSquareList,
          *(_QWORD *)(v142 + 8));
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v148,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
}


int32_t __fastcall ClassBoardSquareModel__GetAcquireFlag(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_HashSet_int__o *v4; // x20
  ClassBoardSquareModel_o *v5; // x19
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
  struct IClassBoardSquareUser_o *user; // x21
  IClassBoardSquareUser_c *klass; // x8
  unsigned __int64 v21; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  int32_t v24; // w20
  __int64 v25; // x3
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x3
  Il2CppObject *current; // x21
  Il2CppClass *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x3
  __int64 v37; // x22
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  IClassBoardSquareModel_c **v40; // x11
  __int64 v41; // x0
  __int64 v42; // x3
  Il2CppClass *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  IClassBoardSquareModel_o *v47; // x1
  const MethodInfo *v48; // x3
  Il2CppClass *v49; // x8
  unsigned __int64 v50; // x10
  IClassBoardLineModel_c **v51; // x11
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x3
  __int64 v56; // x22
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  IClassBoardSquareModel_c **v59; // x11
  __int64 v60; // x0
  __int64 v61; // x3
  Il2CppClass *v62; // x8
  unsigned __int64 v63; // x10
  IClassBoardLineModel_c **v64; // x11
  __int64 v65; // x0
  IClassBoardSquareModel_o *v66; // x1
  const MethodInfo *v67; // x3
  Il2CppClass *v68; // x8
  unsigned __int64 v69; // x10
  int32_t *v70; // x11
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x3
  __int64 v75; // x22
  __int64 v76; // x8
  unsigned __int64 v77; // x10
  int *v78; // x11
  __int64 v79; // x0
  __int64 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x3
  struct ClassBoardSquareEntity_o *entity; // x8
  Il2CppClass *v84; // x8
  unsigned __int64 v85; // x10
  int32_t *v86; // x11
  __int64 v87; // x0
  __int64 v88; // x0
  __int64 v89; // x1
  __int64 v90; // x3
  __int64 v91; // x22
  __int64 v92; // x8
  unsigned __int64 v93; // x10
  IClassBoardSquareModel_c **v94; // x11
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x1
  __int64 v98; // x3
  __int64 v99; // x22
  __int64 v100; // x8
  unsigned __int64 v101; // x10
  int *v102; // x11
  __int64 v103; // x0
  Il2CppClass *v104; // x8
  unsigned __int64 v105; // x10
  IClassBoardLineModel_c **v106; // x11
  __int64 v107; // x0
  __int64 v108; // x0
  __int64 v109; // x1
  __int64 v110; // x3
  __int64 v111; // x22
  __int64 v112; // x8
  unsigned __int64 v113; // x10
  int *v114; // x11
  __int64 v115; // x0
  __int64 v116; // x0
  __int64 v117; // x1
  __int64 v118; // x3
  struct ClassBoardSquareEntity_o *v119; // x8
  Il2CppClass *v120; // x8
  unsigned __int64 v121; // x10
  IClassBoardLineModel_c **v122; // x11
  __int64 v123; // x0
  __int64 v124; // x0
  __int64 v125; // x1
  __int64 v126; // x3
  __int64 v127; // x21
  __int64 v128; // x8
  unsigned __int64 v129; // x10
  IClassBoardSquareModel_c **v130; // x11
  __int64 v131; // x0
  __int64 v132; // x0
  __int64 v133; // x1
  __int64 v134; // x3
  __int64 v135; // x21
  __int64 v136; // x8
  unsigned __int64 v137; // x10
  int *v138; // x11
  __int64 v139; // x0
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x19
  System_Collections_Generic_List_IClassBoardItemModel__c *v141; // x8
  unsigned __int64 v142; // x10
  int *v143; // x11
  __int64 v144; // x0
  __int64 v145; // x1
  __int64 v146; // x3
  __int64 v147; // x19
  __int64 v148; // x8
  unsigned __int64 v149; // x10
  int *v150; // x11
  __int64 v151; // x0
  __int64 v152; // x8
  unsigned __int64 v153; // x10
  int *v154; // x11
  __int64 v155; // x0
  __int64 v156; // x0
  __int64 v157; // x1
  __int64 v158; // x3
  __int64 v159; // x21
  __int64 v160; // x8
  unsigned __int64 v161; // x10
  IClassBoardItemModel_c **v162; // x11
  __int64 v163; // x0
  int v164; // w8
  int v165; // w22
  __int64 v166; // x8
  unsigned __int64 v167; // x10
  int *v168; // x11
  __int64 v169; // x0
  System_Collections_Generic_List_Enumerator_T__o v171; // [xsp+0h] [xbp-90h] BYREF
  int v172[5]; // [xsp+18h] [xbp-78h]
  int v173; // [xsp+2Ch] [xbp-64h]
  System_Collections_Generic_List_Enumerator_T__o v174; // [xsp+30h] [xbp-60h] BYREF

  v4 = checkedBlankIdHashSet;
  v5 = this;
  if ( (byte_4189592 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__,
      checkedBlankIdHashSet);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v8);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v9);
    sub_B2C35C(&IClassBoardItemModel_TypeInfo, v10);
    sub_B2C35C(&IClassBoardLineModel_TypeInfo, v11);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v12);
    sub_B2C35C(&IClassBoardSquareUser_TypeInfo, v13);
    sub_B2C35C(&System_IDisposable_TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v15);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v16);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v17);
    this = (ClassBoardSquareModel_o *)sub_B2C35C(
                                        &Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__,
                                        v18);
    byte_4189592 = 1;
  }
  memset(&v174, 0, sizeof(v174));
  v173 = 0;
  if ( !v4 )
  {
    v4 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v4,
      (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  }
  user = v5->fields.user;
  if ( !user )
    goto LABEL_189;
  klass = user->klass;
  if ( *(_WORD *)&user->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareUser_c **)p_offset - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&user->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AC5258(v5->fields.user, IClassBoardSquareUser_TypeInfo, 0LL, v3);
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
    sub_B2C434(this, checkedBlankIdHashSet);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v171,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v174 = v171;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v174,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    if ( !v26 )
    {
      v172[0] = 231;
      v173 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v174,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
      v173 = 0;
      v24 = 2;
LABEL_138:
      itemList = v5->fields.itemList;
      if ( itemList )
      {
        v141 = itemList->klass;
        if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
        {
          v142 = 0LL;
          v143 = &v141->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)v143 - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
          {
            ++v142;
            v143 += 4;
            if ( v142 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
              goto LABEL_143;
          }
          v144 = (__int64)(&v141->vtable._0_Equals.method + 2 * *v143);
        }
        else
        {
LABEL_143:
          v144 = sub_AC5258(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL, v25);
        }
        v147 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v144)(
                 itemList,
                 *(_QWORD *)(v144 + 8));
        if ( !v147 )
          sub_B2C434(0LL, v145);
        while ( 1 )
        {
          v148 = *(_QWORD *)v147;
          if ( *(_WORD *)(*(_QWORD *)v147 + 298LL) )
          {
            v149 = 0LL;
            v150 = (int *)(*(_QWORD *)(v148 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v150 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v149;
              v150 += 4;
              if ( v149 >= *(unsigned __int16 *)(*(_QWORD *)v147 + 298LL) )
                goto LABEL_150;
            }
            v151 = v148 + 16LL * *v150 + 312;
          }
          else
          {
LABEL_150:
            v151 = sub_AC5258(v147, System_Collections_IEnumerator_TypeInfo, 0LL, v146);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v151)(v147, *(_QWORD *)(v151 + 8)) & 1) == 0 )
            break;
          v152 = *(_QWORD *)v147;
          if ( *(_WORD *)(*(_QWORD *)v147 + 298LL) )
          {
            v153 = 0LL;
            v154 = (int *)(*(_QWORD *)(v152 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v154 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
            {
              ++v153;
              v154 += 4;
              if ( v153 >= *(unsigned __int16 *)(*(_QWORD *)v147 + 298LL) )
                goto LABEL_157;
            }
            v155 = v152 + 16LL * *v154 + 312;
          }
          else
          {
LABEL_157:
            v155 = sub_AC5258(v147, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL, v146);
          }
          v156 = (*(__int64 (__fastcall **)(__int64, _QWORD))v155)(v147, *(_QWORD *)(v155 + 8));
          v159 = v156;
          if ( !v156 )
            sub_B2C434(0LL, v157);
          v160 = *(_QWORD *)v156;
          if ( *(_WORD *)(*(_QWORD *)v156 + 298LL) )
          {
            v161 = 0LL;
            v162 = (IClassBoardItemModel_c **)(*(_QWORD *)(v160 + 176) + 8LL);
            while ( *(v162 - 1) != IClassBoardItemModel_TypeInfo )
            {
              ++v161;
              v162 += 2;
              if ( v161 >= *(unsigned __int16 *)(*(_QWORD *)v156 + 298LL) )
                goto LABEL_164;
            }
            v163 = v160 + 16LL * (*(_DWORD *)v162 + 2) + 312;
          }
          else
          {
LABEL_164:
            v163 = sub_AC5258(v156, IClassBoardItemModel_TypeInfo, 2LL, v158);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v163)(v159, *(_QWORD *)(v163 + 8)) & 1) == 0 )
          {
            v172[0] = 308;
            v164 = v173;
            v24 |= 8u;
            goto LABEL_169;
          }
        }
        v172[0] = 308;
        v164 = v173;
LABEL_169:
        v165 = v164 + 1;
        v173 = v164 + 1;
        v166 = *(_QWORD *)v147;
        if ( *(_WORD *)(*(_QWORD *)v147 + 298LL) )
        {
          v167 = 0LL;
          v168 = (int *)(*(_QWORD *)(v166 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v168 - 1) != System_IDisposable_TypeInfo )
          {
            ++v167;
            v168 += 4;
            if ( v167 >= *(unsigned __int16 *)(*(_QWORD *)v147 + 298LL) )
              goto LABEL_174;
          }
          v169 = v166 + 16LL * *v168 + 312;
        }
        else
        {
LABEL_174:
          v169 = sub_AC5258(v147, System_IDisposable_TypeInfo, 0LL, v146);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v169)(v147, *(_QWORD *)(v169 + 8));
        if ( v165 && v172[v165 - 1] == 308 )
          v173 = v165 - 1;
        return v24;
      }
      goto LABEL_189;
    }
    current = v174.fields.current;
    if ( !v174.fields.current )
      sub_B2C434(v26, v27);
    v30 = v174.fields.current->klass;
    if ( *(_WORD *)&v174.fields.current->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v32 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)&v174.fields.current->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_24:
      v33 = sub_AC5258(v174.fields.current, IClassBoardLineModel_TypeInfo, 0LL, v28);
    }
    v34 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v33)(current, *(_QWORD *)(v33 + 8));
    v37 = v34;
    if ( !v34 )
      sub_B2C434(0LL, v35);
    v38 = *(_QWORD *)v34;
    if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
    {
      v39 = 0LL;
      v40 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *(v40 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v39;
        v40 += 2;
        if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
          goto LABEL_31;
      }
      v41 = v38 + 16LL * (*(_DWORD *)v40 + 5) + 312;
    }
    else
    {
LABEL_31:
      v41 = sub_AC5258(v34, IClassBoardSquareModel_TypeInfo, 5LL, v36);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) != 0 )
    {
      v43 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v44 = 0LL;
        v45 = &v43->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v45 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v44;
          v45 += 4;
          if ( v44 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_38;
        }
        v46 = (__int64)&v43->vtable[*v45].method;
      }
      else
      {
LABEL_38:
        v46 = sub_AC5258(current, IClassBoardLineModel_TypeInfo, 0LL, v42);
      }
      v47 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v46)(
                                          current,
                                          *(_QWORD *)(v46 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v5, v47, v4, v48) )
        break;
    }
    v49 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v50 = 0LL;
      v51 = (IClassBoardLineModel_c **)&v49->_1.interfaceOffsets->offset;
      while ( *(v51 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v50;
        v51 += 2;
        if ( v50 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_45;
      }
      v52 = (__int64)&v49->vtable[*(_DWORD *)v51 + 1].method;
    }
    else
    {
LABEL_45:
      v52 = sub_AC5258(current, IClassBoardLineModel_TypeInfo, 1LL, v42);
    }
    v53 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v52)(current, *(_QWORD *)(v52 + 8));
    v56 = v53;
    if ( !v53 )
      sub_B2C434(0LL, v54);
    v57 = *(_QWORD *)v53;
    if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
    {
      v58 = 0LL;
      v59 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *(v59 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v58;
        v59 += 2;
        if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
          goto LABEL_52;
      }
      v60 = v57 + 16LL * (*(_DWORD *)v59 + 5) + 312;
    }
    else
    {
LABEL_52:
      v60 = sub_AC5258(v53, IClassBoardSquareModel_TypeInfo, 5LL, v55);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v56, *(_QWORD *)(v60 + 8)) & 1) != 0 )
    {
      v62 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v63 = 0LL;
        v64 = (IClassBoardLineModel_c **)&v62->_1.interfaceOffsets->offset;
        while ( *(v64 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v63;
          v64 += 2;
          if ( v63 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_59;
        }
        v65 = (__int64)&v62->vtable[*(_DWORD *)v64 + 1].method;
      }
      else
      {
LABEL_59:
        v65 = sub_AC5258(current, IClassBoardLineModel_TypeInfo, 1LL, v61);
      }
      v66 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v65)(
                                          current,
                                          *(_QWORD *)(v65 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v5, v66, v4, v67) )
        break;
    }
    v68 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v69 = 0LL;
      v70 = &v68->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v70 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v69;
        v70 += 4;
        if ( v69 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_66;
      }
      v71 = (__int64)&v68->vtable[*v70].method;
    }
    else
    {
LABEL_66:
      v71 = sub_AC5258(current, IClassBoardLineModel_TypeInfo, 0LL, v61);
    }
    v72 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v71)(current, *(_QWORD *)(v71 + 8));
    v75 = v72;
    if ( !v72 )
      sub_B2C434(0LL, v73);
    v76 = *(_QWORD *)v72;
    if ( *(_WORD *)(*(_QWORD *)v72 + 298LL) )
    {
      v77 = 0LL;
      v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v78 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v77;
        v78 += 4;
        if ( v77 >= *(unsigned __int16 *)(*(_QWORD *)v72 + 298LL) )
          goto LABEL_73;
      }
      v79 = v76 + 16LL * *v78 + 312;
    }
    else
    {
LABEL_73:
      v79 = sub_AC5258(v72, IClassBoardSquareModel_TypeInfo, 0LL, v74);
    }
    v80 = (*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v75, *(_QWORD *)(v79 + 8));
    entity = v5->fields.entity;
    if ( !entity )
      sub_B2C434(v80, v81);
    if ( (_DWORD)v80 != entity->fields.id )
    {
      v84 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v85 = 0LL;
        v86 = &v84->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v86 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v85;
          v86 += 4;
          if ( v85 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_81;
        }
        v87 = (__int64)&v84->vtable[*v86].method;
      }
      else
      {
LABEL_81:
        v87 = sub_AC5258(current, IClassBoardLineModel_TypeInfo, 0LL, v82);
      }
      v88 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v87)(current, *(_QWORD *)(v87 + 8));
      v91 = v88;
      if ( !v88 )
        sub_B2C434(0LL, v89);
      v92 = *(_QWORD *)v88;
      if ( *(_WORD *)(*(_QWORD *)v88 + 298LL) )
      {
        v93 = 0LL;
        v94 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v92 + 176) + 8LL);
        while ( *(v94 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v93;
          v94 += 2;
          if ( v93 >= *(unsigned __int16 *)(*(_QWORD *)v88 + 298LL) )
            goto LABEL_88;
        }
        v95 = v92 + 16LL * (*(_DWORD *)v94 + 12) + 312;
      }
      else
      {
LABEL_88:
        v95 = sub_AC5258(v88, IClassBoardSquareModel_TypeInfo, 12LL, v90);
      }
      v96 = (*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v91, *(_QWORD *)(v95 + 8));
      v99 = v96;
      if ( !v96 )
        sub_B2C434(0LL, v97);
      v100 = *(_QWORD *)v96;
      if ( *(_WORD *)(*(_QWORD *)v96 + 298LL) )
      {
        v101 = 0LL;
        v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v102 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          ++v101;
          v102 += 4;
          if ( v101 >= *(unsigned __int16 *)(*(_QWORD *)v96 + 298LL) )
            goto LABEL_95;
        }
        v103 = v100 + 16LL * *v102 + 312;
      }
      else
      {
LABEL_95:
        v103 = sub_AC5258(v96, IClassBoardSquareUser_TypeInfo, 0LL, v98);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v99, *(_QWORD *)(v103 + 8)) & 1) != 0 )
        break;
    }
    v104 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v105 = 0LL;
      v106 = (IClassBoardLineModel_c **)&v104->_1.interfaceOffsets->offset;
      while ( *(v106 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v105;
        v106 += 2;
        if ( v105 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_102;
      }
      v107 = (__int64)&v104->vtable[*(_DWORD *)v106 + 1].method;
    }
    else
    {
LABEL_102:
      v107 = sub_AC5258(current, IClassBoardLineModel_TypeInfo, 1LL, v82);
    }
    v108 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v107)(current, *(_QWORD *)(v107 + 8));
    v111 = v108;
    if ( !v108 )
      sub_B2C434(0LL, v109);
    v112 = *(_QWORD *)v108;
    if ( *(_WORD *)(*(_QWORD *)v108 + 298LL) )
    {
      v113 = 0LL;
      v114 = (int *)(*(_QWORD *)(v112 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v114 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v113;
        v114 += 4;
        if ( v113 >= *(unsigned __int16 *)(*(_QWORD *)v108 + 298LL) )
          goto LABEL_109;
      }
      v115 = v112 + 16LL * *v114 + 312;
    }
    else
    {
LABEL_109:
      v115 = sub_AC5258(v108, IClassBoardSquareModel_TypeInfo, 0LL, v110);
    }
    v116 = (*(__int64 (__fastcall **)(__int64, _QWORD))v115)(v111, *(_QWORD *)(v115 + 8));
    v119 = v5->fields.entity;
    if ( !v119 )
      sub_B2C434(v116, v117);
    if ( (_DWORD)v116 != v119->fields.id )
    {
      v120 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v121 = 0LL;
        v122 = (IClassBoardLineModel_c **)&v120->_1.interfaceOffsets->offset;
        while ( *(v122 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v121;
          v122 += 2;
          if ( v121 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_117;
        }
        v123 = (__int64)&v120->vtable[*(_DWORD *)v122 + 1].method;
      }
      else
      {
LABEL_117:
        v123 = sub_AC5258(current, IClassBoardLineModel_TypeInfo, 1LL, v118);
      }
      v124 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v123)(current, *(_QWORD *)(v123 + 8));
      v127 = v124;
      if ( !v124 )
        sub_B2C434(0LL, v125);
      v128 = *(_QWORD *)v124;
      if ( *(_WORD *)(*(_QWORD *)v124 + 298LL) )
      {
        v129 = 0LL;
        v130 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v128 + 176) + 8LL);
        while ( *(v130 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v129;
          v130 += 2;
          if ( v129 >= *(unsigned __int16 *)(*(_QWORD *)v124 + 298LL) )
            goto LABEL_124;
        }
        v131 = v128 + 16LL * (*(_DWORD *)v130 + 12) + 312;
      }
      else
      {
LABEL_124:
        v131 = sub_AC5258(v124, IClassBoardSquareModel_TypeInfo, 12LL, v126);
      }
      v132 = (*(__int64 (__fastcall **)(__int64, _QWORD))v131)(v127, *(_QWORD *)(v131 + 8));
      v135 = v132;
      if ( !v132 )
        sub_B2C434(0LL, v133);
      v136 = *(_QWORD *)v132;
      if ( *(_WORD *)(*(_QWORD *)v132 + 298LL) )
      {
        v137 = 0LL;
        v138 = (int *)(*(_QWORD *)(v136 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v138 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          ++v137;
          v138 += 4;
          if ( v137 >= *(unsigned __int16 *)(*(_QWORD *)v132 + 298LL) )
            goto LABEL_131;
        }
        v139 = v136 + 16LL * *v138 + 312;
      }
      else
      {
LABEL_131:
        v139 = sub_AC5258(v132, IClassBoardSquareUser_TypeInfo, 0LL, v134);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v139)(v135, *(_QWORD *)(v139 + 8)) & 1) != 0 )
        break;
    }
  }
  v172[0] = 231;
  v173 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v174,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
  v173 = 0;
  this = (ClassBoardSquareModel_o *)v5->fields.entity;
  if ( !this )
    goto LABEL_189;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsBlank(
                                      (ClassBoardSquareEntity_o *)this,
                                      (const MethodInfo *)checkedBlankIdHashSet);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_136:
    v24 = 0;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22
  struct System_Collections_Generic_List_IClassBoardItemModel__o **p_itemList; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  unsigned __int64 v21; // x25
  int32_t v22; // w23
  int32_t v23; // w24
  ClassBoardItemModel_o *v24; // x22
  const MethodInfo *v25; // x3
  __int64 v26; // x0

  if ( (byte_4189596 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardItemModel_TypeInfo, itemIds);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardItemModel__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo, v9);
    byte_4189596 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v10;
  p_itemList = &this->fields.itemList;
  sub_B2C2F8((BattleServantConfConponent_o *)p_itemList, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
  if ( !itemIds )
    goto LABEL_13;
  v20 = *(_QWORD *)&itemIds->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v20 )
        goto LABEL_12;
      if ( !itemNums )
        break;
      if ( v21 >= itemNums->max_length )
      {
LABEL_12:
        v26 = sub_B2C460(v18);
        sub_B2C400(v26, 0LL);
      }
      v22 = itemIds->m_Items[v21 + 1];
      v23 = itemNums->m_Items[v21 + 1];
      v24 = (ClassBoardItemModel_o *)sub_B2C42C(ClassBoardItemModel_TypeInfo);
      ClassBoardItemModel___ctor(v24, v22, v23, v25);
      v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_itemList;
      if ( !*p_itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v18,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_IClassBoardItemModel__Add__);
      LODWORD(v20) = itemIds->max_length;
      if ( (__int64)++v21 >= (int)v20 )
        return;
    }
LABEL_13:
    sub_B2C434(v18, v19);
  }
}


bool __fastcall ClassBoardSquareModel__IsBlankConnected(
        ClassBoardSquareModel_o *this,
        IClassBoardSquareModel_o *blankModel,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  ClassBoardSquareModel_o *v6; // x21
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
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v26; // x3
  IClassBoardSquareModel_c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  int32_t v31; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  __int64 v33; // x3
  IClassBoardSquareModel_c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x3
  ClassBoardSquareModel_c *v39; // x8
  ClassBoardSquareModel_o *v40; // x22
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x3
  __int64 v46; // x22
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x3
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x3
  __int64 v59; // x24
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  int *v62; // x11
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x3
  __int64 v67; // x25
  __int64 v68; // x8
  unsigned __int64 v69; // x10
  int *v70; // x11
  __int64 v71; // x0
  __int64 v72; // x3
  __int64 v73; // x8
  unsigned __int64 v74; // x10
  int *v75; // x11
  __int64 v76; // x0
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x3
  __int64 v80; // x25
  __int64 v81; // x8
  unsigned __int64 v82; // x10
  int *v83; // x11
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v88; // x8
  unsigned __int64 v89; // x10
  int *v90; // x11
  __int64 v91; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v92; // x0
  __int64 v93; // x8
  unsigned __int64 v94; // x10
  IClassBoardLineModel_c **v95; // x11
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x3
  __int64 v100; // x25
  __int64 v101; // x8
  unsigned __int64 v102; // x10
  int *v103; // x11
  __int64 v104; // x0
  __int64 v105; // x8
  unsigned __int64 v106; // x10
  IClassBoardLineModel_c **v107; // x11
  __int64 v108; // x0
  __int64 v109; // x0
  __int64 v110; // x1
  __int64 v111; // x3
  __int64 v112; // x25
  __int64 v113; // x8
  unsigned __int64 v114; // x10
  int *v115; // x11
  __int64 v116; // x0
  __int64 v117; // x0
  __int64 v118; // x1
  struct ClassBoardSquareEntity_o *v119; // x8
  __int64 v120; // x8
  unsigned __int64 v121; // x10
  IClassBoardLineModel_c **v122; // x11
  __int64 v123; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v124; // x0
  __int64 v125; // x8
  unsigned __int64 v126; // x10
  int *v127; // x11
  __int64 v128; // x0
  int v129; // w19
  _BOOL8 v130; // x0
  __int64 v131; // x1
  __int64 v132; // x3
  Il2CppObject *current; // x20
  Il2CppClass *v134; // x8
  unsigned __int64 v135; // x10
  int32_t *v136; // x11
  __int64 v137; // x0
  System_Enum_o *v138; // x20
  System_Enum_o *v139; // x0
  bool v140; // w19
  int v141; // w8
  int v142; // w23
  int v143; // w9
  System_Collections_Generic_HashSet_int__o *v145; // [xsp+8h] [xbp-A8h]
  int v146; // [xsp+14h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v147; // [xsp+18h] [xbp-98h] BYREF
  int v148[3]; // [xsp+30h] [xbp-80h]
  int v149; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v150; // [xsp+40h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4189597 & 1) == 0 )
  {
    sub_B2C35C(&AcquireFlag_TypeInfo, blankModel);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Contains__, v11);
    sub_B2C35C(&IClassBoardLineModel_TypeInfo, v12);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v13);
    sub_B2C35C(&System_IDisposable_TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v15);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v16);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v20);
    this = (ClassBoardSquareModel_o *)sub_B2C35C(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v21);
    byte_4189597 = 1;
  }
  memset(&v150, 0, sizeof(v150));
  v149 = 0;
  if ( !blankModel )
    goto LABEL_158;
  klass = blankModel->klass;
  if ( *(_WORD *)&blankModel->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v23;
      p_offset += 4;
      if ( v23 >= *(unsigned __int16 *)&blankModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(blankModel, IClassBoardSquareModel_TypeInfo, 0LL, method);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                      blankModel,
                                      *(_QWORD *)(p_method + 8));
  if ( !checkedBlankIdHashSet )
    goto LABEL_158;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          checkedBlankIdHashSet,
          (int32_t)this,
          (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v27 = blankModel->klass;
    if ( *(_WORD *)&blankModel->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v29 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&blankModel->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_AC5258(blankModel, IClassBoardSquareModel_TypeInfo, 0LL, v26);
    }
    v31 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v30)(blankModel, *(_QWORD *)(v30 + 8));
    v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v32,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    System_Collections_Generic_HashSet_int___Add(
      checkedBlankIdHashSet,
      v31,
      (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
    v34 = blankModel->klass;
    if ( *(_WORD *)&blankModel->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v36 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)&blankModel->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v37 = (__int64)&v34->vtable[*v36 + 9].method;
    }
    else
    {
LABEL_22:
      v37 = sub_AC5258(blankModel, IClassBoardSquareModel_TypeInfo, 9LL, v33);
    }
    this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v37)(
                                        blankModel,
                                        *(_QWORD *)(v37 + 8));
    if ( this )
    {
      v39 = this->klass;
      v40 = this;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v41 = 0LL;
        v42 = &v39->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v42 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
        {
          ++v41;
          v42 += 4;
          if ( v41 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_29;
        }
        v43 = (__int64)(&v39->vtable._0_Equals.method + 2 * *v42);
      }
      else
      {
LABEL_29:
        v43 = sub_AC5258(this, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL, v38);
      }
      v145 = checkedBlankIdHashSet;
      v46 = (*(__int64 (__fastcall **)(ClassBoardSquareModel_o *, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
      if ( !v46 )
        sub_B2C434(0LL, v44);
      while ( 1 )
      {
        v47 = *(_QWORD *)v46;
        if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
        {
          v48 = 0LL;
          v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v48;
            v49 += 4;
            if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
              goto LABEL_36;
          }
          v50 = v47 + 16LL * *v49 + 312;
        }
        else
        {
LABEL_36:
          v50 = sub_AC5258(v46, System_Collections_IEnumerator_TypeInfo, 0LL, v45);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
          break;
        v52 = *(_QWORD *)v46;
        if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
        {
          v53 = 0LL;
          v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v54 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
          {
            ++v53;
            v54 += 4;
            if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
              goto LABEL_43;
          }
          v55 = v52 + 16LL * *v54 + 312;
        }
        else
        {
LABEL_43:
          v55 = sub_AC5258(v46, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL, v51);
        }
        v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v46, *(_QWORD *)(v55 + 8));
        v59 = v56;
        if ( !v56 )
          sub_B2C434(0LL, v57);
        v60 = *(_QWORD *)v56;
        if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
        {
          v61 = 0LL;
          v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v62 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v61;
            v62 += 4;
            if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
              goto LABEL_50;
          }
          v63 = v60 + 16LL * *v62 + 312;
        }
        else
        {
LABEL_50:
          v63 = sub_AC5258(v56, IClassBoardLineModel_TypeInfo, 0LL, v58);
        }
        v64 = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8));
        v67 = v64;
        if ( !v64 )
          sub_B2C434(0LL, v65);
        v68 = *(_QWORD *)v64;
        if ( *(_WORD *)(*(_QWORD *)v64 + 298LL) )
        {
          v69 = 0LL;
          v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
          while ( *((IClassBoardSquareModel_c **)v70 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v69;
            v70 += 4;
            if ( v69 >= *(unsigned __int16 *)(*(_QWORD *)v64 + 298LL) )
              goto LABEL_57;
          }
          v71 = v68 + 16LL * *v70 + 312;
        }
        else
        {
LABEL_57:
          v71 = sub_AC5258(v64, IClassBoardSquareModel_TypeInfo, 0LL, v66);
        }
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8)) != v31 )
        {
          v73 = *(_QWORD *)v59;
          if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
          {
            v74 = 0LL;
            v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
            while ( *((IClassBoardLineModel_c **)v75 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v74;
              v75 += 4;
              if ( v74 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
                goto LABEL_64;
            }
            v76 = v73 + 16LL * *v75 + 312;
          }
          else
          {
LABEL_64:
            v76 = sub_AC5258(v59, IClassBoardLineModel_TypeInfo, 0LL, v72);
          }
          v77 = (*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v59, *(_QWORD *)(v76 + 8));
          v80 = v77;
          if ( !v77 )
            sub_B2C434(0LL, v78);
          v81 = *(_QWORD *)v77;
          if ( *(_WORD *)(*(_QWORD *)v77 + 298LL) )
          {
            v82 = 0LL;
            v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
            while ( *((IClassBoardSquareModel_c **)v83 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v82;
              v83 += 4;
              if ( v82 >= *(unsigned __int16 *)(*(_QWORD *)v77 + 298LL) )
                goto LABEL_71;
            }
            v84 = v81 + 16LL * *v83 + 312;
          }
          else
          {
LABEL_71:
            v84 = sub_AC5258(v77, IClassBoardSquareModel_TypeInfo, 0LL, v79);
          }
          v85 = (*(__int64 (__fastcall **)(__int64, _QWORD))v84)(v80, *(_QWORD *)(v84 + 8));
          entity = v6->fields.entity;
          if ( !entity )
            sub_B2C434(v85, v86);
          if ( (_DWORD)v85 != entity->fields.id )
          {
            v88 = *(_QWORD *)v59;
            if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
            {
              v89 = 0LL;
              v90 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
              while ( *((IClassBoardLineModel_c **)v90 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v89;
                v90 += 4;
                if ( v89 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
                  goto LABEL_79;
              }
              v91 = v88 + 16LL * *v90 + 312;
            }
            else
            {
LABEL_79:
              v91 = sub_AC5258(v59, IClassBoardLineModel_TypeInfo, 0LL, v72);
            }
            v92 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v91)(
                                                                           v59,
                                                                           *(_QWORD *)(v91 + 8));
            if ( !v32 )
              sub_B2C434(v92, v92);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v32,
              v92,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          }
        }
        v93 = *(_QWORD *)v59;
        if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
        {
          v94 = 0LL;
          v95 = (IClassBoardLineModel_c **)(*(_QWORD *)(v93 + 176) + 8LL);
          while ( *(v95 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v94;
            v95 += 2;
            if ( v94 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
              goto LABEL_87;
          }
          v96 = v93 + 16LL * (*(_DWORD *)v95 + 1) + 312;
        }
        else
        {
LABEL_87:
          v96 = sub_AC5258(v59, IClassBoardLineModel_TypeInfo, 1LL, v72);
        }
        v97 = (*(__int64 (__fastcall **)(__int64, _QWORD))v96)(v59, *(_QWORD *)(v96 + 8));
        v100 = v97;
        if ( !v97 )
          sub_B2C434(0LL, v98);
        v101 = *(_QWORD *)v97;
        if ( *(_WORD *)(*(_QWORD *)v97 + 298LL) )
        {
          v102 = 0LL;
          v103 = (int *)(*(_QWORD *)(v101 + 176) + 8LL);
          while ( *((IClassBoardSquareModel_c **)v103 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v102;
            v103 += 4;
            if ( v102 >= *(unsigned __int16 *)(*(_QWORD *)v97 + 298LL) )
              goto LABEL_94;
          }
          v104 = v101 + 16LL * *v103 + 312;
        }
        else
        {
LABEL_94:
          v104 = sub_AC5258(v97, IClassBoardSquareModel_TypeInfo, 0LL, v99);
        }
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v104)(v100, *(_QWORD *)(v104 + 8)) != v31 )
        {
          v105 = *(_QWORD *)v59;
          if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
          {
            v106 = 0LL;
            v107 = (IClassBoardLineModel_c **)(*(_QWORD *)(v105 + 176) + 8LL);
            while ( *(v107 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v106;
              v107 += 2;
              if ( v106 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
                goto LABEL_101;
            }
            v108 = v105 + 16LL * (*(_DWORD *)v107 + 1) + 312;
          }
          else
          {
LABEL_101:
            v108 = sub_AC5258(v59, IClassBoardLineModel_TypeInfo, 1LL, v45);
          }
          v109 = (*(__int64 (__fastcall **)(__int64, _QWORD))v108)(v59, *(_QWORD *)(v108 + 8));
          v112 = v109;
          if ( !v109 )
            sub_B2C434(0LL, v110);
          v113 = *(_QWORD *)v109;
          if ( *(_WORD *)(*(_QWORD *)v109 + 298LL) )
          {
            v114 = 0LL;
            v115 = (int *)(*(_QWORD *)(v113 + 176) + 8LL);
            while ( *((IClassBoardSquareModel_c **)v115 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v114;
              v115 += 4;
              if ( v114 >= *(unsigned __int16 *)(*(_QWORD *)v109 + 298LL) )
                goto LABEL_108;
            }
            v116 = v113 + 16LL * *v115 + 312;
          }
          else
          {
LABEL_108:
            v116 = sub_AC5258(v109, IClassBoardSquareModel_TypeInfo, 0LL, v111);
          }
          v117 = (*(__int64 (__fastcall **)(__int64, _QWORD))v116)(v112, *(_QWORD *)(v116 + 8));
          v119 = v6->fields.entity;
          if ( !v119 )
            sub_B2C434(v117, v118);
          if ( (_DWORD)v117 != v119->fields.id )
          {
            v120 = *(_QWORD *)v59;
            if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
            {
              v121 = 0LL;
              v122 = (IClassBoardLineModel_c **)(*(_QWORD *)(v120 + 176) + 8LL);
              while ( *(v122 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v121;
                v122 += 2;
                if ( v121 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
                  goto LABEL_116;
              }
              v123 = v120 + 16LL * (*(_DWORD *)v122 + 1) + 312;
            }
            else
            {
LABEL_116:
              v123 = sub_AC5258(v59, IClassBoardLineModel_TypeInfo, 1LL, v45);
            }
            v124 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v123)(
                                                                            v59,
                                                                            *(_QWORD *)(v123 + 8));
            if ( !v32 )
              sub_B2C434(v124, v124);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v32,
              v124,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          }
        }
      }
      v148[0] = 177;
      v149 = 1;
      v125 = *(_QWORD *)v46;
      if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
      {
        v126 = 0LL;
        v127 = (int *)(*(_QWORD *)(v125 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v127 - 1) != System_IDisposable_TypeInfo )
        {
          ++v126;
          v127 += 4;
          if ( v126 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
            goto LABEL_124;
        }
        v128 = v125 + 16LL * *v127 + 312;
      }
      else
      {
LABEL_124:
        v128 = sub_AC5258(v46, System_IDisposable_TypeInfo, 0LL, v51);
      }
      this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v128)(v46, *(_QWORD *)(v128 + 8));
      v149 = 0;
      if ( v32 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v147,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v32,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
        v129 = 0;
        v150 = v147;
        while ( 1 )
        {
          v130 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v150,
                   (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
          if ( !v130 )
            break;
          current = v150.fields.current;
          if ( !v150.fields.current )
            sub_B2C434(v130, v131);
          v134 = v150.fields.current->klass;
          if ( *(_WORD *)&v150.fields.current->klass->_2.bitflags1 )
          {
            v135 = 0LL;
            v136 = &v134->_1.interfaceOffsets->offset;
            while ( *((IClassBoardSquareModel_c **)v136 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v135;
              v136 += 4;
              if ( v135 >= *(unsigned __int16 *)&v150.fields.current->klass->_2.bitflags1 )
                goto LABEL_134;
            }
            v137 = (__int64)&v134->vtable[*v136 + 13].method;
          }
          else
          {
LABEL_134:
            v137 = sub_AC5258(v150.fields.current, IClassBoardSquareModel_TypeInfo, 13LL, v132);
          }
          v129 |= (*(__int64 (__fastcall **)(Il2CppObject *, System_Collections_Generic_HashSet_int__o *, _QWORD))v137)(
                    current,
                    v145,
                    *(_QWORD *)(v137 + 8));
          LODWORD(v147.fields.list) = v129;
          v138 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v147);
          v146 = 1;
          v139 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v146);
          if ( !v138 )
            sub_B2C434(v139, v139);
          if ( System_Enum__HasFlag(v138, v139, 0LL) )
          {
            v140 = 1;
            v141 = 258;
            goto LABEL_140;
          }
        }
        v140 = 0;
        v141 = 256;
LABEL_140:
        v148[0] = v141;
        v142 = ++v149;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v150,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
        if ( !v142 )
          return 0;
        v143 = v148[v142 - 1];
        if ( v143 == 256 )
        {
          v140 = 0;
        }
        else if ( v143 != 258 )
        {
          return 0;
        }
        v149 = v142 - 1;
        return v140;
      }
    }
LABEL_158:
    sub_B2C434(this, blankModel);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
  return entity->fields.assetId;
}


int32_t __fastcall ClassBoardSquareModel__get_BaseId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B2C434(this, method);
  return entity->fields.classBoardBaseId;
}


bool __fastcall ClassBoardSquareModel__get_HasLine(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  if ( (byte_4189593 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_IClassBoardLineModel___, method);
    byte_4189593 = 1;
  }
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
           (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
}


int32_t __fastcall ClassBoardSquareModel__get_IconId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B2C434(this, method);
  return entity->fields.iconId;
}


int32_t __fastcall ClassBoardSquareModel__get_Id(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B2C434(this, method);
  return entity->fields.id;
}


bool __fastcall ClassBoardSquareModel__get_IsBlank(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B2C434(0LL, method);
  return ClassBoardSquareEntity__get_IsBlank(entity, method);
}


bool __fastcall ClassBoardSquareModel__get_IsStart(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
  return entity->fields.skillType;
}


int32_t __fastcall ClassBoardSquareModel__get_TargetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B2C434(this, method);
  return entity->fields.targetId;
}


int32_t __fastcall ClassBoardSquareModel__get_UpSkillLv(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B2C434(this, method);
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
  __int64 v6; // x1
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x3
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v13; // x8
  int v14; // w19
  unsigned __int64 v15; // x10
  int *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x3
  ClassBoardSquareModel___c__DisplayClass38_0_c *v19; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v20; // x20
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0

  v5 = this;
  if ( (byte_4184EFB & 1) == 0 )
  {
    sub_B2C35C(&IClassBoardLineModel_TypeInfo, x);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v6);
    byte_4184EFB = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(x, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v5->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v13 = lineModel->klass;
  v14 = (int)this;
  if ( *(_WORD *)&lineModel->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    v16 = &v13->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v16 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v15;
      v16 += 4;
      if ( v15 >= *(unsigned __int16 *)&lineModel->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v17 = (__int64)&v13->vtable[*v16].method;
  }
  else
  {
LABEL_15:
    v17 = sub_AC5258(lineModel, IClassBoardLineModel_TypeInfo, 0LL, v11);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v17)(
                                                            lineModel,
                                                            *(_QWORD *)(v17 + 8));
  if ( !this )
LABEL_25:
    sub_B2C434(this, x);
  v19 = this->klass;
  v20 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = &v19->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v22 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v23 = (__int64)(&v19->vtable._0_Equals.method + 2 * *v22);
  }
  else
  {
LABEL_22:
    v23 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 0LL, v18);
  }
  return v14 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v23)(
                  v20,
                  *(_QWORD *)(v23 + 8));
}


bool __fastcall ClassBoardSquareModel___c__DisplayClass38_0___FindLinkSquares_b__1(
        ClassBoardSquareModel___c__DisplayClass38_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardSquareModel___c__DisplayClass38_0_o *v5; // x19
  __int64 v6; // x1
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x3
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v13; // x8
  int v14; // w19
  unsigned __int64 v15; // x10
  IClassBoardLineModel_c **v16; // x11
  __int64 v17; // x0
  __int64 v18; // x3
  ClassBoardSquareModel___c__DisplayClass38_0_c *v19; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v20; // x20
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0

  v5 = this;
  if ( (byte_4184EFC & 1) == 0 )
  {
    sub_B2C35C(&IClassBoardLineModel_TypeInfo, x);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v6);
    byte_4184EFC = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(x, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v5->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v13 = lineModel->klass;
  v14 = (int)this;
  if ( *(_WORD *)&lineModel->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    v16 = (IClassBoardLineModel_c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v16 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v15;
      v16 += 2;
      if ( v15 >= *(unsigned __int16 *)&lineModel->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v17 = (__int64)&v13->vtable[*(_DWORD *)v16 + 1].method;
  }
  else
  {
LABEL_15:
    v17 = sub_AC5258(lineModel, IClassBoardLineModel_TypeInfo, 1LL, v11);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v17)(
                                                            lineModel,
                                                            *(_QWORD *)(v17 + 8));
  if ( !this )
LABEL_25:
    sub_B2C434(this, x);
  v19 = this->klass;
  v20 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = &v19->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v22 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v23 = (__int64)(&v19->vtable._0_Equals.method + 2 * *v22);
  }
  else
  {
LABEL_22:
    v23 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 0LL, v18);
  }
  return v14 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v23)(
                  v20,
                  *(_QWORD *)(v23 + 8));
}