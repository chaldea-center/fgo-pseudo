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

  if ( (byte_4353B9D & 1) == 0 )
  {
    sub_B70694(&ClassBoardSquareUser_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
    sub_B70694(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
    byte_4353B9D = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v5;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_IClassBoardLineModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v12;
  sub_B70630(
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)squareEntity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  entity = (System_Int32_array **)this->fields.entity;
  v26 = sub_B70764(ClassBoardSquareUser_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  *(_QWORD *)(v26 + 24) = entity;
  sub_B70630((BattleServantConfConponent_o *)(v26 + 24), entity, v27, v28, v29, v30, v31, v32);
  this->fields.user = (struct IClassBoardSquareUser_o *)v26;
  sub_B70630(
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
    sub_B7076C(v39, v40);
  ClassBoardSquareModel__InitializeItemList(this, v42->fields.itemIds, v42->fields.itemNums, v41);
}


void __fastcall ClassBoardSquareModel__AddLine(
        ClassBoardSquareModel_o *this,
        IClassBoardLineModel_o *line,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0

  if ( (byte_4353B9E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
    byte_4353B9E = 1;
  }
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B7076C(0LL, line);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)line,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
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
  __int64 *v19; // x23
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x23
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  System_Collections_Generic_List_T__o *v34; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x24
  __int64 *v36; // x23
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  IClassBoardLineModel_c **v39; // x11
  __int64 v40; // x0
  __int64 *v41; // x23
  __int64 v42; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *v43; // x22
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x23
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  struct ClassBoardSquareEntity_o *v56; // x8
  System_Collections_Generic_List_T__o *v57; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v58; // x24
  _BOOL8 v59; // x0
  __int64 v60; // x1
  __int64 *v61; // x23
  __int64 v62; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *v63; // x22
  unsigned __int64 v64; // x10
  IClassBoardLineModel_c **v65; // x11
  __int64 v66; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 *v70; // x22
  __int64 v71; // x8
  unsigned __int64 v72; // x10
  int *v73; // x11
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x22
  __int64 v78; // x8
  unsigned __int64 v79; // x10
  IClassBoardSquareModel_c **v80; // x11
  __int64 v81; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 *v84; // x21
  __int64 v85; // x8
  unsigned __int64 v86; // x10
  int *v87; // x11
  __int64 v88; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v89; // x0
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 *v92; // x22
  __int64 v93; // x8
  unsigned __int64 v94; // x10
  IClassBoardLineModel_c **v95; // x11
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x22
  __int64 v100; // x8
  unsigned __int64 v101; // x10
  IClassBoardSquareModel_c **v102; // x11
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x1
  __int64 *v106; // x21
  __int64 v107; // x8
  unsigned __int64 v108; // x10
  IClassBoardLineModel_c **v109; // x11
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 v112; // x1
  __int64 v113; // x21
  __int64 v114; // x8
  IClassBoardSquareModel_c *v115; // x1
  unsigned __int64 v116; // x10
  IClassBoardSquareModel_c **v117; // x11
  __int64 v118; // x0
  __int64 v119; // x1
  __int64 v120; // x8
  unsigned __int64 v121; // x10
  IClassBoardSquareModel_c **v122; // x11
  System_Collections_Generic_List_Enumerator_T__o v123; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v124; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4353BA1 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_IClassBoardSquareModel___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__);
    sub_B70694(&Method_System_Func_IClassBoardSquareModel__bool___ctor__);
    sub_B70694(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_B70694(&IClassBoardLineModel_TypeInfo);
    sub_B70694(&IClassBoardSquareModel_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
    sub_B70694(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__);
    sub_B70694(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__);
    sub_B70694(&ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo);
    byte_4353BA1 = 1;
  }
  memset(&v124, 0, sizeof(v124));
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B7076C(0LL, connectSquareList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v123,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lineList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v124 = v123;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v124,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
  {
    v6 = sub_B70764(ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo);
    ClassBoardSquareModel___c__DisplayClass38_0___ctor((ClassBoardSquareModel___c__DisplayClass38_0_o *)v6, 0LL);
    if ( !v6 )
      sub_B7076C(v7, v8);
    current = (System_Int32_array **)v124.fields.current;
    *(_QWORD *)(v6 + 16) = v124.fields.current;
    v16 = (__int64 **)(v6 + 16);
    sub_B70630((BattleServantConfConponent_o *)(v6 + 16), current, v9, v10, v11, v12, v13, v14);
    v19 = *(__int64 **)(v6 + 16);
    if ( !v19 )
      sub_B7076C(v17, v18);
    v20 = *v19;
    if ( *(_WORD *)(*v19 + 298) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v22 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*v19 + 298) )
          goto LABEL_12;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_12:
      v23 = sub_B08590(*v16, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      sub_B7076C(0LL, v25);
    v27 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v29 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_19;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_19:
      v30 = sub_B08590(v24, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8));
    entity = this->fields.entity;
    if ( !entity )
      sub_B7076C(v31, v32);
    if ( (_DWORD)v31 == entity->fields.id
      || (v34 = (System_Collections_Generic_List_T__o *)*connectSquareList,
          v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_IClassBoardSquareModel__bool__TypeInfo),
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v35,
            (Il2CppObject *)v6,
            Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__,
            (const MethodInfo_29AC578 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__),
          v31 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                  v34,
                  (System_Func_T__bool__o *)v35,
                  (const MethodInfo_1BDCA88 *)Method_BasicHelper_Any_IClassBoardSquareModel___),
          (v31 & 1) != 0) )
    {
      v36 = *v16;
      if ( !*v16 )
        sub_B7076C(v31, v32);
      v37 = *v36;
      if ( *(_WORD *)(*v36 + 298) )
      {
        v38 = 0LL;
        v39 = (IClassBoardLineModel_c **)(*(_QWORD *)(v37 + 176) + 8LL);
        while ( *(v39 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v38;
          v39 += 2;
          if ( v38 >= *(unsigned __int16 *)(*v36 + 298) )
            goto LABEL_29;
        }
        v40 = v37 + 16LL * (*(_DWORD *)v39 + 1) + 312;
      }
      else
      {
LABEL_29:
        v40 = sub_B08590(*v16, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v47 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8));
      v49 = v47;
      if ( !v47 )
        sub_B7076C(0LL, v48);
      v50 = *(_QWORD *)v47;
      if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
      {
        v51 = 0LL;
        v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v52 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v51;
          v52 += 4;
          if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
            goto LABEL_42;
        }
        v53 = v50 + 16LL * *v52 + 312;
      }
      else
      {
LABEL_42:
        v53 = sub_B08590(v47, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8));
      v56 = this->fields.entity;
      if ( !v56 )
        sub_B7076C(v54, v55);
      if ( (_DWORD)v54 != v56->fields.id )
      {
        v57 = (System_Collections_Generic_List_T__o *)*connectSquareList;
        v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_IClassBoardSquareModel__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v58,
          (Il2CppObject *)v6,
          Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__,
          (const MethodInfo_29AC578 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
        v59 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                v57,
                (System_Func_T__bool__o *)v58,
                (const MethodInfo_1BDCA88 *)Method_BasicHelper_Any_IClassBoardSquareModel___);
        if ( !v59 )
        {
          v61 = *v16;
          if ( !*v16 )
            sub_B7076C(v59, v60);
          v62 = *v61;
          v63 = *connectSquareList;
          if ( *(_WORD *)(*v61 + 298) )
          {
            v64 = 0LL;
            v65 = (IClassBoardLineModel_c **)(*(_QWORD *)(v62 + 176) + 8LL);
            while ( *(v65 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v64;
              v65 += 2;
              if ( v64 >= *(unsigned __int16 *)(*v61 + 298) )
                goto LABEL_52;
            }
            v66 = v62 + 16LL * (*(_DWORD *)v65 + 1) + 312;
          }
          else
          {
LABEL_52:
            v66 = sub_B08590(*v16, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v89 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v66)(
                                                                         v61,
                                                                         *(_QWORD *)(v66 + 8));
          if ( !v63 )
            sub_B7076C(v89, v89);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v63,
            v89,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          v92 = *v16;
          if ( !*v16 )
            sub_B7076C(v90, v91);
          v93 = *v92;
          if ( *(_WORD *)(*v92 + 298) )
          {
            v94 = 0LL;
            v95 = (IClassBoardLineModel_c **)(*(_QWORD *)(v93 + 176) + 8LL);
            while ( *(v95 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v94;
              v95 += 2;
              if ( v94 >= *(unsigned __int16 *)(*v92 + 298) )
                goto LABEL_83;
            }
            v96 = v93 + 16LL * (*(_DWORD *)v95 + 1) + 312;
          }
          else
          {
LABEL_83:
            v96 = sub_B08590(*v16, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v97 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v96)(v92, *(_QWORD *)(v96 + 8));
          v99 = v97;
          if ( !v97 )
            sub_B7076C(0LL, v98);
          v100 = *(_QWORD *)v97;
          if ( *(_WORD *)(*(_QWORD *)v97 + 298LL) )
          {
            v101 = 0LL;
            v102 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v100 + 176) + 8LL);
            while ( *(v102 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v101;
              v102 += 2;
              if ( v101 >= *(unsigned __int16 *)(*(_QWORD *)v97 + 298LL) )
                goto LABEL_90;
            }
            v103 = v100 + 16LL * (*(_DWORD *)v102 + 5) + 312;
          }
          else
          {
LABEL_90:
            v103 = sub_B08590(v97, IClassBoardSquareModel_TypeInfo, 5LL);
          }
          v104 = (*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v99, *(_QWORD *)(v103 + 8));
          if ( (v104 & 1) != 0 )
          {
            v106 = *v16;
            if ( !v106 )
              sub_B7076C(v104, v105);
            v107 = *v106;
            if ( *(_WORD *)(*v106 + 298) )
            {
              v108 = 0LL;
              v109 = (IClassBoardLineModel_c **)(*(_QWORD *)(v107 + 176) + 8LL);
              while ( *(v109 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v108;
                v109 += 2;
                if ( v108 >= *(unsigned __int16 *)(*v106 + 298) )
                  goto LABEL_98;
              }
              v110 = v107 + 16LL * (*(_DWORD *)v109 + 1) + 312;
            }
            else
            {
LABEL_98:
              v110 = sub_B08590(v106, IClassBoardLineModel_TypeInfo, 1LL);
            }
            v111 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v110)(v106, *(_QWORD *)(v110 + 8));
            v113 = v111;
            if ( !v111 )
              sub_B7076C(0LL, v119);
            v120 = *(_QWORD *)v111;
            v115 = IClassBoardSquareModel_TypeInfo;
            if ( !*(_WORD *)(*(_QWORD *)v111 + 298LL) )
              goto LABEL_105;
            v121 = 0LL;
            v122 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v120 + 176) + 8LL);
            while ( *(v122 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v121;
              v122 += 2;
              if ( v121 >= *(unsigned __int16 *)(*(_QWORD *)v111 + 298LL) )
                goto LABEL_105;
            }
            v118 = v120 + 16LL * (*(_DWORD *)v122 + 15) + 312;
            goto LABEL_107;
          }
        }
      }
    }
    else
    {
      v41 = *v16;
      if ( !*v16 )
        sub_B7076C(v31, v32);
      v42 = *v41;
      v43 = *connectSquareList;
      if ( *(_WORD *)(*v41 + 298) )
      {
        v44 = 0LL;
        v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v45 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v44;
          v45 += 4;
          if ( v44 >= *(unsigned __int16 *)(*v41 + 298) )
            goto LABEL_35;
        }
        v46 = v42 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_35:
        v46 = sub_B08590(*v16, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v67 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v46)(
                                                                     v41,
                                                                     *(_QWORD *)(v46 + 8));
      if ( !v43 )
        sub_B7076C(v67, v67);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v43,
        v67,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
      v70 = *v16;
      if ( !*v16 )
        sub_B7076C(v68, v69);
      v71 = *v70;
      if ( *(_WORD *)(*v70 + 298) )
      {
        v72 = 0LL;
        v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v73 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v72;
          v73 += 4;
          if ( v72 >= *(unsigned __int16 *)(*v70 + 298) )
            goto LABEL_60;
        }
        v74 = v71 + 16LL * *v73 + 312;
      }
      else
      {
LABEL_60:
        v74 = sub_B08590(*v16, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v75 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v74)(v70, *(_QWORD *)(v74 + 8));
      v77 = v75;
      if ( !v75 )
        sub_B7076C(0LL, v76);
      v78 = *(_QWORD *)v75;
      if ( *(_WORD *)(*(_QWORD *)v75 + 298LL) )
      {
        v79 = 0LL;
        v80 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v78 + 176) + 8LL);
        while ( *(v80 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v79;
          v80 += 2;
          if ( v79 >= *(unsigned __int16 *)(*(_QWORD *)v75 + 298LL) )
            goto LABEL_67;
        }
        v81 = v78 + 16LL * (*(_DWORD *)v80 + 5) + 312;
      }
      else
      {
LABEL_67:
        v81 = sub_B08590(v75, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v82 = (*(__int64 (__fastcall **)(__int64, _QWORD))v81)(v77, *(_QWORD *)(v81 + 8));
      if ( (v82 & 1) != 0 )
      {
        v84 = *v16;
        if ( !v84 )
          sub_B7076C(v82, v83);
        v85 = *v84;
        if ( *(_WORD *)(*v84 + 298) )
        {
          v86 = 0LL;
          v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v87 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v86;
            v87 += 4;
            if ( v86 >= *(unsigned __int16 *)(*v84 + 298) )
              goto LABEL_75;
          }
          v88 = v85 + 16LL * *v87 + 312;
        }
        else
        {
LABEL_75:
          v88 = sub_B08590(v84, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v111 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v88)(v84, *(_QWORD *)(v88 + 8));
        v113 = v111;
        if ( !v111 )
          sub_B7076C(0LL, v112);
        v114 = *(_QWORD *)v111;
        v115 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)(*(_QWORD *)v111 + 298LL) )
        {
LABEL_105:
          v118 = sub_B08590(v111, v115, 15LL);
          goto LABEL_107;
        }
        v116 = 0LL;
        v117 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v114 + 176) + 8LL);
        while ( *(v117 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v116;
          v117 += 2;
          if ( v116 >= *(unsigned __int16 *)(*(_QWORD *)v111 + 298LL) )
            goto LABEL_105;
        }
        v118 = v114 + 16LL * (*(_DWORD *)v117 + 15) + 312;
LABEL_107:
        (*(void (__fastcall **)(__int64, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))v118)(
          v113,
          connectSquareList,
          *(_QWORD *)(v118 + 8));
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v124,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
}


int32_t __fastcall ClassBoardSquareModel__GetAcquireFlag(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  ClassBoardSquareModel_o *v4; // x19
  struct IClassBoardSquareUser_o *user; // x21
  IClassBoardSquareUser_c *klass; // x8
  unsigned __int64 v7; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  int32_t v10; // w20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x21
  Il2CppClass *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x22
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  IClassBoardSquareModel_c **v23; // x11
  __int64 v24; // x0
  Il2CppClass *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  IClassBoardSquareModel_o *v29; // x1
  const MethodInfo *v30; // x3
  Il2CppClass *v31; // x8
  unsigned __int64 v32; // x10
  IClassBoardLineModel_c **v33; // x11
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x22
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  IClassBoardSquareModel_c **v40; // x11
  __int64 v41; // x0
  Il2CppClass *v42; // x8
  unsigned __int64 v43; // x10
  IClassBoardLineModel_c **v44; // x11
  __int64 v45; // x0
  IClassBoardSquareModel_o *v46; // x1
  const MethodInfo *v47; // x3
  Il2CppClass *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x22
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  Il2CppClass *v62; // x8
  unsigned __int64 v63; // x10
  int32_t *v64; // x11
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x22
  __int64 v69; // x8
  unsigned __int64 v70; // x10
  IClassBoardSquareModel_c **v71; // x11
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x22
  __int64 v76; // x8
  unsigned __int64 v77; // x10
  int *v78; // x11
  __int64 v79; // x0
  Il2CppClass *v80; // x8
  unsigned __int64 v81; // x10
  IClassBoardLineModel_c **v82; // x11
  __int64 v83; // x0
  __int64 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x22
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 v92; // x1
  struct ClassBoardSquareEntity_o *v93; // x8
  Il2CppClass *v94; // x8
  unsigned __int64 v95; // x10
  IClassBoardLineModel_c **v96; // x11
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x21
  __int64 v101; // x8
  unsigned __int64 v102; // x10
  IClassBoardSquareModel_c **v103; // x11
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x21
  __int64 v108; // x8
  unsigned __int64 v109; // x10
  int *v110; // x11
  __int64 v111; // x0
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x19
  System_Collections_Generic_List_IClassBoardItemModel__c *v113; // x8
  unsigned __int64 v114; // x10
  int *v115; // x11
  __int64 v116; // x0
  __int64 v117; // x1
  __int64 v118; // x19
  __int64 v119; // x8
  unsigned __int64 v120; // x10
  int *v121; // x11
  __int64 v122; // x0
  __int64 v123; // x8
  unsigned __int64 v124; // x10
  int *v125; // x11
  __int64 v126; // x0
  __int64 v127; // x0
  __int64 v128; // x1
  __int64 v129; // x21
  __int64 v130; // x8
  unsigned __int64 v131; // x10
  IClassBoardItemModel_c **v132; // x11
  __int64 v133; // x0
  int v134; // w8
  int v135; // w22
  __int64 v136; // x8
  unsigned __int64 v137; // x10
  int *v138; // x11
  __int64 v139; // x0
  System_Collections_Generic_List_Enumerator_T__o v141; // [xsp+0h] [xbp-90h] BYREF
  int v142[5]; // [xsp+18h] [xbp-78h]
  int v143; // [xsp+2Ch] [xbp-64h]
  System_Collections_Generic_List_Enumerator_T__o v144; // [xsp+30h] [xbp-60h] BYREF

  v3 = checkedBlankIdHashSet;
  v4 = this;
  if ( (byte_4353B9B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B70694(&IClassBoardItemModel_TypeInfo);
    sub_B70694(&IClassBoardLineModel_TypeInfo);
    sub_B70694(&IClassBoardSquareModel_TypeInfo);
    sub_B70694(&IClassBoardSquareUser_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    this = (ClassBoardSquareModel_o *)sub_B70694(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
    byte_4353B9B = 1;
  }
  memset(&v144, 0, sizeof(v144));
  v143 = 0;
  if ( !v3 )
  {
    v3 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v3,
      (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
  }
  user = v4->fields.user;
  if ( !user )
    goto LABEL_189;
  klass = user->klass;
  if ( *(_WORD *)&user->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareUser_c **)p_offset - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&user->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_B08590(v4->fields.user, IClassBoardSquareUser_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareUser_o *, _QWORD))p_method)(user, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    return 1;
  this = (ClassBoardSquareModel_o *)v4->fields.entity;
  if ( !this )
    goto LABEL_189;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsStart(
                                      (ClassBoardSquareEntity_o *)this,
                                      (const MethodInfo *)checkedBlankIdHashSet);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_136;
  this = (ClassBoardSquareModel_o *)v4->fields.lineList;
  if ( !this )
LABEL_189:
    sub_B7076C(this, checkedBlankIdHashSet);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v141,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v144 = v141;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v144,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    if ( !v11 )
    {
      v142[0] = 231;
      v143 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v144,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
      v143 = 0;
      v10 = 2;
LABEL_138:
      itemList = v4->fields.itemList;
      if ( itemList )
      {
        v113 = itemList->klass;
        if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
        {
          v114 = 0LL;
          v115 = &v113->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)v115 - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
          {
            ++v114;
            v115 += 4;
            if ( v114 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
              goto LABEL_143;
          }
          v116 = (__int64)(&v113->vtable._0_Equals.method + 2 * *v115);
        }
        else
        {
LABEL_143:
          v116 = sub_B08590(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
        }
        v118 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v116)(
                 itemList,
                 *(_QWORD *)(v116 + 8));
        if ( !v118 )
          sub_B7076C(0LL, v117);
        while ( 1 )
        {
          v119 = *(_QWORD *)v118;
          if ( *(_WORD *)(*(_QWORD *)v118 + 298LL) )
          {
            v120 = 0LL;
            v121 = (int *)(*(_QWORD *)(v119 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v121 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v120;
              v121 += 4;
              if ( v120 >= *(unsigned __int16 *)(*(_QWORD *)v118 + 298LL) )
                goto LABEL_150;
            }
            v122 = v119 + 16LL * *v121 + 312;
          }
          else
          {
LABEL_150:
            v122 = sub_B08590(v118, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v122)(v118, *(_QWORD *)(v122 + 8)) & 1) == 0 )
            break;
          v123 = *(_QWORD *)v118;
          if ( *(_WORD *)(*(_QWORD *)v118 + 298LL) )
          {
            v124 = 0LL;
            v125 = (int *)(*(_QWORD *)(v123 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v125 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
            {
              ++v124;
              v125 += 4;
              if ( v124 >= *(unsigned __int16 *)(*(_QWORD *)v118 + 298LL) )
                goto LABEL_157;
            }
            v126 = v123 + 16LL * *v125 + 312;
          }
          else
          {
LABEL_157:
            v126 = sub_B08590(v118, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
          }
          v127 = (*(__int64 (__fastcall **)(__int64, _QWORD))v126)(v118, *(_QWORD *)(v126 + 8));
          v129 = v127;
          if ( !v127 )
            sub_B7076C(0LL, v128);
          v130 = *(_QWORD *)v127;
          if ( *(_WORD *)(*(_QWORD *)v127 + 298LL) )
          {
            v131 = 0LL;
            v132 = (IClassBoardItemModel_c **)(*(_QWORD *)(v130 + 176) + 8LL);
            while ( *(v132 - 1) != IClassBoardItemModel_TypeInfo )
            {
              ++v131;
              v132 += 2;
              if ( v131 >= *(unsigned __int16 *)(*(_QWORD *)v127 + 298LL) )
                goto LABEL_164;
            }
            v133 = v130 + 16LL * (*(_DWORD *)v132 + 2) + 312;
          }
          else
          {
LABEL_164:
            v133 = sub_B08590(v127, IClassBoardItemModel_TypeInfo, 2LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v133)(v129, *(_QWORD *)(v133 + 8)) & 1) == 0 )
          {
            v142[0] = 308;
            v134 = v143;
            v10 |= 8u;
            goto LABEL_169;
          }
        }
        v142[0] = 308;
        v134 = v143;
LABEL_169:
        v135 = v134 + 1;
        v143 = v134 + 1;
        v136 = *(_QWORD *)v118;
        if ( *(_WORD *)(*(_QWORD *)v118 + 298LL) )
        {
          v137 = 0LL;
          v138 = (int *)(*(_QWORD *)(v136 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v138 - 1) != System_IDisposable_TypeInfo )
          {
            ++v137;
            v138 += 4;
            if ( v137 >= *(unsigned __int16 *)(*(_QWORD *)v118 + 298LL) )
              goto LABEL_174;
          }
          v139 = v136 + 16LL * *v138 + 312;
        }
        else
        {
LABEL_174:
          v139 = sub_B08590(v118, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v139)(v118, *(_QWORD *)(v139 + 8));
        if ( v135 && v142[v135 - 1] == 308 )
          v143 = v135 - 1;
        return v10;
      }
      goto LABEL_189;
    }
    current = v144.fields.current;
    if ( !v144.fields.current )
      sub_B7076C(v11, v12);
    v14 = v144.fields.current->klass;
    if ( *(_WORD *)&v144.fields.current->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v16 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&v144.fields.current->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_24:
      v17 = sub_B08590(v144.fields.current, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v17)(current, *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      sub_B7076C(0LL, v19);
    v21 = *(_QWORD *)v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v22 = 0LL;
      v23 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *(v23 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v22;
        v23 += 2;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_31;
      }
      v24 = v21 + 16LL * (*(_DWORD *)v23 + 5) + 312;
    }
    else
    {
LABEL_31:
      v24 = sub_B08590(v18, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) != 0 )
    {
      v25 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v26 = 0LL;
        v27 = &v25->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v27 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v26;
          v27 += 4;
          if ( v26 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_38;
        }
        v28 = (__int64)&v25->vtable[*v27].method;
      }
      else
      {
LABEL_38:
        v28 = sub_B08590(current, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v29 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v28)(
                                          current,
                                          *(_QWORD *)(v28 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v29, v3, v30) )
        break;
    }
    v31 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      v33 = (IClassBoardLineModel_c **)&v31->_1.interfaceOffsets->offset;
      while ( *(v33 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v32;
        v33 += 2;
        if ( v32 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_45;
      }
      v34 = (__int64)&v31->vtable[*(_DWORD *)v33 + 1].method;
    }
    else
    {
LABEL_45:
      v34 = sub_B08590(current, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v35 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v34)(current, *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35 )
      sub_B7076C(0LL, v36);
    v38 = *(_QWORD *)v35;
    if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
    {
      v39 = 0LL;
      v40 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *(v40 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v39;
        v40 += 2;
        if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
          goto LABEL_52;
      }
      v41 = v38 + 16LL * (*(_DWORD *)v40 + 5) + 312;
    }
    else
    {
LABEL_52:
      v41 = sub_B08590(v35, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) != 0 )
    {
      v42 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v43 = 0LL;
        v44 = (IClassBoardLineModel_c **)&v42->_1.interfaceOffsets->offset;
        while ( *(v44 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v43;
          v44 += 2;
          if ( v43 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_59;
        }
        v45 = (__int64)&v42->vtable[*(_DWORD *)v44 + 1].method;
      }
      else
      {
LABEL_59:
        v45 = sub_B08590(current, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v46 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v45)(
                                          current,
                                          *(_QWORD *)(v45 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v46, v3, v47) )
        break;
    }
    v48 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v50 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_66;
      }
      v51 = (__int64)&v48->vtable[*v50].method;
    }
    else
    {
LABEL_66:
      v51 = sub_B08590(current, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v52 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v51)(current, *(_QWORD *)(v51 + 8));
    v54 = v52;
    if ( !v52 )
      sub_B7076C(0LL, v53);
    v55 = *(_QWORD *)v52;
    if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
    {
      v56 = 0LL;
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v57 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v56;
        v57 += 4;
        if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
          goto LABEL_73;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_73:
      v58 = sub_B08590(v52, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v59 = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v54, *(_QWORD *)(v58 + 8));
    entity = v4->fields.entity;
    if ( !entity )
      sub_B7076C(v59, v60);
    if ( (_DWORD)v59 != entity->fields.id )
    {
      v62 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v63 = 0LL;
        v64 = &v62->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v64 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v63;
          v64 += 4;
          if ( v63 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_81;
        }
        v65 = (__int64)&v62->vtable[*v64].method;
      }
      else
      {
LABEL_81:
        v65 = sub_B08590(current, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v66 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v65)(current, *(_QWORD *)(v65 + 8));
      v68 = v66;
      if ( !v66 )
        sub_B7076C(0LL, v67);
      v69 = *(_QWORD *)v66;
      if ( *(_WORD *)(*(_QWORD *)v66 + 298LL) )
      {
        v70 = 0LL;
        v71 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v69 + 176) + 8LL);
        while ( *(v71 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v70;
          v71 += 2;
          if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)v66 + 298LL) )
            goto LABEL_88;
        }
        v72 = v69 + 16LL * (*(_DWORD *)v71 + 12) + 312;
      }
      else
      {
LABEL_88:
        v72 = sub_B08590(v66, IClassBoardSquareModel_TypeInfo, 12LL);
      }
      v73 = (*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8));
      v75 = v73;
      if ( !v73 )
        sub_B7076C(0LL, v74);
      v76 = *(_QWORD *)v73;
      if ( *(_WORD *)(*(_QWORD *)v73 + 298LL) )
      {
        v77 = 0LL;
        v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v78 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          ++v77;
          v78 += 4;
          if ( v77 >= *(unsigned __int16 *)(*(_QWORD *)v73 + 298LL) )
            goto LABEL_95;
        }
        v79 = v76 + 16LL * *v78 + 312;
      }
      else
      {
LABEL_95:
        v79 = sub_B08590(v73, IClassBoardSquareUser_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v75, *(_QWORD *)(v79 + 8)) & 1) != 0 )
        break;
    }
    v80 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v81 = 0LL;
      v82 = (IClassBoardLineModel_c **)&v80->_1.interfaceOffsets->offset;
      while ( *(v82 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v81;
        v82 += 2;
        if ( v81 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_102;
      }
      v83 = (__int64)&v80->vtable[*(_DWORD *)v82 + 1].method;
    }
    else
    {
LABEL_102:
      v83 = sub_B08590(current, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v84 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v83)(current, *(_QWORD *)(v83 + 8));
    v86 = v84;
    if ( !v84 )
      sub_B7076C(0LL, v85);
    v87 = *(_QWORD *)v84;
    if ( *(_WORD *)(*(_QWORD *)v84 + 298LL) )
    {
      v88 = 0LL;
      v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v89 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v88;
        v89 += 4;
        if ( v88 >= *(unsigned __int16 *)(*(_QWORD *)v84 + 298LL) )
          goto LABEL_109;
      }
      v90 = v87 + 16LL * *v89 + 312;
    }
    else
    {
LABEL_109:
      v90 = sub_B08590(v84, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v91 = (*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8));
    v93 = v4->fields.entity;
    if ( !v93 )
      sub_B7076C(v91, v92);
    if ( (_DWORD)v91 != v93->fields.id )
    {
      v94 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v95 = 0LL;
        v96 = (IClassBoardLineModel_c **)&v94->_1.interfaceOffsets->offset;
        while ( *(v96 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v95;
          v96 += 2;
          if ( v95 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_117;
        }
        v97 = (__int64)&v94->vtable[*(_DWORD *)v96 + 1].method;
      }
      else
      {
LABEL_117:
        v97 = sub_B08590(current, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v98 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v97)(current, *(_QWORD *)(v97 + 8));
      v100 = v98;
      if ( !v98 )
        sub_B7076C(0LL, v99);
      v101 = *(_QWORD *)v98;
      if ( *(_WORD *)(*(_QWORD *)v98 + 298LL) )
      {
        v102 = 0LL;
        v103 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v101 + 176) + 8LL);
        while ( *(v103 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v102;
          v103 += 2;
          if ( v102 >= *(unsigned __int16 *)(*(_QWORD *)v98 + 298LL) )
            goto LABEL_124;
        }
        v104 = v101 + 16LL * (*(_DWORD *)v103 + 12) + 312;
      }
      else
      {
LABEL_124:
        v104 = sub_B08590(v98, IClassBoardSquareModel_TypeInfo, 12LL);
      }
      v105 = (*(__int64 (__fastcall **)(__int64, _QWORD))v104)(v100, *(_QWORD *)(v104 + 8));
      v107 = v105;
      if ( !v105 )
        sub_B7076C(0LL, v106);
      v108 = *(_QWORD *)v105;
      if ( *(_WORD *)(*(_QWORD *)v105 + 298LL) )
      {
        v109 = 0LL;
        v110 = (int *)(*(_QWORD *)(v108 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v110 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          ++v109;
          v110 += 4;
          if ( v109 >= *(unsigned __int16 *)(*(_QWORD *)v105 + 298LL) )
            goto LABEL_131;
        }
        v111 = v108 + 16LL * *v110 + 312;
      }
      else
      {
LABEL_131:
        v111 = sub_B08590(v105, IClassBoardSquareUser_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v111)(v107, *(_QWORD *)(v111 + 8)) & 1) != 0 )
        break;
    }
  }
  v142[0] = 231;
  v143 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v144,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
  v143 = 0;
  this = (ClassBoardSquareModel_o *)v4->fields.entity;
  if ( !this )
    goto LABEL_189;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsBlank(
                                      (ClassBoardSquareEntity_o *)this,
                                      (const MethodInfo *)checkedBlankIdHashSet);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_136:
    v10 = 0;
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
  const MethodInfo *v22; // x3
  __int64 v23; // x0

  if ( (byte_4353B9F & 1) == 0 )
  {
    sub_B70694(&ClassBoardItemModel_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardItemModel__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
    sub_B70694(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
    byte_4353B9F = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_IClassBoardItemModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v7;
  p_itemList = &this->fields.itemList;
  sub_B70630((BattleServantConfConponent_o *)p_itemList, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
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
        v23 = sub_B70798(v15);
        sub_B70738(v23, 0LL);
      }
      v19 = itemIds->m_Items[v18 + 1];
      v20 = itemNums->m_Items[v18 + 1];
      v21 = (ClassBoardItemModel_o *)sub_B70764(ClassBoardItemModel_TypeInfo);
      ClassBoardItemModel___ctor(v21, v19, v20, v22);
      v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_itemList;
      if ( !*p_itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_IClassBoardItemModel__Add__);
      LODWORD(v17) = itemIds->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        return;
    }
LABEL_13:
    sub_B7076C(v15, v16);
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
  IClassBoardSquareModel_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  int32_t v15; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  IClassBoardSquareModel_c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  ClassBoardSquareModel_c *v21; // x8
  ClassBoardSquareModel_o *v22; // x22
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x22
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x24
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x25
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x25
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v64; // x8
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v68; // x0
  __int64 v69; // x8
  unsigned __int64 v70; // x10
  IClassBoardLineModel_c **v71; // x11
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x25
  __int64 v76; // x8
  unsigned __int64 v77; // x10
  int *v78; // x11
  __int64 v79; // x0
  __int64 v80; // x8
  unsigned __int64 v81; // x10
  IClassBoardLineModel_c **v82; // x11
  __int64 v83; // x0
  __int64 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x25
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 v92; // x1
  struct ClassBoardSquareEntity_o *v93; // x8
  __int64 v94; // x8
  unsigned __int64 v95; // x10
  IClassBoardLineModel_c **v96; // x11
  __int64 v97; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v98; // x0
  __int64 v99; // x8
  unsigned __int64 v100; // x10
  int *v101; // x11
  __int64 v102; // x0
  int v103; // w19
  _BOOL8 v104; // x0
  __int64 v105; // x1
  Il2CppObject *current; // x20
  Il2CppClass *v107; // x8
  unsigned __int64 v108; // x10
  int32_t *v109; // x11
  __int64 v110; // x0
  __int64 v111; // x2
  System_Enum_o *v112; // x20
  __int64 v113; // x2
  System_Enum_o *v114; // x0
  bool v115; // w19
  int v116; // w8
  int v117; // w23
  int v118; // w9
  System_Collections_Generic_HashSet_int__o *v120; // [xsp+8h] [xbp-A8h]
  int v121; // [xsp+14h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v122; // [xsp+18h] [xbp-98h] BYREF
  int v123[3]; // [xsp+30h] [xbp-80h]
  int v124; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v125; // [xsp+40h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4353BA0 & 1) == 0 )
  {
    sub_B70694(&AcquireFlag_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_B70694(&IClassBoardLineModel_TypeInfo);
    sub_B70694(&IClassBoardSquareModel_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    this = (ClassBoardSquareModel_o *)sub_B70694(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_4353BA0 = 1;
  }
  memset(&v125, 0, sizeof(v125));
  v124 = 0;
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
    p_method = sub_B08590(blankModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                      blankModel,
                                      *(_QWORD *)(p_method + 8));
  if ( !checkedBlankIdHashSet )
    goto LABEL_158;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          checkedBlankIdHashSet,
          (int32_t)this,
          (const MethodInfo_2EAE4F8 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v11 = blankModel->klass;
    if ( *(_WORD *)&blankModel->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v13 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)&blankModel->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_16:
      v14 = sub_B08590(blankModel, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v14)(blankModel, *(_QWORD *)(v14 + 8));
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    System_Collections_Generic_HashSet_int___Add(
      checkedBlankIdHashSet,
      v15,
      (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
    v17 = blankModel->klass;
    if ( *(_WORD *)&blankModel->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v19 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&blankModel->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v20 = (__int64)&v17->vtable[*v19 + 9].method;
    }
    else
    {
LABEL_22:
      v20 = sub_B08590(blankModel, IClassBoardSquareModel_TypeInfo, 9LL);
    }
    this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v20)(
                                        blankModel,
                                        *(_QWORD *)(v20 + 8));
    if ( this )
    {
      v21 = this->klass;
      v22 = this;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v23 = 0LL;
        v24 = &v21->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v24 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
        {
          ++v23;
          v24 += 4;
          if ( v23 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_29;
        }
        v25 = (__int64)(&v21->vtable._0_Equals.method + 2 * *v24);
      }
      else
      {
LABEL_29:
        v25 = sub_B08590(this, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
      }
      v120 = checkedBlankIdHashSet;
      v27 = (*(__int64 (__fastcall **)(ClassBoardSquareModel_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
      if ( !v27 )
        sub_B7076C(0LL, v26);
      while ( 1 )
      {
        v28 = *(_QWORD *)v27;
        if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
        {
          v29 = 0LL;
          v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v29;
            v30 += 4;
            if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
              goto LABEL_36;
          }
          v31 = v28 + 16LL * *v30 + 312;
        }
        else
        {
LABEL_36:
          v31 = sub_B08590(v27, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
          break;
        v32 = *(_QWORD *)v27;
        if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
        {
          v33 = 0LL;
          v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v34 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
          {
            ++v33;
            v34 += 4;
            if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
              goto LABEL_43;
          }
          v35 = v32 + 16LL * *v34 + 312;
        }
        else
        {
LABEL_43:
          v35 = sub_B08590(v27, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
        }
        v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8));
        v38 = v36;
        if ( !v36 )
          sub_B7076C(0LL, v37);
        v39 = *(_QWORD *)v36;
        if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
        {
          v40 = 0LL;
          v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v41 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v40;
            v41 += 4;
            if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
              goto LABEL_50;
          }
          v42 = v39 + 16LL * *v41 + 312;
        }
        else
        {
LABEL_50:
          v42 = sub_B08590(v36, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8));
        v45 = v43;
        if ( !v43 )
          sub_B7076C(0LL, v44);
        v46 = *(_QWORD *)v43;
        if ( *(_WORD *)(*(_QWORD *)v43 + 298LL) )
        {
          v47 = 0LL;
          v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
          while ( *((IClassBoardSquareModel_c **)v48 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v47;
            v48 += 4;
            if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v43 + 298LL) )
              goto LABEL_57;
          }
          v49 = v46 + 16LL * *v48 + 312;
        }
        else
        {
LABEL_57:
          v49 = sub_B08590(v43, IClassBoardSquareModel_TypeInfo, 0LL);
        }
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8)) != v15 )
        {
          v50 = *(_QWORD *)v38;
          if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
          {
            v51 = 0LL;
            v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
            while ( *((IClassBoardLineModel_c **)v52 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v51;
              v52 += 4;
              if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
                goto LABEL_64;
            }
            v53 = v50 + 16LL * *v52 + 312;
          }
          else
          {
LABEL_64:
            v53 = sub_B08590(v38, IClassBoardLineModel_TypeInfo, 0LL);
          }
          v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v38, *(_QWORD *)(v53 + 8));
          v56 = v54;
          if ( !v54 )
            sub_B7076C(0LL, v55);
          v57 = *(_QWORD *)v54;
          if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
          {
            v58 = 0LL;
            v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
            while ( *((IClassBoardSquareModel_c **)v59 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v58;
              v59 += 4;
              if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
                goto LABEL_71;
            }
            v60 = v57 + 16LL * *v59 + 312;
          }
          else
          {
LABEL_71:
            v60 = sub_B08590(v54, IClassBoardSquareModel_TypeInfo, 0LL);
          }
          v61 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v56, *(_QWORD *)(v60 + 8));
          entity = v6->fields.entity;
          if ( !entity )
            sub_B7076C(v61, v62);
          if ( (_DWORD)v61 != entity->fields.id )
          {
            v64 = *(_QWORD *)v38;
            if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
            {
              v65 = 0LL;
              v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
              while ( *((IClassBoardLineModel_c **)v66 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v65;
                v66 += 4;
                if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
                  goto LABEL_79;
              }
              v67 = v64 + 16LL * *v66 + 312;
            }
            else
            {
LABEL_79:
              v67 = sub_B08590(v38, IClassBoardLineModel_TypeInfo, 0LL);
            }
            v68 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v67)(
                                                                           v38,
                                                                           *(_QWORD *)(v67 + 8));
            if ( !v16 )
              sub_B7076C(v68, v68);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v16,
              v68,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          }
        }
        v69 = *(_QWORD *)v38;
        if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
        {
          v70 = 0LL;
          v71 = (IClassBoardLineModel_c **)(*(_QWORD *)(v69 + 176) + 8LL);
          while ( *(v71 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v70;
            v71 += 2;
            if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
              goto LABEL_87;
          }
          v72 = v69 + 16LL * (*(_DWORD *)v71 + 1) + 312;
        }
        else
        {
LABEL_87:
          v72 = sub_B08590(v38, IClassBoardLineModel_TypeInfo, 1LL);
        }
        v73 = (*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v38, *(_QWORD *)(v72 + 8));
        v75 = v73;
        if ( !v73 )
          sub_B7076C(0LL, v74);
        v76 = *(_QWORD *)v73;
        if ( *(_WORD *)(*(_QWORD *)v73 + 298LL) )
        {
          v77 = 0LL;
          v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
          while ( *((IClassBoardSquareModel_c **)v78 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v77;
            v78 += 4;
            if ( v77 >= *(unsigned __int16 *)(*(_QWORD *)v73 + 298LL) )
              goto LABEL_94;
          }
          v79 = v76 + 16LL * *v78 + 312;
        }
        else
        {
LABEL_94:
          v79 = sub_B08590(v73, IClassBoardSquareModel_TypeInfo, 0LL);
        }
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v79)(v75, *(_QWORD *)(v79 + 8)) != v15 )
        {
          v80 = *(_QWORD *)v38;
          if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
          {
            v81 = 0LL;
            v82 = (IClassBoardLineModel_c **)(*(_QWORD *)(v80 + 176) + 8LL);
            while ( *(v82 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v81;
              v82 += 2;
              if ( v81 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
                goto LABEL_101;
            }
            v83 = v80 + 16LL * (*(_DWORD *)v82 + 1) + 312;
          }
          else
          {
LABEL_101:
            v83 = sub_B08590(v38, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v84 = (*(__int64 (__fastcall **)(__int64, _QWORD))v83)(v38, *(_QWORD *)(v83 + 8));
          v86 = v84;
          if ( !v84 )
            sub_B7076C(0LL, v85);
          v87 = *(_QWORD *)v84;
          if ( *(_WORD *)(*(_QWORD *)v84 + 298LL) )
          {
            v88 = 0LL;
            v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
            while ( *((IClassBoardSquareModel_c **)v89 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v88;
              v89 += 4;
              if ( v88 >= *(unsigned __int16 *)(*(_QWORD *)v84 + 298LL) )
                goto LABEL_108;
            }
            v90 = v87 + 16LL * *v89 + 312;
          }
          else
          {
LABEL_108:
            v90 = sub_B08590(v84, IClassBoardSquareModel_TypeInfo, 0LL);
          }
          v91 = (*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8));
          v93 = v6->fields.entity;
          if ( !v93 )
            sub_B7076C(v91, v92);
          if ( (_DWORD)v91 != v93->fields.id )
          {
            v94 = *(_QWORD *)v38;
            if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
            {
              v95 = 0LL;
              v96 = (IClassBoardLineModel_c **)(*(_QWORD *)(v94 + 176) + 8LL);
              while ( *(v96 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v95;
                v96 += 2;
                if ( v95 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
                  goto LABEL_116;
              }
              v97 = v94 + 16LL * (*(_DWORD *)v96 + 1) + 312;
            }
            else
            {
LABEL_116:
              v97 = sub_B08590(v38, IClassBoardLineModel_TypeInfo, 1LL);
            }
            v98 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v97)(
                                                                           v38,
                                                                           *(_QWORD *)(v97 + 8));
            if ( !v16 )
              sub_B7076C(v98, v98);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v16,
              v98,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          }
        }
      }
      v123[0] = 177;
      v124 = 1;
      v99 = *(_QWORD *)v27;
      if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
      {
        v100 = 0LL;
        v101 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v101 - 1) != System_IDisposable_TypeInfo )
        {
          ++v100;
          v101 += 4;
          if ( v100 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
            goto LABEL_124;
        }
        v102 = v99 + 16LL * *v101 + 312;
      }
      else
      {
LABEL_124:
        v102 = sub_B08590(v27, System_IDisposable_TypeInfo, 0LL);
      }
      this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v102)(v27, *(_QWORD *)(v102 + 8));
      v124 = 0;
      if ( v16 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v122,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
        v103 = 0;
        v125 = v122;
        while ( 1 )
        {
          v104 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v125,
                   (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
          if ( !v104 )
            break;
          current = v125.fields.current;
          if ( !v125.fields.current )
            sub_B7076C(v104, v105);
          v107 = v125.fields.current->klass;
          if ( *(_WORD *)&v125.fields.current->klass->_2.bitflags1 )
          {
            v108 = 0LL;
            v109 = &v107->_1.interfaceOffsets->offset;
            while ( *((IClassBoardSquareModel_c **)v109 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v108;
              v109 += 4;
              if ( v108 >= *(unsigned __int16 *)&v125.fields.current->klass->_2.bitflags1 )
                goto LABEL_134;
            }
            v110 = (__int64)&v107->vtable[*v109 + 13].method;
          }
          else
          {
LABEL_134:
            v110 = sub_B08590(v125.fields.current, IClassBoardSquareModel_TypeInfo, 13LL);
          }
          v103 |= (*(__int64 (__fastcall **)(Il2CppObject *, System_Collections_Generic_HashSet_int__o *, _QWORD))v110)(
                    current,
                    v120,
                    *(_QWORD *)(v110 + 8));
          LODWORD(v122.fields.list) = v103;
          v112 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v122, v111);
          v121 = 1;
          v114 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v121, v113);
          if ( !v112 )
            sub_B7076C(v114, v114);
          if ( System_Enum__HasFlag(v112, v114, 0LL) )
          {
            v115 = 1;
            v116 = 258;
            goto LABEL_140;
          }
        }
        v115 = 0;
        v116 = 256;
LABEL_140:
        v123[0] = v116;
        v117 = ++v124;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v125,
          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
        if ( !v117 )
          return 0;
        v118 = v123[v117 - 1];
        if ( v118 == 256 )
        {
          v115 = 0;
        }
        else if ( v118 != 258 )
        {
          return 0;
        }
        v124 = v117 - 1;
        return v115;
      }
    }
LABEL_158:
    sub_B7076C(this, blankModel);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
  return entity->fields.assetId;
}


int32_t __fastcall ClassBoardSquareModel__get_BaseId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B7076C(this, method);
  return entity->fields.classBoardBaseId;
}


bool __fastcall ClassBoardSquareModel__get_HasLine(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  if ( (byte_4353B9C & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
    byte_4353B9C = 1;
  }
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
           (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
}


int32_t __fastcall ClassBoardSquareModel__get_IconId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B7076C(this, method);
  return entity->fields.iconId;
}


int32_t __fastcall ClassBoardSquareModel__get_Id(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B7076C(this, method);
  return entity->fields.id;
}


bool __fastcall ClassBoardSquareModel__get_IsBlank(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B7076C(0LL, method);
  return ClassBoardSquareEntity__get_IsBlank(entity, method);
}


bool __fastcall ClassBoardSquareModel__get_IsStart(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B7076C(0LL, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
  return entity->fields.skillType;
}


int32_t __fastcall ClassBoardSquareModel__get_TargetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B7076C(this, method);
  return entity->fields.targetId;
}


int32_t __fastcall ClassBoardSquareModel__get_UpSkillLv(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B7076C(this, method);
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
  ClassBoardSquareModel___c__DisplayClass38_0_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v10; // x8
  int v11; // w19
  unsigned __int64 v12; // x10
  int *v13; // x11
  __int64 v14; // x0
  ClassBoardSquareModel___c__DisplayClass38_0_c *v15; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v16; // x20
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0

  v4 = this;
  if ( (byte_434EDAC & 1) == 0 )
  {
    sub_B70694(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_B70694(&IClassBoardSquareModel_TypeInfo);
    byte_434EDAC = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v4->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v10 = lineModel->klass;
  v11 = (int)this;
  if ( *(_WORD *)&lineModel->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    v13 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v13 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v12;
      v13 += 4;
      if ( v12 >= *(unsigned __int16 *)&lineModel->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v14 = (__int64)&v10->vtable[*v13].method;
  }
  else
  {
LABEL_15:
    v14 = sub_B08590(lineModel, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v14)(
                                                            lineModel,
                                                            *(_QWORD *)(v14 + 8));
  if ( !this )
LABEL_25:
    sub_B7076C(this, x);
  v15 = this->klass;
  v16 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v18 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v17;
      v18 += 4;
      if ( v17 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v19 = (__int64)(&v15->vtable._0_Equals.method + 2 * *v18);
  }
  else
  {
LABEL_22:
    v19 = sub_B08590(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v11 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v19)(
                  v16,
                  *(_QWORD *)(v19 + 8));
}


bool __fastcall ClassBoardSquareModel___c__DisplayClass38_0___FindLinkSquares_b__1(
        ClassBoardSquareModel___c__DisplayClass38_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  ClassBoardSquareModel___c__DisplayClass38_0_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v10; // x8
  int v11; // w19
  unsigned __int64 v12; // x10
  IClassBoardLineModel_c **v13; // x11
  __int64 v14; // x0
  ClassBoardSquareModel___c__DisplayClass38_0_c *v15; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v16; // x20
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0

  v4 = this;
  if ( (byte_434EDAD & 1) == 0 )
  {
    sub_B70694(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_B70694(&IClassBoardSquareModel_TypeInfo);
    byte_434EDAD = 1;
  }
  if ( !x )
    goto LABEL_25;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v4->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v10 = lineModel->klass;
  v11 = (int)this;
  if ( *(_WORD *)&lineModel->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    v13 = (IClassBoardLineModel_c **)&v10->_1.interfaceOffsets->offset;
    while ( *(v13 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v12;
      v13 += 2;
      if ( v12 >= *(unsigned __int16 *)&lineModel->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v14 = (__int64)&v10->vtable[*(_DWORD *)v13 + 1].method;
  }
  else
  {
LABEL_15:
    v14 = sub_B08590(lineModel, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v14)(
                                                            lineModel,
                                                            *(_QWORD *)(v14 + 8));
  if ( !this )
LABEL_25:
    sub_B7076C(this, x);
  v15 = this->klass;
  v16 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v18 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v17;
      v18 += 4;
      if ( v17 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v19 = (__int64)(&v15->vtable._0_Equals.method + 2 * *v18);
  }
  else
  {
LABEL_22:
    v19 = sub_B08590(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v11 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v19)(
                  v16,
                  *(_QWORD *)(v19 + 8));
}