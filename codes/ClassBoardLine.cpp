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

  if ( (byte_4353AF9 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_2936/*"BrightTurnTransition"*/);
    sub_B70694(&StringLiteral_2933/*"BrightTurn"*/);
    sub_B70694(&StringLiteral_2937/*"BrightTurnTransitionRoadOn"*/);
    sub_B70694(&StringLiteral_2938/*"BrightTurnUnLock"*/);
    sub_B70694(&StringLiteral_2934/*"BrightTurnRoadOn"*/);
    sub_B70694(&StringLiteral_2935/*"BrightTurnRoadOnUnLock"*/);
    sub_B70694(&StringLiteral_2889/*"BlackOutTransition"*/);
    byte_4353AF9 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_2933/*"BrightTurn"*/;
  this->fields.animNameBrightTurn = (struct System_String_o *)StringLiteral_2933/*"BrightTurn"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.animNameBrightTurn, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_2934/*"BrightTurnRoadOn"*/;
  this->fields.animNameBrightTurnRoadOn = (struct System_String_o *)StringLiteral_2934/*"BrightTurnRoadOn"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.animNameBrightTurnRoadOn, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_2938/*"BrightTurnUnLock"*/;
  this->fields.animNameBrightTurnUnlock = (struct System_String_o *)StringLiteral_2938/*"BrightTurnUnLock"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.animNameBrightTurnUnlock, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_2935/*"BrightTurnRoadOnUnLock"*/;
  this->fields.animNameBrightTurnRoadOnUnlock = (struct System_String_o *)StringLiteral_2935/*"BrightTurnRoadOnUnLock"*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnRoadOnUnlock,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Int32_array **)StringLiteral_2936/*"BrightTurnTransition"*/;
  this->fields.animNameBrightTurnTransition = (struct System_String_o *)StringLiteral_2936/*"BrightTurnTransition"*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnTransition,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Int32_array **)StringLiteral_2937/*"BrightTurnTransitionRoadOn"*/;
  this->fields.animNameBrightTurnTransitionRoadOn = (struct System_String_o *)StringLiteral_2937/*"BrightTurnTransitionRoadOn"*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnTransitionRoadOn,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Int32_array **)StringLiteral_2889/*"BlackOutTransition"*/;
  this->fields.animNameBlackOutTransition = (struct System_String_o *)StringLiteral_2889/*"BlackOutTransition"*/;
  sub_B70630(
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
  ClassBoardLine_o *v2; // x19
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v5; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  ClassBoardLine_c *v8; // x8
  ClassBoardLine_o *v9; // x20
  unsigned __int64 v10; // x10
  int32_t *v11; // x11
  __int64 v12; // x0
  struct IClassBoardLineModel_o *v13; // x20
  IClassBoardLineModel_c *v14; // x8
  unsigned __int64 v15; // x10
  IClassBoardLineModel_c **v16; // x11
  __int64 v17; // x0
  ClassBoardLine_c *v18; // x8
  ClassBoardLine_o *v19; // x20
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  struct IClassBoardLineModel_o *v24; // x20
  IClassBoardLineModel_c *v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  struct IClassBoardLineModel_o *v29; // x20
  IClassBoardLineModel_c *v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  ClassBoardLine_c *v34; // x8
  ClassBoardLine_o *v35; // x20
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  struct IClassBoardLineModel_o *v39; // x20
  IClassBoardLineModel_c *v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  ClassBoardLine_c *v44; // x8
  ClassBoardLine_o *v45; // x20
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  struct IClassBoardLineModel_o *v49; // x20
  IClassBoardLineModel_c *v50; // x8
  unsigned __int64 v51; // x10
  IClassBoardLineModel_c **v52; // x11
  __int64 v53; // x0
  ClassBoardLine_c *v54; // x8
  ClassBoardLine_o *v55; // x20
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  struct IClassBoardLineModel_o *v59; // x19
  IClassBoardLineModel_c *v60; // x8
  unsigned __int64 v61; // x10
  IClassBoardLineModel_c **v62; // x11
  __int64 v63; // x0
  ClassBoardLine_c *v64; // x8
  ClassBoardLine_o *v65; // x19
  unsigned __int64 v66; // x10
  int32_t *v67; // x11
  __int64 v68; // x0
  int32_t notConnectedSprite; // w20
  int32_t v70; // w22
  Il2CppObject *current; // x19
  Il2CppClass *v72; // x8
  unsigned __int64 v73; // x10
  int32_t *v74; // x11
  __int64 v75; // x0
  Il2CppClass *v76; // x8
  unsigned __int64 v77; // x10
  IClassBoardSquareModel_c **v78; // x11
  __int64 v79; // x0
  __int64 v80; // x2
  System_Enum_o *v81; // x19
  __int64 v82; // x2
  System_Enum_o *v83; // x0
  _BOOL8 v84; // x0
  __int64 v85; // x1
  ClassBoardLine_c *v87; // x8
  ClassBoardLine_o *v88; // x20
  unsigned __int64 v89; // x10
  int32_t *v90; // x11
  __int64 v91; // x0
  __int64 v92; // x2
  System_Enum_o *v93; // x20
  __int64 v94; // x2
  struct IClassBoardLineModel_o *v95; // x20
  IClassBoardLineModel_c *v96; // x8
  unsigned __int64 v97; // x10
  IClassBoardLineModel_c **v98; // x11
  __int64 v99; // x0
  ClassBoardLine_c *v100; // x8
  ClassBoardLine_o *v101; // x20
  unsigned __int64 v102; // x10
  int32_t *v103; // x11
  __int64 v104; // x0
  __int64 v105; // x2
  System_Enum_o *v106; // x20
  __int64 v107; // x2
  struct IClassBoardLineModel_o *v108; // x20
  IClassBoardLineModel_c *v109; // x8
  unsigned __int64 v110; // x10
  int *v111; // x11
  __int64 v112; // x0
  ClassBoardLine_c *v113; // x8
  ClassBoardLine_o *v114; // x20
  unsigned __int64 v115; // x10
  int32_t *v116; // x11
  __int64 v117; // x0
  __int64 v118; // x2
  System_Enum_o *v119; // x20
  __int64 v120; // x2
  struct IClassBoardLineModel_o *v121; // x19
  IClassBoardLineModel_c *v122; // x8
  unsigned __int64 v123; // x10
  IClassBoardLineModel_c **v124; // x11
  __int64 v125; // x0
  ClassBoardLine_c *v126; // x8
  ClassBoardLine_o *v127; // x19
  unsigned __int64 v128; // x10
  int32_t *v129; // x11
  __int64 v130; // x0
  __int64 v131; // x2
  System_Enum_o *v132; // x19
  __int64 v133; // x2
  System_Collections_Generic_List_Enumerator_T__o v134; // [xsp+0h] [xbp-80h] BYREF
  int v135; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v136; // [xsp+20h] [xbp-60h] BYREF
  ClassBoardLine_o *v137; // [xsp+48h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4353AF6 & 1) == 0 )
  {
    sub_B70694(&AcquireFlag_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__);
    sub_B70694(&IClassBoardLineModel_TypeInfo);
    sub_B70694(&IClassBoardSquareModel_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__);
    this = (ClassBoardLine_o *)sub_B70694(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_4353AF6 = 1;
  }
  v137 = 0LL;
  memset(&v136, 0, sizeof(v136));
  LineModel_k__BackingField = v2->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_187;
  klass = LineModel_k__BackingField->klass;
  if ( *(_WORD *)&LineModel_k__BackingField->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&LineModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_187;
  v8 = this->klass;
  v9 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    v11 = &v8->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v11 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v10;
      v11 += 4;
      if ( v10 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v12 = (__int64)(&v8[1]._1.gc_desc + 2 * *v11);
  }
  else
  {
LABEL_15:
    v12 = sub_B08590(this, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v13 = v2->fields._LineModel_k__BackingField;
    if ( !v13 )
      goto LABEL_187;
    v14 = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = (IClassBoardLineModel_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v15;
        v16 += 2;
        if ( v15 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_23:
      v17 = sub_B08590(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v17)(
                                 v13,
                                 *(_QWORD *)(v17 + 8));
    if ( !this )
      goto LABEL_187;
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
          goto LABEL_30;
      }
      v22 = (__int64)(&v18[1]._1.gc_desc + 2 * *v21);
    }
    else
    {
LABEL_30:
      v22 = sub_B08590(this, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v29 = v2->fields._LineModel_k__BackingField;
      if ( v29 )
      {
        v30 = v29->klass;
        if ( *(_WORD *)&v29->klass->_2.bitflags1 )
        {
          v31 = 0LL;
          v32 = &v30->_1.interfaceOffsets->offset;
          while ( *((IClassBoardLineModel_c **)v32 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v31;
            v32 += 4;
            if ( v31 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
              goto LABEL_44;
          }
          v33 = (__int64)&v30->vtable[*v32].method;
        }
        else
        {
LABEL_44:
          v33 = sub_B08590(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
        }
        this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v33)(
                                     v29,
                                     *(_QWORD *)(v33 + 8));
        if ( this )
        {
          v87 = this->klass;
          v88 = this;
          if ( *(_WORD *)&this->klass->_2.bitflags1 )
          {
            v89 = 0LL;
            v90 = &v87->_1.interfaceOffsets->offset;
            while ( *((IClassBoardSquareModel_c **)v90 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v89;
              v90 += 4;
              if ( v89 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                goto LABEL_130;
            }
            v91 = (__int64)(&v87[1]._1.events + 2 * *v90);
          }
          else
          {
LABEL_130:
            v91 = sub_B08590(this, IClassBoardSquareModel_TypeInfo, 13LL);
          }
          LODWORD(v134.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v91)(
                                        v88,
                                        0LL,
                                        *(_QWORD *)(v91 + 8));
          v93 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v134, v92);
          v135 = 1;
          this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v135, v94);
          if ( v93 )
          {
            this = (ClassBoardLine_o *)System_Enum__HasFlag(v93, (System_Enum_o *)this, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v95 = v2->fields._LineModel_k__BackingField;
              if ( !v95 )
                goto LABEL_187;
              v96 = v95->klass;
              if ( *(_WORD *)&v95->klass->_2.bitflags1 )
              {
                v97 = 0LL;
                v98 = (IClassBoardLineModel_c **)&v96->_1.interfaceOffsets->offset;
                while ( *(v98 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  ++v97;
                  v98 += 2;
                  if ( v97 >= *(unsigned __int16 *)&v95->klass->_2.bitflags1 )
                    goto LABEL_139;
                }
                v99 = (__int64)&v96->vtable[*(_DWORD *)v98 + 1].method;
              }
              else
              {
LABEL_139:
                v99 = sub_B08590(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
              }
              this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v99)(
                                           v95,
                                           *(_QWORD *)(v99 + 8));
              if ( !this )
                goto LABEL_187;
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
                    goto LABEL_146;
                }
                v104 = (__int64)(&v100[1]._1.events + 2 * *v103);
              }
              else
              {
LABEL_146:
                v104 = sub_B08590(this, IClassBoardSquareModel_TypeInfo, 13LL);
              }
              LODWORD(v134.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v104)(
                                            v101,
                                            0LL,
                                            *(_QWORD *)(v104 + 8));
              v106 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v134, v105);
              v135 = 1;
              this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v135, v107);
              if ( !v106 )
                goto LABEL_187;
              this = (ClassBoardLine_o *)System_Enum__HasFlag(v106, (System_Enum_o *)this, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                return 2;
            }
            v108 = v2->fields._LineModel_k__BackingField;
            if ( v108 )
            {
              v109 = v108->klass;
              if ( *(_WORD *)&v108->klass->_2.bitflags1 )
              {
                v110 = 0LL;
                v111 = &v109->_1.interfaceOffsets->offset;
                while ( *((IClassBoardLineModel_c **)v111 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  ++v110;
                  v111 += 4;
                  if ( v110 >= *(unsigned __int16 *)&v108->klass->_2.bitflags1 )
                    goto LABEL_156;
                }
                v112 = (__int64)&v109->vtable[*v111].method;
              }
              else
              {
LABEL_156:
                v112 = sub_B08590(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
              }
              this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v112)(
                                           v108,
                                           *(_QWORD *)(v112 + 8));
              if ( this )
              {
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
                      goto LABEL_163;
                  }
                  v117 = (__int64)(&v113[1]._1.events + 2 * *v116);
                }
                else
                {
LABEL_163:
                  v117 = sub_B08590(this, IClassBoardSquareModel_TypeInfo, 13LL);
                }
                LODWORD(v134.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v117)(
                                              v114,
                                              0LL,
                                              *(_QWORD *)(v117 + 8));
                v119 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v134, v118);
                v135 = 1;
                this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v135, v120);
                if ( v119 )
                {
                  this = (ClassBoardLine_o *)System_Enum__HasFlag(v119, (System_Enum_o *)this, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    return 1;
                  v121 = v2->fields._LineModel_k__BackingField;
                  if ( v121 )
                  {
                    v122 = v121->klass;
                    if ( *(_WORD *)&v121->klass->_2.bitflags1 )
                    {
                      v123 = 0LL;
                      v124 = (IClassBoardLineModel_c **)&v122->_1.interfaceOffsets->offset;
                      while ( *(v124 - 1) != IClassBoardLineModel_TypeInfo )
                      {
                        ++v123;
                        v124 += 2;
                        if ( v123 >= *(unsigned __int16 *)&v121->klass->_2.bitflags1 )
                          goto LABEL_173;
                      }
                      v125 = (__int64)&v122->vtable[*(_DWORD *)v124 + 1].method;
                    }
                    else
                    {
LABEL_173:
                      v125 = sub_B08590(v121, IClassBoardLineModel_TypeInfo, 1LL);
                    }
                    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v125)(
                                                 v121,
                                                 *(_QWORD *)(v125 + 8));
                    if ( this )
                    {
                      v126 = this->klass;
                      v127 = this;
                      if ( *(_WORD *)&this->klass->_2.bitflags1 )
                      {
                        v128 = 0LL;
                        v129 = &v126->_1.interfaceOffsets->offset;
                        while ( *((IClassBoardSquareModel_c **)v129 - 1) != IClassBoardSquareModel_TypeInfo )
                        {
                          ++v128;
                          v129 += 4;
                          if ( v128 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                            goto LABEL_180;
                        }
                        v130 = (__int64)(&v126[1]._1.events + 2 * *v129);
                      }
                      else
                      {
LABEL_180:
                        v130 = sub_B08590(this, IClassBoardSquareModel_TypeInfo, 13LL);
                      }
                      LODWORD(v134.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v130)(
                                                    v127,
                                                    0LL,
                                                    *(_QWORD *)(v130 + 8));
                      v132 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v134, v131);
                      v135 = 1;
                      this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v135, v133);
                      if ( v132 )
                        return System_Enum__HasFlag(v132, (System_Enum_o *)this, 0LL);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_187:
      sub_B7076C(this, method);
    }
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v137 = (ClassBoardLine_o *)v23;
  v24 = v2->fields._LineModel_k__BackingField;
  if ( !v24 )
    goto LABEL_187;
  v25 = v24->klass;
  if ( *(_WORD *)&v24->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v27 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_38:
    v28 = sub_B08590(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v28)(
                               v24,
                               *(_QWORD *)(v28 + 8));
  if ( !this )
    goto LABEL_187;
  v34 = this->klass;
  v35 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v34->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v37 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v38 = (__int64)(&v34[1]._1.gc_desc + 2 * *v37);
  }
  else
  {
LABEL_51:
    v38 = sub_B08590(this, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v39 = v2->fields._LineModel_k__BackingField;
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
          goto LABEL_59;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_59:
      v43 = sub_B08590(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v43)(
                                 v39,
                                 *(_QWORD *)(v43 + 8));
    if ( !this )
      goto LABEL_187;
    v44 = this->klass;
    v45 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v46 = 0LL;
      v47 = &v44->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v47 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_66;
      }
      v48 = (__int64)(&v44[1]._1.implementedInterfaces + 2 * *v47);
    }
    else
    {
LABEL_66:
      v48 = sub_B08590(this, IClassBoardSquareModel_TypeInfo, 15LL);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v48)(
                                 v45,
                                 &v137,
                                 *(_QWORD *)(v48 + 8));
  }
  v49 = v2->fields._LineModel_k__BackingField;
  if ( !v49 )
    goto LABEL_187;
  v50 = v49->klass;
  if ( *(_WORD *)&v49->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    v52 = (IClassBoardLineModel_c **)&v50->_1.interfaceOffsets->offset;
    while ( *(v52 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v51;
      v52 += 2;
      if ( v51 >= *(unsigned __int16 *)&v49->klass->_2.bitflags1 )
        goto LABEL_74;
    }
    v53 = (__int64)&v50->vtable[*(_DWORD *)v52 + 1].method;
  }
  else
  {
LABEL_74:
    v53 = sub_B08590(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v53)(
                               v49,
                               *(_QWORD *)(v53 + 8));
  if ( !this )
    goto LABEL_187;
  v54 = this->klass;
  v55 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = &v54->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v57 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_81;
    }
    v58 = (__int64)(&v54[1]._1.gc_desc + 2 * *v57);
  }
  else
  {
LABEL_81:
    v58 = sub_B08590(this, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v58)(v55, *(_QWORD *)(v58 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v59 = v2->fields._LineModel_k__BackingField;
    if ( v59 )
    {
      v60 = v59->klass;
      if ( *(_WORD *)&v59->klass->_2.bitflags1 )
      {
        v61 = 0LL;
        v62 = (IClassBoardLineModel_c **)&v60->_1.interfaceOffsets->offset;
        while ( *(v62 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v61;
          v62 += 2;
          if ( v61 >= *(unsigned __int16 *)&v59->klass->_2.bitflags1 )
            goto LABEL_89;
        }
        v63 = (__int64)&v60->vtable[*(_DWORD *)v62 + 1].method;
      }
      else
      {
LABEL_89:
        v63 = sub_B08590(v59, IClassBoardLineModel_TypeInfo, 1LL);
      }
      this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v63)(
                                   v59,
                                   *(_QWORD *)(v63 + 8));
      if ( this )
      {
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
              goto LABEL_96;
          }
          v68 = (__int64)(&v64[1]._1.implementedInterfaces + 2 * *v67);
        }
        else
        {
LABEL_96:
          v68 = sub_B08590(this, IClassBoardSquareModel_TypeInfo, 15LL);
        }
        (*(void (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v68)(v65, &v137, *(_QWORD *)(v68 + 8));
        goto LABEL_99;
      }
    }
    goto LABEL_187;
  }
LABEL_99:
  this = v137;
  if ( !v137 )
    goto LABEL_187;
  notConnectedSprite = (int32_t)v137->fields.notConnectedSprite;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v134,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v137,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v70 = 0;
  v136 = v134;
  while ( 1 )
  {
    v84 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v136,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    if ( !v84 )
      break;
    current = v136.fields.current;
    if ( !v136.fields.current )
      sub_B7076C(v84, v85);
    v72 = v136.fields.current->klass;
    if ( *(_WORD *)&v136.fields.current->klass->_2.bitflags1 )
    {
      v73 = 0LL;
      v74 = &v72->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v74 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v73;
        v74 += 4;
        if ( v73 >= *(unsigned __int16 *)&v136.fields.current->klass->_2.bitflags1 )
          goto LABEL_106;
      }
      v75 = (__int64)&v72->vtable[*v74 + 5].method;
    }
    else
    {
LABEL_106:
      v75 = sub_B08590(v136.fields.current, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v75)(current, *(_QWORD *)(v75 + 8)) & 1) != 0 )
    {
      --notConnectedSprite;
    }
    else
    {
      v76 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v77 = 0LL;
        v78 = (IClassBoardSquareModel_c **)&v76->_1.interfaceOffsets->offset;
        while ( *(v78 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v77;
          v78 += 2;
          if ( v77 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_113;
        }
        v79 = (__int64)&v76->vtable[*(_DWORD *)v78 + 13].method;
      }
      else
      {
LABEL_113:
        v79 = sub_B08590(current, IClassBoardSquareModel_TypeInfo, 13LL);
      }
      LODWORD(v134.fields.list) = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v79)(
                                    current,
                                    0LL,
                                    *(_QWORD *)(v79 + 8));
      v81 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v134, v80);
      v135 = 1;
      v83 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v135, v82);
      if ( !v81 )
        sub_B7076C(v83, v83);
      v70 += System_Enum__HasFlag(v81, v83, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v136,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  if ( !v70 )
    return 0;
  if ( v70 < notConnectedSprite )
    return 1;
  return 2;
}


float __fastcall ClassBoardLine__GetSquareTypeOffset(
        ClassBoardLine_o *this,
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  ClassBoardLine_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  float *p_blankOffsetLength; // x8

  v4 = this;
  if ( (byte_4353AF7 & 1) == 0 )
  {
    sub_B70694(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardLine_o *)sub_B70694(&IClassBoardSquareModel_TypeInfo);
    byte_4353AF7 = 1;
  }
  if ( !squareModel )
    sub_B7076C(this, squareModel);
  klass = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(squareModel, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    p_blankOffsetLength = &v4->fields.blankOffsetLength;
  }
  else if ( sub_B70754(squareModel, IClassBoardLockModel_TypeInfo) )
  {
    p_blankOffsetLength = &v4->fields.lockOffsetLength;
  }
  else
  {
    p_blankOffsetLength = &v4->fields.squareOffsetLength;
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

  if ( (byte_4353AF5 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardEffectPlayer_GetData_bool___);
    sub_B70694(&Method_ClassBoardLine__PlayReleaseEffect_b__33_0__);
    sub_B70694(&Method_ClassBoardLine__PlayReleaseEffect_b__33_1__);
    sub_B70694(&Method_ClassBoardLine__PlayReleaseEffect_b__33_2__);
    sub_B70694(&Method_ClassBoardLine__PlayReleaseEffect_b__33_3__);
    byte_4353AF5 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      if ( ClassBoardEffectPlayer__GetData_bool_(
             releaseEffectPlayer,
             (const MethodInfo_1BE2B0C *)Method_ClassBoardEffectPlayer_GetData_bool___) )
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOnUnlock;
        v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        v8 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_2__;
      }
      else
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOn;
        v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        v8 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_3__;
      }
      goto LABEL_15;
    }
LABEL_16:
    sub_B7076C(releaseEffectPlayer, v4);
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
         (const MethodInfo_1BE2B0C *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnUnlock;
    v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    v8 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_0__;
  }
  else
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurn;
    v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
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
    sub_B7076C(simpleAnimation, name);
  }
  SimpleAnimation__Play_16672920(simpleAnimation, name, 0LL);
  v9 = ClassBoardLine__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall ClassBoardLine__PlayTransition(ClassBoardLine_o *this, const MethodInfo *method)
{
  int32_t ConnectType; // w0
  System_String_o *animNameBrightTurnTransitionRoadOn; // x20
  System_Action_o *v5; // x0
  __int64 *v6; // x8
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x3

  if ( (byte_4353AF3 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardLine__PlayTransition_b__28_0__);
    sub_B70694(&Method_ClassBoardLine__PlayTransition_b__28_1__);
    sub_B70694(&Method_ClassBoardLine__PlayTransition_b__28_2__);
    byte_4353AF3 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransitionRoadOn;
    v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    v6 = &Method_ClassBoardLine__PlayTransition_b__28_1__;
  }
  else if ( ConnectType == 1 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransition;
    v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    v6 = &Method_ClassBoardLine__PlayTransition_b__28_0__;
  }
  else
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBlackOutTransition;
    v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
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
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_c *v32; // x8
  UnityEngine_Object_o *v33; // x23
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x23
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  IClassBoardLineModel_c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  UnityEngine_Object_c *v55; // x8
  UnityEngine_Object_o *v56; // x22
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x22
  System_String_o *v67; // x0
  const MethodInfo *v68; // x1
  System_Int32_array **v69; // x20
  __int64 v70; // x21
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  System_Action_o *v84; // x21
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  struct UnityEngine_GameObject_array *effectObjects; // x22
  int max_length; // w8
  int v93; // w9
  Il2CppClass **v94; // x8
  UnityEngine_GameObject_o *v95; // x21
  UnityEngine_Transform_o *transform; // x0
  float lineLength; // s8
  UnityEngine_Transform_o *v98; // x20
  float y; // s9
  int v100; // s2
  float v101; // s0
  float v102; // s1
  __int64 v103; // x0
  __int64 v104; // x0
  int v105; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4353AF2 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ClassBoardEffectPlayer_TypeInfo);
    sub_B70694(&Method_ClassBoardLine_PlayReleaseEffect__);
    sub_B70694(&IClassBoardLineModel_TypeInfo);
    sub_B70694(&IClassBoardSquareModel_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    byte_4353AF2 = 1;
  }
  v105 = 0;
  this->fields._LineModel_k__BackingField = setLineModel;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._LineModel_k__BackingField,
    (System_Int32_array **)setLineModel,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  name = (UnityEngine_Object_o *)sub_B706AC(string___TypeInfo, 5LL);
  if ( !gameObject )
    goto LABEL_63;
  v13 = (System_String_array *)name;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL);
  if ( !v13 )
    goto LABEL_63;
  v20 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B70754(name, v13->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
  }
  if ( !v13->max_length )
    goto LABEL_64;
  v13->m_Items[0] = (System_String_o *)v20;
  sub_B70630((BattleServantConfConponent_o *)v13->m_Items, v20, v14, v15, v16, v17, v18, v19);
  name = (UnityEngine_Object_o *)StringLiteral_16127/*"_"*/;
  if ( StringLiteral_16127/*"_"*/ )
  {
    name = (UnityEngine_Object_o *)sub_B70754(StringLiteral_16127/*"_"*/, v13->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
    v27 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_64;
  v13->m_Items[1] = (System_String_o *)v27;
  sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  if ( !setLineModel )
    goto LABEL_63;
  klass = setLineModel->klass;
  if ( *(_WORD *)&setLineModel->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v29;
      p_offset += 4;
      if ( v29 >= *(unsigned __int16 *)&setLineModel->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_18:
    p_method = sub_B08590(setLineModel, IClassBoardLineModel_TypeInfo, 0LL);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))p_method)(
                                   setLineModel,
                                   *(_QWORD *)(p_method + 8));
  if ( !name )
    goto LABEL_63;
  v32 = name->klass;
  v33 = name;
  if ( *(_WORD *)&name->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v32->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v35 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&name->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v36 = (__int64)(&v32->vtable._0_Equals.method + 2 * *v35);
  }
  else
  {
LABEL_25:
    v36 = sub_B08590(name, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v105 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v105, 0LL);
  v43 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B70754(name, v13->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_64;
  v13->m_Items[2] = (System_String_o *)v43;
  sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[2], v43, v37, v38, v39, v40, v41, v42);
  name = (UnityEngine_Object_o *)StringLiteral_16127/*"_"*/;
  if ( StringLiteral_16127/*"_"*/ )
  {
    name = (UnityEngine_Object_o *)sub_B70754(StringLiteral_16127/*"_"*/, v13->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
    v50 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( v13->max_length <= 3 )
    goto LABEL_64;
  v13->m_Items[3] = (System_String_o *)v50;
  sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[3], v50, v44, v45, v46, v47, v48, v49);
  v51 = setLineModel->klass;
  if ( *(_WORD *)&setLineModel->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v53 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&setLineModel->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v54 = (__int64)&v51->vtable[*v53 + 1].method;
  }
  else
  {
LABEL_39:
    v54 = sub_B08590(setLineModel, IClassBoardLineModel_TypeInfo, 1LL);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v54)(
                                   setLineModel,
                                   *(_QWORD *)(v54 + 8));
  if ( !name )
    goto LABEL_63;
  v55 = name->klass;
  v56 = name;
  if ( *(_WORD *)&name->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = &v55->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v58 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)&name->klass->_2.bitflags1 )
        goto LABEL_46;
    }
    v59 = (__int64)(&v55->vtable._0_Equals.method + 2 * *v58);
  }
  else
  {
LABEL_46:
    v59 = sub_B08590(name, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v105 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v59)(v56, *(_QWORD *)(v59 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v105, 0LL);
  v66 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B70754(name, v13->obj.klass->_1.element_class);
    if ( !name )
    {
LABEL_65:
      v104 = sub_B7078C(name);
      sub_B70738(v104, 0LL);
    }
  }
  if ( v13->max_length <= 4 )
    goto LABEL_64;
  v13->m_Items[4] = (System_String_o *)v66;
  sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[4], v66, v60, v61, v62, v63, v64, v65);
  v67 = System_String__Concat_44838292(v13, 0LL);
  UnityEngine_Object__set_name(gameObject, v67, 0LL);
  ClassBoardLine__UpdateLine(this, v68);
  name = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !name )
    goto LABEL_63;
  v69 = (System_Int32_array **)UnityEngine_Object__get_name(name, 0LL);
  v70 = sub_B70764(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v70, 0LL);
  *(_QWORD *)(v70 + 16) = v69;
  sub_B70630((BattleServantConfConponent_o *)(v70 + 16), v69, v71, v72, v73, v74, v75, v76);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v70;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.releaseEffectPlayer,
    (System_Int32_array **)v70,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v84 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v84, (Il2CppObject *)this, Method_ClassBoardLine_PlayReleaseEffect__, 0LL);
  if ( !releaseEffectPlayer
    || (releaseEffectPlayer->fields.playCallback = v84,
        sub_B70630(
          (BattleServantConfConponent_o *)&releaseEffectPlayer->fields.playCallback,
          (System_Int32_array **)v84,
          v85,
          v86,
          v87,
          v88,
          v89,
          v90),
        effectObjects = this->fields.effectObjects,
        v105 = 0,
        !effectObjects) )
  {
LABEL_63:
    sub_B7076C(name, v12);
  }
  max_length = effectObjects->max_length;
  if ( max_length >= 1 )
  {
    v93 = 0;
    while ( v93 < (unsigned int)max_length )
    {
      v94 = &effectObjects->obj.klass + v93;
      v95 = (UnityEngine_GameObject_o *)v94[4];
      if ( !v95 )
        goto LABEL_63;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v94[4], 0LL);
      lineLength = this->fields.lineLength;
      v98 = transform;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v95, 0LL);
      if ( !name )
        goto LABEL_63;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)name, 0LL);
      y = localScale.fields.y;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v95, 0LL);
      if ( !name )
        goto LABEL_63;
      *(UnityEngine_Vector3_o *)(&v100 - 2) = UnityEngine_Transform__get_localScale(
                                                (UnityEngine_Transform_o *)name,
                                                0LL);
      if ( !v98 )
        goto LABEL_63;
      v101 = lineLength;
      v102 = y;
      UnityEngine_Transform__set_localScale(v98, *(UnityEngine_Vector3_o *)(&v100 - 2), 0LL);
      v93 = v105 + 1;
      v105 = v93;
      max_length = effectObjects->max_length;
      if ( v93 >= max_length )
        return;
    }
LABEL_64:
    v103 = sub_B70798(name);
    sub_B70738(v103, 0LL);
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
  ClassBoardLine_o *v2; // x19
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v5; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  ClassBoardLine_c *v8; // x8
  ClassBoardLine_o *v9; // x20
  unsigned __int64 v10; // x10
  int32_t *v11; // x11
  __int64 v12; // x0
  float v13; // s0
  float v14; // s1
  float v15; // s2
  struct IClassBoardLineModel_o *v16; // x20
  IClassBoardLineModel_c *v17; // x8
  float v18; // s11
  float v19; // s10
  float v20; // s12
  unsigned __int64 v21; // x10
  IClassBoardLineModel_c **v22; // x11
  __int64 v23; // x0
  ClassBoardLine_c *v24; // x8
  ClassBoardLine_o *v25; // x20
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  long double v29; // q0 OVERLAPPED
  float v30; // s9
  float v31; // s1
  float v32; // s14
  float v33; // s2
  float v34; // s13
  float v35; // s1
  float v36; // s2
  float v37; // s0
  float v38; // s1
  float v39; // s2
  struct IClassBoardLineModel_o *v40; // x20
  IClassBoardLineModel_c *v41; // x8
  float v42; // s15
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  IClassBoardSquareModel_o *v46; // x0
  const MethodInfo *v47; // x2
  float SquareTypeOffset; // s0
  struct IClassBoardLineModel_o *v49; // x20
  IClassBoardLineModel_c *v50; // x8
  float v51; // s0
  float v52; // s8
  float v53; // s11
  float v54; // s15
  float v55; // s10
  unsigned __int64 v56; // x10
  IClassBoardLineModel_c **v57; // x11
  __int64 v58; // x0
  IClassBoardSquareModel_o *v59; // x0
  const MethodInfo *v60; // x2
  float v61; // s0
  float magnitude; // s8
  const MethodInfo *v63; // x1
  int v64; // w20
  UnityEngine_Component_o **p_connectedSprite; // x22
  UnityEngine_Component_o *v66; // x20
  int32_t v67; // w0
  float v68; // s9
  UnityEngine_Transform_o *transform; // x19
  float v70; // s0
  float v71; // s1
  float v72; // s2
  __int64 v73; // [xsp+0h] [xbp-90h] BYREF
  float v74; // [xsp+8h] [xbp-88h]
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  float v76; // [xsp+68h] [xbp-28h]
  float v77; // [xsp+6Ch] [xbp-24h]
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s3.4,4:s4.4,8:s5.4

  v2 = this;
  if ( (byte_4353AF4 & 1) == 0 )
  {
    sub_B70694(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardLine_o *)sub_B70694(&IClassBoardSquareModel_TypeInfo);
    byte_4353AF4 = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v74 = 0.0;
  v73 = 0LL;
  LineModel_k__BackingField = v2->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_61;
  klass = LineModel_k__BackingField->klass;
  if ( *(_WORD *)&LineModel_k__BackingField->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&LineModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_61;
  v8 = this->klass;
  v9 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    v11 = &v8->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v11 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v10;
      v11 += 4;
      if ( v10 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v12 = (__int64)(&v8->vtable._3_ToString.method + 2 * *v11);
  }
  else
  {
LABEL_15:
    v12 = sub_B08590(this, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
  v16 = v2->fields._LineModel_k__BackingField;
  if ( !v16 )
    goto LABEL_61;
  v17 = v16->klass;
  v18 = v13;
  v19 = v14;
  v20 = v15;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = (IClassBoardLineModel_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v22 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v21;
      v22 += 2;
      if ( v21 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v23 = (__int64)&v17->vtable[*(_DWORD *)v22 + 1].method;
  }
  else
  {
LABEL_22:
    v23 = sub_B08590(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v23)(
                               v16,
                               *(_QWORD *)(v23 + 8));
  if ( !this )
    goto LABEL_61;
  v24 = this->klass;
  v25 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v24->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v27 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v28 = (__int64)(&v24->vtable._3_ToString.method + 2 * *v27);
  }
  else
  {
LABEL_29:
    v28 = sub_B08590(this, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  v29 = ((long double (__fastcall *)(ClassBoardLine_o *, _QWORD))*(_QWORD *)v28)(v25, *(_QWORD *)(v28 + 8));
  v30 = *(float *)&v29;
  v32 = v31;
  v34 = v33;
  *(float *)&v29 = v18;
  v35 = v19;
  v36 = v20;
  v83.fields.x = v30;
  v83.fields.y = v32;
  v83.fields.z = v34;
  UnityEngine_Vector3__Distance(*(UnityEngine_Vector3_o *)&v29, v83, 0LL);
  v78.fields.x = v30 - v18;
  v78.fields.y = v32 - v19;
  v78.fields.z = v34 - v20;
  *(float *)&v73 = v30 - v18;
  *((float *)&v73 + 1) = v32 - v19;
  v74 = v34 - v20;
  *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_normalized(v78, (const MethodInfo *)&v73);
  v76 = v39;
  v77 = v38;
  v40 = v2->fields._LineModel_k__BackingField;
  if ( !v40 )
    goto LABEL_61;
  v41 = v40->klass;
  v42 = v37;
  if ( *(_WORD *)&v40->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = &v41->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v44 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)&v40->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v45 = (__int64)&v41->vtable[*v44].method;
  }
  else
  {
LABEL_36:
    v45 = sub_B08590(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  v46 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v45)(
                                      v40,
                                      *(_QWORD *)(v45 + 8));
  SquareTypeOffset = ClassBoardLine__GetSquareTypeOffset(v2, v46, v47);
  v49 = v2->fields._LineModel_k__BackingField;
  if ( !v49 )
    goto LABEL_61;
  v50 = v49->klass;
  v51 = SquareTypeOffset * 0.5;
  v52 = v42;
  v53 = v18 - (float)(v42 * v51);
  v54 = v19 - (float)(v77 * v51);
  v55 = v20 - (float)(v76 * v51);
  if ( *(_WORD *)&v49->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = (IClassBoardLineModel_c **)&v50->_1.interfaceOffsets->offset;
    while ( *(v57 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v56;
      v57 += 2;
      if ( v56 >= *(unsigned __int16 *)&v49->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v58 = (__int64)&v50->vtable[*(_DWORD *)v57 + 1].method;
  }
  else
  {
LABEL_43:
    v58 = sub_B08590(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  v59 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v58)(
                                      v49,
                                      *(_QWORD *)(v58 + 8));
  v61 = ClassBoardLine__GetSquareTypeOffset(v2, v59, v60) * 0.5;
  v79.fields.y = (float)(v30 + (float)(v52 * v61)) - v53;
  v79.fields.z = (float)(v32 + (float)(v77 * v61)) - v54;
  v79.fields.x = (float)(v34 + (float)(v76 * v61)) - v55;
  methoda.methodPointer = *(Il2CppMethodPointer *)&v79.fields.y;
  *(float *)&methoda.invoker_method = v79.fields.x;
  magnitude = UnityEngine_Vector3__get_magnitude(v79, &methoda);
  v2->fields.lineLength = magnitude;
  this = (ClassBoardLine_o *)ClassBoardLine__GetConnectType(v2, v63);
  if ( !v2->fields.notConnectedSprite )
    goto LABEL_61;
  v64 = (int)this;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)v2->fields.notConnectedSprite,
                               0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        p_connectedSprite = (UnityEngine_Component_o **)&v2->fields.connectedSprite,
        (this = (ClassBoardLine_o *)v2->fields.connectedSprite) == 0LL)
    || (this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (ClassBoardLine_o *)v2->fields.connectedOnSprite) == 0LL)
    || (this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_61:
    sub_B7076C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !v64 )
    goto LABEL_54;
  if ( v64 == 2 )
  {
    p_connectedSprite = (UnityEngine_Component_o **)&v2->fields.connectedOnSprite;
    goto LABEL_56;
  }
  if ( v64 != 1 )
LABEL_54:
    p_connectedSprite = (UnityEngine_Component_o **)&v2->fields.notConnectedSprite;
LABEL_56:
  v66 = *p_connectedSprite;
  if ( !*p_connectedSprite )
    goto LABEL_61;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(*p_connectedSprite, 0LL);
  if ( !this )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v67 = UnityEngine_Mathf__CeilToInt(magnitude, 0LL);
  UIWidget__set_width((UIWidget_o *)v66, v67, 0LL);
  v68 = atan2f(*((float *)&methoda.methodPointer + 1), *(float *)&methoda.methodPointer);
  this = (ClassBoardLine_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_61;
  v80.fields.y = 0.0;
  v80.fields.z = v68 * 57.296;
  v80.fields.x = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v80, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  *(UnityEngine_Vector3_o *)&v70 = UnityEngine_Vector3__get_normalized(v81, &methoda);
  if ( !transform )
    goto LABEL_61;
  v82.fields.x = v53 + (float)((float)(magnitude * 0.5) * v70);
  v82.fields.y = v54 + (float)((float)(magnitude * 0.5) * v71);
  v82.fields.z = v55 + (float)((float)(magnitude * 0.5) * v72);
  UnityEngine_Transform__set_localPosition(transform, v82, 0LL);
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

  if ( (byte_4353AF8 & 1) == 0 )
  {
    sub_B70694(&ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo);
    byte_4353AF8 = 1;
  }
  v7 = sub_B70764(ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo);
  ClassBoardLine__WaitAnimationFinished_d__37___ctor((ClassBoardLine__WaitAnimationFinished_d__37_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = name;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)name, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_B70630(
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
    sub_B7076C(simpleAnimation, method);
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
    sub_B7076C(simpleAnimation, method);
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
    sub_B7076C(simpleAnimation, method);
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
    sub_B7076C(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B7076C(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B7076C(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B7076C(0LL, method);
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
  sub_B70630(
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
  ClassBoardLine__WaitAnimationFinished_d__37_o *v2; // x19
  int32_t _1__state; // w8
  struct ClassBoardLine_o *_4__this; // x8
  struct SimpleAnimation_State_o **p_state_5__2; // x20
  struct SimpleAnimation_State_o *v6; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v8; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct SimpleAnimation_State_o *v11; // x20
  SimpleAnimation_State_c *v12; // x8
  unsigned __int64 v13; // x10
  SimpleAnimation_State_c **v14; // x11
  __int64 v15; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_434ED9C & 1) == 0 )
  {
    this = (ClassBoardLine__WaitAnimationFinished_d__37_o *)sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_434ED9C = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    p_state_5__2 = &v2->fields._state_5__2;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    this = (ClassBoardLine__WaitAnimationFinished_d__37_o *)_4__this->fields.simpleAnimation;
    if ( !this )
      goto LABEL_28;
    p_state_5__2 = &v2->fields._state_5__2;
    v2->fields._state_5__2 = SimpleAnimation__GetState((SimpleAnimation_o *)this, v2->fields.name, 0LL);
    sub_B70630(&v2->fields._state_5__2);
  }
  v6 = *p_state_5__2;
  if ( !*p_state_5__2 )
    goto LABEL_25;
  klass = v6->klass;
  if ( *(_WORD *)&v6->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v8;
      p_offset += 2;
      if ( v8 >= *(unsigned __int16 *)&v6->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_14:
    p_method = sub_B08590(*p_state_5__2, SimpleAnimation_State_TypeInfo, 13LL);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(v6, *(_QWORD *)(p_method + 8)) <= 0.0 )
    goto LABEL_25;
  v11 = *p_state_5__2;
  if ( !v11 )
LABEL_28:
    sub_B7076C(this, method);
  v12 = v11->klass;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    v14 = (SimpleAnimation_State_c **)&v12->_1.interfaceOffsets->offset;
    while ( *(v14 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v13;
      v14 += 2;
      if ( v13 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 5].method;
  }
  else
  {
LABEL_22:
    v15 = sub_B08590(v11, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8)) >= 1.0 )
  {
LABEL_25:
    ActionExtensions__Call(v2->fields.endCallback, 0LL);
    return 0;
  }
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_B70630(p__2__current);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_ClassBoardLine__WaitAnimationFinished_d__37_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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