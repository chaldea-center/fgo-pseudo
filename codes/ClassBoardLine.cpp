void __fastcall ClassBoardLine___ctor(ClassBoardLine_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Int32_array **v15; // x1
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_40FB96A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2860, method);
    sub_B16FFC(&StringLiteral_2857, v9);
    sub_B16FFC(&StringLiteral_2861, v10);
    sub_B16FFC(&StringLiteral_2862, v11);
    sub_B16FFC(&StringLiteral_2858, v12);
    sub_B16FFC(&StringLiteral_2859, v13);
    sub_B16FFC(&StringLiteral_2813, v14);
    byte_40FB96A = 1;
  }
  v15 = (System_Int32_array **)StringLiteral_2857;
  this->fields.animNameBrightTurn = (struct System_String_o *)StringLiteral_2857;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.animNameBrightTurn, v15, v2, v3, v4, v5, v6, v7);
  v16 = (System_Int32_array **)StringLiteral_2858;
  this->fields.animNameBrightTurnRoadOn = (struct System_String_o *)StringLiteral_2858;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.animNameBrightTurnRoadOn, v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_2862;
  this->fields.animNameBrightTurnUnlock = (struct System_String_o *)StringLiteral_2862;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.animNameBrightTurnUnlock, v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_Int32_array **)StringLiteral_2859;
  this->fields.animNameBrightTurnRoadOnUnlock = (struct System_String_o *)StringLiteral_2859;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnRoadOnUnlock,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Int32_array **)StringLiteral_2860;
  this->fields.animNameBrightTurnTransition = (struct System_String_o *)StringLiteral_2860;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnTransition,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (System_Int32_array **)StringLiteral_2861;
  this->fields.animNameBrightTurnTransitionRoadOn = (struct System_String_o *)StringLiteral_2861;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnTransitionRoadOn,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (System_Int32_array **)StringLiteral_2813;
  this->fields.animNameBlackOutTransition = (struct System_String_o *)StringLiteral_2813;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.animNameBlackOutTransition,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x20
  unsigned __int64 v20; // x10
  IClassBoardSquareModel_c **v21; // x11
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct IClassBoardLineModel_o *v27; // x20
  IClassBoardLineModel_c *v28; // x8
  unsigned __int64 v29; // x10
  IClassBoardLineModel_c **v30; // x11
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x20
  unsigned __int64 v35; // x10
  IClassBoardSquareModel_c **v36; // x11
  __int64 v37; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  struct IClassBoardLineModel_o *v39; // x20
  IClassBoardLineModel_c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  struct IClassBoardLineModel_o *v44; // x20
  IClassBoardLineModel_c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x20
  unsigned __int64 v52; // x10
  IClassBoardSquareModel_c **v53; // x11
  __int64 v54; // x0
  struct IClassBoardLineModel_o *v55; // x20
  IClassBoardLineModel_c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x8
  __int64 v62; // x20
  unsigned __int64 v63; // x10
  IClassBoardSquareModel_c **v64; // x11
  __int64 v65; // x0
  struct IClassBoardLineModel_o *v66; // x20
  IClassBoardLineModel_c *v67; // x8
  unsigned __int64 v68; // x10
  IClassBoardLineModel_c **v69; // x11
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x8
  __int64 v73; // x20
  unsigned __int64 v74; // x10
  IClassBoardSquareModel_c **v75; // x11
  __int64 v76; // x0
  struct IClassBoardLineModel_o *v77; // x19
  IClassBoardLineModel_c *v78; // x8
  unsigned __int64 v79; // x10
  IClassBoardLineModel_c **v80; // x11
  __int64 v81; // x0
  __int64 v82; // x0
  __int64 v83; // x8
  __int64 v84; // x19
  unsigned __int64 v85; // x10
  IClassBoardSquareModel_c **v86; // x11
  __int64 v87; // x0
  int32_t size; // w20
  int32_t v89; // w22
  Il2CppObject *current; // x19
  Il2CppClass *v91; // x8
  unsigned __int64 v92; // x10
  int32_t *v93; // x11
  __int64 v94; // x0
  Il2CppClass *v95; // x8
  unsigned __int64 v96; // x10
  IClassBoardSquareModel_c **v97; // x11
  __int64 v98; // x0
  System_Enum_o *v99; // x19
  System_Enum_o *v100; // x1
  __int64 v102; // x0
  __int64 v103; // x8
  __int64 v104; // x20
  unsigned __int64 v105; // x10
  IClassBoardSquareModel_c **v106; // x11
  __int64 v107; // x0
  System_Enum_o *v108; // x20
  System_Enum_o *v109; // x0
  struct IClassBoardLineModel_o *v110; // x20
  IClassBoardLineModel_c *v111; // x8
  unsigned __int64 v112; // x10
  IClassBoardLineModel_c **v113; // x11
  __int64 v114; // x0
  __int64 v115; // x0
  __int64 v116; // x8
  __int64 v117; // x20
  unsigned __int64 v118; // x10
  IClassBoardSquareModel_c **v119; // x11
  __int64 v120; // x0
  System_Enum_o *v121; // x20
  System_Enum_o *v122; // x0
  struct IClassBoardLineModel_o *v123; // x20
  IClassBoardLineModel_c *v124; // x8
  unsigned __int64 v125; // x10
  int32_t *v126; // x11
  __int64 v127; // x0
  __int64 v128; // x0
  __int64 v129; // x8
  __int64 v130; // x20
  unsigned __int64 v131; // x10
  IClassBoardSquareModel_c **v132; // x11
  __int64 v133; // x0
  System_Enum_o *v134; // x20
  System_Enum_o *v135; // x0
  struct IClassBoardLineModel_o *v136; // x19
  IClassBoardLineModel_c *v137; // x8
  unsigned __int64 v138; // x10
  IClassBoardLineModel_c **v139; // x11
  __int64 v140; // x0
  __int64 v141; // x0
  __int64 v142; // x8
  __int64 v143; // x19
  unsigned __int64 v144; // x10
  IClassBoardSquareModel_c **v145; // x11
  __int64 v146; // x0
  System_Enum_o *v147; // x19
  System_Enum_o *v148; // x0
  System_Collections_Generic_List_Enumerator_T__o v149; // [xsp+0h] [xbp-80h] BYREF
  int v150; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v151; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v152; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_40FB967 & 1) == 0 )
  {
    sub_B16FFC(&AcquireFlag_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v5);
    sub_B16FFC(&IClassBoardLineModel_TypeInfo, v6);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v10);
    sub_B16FFC(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v11);
    byte_40FB967 = 1;
  }
  v152 = 0LL;
  memset(&v151, 0, sizeof(v151));
  LineModel_k__BackingField = this->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_187;
  klass = LineModel_k__BackingField->klass;
  if ( *(_WORD *)&LineModel_k__BackingField->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&LineModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(this->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
          LineModel_k__BackingField,
          *(_QWORD *)(p_method + 8));
  if ( !v17 )
    goto LABEL_187;
  v18 = *(_QWORD *)v17;
  v19 = v17;
  if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
  {
    v20 = 0LL;
    v21 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v18 + 176) + 8LL);
    while ( *(v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v20;
      v21 += 2;
      if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
        goto LABEL_15;
    }
    v22 = v18 + 16LL * (*(_DWORD *)v21 + 5) + 312;
  }
  else
  {
LABEL_15:
    v22 = sub_AAFEF8(v17, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8)) & 1) == 0 )
  {
    v27 = this->fields._LineModel_k__BackingField;
    if ( !v27 )
      goto LABEL_187;
    v28 = v27->klass;
    if ( *(_WORD *)&v27->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      v30 = (IClassBoardLineModel_c **)&v28->_1.interfaceOffsets->offset;
      while ( *(v30 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v29;
        v30 += 2;
        if ( v29 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      v31 = (__int64)&v28->vtable[*(_DWORD *)v30 + 1].method;
    }
    else
    {
LABEL_23:
      v31 = sub_AAFEF8(this->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
    }
    v32 = (*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8));
    if ( !v32 )
      goto LABEL_187;
    v33 = *(_QWORD *)v32;
    v34 = v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v35 = 0LL;
      v36 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *(v36 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v35;
        v36 += 2;
        if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_30;
      }
      v37 = v33 + 16LL * (*(_DWORD *)v36 + 5) + 312;
    }
    else
    {
LABEL_30:
      v37 = sub_AAFEF8(v32, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8)) & 1) == 0 )
    {
      v44 = this->fields._LineModel_k__BackingField;
      if ( v44 )
      {
        v45 = v44->klass;
        if ( *(_WORD *)&v44->klass->_2.bitflags1 )
        {
          v46 = 0LL;
          v47 = &v45->_1.interfaceOffsets->offset;
          while ( *((IClassBoardLineModel_c **)v47 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v46;
            v47 += 4;
            if ( v46 >= *(unsigned __int16 *)&v44->klass->_2.bitflags1 )
              goto LABEL_44;
          }
          v48 = (__int64)&v45->vtable[*v47].method;
        }
        else
        {
LABEL_44:
          v48 = sub_AAFEF8(this->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
        }
        v102 = (*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8));
        if ( v102 )
        {
          v103 = *(_QWORD *)v102;
          v104 = v102;
          if ( *(_WORD *)(*(_QWORD *)v102 + 298LL) )
          {
            v105 = 0LL;
            v106 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v103 + 176) + 8LL);
            while ( *(v106 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v105;
              v106 += 2;
              if ( v105 >= *(unsigned __int16 *)(*(_QWORD *)v102 + 298LL) )
                goto LABEL_130;
            }
            v107 = v103 + 16LL * (*(_DWORD *)v106 + 13) + 312;
          }
          else
          {
LABEL_130:
            v107 = sub_AAFEF8(v102, IClassBoardSquareModel_TypeInfo, 13LL);
          }
          LODWORD(v149.fields.list) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v107)(
                                        v104,
                                        0LL,
                                        *(_QWORD *)(v107 + 8));
          v108 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v149);
          v150 = 1;
          v109 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v150);
          if ( v108 )
          {
            if ( System_Enum__HasFlag(v108, v109, 0LL) )
            {
              v110 = this->fields._LineModel_k__BackingField;
              if ( !v110 )
                goto LABEL_187;
              v111 = v110->klass;
              if ( *(_WORD *)&v110->klass->_2.bitflags1 )
              {
                v112 = 0LL;
                v113 = (IClassBoardLineModel_c **)&v111->_1.interfaceOffsets->offset;
                while ( *(v113 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  ++v112;
                  v113 += 2;
                  if ( v112 >= *(unsigned __int16 *)&v110->klass->_2.bitflags1 )
                    goto LABEL_139;
                }
                v114 = (__int64)&v111->vtable[*(_DWORD *)v113 + 1].method;
              }
              else
              {
LABEL_139:
                v114 = sub_AAFEF8(this->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
              }
              v115 = (*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v114)(
                       v110,
                       *(_QWORD *)(v114 + 8));
              if ( !v115 )
                goto LABEL_187;
              v116 = *(_QWORD *)v115;
              v117 = v115;
              if ( *(_WORD *)(*(_QWORD *)v115 + 298LL) )
              {
                v118 = 0LL;
                v119 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v116 + 176) + 8LL);
                while ( *(v119 - 1) != IClassBoardSquareModel_TypeInfo )
                {
                  ++v118;
                  v119 += 2;
                  if ( v118 >= *(unsigned __int16 *)(*(_QWORD *)v115 + 298LL) )
                    goto LABEL_146;
                }
                v120 = v116 + 16LL * (*(_DWORD *)v119 + 13) + 312;
              }
              else
              {
LABEL_146:
                v120 = sub_AAFEF8(v115, IClassBoardSquareModel_TypeInfo, 13LL);
              }
              LODWORD(v149.fields.list) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v120)(
                                            v117,
                                            0LL,
                                            *(_QWORD *)(v120 + 8));
              v121 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v149);
              v150 = 1;
              v122 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v150);
              if ( !v121 )
                goto LABEL_187;
              if ( System_Enum__HasFlag(v121, v122, 0LL) )
                return 2;
            }
            v123 = this->fields._LineModel_k__BackingField;
            if ( v123 )
            {
              v124 = v123->klass;
              if ( *(_WORD *)&v123->klass->_2.bitflags1 )
              {
                v125 = 0LL;
                v126 = &v124->_1.interfaceOffsets->offset;
                while ( *((IClassBoardLineModel_c **)v126 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  ++v125;
                  v126 += 4;
                  if ( v125 >= *(unsigned __int16 *)&v123->klass->_2.bitflags1 )
                    goto LABEL_156;
                }
                v127 = (__int64)&v124->vtable[*v126].method;
              }
              else
              {
LABEL_156:
                v127 = sub_AAFEF8(this->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
              }
              v128 = (*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v127)(
                       v123,
                       *(_QWORD *)(v127 + 8));
              if ( v128 )
              {
                v129 = *(_QWORD *)v128;
                v130 = v128;
                if ( *(_WORD *)(*(_QWORD *)v128 + 298LL) )
                {
                  v131 = 0LL;
                  v132 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v129 + 176) + 8LL);
                  while ( *(v132 - 1) != IClassBoardSquareModel_TypeInfo )
                  {
                    ++v131;
                    v132 += 2;
                    if ( v131 >= *(unsigned __int16 *)(*(_QWORD *)v128 + 298LL) )
                      goto LABEL_163;
                  }
                  v133 = v129 + 16LL * (*(_DWORD *)v132 + 13) + 312;
                }
                else
                {
LABEL_163:
                  v133 = sub_AAFEF8(v128, IClassBoardSquareModel_TypeInfo, 13LL);
                }
                LODWORD(v149.fields.list) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v133)(
                                              v130,
                                              0LL,
                                              *(_QWORD *)(v133 + 8));
                v134 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v149);
                v150 = 1;
                v135 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v150);
                if ( v134 )
                {
                  if ( System_Enum__HasFlag(v134, v135, 0LL) )
                    return 1;
                  v136 = this->fields._LineModel_k__BackingField;
                  if ( v136 )
                  {
                    v137 = v136->klass;
                    if ( *(_WORD *)&v136->klass->_2.bitflags1 )
                    {
                      v138 = 0LL;
                      v139 = (IClassBoardLineModel_c **)&v137->_1.interfaceOffsets->offset;
                      while ( *(v139 - 1) != IClassBoardLineModel_TypeInfo )
                      {
                        ++v138;
                        v139 += 2;
                        if ( v138 >= *(unsigned __int16 *)&v136->klass->_2.bitflags1 )
                          goto LABEL_173;
                      }
                      v140 = (__int64)&v137->vtable[*(_DWORD *)v139 + 1].method;
                    }
                    else
                    {
LABEL_173:
                      v140 = sub_AAFEF8(v136, IClassBoardLineModel_TypeInfo, 1LL);
                    }
                    v141 = (*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v140)(
                             v136,
                             *(_QWORD *)(v140 + 8));
                    if ( v141 )
                    {
                      v142 = *(_QWORD *)v141;
                      v143 = v141;
                      if ( *(_WORD *)(*(_QWORD *)v141 + 298LL) )
                      {
                        v144 = 0LL;
                        v145 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v142 + 176) + 8LL);
                        while ( *(v145 - 1) != IClassBoardSquareModel_TypeInfo )
                        {
                          ++v144;
                          v145 += 2;
                          if ( v144 >= *(unsigned __int16 *)(*(_QWORD *)v141 + 298LL) )
                            goto LABEL_180;
                        }
                        v146 = v142 + 16LL * (*(_DWORD *)v145 + 13) + 312;
                      }
                      else
                      {
LABEL_180:
                        v146 = sub_AAFEF8(v141, IClassBoardSquareModel_TypeInfo, 13LL);
                      }
                      LODWORD(v149.fields.list) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v146)(
                                                    v143,
                                                    0LL,
                                                    *(_QWORD *)(v146 + 8));
                      v147 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v149);
                      v150 = 1;
                      v148 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v150);
                      if ( v147 )
                        return System_Enum__HasFlag(v147, v148, 0LL);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_187:
      sub_B170D4();
    }
  }
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v152 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v38;
  v39 = this->fields._LineModel_k__BackingField;
  if ( !v39 )
    goto LABEL_187;
  v40 = v39->klass;
  if ( *(_WORD *)&v39->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v42 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)&v39->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_38:
    v43 = sub_AAFEF8(this->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  v49 = (*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
  if ( !v49 )
    goto LABEL_187;
  v50 = *(_QWORD *)v49;
  v51 = v49;
  if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
  {
    v52 = 0LL;
    v53 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *(v53 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v52;
      v53 += 2;
      if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
        goto LABEL_51;
    }
    v54 = v50 + 16LL * (*(_DWORD *)v53 + 5) + 312;
  }
  else
  {
LABEL_51:
    v54 = sub_AAFEF8(v49, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v51, *(_QWORD *)(v54 + 8)) & 1) != 0 )
  {
    v55 = this->fields._LineModel_k__BackingField;
    if ( !v55 )
      goto LABEL_187;
    v56 = v55->klass;
    if ( *(_WORD *)&v55->klass->_2.bitflags1 )
    {
      v57 = 0LL;
      v58 = &v56->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v58 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v57;
        v58 += 4;
        if ( v57 >= *(unsigned __int16 *)&v55->klass->_2.bitflags1 )
          goto LABEL_59;
      }
      v59 = (__int64)&v56->vtable[*v58].method;
    }
    else
    {
LABEL_59:
      v59 = sub_AAFEF8(this->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
    }
    v60 = (*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8));
    if ( !v60 )
      goto LABEL_187;
    v61 = *(_QWORD *)v60;
    v62 = v60;
    if ( *(_WORD *)(*(_QWORD *)v60 + 298LL) )
    {
      v63 = 0LL;
      v64 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v61 + 176) + 8LL);
      while ( *(v64 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v63;
        v64 += 2;
        if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)v60 + 298LL) )
          goto LABEL_66;
      }
      v65 = v61 + 16LL * (*(_DWORD *)v64 + 15) + 312;
    }
    else
    {
LABEL_66:
      v65 = sub_AAFEF8(v60, IClassBoardSquareModel_TypeInfo, 15LL);
    }
    (*(void (__fastcall **)(__int64, System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **, _QWORD))v65)(
      v62,
      &v152,
      *(_QWORD *)(v65 + 8));
  }
  v66 = this->fields._LineModel_k__BackingField;
  if ( !v66 )
    goto LABEL_187;
  v67 = v66->klass;
  if ( *(_WORD *)&v66->klass->_2.bitflags1 )
  {
    v68 = 0LL;
    v69 = (IClassBoardLineModel_c **)&v67->_1.interfaceOffsets->offset;
    while ( *(v69 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v68;
      v69 += 2;
      if ( v68 >= *(unsigned __int16 *)&v66->klass->_2.bitflags1 )
        goto LABEL_74;
    }
    v70 = (__int64)&v67->vtable[*(_DWORD *)v69 + 1].method;
  }
  else
  {
LABEL_74:
    v70 = sub_AAFEF8(this->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  v71 = (*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v70)(v66, *(_QWORD *)(v70 + 8));
  if ( !v71 )
    goto LABEL_187;
  v72 = *(_QWORD *)v71;
  v73 = v71;
  if ( *(_WORD *)(*(_QWORD *)v71 + 298LL) )
  {
    v74 = 0LL;
    v75 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v72 + 176) + 8LL);
    while ( *(v75 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v74;
      v75 += 2;
      if ( v74 >= *(unsigned __int16 *)(*(_QWORD *)v71 + 298LL) )
        goto LABEL_81;
    }
    v76 = v72 + 16LL * (*(_DWORD *)v75 + 5) + 312;
  }
  else
  {
LABEL_81:
    v76 = sub_AAFEF8(v71, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v73, *(_QWORD *)(v76 + 8)) & 1) != 0 )
  {
    v77 = this->fields._LineModel_k__BackingField;
    if ( v77 )
    {
      v78 = v77->klass;
      if ( *(_WORD *)&v77->klass->_2.bitflags1 )
      {
        v79 = 0LL;
        v80 = (IClassBoardLineModel_c **)&v78->_1.interfaceOffsets->offset;
        while ( *(v80 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v79;
          v80 += 2;
          if ( v79 >= *(unsigned __int16 *)&v77->klass->_2.bitflags1 )
            goto LABEL_89;
        }
        v81 = (__int64)&v78->vtable[*(_DWORD *)v80 + 1].method;
      }
      else
      {
LABEL_89:
        v81 = sub_AAFEF8(v77, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v82 = (*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v81)(v77, *(_QWORD *)(v81 + 8));
      if ( v82 )
      {
        v83 = *(_QWORD *)v82;
        v84 = v82;
        if ( *(_WORD *)(*(_QWORD *)v82 + 298LL) )
        {
          v85 = 0LL;
          v86 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v83 + 176) + 8LL);
          while ( *(v86 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v85;
            v86 += 2;
            if ( v85 >= *(unsigned __int16 *)(*(_QWORD *)v82 + 298LL) )
              goto LABEL_96;
          }
          v87 = v83 + 16LL * (*(_DWORD *)v86 + 15) + 312;
        }
        else
        {
LABEL_96:
          v87 = sub_AAFEF8(v82, IClassBoardSquareModel_TypeInfo, 15LL);
        }
        (*(void (__fastcall **)(__int64, System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **, _QWORD))v87)(
          v84,
          &v152,
          *(_QWORD *)(v87 + 8));
        goto LABEL_99;
      }
    }
    goto LABEL_187;
  }
LABEL_99:
  if ( !v152 )
    goto LABEL_187;
  size = v152->fields._size;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v149,
    v152,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v89 = 0;
  v151 = v149;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v151,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__) )
  {
    current = v151.fields.current;
    if ( !v151.fields.current )
      sub_B170D4();
    v91 = v151.fields.current->klass;
    if ( *(_WORD *)&v151.fields.current->klass->_2.bitflags1 )
    {
      v92 = 0LL;
      v93 = &v91->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v93 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v92;
        v93 += 4;
        if ( v92 >= *(unsigned __int16 *)&v151.fields.current->klass->_2.bitflags1 )
          goto LABEL_106;
      }
      v94 = (__int64)&v91->vtable[*v93 + 5].method;
    }
    else
    {
LABEL_106:
      v94 = sub_AAFEF8(v151.fields.current, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v94)(current, *(_QWORD *)(v94 + 8)) & 1) != 0 )
    {
      --size;
    }
    else
    {
      v95 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v96 = 0LL;
        v97 = (IClassBoardSquareModel_c **)&v95->_1.interfaceOffsets->offset;
        while ( *(v97 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v96;
          v97 += 2;
          if ( v96 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_113;
        }
        v98 = (__int64)&v95->vtable[*(_DWORD *)v97 + 13].method;
      }
      else
      {
LABEL_113:
        v98 = sub_AAFEF8(current, IClassBoardSquareModel_TypeInfo, 13LL);
      }
      LODWORD(v149.fields.list) = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v98)(
                                    current,
                                    0LL,
                                    *(_QWORD *)(v98 + 8));
      v99 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v149);
      v150 = 1;
      v100 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v150);
      if ( !v99 )
        sub_B170D4();
      v89 += System_Enum__HasFlag(v99, v100, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v151,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  if ( !v89 )
    return 0;
  if ( v89 < size )
    return 1;
  return 2;
}


float __fastcall ClassBoardLine__GetSquareTypeOffset(
        ClassBoardLine_o *this,
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  __int64 v5; // x1
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  float *p_blankOffsetLength; // x8

  if ( (byte_40FB968 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardLockModel_TypeInfo, squareModel);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v5);
    byte_40FB968 = 1;
  }
  if ( !squareModel )
    sub_B170D4();
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
    p_method = sub_AAFEF8(squareModel, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    p_blankOffsetLength = &this->fields.blankOffsetLength;
  }
  else if ( sub_B170BC(squareModel, IClassBoardLockModel_TypeInfo) )
  {
    p_blankOffsetLength = &this->fields.lockOffsetLength;
  }
  else
  {
    p_blankOffsetLength = &this->fields.squareOffsetLength;
  }
  return *p_blankOffsetLength;
}


void __fastcall ClassBoardLine__PlayReleaseEffect(ClassBoardLine_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t ConnectType; // w0
  const MethodInfo *v9; // x1
  ClassBoardEffectPlayer_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_String_o *animNameBrightTurnRoadOnUnlock; // x20
  System_Action_o *v16; // x0
  __int64 *v17; // x8
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  ClassBoardEffectPlayer_o *v23; // x0
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x3

  if ( (byte_40FB966 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardEffectPlayer_GetData_bool___, v3);
    sub_B16FFC(&Method_ClassBoardLine__PlayReleaseEffect_b__33_0__, v4);
    sub_B16FFC(&Method_ClassBoardLine__PlayReleaseEffect_b__33_1__, v5);
    sub_B16FFC(&Method_ClassBoardLine__PlayReleaseEffect_b__33_2__, v6);
    sub_B16FFC(&Method_ClassBoardLine__PlayReleaseEffect_b__33_3__, v7);
    byte_40FB966 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      if ( ClassBoardEffectPlayer__GetData_bool_(
             releaseEffectPlayer,
             (const MethodInfo_18BBF40 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOnUnlock;
        v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
        v17 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_2__;
      }
      else
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOn;
        v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
        v17 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_3__;
      }
      goto LABEL_15;
    }
LABEL_16:
    sub_B170D4();
  }
  if ( ConnectType != 1 )
  {
    v23 = this->fields.releaseEffectPlayer;
    if ( v23 )
    {
      ClassBoardEffectPlayer__End(v23, v9);
      return;
    }
    goto LABEL_16;
  }
  v10 = this->fields.releaseEffectPlayer;
  if ( !v10 )
    goto LABEL_16;
  if ( ClassBoardEffectPlayer__GetData_bool_(
         v10,
         (const MethodInfo_18BBF40 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnUnlock;
    v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
    v17 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_0__;
  }
  else
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurn;
    v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
    v17 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_1__;
  }
LABEL_15:
  v24 = v16;
  System_Action___ctor(v16, (Il2CppObject *)this, *v17, 0LL);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnRoadOnUnlock, v24, v25);
}


void __fastcall ClassBoardLine__PlaySimpleAnimation(
        ClassBoardLine_o *this,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  SimpleAnimation_o *v8; // x0
  const MethodInfo *v9; // x3
  System_Collections_IEnumerator_o *v10; // x1

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation || (SimpleAnimation__Rewind(simpleAnimation, 0LL), (v8 = this->fields.simpleAnimation) == 0LL) )
    sub_B170D4();
  SimpleAnimation__Play_16380456(v8, name, 0LL);
  v10 = ClassBoardLine__WaitAnimationFinished(this, name, endCallback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall ClassBoardLine__PlayTransition(ClassBoardLine_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t ConnectType; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_String_o *animNameBrightTurnTransitionRoadOn; // x20
  System_Action_o *v12; // x0
  __int64 *v13; // x8
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x3

  if ( (byte_40FB964 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardLine__PlayTransition_b__28_0__, v3);
    sub_B16FFC(&Method_ClassBoardLine__PlayTransition_b__28_1__, v4);
    sub_B16FFC(&Method_ClassBoardLine__PlayTransition_b__28_2__, v5);
    byte_40FB964 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransitionRoadOn;
    v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    v13 = &Method_ClassBoardLine__PlayTransition_b__28_1__;
  }
  else if ( ConnectType == 1 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransition;
    v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    v13 = &Method_ClassBoardLine__PlayTransition_b__28_0__;
  }
  else
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBlackOutTransition;
    v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    v13 = &Method_ClassBoardLine__PlayTransition_b__28_2__;
  }
  v14 = v12;
  System_Action___ctor(v12, (Il2CppObject *)this, *v13, 0LL);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnTransitionRoadOn, v14, v15);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v17; // x2
  __int64 v18; // x0
  System_String_array *v19; // x21
  System_String_o *name; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x23
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x23
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x23
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  IClassBoardLineModel_c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x22
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x22
  System_String_o *v71; // x0
  const MethodInfo *v72; // x1
  UnityEngine_Object_o *v73; // x0
  System_Int32_array **v74; // x20
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  __int64 v79; // x21
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  System_Action_o *v97; // x21
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  struct UnityEngine_GameObject_array *effectObjects; // x22
  int max_length; // w8
  int v106; // w9
  Il2CppClass **v107; // x8
  UnityEngine_GameObject_o *v108; // x21
  UnityEngine_Transform_o *transform; // x0
  float lineLength; // s8
  UnityEngine_Transform_o *v111; // x20
  UnityEngine_Transform_o *v112; // x0
  float y; // s9
  UnityEngine_Transform_o *v114; // x0
  int v115; // s2
  float v116; // s0
  float v117; // s1
  int v118; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB963 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, setLineModel);
    sub_B16FFC(&ClassBoardEffectPlayer_TypeInfo, v10);
    sub_B16FFC(&Method_ClassBoardLine_PlayReleaseEffect__, v11);
    sub_B16FFC(&IClassBoardLineModel_TypeInfo, v12);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v13);
    sub_B16FFC(&string___TypeInfo, v14);
    sub_B16FFC(&StringLiteral_15842, v15);
    byte_40FB963 = 1;
  }
  v118 = 0;
  this->fields._LineModel_k__BackingField = setLineModel;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._LineModel_k__BackingField,
    (System_Int32_array **)setLineModel,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18 = sub_B17014(string___TypeInfo, 5LL, v17);
  if ( !gameObject )
    goto LABEL_63;
  v19 = (System_String_array *)v18;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  if ( !v19 )
    goto LABEL_63;
  v28 = (System_Int32_array **)name;
  if ( name )
  {
    name = (System_String_o *)sub_B170BC(name, v19->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
  }
  if ( !v19->max_length )
    goto LABEL_64;
  v19->m_Items[0] = (System_String_o *)v28;
  sub_B16F98((BattleServantConfConponent_o *)v19->m_Items, v28, v22, v23, v24, v25, v26, v27);
  name = (System_String_o *)StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    name = (System_String_o *)sub_B170BC(StringLiteral_15842, v19->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
    v21 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_64;
  v19->m_Items[1] = (System_String_o *)v21;
  sub_B16F98((BattleServantConfConponent_o *)&v19->m_Items[1], v21, v22, v29, v30, v31, v32, v33);
  if ( !setLineModel )
    goto LABEL_63;
  klass = setLineModel->klass;
  if ( *(_WORD *)&setLineModel->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v35;
      p_offset += 4;
      if ( v35 >= *(unsigned __int16 *)&setLineModel->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_18:
    p_method = sub_AAFEF8(setLineModel, IClassBoardLineModel_TypeInfo, 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))p_method)(setLineModel, *(_QWORD *)(p_method + 8));
  if ( !v38 )
    goto LABEL_63;
  v39 = *(_QWORD *)v38;
  v40 = v38;
  if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
  {
    v41 = 0LL;
    v42 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((IClassBoardSquareModel_c **)v42 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
        goto LABEL_25;
    }
    v43 = v39 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_25:
    v43 = sub_AAFEF8(v38, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v118 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
  name = System_Int32__ToString((int32_t)&v118, 0LL);
  v49 = (System_Int32_array **)name;
  if ( name )
  {
    name = (System_String_o *)sub_B170BC(name, v19->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
  }
  if ( v19->max_length <= 2 )
    goto LABEL_64;
  v19->m_Items[2] = (System_String_o *)v49;
  sub_B16F98((BattleServantConfConponent_o *)&v19->m_Items[2], v49, v22, v44, v45, v46, v47, v48);
  name = (System_String_o *)StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    name = (System_String_o *)sub_B170BC(StringLiteral_15842, v19->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
    v21 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 3 )
    goto LABEL_64;
  v19->m_Items[3] = (System_String_o *)v21;
  sub_B16F98((BattleServantConfConponent_o *)&v19->m_Items[3], v21, v22, v50, v51, v52, v53, v54);
  v55 = setLineModel->klass;
  if ( *(_WORD *)&setLineModel->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v57 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)&setLineModel->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v58 = (__int64)&v55->vtable[*v57 + 1].method;
  }
  else
  {
LABEL_39:
    v58 = sub_AAFEF8(setLineModel, IClassBoardLineModel_TypeInfo, 1LL);
  }
  v59 = (*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v58)(setLineModel, *(_QWORD *)(v58 + 8));
  if ( !v59 )
    goto LABEL_63;
  v60 = *(_QWORD *)v59;
  v61 = v59;
  if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
  {
    v62 = 0LL;
    v63 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
    while ( *((IClassBoardSquareModel_c **)v63 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v62;
      v63 += 4;
      if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
        goto LABEL_46;
    }
    v64 = v60 + 16LL * *v63 + 312;
  }
  else
  {
LABEL_46:
    v64 = sub_AAFEF8(v59, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v118 = (*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v61, *(_QWORD *)(v64 + 8));
  name = System_Int32__ToString((int32_t)&v118, 0LL);
  v70 = (System_Int32_array **)name;
  if ( name )
  {
    name = (System_String_o *)sub_B170BC(name, v19->obj.klass->_1.element_class);
    if ( !name )
    {
LABEL_65:
      sub_B170F4(name);
      sub_B170A0();
    }
  }
  if ( v19->max_length <= 4 )
    goto LABEL_64;
  v19->m_Items[4] = (System_String_o *)v70;
  sub_B16F98((BattleServantConfConponent_o *)&v19->m_Items[4], v70, v22, v65, v66, v67, v68, v69);
  v71 = System_String__Concat_43823856(v19, 0LL);
  UnityEngine_Object__set_name(gameObject, v71, 0LL);
  ClassBoardLine__UpdateLine(this, v72);
  v73 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v73 )
    goto LABEL_63;
  v74 = (System_Int32_array **)UnityEngine_Object__get_name(v73, 0LL);
  v79 = sub_B170CC(ClassBoardEffectPlayer_TypeInfo, v75, v76, v77, v78);
  System_Object___ctor((Il2CppObject *)v79, 0LL);
  *(_QWORD *)(v79 + 16) = v74;
  sub_B16F98((BattleServantConfConponent_o *)(v79 + 16), v74, v80, v81, v82, v83, v84, v85);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v79;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.releaseEffectPlayer,
    (System_Int32_array **)v79,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v97 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v93, v94, v95, v96);
  System_Action___ctor(v97, (Il2CppObject *)this, Method_ClassBoardLine_PlayReleaseEffect__, 0LL);
  if ( !releaseEffectPlayer
    || (releaseEffectPlayer->fields.playCallback = v97,
        sub_B16F98(
          (BattleServantConfConponent_o *)&releaseEffectPlayer->fields.playCallback,
          (System_Int32_array **)v97,
          v98,
          v99,
          v100,
          v101,
          v102,
          v103),
        effectObjects = this->fields.effectObjects,
        v118 = 0,
        !effectObjects) )
  {
LABEL_63:
    sub_B170D4();
  }
  max_length = effectObjects->max_length;
  if ( max_length >= 1 )
  {
    v106 = 0;
    while ( v106 < (unsigned int)max_length )
    {
      v107 = &effectObjects->obj.klass + v106;
      v108 = (UnityEngine_GameObject_o *)v107[4];
      if ( !v108 )
        goto LABEL_63;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v107[4], 0LL);
      lineLength = this->fields.lineLength;
      v111 = transform;
      v112 = UnityEngine_GameObject__get_transform(v108, 0LL);
      if ( !v112 )
        goto LABEL_63;
      localScale = UnityEngine_Transform__get_localScale(v112, 0LL);
      y = localScale.fields.y;
      v114 = UnityEngine_GameObject__get_transform(v108, 0LL);
      if ( !v114 )
        goto LABEL_63;
      *(UnityEngine_Vector3_o *)(&v115 - 2) = UnityEngine_Transform__get_localScale(v114, 0LL);
      if ( !v111 )
        goto LABEL_63;
      v116 = lineLength;
      v117 = y;
      UnityEngine_Transform__set_localScale(v111, *(UnityEngine_Vector3_o *)(&v115 - 2), 0LL);
      v106 = v118 + 1;
      v118 = v106;
      max_length = effectObjects->max_length;
      if ( v106 >= max_length )
        return;
    }
LABEL_64:
    sub_B17100(name, v21, v22);
    sub_B170A0();
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
  __int64 v3; // x1
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 v11; // x20
  unsigned __int64 v12; // x10
  IClassBoardSquareModel_c **v13; // x11
  __int64 v14; // x0
  float v15; // s0
  float v16; // s1
  float v17; // s2
  struct IClassBoardLineModel_o *v18; // x20
  IClassBoardLineModel_c *v19; // x8
  float v20; // s11
  float v21; // s10
  float v22; // s12
  unsigned __int64 v23; // x10
  IClassBoardLineModel_c **v24; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x20
  unsigned __int64 v29; // x10
  IClassBoardSquareModel_c **v30; // x11
  __int64 v31; // x0
  long double v32; // q0 OVERLAPPED
  float v33; // s9
  float v34; // s1
  float v35; // s14
  float v36; // s2
  float v37; // s13
  float v38; // s1
  float v39; // s2
  float v40; // s0
  float v41; // s1
  float v42; // s2
  struct IClassBoardLineModel_o *v43; // x20
  IClassBoardLineModel_c *v44; // x8
  float v45; // s15
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  IClassBoardSquareModel_o *v49; // x0
  const MethodInfo *v50; // x2
  float SquareTypeOffset; // s0
  struct IClassBoardLineModel_o *v52; // x20
  IClassBoardLineModel_c *v53; // x8
  float v54; // s0
  float v55; // s8
  float v56; // s11
  float v57; // s15
  float v58; // s10
  unsigned __int64 v59; // x10
  IClassBoardLineModel_c **v60; // x11
  __int64 v61; // x0
  IClassBoardSquareModel_o *v62; // x0
  const MethodInfo *v63; // x2
  float v64; // s0
  float magnitude; // s8
  const MethodInfo *v66; // x1
  int32_t ConnectType; // w0
  int32_t v68; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *connectedSprite; // x0
  UnityEngine_Component_o **p_connectedSprite; // x22
  UnityEngine_GameObject_o *v72; // x0
  UnityEngine_Component_o *connectedOnSprite; // x0
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_Component_o *v75; // x20
  UnityEngine_GameObject_o *v76; // x0
  int32_t v77; // w0
  float v78; // s9
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v80; // x19
  float v81; // s0
  float v82; // s1
  float v83; // s2
  __int64 v84; // [xsp+0h] [xbp-90h] BYREF
  float v85; // [xsp+8h] [xbp-88h]
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  float v87; // [xsp+68h] [xbp-28h]
  float v88; // [xsp+6Ch] [xbp-24h]
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FB965 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardLineModel_TypeInfo, method);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v3);
    byte_40FB965 = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v85 = 0.0;
  v84 = 0LL;
  LineModel_k__BackingField = this->fields._LineModel_k__BackingField;
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
    p_method = sub_AAFEF8(this->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  v9 = (*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
         LineModel_k__BackingField,
         *(_QWORD *)(p_method + 8));
  if ( !v9 )
    goto LABEL_61;
  v10 = *(_QWORD *)v9;
  v11 = v9;
  if ( *(_WORD *)(*(_QWORD *)v9 + 298LL) )
  {
    v12 = 0LL;
    v13 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v10 + 176) + 8LL);
    while ( *(v13 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v12;
      v13 += 2;
      if ( v12 >= *(unsigned __int16 *)(*(_QWORD *)v9 + 298LL) )
        goto LABEL_15;
    }
    v14 = v10 + 16LL * (*(_DWORD *)v13 + 3) + 312;
  }
  else
  {
LABEL_15:
    v14 = sub_AAFEF8(v9, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
  v18 = this->fields._LineModel_k__BackingField;
  if ( !v18 )
    goto LABEL_61;
  v19 = v18->klass;
  v20 = v15;
  v21 = v16;
  v22 = v17;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = (IClassBoardLineModel_c **)&v19->_1.interfaceOffsets->offset;
    while ( *(v24 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v23;
      v24 += 2;
      if ( v23 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v25 = (__int64)&v19->vtable[*(_DWORD *)v24 + 1].method;
  }
  else
  {
LABEL_22:
    v25 = sub_AAFEF8(this->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  v26 = (*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v25)(v18, *(_QWORD *)(v25 + 8));
  if ( !v26 )
    goto LABEL_61;
  v27 = *(_QWORD *)v26;
  v28 = v26;
  if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
  {
    v29 = 0LL;
    v30 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v27 + 176) + 8LL);
    while ( *(v30 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v29;
      v30 += 2;
      if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
        goto LABEL_29;
    }
    v31 = v27 + 16LL * (*(_DWORD *)v30 + 3) + 312;
  }
  else
  {
LABEL_29:
    v31 = sub_AAFEF8(v26, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  v32 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v31)(v28, *(_QWORD *)(v31 + 8));
  v33 = *(float *)&v32;
  v35 = v34;
  v37 = v36;
  *(float *)&v32 = v20;
  v38 = v21;
  v39 = v22;
  v94.fields.x = v33;
  v94.fields.y = v35;
  v94.fields.z = v37;
  UnityEngine_Vector3__Distance(*(UnityEngine_Vector3_o *)&v32, v94, 0LL);
  v89.fields.x = v33 - v20;
  v89.fields.y = v35 - v21;
  v89.fields.z = v37 - v22;
  *(float *)&v84 = v33 - v20;
  *((float *)&v84 + 1) = v35 - v21;
  v85 = v37 - v22;
  *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_normalized(v89, (const MethodInfo *)&v84);
  v87 = v42;
  v88 = v41;
  v43 = this->fields._LineModel_k__BackingField;
  if ( !v43 )
    goto LABEL_61;
  v44 = v43->klass;
  v45 = v40;
  if ( *(_WORD *)&v43->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = &v44->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v47 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)&v43->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v48 = (__int64)&v44->vtable[*v47].method;
  }
  else
  {
LABEL_36:
    v48 = sub_AAFEF8(this->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  v49 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v48)(
                                      v43,
                                      *(_QWORD *)(v48 + 8));
  SquareTypeOffset = ClassBoardLine__GetSquareTypeOffset(this, v49, v50);
  v52 = this->fields._LineModel_k__BackingField;
  if ( !v52 )
    goto LABEL_61;
  v53 = v52->klass;
  v54 = SquareTypeOffset * 0.5;
  v55 = v45;
  v56 = v20 - (float)(v45 * v54);
  v57 = v21 - (float)(v88 * v54);
  v58 = v22 - (float)(v87 * v54);
  if ( *(_WORD *)&v52->klass->_2.bitflags1 )
  {
    v59 = 0LL;
    v60 = (IClassBoardLineModel_c **)&v53->_1.interfaceOffsets->offset;
    while ( *(v60 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v59;
      v60 += 2;
      if ( v59 >= *(unsigned __int16 *)&v52->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v61 = (__int64)&v53->vtable[*(_DWORD *)v60 + 1].method;
  }
  else
  {
LABEL_43:
    v61 = sub_AAFEF8(this->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  v62 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v61)(
                                      v52,
                                      *(_QWORD *)(v61 + 8));
  v64 = ClassBoardLine__GetSquareTypeOffset(this, v62, v63) * 0.5;
  v90.fields.y = (float)(v33 + (float)(v55 * v64)) - v56;
  v90.fields.z = (float)(v35 + (float)(v88 * v64)) - v57;
  v90.fields.x = (float)(v37 + (float)(v87 * v64)) - v58;
  methoda.methodPointer = *(Il2CppMethodPointer *)&v90.fields.y;
  *(float *)&methoda.invoker_method = v90.fields.x;
  magnitude = UnityEngine_Vector3__get_magnitude(v90, &methoda);
  this->fields.lineLength = magnitude;
  ConnectType = ClassBoardLine__GetConnectType(this, v66);
  if ( !this->fields.notConnectedSprite )
    goto LABEL_61;
  v68 = ConnectType;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.notConnectedSprite, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        p_connectedSprite = (UnityEngine_Component_o **)&this->fields.connectedSprite,
        (connectedSprite = (UnityEngine_Component_o *)this->fields.connectedSprite) == 0LL)
    || (v72 = UnityEngine_Component__get_gameObject(connectedSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v72, 0, 0LL),
        (connectedOnSprite = (UnityEngine_Component_o *)this->fields.connectedOnSprite) == 0LL)
    || (v74 = UnityEngine_Component__get_gameObject(connectedOnSprite, 0LL)) == 0LL )
  {
LABEL_61:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v74, 0, 0LL);
  if ( !v68 )
    goto LABEL_54;
  if ( v68 == 2 )
  {
    p_connectedSprite = (UnityEngine_Component_o **)&this->fields.connectedOnSprite;
    goto LABEL_56;
  }
  if ( v68 != 1 )
LABEL_54:
    p_connectedSprite = (UnityEngine_Component_o **)&this->fields.notConnectedSprite;
LABEL_56:
  v75 = *p_connectedSprite;
  if ( !*p_connectedSprite )
    goto LABEL_61;
  v76 = UnityEngine_Component__get_gameObject(*p_connectedSprite, 0LL);
  if ( !v76 )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(v76, 1, 0LL);
  v77 = UnityEngine_Mathf__CeilToInt(magnitude, 0LL);
  UIWidget__set_width((UIWidget_o *)v75, v77, 0LL);
  v78 = atan2f(*((float *)&methoda.methodPointer + 1), *(float *)&methoda.methodPointer);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_61;
  v91.fields.y = 0.0;
  v91.fields.z = v78 * 57.296;
  v91.fields.x = 0.0;
  UnityEngine_Transform__set_localEulerAngles(transform, v91, 0LL);
  v80 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v81 = UnityEngine_Vector3__get_normalized(v92, &methoda);
  if ( !v80 )
    goto LABEL_61;
  v93.fields.x = v56 + (float)((float)(magnitude * 0.5) * v81);
  v93.fields.y = v57 + (float)((float)(magnitude * 0.5) * v82);
  v93.fields.z = v58 + (float)((float)(magnitude * 0.5) * v83);
  UnityEngine_Transform__set_localPosition(v80, v93, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardLine__WaitAnimationFinished(
        ClassBoardLine_o *this,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FB969 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo, name);
    byte_40FB969 = 1;
  }
  v8 = sub_B170CC(ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo, name, endCallback, method, v4);
  ClassBoardLine__WaitAnimationFinished_d__37___ctor((ClassBoardLine__WaitAnimationFinished_d__37_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = name;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)name, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 48),
    (System_Int32_array **)endCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__33_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v4; // x1
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL), (releaseEffectPlayer = this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_B170D4();
  }
  ClassBoardEffectPlayer__End(releaseEffectPlayer, v4);
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__33_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v4; // x1
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL), (releaseEffectPlayer = this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_B170D4();
  }
  ClassBoardEffectPlayer__End(releaseEffectPlayer, v4);
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__33_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v4; // x1
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL), (releaseEffectPlayer = this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_B170D4();
  }
  ClassBoardEffectPlayer__End(releaseEffectPlayer, v4);
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__33_3(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v4; // x1
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL), (releaseEffectPlayer = this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_B170D4();
  }
  ClassBoardEffectPlayer__End(releaseEffectPlayer, v4);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B170D4();
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B170D4();
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B170D4();
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
  sub_B16F98(
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
  int32_t _1__state; // w8
  struct ClassBoardLine_o *_4__this; // x8
  SimpleAnimation_o *simpleAnimation; // x0
  struct SimpleAnimation_State_o *State; // x0
  struct SimpleAnimation_State_o **p_state_5__2; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct SimpleAnimation_State_o *v14; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v16; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct SimpleAnimation_State_o *v19; // x20
  SimpleAnimation_State_c *v20; // x8
  unsigned __int64 v21; // x10
  SimpleAnimation_State_c **v22; // x11
  __int64 v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_40F70E3 & 1) == 0 )
  {
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, method);
    byte_40F70E3 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    p_state_5__2 = &this->fields._state_5__2;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    simpleAnimation = _4__this->fields.simpleAnimation;
    if ( !simpleAnimation )
      goto LABEL_28;
    State = SimpleAnimation__GetState(simpleAnimation, this->fields.name, 0LL);
    p_state_5__2 = &this->fields._state_5__2;
    this->fields._state_5__2 = State;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._state_5__2,
      (System_Int32_array **)State,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = *p_state_5__2;
  if ( !*p_state_5__2 )
    goto LABEL_25;
  klass = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v16;
      p_offset += 2;
      if ( v16 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_14:
    p_method = sub_AAFEF8(*p_state_5__2, SimpleAnimation_State_TypeInfo, 13LL);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(v14, *(_QWORD *)(p_method + 8)) <= 0.0 )
    goto LABEL_25;
  v19 = *p_state_5__2;
  if ( !v19 )
LABEL_28:
    sub_B170D4();
  v20 = v19->klass;
  if ( *(_WORD *)&v19->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = (SimpleAnimation_State_c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v22 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v21;
      v22 += 2;
      if ( v21 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 5].method;
  }
  else
  {
LABEL_22:
    v23 = sub_AAFEF8(v19, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) >= 1.0 )
  {
LABEL_25:
    ActionExtensions__Call(this->fields.endCallback, 0LL);
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v24, v25, v26, v27, v28, v29);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_ClassBoardLine__WaitAnimationFinished_d__37_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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