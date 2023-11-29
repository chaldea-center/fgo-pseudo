void __fastcall ClassBoardSquareModel___ctor(
        ClassBoardSquareModel_o *this,
        ClassBoardSquareEntity_o *squareEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
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
  System_Int32_array **entity; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x3
  struct ClassBoardSquareEntity_o *v54; // x8

  if ( (byte_40FBA0E & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardSquareUser_TypeInfo, squareEntity);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_IClassBoardLineModel__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo, v10);
    byte_40FBA0E = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_IClassBoardItemModel__TypeInfo,
                                                                                                  squareEntity,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_IClassBoardLineModel__TypeInfo,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_IClassBoardLineModel___ctor__);
  this->fields.lineList = (struct System_Collections_Generic_List_IClassBoardLineModel__o *)v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.lineList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.entity = squareEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)squareEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  entity = (System_Int32_array **)this->fields.entity;
  v40 = sub_B170CC(ClassBoardSquareUser_TypeInfo, v36, v37, v38, v39);
  System_Object___ctor((Il2CppObject *)v40, 0LL);
  *(_QWORD *)(v40 + 24) = entity;
  sub_B16F98((BattleServantConfConponent_o *)(v40 + 24), entity, v41, v42, v43, v44, v45, v46);
  this->fields.user = (struct IClassBoardSquareUser_o *)v40;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.user,
    (System_Int32_array **)v40,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v54 = this->fields.entity;
  if ( !v54 )
    sub_B170D4();
  ClassBoardSquareModel__InitializeItemList(this, v54->fields.itemIds, v54->fields.itemNums, v53);
}


void __fastcall ClassBoardSquareModel__AddLine(
        ClassBoardSquareModel_o *this,
        IClassBoardLineModel_o *line,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0

  if ( (byte_40FBA0F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardLineModel__Add__, line);
    byte_40FBA0F = 1;
  }
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)line,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_IClassBoardLineModel__Add__);
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
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **current; // x1
  __int64 **v30; // x21
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
  int v42; // w0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  struct ClassBoardSquareEntity_o *entity; // x8
  System_Collections_Generic_List_T__o *v48; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v49; // x24
  __int64 *v50; // x23
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  IClassBoardLineModel_c **v53; // x11
  __int64 v54; // x0
  __int64 *v55; // x23
  __int64 v56; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *v57; // x22
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x23
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  int v67; // w0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  struct ClassBoardSquareEntity_o *v72; // x8
  System_Collections_Generic_List_T__o *v73; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v74; // x24
  __int64 *v75; // x23
  __int64 v76; // x8
  System_Collections_Generic_List_IClassBoardSquareModel__o *v77; // x22
  unsigned __int64 v78; // x10
  IClassBoardLineModel_c **v79; // x11
  __int64 v80; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v81; // x1
  __int64 *v82; // x22
  __int64 v83; // x8
  unsigned __int64 v84; // x10
  int *v85; // x11
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x22
  __int64 v89; // x8
  unsigned __int64 v90; // x10
  IClassBoardSquareModel_c **v91; // x11
  __int64 v92; // x0
  __int64 *v93; // x21
  __int64 v94; // x8
  unsigned __int64 v95; // x10
  int *v96; // x11
  __int64 v97; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v98; // x1
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
  __int64 *v110; // x21
  __int64 v111; // x8
  unsigned __int64 v112; // x10
  IClassBoardLineModel_c **v113; // x11
  __int64 v114; // x0
  __int64 v115; // x0
  __int64 v116; // x21
  __int64 v117; // x8
  IClassBoardSquareModel_c *v118; // x1
  unsigned __int64 v119; // x10
  IClassBoardSquareModel_c **v120; // x11
  __int64 v121; // x0
  __int64 v122; // x8
  unsigned __int64 v123; // x10
  IClassBoardSquareModel_c **v124; // x11
  System_Collections_Generic_List_Enumerator_T__o v125; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v126; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FBA12 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_IClassBoardSquareModel___, connectSquareList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__, v7);
    sub_B16FFC(&Method_System_Func_IClassBoardSquareModel__bool___ctor__, v8);
    sub_B16FFC(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v9);
    sub_B16FFC(&IClassBoardLineModel_TypeInfo, v10);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__, v13);
    sub_B16FFC(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__, v14);
    sub_B16FFC(&Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__, v15);
    sub_B16FFC(&ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo, v16);
    byte_40FBA12 = 1;
  }
  memset(&v126, 0, sizeof(v126));
  lineList = this->fields.lineList;
  if ( !lineList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v125,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lineList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v126 = v125;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v126,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
  {
    v22 = sub_B170CC(ClassBoardSquareModel___c__DisplayClass38_0_TypeInfo, v18, v19, v20, v21);
    ClassBoardSquareModel___c__DisplayClass38_0___ctor((ClassBoardSquareModel___c__DisplayClass38_0_o *)v22, 0LL);
    if ( !v22 )
      sub_B170D4();
    current = (System_Int32_array **)v126.fields.current;
    *(_QWORD *)(v22 + 16) = v126.fields.current;
    v30 = (__int64 **)(v22 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), current, v23, v24, v25, v26, v27, v28);
    v31 = *(__int64 **)(v22 + 16);
    if ( !v31 )
      sub_B170D4();
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
      v35 = sub_AAFEF8(*v30, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8));
    v37 = v36;
    if ( !v36 )
      sub_B170D4();
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
      v41 = sub_AAFEF8(v36, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8));
    entity = this->fields.entity;
    if ( !entity )
      sub_B170D4();
    if ( v42 == entity->fields.id
      || (v48 = (System_Collections_Generic_List_T__o *)*connectSquareList,
          v49 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_IClassBoardSquareModel__bool__TypeInfo,
                                                                                     v43,
                                                                                     v44,
                                                                                     v45,
                                                                                     v46),
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v49,
            (Il2CppObject *)v22,
            Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__0__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__),
          BasicHelper__Any_WarBoardData_SquareRangeSearch_(
            v48,
            (System_Func_T__bool__o *)v49,
            (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_IClassBoardSquareModel___)) )
    {
      v50 = *v30;
      if ( !*v30 )
        sub_B170D4();
      v51 = *v50;
      if ( *(_WORD *)(*v50 + 298) )
      {
        v52 = 0LL;
        v53 = (IClassBoardLineModel_c **)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *(v53 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v52;
          v53 += 2;
          if ( v52 >= *(unsigned __int16 *)(*v50 + 298) )
            goto LABEL_29;
        }
        v54 = v51 + 16LL * (*(_DWORD *)v53 + 1) + 312;
      }
      else
      {
LABEL_29:
        v54 = sub_AAFEF8(*v30, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v61 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8));
      v62 = v61;
      if ( !v61 )
        sub_B170D4();
      v63 = *(_QWORD *)v61;
      if ( *(_WORD *)(*(_QWORD *)v61 + 298LL) )
      {
        v64 = 0LL;
        v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v65 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v64;
          v65 += 4;
          if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v61 + 298LL) )
            goto LABEL_42;
        }
        v66 = v63 + 16LL * *v65 + 312;
      }
      else
      {
LABEL_42:
        v66 = sub_AAFEF8(v61, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v67 = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v62, *(_QWORD *)(v66 + 8));
      v72 = this->fields.entity;
      if ( !v72 )
        sub_B170D4();
      if ( v67 != v72->fields.id )
      {
        v73 = (System_Collections_Generic_List_T__o *)*connectSquareList;
        v74 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_IClassBoardSquareModel__bool__TypeInfo,
                                                                                   v68,
                                                                                   v69,
                                                                                   v70,
                                                                                   v71);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v74,
          (Il2CppObject *)v22,
          Method_ClassBoardSquareModel___c__DisplayClass38_0__FindLinkSquares_b__1__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
        if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                v73,
                (System_Func_T__bool__o *)v74,
                (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_IClassBoardSquareModel___) )
        {
          v75 = *v30;
          if ( !*v30 )
            sub_B170D4();
          v76 = *v75;
          v77 = *connectSquareList;
          if ( *(_WORD *)(*v75 + 298) )
          {
            v78 = 0LL;
            v79 = (IClassBoardLineModel_c **)(*(_QWORD *)(v76 + 176) + 8LL);
            while ( *(v79 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v78;
              v79 += 2;
              if ( v78 >= *(unsigned __int16 *)(*v75 + 298) )
                goto LABEL_52;
            }
            v80 = v76 + 16LL * (*(_DWORD *)v79 + 1) + 312;
          }
          else
          {
LABEL_52:
            v80 = sub_AAFEF8(*v30, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v98 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v80)(
                                                                         v75,
                                                                         *(_QWORD *)(v80 + 8));
          if ( !v77 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v77,
            v98,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          v99 = *v30;
          if ( !*v30 )
            sub_B170D4();
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
            v103 = sub_AAFEF8(*v30, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v104 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v103)(v99, *(_QWORD *)(v103 + 8));
          v105 = v104;
          if ( !v104 )
            sub_B170D4();
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
            v109 = sub_AAFEF8(v104, IClassBoardSquareModel_TypeInfo, 5LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v109)(v105, *(_QWORD *)(v109 + 8)) & 1) != 0 )
          {
            v110 = *v30;
            if ( !v110 )
              sub_B170D4();
            v111 = *v110;
            if ( *(_WORD *)(*v110 + 298) )
            {
              v112 = 0LL;
              v113 = (IClassBoardLineModel_c **)(*(_QWORD *)(v111 + 176) + 8LL);
              while ( *(v113 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v112;
                v113 += 2;
                if ( v112 >= *(unsigned __int16 *)(*v110 + 298) )
                  goto LABEL_98;
              }
              v114 = v111 + 16LL * (*(_DWORD *)v113 + 1) + 312;
            }
            else
            {
LABEL_98:
              v114 = sub_AAFEF8(v110, IClassBoardLineModel_TypeInfo, 1LL);
            }
            v115 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v114)(v110, *(_QWORD *)(v114 + 8));
            v116 = v115;
            if ( !v115 )
              sub_B170D4();
            v122 = *(_QWORD *)v115;
            v118 = IClassBoardSquareModel_TypeInfo;
            if ( !*(_WORD *)(*(_QWORD *)v115 + 298LL) )
              goto LABEL_105;
            v123 = 0LL;
            v124 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v122 + 176) + 8LL);
            while ( *(v124 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v123;
              v124 += 2;
              if ( v123 >= *(unsigned __int16 *)(*(_QWORD *)v115 + 298LL) )
                goto LABEL_105;
            }
            v121 = v122 + 16LL * (*(_DWORD *)v124 + 15) + 312;
            goto LABEL_107;
          }
        }
      }
    }
    else
    {
      v55 = *v30;
      if ( !*v30 )
        sub_B170D4();
      v56 = *v55;
      v57 = *connectSquareList;
      if ( *(_WORD *)(*v55 + 298) )
      {
        v58 = 0LL;
        v59 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v59 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v58;
          v59 += 4;
          if ( v58 >= *(unsigned __int16 *)(*v55 + 298) )
            goto LABEL_35;
        }
        v60 = v56 + 16LL * *v59 + 312;
      }
      else
      {
LABEL_35:
        v60 = sub_AAFEF8(*v30, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v81 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v60)(
                                                                     v55,
                                                                     *(_QWORD *)(v60 + 8));
      if ( !v57 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v57,
        v81,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
      v82 = *v30;
      if ( !*v30 )
        sub_B170D4();
      v83 = *v82;
      if ( *(_WORD *)(*v82 + 298) )
      {
        v84 = 0LL;
        v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v85 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v84;
          v85 += 4;
          if ( v84 >= *(unsigned __int16 *)(*v82 + 298) )
            goto LABEL_60;
        }
        v86 = v83 + 16LL * *v85 + 312;
      }
      else
      {
LABEL_60:
        v86 = sub_AAFEF8(*v30, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v87 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v86)(v82, *(_QWORD *)(v86 + 8));
      v88 = v87;
      if ( !v87 )
        sub_B170D4();
      v89 = *(_QWORD *)v87;
      if ( *(_WORD *)(*(_QWORD *)v87 + 298LL) )
      {
        v90 = 0LL;
        v91 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v89 + 176) + 8LL);
        while ( *(v91 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v90;
          v91 += 2;
          if ( v90 >= *(unsigned __int16 *)(*(_QWORD *)v87 + 298LL) )
            goto LABEL_67;
        }
        v92 = v89 + 16LL * (*(_DWORD *)v91 + 5) + 312;
      }
      else
      {
LABEL_67:
        v92 = sub_AAFEF8(v87, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v92)(v88, *(_QWORD *)(v92 + 8)) & 1) != 0 )
      {
        v93 = *v30;
        if ( !v93 )
          sub_B170D4();
        v94 = *v93;
        if ( *(_WORD *)(*v93 + 298) )
        {
          v95 = 0LL;
          v96 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v96 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v95;
            v96 += 4;
            if ( v95 >= *(unsigned __int16 *)(*v93 + 298) )
              goto LABEL_75;
          }
          v97 = v94 + 16LL * *v96 + 312;
        }
        else
        {
LABEL_75:
          v97 = sub_AAFEF8(v93, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v115 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v97)(v93, *(_QWORD *)(v97 + 8));
        v116 = v115;
        if ( !v115 )
          sub_B170D4();
        v117 = *(_QWORD *)v115;
        v118 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)(*(_QWORD *)v115 + 298LL) )
        {
LABEL_105:
          v121 = sub_AAFEF8(v115, v118, 15LL);
          goto LABEL_107;
        }
        v119 = 0LL;
        v120 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v117 + 176) + 8LL);
        while ( *(v120 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v119;
          v120 += 2;
          if ( v119 >= *(unsigned __int16 *)(*(_QWORD *)v115 + 298LL) )
            goto LABEL_105;
        }
        v121 = v117 + 16LL * (*(_DWORD *)v120 + 15) + 312;
LABEL_107:
        (*(void (__fastcall **)(__int64, System_Collections_Generic_List_IClassBoardSquareModel__o **, _QWORD))v121)(
          v116,
          connectSquareList,
          *(_QWORD *)(v121 + 8));
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v126,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
}


int32_t __fastcall ClassBoardSquareModel__GetAcquireFlag(
        ClassBoardSquareModel_o *this,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  System_Collections_Generic_HashSet_int__o *v5; // x20
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
  struct IClassBoardSquareUser_o *user; // x21
  IClassBoardSquareUser_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v25; // x1
  int32_t v26; // w20
  ClassBoardSquareEntity_o *entity; // x0
  struct System_Collections_Generic_List_IClassBoardLineModel__o *lineList; // x0
  Il2CppObject *current; // x21
  Il2CppClass *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x22
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  IClassBoardSquareModel_c **v38; // x11
  __int64 v39; // x0
  Il2CppClass *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  IClassBoardSquareModel_o *v44; // x1
  const MethodInfo *v45; // x3
  Il2CppClass *v46; // x8
  unsigned __int64 v47; // x10
  IClassBoardLineModel_c **v48; // x11
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x22
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  IClassBoardSquareModel_c **v54; // x11
  __int64 v55; // x0
  Il2CppClass *v56; // x8
  unsigned __int64 v57; // x10
  IClassBoardLineModel_c **v58; // x11
  __int64 v59; // x0
  IClassBoardSquareModel_o *v60; // x1
  const MethodInfo *v61; // x3
  Il2CppClass *v62; // x8
  unsigned __int64 v63; // x10
  int32_t *v64; // x11
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x22
  __int64 v68; // x8
  unsigned __int64 v69; // x10
  int *v70; // x11
  __int64 v71; // x0
  int v72; // w0
  struct ClassBoardSquareEntity_o *v73; // x8
  Il2CppClass *v74; // x8
  unsigned __int64 v75; // x10
  int32_t *v76; // x11
  __int64 v77; // x0
  __int64 v78; // x0
  __int64 v79; // x22
  __int64 v80; // x8
  unsigned __int64 v81; // x10
  IClassBoardSquareModel_c **v82; // x11
  __int64 v83; // x0
  __int64 v84; // x0
  __int64 v85; // x22
  __int64 v86; // x8
  unsigned __int64 v87; // x10
  int *v88; // x11
  __int64 v89; // x0
  Il2CppClass *v90; // x8
  unsigned __int64 v91; // x10
  IClassBoardLineModel_c **v92; // x11
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x22
  __int64 v96; // x8
  unsigned __int64 v97; // x10
  int *v98; // x11
  __int64 v99; // x0
  int v100; // w0
  struct ClassBoardSquareEntity_o *v101; // x8
  Il2CppClass *v102; // x8
  unsigned __int64 v103; // x10
  IClassBoardLineModel_c **v104; // x11
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x21
  __int64 v108; // x8
  unsigned __int64 v109; // x10
  IClassBoardSquareModel_c **v110; // x11
  __int64 v111; // x0
  __int64 v112; // x0
  __int64 v113; // x21
  __int64 v114; // x8
  unsigned __int64 v115; // x10
  int *v116; // x11
  __int64 v117; // x0
  const MethodInfo *v118; // x1
  ClassBoardSquareEntity_o *v119; // x0
  struct System_Collections_Generic_List_IClassBoardItemModel__o *itemList; // x19
  System_Collections_Generic_List_IClassBoardItemModel__c *v121; // x8
  unsigned __int64 v122; // x10
  int32_t *v123; // x11
  __int64 v124; // x0
  __int64 v125; // x19
  __int64 v126; // x8
  unsigned __int64 v127; // x10
  int *v128; // x11
  __int64 v129; // x0
  __int64 v130; // x8
  unsigned __int64 v131; // x10
  int *v132; // x11
  __int64 v133; // x0
  __int64 v134; // x0
  __int64 v135; // x21
  __int64 v136; // x8
  unsigned __int64 v137; // x10
  IClassBoardItemModel_c **v138; // x11
  __int64 v139; // x0
  int v140; // w8
  int v141; // w22
  __int64 v142; // x8
  unsigned __int64 v143; // x10
  int *v144; // x11
  __int64 v145; // x0
  System_Collections_Generic_List_Enumerator_T__o v147; // [xsp+0h] [xbp-90h] BYREF
  int v148[5]; // [xsp+18h] [xbp-78h]
  int v149; // [xsp+2Ch] [xbp-64h]
  System_Collections_Generic_List_Enumerator_T__o v150; // [xsp+30h] [xbp-60h] BYREF

  v5 = checkedBlankIdHashSet;
  if ( (byte_40FBA0C & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__,
      checkedBlankIdHashSet);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v9);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_B16FFC(&IClassBoardItemModel_TypeInfo, v11);
    sub_B16FFC(&IClassBoardLineModel_TypeInfo, v12);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v13);
    sub_B16FFC(&IClassBoardSquareUser_TypeInfo, v14);
    sub_B16FFC(&System_IDisposable_TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v17);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__, v19);
    byte_40FBA0C = 1;
  }
  memset(&v150, 0, sizeof(v150));
  v149 = 0;
  if ( !v5 )
  {
    v5 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                        System_Collections_Generic_HashSet_int__TypeInfo,
                                                        checkedBlankIdHashSet,
                                                        method,
                                                        v3,
                                                        v4);
    System_Collections_Generic_HashSet_int____ctor(
      v5,
      (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  }
  user = this->fields.user;
  if ( !user )
    goto LABEL_189;
  klass = user->klass;
  if ( *(_WORD *)&user->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareUser_c **)p_offset - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&user->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AAFEF8(this->fields.user, IClassBoardSquareUser_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareUser_o *, _QWORD))p_method)(user, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    return 1;
  entity = this->fields.entity;
  if ( !entity )
    goto LABEL_189;
  if ( ClassBoardSquareEntity__get_IsStart(entity, v25) )
    goto LABEL_136;
  lineList = this->fields.lineList;
  if ( !lineList )
LABEL_189:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v147,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)lineList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_IClassBoardLineModel__GetEnumerator__);
  v150 = v147;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v150,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__MoveNext__) )
    {
      v148[0] = 231;
      v149 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v150,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
      v149 = 0;
      v26 = 2;
LABEL_138:
      itemList = this->fields.itemList;
      if ( itemList )
      {
        v121 = itemList->klass;
        if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
        {
          v122 = 0LL;
          v123 = &v121->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)v123 - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
          {
            ++v122;
            v123 += 4;
            if ( v122 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
              goto LABEL_143;
          }
          v124 = (__int64)(&v121->vtable._0_Equals.method + 2 * *v123);
        }
        else
        {
LABEL_143:
          v124 = sub_AAFEF8(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
        }
        v125 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_IClassBoardItemModel__o *, _QWORD))v124)(
                 itemList,
                 *(_QWORD *)(v124 + 8));
        if ( !v125 )
          sub_B170D4();
        while ( 1 )
        {
          v126 = *(_QWORD *)v125;
          if ( *(_WORD *)(*(_QWORD *)v125 + 298LL) )
          {
            v127 = 0LL;
            v128 = (int *)(*(_QWORD *)(v126 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v128 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v127;
              v128 += 4;
              if ( v127 >= *(unsigned __int16 *)(*(_QWORD *)v125 + 298LL) )
                goto LABEL_150;
            }
            v129 = v126 + 16LL * *v128 + 312;
          }
          else
          {
LABEL_150:
            v129 = sub_AAFEF8(v125, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v129)(v125, *(_QWORD *)(v129 + 8)) & 1) == 0 )
            break;
          v130 = *(_QWORD *)v125;
          if ( *(_WORD *)(*(_QWORD *)v125 + 298LL) )
          {
            v131 = 0LL;
            v132 = (int *)(*(_QWORD *)(v130 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v132 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
            {
              ++v131;
              v132 += 4;
              if ( v131 >= *(unsigned __int16 *)(*(_QWORD *)v125 + 298LL) )
                goto LABEL_157;
            }
            v133 = v130 + 16LL * *v132 + 312;
          }
          else
          {
LABEL_157:
            v133 = sub_AAFEF8(v125, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
          }
          v134 = (*(__int64 (__fastcall **)(__int64, _QWORD))v133)(v125, *(_QWORD *)(v133 + 8));
          v135 = v134;
          if ( !v134 )
            sub_B170D4();
          v136 = *(_QWORD *)v134;
          if ( *(_WORD *)(*(_QWORD *)v134 + 298LL) )
          {
            v137 = 0LL;
            v138 = (IClassBoardItemModel_c **)(*(_QWORD *)(v136 + 176) + 8LL);
            while ( *(v138 - 1) != IClassBoardItemModel_TypeInfo )
            {
              ++v137;
              v138 += 2;
              if ( v137 >= *(unsigned __int16 *)(*(_QWORD *)v134 + 298LL) )
                goto LABEL_164;
            }
            v139 = v136 + 16LL * (*(_DWORD *)v138 + 2) + 312;
          }
          else
          {
LABEL_164:
            v139 = sub_AAFEF8(v134, IClassBoardItemModel_TypeInfo, 2LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v139)(v135, *(_QWORD *)(v139 + 8)) & 1) == 0 )
          {
            v148[0] = 308;
            v140 = v149;
            v26 |= 8u;
            goto LABEL_169;
          }
        }
        v148[0] = 308;
        v140 = v149;
LABEL_169:
        v141 = v140 + 1;
        v149 = v140 + 1;
        v142 = *(_QWORD *)v125;
        if ( *(_WORD *)(*(_QWORD *)v125 + 298LL) )
        {
          v143 = 0LL;
          v144 = (int *)(*(_QWORD *)(v142 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v144 - 1) != System_IDisposable_TypeInfo )
          {
            ++v143;
            v144 += 4;
            if ( v143 >= *(unsigned __int16 *)(*(_QWORD *)v125 + 298LL) )
              goto LABEL_174;
          }
          v145 = v142 + 16LL * *v144 + 312;
        }
        else
        {
LABEL_174:
          v145 = sub_AAFEF8(v125, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v145)(v125, *(_QWORD *)(v145 + 8));
        if ( v141 && v148[v141 - 1] == 308 )
          v149 = v141 - 1;
        return v26;
      }
      goto LABEL_189;
    }
    current = v150.fields.current;
    if ( !v150.fields.current )
      sub_B170D4();
    v30 = v150.fields.current->klass;
    if ( *(_WORD *)&v150.fields.current->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v32 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)&v150.fields.current->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_24:
      v33 = sub_AAFEF8(v150.fields.current, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v33)(current, *(_QWORD *)(v33 + 8));
    v35 = v34;
    if ( !v34 )
      sub_B170D4();
    v36 = *(_QWORD *)v34;
    if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
    {
      v37 = 0LL;
      v38 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *(v38 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v37;
        v38 += 2;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
          goto LABEL_31;
      }
      v39 = v36 + 16LL * (*(_DWORD *)v38 + 5) + 312;
    }
    else
    {
LABEL_31:
      v39 = sub_AAFEF8(v34, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) != 0 )
    {
      v40 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v41 = 0LL;
        v42 = &v40->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v42 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v41;
          v42 += 4;
          if ( v41 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_38;
        }
        v43 = (__int64)&v40->vtable[*v42].method;
      }
      else
      {
LABEL_38:
        v43 = sub_AAFEF8(current, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v44 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v43)(
                                          current,
                                          *(_QWORD *)(v43 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(this, v44, v5, v45) )
        break;
    }
    v46 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v47 = 0LL;
      v48 = (IClassBoardLineModel_c **)&v46->_1.interfaceOffsets->offset;
      while ( *(v48 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v47;
        v48 += 2;
        if ( v47 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_45;
      }
      v49 = (__int64)&v46->vtable[*(_DWORD *)v48 + 1].method;
    }
    else
    {
LABEL_45:
      v49 = sub_AAFEF8(current, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v50 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v49)(current, *(_QWORD *)(v49 + 8));
    v51 = v50;
    if ( !v50 )
      sub_B170D4();
    v52 = *(_QWORD *)v50;
    if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
    {
      v53 = 0LL;
      v54 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *(v54 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v53;
        v54 += 2;
        if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
          goto LABEL_52;
      }
      v55 = v52 + 16LL * (*(_DWORD *)v54 + 5) + 312;
    }
    else
    {
LABEL_52:
      v55 = sub_AAFEF8(v50, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) != 0 )
    {
      v56 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v57 = 0LL;
        v58 = (IClassBoardLineModel_c **)&v56->_1.interfaceOffsets->offset;
        while ( *(v58 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v57;
          v58 += 2;
          if ( v57 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_59;
        }
        v59 = (__int64)&v56->vtable[*(_DWORD *)v58 + 1].method;
      }
      else
      {
LABEL_59:
        v59 = sub_AAFEF8(current, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v60 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v59)(
                                          current,
                                          *(_QWORD *)(v59 + 8));
      if ( ClassBoardSquareModel__IsBlankConnected(this, v60, v5, v61) )
        break;
    }
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
          goto LABEL_66;
      }
      v65 = (__int64)&v62->vtable[*v64].method;
    }
    else
    {
LABEL_66:
      v65 = sub_AAFEF8(current, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v66 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v65)(current, *(_QWORD *)(v65 + 8));
    v67 = v66;
    if ( !v66 )
      sub_B170D4();
    v68 = *(_QWORD *)v66;
    if ( *(_WORD *)(*(_QWORD *)v66 + 298LL) )
    {
      v69 = 0LL;
      v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v70 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v69;
        v70 += 4;
        if ( v69 >= *(unsigned __int16 *)(*(_QWORD *)v66 + 298LL) )
          goto LABEL_73;
      }
      v71 = v68 + 16LL * *v70 + 312;
    }
    else
    {
LABEL_73:
      v71 = sub_AAFEF8(v66, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v72 = (*(__int64 (__fastcall **)(__int64, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8));
    v73 = this->fields.entity;
    if ( !v73 )
      sub_B170D4();
    if ( v72 != v73->fields.id )
    {
      v74 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v75 = 0LL;
        v76 = &v74->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v76 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v75;
          v76 += 4;
          if ( v75 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_81;
        }
        v77 = (__int64)&v74->vtable[*v76].method;
      }
      else
      {
LABEL_81:
        v77 = sub_AAFEF8(current, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v78 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v77)(current, *(_QWORD *)(v77 + 8));
      v79 = v78;
      if ( !v78 )
        sub_B170D4();
      v80 = *(_QWORD *)v78;
      if ( *(_WORD *)(*(_QWORD *)v78 + 298LL) )
      {
        v81 = 0LL;
        v82 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v80 + 176) + 8LL);
        while ( *(v82 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v81;
          v82 += 2;
          if ( v81 >= *(unsigned __int16 *)(*(_QWORD *)v78 + 298LL) )
            goto LABEL_88;
        }
        v83 = v80 + 16LL * (*(_DWORD *)v82 + 12) + 312;
      }
      else
      {
LABEL_88:
        v83 = sub_AAFEF8(v78, IClassBoardSquareModel_TypeInfo, 12LL);
      }
      v84 = (*(__int64 (__fastcall **)(__int64, _QWORD))v83)(v79, *(_QWORD *)(v83 + 8));
      v85 = v84;
      if ( !v84 )
        sub_B170D4();
      v86 = *(_QWORD *)v84;
      if ( *(_WORD *)(*(_QWORD *)v84 + 298LL) )
      {
        v87 = 0LL;
        v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v88 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          ++v87;
          v88 += 4;
          if ( v87 >= *(unsigned __int16 *)(*(_QWORD *)v84 + 298LL) )
            goto LABEL_95;
        }
        v89 = v86 + 16LL * *v88 + 312;
      }
      else
      {
LABEL_95:
        v89 = sub_AAFEF8(v84, IClassBoardSquareUser_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v89)(v85, *(_QWORD *)(v89 + 8)) & 1) != 0 )
        break;
    }
    v90 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v91 = 0LL;
      v92 = (IClassBoardLineModel_c **)&v90->_1.interfaceOffsets->offset;
      while ( *(v92 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v91;
        v92 += 2;
        if ( v91 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_102;
      }
      v93 = (__int64)&v90->vtable[*(_DWORD *)v92 + 1].method;
    }
    else
    {
LABEL_102:
      v93 = sub_AAFEF8(current, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v94 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v93)(current, *(_QWORD *)(v93 + 8));
    v95 = v94;
    if ( !v94 )
      sub_B170D4();
    v96 = *(_QWORD *)v94;
    if ( *(_WORD *)(*(_QWORD *)v94 + 298LL) )
    {
      v97 = 0LL;
      v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
      while ( *((IClassBoardSquareModel_c **)v98 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v97;
        v98 += 4;
        if ( v97 >= *(unsigned __int16 *)(*(_QWORD *)v94 + 298LL) )
          goto LABEL_109;
      }
      v99 = v96 + 16LL * *v98 + 312;
    }
    else
    {
LABEL_109:
      v99 = sub_AAFEF8(v94, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v100 = (*(__int64 (__fastcall **)(__int64, _QWORD))v99)(v95, *(_QWORD *)(v99 + 8));
    v101 = this->fields.entity;
    if ( !v101 )
      sub_B170D4();
    if ( v100 != v101->fields.id )
    {
      v102 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v103 = 0LL;
        v104 = (IClassBoardLineModel_c **)&v102->_1.interfaceOffsets->offset;
        while ( *(v104 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v103;
          v104 += 2;
          if ( v103 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_117;
        }
        v105 = (__int64)&v102->vtable[*(_DWORD *)v104 + 1].method;
      }
      else
      {
LABEL_117:
        v105 = sub_AAFEF8(current, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v106 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v105)(current, *(_QWORD *)(v105 + 8));
      v107 = v106;
      if ( !v106 )
        sub_B170D4();
      v108 = *(_QWORD *)v106;
      if ( *(_WORD *)(*(_QWORD *)v106 + 298LL) )
      {
        v109 = 0LL;
        v110 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v108 + 176) + 8LL);
        while ( *(v110 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v109;
          v110 += 2;
          if ( v109 >= *(unsigned __int16 *)(*(_QWORD *)v106 + 298LL) )
            goto LABEL_124;
        }
        v111 = v108 + 16LL * (*(_DWORD *)v110 + 12) + 312;
      }
      else
      {
LABEL_124:
        v111 = sub_AAFEF8(v106, IClassBoardSquareModel_TypeInfo, 12LL);
      }
      v112 = (*(__int64 (__fastcall **)(__int64, _QWORD))v111)(v107, *(_QWORD *)(v111 + 8));
      v113 = v112;
      if ( !v112 )
        sub_B170D4();
      v114 = *(_QWORD *)v112;
      if ( *(_WORD *)(*(_QWORD *)v112 + 298LL) )
      {
        v115 = 0LL;
        v116 = (int *)(*(_QWORD *)(v114 + 176) + 8LL);
        while ( *((IClassBoardSquareUser_c **)v116 - 1) != IClassBoardSquareUser_TypeInfo )
        {
          ++v115;
          v116 += 4;
          if ( v115 >= *(unsigned __int16 *)(*(_QWORD *)v112 + 298LL) )
            goto LABEL_131;
        }
        v117 = v114 + 16LL * *v116 + 312;
      }
      else
      {
LABEL_131:
        v117 = sub_AAFEF8(v112, IClassBoardSquareUser_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v117)(v113, *(_QWORD *)(v117 + 8)) & 1) != 0 )
        break;
    }
  }
  v148[0] = 231;
  v149 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v150,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardLineModel__Dispose__);
  v149 = 0;
  v119 = this->fields.entity;
  if ( !v119 )
    goto LABEL_189;
  if ( !ClassBoardSquareEntity__get_IsBlank(v119, v118) )
  {
LABEL_136:
    v26 = 0;
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x22
  struct System_Collections_Generic_List_IClassBoardItemModel__o **p_itemList; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x8
  unsigned __int64 v25; // x25
  int32_t v26; // w23
  int32_t v27; // w24
  ClassBoardItemModel_o *v28; // x22
  const MethodInfo *v29; // x3

  if ( (byte_40FBA10 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardItemModel_TypeInfo, itemIds);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardItemModel__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_IClassBoardItemModel__TypeInfo, v10);
    byte_40FBA10 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_IClassBoardItemModel__TypeInfo,
                                                                                                  itemIds,
                                                                                                  itemNums,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_IClassBoardItemModel___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_IClassBoardItemModel__o *)v11;
  p_itemList = &this->fields.itemList;
  sub_B16F98((BattleServantConfConponent_o *)p_itemList, (System_Int32_array **)v11, v13, v14, v15, v16, v17, v18);
  if ( !itemIds )
    goto LABEL_13;
  v24 = *(_QWORD *)&itemIds->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)v24 )
        goto LABEL_12;
      if ( !itemNums )
        break;
      if ( v25 >= itemNums->max_length )
      {
LABEL_12:
        sub_B17100(v19, v20, v21);
        sub_B170A0();
      }
      v26 = itemIds->m_Items[v25 + 1];
      v27 = itemNums->m_Items[v25 + 1];
      v28 = (ClassBoardItemModel_o *)sub_B170CC(ClassBoardItemModel_TypeInfo, v20, v21, v22, v23);
      ClassBoardItemModel___ctor(v28, v26, v27, v29);
      if ( !*p_itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_IClassBoardItemModel__Add__);
      LODWORD(v24) = itemIds->max_length;
      if ( (__int64)++v25 >= (int)v24 )
        return;
    }
LABEL_13:
    sub_B170D4();
  }
}


bool __fastcall ClassBoardSquareModel__IsBlankConnected(
        ClassBoardSquareModel_o *this,
        IClassBoardSquareModel_o *blankModel,
        System_Collections_Generic_HashSet_int__o *checkedBlankIdHashSet,
        const MethodInfo *method)
{
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
  int32_t v26; // w0
  IClassBoardSquareModel_c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  int32_t v31; // w23
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x20
  IClassBoardSquareModel_c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x22
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x22
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x24
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x25
  __int64 v64; // x8
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  __int64 v68; // x8
  unsigned __int64 v69; // x10
  int *v70; // x11
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x25
  __int64 v74; // x8
  unsigned __int64 v75; // x10
  int *v76; // x11
  __int64 v77; // x0
  int v78; // w0
  struct ClassBoardSquareEntity_o *entity; // x8
  __int64 v80; // x8
  unsigned __int64 v81; // x10
  int *v82; // x11
  __int64 v83; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v84; // x1
  __int64 v85; // x8
  unsigned __int64 v86; // x10
  IClassBoardLineModel_c **v87; // x11
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x25
  __int64 v91; // x8
  unsigned __int64 v92; // x10
  int *v93; // x11
  __int64 v94; // x0
  __int64 v95; // x8
  unsigned __int64 v96; // x10
  IClassBoardLineModel_c **v97; // x11
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x25
  __int64 v101; // x8
  unsigned __int64 v102; // x10
  int *v103; // x11
  __int64 v104; // x0
  int v105; // w0
  struct ClassBoardSquareEntity_o *v106; // x8
  __int64 v107; // x8
  unsigned __int64 v108; // x10
  IClassBoardLineModel_c **v109; // x11
  __int64 v110; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v111; // x1
  __int64 v112; // x8
  unsigned __int64 v113; // x10
  int *v114; // x11
  __int64 v115; // x0
  int v116; // w19
  Il2CppObject *current; // x20
  Il2CppClass *v118; // x8
  unsigned __int64 v119; // x10
  int32_t *v120; // x11
  __int64 v121; // x0
  System_Enum_o *v122; // x20
  System_Enum_o *v123; // x1
  bool v124; // w19
  int v125; // w8
  int v126; // w23
  int v127; // w9
  System_Collections_Generic_HashSet_int__o *v129; // [xsp+8h] [xbp-A8h]
  int v130; // [xsp+14h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v131; // [xsp+18h] [xbp-98h] BYREF
  int v132[3]; // [xsp+30h] [xbp-80h]
  int v133; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v134; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_40FBA11 & 1) == 0 )
  {
    sub_B16FFC(&AcquireFlag_TypeInfo, blankModel);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Contains__, v11);
    sub_B16FFC(&IClassBoardLineModel_TypeInfo, v12);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v13);
    sub_B16FFC(&System_IDisposable_TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v16);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v20);
    sub_B16FFC(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v21);
    byte_40FBA11 = 1;
  }
  memset(&v134, 0, sizeof(v134));
  v133 = 0;
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
    p_method = sub_AAFEF8(blankModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(blankModel, *(_QWORD *)(p_method + 8));
  if ( !checkedBlankIdHashSet )
    goto LABEL_158;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          checkedBlankIdHashSet,
          v26,
          (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
      v30 = sub_AAFEF8(blankModel, IClassBoardSquareModel_TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v30)(blankModel, *(_QWORD *)(v30 + 8));
    v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                                                                    v32,
                                                                                                    v33,
                                                                                                    v34,
                                                                                                    v35);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v36,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    System_Collections_Generic_HashSet_int___Add(
      checkedBlankIdHashSet,
      v31,
      (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
    v37 = blankModel->klass;
    if ( *(_WORD *)&blankModel->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v39 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)&blankModel->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v40 = (__int64)&v37->vtable[*v39 + 9].method;
    }
    else
    {
LABEL_22:
      v40 = sub_AAFEF8(blankModel, IClassBoardSquareModel_TypeInfo, 9LL);
    }
    v41 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v40)(blankModel, *(_QWORD *)(v40 + 8));
    if ( v41 )
    {
      v42 = *(_QWORD *)v41;
      v43 = v41;
      if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
      {
        v44 = 0LL;
        v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v45 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
        {
          ++v44;
          v45 += 4;
          if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
            goto LABEL_29;
        }
        v46 = v42 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_29:
        v46 = sub_AAFEF8(v41, System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
      }
      v129 = checkedBlankIdHashSet;
      v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
      if ( !v47 )
        sub_B170D4();
      while ( 1 )
      {
        v48 = *(_QWORD *)v47;
        if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
        {
          v49 = 0LL;
          v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v49;
            v50 += 4;
            if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
              goto LABEL_36;
          }
          v51 = v48 + 16LL * *v50 + 312;
        }
        else
        {
LABEL_36:
          v51 = sub_AAFEF8(v47, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
          break;
        v52 = *(_QWORD *)v47;
        if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
        {
          v53 = 0LL;
          v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v54 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
          {
            ++v53;
            v54 += 4;
            if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
              goto LABEL_43;
          }
          v55 = v52 + 16LL * *v54 + 312;
        }
        else
        {
LABEL_43:
          v55 = sub_AAFEF8(v47, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
        }
        v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
        v57 = v56;
        if ( !v56 )
          sub_B170D4();
        v58 = *(_QWORD *)v56;
        if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
        {
          v59 = 0LL;
          v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v60 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v59;
            v60 += 4;
            if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
              goto LABEL_50;
          }
          v61 = v58 + 16LL * *v60 + 312;
        }
        else
        {
LABEL_50:
          v61 = sub_AAFEF8(v56, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v62 = (*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8));
        v63 = v62;
        if ( !v62 )
          sub_B170D4();
        v64 = *(_QWORD *)v62;
        if ( *(_WORD *)(*(_QWORD *)v62 + 298LL) )
        {
          v65 = 0LL;
          v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
          while ( *((IClassBoardSquareModel_c **)v66 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v65;
            v66 += 4;
            if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v62 + 298LL) )
              goto LABEL_57;
          }
          v67 = v64 + 16LL * *v66 + 312;
        }
        else
        {
LABEL_57:
          v67 = sub_AAFEF8(v62, IClassBoardSquareModel_TypeInfo, 0LL);
        }
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v67)(v63, *(_QWORD *)(v67 + 8)) != v31 )
        {
          v68 = *(_QWORD *)v57;
          if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
          {
            v69 = 0LL;
            v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
            while ( *((IClassBoardLineModel_c **)v70 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v69;
              v70 += 4;
              if ( v69 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
                goto LABEL_64;
            }
            v71 = v68 + 16LL * *v70 + 312;
          }
          else
          {
LABEL_64:
            v71 = sub_AAFEF8(v57, IClassBoardLineModel_TypeInfo, 0LL);
          }
          v72 = (*(__int64 (__fastcall **)(__int64, _QWORD))v71)(v57, *(_QWORD *)(v71 + 8));
          v73 = v72;
          if ( !v72 )
            sub_B170D4();
          v74 = *(_QWORD *)v72;
          if ( *(_WORD *)(*(_QWORD *)v72 + 298LL) )
          {
            v75 = 0LL;
            v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
            while ( *((IClassBoardSquareModel_c **)v76 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v75;
              v76 += 4;
              if ( v75 >= *(unsigned __int16 *)(*(_QWORD *)v72 + 298LL) )
                goto LABEL_71;
            }
            v77 = v74 + 16LL * *v76 + 312;
          }
          else
          {
LABEL_71:
            v77 = sub_AAFEF8(v72, IClassBoardSquareModel_TypeInfo, 0LL);
          }
          v78 = (*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v73, *(_QWORD *)(v77 + 8));
          entity = this->fields.entity;
          if ( !entity )
            sub_B170D4();
          if ( v78 != entity->fields.id )
          {
            v80 = *(_QWORD *)v57;
            if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
            {
              v81 = 0LL;
              v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
              while ( *((IClassBoardLineModel_c **)v82 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v81;
                v82 += 4;
                if ( v81 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
                  goto LABEL_79;
              }
              v83 = v80 + 16LL * *v82 + 312;
            }
            else
            {
LABEL_79:
              v83 = sub_AAFEF8(v57, IClassBoardLineModel_TypeInfo, 0LL);
            }
            v84 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v83)(
                                                                           v57,
                                                                           *(_QWORD *)(v83 + 8));
            if ( !v36 )
              sub_B170D4();
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v36,
              v84,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          }
        }
        v85 = *(_QWORD *)v57;
        if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
        {
          v86 = 0LL;
          v87 = (IClassBoardLineModel_c **)(*(_QWORD *)(v85 + 176) + 8LL);
          while ( *(v87 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v86;
            v87 += 2;
            if ( v86 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
              goto LABEL_87;
          }
          v88 = v85 + 16LL * (*(_DWORD *)v87 + 1) + 312;
        }
        else
        {
LABEL_87:
          v88 = sub_AAFEF8(v57, IClassBoardLineModel_TypeInfo, 1LL);
        }
        v89 = (*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v57, *(_QWORD *)(v88 + 8));
        v90 = v89;
        if ( !v89 )
          sub_B170D4();
        v91 = *(_QWORD *)v89;
        if ( *(_WORD *)(*(_QWORD *)v89 + 298LL) )
        {
          v92 = 0LL;
          v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
          while ( *((IClassBoardSquareModel_c **)v93 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v92;
            v93 += 4;
            if ( v92 >= *(unsigned __int16 *)(*(_QWORD *)v89 + 298LL) )
              goto LABEL_94;
          }
          v94 = v91 + 16LL * *v93 + 312;
        }
        else
        {
LABEL_94:
          v94 = sub_AAFEF8(v89, IClassBoardSquareModel_TypeInfo, 0LL);
        }
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v94)(v90, *(_QWORD *)(v94 + 8)) != v31 )
        {
          v95 = *(_QWORD *)v57;
          if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
          {
            v96 = 0LL;
            v97 = (IClassBoardLineModel_c **)(*(_QWORD *)(v95 + 176) + 8LL);
            while ( *(v97 - 1) != IClassBoardLineModel_TypeInfo )
            {
              ++v96;
              v97 += 2;
              if ( v96 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
                goto LABEL_101;
            }
            v98 = v95 + 16LL * (*(_DWORD *)v97 + 1) + 312;
          }
          else
          {
LABEL_101:
            v98 = sub_AAFEF8(v57, IClassBoardLineModel_TypeInfo, 1LL);
          }
          v99 = (*(__int64 (__fastcall **)(__int64, _QWORD))v98)(v57, *(_QWORD *)(v98 + 8));
          v100 = v99;
          if ( !v99 )
            sub_B170D4();
          v101 = *(_QWORD *)v99;
          if ( *(_WORD *)(*(_QWORD *)v99 + 298LL) )
          {
            v102 = 0LL;
            v103 = (int *)(*(_QWORD *)(v101 + 176) + 8LL);
            while ( *((IClassBoardSquareModel_c **)v103 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v102;
              v103 += 4;
              if ( v102 >= *(unsigned __int16 *)(*(_QWORD *)v99 + 298LL) )
                goto LABEL_108;
            }
            v104 = v101 + 16LL * *v103 + 312;
          }
          else
          {
LABEL_108:
            v104 = sub_AAFEF8(v99, IClassBoardSquareModel_TypeInfo, 0LL);
          }
          v105 = (*(__int64 (__fastcall **)(__int64, _QWORD))v104)(v100, *(_QWORD *)(v104 + 8));
          v106 = this->fields.entity;
          if ( !v106 )
            sub_B170D4();
          if ( v105 != v106->fields.id )
          {
            v107 = *(_QWORD *)v57;
            if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
            {
              v108 = 0LL;
              v109 = (IClassBoardLineModel_c **)(*(_QWORD *)(v107 + 176) + 8LL);
              while ( *(v109 - 1) != IClassBoardLineModel_TypeInfo )
              {
                ++v108;
                v109 += 2;
                if ( v108 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
                  goto LABEL_116;
              }
              v110 = v107 + 16LL * (*(_DWORD *)v109 + 1) + 312;
            }
            else
            {
LABEL_116:
              v110 = sub_AAFEF8(v57, IClassBoardLineModel_TypeInfo, 1LL);
            }
            v111 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v110)(
                                                                            v57,
                                                                            *(_QWORD *)(v110 + 8));
            if ( !v36 )
              sub_B170D4();
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v36,
              v111,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__Add__);
          }
        }
      }
      v132[0] = 177;
      v133 = 1;
      v112 = *(_QWORD *)v47;
      if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
      {
        v113 = 0LL;
        v114 = (int *)(*(_QWORD *)(v112 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v114 - 1) != System_IDisposable_TypeInfo )
        {
          ++v113;
          v114 += 4;
          if ( v113 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
            goto LABEL_124;
        }
        v115 = v112 + 16LL * *v114 + 312;
      }
      else
      {
LABEL_124:
        v115 = sub_AAFEF8(v47, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v115)(v47, *(_QWORD *)(v115 + 8));
      v133 = 0;
      if ( v36 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v131,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v36,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
        v116 = 0;
        v134 = v131;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v134,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__) )
        {
          current = v134.fields.current;
          if ( !v134.fields.current )
            sub_B170D4();
          v118 = v134.fields.current->klass;
          if ( *(_WORD *)&v134.fields.current->klass->_2.bitflags1 )
          {
            v119 = 0LL;
            v120 = &v118->_1.interfaceOffsets->offset;
            while ( *((IClassBoardSquareModel_c **)v120 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v119;
              v120 += 4;
              if ( v119 >= *(unsigned __int16 *)&v134.fields.current->klass->_2.bitflags1 )
                goto LABEL_134;
            }
            v121 = (__int64)&v118->vtable[*v120 + 13].method;
          }
          else
          {
LABEL_134:
            v121 = sub_AAFEF8(v134.fields.current, IClassBoardSquareModel_TypeInfo, 13LL);
          }
          v116 |= (*(__int64 (__fastcall **)(Il2CppObject *, System_Collections_Generic_HashSet_int__o *, _QWORD))v121)(
                    current,
                    v129,
                    *(_QWORD *)(v121 + 8));
          LODWORD(v131.fields.list) = v116;
          v122 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v131);
          v130 = 1;
          v123 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v130);
          if ( !v122 )
            sub_B170D4();
          if ( System_Enum__HasFlag(v122, v123, 0LL) )
          {
            v124 = 1;
            v125 = 258;
            goto LABEL_140;
          }
        }
        v124 = 0;
        v125 = 256;
LABEL_140:
        v132[0] = v125;
        v126 = ++v133;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v134,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
        if ( !v126 )
          return 0;
        v127 = v132[v126 - 1];
        if ( v127 == 256 )
        {
          v124 = 0;
        }
        else if ( v127 != 258 )
        {
          return 0;
        }
        v133 = v126 - 1;
        return v124;
      }
    }
LABEL_158:
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return entity->fields.assetId;
}


int32_t __fastcall ClassBoardSquareModel__get_BaseId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B170D4();
  return entity->fields.classBoardBaseId;
}


bool __fastcall ClassBoardSquareModel__get_HasLine(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  if ( (byte_40FBA0D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_IClassBoardLineModel___, method);
    byte_40FBA0D = 1;
  }
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lineList,
           (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_IClassBoardLineModel___);
}


int32_t __fastcall ClassBoardSquareModel__get_IconId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B170D4();
  return entity->fields.iconId;
}


int32_t __fastcall ClassBoardSquareModel__get_Id(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B170D4();
  return entity->fields.id;
}


bool __fastcall ClassBoardSquareModel__get_IsBlank(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B170D4();
  return ClassBoardSquareEntity__get_IsBlank(entity, method);
}


bool __fastcall ClassBoardSquareModel__get_IsStart(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  ClassBoardSquareEntity_o *entity; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return entity->fields.skillType;
}


int32_t __fastcall ClassBoardSquareModel__get_TargetId(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B170D4();
  return entity->fields.targetId;
}


int32_t __fastcall ClassBoardSquareModel__get_UpSkillLv(ClassBoardSquareModel_o *this, const MethodInfo *method)
{
  struct ClassBoardSquareEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B170D4();
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
  __int64 v5; // x1
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v10; // w0
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v12; // x8
  int v13; // w19
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x20
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0

  if ( (byte_40F70F3 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardLineModel_TypeInfo, x);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v5);
    byte_40F70F3 = 1;
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
    p_method = sub_AAFEF8(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v10 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  lineModel = this->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v12 = lineModel->klass;
  v13 = v10;
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
    v16 = sub_AAFEF8(lineModel, IClassBoardLineModel_TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v16)(lineModel, *(_QWORD *)(v16 + 8));
  if ( !v17 )
LABEL_25:
    sub_B170D4();
  v18 = *(_QWORD *)v17;
  v19 = v17;
  if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
  {
    v20 = 0LL;
    v21 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
    while ( *((IClassBoardSquareModel_c **)v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v20;
      v21 += 4;
      if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
        goto LABEL_22;
    }
    v22 = v18 + 16LL * *v21 + 312;
  }
  else
  {
LABEL_22:
    v22 = sub_AAFEF8(v17, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v13 == (*(unsigned int (__fastcall **)(__int64, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
}


bool __fastcall ClassBoardSquareModel___c__DisplayClass38_0___FindLinkSquares_b__1(
        ClassBoardSquareModel___c__DisplayClass38_0_o *this,
        IClassBoardSquareModel_o *x,
        const MethodInfo *method)
{
  __int64 v5; // x1
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v10; // w0
  struct IClassBoardLineModel_o *lineModel; // x20
  IClassBoardLineModel_c *v12; // x8
  int v13; // w19
  unsigned __int64 v14; // x10
  IClassBoardLineModel_c **v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x20
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0

  if ( (byte_40F70F4 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardLineModel_TypeInfo, x);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v5);
    byte_40F70F4 = 1;
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
    p_method = sub_AAFEF8(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v10 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  lineModel = this->fields.lineModel;
  if ( !lineModel )
    goto LABEL_25;
  v12 = lineModel->klass;
  v13 = v10;
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
    v16 = sub_AAFEF8(lineModel, IClassBoardLineModel_TypeInfo, 1LL);
  }
  v17 = (*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v16)(lineModel, *(_QWORD *)(v16 + 8));
  if ( !v17 )
LABEL_25:
    sub_B170D4();
  v18 = *(_QWORD *)v17;
  v19 = v17;
  if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
  {
    v20 = 0LL;
    v21 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
    while ( *((IClassBoardSquareModel_c **)v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v20;
      v21 += 4;
      if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
        goto LABEL_22;
    }
    v22 = v18 + 16LL * *v21 + 312;
  }
  else
  {
LABEL_22:
    v22 = sub_AAFEF8(v17, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v13 == (*(unsigned int (__fastcall **)(__int64, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
}