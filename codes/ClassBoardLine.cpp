void ClassBoardLine___ctor(ClassBoardLine_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w1
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7

  if ( (byte_4CCB008 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3223/*"BrightTurnTransition"*/);
    sub_1C713B0(&StringLiteral_3220/*"BrightTurn"*/);
    sub_1C713B0(&StringLiteral_3224/*"BrightTurnTransitionRoadOn"*/);
    sub_1C713B0(&StringLiteral_7152/*"GrandReturnTransition"*/);
    sub_1C713B0(&StringLiteral_3225/*"BrightTurnUnLock"*/);
    sub_1C713B0(&StringLiteral_3221/*"BrightTurnRoadOn"*/);
    sub_1C713B0(&StringLiteral_3222/*"BrightTurnRoadOnUnLock"*/);
    sub_1C713B0(&StringLiteral_3173/*"BlackOutTransition"*/);
    byte_4CCB008 = 1;
  }
  v9 = StringLiteral_3220/*"BrightTurn"*/;
  this->fields.animNameBrightTurn = (struct System_String_o *)StringLiteral_3220/*"BrightTurn"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.animNameBrightTurn, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_3221/*"BrightTurnRoadOn"*/;
  this->fields.animNameBrightTurnRoadOn = (struct System_String_o *)StringLiteral_3221/*"BrightTurnRoadOn"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.animNameBrightTurnRoadOn, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_3225/*"BrightTurnUnLock"*/;
  this->fields.animNameBrightTurnUnlock = (struct System_String_o *)StringLiteral_3225/*"BrightTurnUnLock"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.animNameBrightTurnUnlock, v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_3222/*"BrightTurnRoadOnUnLock"*/;
  this->fields.animNameBrightTurnRoadOnUnlock = (struct System_String_o *)StringLiteral_3222/*"BrightTurnRoadOnUnLock"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.animNameBrightTurnRoadOnUnlock,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = StringLiteral_3223/*"BrightTurnTransition"*/;
  this->fields.animNameBrightTurnTransition = (struct System_String_o *)StringLiteral_3223/*"BrightTurnTransition"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.animNameBrightTurnTransition,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = StringLiteral_3224/*"BrightTurnTransitionRoadOn"*/;
  this->fields.animNameBrightTurnTransitionRoadOn = (struct System_String_o *)StringLiteral_3224/*"BrightTurnTransitionRoadOn"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.animNameBrightTurnTransitionRoadOn,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = StringLiteral_3173/*"BlackOutTransition"*/;
  this->fields.animNameBlackOutTransition = (struct System_String_o *)StringLiteral_3173/*"BlackOutTransition"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.animNameBlackOutTransition,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = StringLiteral_7152/*"GrandReturnTransition"*/;
  this->fields.animNameGrandReturnTransition = (struct System_String_o *)StringLiteral_7152/*"GrandReturnTransition"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.animNameGrandReturnTransition,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardLine__Awake(ClassBoardLine_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardLine__FixedUpdate(ClassBoardLine_o *this, const MethodInfo *method)
{
  if ( this->fields.isUpdateLine )
  {
    this->fields.isUpdateLine = 0;
    ClassBoardLine__UpdateLine(this, method);
  }
}


int32_t ClassBoardLine__GetConnectType(ClassBoardLine_o *this, const MethodInfo *method)
{
  ClassBoardLine_o *v2; // x19
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  __int64 v5; // x9
  int *p_offset; // x10
  __int64 v7; // x0
  ClassBoardLine_c *v8; // x8
  ClassBoardLine_o *v9; // x20
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0
  struct IClassBoardLineModel_o *v13; // x20
  IClassBoardLineModel_c *v14; // x8
  __int64 v15; // x9
  IClassBoardLineModel_c **v16; // x10
  __int64 v17; // x0
  ClassBoardLine_c *v18; // x8
  ClassBoardLine_o *v19; // x20
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  System_Collections_Generic_List_object__o *v23; // x20
  struct IClassBoardLineModel_o *v24; // x20
  IClassBoardLineModel_c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  struct IClassBoardLineModel_o *v29; // x20
  IClassBoardLineModel_c *v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  ClassBoardLine_c *v34; // x8
  ClassBoardLine_o *v35; // x20
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  struct IClassBoardLineModel_o *v39; // x20
  IClassBoardLineModel_c *v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  ClassBoardLine_c *v44; // x8
  ClassBoardLine_o *v45; // x20
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  struct IClassBoardLineModel_o *v49; // x20
  IClassBoardLineModel_c *v50; // x8
  __int64 v51; // x9
  IClassBoardLineModel_c **v52; // x10
  __int64 v53; // x0
  ClassBoardLine_c *v54; // x8
  ClassBoardLine_o *v55; // x20
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  struct IClassBoardLineModel_o *v59; // x19
  IClassBoardLineModel_c *v60; // x8
  __int64 v61; // x9
  IClassBoardLineModel_c **v62; // x10
  __int64 v63; // x0
  ClassBoardLine_c *v64; // x8
  ClassBoardLine_o *v65; // x19
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  int32_t m_CancellationTokenSource; // w22
  int32_t v70; // w23
  _BOOL8 v71; // x0
  __int64 v72; // x1
  Il2CppObject *current; // x19
  Il2CppClass *v74; // x8
  __int64 v75; // x9
  int32_t *v76; // x10
  __int64 v77; // x0
  Il2CppClass *v78; // x8
  __int64 v79; // x9
  IClassBoardSquareModel_c **v80; // x10
  __int64 v81; // x0
  ClassBoardLine_c *v83; // x8
  ClassBoardLine_o *v84; // x20
  __int64 v85; // x9
  int32_t *v86; // x10
  __int64 v87; // x0
  struct IClassBoardLineModel_o *v88; // x20
  IClassBoardLineModel_c *v89; // x8
  __int64 v90; // x9
  IClassBoardLineModel_c **v91; // x10
  __int64 v92; // x0
  ClassBoardLine_c *v93; // x8
  ClassBoardLine_o *v94; // x20
  __int64 v95; // x9
  int32_t *v96; // x10
  __int64 v97; // x0
  struct IClassBoardLineModel_o *v98; // x20
  IClassBoardLineModel_c *v99; // x8
  __int64 v100; // x9
  int *v101; // x10
  __int64 v102; // x0
  ClassBoardLine_c *v103; // x8
  ClassBoardLine_o *v104; // x20
  __int64 v105; // x9
  int32_t *v106; // x10
  __int64 v107; // x0
  struct IClassBoardLineModel_o *v108; // x19
  IClassBoardLineModel_c *v109; // x8
  __int64 v110; // x9
  IClassBoardLineModel_c **v111; // x10
  __int64 v112; // x0
  ClassBoardLine_c *v113; // x8
  ClassBoardLine_o *v114; // x19
  __int64 v115; // x9
  int32_t *v116; // x10
  __int64 v117; // x0
  System_Collections_Generic_List_Enumerator_object__o v118; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v119; // [xsp+20h] [xbp-60h] BYREF
  ClassBoardLine_o *v120; // [xsp+48h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4CCB004 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__);
    sub_1C713B0(&IClassBoardLineModel_TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__);
    this = (ClassBoardLine_o *)sub_1C713B0(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_4CCB004 = 1;
  }
  v120 = 0;
  memset(&v119, 0, sizeof(v119));
  LineModel_k__BackingField = v2->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_180;
  klass = LineModel_k__BackingField->klass;
  v5 = *(unsigned __int16 *)&LineModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&LineModel_k__BackingField->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C47738(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v7)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(v7 + 8));
  if ( !this )
    goto LABEL_180;
  v8 = this->klass;
  v9 = this;
  v10 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v11 = &v8->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v11 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v10;
      v11 += 4;
      if ( !v10 )
        goto LABEL_15;
    }
    v12 = (__int64)&v8[1] + 16 * *v11;
  }
  else
  {
LABEL_15:
    v12 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 5);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_33;
  v13 = v2->fields._LineModel_k__BackingField;
  if ( !v13 )
    goto LABEL_180;
  v14 = v13->klass;
  v15 = *(unsigned __int16 *)&v13->klass->_2.rank;
  if ( *(_WORD *)&v13->klass->_2.rank )
  {
    v16 = (IClassBoardLineModel_c **)&v14->_1.interfaceOffsets->offset;
    while ( *(v16 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v15;
      v16 += 2;
      if ( !v15 )
        goto LABEL_23;
    }
    v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1];
  }
  else
  {
LABEL_23:
    v17 = sub_1C47738(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v17)(
                               v13,
                               *(_QWORD *)(v17 + 8));
  if ( !this )
    goto LABEL_180;
  v18 = this->klass;
  v19 = this;
  v20 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v21 = &v18->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_30;
    }
    v22 = (__int64)&v18[1] + 16 * *v21;
  }
  else
  {
LABEL_30:
    v22 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 5);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_33:
    v23 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    v120 = (ClassBoardLine_o *)v23;
    v24 = v2->fields._LineModel_k__BackingField;
    if ( v24 )
    {
      v25 = v24->klass;
      v26 = *(unsigned __int16 *)&v24->klass->_2.rank;
      if ( *(_WORD *)&v24->klass->_2.rank )
      {
        v27 = &v25->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v27 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_38;
        }
        v28 = (__int64)&v25->vtable[*v27];
      }
      else
      {
LABEL_38:
        v28 = sub_1C47738(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0);
      }
      this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v28)(
                                   v24,
                                   *(_QWORD *)(v28 + 8));
      if ( this )
      {
        v34 = this->klass;
        v35 = this;
        v36 = *(unsigned __int16 *)&this->klass->_2.rank;
        if ( *(_WORD *)&this->klass->_2.rank )
        {
          v37 = &v34->_1.interfaceOffsets->offset;
          while ( *((IClassBoardSquareModel_c **)v37 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v36;
            v37 += 4;
            if ( !v36 )
              goto LABEL_51;
          }
          v38 = (__int64)&v34[1] + 16 * *v37;
        }
        else
        {
LABEL_51:
          v38 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 5);
        }
        this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v38)(
                                     v35,
                                     *(_QWORD *)(v38 + 8));
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v39 = v2->fields._LineModel_k__BackingField;
          if ( !v39 )
            goto LABEL_180;
          v40 = v39->klass;
          v41 = *(unsigned __int16 *)&v39->klass->_2.rank;
          if ( *(_WORD *)&v39->klass->_2.rank )
          {
            v42 = &v40->_1.interfaceOffsets->offset;
            while ( *((IClassBoardLineModel_c **)v42 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v41;
              v42 += 4;
              if ( !v41 )
                goto LABEL_59;
            }
            v43 = (__int64)&v40->vtable[*v42];
          }
          else
          {
LABEL_59:
            v43 = sub_1C47738(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0);
          }
          this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v43)(
                                       v39,
                                       *(_QWORD *)(v43 + 8));
          if ( !this )
            goto LABEL_180;
          v44 = this->klass;
          v45 = this;
          v46 = *(unsigned __int16 *)&this->klass->_2.rank;
          if ( *(_WORD *)&this->klass->_2.rank )
          {
            v47 = &v44->_1.interfaceOffsets->offset;
            while ( *((IClassBoardSquareModel_c **)v47 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v46;
              v47 += 4;
              if ( !v46 )
                goto LABEL_66;
            }
            v48 = (__int64)&(&v44[1].rgctx_data)[2 * *v47];
          }
          else
          {
LABEL_66:
            v48 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 17);
          }
          this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v48)(
                                       v45,
                                       &v120,
                                       *(_QWORD *)(v48 + 8));
        }
        v49 = v2->fields._LineModel_k__BackingField;
        if ( v49 )
        {
          v50 = v49->klass;
          v51 = *(unsigned __int16 *)&v49->klass->_2.rank;
          if ( *(_WORD *)&v49->klass->_2.rank )
          {
            v52 = (IClassBoardLineModel_c **)&v50->_1.interfaceOffsets->offset;
            while ( *(v52 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v51;
              v52 += 2;
              if ( !v51 )
                goto LABEL_74;
            }
            v53 = (__int64)&v50->vtable[*(_DWORD *)v52 + 1];
          }
          else
          {
LABEL_74:
            v53 = sub_1C47738(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1);
          }
          this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v53)(
                                       v49,
                                       *(_QWORD *)(v53 + 8));
          if ( this )
          {
            v54 = this->klass;
            v55 = this;
            v56 = *(unsigned __int16 *)&this->klass->_2.rank;
            if ( *(_WORD *)&this->klass->_2.rank )
            {
              v57 = &v54->_1.interfaceOffsets->offset;
              while ( *((IClassBoardSquareModel_c **)v57 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                --v56;
                v57 += 4;
                if ( !v56 )
                  goto LABEL_81;
              }
              v58 = (__int64)&v54[1] + 16 * *v57;
            }
            else
            {
LABEL_81:
              v58 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 5);
            }
            this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v58)(
                                         v55,
                                         *(_QWORD *)(v58 + 8));
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v59 = v2->fields._LineModel_k__BackingField;
              if ( !v59 )
                goto LABEL_180;
              v60 = v59->klass;
              v61 = *(unsigned __int16 *)&v59->klass->_2.rank;
              if ( *(_WORD *)&v59->klass->_2.rank )
              {
                v62 = (IClassBoardLineModel_c **)&v60->_1.interfaceOffsets->offset;
                while ( *(v62 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  --v61;
                  v62 += 2;
                  if ( !v61 )
                    goto LABEL_89;
                }
                v63 = (__int64)&v60->vtable[*(_DWORD *)v62 + 1];
              }
              else
              {
LABEL_89:
                v63 = sub_1C47738(v59, IClassBoardLineModel_TypeInfo, 1);
              }
              this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v63)(
                                           v59,
                                           *(_QWORD *)(v63 + 8));
              if ( !this )
                goto LABEL_180;
              v64 = this->klass;
              v65 = this;
              v66 = *(unsigned __int16 *)&this->klass->_2.rank;
              if ( *(_WORD *)&this->klass->_2.rank )
              {
                v67 = &v64->_1.interfaceOffsets->offset;
                while ( *((IClassBoardSquareModel_c **)v67 - 1) != IClassBoardSquareModel_TypeInfo )
                {
                  --v66;
                  v67 += 4;
                  if ( !v66 )
                    goto LABEL_96;
                }
                v68 = (__int64)&(&v64[1].rgctx_data)[2 * *v67];
              }
              else
              {
LABEL_96:
                v68 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 17);
              }
              (*(void (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v68)(
                v65,
                &v120,
                *(_QWORD *)(v68 + 8));
            }
            this = v120;
            if ( v120 )
            {
              m_CancellationTokenSource = (int32_t)v120->fields.m_CancellationTokenSource;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v118,
                (System_Collections_Generic_List_object__o *)v120,
                (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
              v70 = 0;
              v119 = v118;
              while ( 1 )
              {
                v71 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v119,
                        (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
                if ( !v71 )
                  break;
                current = v119.fields._current;
                if ( !v119.fields._current )
                  sub_1C71608(v71, v72);
                v74 = v119.fields._current->klass;
                v75 = *(unsigned __int16 *)&v119.fields._current->klass->_2.rank;
                if ( *(_WORD *)&v119.fields._current->klass->_2.rank )
                {
                  v76 = &v74->_1.interfaceOffsets->offset;
                  while ( *((IClassBoardSquareModel_c **)v76 - 1) != IClassBoardSquareModel_TypeInfo )
                  {
                    --v75;
                    v76 += 4;
                    if ( !v75 )
                      goto LABEL_107;
                  }
                  v77 = (__int64)&v74->vtable[*v76 + 5];
                }
                else
                {
LABEL_107:
                  v77 = sub_1C47738(v119.fields._current, IClassBoardSquareModel_TypeInfo, 5);
                }
                if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v77)(current, *(_QWORD *)(v77 + 8)) & 1) != 0 )
                {
                  --m_CancellationTokenSource;
                }
                else
                {
                  v78 = current->klass;
                  v79 = *(unsigned __int16 *)&current->klass->_2.rank;
                  if ( *(_WORD *)&current->klass->_2.rank )
                  {
                    v80 = (IClassBoardSquareModel_c **)&v78->_1.interfaceOffsets->offset;
                    while ( *(v80 - 1) != IClassBoardSquareModel_TypeInfo )
                    {
                      --v79;
                      v80 += 2;
                      if ( !v79 )
                        goto LABEL_114;
                    }
                    v81 = (__int64)&v78->vtable[*(_DWORD *)v80 + 15];
                  }
                  else
                  {
LABEL_114:
                    v81 = sub_1C47738(current, IClassBoardSquareModel_TypeInfo, 15);
                  }
                  v70 += (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v81)(
                           current,
                           0,
                           *(_QWORD *)(v81 + 8))
                       & 1;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v119,
                (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
              if ( !v70 )
                return 0;
              if ( v70 < m_CancellationTokenSource )
                return 1;
              return 2;
            }
          }
        }
      }
    }
    goto LABEL_180;
  }
  v29 = v2->fields._LineModel_k__BackingField;
  if ( !v29 )
    goto LABEL_180;
  v30 = v29->klass;
  v31 = *(unsigned __int16 *)&v29->klass->_2.rank;
  if ( *(_WORD *)&v29->klass->_2.rank )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v32 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_44;
    }
    v33 = (__int64)&v30->vtable[*v32];
  }
  else
  {
LABEL_44:
    v33 = sub_1C47738(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v33)(
                               v29,
                               *(_QWORD *)(v33 + 8));
  if ( !this )
    goto LABEL_180;
  v83 = this->klass;
  v84 = this;
  v85 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v86 = &v83->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v86 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v85;
      v86 += 4;
      if ( !v85 )
        goto LABEL_129;
    }
    v87 = (__int64)(&v83[1]._1.nestedTypes + 2 * *v86);
  }
  else
  {
LABEL_129:
    v87 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 15);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v87)(
                               v84,
                               0,
                               *(_QWORD *)(v87 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v88 = v2->fields._LineModel_k__BackingField;
    if ( !v88 )
      goto LABEL_180;
    v89 = v88->klass;
    v90 = *(unsigned __int16 *)&v88->klass->_2.rank;
    if ( *(_WORD *)&v88->klass->_2.rank )
    {
      v91 = (IClassBoardLineModel_c **)&v89->_1.interfaceOffsets->offset;
      while ( *(v91 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v90;
        v91 += 2;
        if ( !v90 )
          goto LABEL_137;
      }
      v92 = (__int64)&v89->vtable[*(_DWORD *)v91 + 1];
    }
    else
    {
LABEL_137:
      v92 = sub_1C47738(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v92)(
                                 v88,
                                 *(_QWORD *)(v92 + 8));
    if ( !this )
      goto LABEL_180;
    v93 = this->klass;
    v94 = this;
    v95 = *(unsigned __int16 *)&this->klass->_2.rank;
    if ( *(_WORD *)&this->klass->_2.rank )
    {
      v96 = &v93->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v96 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v95;
        v96 += 4;
        if ( !v95 )
          goto LABEL_144;
      }
      v97 = (__int64)(&v93[1]._1.nestedTypes + 2 * *v96);
    }
    else
    {
LABEL_144:
      v97 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 15);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v97)(
                                 v94,
                                 0,
                                 *(_QWORD *)(v97 + 8));
    if ( ((unsigned __int8)this & 1) != 0 )
      return 2;
  }
  v98 = v2->fields._LineModel_k__BackingField;
  if ( !v98 )
    goto LABEL_180;
  v99 = v98->klass;
  v100 = *(unsigned __int16 *)&v98->klass->_2.rank;
  if ( *(_WORD *)&v98->klass->_2.rank )
  {
    v101 = &v99->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v101 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v100;
      v101 += 4;
      if ( !v100 )
        goto LABEL_152;
    }
    v102 = (__int64)&v99->vtable[*v101];
  }
  else
  {
LABEL_152:
    v102 = sub_1C47738(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v102)(
                               v98,
                               *(_QWORD *)(v102 + 8));
  if ( !this )
    goto LABEL_180;
  v103 = this->klass;
  v104 = this;
  v105 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v106 = &v103->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v106 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v105;
      v106 += 4;
      if ( !v105 )
        goto LABEL_160;
    }
    v107 = (__int64)(&v103[1]._1.nestedTypes + 2 * *v106);
  }
  else
  {
LABEL_160:
    v107 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 15);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v107)(
                               v104,
                               0,
                               *(_QWORD *)(v107 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  v108 = v2->fields._LineModel_k__BackingField;
  if ( !v108 )
    goto LABEL_180;
  v109 = v108->klass;
  v110 = *(unsigned __int16 *)&v108->klass->_2.rank;
  if ( *(_WORD *)&v108->klass->_2.rank )
  {
    v111 = (IClassBoardLineModel_c **)&v109->_1.interfaceOffsets->offset;
    while ( *(v111 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v110;
      v111 += 2;
      if ( !v110 )
        goto LABEL_168;
    }
    v112 = (__int64)&v109->vtable[*(_DWORD *)v111 + 1];
  }
  else
  {
LABEL_168:
    v112 = sub_1C47738(v108, IClassBoardLineModel_TypeInfo, 1);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v112)(
                               v108,
                               *(_QWORD *)(v112 + 8));
  if ( !this )
LABEL_180:
    sub_1C71608(this, method);
  v113 = this->klass;
  v114 = this;
  v115 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v116 = &v113->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v116 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v115;
      v116 += 4;
      if ( !v115 )
        goto LABEL_176;
    }
    v117 = (__int64)(&v113[1]._1.nestedTypes + 2 * *v116);
  }
  else
  {
LABEL_176:
    v117 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 15);
  }
  return (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v117)(v114, 0, *(_QWORD *)(v117 + 8)) & 1;
}


float ClassBoardLine__GetSquareTypeOffset(
        ClassBoardLine_o *this,
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  ClassBoardLine_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  float *p_blankOffsetLength; // x8

  v4 = this;
  if ( (byte_4CCB005 & 1) == 0 )
  {
    sub_1C713B0(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardLine_o *)sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    byte_4CCB005 = 1;
  }
  if ( !squareModel )
    sub_1C71608(this, squareModel);
  klass = squareModel->klass;
  v6 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset + 5];
  }
  else
  {
LABEL_8:
    v8 = sub_1C47738(squareModel, IClassBoardSquareModel_TypeInfo, 5);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v8)(squareModel, *(_QWORD *)(v8 + 8)) & 1) != 0 )
  {
    p_blankOffsetLength = &v4->fields.blankOffsetLength;
  }
  else if ( sub_1C714EC(squareModel, IClassBoardLockModel_TypeInfo) )
  {
    p_blankOffsetLength = &v4->fields.lockOffsetLength;
  }
  else
  {
    p_blankOffsetLength = &v4->fields.squareOffsetLength;
  }
  return *p_blankOffsetLength;
}


void ClassBoardLine__PlayForceEndSimpleAnimation(
        ClassBoardLine_o *this,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  struct SimpleAnimation_o *v8; // x22
  System_String_o *v9; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v11; // x22
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0
  const MethodInfo *v15; // x3
  System_Collections_IEnumerator_o *v16; // x1

  if ( (byte_4CCB006 & 1) == 0 )
  {
    sub_1C713B0(&SimpleAnimation_State_TypeInfo);
    byte_4CCB006 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (simpleAnimation = (SimpleAnimation_o *)SimpleAnimation__Play_66976788(simpleAnimation, name, 0),
        (v8 = this->fields.simpleAnimation) == 0)
    || (simpleAnimation = (SimpleAnimation_o *)v8->fields.m_Clip) == 0
    || (v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)simpleAnimation, 0),
        (simpleAnimation = (SimpleAnimation_o *)SimpleAnimation__get_Item(v8, v9, 0)) == 0) )
  {
    sub_1C71608(simpleAnimation, name);
  }
  klass = simpleAnimation->klass;
  v11 = simpleAnimation;
  v12 = *(unsigned __int16 *)&simpleAnimation->klass->_2.rank;
  if ( *(_WORD *)&simpleAnimation->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_11;
    }
    v14 = (__int64)(&klass->vtable._6_Awake + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_11:
    v14 = sub_1C47738(simpleAnimation, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 1.0);
  v16 = ClassBoardLine__WaitAnimationFinished(this, name, endCallback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v16, 0);
}


void ClassBoardLine__PlayGrandToClassTransition(ClassBoardLine_o *this, bool isQuick, const MethodInfo *method)
{
  System_String_o *animNameGrandReturnTransition; // x21
  System_Action_o *v6; // x22
  const MethodInfo *v7; // x4

  if ( (byte_4CCB001 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardLine__PlayGrandToClassTransition_b__30_0__);
    byte_4CCB001 = 1;
  }
  animNameGrandReturnTransition = this->fields.animNameGrandReturnTransition;
  v6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardLine__PlayGrandToClassTransition_b__30_0__, 0);
  ClassBoardLine__PlaySimpleAnimation(this, animNameGrandReturnTransition, isQuick, v6, v7);
}


void ClassBoardLine__PlayReleaseEffect(ClassBoardLine_o *this, const MethodInfo *method)
{
  int32_t ConnectType; // w0
  const MethodInfo *v4; // x1
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0
  System_String_o *animNameBrightTurnRoadOnUnlock; // x20
  System_Action_o *v7; // x0
  intptr_t *v8; // x8
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x4

  if ( (byte_4CCB003 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardEffectPlayer_GetData_bool___);
    sub_1C713B0(&Method_ClassBoardLine__PlayReleaseEffect_b__35_0__);
    sub_1C713B0(&Method_ClassBoardLine__PlayReleaseEffect_b__35_1__);
    sub_1C713B0(&Method_ClassBoardLine__PlayReleaseEffect_b__35_2__);
    sub_1C713B0(&Method_ClassBoardLine__PlayReleaseEffect_b__35_3__);
    byte_4CCB003 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      if ( ClassBoardEffectPlayer__GetData_bool_(
             releaseEffectPlayer,
             (const MethodInfo_313E7D8 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOnUnlock;
        v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        v8 = &Method_ClassBoardLine__PlayReleaseEffect_b__35_2__;
      }
      else
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOn;
        v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        v8 = &Method_ClassBoardLine__PlayReleaseEffect_b__35_3__;
      }
      goto LABEL_15;
    }
LABEL_16:
    sub_1C71608(releaseEffectPlayer, v4);
  }
  if ( ConnectType != 1 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      ClassBoardEffectPlayer__End(releaseEffectPlayer, v4);
      return;
    }
    goto LABEL_16;
  }
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  if ( !releaseEffectPlayer )
    goto LABEL_16;
  if ( ClassBoardEffectPlayer__GetData_bool_(
         releaseEffectPlayer,
         (const MethodInfo_313E7D8 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnUnlock;
    v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    v8 = &Method_ClassBoardLine__PlayReleaseEffect_b__35_0__;
  }
  else
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurn;
    v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    v8 = &Method_ClassBoardLine__PlayReleaseEffect_b__35_1__;
  }
LABEL_15:
  v9 = v7;
  System_Action___ctor(v7, (Il2CppObject *)this, *v8, 0);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnRoadOnUnlock, 0, v9, v10);
}


void ClassBoardLine__PlaySimpleAnimation(
        ClassBoardLine_o *this,
        System_String_o *name,
        bool isQuick,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v9; // x3
  System_Collections_IEnumerator_o *v10; // x1

  if ( isQuick )
  {
    ClassBoardLine__PlayForceEndSimpleAnimation(this, name, endCallback, (const MethodInfo *)endCallback);
  }
  else
  {
    simpleAnimation = this->fields.simpleAnimation;
    if ( !simpleAnimation
      || (SimpleAnimation__Rewind(simpleAnimation, 0), (simpleAnimation = this->fields.simpleAnimation) == 0) )
    {
      sub_1C71608(simpleAnimation, name);
    }
    SimpleAnimation__Play_66976788(simpleAnimation, name, 0);
    v10 = ClassBoardLine__WaitAnimationFinished(this, name, endCallback, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v10, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardLine__PlayTransition(ClassBoardLine_o *this, bool isQuick, const MethodInfo *method)
{
  int32_t ConnectType; // w0
  System_String_o *animNameBrightTurnTransitionRoadOn; // x21
  System_Action_o *v7; // x0
  intptr_t *v8; // x8
  System_Action_o *v9; // x22
  const MethodInfo *v10; // x4

  if ( (byte_4CCB000 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardLine__PlayTransition_b__29_0__);
    sub_1C713B0(&Method_ClassBoardLine__PlayTransition_b__29_1__);
    sub_1C713B0(&Method_ClassBoardLine__PlayTransition_b__29_2__);
    byte_4CCB000 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, (const MethodInfo *)isQuick);
  if ( ConnectType == 2 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransitionRoadOn;
    v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    v8 = &Method_ClassBoardLine__PlayTransition_b__29_1__;
  }
  else if ( ConnectType == 1 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransition;
    v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    v8 = &Method_ClassBoardLine__PlayTransition_b__29_0__;
  }
  else
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBlackOutTransition;
    v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    v8 = &Method_ClassBoardLine__PlayTransition_b__29_2__;
  }
  v9 = v7;
  System_Action___ctor(v7, (Il2CppObject *)this, *v8, 0);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnTransitionRoadOn, isQuick, v9, v10);
}


void ClassBoardLine__ReleaseAfterUpdate(ClassBoardLine_o *this, const MethodInfo *method)
{
  this->fields.isUpdateLine = 1;
}


void ClassBoardLine__SetUpdateLine(ClassBoardLine_o *this, const MethodInfo *method)
{
  this->fields.isUpdateLine = 1;
}


void ClassBoardLine__Setup(ClassBoardLine_o *this, IClassBoardLineModel_o *setLineModel, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *name; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  IClassBoardLineModel_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  UnityEngine_Object_c *v31; // x8
  UnityEngine_Object_o *v32; // x23
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w1
  IClassBoardLineModel_c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  UnityEngine_Object_c *v53; // x8
  UnityEngine_Object_o *v54; // x23
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  int32_t v70; // w1
  IClassBoardLineModel_c *v71; // x8
  __int64 v72; // x9
  int32_t *v73; // x10
  __int64 v74; // x0
  UnityEngine_Object_c *v75; // x8
  UnityEngine_Object_o *v76; // x22
  __int64 v77; // x9
  IClassBoardSquareModel_c **v78; // x10
  __int64 v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  System_String_o *v86; // x0
  const MethodInfo *v87; // x1
  System_String_o *v88; // x20
  __int64 v89; // x21
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  System_Action_o *v103; // x21
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  struct UnityEngine_GameObject_array *effectObjects; // x22
  int max_length; // w8
  int v112; // w9
  Il2CppClass **v113; // x8
  UnityEngine_GameObject_o *v114; // x21
  UnityEngine_Transform_o *transform; // x0
  float lineLength; // s8
  UnityEngine_Transform_o *v117; // x20
  float y; // s9
  float v119; // s0
  float v120; // s1
  int v121; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCAFFF & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&ClassBoardEffectPlayer_TypeInfo);
    sub_1C713B0(&Method_ClassBoardLine_PlayReleaseEffect__);
    sub_1C713B0(&IClassBoardLineModel_TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_16109/*"_"*/);
    byte_4CCAFFF = 1;
  }
  v121 = 0;
  this->fields._LineModel_k__BackingField = setLineModel;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._LineModel_k__BackingField,
    (int32_t)setLineModel,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  name = (UnityEngine_Object_o *)sub_1C71458(string___TypeInfo, 7);
  if ( !gameObject )
    goto LABEL_64;
  v13 = name;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0);
  if ( !v13 )
    goto LABEL_64;
  if ( !LODWORD(v13[1].klass) )
    goto LABEL_65;
  v13[1].monitor = name;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v13[1].monitor, (int32_t)name, v14, v15, v16, v17, v18, v19);
  if ( LODWORD(v13[1].klass) <= 1 )
    goto LABEL_65;
  v26 = StringLiteral_16109/*"_"*/;
  v13[1].fields.m_CachedPtr = StringLiteral_16109/*"_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v13[1].fields, v26, v20, v21, v22, v23, v24, v25);
  if ( !setLineModel )
    goto LABEL_64;
  klass = setLineModel->klass;
  v28 = *(unsigned __int16 *)&setLineModel->klass->_2.rank;
  if ( *(_WORD *)&setLineModel->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_12;
    }
    v30 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_12:
    v30 = sub_1C47738(setLineModel, IClassBoardLineModel_TypeInfo, 0);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v30)(
                                   setLineModel,
                                   *(_QWORD *)(v30 + 8));
  if ( !name )
    goto LABEL_64;
  v31 = name->klass;
  v32 = name;
  v33 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v34 = &v31->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v34 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_19;
    }
    v35 = (__int64)&v31->vtable + 16 * *v34;
  }
  else
  {
LABEL_19:
    v35 = sub_1C47738(name, IClassBoardSquareModel_TypeInfo, 0);
  }
  v121 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v121, 0);
  if ( LODWORD(v13[1].klass) <= 2
    || (v13[2].klass = (UnityEngine_Object_c *)name,
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v13[2], (int32_t)name, v36, v37, v38, v39, v40, v41),
        LODWORD(v13[1].klass) <= 3) )
  {
LABEL_65:
    sub_1C71610(name);
  }
  v48 = StringLiteral_16109/*"_"*/;
  v13[2].monitor = (void *)StringLiteral_16109/*"_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v13[2].monitor, v48, v42, v43, v44, v45, v46, v47);
  v49 = setLineModel->klass;
  v50 = *(unsigned __int16 *)&setLineModel->klass->_2.rank;
  if ( *(_WORD *)&setLineModel->klass->_2.rank )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v51 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_27;
    }
    v52 = (__int64)&v49->vtable[*v51 + 1];
  }
  else
  {
LABEL_27:
    v52 = sub_1C47738(setLineModel, IClassBoardLineModel_TypeInfo, 1);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v52)(
                                   setLineModel,
                                   *(_QWORD *)(v52 + 8));
  if ( !name )
LABEL_64:
    sub_1C71608(name, v12);
  v53 = name->klass;
  v54 = name;
  v55 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v56 = &v53->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v56 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_34;
    }
    v57 = (__int64)&v53->vtable + 16 * *v56;
  }
  else
  {
LABEL_34:
    v57 = sub_1C47738(name, IClassBoardSquareModel_TypeInfo, 0);
  }
  v121 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v57)(v54, *(_QWORD *)(v57 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v121, 0);
  if ( LODWORD(v13[1].klass) <= 4 )
    goto LABEL_65;
  v13[2].fields.m_CachedPtr = (intptr_t)name;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v13[2].fields, (int32_t)name, v58, v59, v60, v61, v62, v63);
  if ( LODWORD(v13[1].klass) <= 5 )
    goto LABEL_65;
  v70 = StringLiteral_16109/*"_"*/;
  v13[3].klass = (UnityEngine_Object_c *)StringLiteral_16109/*"_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v13[3], v70, v64, v65, v66, v67, v68, v69);
  v71 = setLineModel->klass;
  v72 = *(unsigned __int16 *)&setLineModel->klass->_2.rank;
  if ( *(_WORD *)&setLineModel->klass->_2.rank )
  {
    v73 = &v71->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v73 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v72;
      v73 += 4;
      if ( !v72 )
        goto LABEL_42;
    }
    v74 = (__int64)&v71->vtable[*v73];
  }
  else
  {
LABEL_42:
    v74 = sub_1C47738(setLineModel, IClassBoardLineModel_TypeInfo, 0);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v74)(
                                   setLineModel,
                                   *(_QWORD *)(v74 + 8));
  if ( !name )
    goto LABEL_64;
  v75 = name->klass;
  v76 = name;
  v77 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v78 = (IClassBoardSquareModel_c **)&v75->_1.interfaceOffsets->offset;
    while ( *(v78 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v77;
      v78 += 2;
      if ( !v77 )
        goto LABEL_49;
    }
    v79 = (__int64)(&v75->vtable._1_Finalize + *(_DWORD *)v78);
  }
  else
  {
LABEL_49:
    v79 = sub_1C47738(name, IClassBoardSquareModel_TypeInfo, 1);
  }
  v121 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v79)(v76, *(_QWORD *)(v79 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v121, 0);
  if ( LODWORD(v13[1].klass) <= 6 )
    goto LABEL_65;
  v13[3].monitor = name;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v13[3].monitor, (int32_t)name, v80, v81, v82, v83, v84, v85);
  v86 = System_String__Concat_64072256((System_String_array *)v13, 0);
  UnityEngine_Object__set_name(gameObject, v86, 0);
  ClassBoardLine__UpdateLine(this, v87);
  name = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !name )
    goto LABEL_64;
  v88 = UnityEngine_Object__get_name(name, 0);
  v89 = sub_1C715FC(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v89, 0);
  *(_QWORD *)(v89 + 16) = v88;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v89 + 16), (int32_t)v88, v90, v91, v92, v93, v94, v95);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v89;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.releaseEffectPlayer, v89, v96, v97, v98, v99, v100, v101);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v103 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v103, (Il2CppObject *)this, Method_ClassBoardLine_PlayReleaseEffect__, 0);
  if ( !releaseEffectPlayer )
    goto LABEL_64;
  releaseEffectPlayer->fields.playCallback = v103;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&releaseEffectPlayer->fields.playCallback,
    (int32_t)v103,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  effectObjects = this->fields.effectObjects;
  v121 = 0;
  if ( !effectObjects )
    goto LABEL_64;
  max_length = effectObjects->max_length;
  if ( max_length >= 1 )
  {
    v112 = 0;
    while ( v112 < (unsigned int)max_length )
    {
      v113 = &effectObjects->obj.klass + v112;
      v114 = (UnityEngine_GameObject_o *)v113[4];
      if ( !v114 )
        goto LABEL_64;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v113[4], 0);
      lineLength = this->fields.lineLength;
      v117 = transform;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v114, 0);
      if ( !name )
        goto LABEL_64;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)name, 0);
      y = localScale.fields.y;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v114, 0);
      if ( !name )
        goto LABEL_64;
      v123 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)name, 0);
      if ( !v117 )
        goto LABEL_64;
      v119 = lineLength;
      v120 = y;
      UnityEngine_Transform__set_localScale(v117, v123, 0);
      v112 = v121 + 1;
      v121 = v112;
      max_length = effectObjects->max_length;
      if ( v112 >= max_length )
        return;
    }
    goto LABEL_65;
  }
}


void ClassBoardLine__Update(ClassBoardLine_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardLine__UpdateDrawFromAnimationEvent(ClassBoardLine_o *this, const MethodInfo *method)
{
  this->fields.isUpdateLine = 1;
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardLine__UpdateLine(ClassBoardLine_o *this, const MethodInfo *method)
{
  ClassBoardLine_o *v2; // x19
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  __int64 v5; // x9
  int *p_offset; // x10
  __int64 v7; // x0
  ClassBoardLine_c *v8; // x8
  ClassBoardLine_o *v9; // x20
  __int64 v10; // x9
  IClassBoardSquareModel_c **v11; // x10
  __int64 v12; // x0
  unsigned int v13; // s0
  unsigned int v14; // s1
  float v15; // s2
  struct IClassBoardLineModel_o *v16; // x20
  IClassBoardLineModel_c *v17; // x8
  float v18; // s8
  __int64 v19; // x9
  IClassBoardLineModel_c **v20; // x10
  __int64 v21; // x0
  ClassBoardLine_c *v22; // x8
  ClassBoardLine_o *v23; // x20
  __int64 v24; // x9
  IClassBoardSquareModel_c **v25; // x10
  __int64 v26; // x0
  float32x2_t v27; // d0
  unsigned __int32 v28; // s1
  float v29; // s2
  float v30; // s9
  float32x2_t v31; // d1
  float32x2_t v32; // d12
  float v33; // s11
  int32x2_t v34; // d0
  float32x2_t v35; // d13
  float z; // s14
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct IClassBoardLineModel_o *v38; // x20
  IClassBoardLineModel_c *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  IClassBoardSquareModel_o *v43; // x0
  const MethodInfo *v44; // x2
  float SquareTypeOffset; // s0
  struct IClassBoardLineModel_o *v46; // x20
  IClassBoardLineModel_c *v47; // x8
  float v48; // s0
  __int64 v49; // x9
  float32x2_t v50; // d11
  float v51; // s12
  IClassBoardLineModel_c **v52; // x10
  __int64 v53; // x0
  float v54; // s12
  float32x2_t v55; // d11
  IClassBoardSquareModel_o *v56; // x0
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x1
  float v59; // s0
  float32x2_t v60; // d8
  float v61; // s9
  float32x2_t v62; // d1
  float v63; // s9
  float v64; // s8
  unsigned __int64 v65; // d0
  int v66; // w20
  UnityEngine_Component_o **p_connectedOnSprite; // x25
  UnityEngine_Component_o *v68; // x20
  unsigned int v69; // w9
  int32_t v70; // w1
  ClassBoardLine_o *v71; // x20
  UnityEngine_Transform_o *transform; // x19
  float v73; // s3
  float32x2_t v74; // d0
  float v75; // s1
  struct UnityEngine_Vector3_StaticFields *v76; // x8
  float v77; // s2 OVERLAPPED
  unsigned __int64 v78; // d0 OVERLAPPED
  int v79; // s1
  unsigned __int32 v80; // [xsp+0h] [xbp-C0h]
  unsigned __int32 v81; // [xsp+0h] [xbp-C0h]
  unsigned int v82; // [xsp+10h] [xbp-B0h]
  unsigned __int32 xb; // [xsp+20h] [xbp-A0h]
  unsigned __int32 xc; // [xsp+20h] [xbp-A0h]
  float32x2_t x; // [xsp+20h] [xbp-A0h]
  float32x2_t xa; // [xsp+20h] [xbp-A0h]
  unsigned int v87; // [xsp+30h] [xbp-90h]
  float32x2_t v88; // [xsp+30h] [xbp-90h]
  int32x2_t v89; // [xsp+30h] [xbp-90h]
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4CCB002 & 1) == 0 )
  {
    sub_1C713B0(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardLine_o *)sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    byte_4CCB002 = 1;
  }
  LineModel_k__BackingField = v2->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_94;
  klass = LineModel_k__BackingField->klass;
  v5 = *(unsigned __int16 *)&LineModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&LineModel_k__BackingField->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C47738(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v7)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(v7 + 8));
  if ( !this )
    goto LABEL_94;
  v8 = this->klass;
  v9 = this;
  v10 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v11 = (IClassBoardSquareModel_c **)&v8->_1.interfaceOffsets->offset;
    while ( *(v11 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v10;
      v11 += 2;
      if ( !v10 )
        goto LABEL_15;
    }
    v12 = (__int64)(&v8->vtable._3_ToString + *(_DWORD *)v11);
  }
  else
  {
LABEL_15:
    v12 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 3);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
  v16 = v2->fields._LineModel_k__BackingField;
  if ( !v16 )
    goto LABEL_94;
  v17 = v16->klass;
  v18 = v15;
  v87 = v13;
  v19 = *(unsigned __int16 *)&v16->klass->_2.rank;
  v82 = v14;
  if ( *(_WORD *)&v16->klass->_2.rank )
  {
    v20 = (IClassBoardLineModel_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v19;
      v20 += 2;
      if ( !v19 )
        goto LABEL_22;
    }
    v21 = (__int64)&v17->vtable[*(_DWORD *)v20 + 1];
  }
  else
  {
LABEL_22:
    v21 = sub_1C47738(v16, IClassBoardLineModel_TypeInfo, 1);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v21)(
                               v16,
                               *(_QWORD *)(v21 + 8));
  if ( !this )
    goto LABEL_94;
  v22 = this->klass;
  v23 = this;
  v24 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v25 = (IClassBoardSquareModel_c **)&v22->_1.interfaceOffsets->offset;
    while ( *(v25 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v24;
      v25 += 2;
      if ( !v24 )
        goto LABEL_29;
    }
    v26 = (__int64)(&v22->vtable._3_ToString + *(_DWORD *)v25);
  }
  else
  {
LABEL_29:
    v26 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 3);
  }
  (*(void (__fastcall **)(ClassBoardLine_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  v30 = v29;
  if ( !byte_4CC0D07 )
  {
    xb = v27.n64_u32[0];
    v80 = v28;
    sub_1C713B0(&System_Math_TypeInfo);
    v28 = v80;
    v27.n64_u32[0] = xb;
    byte_4CC0D07 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    xc = v27.n64_u32[0];
    v81 = v28;
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v28 = v81;
    v27.n64_u32[0] = xc;
  }
  v27.n64_u32[1] = v28;
  v31.n64_u64[0] = __PAIR64__(v82, v87);
  x.n64_u64[0] = v27.n64_u64[0];
  v88.n64_u64[0] = __PAIR64__(v82, v87);
  if ( !byte_4CC0D0C )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    v27.n64_u64[0] = x.n64_u64[0];
    v31.n64_u64[0] = v88.n64_u64[0];
    byte_4CC0D0C = 1;
  }
  this = (ClassBoardLine_o *)System_Math_TypeInfo;
  v32.n64_u64[0] = vsub_f32(v27, v31).n64_u64[0];
  v33 = v30 - v18;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v34.n64_u64[0] = vmul_f32(v32, v32).n64_u64[0];
  v34.n64_f32[0] = sqrtf((float)(v33 * v33) + vaddv_f32(v34));
  if ( v34.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4CC0D09 )
    {
      this = (ClassBoardLine_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v35.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v35.n64_u64[0] = vdiv_f32(v32, vdup_lane_s32(v34, 0)).n64_u64[0];
    z = v33 / v34.n64_f32[0];
  }
  v38 = v2->fields._LineModel_k__BackingField;
  if ( !v38 )
    goto LABEL_94;
  v39 = v38->klass;
  v40 = *(unsigned __int16 *)&v38->klass->_2.rank;
  if ( *(_WORD *)&v38->klass->_2.rank )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v41 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_49;
    }
    v42 = (__int64)&v39->vtable[*v41];
  }
  else
  {
LABEL_49:
    v42 = sub_1C47738(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0);
  }
  v43 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v42)(
                                      v38,
                                      *(_QWORD *)(v42 + 8));
  SquareTypeOffset = ClassBoardLine__GetSquareTypeOffset(v2, v43, v44);
  v46 = v2->fields._LineModel_k__BackingField;
  if ( !v46 )
    goto LABEL_94;
  v47 = v46->klass;
  v48 = SquareTypeOffset * 0.5;
  v49 = *(unsigned __int16 *)&v46->klass->_2.rank;
  v50.n64_u64[0] = vmul_n_f32(v35, v48).n64_u64[0];
  v51 = z * v48;
  if ( *(_WORD *)&v46->klass->_2.rank )
  {
    v52 = (IClassBoardLineModel_c **)&v47->_1.interfaceOffsets->offset;
    while ( *(v52 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v49;
      v52 += 2;
      if ( !v49 )
        goto LABEL_56;
    }
    v53 = (__int64)&v47->vtable[*(_DWORD *)v52 + 1];
  }
  else
  {
LABEL_56:
    v53 = sub_1C47738(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1);
  }
  v54 = v18 - v51;
  v55.n64_u64[0] = vsub_f32(v88, v50).n64_u64[0];
  v56 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v53)(
                                      v46,
                                      *(_QWORD *)(v53 + 8));
  v59 = ClassBoardLine__GetSquareTypeOffset(v2, v56, v57) * 0.5;
  v60.n64_u64[0] = vadd_f32(x, vmul_n_f32(v35, v59)).n64_u64[0];
  v61 = v30 + (float)(z * v59);
  if ( !byte_4CC0D0B )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC0D0B = 1;
  }
  v62.n64_u64[0] = vsub_f32(v60, v55).n64_u64[0];
  v63 = v61 - v54;
  xa.n64_u64[0] = v62.n64_u64[0];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v62.n64_u64[0] = xa.n64_u64[0];
  }
  v64 = v62.n64_f32[1];
  v65 = vmul_f32(v62, v62).n64_u64[0];
  *(float *)&v65 = sqrtf((float)(v63 * v63) + (float)(*(float *)&v65 + vmuls_lane_f32(v62.n64_f32[1], v62, 1)));
  v89.n64_u64[0] = v65;
  LODWORD(v2->fields.lineLength) = v65;
  this = (ClassBoardLine_o *)ClassBoardLine__GetConnectType(v2, v58);
  if ( !v2->fields.notConnectedSprite )
    goto LABEL_94;
  v66 = (int)this;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)v2->fields.notConnectedSprite,
                               0);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (ClassBoardLine_o *)v2->fields.connectedSprite) == 0)
    || (this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        p_connectedOnSprite = (UnityEngine_Component_o **)&v2->fields.connectedOnSprite,
        (this = (ClassBoardLine_o *)v2->fields.connectedOnSprite) == 0)
    || (this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
LABEL_94:
    sub_1C71608(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( !v66 )
  {
LABEL_71:
    p_connectedOnSprite = (UnityEngine_Component_o **)&v2->fields.notConnectedSprite;
    goto LABEL_73;
  }
  if ( v66 != 1 )
  {
    if ( v66 == 2 )
      goto LABEL_73;
    goto LABEL_71;
  }
  p_connectedOnSprite = (UnityEngine_Component_o **)&v2->fields.connectedSprite;
LABEL_73:
  v68 = *p_connectedOnSprite;
  if ( !*p_connectedOnSprite )
    goto LABEL_94;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(*p_connectedOnSprite, 0);
  if ( !this )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( !byte_4CC13B2 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC13B2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v69 = vcvtps_s32_f32(v89.n64_f32[0]);
  v70 = ceilf(v89.n64_f32[0]) == INFINITY ? 0x80000000 : v69;
  UIWidget__set_width((UIWidget_o *)v68, v70, 0);
  this = (ClassBoardLine_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !this )
    goto LABEL_94;
  v71 = this;
  v90.fields.z = atan2f(v64, xa.n64_f32[0]) * 57.296;
  v90.fields.x = 0.0;
  v90.fields.y = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)v71, v90, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !byte_4CC0D0C )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC0D0C = 1;
  }
  this = (ClassBoardLine_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v73 = v89.n64_f32[0];
  if ( v89.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4CC0D09 )
    {
      this = (ClassBoardLine_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      v73 = v89.n64_f32[0];
      byte_4CC0D09 = 1;
    }
    v76 = UnityEngine_Vector3_TypeInfo->static_fields;
    v74.n64_u64[0] = *(unsigned __int64 *)&v76->zeroVector.fields.x;
    v75 = v76->zeroVector.fields.z;
  }
  else
  {
    v74.n64_u64[0] = vdiv_f32(xa, vdup_lane_s32(v89, 0)).n64_u64[0];
    v75 = v63 / v89.n64_f32[0];
  }
  if ( !transform )
    goto LABEL_94;
  v77 = v54 + (float)((float)(v73 * 0.5) * v75);
  v78 = vadd_f32(v55, vmul_n_f32(v74, v73 * 0.5)).n64_u64[0];
  v79 = HIDWORD(v78);
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v77 - 2), 0);
}


System_Collections_IEnumerator_o *ClassBoardLine__WaitAnimationFinished(
        ClassBoardLine_o *this,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CCB007 & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardLine__WaitAnimationFinished_d__40_TypeInfo);
    byte_4CCB007 = 1;
  }
  v7 = sub_1C715FC(ClassBoardLine__WaitAnimationFinished_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = name;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)name, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)endCallback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void ClassBoardLine___PlayGrandToClassTransition_b__30_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1C71608(0, method);
  SimpleAnimation__Stop(simpleAnimation, 0);
}


void ClassBoardLine___PlayReleaseEffect_b__35_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0) )
  {
    sub_1C71608(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void ClassBoardLine___PlayReleaseEffect_b__35_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0) )
  {
    sub_1C71608(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void ClassBoardLine___PlayReleaseEffect_b__35_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0) )
  {
    sub_1C71608(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void ClassBoardLine___PlayReleaseEffect_b__35_3(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0) )
  {
    sub_1C71608(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void ClassBoardLine___PlayTransition_b__29_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1C71608(0, method);
  SimpleAnimation__Stop(simpleAnimation, 0);
}


void ClassBoardLine___PlayTransition_b__29_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1C71608(0, method);
  SimpleAnimation__Stop(simpleAnimation, 0);
}


void ClassBoardLine___PlayTransition_b__29_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1C71608(0, method);
  SimpleAnimation__Stop(simpleAnimation, 0);
}


IClassBoardLineModel_o *ClassBoardLine__get_LineModel(ClassBoardLine_o *this, const MethodInfo *method)
{
  return this->fields._LineModel_k__BackingField;
}


ClassBoardEffectPlayer_o *ClassBoardLine__get_ReleaseEffectPlayer(ClassBoardLine_o *this, const MethodInfo *method)
{
  return this->fields.releaseEffectPlayer;
}


void ClassBoardLine__set_LineModel(ClassBoardLine_o *this, IClassBoardLineModel_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._LineModel_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._LineModel_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardLine__WaitAnimationFinished_d__40___ctor(
        ClassBoardLine__WaitAnimationFinished_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardLine__WaitAnimationFinished_d__40__MoveNext(
        ClassBoardLine__WaitAnimationFinished_d__40_o *this,
        const MethodInfo *method)
{
  ClassBoardLine__WaitAnimationFinished_d__40_o *v2; // x19
  int32_t _1__state; // w8
  struct ClassBoardLine_o *_4__this; // x8
  SimpleAnimation_State_o *State; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct SimpleAnimation_State_o *state_5__2; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  struct SimpleAnimation_State_o *v17; // x20
  SimpleAnimation_State_c *v18; // x8
  __int64 v19; // x9
  SimpleAnimation_State_c **v20; // x10
  __int64 v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4CCB009 & 1) == 0 )
  {
    this = (ClassBoardLine__WaitAnimationFinished_d__40_o *)sub_1C713B0(&SimpleAnimation_State_TypeInfo);
    byte_4CCB009 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    this = (ClassBoardLine__WaitAnimationFinished_d__40_o *)_4__this->fields.simpleAnimation;
    if ( !this )
      goto LABEL_28;
    State = SimpleAnimation__GetState((SimpleAnimation_o *)this, v2->fields.name, 0);
    v2->fields._state_5__2 = State;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields._state_5__2, (int32_t)State, v6, v7, v8, v9, v10, v11);
LABEL_9:
    state_5__2 = v2->fields._state_5__2;
    if ( !state_5__2 )
      goto LABEL_26;
    klass = state_5__2->klass;
    v14 = *(unsigned __int16 *)&state_5__2->klass->_2.rank;
    if ( *(_WORD *)&state_5__2->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v14;
        p_offset += 2;
        if ( !v14 )
          goto LABEL_14;
      }
      v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13];
    }
    else
    {
LABEL_14:
      v16 = sub_1C47738(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 13);
    }
    if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v16)(state_5__2, *(_QWORD *)(v16 + 8)) <= 0.0 )
    {
LABEL_26:
      ActionExtensions__Call(v2->fields.endCallback, 0);
      return 0;
    }
    v17 = v2->fields._state_5__2;
    if ( v17 )
    {
      v18 = v17->klass;
      v19 = *(unsigned __int16 *)&v17->klass->_2.rank;
      if ( *(_WORD *)&v17->klass->_2.rank )
      {
        v20 = (SimpleAnimation_State_c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v20 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v19;
          v20 += 2;
          if ( !v19 )
            goto LABEL_22;
        }
        v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 5];
      }
      else
      {
LABEL_22:
        v21 = sub_1C47738(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 5);
      }
      if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) < 1.0 )
      {
        v2->fields.__2__current = 0;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C71354(p__2__current, 0, v22, v23, v24, v25, v26, v27);
        result = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return result;
      }
      goto LABEL_26;
    }
LABEL_28:
    sub_1C71608(this, method);
  }
  return 0;
}


Il2CppObject *ClassBoardLine__WaitAnimationFinished_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardLine__WaitAnimationFinished_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardLine__WaitAnimationFinished_d__40__System_Collections_IEnumerator_Reset(
        ClassBoardLine__WaitAnimationFinished_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ClassBoardLine__WaitAnimationFinished_d__40_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *ClassBoardLine__WaitAnimationFinished_d__40__System_Collections_IEnumerator_get_Current(
        ClassBoardLine__WaitAnimationFinished_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardLine__WaitAnimationFinished_d__40__System_IDisposable_Dispose(
        ClassBoardLine__WaitAnimationFinished_d__40_o *this,
        const MethodInfo *method)
{
  ;
}