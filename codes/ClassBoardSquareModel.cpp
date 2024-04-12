void __fastcall ClassBoardSquareModel___ctor(
        ClassBoardSquareModel_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **entity; // x20
  __int64 v26; // x22
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
  __int64 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  struct ClassBoardSquareEntity_o *v42; // x8

  if ( (byte_42B0764 & 1) == 0 )
  {
    sub_B52984(&ClassBoardSquareUser_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
    sub_B52984(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
    byte_42B0764 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v5;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v12;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.lineList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.entity = squareEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)squareEntity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  entity = (System_Int32_array **)this->fields.entity;
  v26 = sub_B52A54(ClassBoardSquareUser_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  *(_QWORD *)(v26 + 24) = entity;
  sub_B52920((BattleServantConfConponent_o *)(v26 + 24), entity, v27, v28, v29, v30, v31, v32);
  this->fields.user = (struct IClassBoardSquareUser_o *)v26;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.user,
    (System_Int32_array **)v26,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v42 = this->fields.entity;
  if ( !v42 )
    sub_B52A5C(v39, v40);
  ClassBoardSquareModel__InitializeItemList(this, v42->fields.itemIds, v42->fields.itemNums, v41);
}


void __fastcall ClassBoardSquareModel__AddLine(
        ClassBoardSquareModel_o *this,
        IClassBoardLineModel_o *line,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0

  if ( (byte_42B0765 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
    byte_42B0765 = 1;
  }
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B52A5C(0LL, line);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)line,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
}


void __fastcall ClassBoardSquareModel__FindLinkSquares(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_List_IClassBoardSquareModel__o **connectSquareList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0
  __int64 v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **current; // x1
  __int64 **v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  __int64 *v20; // x23
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x3
  __int64 v28; // x23
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x3
  struct ClassBoardSquareEntity_o *entity; // x8
  System_Collections_Generic_List_T__o *v37; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x24
  __int64 *v39; // x23
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  IClassBoardLineModel_c **v42; // x11
  __int64 v43; // x0
  __int64 *v44; // x23
  __int64 v45; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *v46; // x22
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x3
  __int64 v53; // x23
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  struct ClassBoardSquareEntity_o *v60; // x8
  System_Collections_Generic_List_T__o *v61; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v62; // x24
  _BOOL8 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x3
  __int64 *v66; // x23
  __int64 v67; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *v68; // x22
  unsigned __int64 v69; // x10
  IClassBoardLineModel_c **v70; // x11
  __int64 v71; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x3
  __int64 *v76; // x22
  __int64 v77; // x8
  unsigned __int64 v78; // x10
  int *v79; // x11
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x3
  __int64 v84; // x22
  __int64 v85; // x8
  unsigned __int64 v86; // x10
  IClassBoardSquareModel_c **v87; // x11
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x1
  __int64 v91; // x3
  __int64 *v92; // x21
  __int64 v93; // x8
  unsigned __int64 v94; // x10
  int *v95; // x11
  __int64 v96; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v97; // x0
  __int64 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x3
  __int64 *v101; // x22
  __int64 v102; // x8
  unsigned __int64 v103; // x10
  IClassBoardLineModel_c **v104; // x11
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x1
  __int64 v108; // x3
  __int64 v109; // x22
  __int64 v110; // x8
  unsigned __int64 v111; // x10
  IClassBoardSquareModel_c **v112; // x11
  __int64 v113; // x0
  __int64 v114; // x0
  __int64 v115; // x1
  __int64 v116; // x3
  __int64 *v117; // x21
  __int64 v118; // x8
  unsigned __int64 v119; // x10
  IClassBoardLineModel_c **v120; // x11
  __int64 v121; // x0
  __int64 v122; // x0
  __int64 v123; // x1
  __int64 v124; // x3
  __int64 v125; // x21
  __int64 v126; // x8
  IClassBoardSquareModel_c *v127; // x1
  unsigned __int64 v128; // x10
  IClassBoardSquareModel_c **v129; // x11
  __int64 v130; // x0
  __int64 v131; // x1
  __int64 v132; // x8
  unsigned __int64 v133; // x10
  IClassBoardSquareModel_c **v134; // x11
  System_Collections_Generic_List_Enumerator_T__o v135; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v136; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42B0768 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_IClassBoardSquareModel___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__);
    sub_B52984(&Method_System_Func_IClassBoardSquareModel__bool___ctor__);
    sub_B52984(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_B52984(&IClassBoardLineModel_TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
    sub_B52984(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__);
    sub_B52984(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__);
    sub_B52984(&ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo);
    byte_42B0768 = 1;
  }
  memset(&v136, 0, sizeof(v136));
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B52A5C(0LL, connectSquareList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v135,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lineList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v136 = v135;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v136,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
  {
    v6 = sub_B52A54(ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo);
    ClassBoardSquareModel___c__DisplayClass38_0___ctor((ClassBoardSquareModel___c__DisplayClass38_0_o *)v6, 0LL);
    if ( !v6 )
      sub_B52A5C(v7, v8);
    current = (System_Int32_array **)v136.fields.current;
    *(_QWORD *)(v6 + 16) = v136.fields.current;
    v16 = (__int64 **)(v6 + 16);
    sub_B52920((BattleServantConfConponent_o *)(v6 + 16), current, v9, v10, v11, v12, v13, v14);
    v20 = *(__int64 **)(v6 + 16);
    if ( !v20 )
      sub_B52A5C(v17, v18);
    v21 = *v20;
    if ( *(_WORD *)(*v20 + 298) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v23 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*v20 + 298) )
          goto LABEL_12;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_12:
      v24 = sub_AEB880(*v16, IClassBoardLineModel_TypeInfo, 0LL, v19);
    }
    v25 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8));
    v28 = v25;
    if ( !v25 )
      sub_B52A5C(0LL, v26);
    v29 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v30 = 0LL;
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v31 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_19;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_19:
      v32 = sub_AEB880(v25, IClassBoardSquareModel_TypeInfo, 0LL, v27);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
    entity = this->fields.entity;
    if ( !entity )
      sub_B52A5C(v33, v34);
    if ( (_DWORD)v33 == entity->fields.id
      || (v37 = (System_Collections_Generic_List_T__o *)*connectSquareList,
          v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_IClassBoardSquareModel__bool__TypeInfo),
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v38,
            (Il2CppObject *)v6,
            Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__,
            (const MethodInfo_2BC90BC *)Method_System_Func_IClassBoardSquareModel__bool___ctor__),
          v33 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                  v37,
                  (System_Func_T__bool__o *)v38,
                  (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_IClassBoardSquareModel___),
          (v33 & 1) != 0) )
    {
      v39 = *v16;
      if ( !*v16 )
        sub_B52A5C(v33, v34);
      v40 = *v39;
      if ( *(_WORD *)(*v39 + 298) )
      {
        v41 = 0LL;
        v42 = (IClassBoardLineModel_c **)(*(_QWORD *)(v40 + 176) + 8LL);
        while ( *(v42 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v41;
          v42 += 2;
          if ( v41 >= *(unsigned __int16 *)(*v39 + 298) )
            goto LABEL_29;
        }
        v43 = v40 + 16LL * (*(_DWORD *)v42 + 1) + 312;
      }
      else
      {
LABEL_29:
        v43 = sub_AEB880(*v16, IClassBoardLineModel_TypeInfo, 1LL, v35);
      }
      v50 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
      v53 = v50;
      if ( !v50 )
        sub_B52A5C(0LL, v51);
      v54 = *(_QWORD *)v50;
      if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
      {
        v55 = 0LL;
        v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v56 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v55;
          v56 += 4;
          if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
            goto LABEL_42;
        }
        v57 = v54 + 16LL * *v56 + 312;
      }
      else
      {
LABEL_42:
        v57 = sub_AEB880(v50, IClassBoardSquareModel_TypeInfo, 0LL, v52);
      }
      v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
      v60 = this->fields.entity;
      if ( !v60 )
        sub_B52A5C(v58, v59);
      if ( (_DWORD)v58 != v60->fields.id )
      {
        v61 = (System_Collections_Generic_List_T__o *)*connectSquareList;
        v62 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_IClassBoardSquareModel__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v62,
          (Il2CppObject *)v6,
          Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__,
          (const MethodInfo_2BC90BC *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
        v63 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                v61,
                (System_Func_T__bool__o *)v62,
                (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_IClassBoardSquareModel___);
        if ( !v63 )
        {
          v66 = *v16;
          if ( !*v16 )
            sub_B52A5C(v63, v64);
          v67 = *v66;
          v68 = *connectSquareList;
          if ( *(_WORD *)(*v66 + 298) )
          {
            v69 = 0LL;
            v70 = (IClassBoardLineModel_c **)(*(_QWORD *)(v67 + 176) + 8LL);
            while ( *(v70 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v69;
              v70 += 2;
              if ( v69 >= *(unsigned __int16 *)(*v66 + 298) )
                goto LABEL_52;
            }
            v71 = v67 + 16LL * (*(_DWORD *)v70 + 1) + 312;
          }
          else
          {
LABEL_52:
            v71 = sub_AEB880(*v16, IClassBoardLineModel_TypeInfo, 1LL, v65);
          }
          v97 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v71)(
                                                                         v66,
                                                                         *(_QWORD *)(v71 + 8));
          if ( !v68 )
            sub_B52A5C(v97, v97);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v68,
            v97,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          v101 = *v16;
          if ( !*v16 )
            sub_B52A5C(v98, v99);
          v102 = *v101;
          if ( *(_WORD *)(*v101 + 298) )
          {
            v103 = 0LL;
            v104 = (IClassBoardLineModel_c **)(*(_QWORD *)(v102 + 176) + 8LL);
            while ( *(v104 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v103;
              v104 += 2;
              if ( v103 >= *(unsigned __int16 *)(*v101 + 298) )
                goto LABEL_83;
            }
            v105 = v102 + 16LL * (*(_DWORD *)v104 + 1) + 312;
          }
          else
          {
LABEL_83:
            v105 = sub_AEB880(*v16, IClassBoardLineModel_TypeInfo, 1LL, v100);
          }
          v106 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v105)(v101, *(_QWORD *)(v105 + 8));
          v109 = v106;
          if ( !v106 )
            sub_B52A5C(0LL, v107);
          v110 = *(_QWORD *)v106;
          if ( *(_WORD *)(*(_QWORD *)v106 + 298LL) )
          {
            v111 = 0LL;
            v112 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v110 + 176) + 8LL);
            while ( *(v112 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v111;
              v112 += 2;
              if ( v111 >= *(unsigned __int16 *)(*(_QWORD *)v106 + 298LL) )
                goto LABEL_90;
            }
            v113 = v110 + 16LL * (*(_DWORD *)v112 + 5) + 312;
          }
          else
          {
LABEL_90:
            v113 = sub_AEB880(v106, IClassBoardSquareModel_TypeInfo, 5LL, v108);
          }
          v114 = (*(__int64 (__fastcall **)(__int64, _QWORD))v113)(v109, *(_QWORD *)(v113 + 8));
          if ( (v114 & 1) != 0 )
          {
            v117 = *v16;
            if ( !v117 )
              sub_B52A5C(v114, v115);
            v118 = *v117;
            if ( *(_WORD *)(*v117 + 298) )
            {
              v119 = 0LL;
              v120 = (IClassBoardLineModel_c **)(*(_QWORD *)(v118 + 176) + 8LL);
              while ( *(v120 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v119;
                v120 += 2;
                if ( v119 >= *(unsigned __int16 *)(*v117 + 298) )
                  goto LABEL_98;
              }
              v121 = v118 + 16LL * (*(_DWORD *)v120 + 1) + 312;
            }
            else
            {
LABEL_98:
              v121 = sub_AEB880(v117, IClassBoardLineModel_TypeInfo, 1LL, v116);
            }
            v122 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v121)(v117, *(_QWORD *)(v121 + 8));
            v125 = v122;
            if ( !v122 )
              sub_B52A5C(0LL, v131);
            v132 = *(_QWORD *)v122;
            v127 = IClassBoardSquareModel_TypeInfo;
            if ( !*(_WORD *)(*(_QWORD *)v122 + 298LL) )
              goto LABEL_105;
            v133 = 0LL;
            v134 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v132 + 176) + 8LL);
            while ( *(v134 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v133;
              v134 += 2;
              if ( v133 >= *(unsigned __int16 *)(*(_QWORD *)v122 + 298LL) )
                goto LABEL_105;
            }
            v130 = v132 + 16LL * (*(_DWORD *)v134 + 15) + 312;
            goto LABEL_107;
          }
        }
      }
    }
    else
    {
      v44 = *v16;
      if ( !*v16 )
        sub_B52A5C(v33, v34);
      v45 = *v44;
      v46 = *connectSquareList;
      if ( *(_WORD *)(*v44 + 298) )
      {
        v47 = 0LL;
        v48 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v48 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v47;
          v48 += 4;
          if ( v47 >= *(unsigned __int16 *)(*v44 + 298) )
            goto LABEL_35;
        }
        v49 = v45 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_35:
        v49 = sub_AEB880(*v16, IClassBoardLineModel_TypeInfo, 0LL, v35);
      }
      v72 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v49)(
                                                                     v44,
                                                                     *(_QWORD *)(v49 + 8));
      if ( !v46 )
        sub_B52A5C(v72, v72);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v46,
        v72,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
      v76 = *v16;
      if ( !*v16 )
        sub_B52A5C(v73, v74);
      v77 = *v76;
      if ( *(_WORD *)(*v76 + 298) )
      {
        v78 = 0LL;
        v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v79 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v78;
          v79 += 4;
          if ( v78 >= *(unsigned __int16 *)(*v76 + 298) )
            goto LABEL_60;
        }
        v80 = v77 + 16LL * *v79 + 312;
      }
      else
      {
LABEL_60:
        v80 = sub_AEB880(*v16, IClassBoardLineModel_TypeInfo, 0LL, v75);
      }
      v81 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v80)(v76, *(_QWORD *)(v80 + 8));
      v84 = v81;
      if ( !v81 )
        sub_B52A5C(0LL, v82);
      v85 = *(_QWORD *)v81;
      if ( *(_WORD *)(*(_QWORD *)v81 + 298LL) )
      {
        v86 = 0LL;
        v87 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v85 + 176) + 8LL);
        while ( *(v87 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v86;
          v87 += 2;
          if ( v86 >= *(unsigned __int16 *)(*(_QWORD *)v81 + 298LL) )
            goto LABEL_67;
        }
        v88 = v85 + 16LL * (*(_DWORD *)v87 + 5) + 312;
      }
      else
      {
LABEL_67:
        v88 = sub_AEB880(v81, IClassBoardSquareModel_TypeInfo, 5LL, v83);
      }
      v89 = (*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v84, *(_QWORD *)(v88 + 8));
      if ( (v89 & 1) != 0 )
      {
        v92 = *v16;
        if ( !v92 )
          sub_B52A5C(v89, v90);
        v93 = *v92;
        if ( *(_WORD *)(*v92 + 298) )
        {
          v94 = 0LL;
          v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v95 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v94;
            v95 += 4;
            if ( v94 >= *(unsigned __int16 *)(*v92 + 298) )
              goto LABEL_75;
          }
          v96 = v93 + 16LL * *v95 + 312;
        }
        else
        {
LABEL_75:
          v96 = sub_AEB880(v92, IClassBoardLineModel_TypeInfo, 0LL, v91);
        }
        v122 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v96)(v92, *(_QWORD *)(v96 + 8));
        v125 = v122;
        if ( !v122 )
          sub_B52A5C(0LL, v123);
        v126 = *(_QWORD *)v122;
        v127 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)(*(_QWORD *)v122 + 298LL) )
        {
LABEL_105:
          v130 = sub_AEB880(v122, v127, 15LL, v124);
          goto LABEL_107;
        }
        v128 = 0LL;
        v129 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v126 + 176) + 8LL);
        while ( *(v129 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v128;
          v129 += 2;
          if ( v128 >= *(unsigned __int16 *)(*(_QWORD *)v122 + 298LL) )
            goto LABEL_105;
        }
        v130 = v126 + 16LL * (*(_DWORD *)v129 + 15) + 312;
LABEL_107:
        (*(void (__fastcall **)(__int64, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))v130)(
          v125,
          connectSquareList,
          *(_QWORD *)(v130 + 8));
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v136,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
}


int32_t __fastcall ClassBoardSquareModel__GetAcquireFlag(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_HashSet_int__o *v4; // x20
  ClassBoardSquareModel_o *v5; // x19
  struct IClassBoardSquareUser_o *user; // x21
  IClassBoardSquareUser_c *klass; // x8
  unsigned __int64 v8; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  int32_t v11; // w20
  __int64 v12; // x3
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  Il2CppObject *current; // x21
  Il2CppClass *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x3
  __int64 v24; // x22
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  IClassBoardSquareModel_c **v27; // x11
  __int64 v28; // x0
  __int64 v29; // x3
  Il2CppClass *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  IClassBoardSquareModel_o *v34; // x1
  const MethodInfo *v35; // x3
  Il2CppClass *v36; // x8
  unsigned __int64 v37; // x10
  IClassBoardLineModel_c **v38; // x11
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x3
  __int64 v43; // x22
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  IClassBoardSquareModel_c **v46; // x11
  __int64 v47; // x0
  __int64 v48; // x3
  Il2CppClass *v49; // x8
  unsigned __int64 v50; // x10
  IClassBoardLineModel_c **v51; // x11
  __int64 v52; // x0
  IClassBoardSquareModel_o *v53; // x1
  const MethodInfo *v54; // x3
  Il2CppClass *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x3
  __int64 v62; // x22
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x3
  struct ClassBoardSquareEntity_o *entity; // x8
  Il2CppClass *v71; // x8
  unsigned __int64 v72; // x10
  int32_t *v73; // x11
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x3
  __int64 v78; // x22
  __int64 v79; // x8
  unsigned __int64 v80; // x10
  IClassBoardSquareModel_c **v81; // x11
  __int64 v82; // x0
  __int64 v83; // x0
  __int64 v84; // x1
  __int64 v85; // x3
  __int64 v86; // x22
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  Il2CppClass *v91; // x8
  unsigned __int64 v92; // x10
  IClassBoardLineModel_c **v93; // x11
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x3
  __int64 v98; // x22
  __int64 v99; // x8
  unsigned __int64 v100; // x10
  int *v101; // x11
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 v104; // x1
  __int64 v105; // x3
  struct ClassBoardSquareEntity_o *v106; // x8
  Il2CppClass *v107; // x8
  unsigned __int64 v108; // x10
  IClassBoardLineModel_c **v109; // x11
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 v112; // x1
  __int64 v113; // x3
  __int64 v114; // x21
  __int64 v115; // x8
  unsigned __int64 v116; // x10
  IClassBoardSquareModel_c **v117; // x11
  __int64 v118; // x0
  __int64 v119; // x0
  __int64 v120; // x1
  __int64 v121; // x3
  __int64 v122; // x21
  __int64 v123; // x8
  unsigned __int64 v124; // x10
  int *v125; // x11
  __int64 v126; // x0
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x19
  System_Collections_Generic_List_IClassBoardItemModel__c *v128; // x8
  unsigned __int64 v129; // x10
  int *v130; // x11
  __int64 v131; // x0
  __int64 v132; // x1
  __int64 v133; // x3
  __int64 v134; // x19
  __int64 v135; // x8
  unsigned __int64 v136; // x10
  int *v137; // x11
  __int64 v138; // x0
  __int64 v139; // x8
  unsigned __int64 v140; // x10
  int *v141; // x11
  __int64 v142; // x0
  __int64 v143; // x0
  __int64 v144; // x1
  __int64 v145; // x3
  __int64 v146; // x21
  __int64 v147; // x8
  unsigned __int64 v148; // x10
  IClassBoardItemModel_c **v149; // x11
  __int64 v150; // x0
  int v151; // w8
  int v152; // w22
  __int64 v153; // x8
  unsigned __int64 v154; // x10
  int *v155; // x11
  __int64 v156; // x0
  System_Collections_Generic_List_Enumerator_T__o v158; // [xsp+0h] [xbp-90h] BYREF
  int v159[5]; // [xsp+18h] [xbp-78h]
  int v160; // [xsp+2Ch] [xbp-64h]
  System_Collections_Generic_List_Enumerator_T__o v161; // [xsp+30h] [xbp-60h] BYREF

  v4 = checkedBlankIdHashSet;
  v5 = this;
  if ( (byte_42B0762 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&IClassBoardItemModel_TypeInfo);
    sub_B52984(&IClassBoardLineModel_TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&IClassBoardSquareUser_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    this = (ClassBoardSquareModel_o *)sub_B52984(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
    byte_42B0762 = 1;
  }
  memset(&v161, 0, sizeof(v161));
  v160 = 0;
  if ( !v4 )
  {
    v4 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v4,
      (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  }
  user = v5->fields.user;
  if ( !user )
    goto LABEL_189;
  klass = user->klass;
  if ( *(_WORD *)&user->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareUser_c **)p_offset - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&user->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AEB880(v5->fields.user, IClassBoardSquareUser_TypeInfo, 0LL, v3);
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
    sub_B52A5C(this, checkedBlankIdHashSet);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v158,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v161 = v158;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v161,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    if ( !v13 )
    {
      v159[0] = 231;
      v160 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v161,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
      v160 = 0;
      v11 = 2;
LABEL_138:
      itemList = v5->fields.itemList;
      if ( itemList )
      {
        v128 = itemList->klass;
        if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
        {
          v129 = 0LL;
          v130 = &v128->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)v130 - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
          {
            ++v129;
            v130 += 4;
            if ( v129 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
              goto LABEL_143;
          }
          v131 = (__int64)(&v128->vtable._0_Equals.method + 2 * *v130);
        }
        else
        {
LABEL_143:
          v131 = sub_AEB880(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL, v12);
        }
        v134 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v131)(
                 itemList,
                 *(_QWORD *)(v131 + 8));
        if ( !v134 )
          sub_B52A5C(0LL, v132);
        while ( 1 )
        {
          v135 = *(_QWORD *)v134;
          if ( *(_WORD *)(*(_QWORD *)v134 + 298LL) )
          {
            v136 = 0LL;
            v137 = (int *)(*(_QWORD *)(v135 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v137 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v136;
              v137 += 4;
              if ( v136 >= *(unsigned __int16 *)(*(_QWORD *)v134 + 298LL) )
                goto LABEL_150;
            }
            v138 = v135 + 16LL * *v137 + 312;
          }
          else
          {
LABEL_150:
            v138 = sub_AEB880(v134, System_Collections_IEnumerator_TypeInfo, 0LL, v133);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v138)(v134, *(_QWORD *)(v138 + 8)) & 1) == 0 )
            break;
          v139 = *(_QWORD *)v134;
          if ( *(_WORD *)(*(_QWORD *)v134 + 298LL) )
          {
            v140 = 0LL;
            v141 = (int *)(*(_QWORD *)(v139 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v141 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
            {
              ++v140;
              v141 += 4;
              if ( v140 >= *(unsigned __int16 *)(*(_QWORD *)v134 + 298LL) )
                goto LABEL_157;
            }
            v142 = v139 + 16LL * *v141 + 312;
          }
          else
          {
LABEL_157:
            v142 = sub_AEB880(v134, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL, v133);
          }
          v143 = (*(__int64 (__fastcall **)(__int64, _QWORD))v142)(v134, *(_QWORD *)(v142 + 8));
          v146 = v143;
          if ( !v143 )
            sub_B52A5C(0LL, v144);
          v147 = *(_QWORD *)v143;
          if ( *(_WORD *)(*(_QWORD *)v143 + 298LL) )
          {
            v148 = 0LL;
            v149 = (IClassBoardItemModel_c **)(*(_QWORD *)(v147 + 176) + 8LL);
            while ( *(v149 - 1) != IClassBoardItemModel_TypeInfo )
            {
              ++v148;
              v149 += 2;
              if ( v148 >= *(unsigned __int16 *)(*(_QWORD *)v143 + 298LL) )
                goto LABEL_164;
            }
            v150 = v147 + 16LL * (*(_DWORD *)v149 + 2) + 312;
          }
          else
          {
LABEL_164:
            v150 = sub_AEB880(v143, IClassBoardItemModel_TypeInfo, 2LL, v145);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v150)(v146, *(_QWORD *)(v150 + 8)) & 1) == 0 )
          {
            v159[0] = 308;
            v151 = v160;
            v11 |= 8u;
            goto LABEL_169;
          }
        }
        v159[0] = 308;
        v151 = v160;
LABEL_169:
        v152 = v151 + 1;
        v160 = v151 + 1;
        v153 = *(_QWORD *)v134;
        if ( *(_WORD *)(*(_QWORD *)v134 + 298LL) )
        {
          v154 = 0LL;
          v155 = (int *)(*(_QWORD *)(v153 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v155 - 1) != System_IDisposable_TypeInfo )
          {
            ++v154;
            v155 += 4;
            if ( v154 >= *(unsigned __int16 *)(*(_QWORD *)v134 + 298LL) )
              goto LABEL_174;
          }
          v156 = v153 + 16LL * *v155 + 312;
        }
        else
        {
LABEL_174:
          v156 = sub_AEB880(v134, System_IDisposable_TypeInfo, 0LL, v133);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v156)(v134, *(_QWORD *)(v156 + 8));
        if ( v152 && v159[v152 - 1] == 308 )
          v160 = v152 - 1;
        return v11;
      }
      goto LABEL_189;
    }
    current = v161.fields.current;
    if ( !v161.fields.current )
      sub_B52A5C(v13, v14);
    v17 = v161.fields.current->klass;
    if ( *(_WORD *)&v161.fields.current->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v19 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&v161.fields.current->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_24:
      v20 = sub_AEB880(v161.fields.current, IClassBoardLineModel_TypeInfo, 0LL, v15);
    }
    v21 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v20)(current, *(_QWORD *)(v20 + 8));
    v24 = v21;
    if ( !v21 )
      sub_B52A5C(0LL, v22);
    v25 = *(_QWORD *)v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v26 = 0LL;
      v27 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *(v27 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v26;
        v27 += 2;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_31;
      }
      v28 = v25 + 16LL * (*(_DWORD *)v27 + 5) + 312;
    }
    else
    {
LABEL_31:
      v28 = sub_AEB880(v21, IClassBoardSquareModel_TypeInfo, 5LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) != 0 )
    {
      v30 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v31 = 0LL;
        v32 = &v30->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v32 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v31;
          v32 += 4;
          if ( v31 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_38;
        }
        v33 = (__int64)&v30->vtable[*v32].method;
      }
      else
      {
LABEL_38:
        v33 = sub_AEB880(current, IClassBoardLineModel_TypeInfo, 0LL, v29);
      }
      v34 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v33)(
                                          current,
                                          *(_QWORD *)(v33 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v5, v34, v4, v35) )
        break;
    }
    v36 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      v38 = (IClassBoardLineModel_c **)&v36->_1.interfaceOffsets->offset;
      while ( *(v38 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v37;
        v38 += 2;
        if ( v37 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_45;
      }
      v39 = (__int64)&v36->vtable[*(_DWORD *)v38 + 1].method;
    }
    else
    {
LABEL_45:
      v39 = sub_AEB880(current, IClassBoardLineModel_TypeInfo, 1LL, v29);
    }
    v40 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v39)(current, *(_QWORD *)(v39 + 8));
    v43 = v40;
    if ( !v40 )
      sub_B52A5C(0LL, v41);
    v44 = *(_QWORD *)v40;
    if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
    {
      v45 = 0LL;
      v46 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *(v46 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v45;
        v46 += 2;
        if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
          goto LABEL_52;
      }
      v47 = v44 + 16LL * (*(_DWORD *)v46 + 5) + 312;
    }
    else
    {
LABEL_52:
      v47 = sub_AEB880(v40, IClassBoardSquareModel_TypeInfo, 5LL, v42);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) != 0 )
    {
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
            goto LABEL_59;
        }
        v52 = (__int64)&v49->vtable[*(_DWORD *)v51 + 1].method;
      }
      else
      {
LABEL_59:
        v52 = sub_AEB880(current, IClassBoardLineModel_TypeInfo, 1LL, v48);
      }
      v53 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v52)(
                                          current,
                                          *(_QWORD *)(v52 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v5, v53, v4, v54) )
        break;
    }
    v55 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v56 = 0LL;
      v57 = &v55->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v57 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v56;
        v57 += 4;
        if ( v56 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_66;
      }
      v58 = (__int64)&v55->vtable[*v57].method;
    }
    else
    {
LABEL_66:
      v58 = sub_AEB880(current, IClassBoardLineModel_TypeInfo, 0LL, v48);
    }
    v59 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v58)(current, *(_QWORD *)(v58 + 8));
    v62 = v59;
    if ( !v59 )
      sub_B52A5C(0LL, v60);
    v63 = *(_QWORD *)v59;
    if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
    {
      v64 = 0LL;
      v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v65 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v64;
        v65 += 4;
        if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
          goto LABEL_73;
      }
      v66 = v63 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_73:
      v66 = sub_AEB880(v59, IClassBoardSquareModel_TypeInfo, 0LL, v61);
    }
    v67 = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v62, *(_QWORD *)(v66 + 8));
    entity = v5->fields.entity;
    if ( !entity )
      sub_B52A5C(v67, v68);
    if ( (_DWORD)v67 != entity->fields.id )
    {
      v71 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v72 = 0LL;
        v73 = &v71->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v73 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v72;
          v73 += 4;
          if ( v72 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_81;
        }
        v74 = (__int64)&v71->vtable[*v73].method;
      }
      else
      {
LABEL_81:
        v74 = sub_AEB880(current, IClassBoardLineModel_TypeInfo, 0LL, v69);
      }
      v75 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v74)(current, *(_QWORD *)(v74 + 8));
      v78 = v75;
      if ( !v75 )
        sub_B52A5C(0LL, v76);
      v79 = *(_QWORD *)v75;
      if ( *(_WORD *)(*(_QWORD *)v75 + 298LL) )
      {
        v80 = 0LL;
        v81 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v79 + 176) + 8LL);
        while ( *(v81 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v80;
          v81 += 2;
          if ( v80 >= *(unsigned __int16 *)(*(_QWORD *)v75 + 298LL) )
            goto LABEL_88;
        }
        v82 = v79 + 16LL * (*(_DWORD *)v81 + 12) + 312;
      }
      else
      {
LABEL_88:
        v82 = sub_AEB880(v75, IClassBoardSquareModel_TypeInfo, 12LL, v77);
      }
      v83 = (*(__int64 (__fastcall **)(__int64, _QWORD))v82)(v78, *(_QWORD *)(v82 + 8));
      v86 = v83;
      if ( !v83 )
        sub_B52A5C(0LL, v84);
      v87 = *(_QWORD *)v83;
      if ( *(_WORD *)(*(_QWORD *)v83 + 298LL) )
      {
        v88 = 0LL;
        v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v89 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          ++v88;
          v89 += 4;
          if ( v88 >= *(unsigned __int16 *)(*(_QWORD *)v83 + 298LL) )
            goto LABEL_95;
        }
        v90 = v87 + 16LL * *v89 + 312;
      }
      else
      {
LABEL_95:
        v90 = sub_AEB880(v83, IClassBoardSquareUser_TypeInfo, 0LL, v85);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8)) & 1) != 0 )
        break;
    }
    v91 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v92 = 0LL;
      v93 = (IClassBoardLineModel_c **)&v91->_1.interfaceOffsets->offset;
      while ( *(v93 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v92;
        v93 += 2;
        if ( v92 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_102;
      }
      v94 = (__int64)&v91->vtable[*(_DWORD *)v93 + 1].method;
    }
    else
    {
LABEL_102:
      v94 = sub_AEB880(current, IClassBoardLineModel_TypeInfo, 1LL, v69);
    }
    v95 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v94)(current, *(_QWORD *)(v94 + 8));
    v98 = v95;
    if ( !v95 )
      sub_B52A5C(0LL, v96);
    v99 = *(_QWORD *)v95;
    if ( *(_WORD *)(*(_QWORD *)v95 + 298LL) )
    {
      v100 = 0LL;
      v101 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v101 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v100;
        v101 += 4;
        if ( v100 >= *(unsigned __int16 *)(*(_QWORD *)v95 + 298LL) )
          goto LABEL_109;
      }
      v102 = v99 + 16LL * *v101 + 312;
    }
    else
    {
LABEL_109:
      v102 = sub_AEB880(v95, IClassBoardSquareModel_TypeInfo, 0LL, v97);
    }
    v103 = (*(__int64 (__fastcall **)(__int64, _QWORD))v102)(v98, *(_QWORD *)(v102 + 8));
    v106 = v5->fields.entity;
    if ( !v106 )
      sub_B52A5C(v103, v104);
    if ( (_DWORD)v103 != v106->fields.id )
    {
      v107 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v108 = 0LL;
        v109 = (IClassBoardLineModel_c **)&v107->_1.interfaceOffsets->offset;
        while ( *(v109 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v108;
          v109 += 2;
          if ( v108 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_117;
        }
        v110 = (__int64)&v107->vtable[*(_DWORD *)v109 + 1].method;
      }
      else
      {
LABEL_117:
        v110 = sub_AEB880(current, IClassBoardLineModel_TypeInfo, 1LL, v105);
      }
      v111 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v110)(current, *(_QWORD *)(v110 + 8));
      v114 = v111;
      if ( !v111 )
        sub_B52A5C(0LL, v112);
      v115 = *(_QWORD *)v111;
      if ( *(_WORD *)(*(_QWORD *)v111 + 298LL) )
      {
        v116 = 0LL;
        v117 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v115 + 176) + 8LL);
        while ( *(v117 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v116;
          v117 += 2;
          if ( v116 >= *(unsigned __int16 *)(*(_QWORD *)v111 + 298LL) )
            goto LABEL_124;
        }
        v118 = v115 + 16LL * (*(_DWORD *)v117 + 12) + 312;
      }
      else
      {
LABEL_124:
        v118 = sub_AEB880(v111, IClassBoardSquareModel_TypeInfo, 12LL, v113);
      }
      v119 = (*(__int64 (__fastcall **)(__int64, _QWORD))v118)(v114, *(_QWORD *)(v118 + 8));
      v122 = v119;
      if ( !v119 )
        sub_B52A5C(0LL, v120);
      v123 = *(_QWORD *)v119;
      if ( *(_WORD *)(*(_QWORD *)v119 + 298LL) )
      {
        v124 = 0LL;
        v125 = (int *)(*(_QWORD *)(v123 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v125 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          ++v124;
          v125 += 4;
          if ( v124 >= *(unsigned __int16 *)(*(_QWORD *)v119 + 298LL) )
            goto LABEL_131;
        }
        v126 = v123 + 16LL * *v125 + 312;
      }
      else
      {
LABEL_131:
        v126 = sub_AEB880(v119, IClassBoardSquareUser_TypeInfo, 0LL, v121);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v126)(v122, *(_QWORD *)(v126 + 8)) & 1) != 0 )
        break;
    }
  }
  v159[0] = 231;
  v160 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v161,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
  v160 = 0;
  this = (ClassBoardSquareModel_o *)v5->fields.entity;
  if ( !this )
    goto LABEL_189;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsBlank(
                                      (ClassBoardSquareEntity_o *)this,
                                      (const MethodInfo *)checkedBlankIdHashSet);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_136:
    v11 = 0;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  struct System_Collections_Generic_List_IClassBoardItemModel__o **p_itemList; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  unsigned __int64 v18; // x25
  int32_t v19; // w23
  int32_t v20; // w24
  ClassBoardItemModel_o *v21; // x22
  __int64 v22; // x0

  if ( (byte_42B0766 & 1) == 0 )
  {
    sub_B52984(&ClassBoardItemModel_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardItemModel__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
    sub_B52984(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
    byte_42B0766 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v7;
  p_itemList = &this->fields.itemList;
  sub_B52920((BattleServantConfConponent_o *)p_itemList, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  if ( !itemIds )
    goto LABEL_13;
  v17 = *(_QWORD *)&itemIds->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        goto LABEL_12;
      if ( !itemNums )
        break;
      if ( v18 >= itemNums->max_length )
      {
LABEL_12:
        v22 = sub_B52A88(v15);
        sub_B52A28(v22, 0LL);
      }
      v19 = itemIds->m_Items[v18 + 1];
      v20 = itemNums->m_Items[v18 + 1];
      v21 = (ClassBoardItemModel_o *)sub_B52A54(ClassBoardItemModel_TypeInfo);
      ClassBoardItemModel___ctor(v21, v19, v20, 0LL);
      v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_itemList;
      if ( !*p_itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_IClassBoardItemModel__Add__);
      LODWORD(v17) = itemIds->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        return;
    }
LABEL_13:
    sub_B52A5C(v15, v16);
  }
}


bool __fastcall ClassBoardSquareModel__IsBlankConnected(
        ClassBoardSquareModel_o *this,
        IClassBoardSquareModel_o *blankModel,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  ClassBoardSquareModel_o *v6; // x21
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x3
  IClassBoardSquareModel_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  int32_t v16; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  __int64 v18; // x3
  IClassBoardSquareModel_c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x3
  ClassBoardSquareModel_c *v24; // x8
  ClassBoardSquareModel_o *v25; // x22
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x3
  __int64 v31; // x22
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x3
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x3
  __int64 v44; // x24
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x3
  __int64 v52; // x25
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x3
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x3
  __int64 v65; // x25
  __int64 v66; // x8
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v73; // x8
  unsigned __int64 v74; // x10
  int *v75; // x11
  __int64 v76; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v77; // x0
  __int64 v78; // x8
  unsigned __int64 v79; // x10
  IClassBoardLineModel_c **v80; // x11
  __int64 v81; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x3
  __int64 v85; // x25
  __int64 v86; // x8
  unsigned __int64 v87; // x10
  int *v88; // x11
  __int64 v89; // x0
  __int64 v90; // x8
  unsigned __int64 v91; // x10
  IClassBoardLineModel_c **v92; // x11
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x3
  __int64 v97; // x25
  __int64 v98; // x8
  unsigned __int64 v99; // x10
  int *v100; // x11
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x1
  struct ClassBoardSquareEntity_o *v104; // x8
  __int64 v105; // x8
  unsigned __int64 v106; // x10
  IClassBoardLineModel_c **v107; // x11
  __int64 v108; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v109; // x0
  __int64 v110; // x8
  unsigned __int64 v111; // x10
  int *v112; // x11
  __int64 v113; // x0
  int v114; // w19
  _BOOL8 v115; // x0
  __int64 v116; // x1
  __int64 v117; // x3
  Il2CppObject *current; // x20
  Il2CppClass *v119; // x8
  unsigned __int64 v120; // x10
  int32_t *v121; // x11
  __int64 v122; // x0
  System_Enum_o *v123; // x20
  System_Enum_o *v124; // x0
  bool v125; // w19
  int v126; // w8
  int v127; // w23
  int v128; // w9
  System_Collections_Generic_HashSet_int__o *v130; // [xsp+8h] [xbp-A8h]
  int v131; // [xsp+14h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v132; // [xsp+18h] [xbp-98h] BYREF
  int v133[3]; // [xsp+30h] [xbp-80h]
  int v134; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v135; // [xsp+40h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_42B0767 & 1) == 0 )
  {
    sub_B52984(&AcquireFlag_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_B52984(&IClassBoardLineModel_TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    this = (ClassBoardSquareModel_o *)sub_B52984(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_42B0767 = 1;
  }
  memset(&v135, 0, sizeof(v135));
  v134 = 0;
  if ( !blankModel )
    goto LABEL_158;
  klass = blankModel->klass;
  if ( *(_WORD *)&blankModel->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&blankModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(blankModel, IClassBoardSquareModel_TypeInfo, 0LL, method);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                      blankModel,
                                      *(_QWORD *)(p_method + 8));
  if ( !checkedBlankIdHashSet )
    goto LABEL_158;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          checkedBlankIdHashSet,
          (int32_t)this,
          (const MethodInfo_24D9CCC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v12 = blankModel->klass;
    if ( *(_WORD *)&blankModel->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&blankModel->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_AEB880(blankModel, IClassBoardSquareModel_TypeInfo, 0LL, v11);
    }
    v16 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v15)(blankModel, *(_QWORD *)(v15 + 8));
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v17,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    System_Collections_Generic_HashSet_int___Add(
      checkedBlankIdHashSet,
      v16,
      (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
    v19 = blankModel->klass;
    if ( *(_WORD *)&blankModel->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v21 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&blankModel->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v22 = (__int64)&v19->vtable[*v21 + 9].method;
    }
    else
    {
LABEL_22:
      v22 = sub_AEB880(blankModel, IClassBoardSquareModel_TypeInfo, 9LL, v18);
    }
    this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v22)(
                                        blankModel,
                                        *(_QWORD *)(v22 + 8));
    if ( this )
    {
      v24 = this->klass;
      v25 = this;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v26 = 0LL;
        v27 = &v24->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v27 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
        {
          ++v26;
          v27 += 4;
          if ( v26 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_29;
        }
        v28 = (__int64)(&v24->vtable._0_Equals.method + 2 * *v27);
      }
      else
      {
LABEL_29:
        v28 = sub_AEB880(this, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL, v23);
      }
      v130 = checkedBlankIdHashSet;
      v31 = (*(__int64 (__fastcall **)(ClassBoardSquareModel_o *, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
      if ( !v31 )
        sub_B52A5C(0LL, v29);
      while ( 1 )
      {
        v32 = *(_QWORD *)v31;
        if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
        {
          v33 = 0LL;
          v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v33;
            v34 += 4;
            if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
              goto LABEL_36;
          }
          v35 = v32 + 16LL * *v34 + 312;
        }
        else
        {
LABEL_36:
          v35 = sub_AEB880(v31, System_Collections_IEnumerator_TypeInfo, 0LL, v30);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
          break;
        v37 = *(_QWORD *)v31;
        if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
        {
          v38 = 0LL;
          v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v39 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
          {
            ++v38;
            v39 += 4;
            if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
              goto LABEL_43;
          }
          v40 = v37 + 16LL * *v39 + 312;
        }
        else
        {
LABEL_43:
          v40 = sub_AEB880(v31, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL, v36);
        }
        v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v31, *(_QWORD *)(v40 + 8));
        v44 = v41;
        if ( !v41 )
          sub_B52A5C(0LL, v42);
        v45 = *(_QWORD *)v41;
        if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
        {
          v46 = 0LL;
          v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v47 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v46;
            v47 += 4;
            if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
              goto LABEL_50;
          }
          v48 = v45 + 16LL * *v47 + 312;
        }
        else
        {
LABEL_50:
          v48 = sub_AEB880(v41, IClassBoardLineModel_TypeInfo, 0LL, v43);
        }
        v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8));
        v52 = v49;
        if ( !v49 )
          sub_B52A5C(0LL, v50);
        v53 = *(_QWORD *)v49;
        if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
        {
          v54 = 0LL;
          v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *((IClassBoardSquareModel_c **)v55 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v54;
            v55 += 4;
            if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
              goto LABEL_57;
          }
          v56 = v53 + 16LL * *v55 + 312;
        }
        else
        {
LABEL_57:
          v56 = sub_AEB880(v49, IClassBoardSquareModel_TypeInfo, 0LL, v51);
        }
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v56)(v52, *(_QWORD *)(v56 + 8)) != v16 )
        {
          v58 = *(_QWORD *)v44;
          if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
          {
            v59 = 0LL;
            v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
            while ( *((IClassBoardLineModel_c **)v60 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v59;
              v60 += 4;
              if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
                goto LABEL_64;
            }
            v61 = v58 + 16LL * *v60 + 312;
          }
          else
          {
LABEL_64:
            v61 = sub_AEB880(v44, IClassBoardLineModel_TypeInfo, 0LL, v57);
          }
          v62 = (*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v44, *(_QWORD *)(v61 + 8));
          v65 = v62;
          if ( !v62 )
            sub_B52A5C(0LL, v63);
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
                goto LABEL_71;
            }
            v69 = v66 + 16LL * *v68 + 312;
          }
          else
          {
LABEL_71:
            v69 = sub_AEB880(v62, IClassBoardSquareModel_TypeInfo, 0LL, v64);
          }
          v70 = (*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v65, *(_QWORD *)(v69 + 8));
          entity = v6->fields.entity;
          if ( !entity )
            sub_B52A5C(v70, v71);
          if ( (_DWORD)v70 != entity->fields.id )
          {
            v73 = *(_QWORD *)v44;
            if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
            {
              v74 = 0LL;
              v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
              while ( *((IClassBoardLineModel_c **)v75 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v74;
                v75 += 4;
                if ( v74 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
                  goto LABEL_79;
              }
              v76 = v73 + 16LL * *v75 + 312;
            }
            else
            {
LABEL_79:
              v76 = sub_AEB880(v44, IClassBoardLineModel_TypeInfo, 0LL, v57);
            }
            v77 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v76)(
                                                                           v44,
                                                                           *(_QWORD *)(v76 + 8));
            if ( !v17 )
              sub_B52A5C(v77, v77);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v17,
              v77,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          }
        }
        v78 = *(_QWORD *)v44;
        if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
        {
          v79 = 0LL;
          v80 = (IClassBoardLineModel_c **)(*(_QWORD *)(v78 + 176) + 8LL);
          while ( *(v80 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v79;
            v80 += 2;
            if ( v79 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
              goto LABEL_87;
          }
          v81 = v78 + 16LL * (*(_DWORD *)v80 + 1) + 312;
        }
        else
        {
LABEL_87:
          v81 = sub_AEB880(v44, IClassBoardLineModel_TypeInfo, 1LL, v57);
        }
        v82 = (*(__int64 (__fastcall **)(__int64, _QWORD))v81)(v44, *(_QWORD *)(v81 + 8));
        v85 = v82;
        if ( !v82 )
          sub_B52A5C(0LL, v83);
        v86 = *(_QWORD *)v82;
        if ( *(_WORD *)(*(_QWORD *)v82 + 298LL) )
        {
          v87 = 0LL;
          v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
          while ( *((IClassBoardSquareModel_c **)v88 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v87;
            v88 += 4;
            if ( v87 >= *(unsigned __int16 *)(*(_QWORD *)v82 + 298LL) )
              goto LABEL_94;
          }
          v89 = v86 + 16LL * *v88 + 312;
        }
        else
        {
LABEL_94:
          v89 = sub_AEB880(v82, IClassBoardSquareModel_TypeInfo, 0LL, v84);
        }
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v89)(v85, *(_QWORD *)(v89 + 8)) != v16 )
        {
          v90 = *(_QWORD *)v44;
          if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
          {
            v91 = 0LL;
            v92 = (IClassBoardLineModel_c **)(*(_QWORD *)(v90 + 176) + 8LL);
            while ( *(v92 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v91;
              v92 += 2;
              if ( v91 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
                goto LABEL_101;
            }
            v93 = v90 + 16LL * (*(_DWORD *)v92 + 1) + 312;
          }
          else
          {
LABEL_101:
            v93 = sub_AEB880(v44, IClassBoardLineModel_TypeInfo, 1LL, v30);
          }
          v94 = (*(__int64 (__fastcall **)(__int64, _QWORD))v93)(v44, *(_QWORD *)(v93 + 8));
          v97 = v94;
          if ( !v94 )
            sub_B52A5C(0LL, v95);
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
                goto LABEL_108;
            }
            v101 = v98 + 16LL * *v100 + 312;
          }
          else
          {
LABEL_108:
            v101 = sub_AEB880(v94, IClassBoardSquareModel_TypeInfo, 0LL, v96);
          }
          v102 = (*(__int64 (__fastcall **)(__int64, _QWORD))v101)(v97, *(_QWORD *)(v101 + 8));
          v104 = v6->fields.entity;
          if ( !v104 )
            sub_B52A5C(v102, v103);
          if ( (_DWORD)v102 != v104->fields.id )
          {
            v105 = *(_QWORD *)v44;
            if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
            {
              v106 = 0LL;
              v107 = (IClassBoardLineModel_c **)(*(_QWORD *)(v105 + 176) + 8LL);
              while ( *(v107 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v106;
                v107 += 2;
                if ( v106 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
                  goto LABEL_116;
              }
              v108 = v105 + 16LL * (*(_DWORD *)v107 + 1) + 312;
            }
            else
            {
LABEL_116:
              v108 = sub_AEB880(v44, IClassBoardLineModel_TypeInfo, 1LL, v30);
            }
            v109 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v108)(
                                                                            v44,
                                                                            *(_QWORD *)(v108 + 8));
            if ( !v17 )
              sub_B52A5C(v109, v109);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v17,
              v109,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          }
        }
      }
      v133[0] = 177;
      v134 = 1;
      v110 = *(_QWORD *)v31;
      if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
      {
        v111 = 0LL;
        v112 = (int *)(*(_QWORD *)(v110 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v112 - 1) != System_IDisposable_TypeInfo )
        {
          ++v111;
          v112 += 4;
          if ( v111 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
            goto LABEL_124;
        }
        v113 = v110 + 16LL * *v112 + 312;
      }
      else
      {
LABEL_124:
        v113 = sub_AEB880(v31, System_IDisposable_TypeInfo, 0LL, v36);
      }
      this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v113)(v31, *(_QWORD *)(v113 + 8));
      v134 = 0;
      if ( v17 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v132,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
        v114 = 0;
        v135 = v132;
        while ( 1 )
        {
          v115 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v135,
                   (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
          if ( !v115 )
            break;
          current = v135.fields.current;
          if ( !v135.fields.current )
            sub_B52A5C(v115, v116);
          v119 = v135.fields.current->klass;
          if ( *(_WORD *)&v135.fields.current->klass->_2.bitflags1 )
          {
            v120 = 0LL;
            v121 = &v119->_1.interfaceOffsets->offset;
            while ( *((IClassBoardSquareModel_c **)v121 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v120;
              v121 += 4;
              if ( v120 >= *(unsigned __int16 *)&v135.fields.current->klass->_2.bitflags1 )
                goto LABEL_134;
            }
            v122 = (__int64)&v119->vtable[*v121 + 13].method;
          }
          else
          {
LABEL_134:
            v122 = sub_AEB880(v135.fields.current, IClassBoardSquareModel_TypeInfo, 13LL, v117);
          }
          v114 |= (*(__int64 (__fastcall **)(Il2CppObject *, System_Collections_Generic_HashSet_int__o *, _QWORD))v122)(
                    current,
                    v130,
                    *(_QWORD *)(v122 + 8));
          LODWORD(v132.fields.list) = v114;
          v123 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v132);
          v131 = 1;
          v124 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v131);
          if ( !v123 )
            sub_B52A5C(v124, v124);
          if ( System_Enum__HasFlag(v123, v124, 0LL) )
          {
            v125 = 1;
            v126 = 258;
            goto LABEL_140;
          }
        }
        v125 = 0;
        v126 = 256;
LABEL_140:
        v133[0] = v126;
        v127 = ++v134;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v135,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
        if ( !v127 )
          return 0;
        v128 = v133[v127 - 1];
        if ( v128 == 256 )
        {
          v125 = 0;
        }
        else if ( v128 != 258 )
        {
          return 0;
        }
        v134 = v127 - 1;
        return v125;
      }
    }
LABEL_158:
    sub_B52A5C(this, blankModel);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
  return entity->fields.assetId;
}


int32_t __fastcall ClassBoardSquareModel__get_BaseId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B52A5C(this, method);
  return entity->fields.classBoardBaseId;
}


bool __fastcall ClassBoardSquareModel__get_HasLine(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  if ( (byte_42B0763 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
    byte_42B0763 = 1;
  }
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
           (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
}


int32_t __fastcall ClassBoardSquareModel__get_IconId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B52A5C(this, method);
  return entity->fields.iconId;
}


int32_t __fastcall ClassBoardSquareModel__get_Id(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B52A5C(this, method);
  return entity->fields.id;
}


bool __fastcall ClassBoardSquareModel__get_IsBlank(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B52A5C(0LL, method);
  return ClassBoardSquareEntity__get_IsBlank(entity, method);
}


bool __fastcall ClassBoardSquareModel__get_IsStart(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
  return entity->fields.skillType;
}


int32_t __fastcall ClassBoardSquareModel__get_TargetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B52A5C(this, method);
  return entity->fields.targetId;
}


int32_t __fastcall ClassBoardSquareModel__get_UpSkillLv(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B52A5C(this, method);
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
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v10; // x3
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v12; // x8
  int v13; // w19
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x3
  ClassBoardSquareModel___c__DisplayClass38_0_c *v18; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v19; // x20
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0

  v5 = this;
  if ( (byte_42AD6DA & 1) == 0 )
  {
    sub_B52984(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_B52984(&IClassBoardSquareModel_TypeInfo);
    byte_42AD6DA = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(x, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v5->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v12 = lineModel->klass;
  v13 = (int)this;
  if ( *(_WORD *)&lineModel->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    v15 = &v12->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v15 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v14;
      v15 += 4;
      if ( v14 >= *(unsigned __int16 *)&lineModel->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v16 = (__int64)&v12->vtable[*v15].method;
  }
  else
  {
LABEL_15:
    v16 = sub_AEB880(lineModel, IClassBoardLineModel_TypeInfo, 0LL, v10);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v16)(
                                                            lineModel,
                                                            *(_QWORD *)(v16 + 8));
  if ( !this )
LABEL_25:
    sub_B52A5C(this, x);
  v18 = this->klass;
  v19 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    v21 = &v18->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v20;
      v21 += 4;
      if ( v20 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v22 = (__int64)(&v18->vtable._0_Equals.method + 2 * *v21);
  }
  else
  {
LABEL_22:
    v22 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 0LL, v17);
  }
  return v13 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v22)(
                  v19,
                  *(_QWORD *)(v22 + 8));
}


bool __fastcall ClassBoardSquareModel___c__DisplayClass38_0___FindLinkSquares_b__1(
        ClassBoardSquareModel___c__DisplayClass38_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardSquareModel___c__DisplayClass38_0_o *v5; // x19
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v10; // x3
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v12; // x8
  int v13; // w19
  unsigned __int64 v14; // x10
  IClassBoardLineModel_c **v15; // x11
  __int64 v16; // x0
  __int64 v17; // x3
  ClassBoardSquareModel___c__DisplayClass38_0_c *v18; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v19; // x20
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0

  v5 = this;
  if ( (byte_42AD6DB & 1) == 0 )
  {
    sub_B52984(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_B52984(&IClassBoardSquareModel_TypeInfo);
    byte_42AD6DB = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(x, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v5->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v12 = lineModel->klass;
  v13 = (int)this;
  if ( *(_WORD *)&lineModel->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    v15 = (IClassBoardLineModel_c **)&v12->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v14;
      v15 += 2;
      if ( v14 >= *(unsigned __int16 *)&lineModel->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v16 = (__int64)&v12->vtable[*(_DWORD *)v15 + 1].method;
  }
  else
  {
LABEL_15:
    v16 = sub_AEB880(lineModel, IClassBoardLineModel_TypeInfo, 1LL, v10);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v16)(
                                                            lineModel,
                                                            *(_QWORD *)(v16 + 8));
  if ( !this )
LABEL_25:
    sub_B52A5C(this, x);
  v18 = this->klass;
  v19 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    v21 = &v18->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v20;
      v21 += 4;
      if ( v20 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v22 = (__int64)(&v18->vtable._0_Equals.method + 2 * *v21);
  }
  else
  {
LABEL_22:
    v22 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 0LL, v17);
  }
  return v13 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v22)(
                  v19,
                  *(_QWORD *)(v22 + 8));
}