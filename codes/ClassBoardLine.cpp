void __fastcall ClassBoardLine___ctor(ClassBoardLine_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_42B386B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_2902/*"BrightTurnTransition"*/);
    sub_B52984(&StringLiteral_2899/*"BrightTurn"*/);
    sub_B52984(&StringLiteral_2903/*"BrightTurnTransitionRoadOn"*/);
    sub_B52984(&StringLiteral_2904/*"BrightTurnUnLock"*/);
    sub_B52984(&StringLiteral_2900/*"BrightTurnRoadOn"*/);
    sub_B52984(&StringLiteral_2901/*"BrightTurnRoadOnUnLock"*/);
    sub_B52984(&StringLiteral_2856/*"BlackOutTransition"*/);
    byte_42B386B = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_2899/*"BrightTurn"*/;
  this->fields.animNameBrightTurn = (struct System_String_o *)StringLiteral_2899/*"BrightTurn"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.animNameBrightTurn, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_2900/*"BrightTurnRoadOn"*/;
  this->fields.animNameBrightTurnRoadOn = (struct System_String_o *)StringLiteral_2900/*"BrightTurnRoadOn"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.animNameBrightTurnRoadOn, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_2904/*"BrightTurnUnLock"*/;
  this->fields.animNameBrightTurnUnlock = (struct System_String_o *)StringLiteral_2904/*"BrightTurnUnLock"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.animNameBrightTurnUnlock, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_2901/*"BrightTurnRoadOnUnLock"*/;
  this->fields.animNameBrightTurnRoadOnUnlock = (struct System_String_o *)StringLiteral_2901/*"BrightTurnRoadOnUnLock"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnRoadOnUnlock,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Int32_array **)StringLiteral_2902/*"BrightTurnTransition"*/;
  this->fields.animNameBrightTurnTransition = (struct System_String_o *)StringLiteral_2902/*"BrightTurnTransition"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnTransition,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Int32_array **)StringLiteral_2903/*"BrightTurnTransitionRoadOn"*/;
  this->fields.animNameBrightTurnTransitionRoadOn = (struct System_String_o *)StringLiteral_2903/*"BrightTurnTransitionRoadOn"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnTransitionRoadOn,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Int32_array **)StringLiteral_2856/*"BlackOutTransition"*/;
  this->fields.animNameBlackOutTransition = (struct System_String_o *)StringLiteral_2856/*"BlackOutTransition"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.animNameBlackOutTransition,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardLine__Awake(ClassBoardLine_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardLine__FixedUpdate(ClassBoardLine_o *this, const MethodInfo *method)
{
  if ( this->fields.isUpdateLine )
  {
    this->fields.isUpdateLine = 0;
    ClassBoardLine__UpdateLine(this, method);
  }
}


int32_t __fastcall ClassBoardLine__GetConnectType(ClassBoardLine_o *this, const MethodInfo *method)
{
  __int64 v2; // x3
  ClassBoardLine_o *v3; // x19
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v9; // x3
  ClassBoardLine_c *v10; // x8
  ClassBoardLine_o *v11; // x20
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x3
  struct IClassBoardLineModel_o *v16; // x20
  IClassBoardLineModel_c *v17; // x8
  unsigned __int64 v18; // x10
  IClassBoardLineModel_c **v19; // x11
  __int64 v20; // x0
  __int64 v21; // x3
  ClassBoardLine_c *v22; // x8
  ClassBoardLine_o *v23; // x20
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  __int64 v29; // x3
  struct IClassBoardLineModel_o *v30; // x20
  IClassBoardLineModel_c *v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  struct IClassBoardLineModel_o *v35; // x20
  IClassBoardLineModel_c *v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x3
  ClassBoardLine_c *v41; // x8
  ClassBoardLine_o *v42; // x20
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x3
  struct IClassBoardLineModel_o *v47; // x20
  IClassBoardLineModel_c *v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x3
  ClassBoardLine_c *v53; // x8
  ClassBoardLine_o *v54; // x20
  unsigned __int64 v55; // x10
  int32_t *v56; // x11
  __int64 v57; // x0
  struct IClassBoardLineModel_o *v58; // x20
  IClassBoardLineModel_c *v59; // x8
  unsigned __int64 v60; // x10
  IClassBoardLineModel_c **v61; // x11
  __int64 v62; // x0
  __int64 v63; // x3
  ClassBoardLine_c *v64; // x8
  ClassBoardLine_o *v65; // x20
  unsigned __int64 v66; // x10
  int32_t *v67; // x11
  __int64 v68; // x0
  __int64 v69; // x3
  struct IClassBoardLineModel_o *v70; // x19
  IClassBoardLineModel_c *v71; // x8
  unsigned __int64 v72; // x10
  IClassBoardLineModel_c **v73; // x11
  __int64 v74; // x0
  __int64 v75; // x3
  ClassBoardLine_c *v76; // x8
  ClassBoardLine_o *v77; // x19
  unsigned __int64 v78; // x10
  int32_t *v79; // x11
  __int64 v80; // x0
  int32_t notConnectedSprite; // w20
  int32_t v82; // w22
  Il2CppObject *current; // x19
  Il2CppClass *v84; // x8
  unsigned __int64 v85; // x10
  int32_t *v86; // x11
  __int64 v87; // x0
  __int64 v88; // x3
  Il2CppClass *v89; // x8
  unsigned __int64 v90; // x10
  IClassBoardSquareModel_c **v91; // x11
  __int64 v92; // x0
  System_Enum_o *v93; // x19
  System_Enum_o *v94; // x0
  _BOOL8 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x3
  __int64 v99; // x3
  ClassBoardLine_c *v100; // x8
  ClassBoardLine_o *v101; // x20
  unsigned __int64 v102; // x10
  int32_t *v103; // x11
  __int64 v104; // x0
  System_Enum_o *v105; // x20
  __int64 v106; // x3
  struct IClassBoardLineModel_o *v107; // x20
  IClassBoardLineModel_c *v108; // x8
  unsigned __int64 v109; // x10
  IClassBoardLineModel_c **v110; // x11
  __int64 v111; // x0
  __int64 v112; // x3
  ClassBoardLine_c *v113; // x8
  ClassBoardLine_o *v114; // x20
  unsigned __int64 v115; // x10
  int32_t *v116; // x11
  __int64 v117; // x0
  System_Enum_o *v118; // x20
  struct IClassBoardLineModel_o *v119; // x20
  IClassBoardLineModel_c *v120; // x8
  unsigned __int64 v121; // x10
  int *v122; // x11
  __int64 v123; // x0
  __int64 v124; // x3
  ClassBoardLine_c *v125; // x8
  ClassBoardLine_o *v126; // x20
  unsigned __int64 v127; // x10
  int32_t *v128; // x11
  __int64 v129; // x0
  System_Enum_o *v130; // x20
  __int64 v131; // x3
  struct IClassBoardLineModel_o *v132; // x19
  IClassBoardLineModel_c *v133; // x8
  unsigned __int64 v134; // x10
  IClassBoardLineModel_c **v135; // x11
  __int64 v136; // x0
  __int64 v137; // x3
  ClassBoardLine_c *v138; // x8
  ClassBoardLine_o *v139; // x19
  unsigned __int64 v140; // x10
  int32_t *v141; // x11
  __int64 v142; // x0
  System_Enum_o *v143; // x19
  System_Collections_Generic_List_Enumerator_T__o v144; // [xsp+0h] [xbp-80h] BYREF
  int v145; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v146; // [xsp+20h] [xbp-60h] BYREF
  ClassBoardLine_o *v147; // [xsp+48h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_42B3868 & 1) == 0 )
  {
    sub_B52984(&AcquireFlag_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__);
    sub_B52984(&IClassBoardLineModel_TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__);
    this = (ClassBoardLine_o *)sub_B52984(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_42B3868 = 1;
  }
  v147 = 0LL;
  memset(&v146, 0, sizeof(v146));
  LineModel_k__BackingField = v3->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_187;
  klass = LineModel_k__BackingField->klass;
  if ( *(_WORD *)&LineModel_k__BackingField->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&LineModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v2);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_187;
  v10 = this->klass;
  v11 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    v13 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v13 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v12;
      v13 += 4;
      if ( v12 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v14 = (__int64)(&v10[1]._1.gc_desc + 2 * *v13);
  }
  else
  {
LABEL_15:
    v14 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 5LL, v9);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v16 = v3->fields._LineModel_k__BackingField;
    if ( !v16 )
      goto LABEL_187;
    v17 = v16->klass;
    if ( *(_WORD *)&v16->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = (IClassBoardLineModel_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v18;
        v19 += 2;
        if ( v18 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
    }
    else
    {
LABEL_23:
      v20 = sub_AEB880(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v15);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v20)(
                                 v16,
                                 *(_QWORD *)(v20 + 8));
    if ( !this )
      goto LABEL_187;
    v22 = this->klass;
    v23 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v22->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v25 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_30;
      }
      v26 = (__int64)(&v22[1]._1.gc_desc + 2 * *v25);
    }
    else
    {
LABEL_30:
      v26 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 5LL, v21);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v35 = v3->fields._LineModel_k__BackingField;
      if ( v35 )
      {
        v36 = v35->klass;
        if ( *(_WORD *)&v35->klass->_2.bitflags1 )
        {
          v37 = 0LL;
          v38 = &v36->_1.interfaceOffsets->offset;
          while ( *((IClassBoardLineModel_c **)v38 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v37;
            v38 += 4;
            if ( v37 >= *(unsigned __int16 *)&v35->klass->_2.bitflags1 )
              goto LABEL_44;
          }
          v39 = (__int64)&v36->vtable[*v38].method;
        }
        else
        {
LABEL_44:
          v39 = sub_AEB880(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v27);
        }
        this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v39)(
                                     v35,
                                     *(_QWORD *)(v39 + 8));
        if ( this )
        {
          v100 = this->klass;
          v101 = this;
          if ( *(_WORD *)&this->klass->_2.bitflags1 )
          {
            v102 = 0LL;
            v103 = &v100->_1.interfaceOffsets->offset;
            while ( *((IClassBoardSquareModel_c **)v103 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v102;
              v103 += 4;
              if ( v102 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                goto LABEL_130;
            }
            v104 = (__int64)(&v100[1]._1.events + 2 * *v103);
          }
          else
          {
LABEL_130:
            v104 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 13LL, v99);
          }
          LODWORD(v144.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v104)(
                                        v101,
                                        0LL,
                                        *(_QWORD *)(v104 + 8));
          v105 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v144);
          v145 = 1;
          this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v145);
          if ( v105 )
          {
            this = (ClassBoardLine_o *)System_Enum__HasFlag(v105, (System_Enum_o *)this, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v107 = v3->fields._LineModel_k__BackingField;
              if ( !v107 )
                goto LABEL_187;
              v108 = v107->klass;
              if ( *(_WORD *)&v107->klass->_2.bitflags1 )
              {
                v109 = 0LL;
                v110 = (IClassBoardLineModel_c **)&v108->_1.interfaceOffsets->offset;
                while ( *(v110 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  ++v109;
                  v110 += 2;
                  if ( v109 >= *(unsigned __int16 *)&v107->klass->_2.bitflags1 )
                    goto LABEL_139;
                }
                v111 = (__int64)&v108->vtable[*(_DWORD *)v110 + 1].method;
              }
              else
              {
LABEL_139:
                v111 = sub_AEB880(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v106);
              }
              this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v111)(
                                           v107,
                                           *(_QWORD *)(v111 + 8));
              if ( !this )
                goto LABEL_187;
              v113 = this->klass;
              v114 = this;
              if ( *(_WORD *)&this->klass->_2.bitflags1 )
              {
                v115 = 0LL;
                v116 = &v113->_1.interfaceOffsets->offset;
                while ( *((IClassBoardSquareModel_c **)v116 - 1) != IClassBoardSquareModel_TypeInfo )
                {
                  ++v115;
                  v116 += 4;
                  if ( v115 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                    goto LABEL_146;
                }
                v117 = (__int64)(&v113[1]._1.events + 2 * *v116);
              }
              else
              {
LABEL_146:
                v117 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 13LL, v112);
              }
              LODWORD(v144.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v117)(
                                            v114,
                                            0LL,
                                            *(_QWORD *)(v117 + 8));
              v118 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v144);
              v145 = 1;
              this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v145);
              if ( !v118 )
                goto LABEL_187;
              this = (ClassBoardLine_o *)System_Enum__HasFlag(v118, (System_Enum_o *)this, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                return 2;
            }
            v119 = v3->fields._LineModel_k__BackingField;
            if ( v119 )
            {
              v120 = v119->klass;
              if ( *(_WORD *)&v119->klass->_2.bitflags1 )
              {
                v121 = 0LL;
                v122 = &v120->_1.interfaceOffsets->offset;
                while ( *((IClassBoardLineModel_c **)v122 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  ++v121;
                  v122 += 4;
                  if ( v121 >= *(unsigned __int16 *)&v119->klass->_2.bitflags1 )
                    goto LABEL_156;
                }
                v123 = (__int64)&v120->vtable[*v122].method;
              }
              else
              {
LABEL_156:
                v123 = sub_AEB880(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v106);
              }
              this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v123)(
                                           v119,
                                           *(_QWORD *)(v123 + 8));
              if ( this )
              {
                v125 = this->klass;
                v126 = this;
                if ( *(_WORD *)&this->klass->_2.bitflags1 )
                {
                  v127 = 0LL;
                  v128 = &v125->_1.interfaceOffsets->offset;
                  while ( *((IClassBoardSquareModel_c **)v128 - 1) != IClassBoardSquareModel_TypeInfo )
                  {
                    ++v127;
                    v128 += 4;
                    if ( v127 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                      goto LABEL_163;
                  }
                  v129 = (__int64)(&v125[1]._1.events + 2 * *v128);
                }
                else
                {
LABEL_163:
                  v129 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 13LL, v124);
                }
                LODWORD(v144.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v129)(
                                              v126,
                                              0LL,
                                              *(_QWORD *)(v129 + 8));
                v130 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v144);
                v145 = 1;
                this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v145);
                if ( v130 )
                {
                  this = (ClassBoardLine_o *)System_Enum__HasFlag(v130, (System_Enum_o *)this, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    return 1;
                  v132 = v3->fields._LineModel_k__BackingField;
                  if ( v132 )
                  {
                    v133 = v132->klass;
                    if ( *(_WORD *)&v132->klass->_2.bitflags1 )
                    {
                      v134 = 0LL;
                      v135 = (IClassBoardLineModel_c **)&v133->_1.interfaceOffsets->offset;
                      while ( *(v135 - 1) != IClassBoardLineModel_TypeInfo )
                      {
                        ++v134;
                        v135 += 2;
                        if ( v134 >= *(unsigned __int16 *)&v132->klass->_2.bitflags1 )
                          goto LABEL_173;
                      }
                      v136 = (__int64)&v133->vtable[*(_DWORD *)v135 + 1].method;
                    }
                    else
                    {
LABEL_173:
                      v136 = sub_AEB880(v132, IClassBoardLineModel_TypeInfo, 1LL, v131);
                    }
                    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v136)(
                                                 v132,
                                                 *(_QWORD *)(v136 + 8));
                    if ( this )
                    {
                      v138 = this->klass;
                      v139 = this;
                      if ( *(_WORD *)&this->klass->_2.bitflags1 )
                      {
                        v140 = 0LL;
                        v141 = &v138->_1.interfaceOffsets->offset;
                        while ( *((IClassBoardSquareModel_c **)v141 - 1) != IClassBoardSquareModel_TypeInfo )
                        {
                          ++v140;
                          v141 += 4;
                          if ( v140 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                            goto LABEL_180;
                        }
                        v142 = (__int64)(&v138[1]._1.events + 2 * *v141);
                      }
                      else
                      {
LABEL_180:
                        v142 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 13LL, v137);
                      }
                      LODWORD(v144.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v142)(
                                                    v139,
                                                    0LL,
                                                    *(_QWORD *)(v142 + 8));
                      v143 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v144);
                      v145 = 1;
                      this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v145);
                      if ( v143 )
                        return System_Enum__HasFlag(v143, (System_Enum_o *)this, 0LL);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_187:
      sub_B52A5C(this, method);
    }
  }
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v147 = (ClassBoardLine_o *)v28;
  v30 = v3->fields._LineModel_k__BackingField;
  if ( !v30 )
    goto LABEL_187;
  v31 = v30->klass;
  if ( *(_WORD *)&v30->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v33 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_38:
    v34 = sub_AEB880(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v29);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v34)(
                               v30,
                               *(_QWORD *)(v34 + 8));
  if ( !this )
    goto LABEL_187;
  v41 = this->klass;
  v42 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = &v41->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v44 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v45 = (__int64)(&v41[1]._1.gc_desc + 2 * *v44);
  }
  else
  {
LABEL_51:
    v45 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 5LL, v40);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v47 = v3->fields._LineModel_k__BackingField;
    if ( !v47 )
      goto LABEL_187;
    v48 = v47->klass;
    if ( *(_WORD *)&v47->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v50 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)&v47->klass->_2.bitflags1 )
          goto LABEL_59;
      }
      v51 = (__int64)&v48->vtable[*v50].method;
    }
    else
    {
LABEL_59:
      v51 = sub_AEB880(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v46);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v51)(
                                 v47,
                                 *(_QWORD *)(v51 + 8));
    if ( !this )
      goto LABEL_187;
    v53 = this->klass;
    v54 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v55 = 0LL;
      v56 = &v53->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v56 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v55;
        v56 += 4;
        if ( v55 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_66;
      }
      v57 = (__int64)(&v53[1]._1.implementedInterfaces + 2 * *v56);
    }
    else
    {
LABEL_66:
      v57 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 15LL, v52);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v57)(
                                 v54,
                                 &v147,
                                 *(_QWORD *)(v57 + 8));
  }
  v58 = v3->fields._LineModel_k__BackingField;
  if ( !v58 )
    goto LABEL_187;
  v59 = v58->klass;
  if ( *(_WORD *)&v58->klass->_2.bitflags1 )
  {
    v60 = 0LL;
    v61 = (IClassBoardLineModel_c **)&v59->_1.interfaceOffsets->offset;
    while ( *(v61 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v60;
      v61 += 2;
      if ( v60 >= *(unsigned __int16 *)&v58->klass->_2.bitflags1 )
        goto LABEL_74;
    }
    v62 = (__int64)&v59->vtable[*(_DWORD *)v61 + 1].method;
  }
  else
  {
LABEL_74:
    v62 = sub_AEB880(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v46);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v62)(
                               v58,
                               *(_QWORD *)(v62 + 8));
  if ( !this )
    goto LABEL_187;
  v64 = this->klass;
  v65 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v66 = 0LL;
    v67 = &v64->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v67 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v66;
      v67 += 4;
      if ( v66 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_81;
    }
    v68 = (__int64)(&v64[1]._1.gc_desc + 2 * *v67);
  }
  else
  {
LABEL_81:
    v68 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 5LL, v63);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v70 = v3->fields._LineModel_k__BackingField;
    if ( v70 )
    {
      v71 = v70->klass;
      if ( *(_WORD *)&v70->klass->_2.bitflags1 )
      {
        v72 = 0LL;
        v73 = (IClassBoardLineModel_c **)&v71->_1.interfaceOffsets->offset;
        while ( *(v73 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v72;
          v73 += 2;
          if ( v72 >= *(unsigned __int16 *)&v70->klass->_2.bitflags1 )
            goto LABEL_89;
        }
        v74 = (__int64)&v71->vtable[*(_DWORD *)v73 + 1].method;
      }
      else
      {
LABEL_89:
        v74 = sub_AEB880(v70, IClassBoardLineModel_TypeInfo, 1LL, v69);
      }
      this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v74)(
                                   v70,
                                   *(_QWORD *)(v74 + 8));
      if ( this )
      {
        v76 = this->klass;
        v77 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v78 = 0LL;
          v79 = &v76->_1.interfaceOffsets->offset;
          while ( *((IClassBoardSquareModel_c **)v79 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v78;
            v79 += 4;
            if ( v78 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_96;
          }
          v80 = (__int64)(&v76[1]._1.implementedInterfaces + 2 * *v79);
        }
        else
        {
LABEL_96:
          v80 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 15LL, v75);
        }
        (*(void (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v80)(v77, &v147, *(_QWORD *)(v80 + 8));
        goto LABEL_99;
      }
    }
    goto LABEL_187;
  }
LABEL_99:
  this = v147;
  if ( !v147 )
    goto LABEL_187;
  notConnectedSprite = (int32_t)v147->fields.notConnectedSprite;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v144,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v147,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v82 = 0;
  v146 = v144;
  while ( 1 )
  {
    v95 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v146,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    if ( !v95 )
      break;
    current = v146.fields.current;
    if ( !v146.fields.current )
      sub_B52A5C(v95, v96);
    v84 = v146.fields.current->klass;
    if ( *(_WORD *)&v146.fields.current->klass->_2.bitflags1 )
    {
      v85 = 0LL;
      v86 = &v84->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v86 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v85;
        v86 += 4;
        if ( v85 >= *(unsigned __int16 *)&v146.fields.current->klass->_2.bitflags1 )
          goto LABEL_106;
      }
      v87 = (__int64)&v84->vtable[*v86 + 5].method;
    }
    else
    {
LABEL_106:
      v87 = sub_AEB880(v146.fields.current, IClassBoardSquareModel_TypeInfo, 5LL, v97);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v87)(current, *(_QWORD *)(v87 + 8)) & 1) != 0 )
    {
      --notConnectedSprite;
    }
    else
    {
      v89 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v90 = 0LL;
        v91 = (IClassBoardSquareModel_c **)&v89->_1.interfaceOffsets->offset;
        while ( *(v91 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v90;
          v91 += 2;
          if ( v90 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_113;
        }
        v92 = (__int64)&v89->vtable[*(_DWORD *)v91 + 13].method;
      }
      else
      {
LABEL_113:
        v92 = sub_AEB880(current, IClassBoardSquareModel_TypeInfo, 13LL, v88);
      }
      LODWORD(v144.fields.list) = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v92)(
                                    current,
                                    0LL,
                                    *(_QWORD *)(v92 + 8));
      v93 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v144);
      v145 = 1;
      v94 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v145);
      if ( !v93 )
        sub_B52A5C(v94, v94);
      v82 += System_Enum__HasFlag(v93, v94, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v146,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  if ( !v82 )
    return 0;
  if ( v82 < notConnectedSprite )
    return 1;
  return 2;
}


float __fastcall ClassBoardLine__GetSquareTypeOffset(
        ClassBoardLine_o *this,
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardLine_o *v5; // x19
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  float *p_blankOffsetLength; // x8

  v5 = this;
  if ( (byte_42B3869 & 1) == 0 )
  {
    sub_B52984(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardLine_o *)sub_B52984(&IClassBoardSquareModel_TypeInfo);
    byte_42B3869 = 1;
  }
  if ( !squareModel )
    sub_B52A5C(this, squareModel);
  klass = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(squareModel, IClassBoardSquareModel_TypeInfo, 5LL, v3);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    p_blankOffsetLength = &v5->fields.blankOffsetLength;
  }
  else if ( sub_B52A44(squareModel, IClassBoardLockModel_TypeInfo) )
  {
    p_blankOffsetLength = &v5->fields.lockOffsetLength;
  }
  else
  {
    p_blankOffsetLength = &v5->fields.squareOffsetLength;
  }
  return *p_blankOffsetLength;
}


void __fastcall ClassBoardLine__PlayReleaseEffect(ClassBoardLine_o *this, const MethodInfo *method)
{
  int32_t ConnectType; // w0
  const MethodInfo *v4; // x1
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0
  System_String_o *animNameBrightTurnRoadOnUnlock; // x20
  System_Action_o *v7; // x0
  __int64 *v8; // x8
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x3

  if ( (byte_42B3867 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardEffectPlayer_GetData_bool___);
    sub_B52984(&Method_ClassBoardLine__PlayReleaseEffect_b__33_0__);
    sub_B52984(&Method_ClassBoardLine__PlayReleaseEffect_b__33_1__);
    sub_B52984(&Method_ClassBoardLine__PlayReleaseEffect_b__33_2__);
    sub_B52984(&Method_ClassBoardLine__PlayReleaseEffect_b__33_3__);
    byte_42B3867 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      if ( ClassBoardEffectPlayer__GetData_bool_(
             releaseEffectPlayer,
             (const MethodInfo_1A47CF0 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOnUnlock;
        v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        v8 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_2__;
      }
      else
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOn;
        v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        v8 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_3__;
      }
      goto LABEL_15;
    }
LABEL_16:
    sub_B52A5C(releaseEffectPlayer, v4);
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
         (const MethodInfo_1A47CF0 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnUnlock;
    v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    v8 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_0__;
  }
  else
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurn;
    v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    v8 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_1__;
  }
LABEL_15:
  v9 = v7;
  System_Action___ctor(v7, (Il2CppObject *)this, *v8, 0LL);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnRoadOnUnlock, v9, v10);
}


void __fastcall ClassBoardLine__PlaySimpleAnimation(
        ClassBoardLine_o *this,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v8; // x3
  System_Collections_IEnumerator_o *v9; // x1

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Rewind(simpleAnimation, 0LL), (simpleAnimation = this->fields.simpleAnimation) == 0LL) )
  {
    sub_B52A5C(simpleAnimation, name);
  }
  SimpleAnimation__Play_16625408(simpleAnimation, name, 0LL);
  v9 = ClassBoardLine__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall ClassBoardLine__PlayTransition(ClassBoardLine_o *this, const MethodInfo *method)
{
  int32_t ConnectType; // w0
  System_String_o *animNameBrightTurnTransitionRoadOn; // x20
  System_Action_o *v5; // x0
  __int64 *v6; // x8
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x3

  if ( (byte_42B3865 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardLine__PlayTransition_b__28_0__);
    sub_B52984(&Method_ClassBoardLine__PlayTransition_b__28_1__);
    sub_B52984(&Method_ClassBoardLine__PlayTransition_b__28_2__);
    byte_42B3865 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransitionRoadOn;
    v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    v6 = &Method_ClassBoardLine__PlayTransition_b__28_1__;
  }
  else if ( ConnectType == 1 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransition;
    v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    v6 = &Method_ClassBoardLine__PlayTransition_b__28_0__;
  }
  else
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBlackOutTransition;
    v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    v6 = &Method_ClassBoardLine__PlayTransition_b__28_2__;
  }
  v7 = v5;
  System_Action___ctor(v5, (Il2CppObject *)this, *v6, 0LL);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnTransitionRoadOn, v7, v8);
}


void __fastcall ClassBoardLine__ReleaseAfterUpdate(ClassBoardLine_o *this, const MethodInfo *method)
{
  this->fields.isUpdateLine = 1;
}


void __fastcall ClassBoardLine__SetUpdateLine(ClassBoardLine_o *this, const MethodInfo *method)
{
  this->fields.isUpdateLine = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardLine__Setup(
        ClassBoardLine_o *this,
        IClassBoardLineModel_o *setLineModel,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *name; // x0
  __int64 v12; // x1
  System_String_array *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  __int64 v28; // x3
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x3
  UnityEngine_Object_c *v34; // x8
  UnityEngine_Object_o *v35; // x23
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x23
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  __int64 v53; // x3
  IClassBoardLineModel_c *v54; // x8
  unsigned __int64 v55; // x10
  int32_t *v56; // x11
  __int64 v57; // x0
  __int64 v58; // x3
  UnityEngine_Object_c *v59; // x8
  UnityEngine_Object_o *v60; // x22
  unsigned __int64 v61; // x10
  int32_t *v62; // x11
  __int64 v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x22
  System_String_o *v71; // x0
  const MethodInfo *v72; // x1
  System_Int32_array **v73; // x20
  __int64 v74; // x21
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  System_Action_o *v88; // x21
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  struct UnityEngine_GameObject_array *effectObjects; // x22
  int max_length; // w8
  int v97; // w9
  Il2CppClass **v98; // x8
  UnityEngine_GameObject_o *v99; // x21
  UnityEngine_Transform_o *transform; // x0
  float lineLength; // s8
  UnityEngine_Transform_o *v102; // x20
  float y; // s9
  int v104; // s2
  float v105; // s0
  float v106; // s1
  __int64 v107; // x0
  __int64 v108; // x0
  int v109; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B3864 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&ClassBoardEffectPlayer_TypeInfo);
    sub_B52984(&Method_ClassBoardLine_PlayReleaseEffect__);
    sub_B52984(&IClassBoardLineModel_TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42B3864 = 1;
  }
  v109 = 0;
  this->fields._LineModel_k__BackingField = setLineModel;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._LineModel_k__BackingField,
    (System_Int32_array **)setLineModel,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  name = (UnityEngine_Object_o *)sub_B5299C(string___TypeInfo, 5LL);
  if ( !gameObject )
    goto LABEL_63;
  v13 = (System_String_array *)name;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL);
  if ( !v13 )
    goto LABEL_63;
  v20 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B52A44(name, v13->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
  }
  if ( !v13->max_length )
    goto LABEL_64;
  v13->m_Items[0] = (System_String_o *)v20;
  sub_B52920((BattleServantConfConponent_o *)v13->m_Items, v20, v14, v15, v16, v17, v18, v19);
  name = (UnityEngine_Object_o *)StringLiteral_16011/*"_"*/;
  if ( StringLiteral_16011/*"_"*/ )
  {
    name = (UnityEngine_Object_o *)sub_B52A44(StringLiteral_16011/*"_"*/, v13->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
    v27 = (System_Int32_array **)StringLiteral_16011/*"_"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_64;
  v13->m_Items[1] = (System_String_o *)v27;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  if ( !setLineModel )
    goto LABEL_63;
  klass = setLineModel->klass;
  if ( *(_WORD *)&setLineModel->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&setLineModel->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_18:
    p_method = sub_AEB880(setLineModel, IClassBoardLineModel_TypeInfo, 0LL, v28);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))p_method)(
                                   setLineModel,
                                   *(_QWORD *)(p_method + 8));
  if ( !name )
    goto LABEL_63;
  v34 = name->klass;
  v35 = name;
  if ( *(_WORD *)&name->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v34->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v37 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&name->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v38 = (__int64)(&v34->vtable._0_Equals.method + 2 * *v37);
  }
  else
  {
LABEL_25:
    v38 = sub_AEB880(name, IClassBoardSquareModel_TypeInfo, 0LL, v33);
  }
  v109 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v109, 0LL);
  v45 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B52A44(name, v13->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_64;
  v13->m_Items[2] = (System_String_o *)v45;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[2], v45, v39, v40, v41, v42, v43, v44);
  name = (UnityEngine_Object_o *)StringLiteral_16011/*"_"*/;
  if ( StringLiteral_16011/*"_"*/ )
  {
    name = (UnityEngine_Object_o *)sub_B52A44(StringLiteral_16011/*"_"*/, v13->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
    v52 = (System_Int32_array **)StringLiteral_16011/*"_"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( v13->max_length <= 3 )
    goto LABEL_64;
  v13->m_Items[3] = (System_String_o *)v52;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[3], v52, v46, v47, v48, v49, v50, v51);
  v54 = setLineModel->klass;
  if ( *(_WORD *)&setLineModel->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v56 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)&setLineModel->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v57 = (__int64)&v54->vtable[*v56 + 1].method;
  }
  else
  {
LABEL_39:
    v57 = sub_AEB880(setLineModel, IClassBoardLineModel_TypeInfo, 1LL, v53);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v57)(
                                   setLineModel,
                                   *(_QWORD *)(v57 + 8));
  if ( !name )
    goto LABEL_63;
  v59 = name->klass;
  v60 = name;
  if ( *(_WORD *)&name->klass->_2.bitflags1 )
  {
    v61 = 0LL;
    v62 = &v59->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v62 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v61;
      v62 += 4;
      if ( v61 >= *(unsigned __int16 *)&name->klass->_2.bitflags1 )
        goto LABEL_46;
    }
    v63 = (__int64)(&v59->vtable._0_Equals.method + 2 * *v62);
  }
  else
  {
LABEL_46:
    v63 = sub_AEB880(name, IClassBoardSquareModel_TypeInfo, 0LL, v58);
  }
  v109 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v63)(v60, *(_QWORD *)(v63 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v109, 0LL);
  v70 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B52A44(name, v13->obj.klass->_1.element_class);
    if ( !name )
    {
LABEL_65:
      v108 = sub_B52A7C(name);
      sub_B52A28(v108, 0LL);
    }
  }
  if ( v13->max_length <= 4 )
    goto LABEL_64;
  v13->m_Items[4] = (System_String_o *)v70;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[4], v70, v64, v65, v66, v67, v68, v69);
  v71 = System_String__Concat_44648440(v13, 0LL);
  UnityEngine_Object__set_name(gameObject, v71, 0LL);
  ClassBoardLine__UpdateLine(this, v72);
  name = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !name )
    goto LABEL_63;
  v73 = (System_Int32_array **)UnityEngine_Object__get_name(name, 0LL);
  v74 = sub_B52A54(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v74, 0LL);
  *(_QWORD *)(v74 + 16) = v73;
  sub_B52920((BattleServantConfConponent_o *)(v74 + 16), v73, v75, v76, v77, v78, v79, v80);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v74;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.releaseEffectPlayer,
    (System_Int32_array **)v74,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v88 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v88, (Il2CppObject *)this, Method_ClassBoardLine_PlayReleaseEffect__, 0LL);
  if ( !releaseEffectPlayer
    || (releaseEffectPlayer->fields.playCallback = v88,
        sub_B52920(
          (BattleServantConfConponent_o *)&releaseEffectPlayer->fields.playCallback,
          (System_Int32_array **)v88,
          v89,
          v90,
          v91,
          v92,
          v93,
          v94),
        effectObjects = this->fields.effectObjects,
        v109 = 0,
        !effectObjects) )
  {
LABEL_63:
    sub_B52A5C(name, v12);
  }
  max_length = effectObjects->max_length;
  if ( max_length >= 1 )
  {
    v97 = 0;
    while ( v97 < (unsigned int)max_length )
    {
      v98 = &effectObjects->obj.klass + v97;
      v99 = (UnityEngine_GameObject_o *)v98[4];
      if ( !v99 )
        goto LABEL_63;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v98[4], 0LL);
      lineLength = this->fields.lineLength;
      v102 = transform;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v99, 0LL);
      if ( !name )
        goto LABEL_63;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)name, 0LL);
      y = localScale.fields.y;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v99, 0LL);
      if ( !name )
        goto LABEL_63;
      *(UnityEngine_Vector3_o *)(&v104 - 2) = UnityEngine_Transform__get_localScale(
                                                (UnityEngine_Transform_o *)name,
                                                0LL);
      if ( !v102 )
        goto LABEL_63;
      v105 = lineLength;
      v106 = y;
      UnityEngine_Transform__set_localScale(v102, *(UnityEngine_Vector3_o *)(&v104 - 2), 0LL);
      v97 = v109 + 1;
      v109 = v97;
      max_length = effectObjects->max_length;
      if ( v97 >= max_length )
        return;
    }
LABEL_64:
    v107 = sub_B52A88(name);
    sub_B52A28(v107, 0LL);
  }
}


void __fastcall ClassBoardLine__Update(ClassBoardLine_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardLine__UpdateDrawFromAnimationEvent(ClassBoardLine_o *this, const MethodInfo *method)
{
  this->fields.isUpdateLine = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardLine__UpdateLine(ClassBoardLine_o *this, const MethodInfo *method)
{
  __int64 v2; // x3
  ClassBoardLine_o *v3; // x19
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v9; // x3
  ClassBoardLine_c *v10; // x8
  ClassBoardLine_o *v11; // x20
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x3
  float v16; // s0
  float v17; // s1
  float v18; // s2
  struct IClassBoardLineModel_o *v19; // x20
  IClassBoardLineModel_c *v20; // x8
  float v21; // s11
  float v22; // s10
  float v23; // s12
  unsigned __int64 v24; // x10
  IClassBoardLineModel_c **v25; // x11
  __int64 v26; // x0
  __int64 v27; // x3
  ClassBoardLine_c *v28; // x8
  ClassBoardLine_o *v29; // x20
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  long double v33; // q0 OVERLAPPED
  float v34; // s9
  float v35; // s1
  float v36; // s14
  float v37; // s2
  float v38; // s13
  float v39; // s1
  float v40; // s2
  __int64 v41; // x3
  float v42; // s0
  float v43; // s1
  float v44; // s2
  struct IClassBoardLineModel_o *v45; // x20
  IClassBoardLineModel_c *v46; // x8
  float v47; // s15
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  IClassBoardSquareModel_o *v51; // x0
  const MethodInfo *v52; // x2
  __int64 v53; // x3
  float SquareTypeOffset; // s0
  struct IClassBoardLineModel_o *v55; // x20
  IClassBoardLineModel_c *v56; // x8
  float v57; // s0
  float v58; // s8
  float v59; // s11
  float v60; // s15
  float v61; // s10
  unsigned __int64 v62; // x10
  IClassBoardLineModel_c **v63; // x11
  __int64 v64; // x0
  IClassBoardSquareModel_o *v65; // x0
  const MethodInfo *v66; // x2
  float v67; // s0
  float magnitude; // s8
  const MethodInfo *v69; // x1
  int v70; // w20
  UnityEngine_Component_o **p_connectedSprite; // x22
  UnityEngine_Component_o *v72; // x20
  int32_t v73; // w0
  float v74; // s9
  UnityEngine_Transform_o *transform; // x19
  float v76; // s0
  float v77; // s1
  float v78; // s2
  __int64 v79; // [xsp+0h] [xbp-90h] BYREF
  float v80; // [xsp+8h] [xbp-88h]
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  float v82; // [xsp+68h] [xbp-28h]
  float v83; // [xsp+6Ch] [xbp-24h]
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s3.4,4:s4.4,8:s5.4

  v3 = this;
  if ( (byte_42B3866 & 1) == 0 )
  {
    sub_B52984(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardLine_o *)sub_B52984(&IClassBoardSquareModel_TypeInfo);
    byte_42B3866 = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v80 = 0.0;
  v79 = 0LL;
  LineModel_k__BackingField = v3->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_61;
  klass = LineModel_k__BackingField->klass;
  if ( *(_WORD *)&LineModel_k__BackingField->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&LineModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v2);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_61;
  v10 = this->klass;
  v11 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    v13 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v13 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v12;
      v13 += 4;
      if ( v12 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v14 = (__int64)(&v10->vtable._3_ToString.method + 2 * *v13);
  }
  else
  {
LABEL_15:
    v14 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 3LL, v9);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
  v19 = v3->fields._LineModel_k__BackingField;
  if ( !v19 )
    goto LABEL_61;
  v20 = v19->klass;
  v21 = v16;
  v22 = v17;
  v23 = v18;
  if ( *(_WORD *)&v19->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = (IClassBoardLineModel_c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v25 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v24;
      v25 += 2;
      if ( v24 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v26 = (__int64)&v20->vtable[*(_DWORD *)v25 + 1].method;
  }
  else
  {
LABEL_22:
    v26 = sub_AEB880(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v15);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v26)(
                               v19,
                               *(_QWORD *)(v26 + 8));
  if ( !this )
    goto LABEL_61;
  v28 = this->klass;
  v29 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v31 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v32 = (__int64)(&v28->vtable._3_ToString.method + 2 * *v31);
  }
  else
  {
LABEL_29:
    v32 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 3LL, v27);
  }
  v33 = ((long double (__fastcall *)(ClassBoardLine_o *, _QWORD))*(_QWORD *)v32)(v29, *(_QWORD *)(v32 + 8));
  v34 = *(float *)&v33;
  v36 = v35;
  v38 = v37;
  *(float *)&v33 = v21;
  v39 = v22;
  v40 = v23;
  v89.fields.x = v34;
  v89.fields.y = v36;
  v89.fields.z = v38;
  UnityEngine_Vector3__Distance(*(UnityEngine_Vector3_o *)&v33, v89, 0LL);
  v84.fields.x = v34 - v21;
  v84.fields.y = v36 - v22;
  v84.fields.z = v38 - v23;
  *(float *)&v79 = v34 - v21;
  *((float *)&v79 + 1) = v36 - v22;
  v80 = v38 - v23;
  *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_normalized(v84, (const MethodInfo *)&v79);
  v82 = v44;
  v83 = v43;
  v45 = v3->fields._LineModel_k__BackingField;
  if ( !v45 )
    goto LABEL_61;
  v46 = v45->klass;
  v47 = v42;
  if ( *(_WORD *)&v45->klass->_2.bitflags1 )
  {
    v48 = 0LL;
    v49 = &v46->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v49 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v48;
      v49 += 4;
      if ( v48 >= *(unsigned __int16 *)&v45->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v50 = (__int64)&v46->vtable[*v49].method;
  }
  else
  {
LABEL_36:
    v50 = sub_AEB880(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v41);
  }
  v51 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v50)(
                                      v45,
                                      *(_QWORD *)(v50 + 8));
  SquareTypeOffset = ClassBoardLine__GetSquareTypeOffset(v3, v51, v52);
  v55 = v3->fields._LineModel_k__BackingField;
  if ( !v55 )
    goto LABEL_61;
  v56 = v55->klass;
  v57 = SquareTypeOffset * 0.5;
  v58 = v47;
  v59 = v21 - (float)(v47 * v57);
  v60 = v22 - (float)(v83 * v57);
  v61 = v23 - (float)(v82 * v57);
  if ( *(_WORD *)&v55->klass->_2.bitflags1 )
  {
    v62 = 0LL;
    v63 = (IClassBoardLineModel_c **)&v56->_1.interfaceOffsets->offset;
    while ( *(v63 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v62;
      v63 += 2;
      if ( v62 >= *(unsigned __int16 *)&v55->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v64 = (__int64)&v56->vtable[*(_DWORD *)v63 + 1].method;
  }
  else
  {
LABEL_43:
    v64 = sub_AEB880(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v53);
  }
  v65 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v64)(
                                      v55,
                                      *(_QWORD *)(v64 + 8));
  v67 = ClassBoardLine__GetSquareTypeOffset(v3, v65, v66) * 0.5;
  v85.fields.y = (float)(v34 + (float)(v58 * v67)) - v59;
  v85.fields.z = (float)(v36 + (float)(v83 * v67)) - v60;
  v85.fields.x = (float)(v38 + (float)(v82 * v67)) - v61;
  methoda.methodPointer = *(Il2CppMethodPointer *)&v85.fields.y;
  *(float *)&methoda.invoker_method = v85.fields.x;
  magnitude = UnityEngine_Vector3__get_magnitude(v85, &methoda);
  v3->fields.lineLength = magnitude;
  this = (ClassBoardLine_o *)ClassBoardLine__GetConnectType(v3, v69);
  if ( !v3->fields.notConnectedSprite )
    goto LABEL_61;
  v70 = (int)this;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)v3->fields.notConnectedSprite,
                               0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        p_connectedSprite = (UnityEngine_Component_o **)&v3->fields.connectedSprite,
        (this = (ClassBoardLine_o *)v3->fields.connectedSprite) == 0LL)
    || (this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (ClassBoardLine_o *)v3->fields.connectedOnSprite) == 0LL)
    || (this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_61:
    sub_B52A5C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !v70 )
    goto LABEL_54;
  if ( v70 == 2 )
  {
    p_connectedSprite = (UnityEngine_Component_o **)&v3->fields.connectedOnSprite;
    goto LABEL_56;
  }
  if ( v70 != 1 )
LABEL_54:
    p_connectedSprite = (UnityEngine_Component_o **)&v3->fields.notConnectedSprite;
LABEL_56:
  v72 = *p_connectedSprite;
  if ( !*p_connectedSprite )
    goto LABEL_61;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(*p_connectedSprite, 0LL);
  if ( !this )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v73 = UnityEngine_Mathf__CeilToInt(magnitude, 0LL);
  UIWidget__set_width((UIWidget_o *)v72, v73, 0LL);
  v74 = atan2f(*((float *)&methoda.methodPointer + 1), *(float *)&methoda.methodPointer);
  this = (ClassBoardLine_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
  if ( !this )
    goto LABEL_61;
  v86.fields.y = 0.0;
  v86.fields.z = v74 * 57.296;
  v86.fields.x = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v86, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
  *(UnityEngine_Vector3_o *)&v76 = UnityEngine_Vector3__get_normalized(v87, &methoda);
  if ( !transform )
    goto LABEL_61;
  v88.fields.x = v59 + (float)((float)(magnitude * 0.5) * v76);
  v88.fields.y = v60 + (float)((float)(magnitude * 0.5) * v77);
  v88.fields.z = v61 + (float)((float)(magnitude * 0.5) * v78);
  UnityEngine_Transform__set_localPosition(transform, v88, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardLine__WaitAnimationFinished(
        ClassBoardLine_o *this,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42B386A & 1) == 0 )
  {
    sub_B52984(&ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo);
    byte_42B386A = 1;
  }
  v7 = sub_B52A54(ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo);
  ClassBoardLine__WaitAnimationFinished_d__37___ctor((ClassBoardLine__WaitAnimationFinished_d__37_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = name;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)name, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)(v7 + 48),
    (System_Int32_array **)endCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__33_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_B52A5C(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__33_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_B52A5C(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__33_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_B52A5C(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__33_3(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_B52A5C(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B52A5C(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B52A5C(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B52A5C(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


IClassBoardLineModel_o *__fastcall ClassBoardLine__get_LineModel(ClassBoardLine_o *this, const MethodInfo *method)
{
  return this->fields._LineModel_k__BackingField;
}


ClassBoardEffectPlayer_o *__fastcall ClassBoardLine__get_ReleaseEffectPlayer(
        ClassBoardLine_o *this,
        const MethodInfo *method)
{
  return this->fields.releaseEffectPlayer;
}


void __fastcall ClassBoardLine__set_LineModel(
        ClassBoardLine_o *this,
        IClassBoardLineModel_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._LineModel_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._LineModel_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardLine__WaitAnimationFinished_d__37___ctor(
        ClassBoardLine__WaitAnimationFinished_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardLine__WaitAnimationFinished_d__37__MoveNext(
        ClassBoardLine__WaitAnimationFinished_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  ClassBoardLine__WaitAnimationFinished_d__37_o *v3; // x19
  int32_t _1__state; // w8
  struct ClassBoardLine_o *_4__this; // x8
  struct SimpleAnimation_State_o **p_state_5__2; // x20
  struct SimpleAnimation_State_o *v7; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v9; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x3
  struct SimpleAnimation_State_o *v13; // x20
  SimpleAnimation_State_c *v14; // x8
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **v16; // x11
  __int64 v17; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  v3 = this;
  if ( (byte_42AD6CA & 1) == 0 )
  {
    this = (ClassBoardLine__WaitAnimationFinished_d__37_o *)sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42AD6CA = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    p_state_5__2 = &v3->fields._state_5__2;
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    this = (ClassBoardLine__WaitAnimationFinished_d__37_o *)_4__this->fields.simpleAnimation;
    if ( !this )
      goto LABEL_28;
    p_state_5__2 = &v3->fields._state_5__2;
    v3->fields._state_5__2 = SimpleAnimation__GetState((SimpleAnimation_o *)this, v3->fields.name, 0LL);
    sub_B52920(&v3->fields._state_5__2);
  }
  v7 = *p_state_5__2;
  if ( !*p_state_5__2 )
    goto LABEL_25;
  klass = v7->klass;
  if ( *(_WORD *)&v7->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v9;
      p_offset += 2;
      if ( v9 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_14:
    p_method = sub_AEB880(*p_state_5__2, SimpleAnimation_State_TypeInfo, 13LL, v2);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(v7, *(_QWORD *)(p_method + 8)) <= 0.0 )
    goto LABEL_25;
  v13 = *p_state_5__2;
  if ( !v13 )
LABEL_28:
    sub_B52A5C(this, method);
  v14 = v13->klass;
  if ( *(_WORD *)&v13->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    v16 = (SimpleAnimation_State_c **)&v14->_1.interfaceOffsets->offset;
    while ( *(v16 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      v16 += 2;
      if ( v15 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 5].method;
  }
  else
  {
LABEL_22:
    v17 = sub_AEB880(v13, SimpleAnimation_State_TypeInfo, 5LL, v12);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) >= 1.0 )
  {
LABEL_25:
    ActionExtensions__Call(v3->fields.endCallback, 0LL);
    return 0;
  }
  v3->fields.__2__current = 0LL;
  p__2__current = &v3->fields.__2__current;
  sub_B52920(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall ClassBoardLine__WaitAnimationFinished_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardLine__WaitAnimationFinished_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardLine__WaitAnimationFinished_d__37__System_Collections_IEnumerator_Reset(
        ClassBoardLine__WaitAnimationFinished_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_ClassBoardLine__WaitAnimationFinished_d__37_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall ClassBoardLine__WaitAnimationFinished_d__37__System_Collections_IEnumerator_get_Current(
        ClassBoardLine__WaitAnimationFinished_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardLine__WaitAnimationFinished_d__37__System_IDisposable_Dispose(
        ClassBoardLine__WaitAnimationFinished_d__37_o *this,
        const MethodInfo *method)
{
  ;
}