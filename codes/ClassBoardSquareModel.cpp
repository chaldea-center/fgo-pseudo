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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **entity; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x0
  const MethodInfo *v48; // x3
  struct ClassBoardSquareEntity_o *v49; // x8

  if ( (byte_42146BE & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardSquareUser_TypeInfo, squareEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo, v8);
    byte_42146BE = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_IClassBoardItemModel__TypeInfo,
                                                                                                 squareEntity,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_IClassBoardLineModel__TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.lineList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.entity = squareEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)squareEntity,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  entity = (System_Int32_array **)this->fields.entity;
  v34 = sub_B0D974(ClassBoardSquareUser_TypeInfo, v32, v33);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  *(_QWORD *)(v34 + 24) = entity;
  sub_B0D840((BattleServantConfConponent_o *)(v34 + 24), entity, v35, v36, v37, v38, v39, v40);
  this->fields.user = (struct IClassBoardSquareUser_o *)v34;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.user,
    (System_Int32_array **)v34,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v49 = this->fields.entity;
  if ( !v49 )
    sub_B0D97C(v47);
  ClassBoardSquareModel__InitializeItemList(this, v49->fields.itemIds, v49->fields.itemNums, v48);
}


void __fastcall ClassBoardSquareModel__AddLine(
        ClassBoardSquareModel_o *this,
        IClassBoardLineModel_o *line,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0

  if ( (byte_42146BF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__, line);
    byte_42146BF = 1;
  }
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)line,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x22
  __int64 v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **current; // x1
  __int64 **v29; // x21
  __int64 v30; // x0
  __int64 *v31; // x23
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x23
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  struct ClassBoardSquareEntity_o *entity; // x8
  System_Collections_Generic_List_T__o *v46; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v47; // x24
  __int64 *v48; // x23
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  IClassBoardLineModel_c **v51; // x11
  __int64 v52; // x0
  __int64 *v53; // x23
  __int64 v54; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *v55; // x22
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x23
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  struct ClassBoardSquareEntity_o *v68; // x8
  System_Collections_Generic_List_T__o *v69; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v70; // x24
  _BOOL8 v71; // x0
  __int64 *v72; // x23
  __int64 v73; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *v74; // x22
  unsigned __int64 v75; // x10
  IClassBoardLineModel_c **v76; // x11
  __int64 v77; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v78; // x0
  __int64 v79; // x0
  __int64 *v80; // x22
  __int64 v81; // x8
  unsigned __int64 v82; // x10
  int *v83; // x11
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x22
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  IClassBoardSquareModel_c **v89; // x11
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 *v92; // x21
  __int64 v93; // x8
  unsigned __int64 v94; // x10
  int *v95; // x11
  __int64 v96; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v97; // x0
  __int64 v98; // x0
  __int64 *v99; // x22
  __int64 v100; // x8
  unsigned __int64 v101; // x10
  IClassBoardLineModel_c **v102; // x11
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x22
  __int64 v106; // x8
  unsigned __int64 v107; // x10
  IClassBoardSquareModel_c **v108; // x11
  __int64 v109; // x0
  __int64 v110; // x0
  __int64 *v111; // x21
  __int64 v112; // x8
  unsigned __int64 v113; // x10
  IClassBoardLineModel_c **v114; // x11
  __int64 v115; // x0
  __int64 v116; // x0
  __int64 v117; // x21
  __int64 v118; // x8
  IClassBoardSquareModel_c *v119; // x1
  unsigned __int64 v120; // x10
  IClassBoardSquareModel_c **v121; // x11
  __int64 v122; // x0
  __int64 v123; // x8
  unsigned __int64 v124; // x10
  IClassBoardSquareModel_c **v125; // x11
  System_Collections_Generic_List_Enumerator_T__o v126; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v127; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42146C2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_IClassBoardSquareModel___, connectSquareList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__, v7);
    sub_B0D8A4(&Method_System_Func_IClassBoardSquareModel__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v9);
    sub_B0D8A4(&IClassBoardLineModel_TypeInfo, v10);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__, v13);
    sub_B0D8A4(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__, v14);
    sub_B0D8A4(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__, v15);
    sub_B0D8A4(&ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo, v16);
    byte_42146C2 = 1;
  }
  memset(&v127, 0, sizeof(v127));
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v126,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lineList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v127 = v126;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v127,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
  {
    v20 = sub_B0D974(ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo, v18, v19);
    ClassBoardSquareModel___c__DisplayClass38_0___ctor((ClassBoardSquareModel___c__DisplayClass38_0_o *)v20, 0LL);
    if ( !v20 )
      sub_B0D97C(v21);
    current = (System_Int32_array **)v127.fields.current;
    *(_QWORD *)(v20 + 16) = v127.fields.current;
    v29 = (__int64 **)(v20 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v20 + 16), current, v22, v23, v24, v25, v26, v27);
    v31 = *(__int64 **)(v20 + 16);
    if ( !v31 )
      sub_B0D97C(v30);
    v32 = *v31;
    if ( *(_WORD *)(*v31 + 298) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((IClassBoardLineModel_c **)v34 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*v31 + 298) )
          goto LABEL_12;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_12:
      v35 = sub_AA67A0(*v29, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8));
    v37 = v36;
    if ( !v36 )
      sub_B0D97C(0LL);
    v38 = *(_QWORD *)v36;
    if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
    {
      v39 = 0LL;
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v40 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
          goto LABEL_19;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_19:
      v41 = sub_AA67A0(v36, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8));
    entity = this->fields.entity;
    if ( !entity )
      sub_B0D97C(v42);
    if ( (_DWORD)v42 == entity->fields.id
      || (v46 = (System_Collections_Generic_List_T__o *)*connectSquareList,
          v47 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_IClassBoardSquareModel__bool__TypeInfo,
                                                                                     v43,
                                                                                     v44),
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v47,
            (Il2CppObject *)v20,
            Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__,
            (const MethodInfo_26189B8 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__),
          v42 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                  v46,
                  (System_Func_T__bool__o *)v47,
                  (const MethodInfo_1707138 *)Method_BasicHelper_Any_IClassBoardSquareModel___),
          (v42 & 1) != 0) )
    {
      v48 = *v29;
      if ( !*v29 )
        sub_B0D97C(v42);
      v49 = *v48;
      if ( *(_WORD *)(*v48 + 298) )
      {
        v50 = 0LL;
        v51 = (IClassBoardLineModel_c **)(*(_QWORD *)(v49 + 176) + 8LL);
        while ( *(v51 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v50;
          v51 += 2;
          if ( v50 >= *(unsigned __int16 *)(*v48 + 298) )
            goto LABEL_29;
        }
        v52 = v49 + 16LL * (*(_DWORD *)v51 + 1) + 312;
      }
      else
      {
LABEL_29:
        v52 = sub_AA67A0(*v29, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v59 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8));
      v60 = v59;
      if ( !v59 )
        sub_B0D97C(0LL);
      v61 = *(_QWORD *)v59;
      if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
      {
        v62 = 0LL;
        v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v63 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v62;
          v63 += 4;
          if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
            goto LABEL_42;
        }
        v64 = v61 + 16LL * *v63 + 312;
      }
      else
      {
LABEL_42:
        v64 = sub_AA67A0(v59, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v65 = (*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v60, *(_QWORD *)(v64 + 8));
      v68 = this->fields.entity;
      if ( !v68 )
        sub_B0D97C(v65);
      if ( (_DWORD)v65 != v68->fields.id )
      {
        v69 = (System_Collections_Generic_List_T__o *)*connectSquareList;
        v70 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_IClassBoardSquareModel__bool__TypeInfo,
                                                                                   v66,
                                                                                   v67);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v70,
          (Il2CppObject *)v20,
          Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__,
          (const MethodInfo_26189B8 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
        v71 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                v69,
                (System_Func_T__bool__o *)v70,
                (const MethodInfo_1707138 *)Method_BasicHelper_Any_IClassBoardSquareModel___);
        if ( !v71 )
        {
          v72 = *v29;
          if ( !*v29 )
            sub_B0D97C(v71);
          v73 = *v72;
          v74 = *connectSquareList;
          if ( *(_WORD *)(*v72 + 298) )
          {
            v75 = 0LL;
            v76 = (IClassBoardLineModel_c **)(*(_QWORD *)(v73 + 176) + 8LL);
            while ( *(v76 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v75;
              v76 += 2;
              if ( v75 >= *(unsigned __int16 *)(*v72 + 298) )
                goto LABEL_52;
            }
            v77 = v73 + 16LL * (*(_DWORD *)v76 + 1) + 312;
          }
          else
          {
LABEL_52:
            v77 = sub_AA67A0(*v29, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v97 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v77)(
                                                                         v72,
                                                                         *(_QWORD *)(v77 + 8));
          if ( !v74 )
            sub_B0D97C(v97);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v74,
            v97,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          v99 = *v29;
          if ( !*v29 )
            sub_B0D97C(v98);
          v100 = *v99;
          if ( *(_WORD *)(*v99 + 298) )
          {
            v101 = 0LL;
            v102 = (IClassBoardLineModel_c **)(*(_QWORD *)(v100 + 176) + 8LL);
            while ( *(v102 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v101;
              v102 += 2;
              if ( v101 >= *(unsigned __int16 *)(*v99 + 298) )
                goto LABEL_83;
            }
            v103 = v100 + 16LL * (*(_DWORD *)v102 + 1) + 312;
          }
          else
          {
LABEL_83:
            v103 = sub_AA67A0(*v29, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v104 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v103)(v99, *(_QWORD *)(v103 + 8));
          v105 = v104;
          if ( !v104 )
            sub_B0D97C(0LL);
          v106 = *(_QWORD *)v104;
          if ( *(_WORD *)(*(_QWORD *)v104 + 298LL) )
          {
            v107 = 0LL;
            v108 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v106 + 176) + 8LL);
            while ( *(v108 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v107;
              v108 += 2;
              if ( v107 >= *(unsigned __int16 *)(*(_QWORD *)v104 + 298LL) )
                goto LABEL_90;
            }
            v109 = v106 + 16LL * (*(_DWORD *)v108 + 5) + 312;
          }
          else
          {
LABEL_90:
            v109 = sub_AA67A0(v104, IClassBoardSquareModel_TypeInfo, 5LL);
          }
          v110 = (*(__int64 (__fastcall **)(__int64, _QWORD))v109)(v105, *(_QWORD *)(v109 + 8));
          if ( (v110 & 1) != 0 )
          {
            v111 = *v29;
            if ( !v111 )
              sub_B0D97C(v110);
            v112 = *v111;
            if ( *(_WORD *)(*v111 + 298) )
            {
              v113 = 0LL;
              v114 = (IClassBoardLineModel_c **)(*(_QWORD *)(v112 + 176) + 8LL);
              while ( *(v114 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v113;
                v114 += 2;
                if ( v113 >= *(unsigned __int16 *)(*v111 + 298) )
                  goto LABEL_98;
              }
              v115 = v112 + 16LL * (*(_DWORD *)v114 + 1) + 312;
            }
            else
            {
LABEL_98:
              v115 = sub_AA67A0(v111, IClassBoardLineModel_TypeInfo, 1LL);
            }
            v116 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v115)(v111, *(_QWORD *)(v115 + 8));
            v117 = v116;
            if ( !v116 )
              sub_B0D97C(0LL);
            v123 = *(_QWORD *)v116;
            v119 = IClassBoardSquareModel_TypeInfo;
            if ( !*(_WORD *)(*(_QWORD *)v116 + 298LL) )
              goto LABEL_105;
            v124 = 0LL;
            v125 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v123 + 176) + 8LL);
            while ( *(v125 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v124;
              v125 += 2;
              if ( v124 >= *(unsigned __int16 *)(*(_QWORD *)v116 + 298LL) )
                goto LABEL_105;
            }
            v122 = v123 + 16LL * (*(_DWORD *)v125 + 15) + 312;
            goto LABEL_107;
          }
        }
      }
    }
    else
    {
      v53 = *v29;
      if ( !*v29 )
        sub_B0D97C(v42);
      v54 = *v53;
      v55 = *connectSquareList;
      if ( *(_WORD *)(*v53 + 298) )
      {
        v56 = 0LL;
        v57 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v57 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v56;
          v57 += 4;
          if ( v56 >= *(unsigned __int16 *)(*v53 + 298) )
            goto LABEL_35;
        }
        v58 = v54 + 16LL * *v57 + 312;
      }
      else
      {
LABEL_35:
        v58 = sub_AA67A0(*v29, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v78 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v58)(
                                                                     v53,
                                                                     *(_QWORD *)(v58 + 8));
      if ( !v55 )
        sub_B0D97C(v78);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v55,
        v78,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
      v80 = *v29;
      if ( !*v29 )
        sub_B0D97C(v79);
      v81 = *v80;
      if ( *(_WORD *)(*v80 + 298) )
      {
        v82 = 0LL;
        v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v83 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v82;
          v83 += 4;
          if ( v82 >= *(unsigned __int16 *)(*v80 + 298) )
            goto LABEL_60;
        }
        v84 = v81 + 16LL * *v83 + 312;
      }
      else
      {
LABEL_60:
        v84 = sub_AA67A0(*v29, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v85 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v84)(v80, *(_QWORD *)(v84 + 8));
      v86 = v85;
      if ( !v85 )
        sub_B0D97C(0LL);
      v87 = *(_QWORD *)v85;
      if ( *(_WORD *)(*(_QWORD *)v85 + 298LL) )
      {
        v88 = 0LL;
        v89 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v87 + 176) + 8LL);
        while ( *(v89 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v88;
          v89 += 2;
          if ( v88 >= *(unsigned __int16 *)(*(_QWORD *)v85 + 298LL) )
            goto LABEL_67;
        }
        v90 = v87 + 16LL * (*(_DWORD *)v89 + 5) + 312;
      }
      else
      {
LABEL_67:
        v90 = sub_AA67A0(v85, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v91 = (*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8));
      if ( (v91 & 1) != 0 )
      {
        v92 = *v29;
        if ( !v92 )
          sub_B0D97C(v91);
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
          v96 = sub_AA67A0(v92, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v116 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v96)(v92, *(_QWORD *)(v96 + 8));
        v117 = v116;
        if ( !v116 )
          sub_B0D97C(0LL);
        v118 = *(_QWORD *)v116;
        v119 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)(*(_QWORD *)v116 + 298LL) )
        {
LABEL_105:
          v122 = sub_AA67A0(v116, v119, 15LL);
          goto LABEL_107;
        }
        v120 = 0LL;
        v121 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v118 + 176) + 8LL);
        while ( *(v121 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v120;
          v121 += 2;
          if ( v120 >= *(unsigned __int16 *)(*(_QWORD *)v116 + 298LL) )
            goto LABEL_105;
        }
        v122 = v118 + 16LL * (*(_DWORD *)v121 + 15) + 312;
LABEL_107:
        (*(void (__fastcall **)(__int64, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))v122)(
          v117,
          connectSquareList,
          *(_QWORD *)(v122 + 8));
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v127,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
}


int32_t __fastcall ClassBoardSquareModel__GetAcquireFlag(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  ClassBoardSquareModel_o *v4; // x19
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
  struct IClassBoardSquareUser_o *user; // x21
  IClassBoardSquareUser_c *klass; // x8
  unsigned __int64 v20; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v23; // x1
  int32_t v24; // w20
  _BOOL8 v25; // x0
  Il2CppObject *current; // x21
  Il2CppClass *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x22
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  IClassBoardSquareModel_c **v35; // x11
  __int64 v36; // x0
  Il2CppClass *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  IClassBoardSquareModel_o *v41; // x1
  const MethodInfo *v42; // x3
  Il2CppClass *v43; // x8
  unsigned __int64 v44; // x10
  IClassBoardLineModel_c **v45; // x11
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x22
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  IClassBoardSquareModel_c **v51; // x11
  __int64 v52; // x0
  Il2CppClass *v53; // x8
  unsigned __int64 v54; // x10
  IClassBoardLineModel_c **v55; // x11
  __int64 v56; // x0
  IClassBoardSquareModel_o *v57; // x1
  const MethodInfo *v58; // x3
  Il2CppClass *v59; // x8
  unsigned __int64 v60; // x10
  int32_t *v61; // x11
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x22
  __int64 v65; // x8
  unsigned __int64 v66; // x10
  int *v67; // x11
  __int64 v68; // x0
  __int64 v69; // x0
  struct ClassBoardSquareEntity_o *entity; // x8
  Il2CppClass *v71; // x8
  unsigned __int64 v72; // x10
  int32_t *v73; // x11
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x22
  __int64 v77; // x8
  unsigned __int64 v78; // x10
  IClassBoardSquareModel_c **v79; // x11
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x22
  __int64 v83; // x8
  unsigned __int64 v84; // x10
  int *v85; // x11
  __int64 v86; // x0
  Il2CppClass *v87; // x8
  unsigned __int64 v88; // x10
  IClassBoardLineModel_c **v89; // x11
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 v92; // x22
  __int64 v93; // x8
  unsigned __int64 v94; // x10
  int *v95; // x11
  __int64 v96; // x0
  __int64 v97; // x0
  struct ClassBoardSquareEntity_o *v98; // x8
  Il2CppClass *v99; // x8
  unsigned __int64 v100; // x10
  IClassBoardLineModel_c **v101; // x11
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 v104; // x21
  __int64 v105; // x8
  unsigned __int64 v106; // x10
  IClassBoardSquareModel_c **v107; // x11
  __int64 v108; // x0
  __int64 v109; // x0
  __int64 v110; // x21
  __int64 v111; // x8
  unsigned __int64 v112; // x10
  int *v113; // x11
  __int64 v114; // x0
  const MethodInfo *v115; // x1
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x19
  System_Collections_Generic_List_IClassBoardItemModel__c *v117; // x8
  unsigned __int64 v118; // x10
  int *v119; // x11
  __int64 v120; // x0
  __int64 v121; // x19
  __int64 v122; // x8
  unsigned __int64 v123; // x10
  int *v124; // x11
  __int64 v125; // x0
  __int64 v126; // x8
  unsigned __int64 v127; // x10
  int *v128; // x11
  __int64 v129; // x0
  __int64 v130; // x0
  __int64 v131; // x21
  __int64 v132; // x8
  unsigned __int64 v133; // x10
  IClassBoardItemModel_c **v134; // x11
  __int64 v135; // x0
  int v136; // w8
  int v137; // w22
  __int64 v138; // x8
  unsigned __int64 v139; // x10
  int *v140; // x11
  __int64 v141; // x0
  System_Collections_Generic_List_Enumerator_T__o v143; // [xsp+0h] [xbp-90h] BYREF
  int v144[5]; // [xsp+18h] [xbp-78h]
  int v145; // [xsp+2Ch] [xbp-64h]
  System_Collections_Generic_List_Enumerator_T__o v146; // [xsp+30h] [xbp-60h] BYREF

  v3 = checkedBlankIdHashSet;
  v4 = this;
  if ( (byte_42146BC & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__,
      checkedBlankIdHashSet);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v7);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_B0D8A4(&IClassBoardItemModel_TypeInfo, v9);
    sub_B0D8A4(&IClassBoardLineModel_TypeInfo, v10);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v11);
    sub_B0D8A4(&IClassBoardSquareUser_TypeInfo, v12);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v15);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v16);
    this = (ClassBoardSquareModel_o *)sub_B0D8A4(
                                        &Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__,
                                        v17);
    byte_42146BC = 1;
  }
  memset(&v146, 0, sizeof(v146));
  v145 = 0;
  if ( !v3 )
  {
    v3 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                        System_Collections_Generic_HashSet_int__TypeInfo,
                                                        checkedBlankIdHashSet,
                                                        method);
    System_Collections_Generic_HashSet_int____ctor(
      v3,
      (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  }
  user = v4->fields.user;
  if ( !user )
    goto LABEL_189;
  klass = user->klass;
  if ( *(_WORD *)&user->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareUser_c **)p_offset - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&user->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AA67A0(v4->fields.user, IClassBoardSquareUser_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareUser_o *, _QWORD))p_method)(user, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    return 1;
  this = (ClassBoardSquareModel_o *)v4->fields.entity;
  if ( !this )
    goto LABEL_189;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsStart((ClassBoardSquareEntity_o *)this, v23);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_136;
  this = (ClassBoardSquareModel_o *)v4->fields.lineList;
  if ( !this )
LABEL_189:
    sub_B0D97C(this);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v143,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v146 = v143;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v146,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__);
    if ( !v25 )
    {
      v144[0] = 231;
      v145 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v146,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
      v145 = 0;
      v24 = 2;
LABEL_138:
      itemList = v4->fields.itemList;
      if ( itemList )
      {
        v117 = itemList->klass;
        if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
        {
          v118 = 0LL;
          v119 = &v117->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)v119 - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
          {
            ++v118;
            v119 += 4;
            if ( v118 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
              goto LABEL_143;
          }
          v120 = (__int64)(&v117->vtable._0_Equals.method + 2 * *v119);
        }
        else
        {
LABEL_143:
          v120 = sub_AA67A0(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
        }
        v121 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v120)(
                 itemList,
                 *(_QWORD *)(v120 + 8));
        if ( !v121 )
          sub_B0D97C(0LL);
        while ( 1 )
        {
          v122 = *(_QWORD *)v121;
          if ( *(_WORD *)(*(_QWORD *)v121 + 298LL) )
          {
            v123 = 0LL;
            v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v124 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v123;
              v124 += 4;
              if ( v123 >= *(unsigned __int16 *)(*(_QWORD *)v121 + 298LL) )
                goto LABEL_150;
            }
            v125 = v122 + 16LL * *v124 + 312;
          }
          else
          {
LABEL_150:
            v125 = sub_AA67A0(v121, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v121, *(_QWORD *)(v125 + 8)) & 1) == 0 )
            break;
          v126 = *(_QWORD *)v121;
          if ( *(_WORD *)(*(_QWORD *)v121 + 298LL) )
          {
            v127 = 0LL;
            v128 = (int *)(*(_QWORD *)(v126 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v128 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
            {
              ++v127;
              v128 += 4;
              if ( v127 >= *(unsigned __int16 *)(*(_QWORD *)v121 + 298LL) )
                goto LABEL_157;
            }
            v129 = v126 + 16LL * *v128 + 312;
          }
          else
          {
LABEL_157:
            v129 = sub_AA67A0(v121, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
          }
          v130 = (*(__int64 (__fastcall **)(__int64, _QWORD))v129)(v121, *(_QWORD *)(v129 + 8));
          v131 = v130;
          if ( !v130 )
            sub_B0D97C(0LL);
          v132 = *(_QWORD *)v130;
          if ( *(_WORD *)(*(_QWORD *)v130 + 298LL) )
          {
            v133 = 0LL;
            v134 = (IClassBoardItemModel_c **)(*(_QWORD *)(v132 + 176) + 8LL);
            while ( *(v134 - 1) != IClassBoardItemModel_TypeInfo )
            {
              ++v133;
              v134 += 2;
              if ( v133 >= *(unsigned __int16 *)(*(_QWORD *)v130 + 298LL) )
                goto LABEL_164;
            }
            v135 = v132 + 16LL * (*(_DWORD *)v134 + 2) + 312;
          }
          else
          {
LABEL_164:
            v135 = sub_AA67A0(v130, IClassBoardItemModel_TypeInfo, 2LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v135)(v131, *(_QWORD *)(v135 + 8)) & 1) == 0 )
          {
            v144[0] = 308;
            v136 = v145;
            v24 |= 8u;
            goto LABEL_169;
          }
        }
        v144[0] = 308;
        v136 = v145;
LABEL_169:
        v137 = v136 + 1;
        v145 = v136 + 1;
        v138 = *(_QWORD *)v121;
        if ( *(_WORD *)(*(_QWORD *)v121 + 298LL) )
        {
          v139 = 0LL;
          v140 = (int *)(*(_QWORD *)(v138 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v140 - 1) != System_IDisposable_TypeInfo )
          {
            ++v139;
            v140 += 4;
            if ( v139 >= *(unsigned __int16 *)(*(_QWORD *)v121 + 298LL) )
              goto LABEL_174;
          }
          v141 = v138 + 16LL * *v140 + 312;
        }
        else
        {
LABEL_174:
          v141 = sub_AA67A0(v121, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v141)(v121, *(_QWORD *)(v141 + 8));
        if ( v137 && v144[v137 - 1] == 308 )
          v145 = v137 - 1;
        return v24;
      }
      goto LABEL_189;
    }
    current = v146.fields.current;
    if ( !v146.fields.current )
      sub_B0D97C(v25);
    v27 = v146.fields.current->klass;
    if ( *(_WORD *)&v146.fields.current->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v29 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&v146.fields.current->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_24:
      v30 = sub_AA67A0(v146.fields.current, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v30)(current, *(_QWORD *)(v30 + 8));
    v32 = v31;
    if ( !v31 )
      sub_B0D97C(0LL);
    v33 = *(_QWORD *)v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v34 = 0LL;
      v35 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *(v35 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v34;
        v35 += 2;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_31;
      }
      v36 = v33 + 16LL * (*(_DWORD *)v35 + 5) + 312;
    }
    else
    {
LABEL_31:
      v36 = sub_AA67A0(v31, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) != 0 )
    {
      v37 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v38 = 0LL;
        v39 = &v37->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v39 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v38;
          v39 += 4;
          if ( v38 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_38;
        }
        v40 = (__int64)&v37->vtable[*v39].method;
      }
      else
      {
LABEL_38:
        v40 = sub_AA67A0(current, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v41 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v40)(
                                          current,
                                          *(_QWORD *)(v40 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v41, v3, v42) )
        break;
    }
    v43 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v44 = 0LL;
      v45 = (IClassBoardLineModel_c **)&v43->_1.interfaceOffsets->offset;
      while ( *(v45 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v44;
        v45 += 2;
        if ( v44 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_45;
      }
      v46 = (__int64)&v43->vtable[*(_DWORD *)v45 + 1].method;
    }
    else
    {
LABEL_45:
      v46 = sub_AA67A0(current, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v47 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v46)(current, *(_QWORD *)(v46 + 8));
    v48 = v47;
    if ( !v47 )
      sub_B0D97C(0LL);
    v49 = *(_QWORD *)v47;
    if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
    {
      v50 = 0LL;
      v51 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v49 + 176) + 8LL);
      while ( *(v51 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v50;
        v51 += 2;
        if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
          goto LABEL_52;
      }
      v52 = v49 + 16LL * (*(_DWORD *)v51 + 5) + 312;
    }
    else
    {
LABEL_52:
      v52 = sub_AA67A0(v47, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8)) & 1) != 0 )
    {
      v53 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v54 = 0LL;
        v55 = (IClassBoardLineModel_c **)&v53->_1.interfaceOffsets->offset;
        while ( *(v55 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v54;
          v55 += 2;
          if ( v54 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_59;
        }
        v56 = (__int64)&v53->vtable[*(_DWORD *)v55 + 1].method;
      }
      else
      {
LABEL_59:
        v56 = sub_AA67A0(current, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v57 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v56)(
                                          current,
                                          *(_QWORD *)(v56 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(v4, v57, v3, v58) )
        break;
    }
    v59 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v60 = 0LL;
      v61 = &v59->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v61 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v60;
        v61 += 4;
        if ( v60 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_66;
      }
      v62 = (__int64)&v59->vtable[*v61].method;
    }
    else
    {
LABEL_66:
      v62 = sub_AA67A0(current, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v63 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v62)(current, *(_QWORD *)(v62 + 8));
    v64 = v63;
    if ( !v63 )
      sub_B0D97C(0LL);
    v65 = *(_QWORD *)v63;
    if ( *(_WORD *)(*(_QWORD *)v63 + 298LL) )
    {
      v66 = 0LL;
      v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v67 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v66;
        v67 += 4;
        if ( v66 >= *(unsigned __int16 *)(*(_QWORD *)v63 + 298LL) )
          goto LABEL_73;
      }
      v68 = v65 + 16LL * *v67 + 312;
    }
    else
    {
LABEL_73:
      v68 = sub_AA67A0(v63, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v69 = (*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v64, *(_QWORD *)(v68 + 8));
    entity = v4->fields.entity;
    if ( !entity )
      sub_B0D97C(v69);
    if ( (_DWORD)v69 != entity->fields.id )
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
        v74 = sub_AA67A0(current, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v75 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v74)(current, *(_QWORD *)(v74 + 8));
      v76 = v75;
      if ( !v75 )
        sub_B0D97C(0LL);
      v77 = *(_QWORD *)v75;
      if ( *(_WORD *)(*(_QWORD *)v75 + 298LL) )
      {
        v78 = 0LL;
        v79 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v77 + 176) + 8LL);
        while ( *(v79 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v78;
          v79 += 2;
          if ( v78 >= *(unsigned __int16 *)(*(_QWORD *)v75 + 298LL) )
            goto LABEL_88;
        }
        v80 = v77 + 16LL * (*(_DWORD *)v79 + 12) + 312;
      }
      else
      {
LABEL_88:
        v80 = sub_AA67A0(v75, IClassBoardSquareModel_TypeInfo, 12LL);
      }
      v81 = (*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v76, *(_QWORD *)(v80 + 8));
      v82 = v81;
      if ( !v81 )
        sub_B0D97C(0LL);
      v83 = *(_QWORD *)v81;
      if ( *(_WORD *)(*(_QWORD *)v81 + 298LL) )
      {
        v84 = 0LL;
        v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v85 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          ++v84;
          v85 += 4;
          if ( v84 >= *(unsigned __int16 *)(*(_QWORD *)v81 + 298LL) )
            goto LABEL_95;
        }
        v86 = v83 + 16LL * *v85 + 312;
      }
      else
      {
LABEL_95:
        v86 = sub_AA67A0(v81, IClassBoardSquareUser_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v86)(v82, *(_QWORD *)(v86 + 8)) & 1) != 0 )
        break;
    }
    v87 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v88 = 0LL;
      v89 = (IClassBoardLineModel_c **)&v87->_1.interfaceOffsets->offset;
      while ( *(v89 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v88;
        v89 += 2;
        if ( v88 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_102;
      }
      v90 = (__int64)&v87->vtable[*(_DWORD *)v89 + 1].method;
    }
    else
    {
LABEL_102:
      v90 = sub_AA67A0(current, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v91 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v90)(current, *(_QWORD *)(v90 + 8));
    v92 = v91;
    if ( !v91 )
      sub_B0D97C(0LL);
    v93 = *(_QWORD *)v91;
    if ( *(_WORD *)(*(_QWORD *)v91 + 298LL) )
    {
      v94 = 0LL;
      v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v95 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v94;
        v95 += 4;
        if ( v94 >= *(unsigned __int16 *)(*(_QWORD *)v91 + 298LL) )
          goto LABEL_109;
      }
      v96 = v93 + 16LL * *v95 + 312;
    }
    else
    {
LABEL_109:
      v96 = sub_AA67A0(v91, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v97 = (*(__int64 (__fastcall **)(__int64, _QWORD))v96)(v92, *(_QWORD *)(v96 + 8));
    v98 = v4->fields.entity;
    if ( !v98 )
      sub_B0D97C(v97);
    if ( (_DWORD)v97 != v98->fields.id )
    {
      v99 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v100 = 0LL;
        v101 = (IClassBoardLineModel_c **)&v99->_1.interfaceOffsets->offset;
        while ( *(v101 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v100;
          v101 += 2;
          if ( v100 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_117;
        }
        v102 = (__int64)&v99->vtable[*(_DWORD *)v101 + 1].method;
      }
      else
      {
LABEL_117:
        v102 = sub_AA67A0(current, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v103 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v102)(current, *(_QWORD *)(v102 + 8));
      v104 = v103;
      if ( !v103 )
        sub_B0D97C(0LL);
      v105 = *(_QWORD *)v103;
      if ( *(_WORD *)(*(_QWORD *)v103 + 298LL) )
      {
        v106 = 0LL;
        v107 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v105 + 176) + 8LL);
        while ( *(v107 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v106;
          v107 += 2;
          if ( v106 >= *(unsigned __int16 *)(*(_QWORD *)v103 + 298LL) )
            goto LABEL_124;
        }
        v108 = v105 + 16LL * (*(_DWORD *)v107 + 12) + 312;
      }
      else
      {
LABEL_124:
        v108 = sub_AA67A0(v103, IClassBoardSquareModel_TypeInfo, 12LL);
      }
      v109 = (*(__int64 (__fastcall **)(__int64, _QWORD))v108)(v104, *(_QWORD *)(v108 + 8));
      v110 = v109;
      if ( !v109 )
        sub_B0D97C(0LL);
      v111 = *(_QWORD *)v109;
      if ( *(_WORD *)(*(_QWORD *)v109 + 298LL) )
      {
        v112 = 0LL;
        v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v113 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          ++v112;
          v113 += 4;
          if ( v112 >= *(unsigned __int16 *)(*(_QWORD *)v109 + 298LL) )
            goto LABEL_131;
        }
        v114 = v111 + 16LL * *v113 + 312;
      }
      else
      {
LABEL_131:
        v114 = sub_AA67A0(v109, IClassBoardSquareUser_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v114)(v110, *(_QWORD *)(v114 + 8)) & 1) != 0 )
        break;
    }
  }
  v144[0] = 231;
  v145 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v146,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
  v145 = 0;
  this = (ClassBoardSquareModel_o *)v4->fields.entity;
  if ( !this )
    goto LABEL_189;
  this = (ClassBoardSquareModel_o *)ClassBoardSquareEntity__get_IsBlank((ClassBoardSquareEntity_o *)this, v115);
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
  __int64 v20; // x2
  __int64 v21; // x8
  unsigned __int64 v22; // x25
  int32_t v23; // w23
  int32_t v24; // w24
  ClassBoardItemModel_o *v25; // x22
  __int64 v26; // x0

  if ( (byte_42146C0 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardItemModel_TypeInfo, itemIds);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardItemModel__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo, v9);
    byte_42146C0 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_IClassBoardItemModel__TypeInfo,
                                                                                                  itemIds,
                                                                                                  itemNums);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v10;
  p_itemList = &this->fields.itemList;
  sub_B0D840((BattleServantConfConponent_o *)p_itemList, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
  if ( !itemIds )
    goto LABEL_13;
  v21 = *(_QWORD *)&itemIds->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v21 )
        goto LABEL_12;
      if ( !itemNums )
        break;
      if ( v22 >= itemNums->max_length )
      {
LABEL_12:
        v26 = sub_B0D9A8(v18);
        sub_B0D948(v26, 0LL);
      }
      v23 = itemIds->m_Items[v22 + 1];
      v24 = itemNums->m_Items[v22 + 1];
      v25 = (ClassBoardItemModel_o *)sub_B0D974(ClassBoardItemModel_TypeInfo, v19, v20);
      ClassBoardItemModel___ctor(v25, v23, v24, 0LL);
      v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_itemList;
      if ( !*p_itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v18,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_IClassBoardItemModel__Add__);
      LODWORD(v21) = itemIds->max_length;
      if ( (__int64)++v22 >= (int)v21 )
        return;
    }
LABEL_13:
    sub_B0D97C(v18);
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
  IClassBoardSquareModel_c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  int32_t v30; // w23
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x20
  IClassBoardSquareModel_c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  ClassBoardSquareModel_c *v38; // x8
  ClassBoardSquareModel_o *v39; // x22
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x22
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x24
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x25
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  int *v62; // x11
  __int64 v63; // x0
  __int64 v64; // x8
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x25
  __int64 v70; // x8
  unsigned __int64 v71; // x10
  int *v72; // x11
  __int64 v73; // x0
  __int64 v74; // x0
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v76; // x8
  unsigned __int64 v77; // x10
  int *v78; // x11
  __int64 v79; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v80; // x0
  __int64 v81; // x8
  unsigned __int64 v82; // x10
  IClassBoardLineModel_c **v83; // x11
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x25
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  __int64 v91; // x8
  unsigned __int64 v92; // x10
  IClassBoardLineModel_c **v93; // x11
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x25
  __int64 v97; // x8
  unsigned __int64 v98; // x10
  int *v99; // x11
  __int64 v100; // x0
  __int64 v101; // x0
  struct ClassBoardSquareEntity_o *v102; // x8
  __int64 v103; // x8
  unsigned __int64 v104; // x10
  IClassBoardLineModel_c **v105; // x11
  __int64 v106; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v107; // x0
  __int64 v108; // x8
  unsigned __int64 v109; // x10
  int *v110; // x11
  __int64 v111; // x0
  int v112; // w19
  _BOOL8 v113; // x0
  Il2CppObject *current; // x20
  Il2CppClass *v115; // x8
  unsigned __int64 v116; // x10
  int32_t *v117; // x11
  __int64 v118; // x0
  System_Enum_o *v119; // x20
  System_Enum_o *v120; // x0
  bool v121; // w19
  int v122; // w8
  int v123; // w23
  int v124; // w9
  System_Collections_Generic_HashSet_int__o *v126; // [xsp+8h] [xbp-A8h]
  int v127; // [xsp+14h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v128; // [xsp+18h] [xbp-98h] BYREF
  int v129[3]; // [xsp+30h] [xbp-80h]
  int v130; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v131; // [xsp+40h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_42146C1 & 1) == 0 )
  {
    sub_B0D8A4(&AcquireFlag_TypeInfo, blankModel);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Contains__, v11);
    sub_B0D8A4(&IClassBoardLineModel_TypeInfo, v12);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v13);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v15);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v16);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v20);
    this = (ClassBoardSquareModel_o *)sub_B0D8A4(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v21);
    byte_42146C1 = 1;
  }
  memset(&v131, 0, sizeof(v131));
  v130 = 0;
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
    p_method = sub_AA67A0(blankModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                      blankModel,
                                      *(_QWORD *)(p_method + 8));
  if ( !checkedBlankIdHashSet )
    goto LABEL_158;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          checkedBlankIdHashSet,
          (int32_t)this,
          (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v26 = blankModel->klass;
    if ( *(_WORD *)&blankModel->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v28 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&blankModel->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AA67A0(blankModel, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v29)(blankModel, *(_QWORD *)(v29 + 8));
    v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                                                                    v31,
                                                                                                    v32);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v33,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    System_Collections_Generic_HashSet_int___Add(
      checkedBlankIdHashSet,
      v30,
      (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
      v37 = sub_AA67A0(blankModel, IClassBoardSquareModel_TypeInfo, 9LL);
    }
    this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v37)(
                                        blankModel,
                                        *(_QWORD *)(v37 + 8));
    if ( this )
    {
      v38 = this->klass;
      v39 = this;
      if ( *(_WORD *)&this->klass->_2.bitflags1 )
      {
        v40 = 0LL;
        v41 = &v38->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v41 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
        {
          ++v40;
          v41 += 4;
          if ( v40 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
            goto LABEL_29;
        }
        v42 = (__int64)(&v38->vtable._0_Equals.method + 2 * *v41);
      }
      else
      {
LABEL_29:
        v42 = sub_AA67A0(this, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
      }
      v126 = checkedBlankIdHashSet;
      v43 = (*(__int64 (__fastcall **)(ClassBoardSquareModel_o *, _QWORD))v42)(v39, *(_QWORD *)(v42 + 8));
      if ( !v43 )
        sub_B0D97C(0LL);
      while ( 1 )
      {
        v44 = *(_QWORD *)v43;
        if ( *(_WORD *)(*(_QWORD *)v43 + 298LL) )
        {
          v45 = 0LL;
          v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v45;
            v46 += 4;
            if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v43 + 298LL) )
              goto LABEL_36;
          }
          v47 = v44 + 16LL * *v46 + 312;
        }
        else
        {
LABEL_36:
          v47 = sub_AA67A0(v43, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) == 0 )
          break;
        v48 = *(_QWORD *)v43;
        if ( *(_WORD *)(*(_QWORD *)v43 + 298LL) )
        {
          v49 = 0LL;
          v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v50 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
          {
            ++v49;
            v50 += 4;
            if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v43 + 298LL) )
              goto LABEL_43;
          }
          v51 = v48 + 16LL * *v50 + 312;
        }
        else
        {
LABEL_43:
          v51 = sub_AA67A0(v43, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
        }
        v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v43, *(_QWORD *)(v51 + 8));
        v53 = v52;
        if ( !v52 )
          sub_B0D97C(0LL);
        v54 = *(_QWORD *)v52;
        if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
        {
          v55 = 0LL;
          v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v56 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v55;
            v56 += 4;
            if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
              goto LABEL_50;
          }
          v57 = v54 + 16LL * *v56 + 312;
        }
        else
        {
LABEL_50:
          v57 = sub_AA67A0(v52, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
        v59 = v58;
        if ( !v58 )
          sub_B0D97C(0LL);
        v60 = *(_QWORD *)v58;
        if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
        {
          v61 = 0LL;
          v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
          while ( *((IClassBoardSquareModel_c **)v62 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v61;
            v62 += 4;
            if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
              goto LABEL_57;
          }
          v63 = v60 + 16LL * *v62 + 312;
        }
        else
        {
LABEL_57:
          v63 = sub_AA67A0(v58, IClassBoardSquareModel_TypeInfo, 0LL);
        }
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8)) != v30 )
        {
          v64 = *(_QWORD *)v53;
          if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
          {
            v65 = 0LL;
            v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
            while ( *((IClassBoardLineModel_c **)v66 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v65;
              v66 += 4;
              if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
                goto LABEL_64;
            }
            v67 = v64 + 16LL * *v66 + 312;
          }
          else
          {
LABEL_64:
            v67 = sub_AA67A0(v53, IClassBoardLineModel_TypeInfo, 0LL);
          }
          v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v53, *(_QWORD *)(v67 + 8));
          v69 = v68;
          if ( !v68 )
            sub_B0D97C(0LL);
          v70 = *(_QWORD *)v68;
          if ( *(_WORD *)(*(_QWORD *)v68 + 298LL) )
          {
            v71 = 0LL;
            v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
            while ( *((IClassBoardSquareModel_c **)v72 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v71;
              v72 += 4;
              if ( v71 >= *(unsigned __int16 *)(*(_QWORD *)v68 + 298LL) )
                goto LABEL_71;
            }
            v73 = v70 + 16LL * *v72 + 312;
          }
          else
          {
LABEL_71:
            v73 = sub_AA67A0(v68, IClassBoardSquareModel_TypeInfo, 0LL);
          }
          v74 = (*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v69, *(_QWORD *)(v73 + 8));
          entity = v6->fields.entity;
          if ( !entity )
            sub_B0D97C(v74);
          if ( (_DWORD)v74 != entity->fields.id )
          {
            v76 = *(_QWORD *)v53;
            if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
            {
              v77 = 0LL;
              v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
              while ( *((IClassBoardLineModel_c **)v78 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v77;
                v78 += 4;
                if ( v77 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
                  goto LABEL_79;
              }
              v79 = v76 + 16LL * *v78 + 312;
            }
            else
            {
LABEL_79:
              v79 = sub_AA67A0(v53, IClassBoardLineModel_TypeInfo, 0LL);
            }
            v80 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v79)(
                                                                           v53,
                                                                           *(_QWORD *)(v79 + 8));
            if ( !v33 )
              sub_B0D97C(v80);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v33,
              v80,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          }
        }
        v81 = *(_QWORD *)v53;
        if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
        {
          v82 = 0LL;
          v83 = (IClassBoardLineModel_c **)(*(_QWORD *)(v81 + 176) + 8LL);
          while ( *(v83 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v82;
            v83 += 2;
            if ( v82 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
              goto LABEL_87;
          }
          v84 = v81 + 16LL * (*(_DWORD *)v83 + 1) + 312;
        }
        else
        {
LABEL_87:
          v84 = sub_AA67A0(v53, IClassBoardLineModel_TypeInfo, 1LL);
        }
        v85 = (*(__int64 (__fastcall **)(__int64, _QWORD))v84)(v53, *(_QWORD *)(v84 + 8));
        v86 = v85;
        if ( !v85 )
          sub_B0D97C(0LL);
        v87 = *(_QWORD *)v85;
        if ( *(_WORD *)(*(_QWORD *)v85 + 298LL) )
        {
          v88 = 0LL;
          v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
          while ( *((IClassBoardSquareModel_c **)v89 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v88;
            v89 += 4;
            if ( v88 >= *(unsigned __int16 *)(*(_QWORD *)v85 + 298LL) )
              goto LABEL_94;
          }
          v90 = v87 + 16LL * *v89 + 312;
        }
        else
        {
LABEL_94:
          v90 = sub_AA67A0(v85, IClassBoardSquareModel_TypeInfo, 0LL);
        }
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8)) != v30 )
        {
          v91 = *(_QWORD *)v53;
          if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
          {
            v92 = 0LL;
            v93 = (IClassBoardLineModel_c **)(*(_QWORD *)(v91 + 176) + 8LL);
            while ( *(v93 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v92;
              v93 += 2;
              if ( v92 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
                goto LABEL_101;
            }
            v94 = v91 + 16LL * (*(_DWORD *)v93 + 1) + 312;
          }
          else
          {
LABEL_101:
            v94 = sub_AA67A0(v53, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v95 = (*(__int64 (__fastcall **)(__int64, _QWORD))v94)(v53, *(_QWORD *)(v94 + 8));
          v96 = v95;
          if ( !v95 )
            sub_B0D97C(0LL);
          v97 = *(_QWORD *)v95;
          if ( *(_WORD *)(*(_QWORD *)v95 + 298LL) )
          {
            v98 = 0LL;
            v99 = (int *)(*(_QWORD *)(v97 + 176) + 8LL);
            while ( *((IClassBoardSquareModel_c **)v99 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v98;
              v99 += 4;
              if ( v98 >= *(unsigned __int16 *)(*(_QWORD *)v95 + 298LL) )
                goto LABEL_108;
            }
            v100 = v97 + 16LL * *v99 + 312;
          }
          else
          {
LABEL_108:
            v100 = sub_AA67A0(v95, IClassBoardSquareModel_TypeInfo, 0LL);
          }
          v101 = (*(__int64 (__fastcall **)(__int64, _QWORD))v100)(v96, *(_QWORD *)(v100 + 8));
          v102 = v6->fields.entity;
          if ( !v102 )
            sub_B0D97C(v101);
          if ( (_DWORD)v101 != v102->fields.id )
          {
            v103 = *(_QWORD *)v53;
            if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
            {
              v104 = 0LL;
              v105 = (IClassBoardLineModel_c **)(*(_QWORD *)(v103 + 176) + 8LL);
              while ( *(v105 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v104;
                v105 += 2;
                if ( v104 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
                  goto LABEL_116;
              }
              v106 = v103 + 16LL * (*(_DWORD *)v105 + 1) + 312;
            }
            else
            {
LABEL_116:
              v106 = sub_AA67A0(v53, IClassBoardLineModel_TypeInfo, 1LL);
            }
            v107 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v106)(
                                                                            v53,
                                                                            *(_QWORD *)(v106 + 8));
            if ( !v33 )
              sub_B0D97C(v107);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v33,
              v107,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          }
        }
      }
      v129[0] = 177;
      v130 = 1;
      v108 = *(_QWORD *)v43;
      if ( *(_WORD *)(*(_QWORD *)v43 + 298LL) )
      {
        v109 = 0LL;
        v110 = (int *)(*(_QWORD *)(v108 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v110 - 1) != System_IDisposable_TypeInfo )
        {
          ++v109;
          v110 += 4;
          if ( v109 >= *(unsigned __int16 *)(*(_QWORD *)v43 + 298LL) )
            goto LABEL_124;
        }
        v111 = v108 + 16LL * *v110 + 312;
      }
      else
      {
LABEL_124:
        v111 = sub_AA67A0(v43, System_IDisposable_TypeInfo, 0LL);
      }
      this = (ClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v111)(v43, *(_QWORD *)(v111 + 8));
      v130 = 0;
      if ( v33 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v128,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v33,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
        v112 = 0;
        v131 = v128;
        while ( 1 )
        {
          v113 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v131,
                   (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
          if ( !v113 )
            break;
          current = v131.fields.current;
          if ( !v131.fields.current )
            sub_B0D97C(v113);
          v115 = v131.fields.current->klass;
          if ( *(_WORD *)&v131.fields.current->klass->_2.bitflags1 )
          {
            v116 = 0LL;
            v117 = &v115->_1.interfaceOffsets->offset;
            while ( *((IClassBoardSquareModel_c **)v117 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v116;
              v117 += 4;
              if ( v116 >= *(unsigned __int16 *)&v131.fields.current->klass->_2.bitflags1 )
                goto LABEL_134;
            }
            v118 = (__int64)&v115->vtable[*v117 + 13].method;
          }
          else
          {
LABEL_134:
            v118 = sub_AA67A0(v131.fields.current, IClassBoardSquareModel_TypeInfo, 13LL);
          }
          v112 |= (*(__int64 (__fastcall **)(Il2CppObject *, System_Collections_Generic_HashSet_int__o *, _QWORD))v118)(
                    current,
                    v126,
                    *(_QWORD *)(v118 + 8));
          LODWORD(v128.fields.list) = v112;
          v119 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v128);
          v127 = 1;
          v120 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v127);
          if ( !v119 )
            sub_B0D97C(v120);
          if ( System_Enum__HasFlag(v119, v120, 0LL) )
          {
            v121 = 1;
            v122 = 258;
            goto LABEL_140;
          }
        }
        v121 = 0;
        v122 = 256;
LABEL_140:
        v129[0] = v122;
        v123 = ++v130;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v131,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
        if ( !v123 )
          return 0;
        v124 = v129[v123 - 1];
        if ( v124 == 256 )
        {
          v121 = 0;
        }
        else if ( v124 != 258 )
        {
          return 0;
        }
        v130 = v123 - 1;
        return v121;
      }
    }
LABEL_158:
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return entity->fields.assetId;
}


int32_t __fastcall ClassBoardSquareModel__get_BaseId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B0D97C(this);
  return entity->fields.classBoardBaseId;
}


bool __fastcall ClassBoardSquareModel__get_HasLine(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  if ( (byte_42146BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_IClassBoardLineModel___, method);
    byte_42146BD = 1;
  }
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
           (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
}


int32_t __fastcall ClassBoardSquareModel__get_IconId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B0D97C(this);
  return entity->fields.iconId;
}


int32_t __fastcall ClassBoardSquareModel__get_Id(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B0D97C(this);
  return entity->fields.id;
}


bool __fastcall ClassBoardSquareModel__get_IsBlank(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B0D97C(0LL);
  return ClassBoardSquareEntity__get_IsBlank(entity, method);
}


bool __fastcall ClassBoardSquareModel__get_IsStart(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return entity->fields.skillType;
}


int32_t __fastcall ClassBoardSquareModel__get_TargetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B0D97C(this);
  return entity->fields.targetId;
}


int32_t __fastcall ClassBoardSquareModel__get_UpSkillLv(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B0D97C(this);
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
  __int64 v5; // x1
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v11; // x8
  int v12; // w19
  unsigned __int64 v13; // x10
  int *v14; // x11
  __int64 v15; // x0
  ClassBoardSquareModel___c__DisplayClass38_0_c *v16; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v17; // x20
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0

  v4 = this;
  if ( (byte_4211E38 & 1) == 0 )
  {
    sub_B0D8A4(&IClassBoardLineModel_TypeInfo, x);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v5);
    byte_4211E38 = 1;
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
    p_method = sub_AA67A0(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v4->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v11 = lineModel->klass;
  v12 = (int)this;
  if ( *(_WORD *)&lineModel->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v14 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v13;
      v14 += 4;
      if ( v13 >= *(unsigned __int16 *)&lineModel->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v15 = (__int64)&v11->vtable[*v14].method;
  }
  else
  {
LABEL_15:
    v15 = sub_AA67A0(lineModel, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v15)(
                                                            lineModel,
                                                            *(_QWORD *)(v15 + 8));
  if ( !this )
LABEL_25:
    sub_B0D97C(this);
  v16 = this->klass;
  v17 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    v19 = &v16->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v18;
      v19 += 4;
      if ( v18 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v20 = (__int64)(&v16->vtable._0_Equals.method + 2 * *v19);
  }
  else
  {
LABEL_22:
    v20 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v12 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v20)(
                  v17,
                  *(_QWORD *)(v20 + 8));
}


bool __fastcall ClassBoardSquareModel___c__DisplayClass38_0___FindLinkSquares_b__1(
        ClassBoardSquareModel___c__DisplayClass38_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  ClassBoardSquareModel___c__DisplayClass38_0_o *v4; // x19
  __int64 v5; // x1
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v11; // x8
  int v12; // w19
  unsigned __int64 v13; // x10
  IClassBoardLineModel_c **v14; // x11
  __int64 v15; // x0
  ClassBoardSquareModel___c__DisplayClass38_0_c *v16; // x8
  ClassBoardSquareModel___c__DisplayClass38_0_o *v17; // x20
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0

  v4 = this;
  if ( (byte_4211E39 & 1) == 0 )
  {
    sub_B0D8A4(&IClassBoardLineModel_TypeInfo, x);
    this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v5);
    byte_4211E39 = 1;
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
    p_method = sub_AA67A0(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                            x,
                                                            *(_QWORD *)(p_method + 8));
  lineModel = v4->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v11 = lineModel->klass;
  v12 = (int)this;
  if ( *(_WORD *)&lineModel->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    v14 = (IClassBoardLineModel_c **)&v11->_1.interfaceOffsets->offset;
    while ( *(v14 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v13;
      v14 += 2;
      if ( v13 >= *(unsigned __int16 *)&lineModel->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v15 = (__int64)&v11->vtable[*(_DWORD *)v14 + 1].method;
  }
  else
  {
LABEL_15:
    v15 = sub_AA67A0(lineModel, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardSquareModel___c__DisplayClass38_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v15)(
                                                            lineModel,
                                                            *(_QWORD *)(v15 + 8));
  if ( !this )
LABEL_25:
    sub_B0D97C(this);
  v16 = this->klass;
  v17 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    v19 = &v16->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v18;
      v19 += 4;
      if ( v18 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v20 = (__int64)(&v16->vtable._0_Equals.method + 2 * *v19);
  }
  else
  {
LABEL_22:
    v20 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v12 == (*(unsigned int (__fastcall **)(ClassBoardSquareModel___c__DisplayClass38_0_o *, _QWORD))v20)(
                  v17,
                  *(_QWORD *)(v20 + 8));
}