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

  if ( (byte_4217B1F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2883/*"BrightTurnTransition"*/, method);
    sub_B0D8A4(&StringLiteral_2880/*"BrightTurn"*/, v9);
    sub_B0D8A4(&StringLiteral_2884/*"BrightTurnTransitionRoadOn"*/, v10);
    sub_B0D8A4(&StringLiteral_2885/*"BrightTurnUnLock"*/, v11);
    sub_B0D8A4(&StringLiteral_2881/*"BrightTurnRoadOn"*/, v12);
    sub_B0D8A4(&StringLiteral_2882/*"BrightTurnRoadOnUnLock"*/, v13);
    sub_B0D8A4(&StringLiteral_2836/*"BlackOutTransition"*/, v14);
    byte_4217B1F = 1;
  }
  v15 = (System_Int32_array **)StringLiteral_2880/*"BrightTurn"*/;
  this->fields.animNameBrightTurn = (struct System_String_o *)StringLiteral_2880/*"BrightTurn"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.animNameBrightTurn, v15, v2, v3, v4, v5, v6, v7);
  v16 = (System_Int32_array **)StringLiteral_2881/*"BrightTurnRoadOn"*/;
  this->fields.animNameBrightTurnRoadOn = (struct System_String_o *)StringLiteral_2881/*"BrightTurnRoadOn"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.animNameBrightTurnRoadOn, v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_2885/*"BrightTurnUnLock"*/;
  this->fields.animNameBrightTurnUnlock = (struct System_String_o *)StringLiteral_2885/*"BrightTurnUnLock"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.animNameBrightTurnUnlock, v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_Int32_array **)StringLiteral_2882/*"BrightTurnRoadOnUnLock"*/;
  this->fields.animNameBrightTurnRoadOnUnlock = (struct System_String_o *)StringLiteral_2882/*"BrightTurnRoadOnUnLock"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnRoadOnUnlock,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Int32_array **)StringLiteral_2883/*"BrightTurnTransition"*/;
  this->fields.animNameBrightTurnTransition = (struct System_String_o *)StringLiteral_2883/*"BrightTurnTransition"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnTransition,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (System_Int32_array **)StringLiteral_2884/*"BrightTurnTransitionRoadOn"*/;
  this->fields.animNameBrightTurnTransitionRoadOn = (struct System_String_o *)StringLiteral_2884/*"BrightTurnTransitionRoadOn"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnTransitionRoadOn,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (System_Int32_array **)StringLiteral_2836/*"BlackOutTransition"*/;
  this->fields.animNameBlackOutTransition = (struct System_String_o *)StringLiteral_2836/*"BlackOutTransition"*/;
  sub_B0D840(
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
  ClassBoardLine_o *v2; // x19
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
  int *p_offset; // x11
  __int64 p_method; // x0
  ClassBoardLine_c *v17; // x8
  ClassBoardLine_o *v18; // x20
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct IClassBoardLineModel_o *v24; // x20
  IClassBoardLineModel_c *v25; // x8
  unsigned __int64 v26; // x10
  IClassBoardLineModel_c **v27; // x11
  __int64 v28; // x0
  ClassBoardLine_c *v29; // x8
  ClassBoardLine_o *v30; // x20
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  struct IClassBoardLineModel_o *v35; // x20
  IClassBoardLineModel_c *v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  struct IClassBoardLineModel_o *v40; // x20
  IClassBoardLineModel_c *v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  ClassBoardLine_c *v45; // x8
  ClassBoardLine_o *v46; // x20
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  struct IClassBoardLineModel_o *v50; // x20
  IClassBoardLineModel_c *v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  ClassBoardLine_c *v55; // x8
  ClassBoardLine_o *v56; // x20
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  struct IClassBoardLineModel_o *v60; // x20
  IClassBoardLineModel_c *v61; // x8
  unsigned __int64 v62; // x10
  IClassBoardLineModel_c **v63; // x11
  __int64 v64; // x0
  ClassBoardLine_c *v65; // x8
  ClassBoardLine_o *v66; // x20
  unsigned __int64 v67; // x10
  int32_t *v68; // x11
  __int64 v69; // x0
  struct IClassBoardLineModel_o *v70; // x19
  IClassBoardLineModel_c *v71; // x8
  unsigned __int64 v72; // x10
  IClassBoardLineModel_c **v73; // x11
  __int64 v74; // x0
  ClassBoardLine_c *v75; // x8
  ClassBoardLine_o *v76; // x19
  unsigned __int64 v77; // x10
  int32_t *v78; // x11
  __int64 v79; // x0
  int32_t notConnectedSprite; // w20
  int32_t v81; // w22
  Il2CppObject *current; // x19
  Il2CppClass *v83; // x8
  unsigned __int64 v84; // x10
  int32_t *v85; // x11
  __int64 v86; // x0
  Il2CppClass *v87; // x8
  unsigned __int64 v88; // x10
  IClassBoardSquareModel_c **v89; // x11
  __int64 v90; // x0
  System_Enum_o *v91; // x19
  System_Enum_o *v92; // x0
  _BOOL8 v93; // x0
  ClassBoardLine_c *v95; // x8
  ClassBoardLine_o *v96; // x20
  unsigned __int64 v97; // x10
  int32_t *v98; // x11
  __int64 v99; // x0
  System_Enum_o *v100; // x20
  struct IClassBoardLineModel_o *v101; // x20
  IClassBoardLineModel_c *v102; // x8
  unsigned __int64 v103; // x10
  IClassBoardLineModel_c **v104; // x11
  __int64 v105; // x0
  ClassBoardLine_c *v106; // x8
  ClassBoardLine_o *v107; // x20
  unsigned __int64 v108; // x10
  int32_t *v109; // x11
  __int64 v110; // x0
  System_Enum_o *v111; // x20
  struct IClassBoardLineModel_o *v112; // x20
  IClassBoardLineModel_c *v113; // x8
  unsigned __int64 v114; // x10
  int *v115; // x11
  __int64 v116; // x0
  ClassBoardLine_c *v117; // x8
  ClassBoardLine_o *v118; // x20
  unsigned __int64 v119; // x10
  int32_t *v120; // x11
  __int64 v121; // x0
  System_Enum_o *v122; // x20
  struct IClassBoardLineModel_o *v123; // x19
  IClassBoardLineModel_c *v124; // x8
  unsigned __int64 v125; // x10
  IClassBoardLineModel_c **v126; // x11
  __int64 v127; // x0
  ClassBoardLine_c *v128; // x8
  ClassBoardLine_o *v129; // x19
  unsigned __int64 v130; // x10
  int32_t *v131; // x11
  __int64 v132; // x0
  System_Enum_o *v133; // x19
  System_Collections_Generic_List_Enumerator_T__o v134; // [xsp+0h] [xbp-80h] BYREF
  int v135; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v136; // [xsp+20h] [xbp-60h] BYREF
  ClassBoardLine_o *v137; // [xsp+48h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4217B1C & 1) == 0 )
  {
    sub_B0D8A4(&AcquireFlag_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v5);
    sub_B0D8A4(&IClassBoardLineModel_TypeInfo, v6);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v10);
    this = (ClassBoardLine_o *)sub_B0D8A4(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v11);
    byte_4217B1C = 1;
  }
  v137 = 0LL;
  memset(&v136, 0, sizeof(v136));
  LineModel_k__BackingField = v2->fields._LineModel_k__BackingField;
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
    p_method = sub_AA67A0(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_187;
  v17 = this->klass;
  v18 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    v20 = &v17->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v20 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v19;
      v20 += 4;
      if ( v19 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v21 = (__int64)(&v17[1]._1.gc_desc + 2 * *v20);
  }
  else
  {
LABEL_15:
    v21 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v24 = v2->fields._LineModel_k__BackingField;
    if ( !v24 )
      goto LABEL_187;
    v25 = v24->klass;
    if ( *(_WORD *)&v24->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = (IClassBoardLineModel_c **)&v25->_1.interfaceOffsets->offset;
      while ( *(v27 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v26;
        v27 += 2;
        if ( v26 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      v28 = (__int64)&v25->vtable[*(_DWORD *)v27 + 1].method;
    }
    else
    {
LABEL_23:
      v28 = sub_AA67A0(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v28)(
                                 v24,
                                 *(_QWORD *)(v28 + 8));
    if ( !this )
      goto LABEL_187;
    v29 = this->klass;
    v30 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = &v29->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v32 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_30;
      }
      v33 = (__int64)(&v29[1]._1.gc_desc + 2 * *v32);
    }
    else
    {
LABEL_30:
      v33 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v40 = v2->fields._LineModel_k__BackingField;
      if ( v40 )
      {
        v41 = v40->klass;
        if ( *(_WORD *)&v40->klass->_2.bitflags1 )
        {
          v42 = 0LL;
          v43 = &v41->_1.interfaceOffsets->offset;
          while ( *((IClassBoardLineModel_c **)v43 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v42;
            v43 += 4;
            if ( v42 >= *(unsigned __int16 *)&v40->klass->_2.bitflags1 )
              goto LABEL_44;
          }
          v44 = (__int64)&v41->vtable[*v43].method;
        }
        else
        {
LABEL_44:
          v44 = sub_AA67A0(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
        }
        this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v44)(
                                     v40,
                                     *(_QWORD *)(v44 + 8));
        if ( this )
        {
          v95 = this->klass;
          v96 = this;
          if ( *(_WORD *)&this->klass->_2.bitflags1 )
          {
            v97 = 0LL;
            v98 = &v95->_1.interfaceOffsets->offset;
            while ( *((IClassBoardSquareModel_c **)v98 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v97;
              v98 += 4;
              if ( v97 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                goto LABEL_130;
            }
            v99 = (__int64)(&v95[1]._1.events + 2 * *v98);
          }
          else
          {
LABEL_130:
            v99 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 13LL);
          }
          LODWORD(v134.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v99)(
                                        v96,
                                        0LL,
                                        *(_QWORD *)(v99 + 8));
          v100 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v134);
          v135 = 1;
          this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v135);
          if ( v100 )
          {
            this = (ClassBoardLine_o *)System_Enum__HasFlag(v100, (System_Enum_o *)this, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v101 = v2->fields._LineModel_k__BackingField;
              if ( !v101 )
                goto LABEL_187;
              v102 = v101->klass;
              if ( *(_WORD *)&v101->klass->_2.bitflags1 )
              {
                v103 = 0LL;
                v104 = (IClassBoardLineModel_c **)&v102->_1.interfaceOffsets->offset;
                while ( *(v104 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  ++v103;
                  v104 += 2;
                  if ( v103 >= *(unsigned __int16 *)&v101->klass->_2.bitflags1 )
                    goto LABEL_139;
                }
                v105 = (__int64)&v102->vtable[*(_DWORD *)v104 + 1].method;
              }
              else
              {
LABEL_139:
                v105 = sub_AA67A0(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
              }
              this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v105)(
                                           v101,
                                           *(_QWORD *)(v105 + 8));
              if ( !this )
                goto LABEL_187;
              v106 = this->klass;
              v107 = this;
              if ( *(_WORD *)&this->klass->_2.bitflags1 )
              {
                v108 = 0LL;
                v109 = &v106->_1.interfaceOffsets->offset;
                while ( *((IClassBoardSquareModel_c **)v109 - 1) != IClassBoardSquareModel_TypeInfo )
                {
                  ++v108;
                  v109 += 4;
                  if ( v108 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                    goto LABEL_146;
                }
                v110 = (__int64)(&v106[1]._1.events + 2 * *v109);
              }
              else
              {
LABEL_146:
                v110 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 13LL);
              }
              LODWORD(v134.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v110)(
                                            v107,
                                            0LL,
                                            *(_QWORD *)(v110 + 8));
              v111 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v134);
              v135 = 1;
              this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v135);
              if ( !v111 )
                goto LABEL_187;
              this = (ClassBoardLine_o *)System_Enum__HasFlag(v111, (System_Enum_o *)this, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                return 2;
            }
            v112 = v2->fields._LineModel_k__BackingField;
            if ( v112 )
            {
              v113 = v112->klass;
              if ( *(_WORD *)&v112->klass->_2.bitflags1 )
              {
                v114 = 0LL;
                v115 = &v113->_1.interfaceOffsets->offset;
                while ( *((IClassBoardLineModel_c **)v115 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  ++v114;
                  v115 += 4;
                  if ( v114 >= *(unsigned __int16 *)&v112->klass->_2.bitflags1 )
                    goto LABEL_156;
                }
                v116 = (__int64)&v113->vtable[*v115].method;
              }
              else
              {
LABEL_156:
                v116 = sub_AA67A0(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
              }
              this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v116)(
                                           v112,
                                           *(_QWORD *)(v116 + 8));
              if ( this )
              {
                v117 = this->klass;
                v118 = this;
                if ( *(_WORD *)&this->klass->_2.bitflags1 )
                {
                  v119 = 0LL;
                  v120 = &v117->_1.interfaceOffsets->offset;
                  while ( *((IClassBoardSquareModel_c **)v120 - 1) != IClassBoardSquareModel_TypeInfo )
                  {
                    ++v119;
                    v120 += 4;
                    if ( v119 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                      goto LABEL_163;
                  }
                  v121 = (__int64)(&v117[1]._1.events + 2 * *v120);
                }
                else
                {
LABEL_163:
                  v121 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 13LL);
                }
                LODWORD(v134.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v121)(
                                              v118,
                                              0LL,
                                              *(_QWORD *)(v121 + 8));
                v122 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v134);
                v135 = 1;
                this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v135);
                if ( v122 )
                {
                  this = (ClassBoardLine_o *)System_Enum__HasFlag(v122, (System_Enum_o *)this, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    return 1;
                  v123 = v2->fields._LineModel_k__BackingField;
                  if ( v123 )
                  {
                    v124 = v123->klass;
                    if ( *(_WORD *)&v123->klass->_2.bitflags1 )
                    {
                      v125 = 0LL;
                      v126 = (IClassBoardLineModel_c **)&v124->_1.interfaceOffsets->offset;
                      while ( *(v126 - 1) != IClassBoardLineModel_TypeInfo )
                      {
                        ++v125;
                        v126 += 2;
                        if ( v125 >= *(unsigned __int16 *)&v123->klass->_2.bitflags1 )
                          goto LABEL_173;
                      }
                      v127 = (__int64)&v124->vtable[*(_DWORD *)v126 + 1].method;
                    }
                    else
                    {
LABEL_173:
                      v127 = sub_AA67A0(v123, IClassBoardLineModel_TypeInfo, 1LL);
                    }
                    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v127)(
                                                 v123,
                                                 *(_QWORD *)(v127 + 8));
                    if ( this )
                    {
                      v128 = this->klass;
                      v129 = this;
                      if ( *(_WORD *)&this->klass->_2.bitflags1 )
                      {
                        v130 = 0LL;
                        v131 = &v128->_1.interfaceOffsets->offset;
                        while ( *((IClassBoardSquareModel_c **)v131 - 1) != IClassBoardSquareModel_TypeInfo )
                        {
                          ++v130;
                          v131 += 4;
                          if ( v130 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                            goto LABEL_180;
                        }
                        v132 = (__int64)(&v128[1]._1.events + 2 * *v131);
                      }
                      else
                      {
LABEL_180:
                        v132 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 13LL);
                      }
                      LODWORD(v134.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v132)(
                                                    v129,
                                                    0LL,
                                                    *(_QWORD *)(v132 + 8));
                      v133 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v134);
                      v135 = 1;
                      this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v135);
                      if ( v133 )
                        return System_Enum__HasFlag(v133, (System_Enum_o *)this, 0LL);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_187:
      sub_B0D97C(this);
    }
  }
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v137 = (ClassBoardLine_o *)v34;
  v35 = v2->fields._LineModel_k__BackingField;
  if ( !v35 )
    goto LABEL_187;
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
        goto LABEL_38;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_38:
    v39 = sub_AA67A0(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v39)(
                               v35,
                               *(_QWORD *)(v39 + 8));
  if ( !this )
    goto LABEL_187;
  v45 = this->klass;
  v46 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v45->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v48 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v49 = (__int64)(&v45[1]._1.gc_desc + 2 * *v48);
  }
  else
  {
LABEL_51:
    v49 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v49)(v46, *(_QWORD *)(v49 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v50 = v2->fields._LineModel_k__BackingField;
    if ( !v50 )
      goto LABEL_187;
    v51 = v50->klass;
    if ( *(_WORD *)&v50->klass->_2.bitflags1 )
    {
      v52 = 0LL;
      v53 = &v51->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v53 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v52;
        v53 += 4;
        if ( v52 >= *(unsigned __int16 *)&v50->klass->_2.bitflags1 )
          goto LABEL_59;
      }
      v54 = (__int64)&v51->vtable[*v53].method;
    }
    else
    {
LABEL_59:
      v54 = sub_AA67A0(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v54)(
                                 v50,
                                 *(_QWORD *)(v54 + 8));
    if ( !this )
      goto LABEL_187;
    v55 = this->klass;
    v56 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v57 = 0LL;
      v58 = &v55->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v58 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v57;
        v58 += 4;
        if ( v57 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_66;
      }
      v59 = (__int64)(&v55[1]._1.implementedInterfaces + 2 * *v58);
    }
    else
    {
LABEL_66:
      v59 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 15LL);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v59)(
                                 v56,
                                 &v137,
                                 *(_QWORD *)(v59 + 8));
  }
  v60 = v2->fields._LineModel_k__BackingField;
  if ( !v60 )
    goto LABEL_187;
  v61 = v60->klass;
  if ( *(_WORD *)&v60->klass->_2.bitflags1 )
  {
    v62 = 0LL;
    v63 = (IClassBoardLineModel_c **)&v61->_1.interfaceOffsets->offset;
    while ( *(v63 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v62;
      v63 += 2;
      if ( v62 >= *(unsigned __int16 *)&v60->klass->_2.bitflags1 )
        goto LABEL_74;
    }
    v64 = (__int64)&v61->vtable[*(_DWORD *)v63 + 1].method;
  }
  else
  {
LABEL_74:
    v64 = sub_AA67A0(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v64)(
                               v60,
                               *(_QWORD *)(v64 + 8));
  if ( !this )
    goto LABEL_187;
  v65 = this->klass;
  v66 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v67 = 0LL;
    v68 = &v65->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v68 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v67;
      v68 += 4;
      if ( v67 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_81;
    }
    v69 = (__int64)(&v65[1]._1.gc_desc + 2 * *v68);
  }
  else
  {
LABEL_81:
    v69 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v69)(v66, *(_QWORD *)(v69 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v70 = v2->fields._LineModel_k__BackingField;
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
        v74 = sub_AA67A0(v70, IClassBoardLineModel_TypeInfo, 1LL);
      }
      this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v74)(
                                   v70,
                                   *(_QWORD *)(v74 + 8));
      if ( this )
      {
        v75 = this->klass;
        v76 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v77 = 0LL;
          v78 = &v75->_1.interfaceOffsets->offset;
          while ( *((IClassBoardSquareModel_c **)v78 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v77;
            v78 += 4;
            if ( v77 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_96;
          }
          v79 = (__int64)(&v75[1]._1.implementedInterfaces + 2 * *v78);
        }
        else
        {
LABEL_96:
          v79 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 15LL);
        }
        (*(void (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v79)(v76, &v137, *(_QWORD *)(v79 + 8));
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
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v81 = 0;
  v136 = v134;
  while ( 1 )
  {
    v93 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v136,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    if ( !v93 )
      break;
    current = v136.fields.current;
    if ( !v136.fields.current )
      sub_B0D97C(v93);
    v83 = v136.fields.current->klass;
    if ( *(_WORD *)&v136.fields.current->klass->_2.bitflags1 )
    {
      v84 = 0LL;
      v85 = &v83->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v85 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v84;
        v85 += 4;
        if ( v84 >= *(unsigned __int16 *)&v136.fields.current->klass->_2.bitflags1 )
          goto LABEL_106;
      }
      v86 = (__int64)&v83->vtable[*v85 + 5].method;
    }
    else
    {
LABEL_106:
      v86 = sub_AA67A0(v136.fields.current, IClassBoardSquareModel_TypeInfo, 5LL);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v86)(current, *(_QWORD *)(v86 + 8)) & 1) != 0 )
    {
      --notConnectedSprite;
    }
    else
    {
      v87 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v88 = 0LL;
        v89 = (IClassBoardSquareModel_c **)&v87->_1.interfaceOffsets->offset;
        while ( *(v89 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v88;
          v89 += 2;
          if ( v88 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_113;
        }
        v90 = (__int64)&v87->vtable[*(_DWORD *)v89 + 13].method;
      }
      else
      {
LABEL_113:
        v90 = sub_AA67A0(current, IClassBoardSquareModel_TypeInfo, 13LL);
      }
      LODWORD(v134.fields.list) = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v90)(
                                    current,
                                    0LL,
                                    *(_QWORD *)(v90 + 8));
      v91 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v134);
      v135 = 1;
      v92 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v135);
      if ( !v91 )
        sub_B0D97C(v92);
      v81 += System_Enum__HasFlag(v91, v92, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v136,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  if ( !v81 )
    return 0;
  if ( v81 < notConnectedSprite )
    return 1;
  return 2;
}


float __fastcall ClassBoardLine__GetSquareTypeOffset(
        ClassBoardLine_o *this,
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  ClassBoardLine_o *v4; // x19
  __int64 v5; // x1
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  float *p_blankOffsetLength; // x8

  v4 = this;
  if ( (byte_4217B1D & 1) == 0 )
  {
    sub_B0D8A4(&IClassBoardLockModel_TypeInfo, squareModel);
    this = (ClassBoardLine_o *)sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v5);
    byte_4217B1D = 1;
  }
  if ( !squareModel )
    sub_B0D97C(this);
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
    p_method = sub_AA67A0(squareModel, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    p_blankOffsetLength = &v4->fields.blankOffsetLength;
  }
  else if ( sub_B0D964(squareModel, IClassBoardLockModel_TypeInfo) )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t ConnectType; // w0
  const MethodInfo *v9; // x1
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *animNameBrightTurnRoadOnUnlock; // x20
  System_Action_o *v14; // x0
  __int64 *v15; // x8
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x3

  if ( (byte_4217B1B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardEffectPlayer_GetData_bool___, v3);
    sub_B0D8A4(&Method_ClassBoardLine__PlayReleaseEffect_b__33_0__, v4);
    sub_B0D8A4(&Method_ClassBoardLine__PlayReleaseEffect_b__33_1__, v5);
    sub_B0D8A4(&Method_ClassBoardLine__PlayReleaseEffect_b__33_2__, v6);
    sub_B0D8A4(&Method_ClassBoardLine__PlayReleaseEffect_b__33_3__, v7);
    byte_4217B1B = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      if ( ClassBoardEffectPlayer__GetData_bool_(
             releaseEffectPlayer,
             (const MethodInfo_170D1BC *)Method_ClassBoardEffectPlayer_GetData_bool___) )
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOnUnlock;
        v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
        v15 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_2__;
      }
      else
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOn;
        v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
        v15 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_3__;
      }
      goto LABEL_15;
    }
LABEL_16:
    sub_B0D97C(releaseEffectPlayer);
  }
  if ( ConnectType != 1 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      ClassBoardEffectPlayer__End(releaseEffectPlayer, v9);
      return;
    }
    goto LABEL_16;
  }
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  if ( !releaseEffectPlayer )
    goto LABEL_16;
  if ( ClassBoardEffectPlayer__GetData_bool_(
         releaseEffectPlayer,
         (const MethodInfo_170D1BC *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnUnlock;
    v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
    v15 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_0__;
  }
  else
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurn;
    v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
    v15 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_1__;
  }
LABEL_15:
  v18 = v14;
  System_Action___ctor(v14, (Il2CppObject *)this, *v15, 0LL);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnRoadOnUnlock, v18, v19);
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
    sub_B0D97C(simpleAnimation);
  }
  SimpleAnimation__Play_50482404(simpleAnimation, name, 0LL);
  v9 = ClassBoardLine__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall ClassBoardLine__PlayTransition(ClassBoardLine_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t ConnectType; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *animNameBrightTurnTransitionRoadOn; // x20
  System_Action_o *v10; // x0
  __int64 *v11; // x8
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x3

  if ( (byte_4217B19 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardLine__PlayTransition_b__28_0__, v3);
    sub_B0D8A4(&Method_ClassBoardLine__PlayTransition_b__28_1__, v4);
    sub_B0D8A4(&Method_ClassBoardLine__PlayTransition_b__28_2__, v5);
    byte_4217B19 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransitionRoadOn;
    v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    v11 = &Method_ClassBoardLine__PlayTransition_b__28_1__;
  }
  else if ( ConnectType == 1 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransition;
    v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    v11 = &Method_ClassBoardLine__PlayTransition_b__28_0__;
  }
  else
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBlackOutTransition;
    v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    v11 = &Method_ClassBoardLine__PlayTransition_b__28_2__;
  }
  v12 = v10;
  System_Action___ctor(v10, (Il2CppObject *)this, *v11, 0LL);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnTransitionRoadOn, v12, v13);
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
  UnityEngine_Object_o *name; // x0
  System_String_array *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x23
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_c *v37; // x8
  UnityEngine_Object_o *v38; // x23
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x23
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  IClassBoardLineModel_c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  UnityEngine_Object_c *v60; // x8
  UnityEngine_Object_o *v61; // x22
  unsigned __int64 v62; // x10
  int32_t *v63; // x11
  __int64 v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x22
  System_String_o *v72; // x0
  const MethodInfo *v73; // x1
  System_Int32_array **v74; // x20
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  __int64 v91; // x1
  __int64 v92; // x2
  System_Action_o *v93; // x21
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  struct UnityEngine_GameObject_array *effectObjects; // x22
  int max_length; // w8
  int v102; // w9
  Il2CppClass **v103; // x8
  UnityEngine_GameObject_o *v104; // x21
  UnityEngine_Transform_o *transform; // x0
  float lineLength; // s8
  UnityEngine_Transform_o *v107; // x20
  float y; // s9
  int v109; // s2
  float v110; // s0
  float v111; // s1
  __int64 v112; // x0
  __int64 v113; // x0
  int v114; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217B18 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, setLineModel);
    sub_B0D8A4(&ClassBoardEffectPlayer_TypeInfo, v10);
    sub_B0D8A4(&Method_ClassBoardLine_PlayReleaseEffect__, v11);
    sub_B0D8A4(&IClassBoardLineModel_TypeInfo, v12);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v13);
    sub_B0D8A4(&string___TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v15);
    byte_4217B18 = 1;
  }
  v114 = 0;
  this->fields._LineModel_k__BackingField = setLineModel;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._LineModel_k__BackingField,
    (System_Int32_array **)setLineModel,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  name = (UnityEngine_Object_o *)sub_B0D8BC(string___TypeInfo, 5LL);
  if ( !gameObject )
    goto LABEL_63;
  v18 = (System_String_array *)name;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL);
  if ( !v18 )
    goto LABEL_63;
  v25 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B0D964(name, v18->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
  }
  if ( !v18->max_length )
    goto LABEL_64;
  v18->m_Items[0] = (System_String_o *)v25;
  sub_B0D840((BattleServantConfConponent_o *)v18->m_Items, v25, v19, v20, v21, v22, v23, v24);
  name = (UnityEngine_Object_o *)StringLiteral_15952/*"_"*/;
  if ( StringLiteral_15952/*"_"*/ )
  {
    name = (UnityEngine_Object_o *)sub_B0D964(StringLiteral_15952/*"_"*/, v18->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
    v32 = (System_Int32_array **)StringLiteral_15952/*"_"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v18->max_length <= 1 )
    goto LABEL_64;
  v18->m_Items[1] = (System_String_o *)v32;
  sub_B0D840((BattleServantConfConponent_o *)&v18->m_Items[1], v32, v26, v27, v28, v29, v30, v31);
  if ( !setLineModel )
    goto LABEL_63;
  klass = setLineModel->klass;
  if ( *(_WORD *)&setLineModel->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v34;
      p_offset += 4;
      if ( v34 >= *(unsigned __int16 *)&setLineModel->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_18:
    p_method = sub_AA67A0(setLineModel, IClassBoardLineModel_TypeInfo, 0LL);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))p_method)(
                                   setLineModel,
                                   *(_QWORD *)(p_method + 8));
  if ( !name )
    goto LABEL_63;
  v37 = name->klass;
  v38 = name;
  if ( *(_WORD *)&name->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v37->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v40 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&name->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v41 = (__int64)(&v37->vtable._0_Equals.method + 2 * *v40);
  }
  else
  {
LABEL_25:
    v41 = sub_AA67A0(name, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v114 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v114, 0LL);
  v48 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B0D964(name, v18->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
  }
  if ( v18->max_length <= 2 )
    goto LABEL_64;
  v18->m_Items[2] = (System_String_o *)v48;
  sub_B0D840((BattleServantConfConponent_o *)&v18->m_Items[2], v48, v42, v43, v44, v45, v46, v47);
  name = (UnityEngine_Object_o *)StringLiteral_15952/*"_"*/;
  if ( StringLiteral_15952/*"_"*/ )
  {
    name = (UnityEngine_Object_o *)sub_B0D964(StringLiteral_15952/*"_"*/, v18->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
    v55 = (System_Int32_array **)StringLiteral_15952/*"_"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v18->max_length <= 3 )
    goto LABEL_64;
  v18->m_Items[3] = (System_String_o *)v55;
  sub_B0D840((BattleServantConfConponent_o *)&v18->m_Items[3], v55, v49, v50, v51, v52, v53, v54);
  v56 = setLineModel->klass;
  if ( *(_WORD *)&setLineModel->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v58 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)&setLineModel->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v59 = (__int64)&v56->vtable[*v58 + 1].method;
  }
  else
  {
LABEL_39:
    v59 = sub_AA67A0(setLineModel, IClassBoardLineModel_TypeInfo, 1LL);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v59)(
                                   setLineModel,
                                   *(_QWORD *)(v59 + 8));
  if ( !name )
    goto LABEL_63;
  v60 = name->klass;
  v61 = name;
  if ( *(_WORD *)&name->klass->_2.bitflags1 )
  {
    v62 = 0LL;
    v63 = &v60->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v63 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v62;
      v63 += 4;
      if ( v62 >= *(unsigned __int16 *)&name->klass->_2.bitflags1 )
        goto LABEL_46;
    }
    v64 = (__int64)(&v60->vtable._0_Equals.method + 2 * *v63);
  }
  else
  {
LABEL_46:
    v64 = sub_AA67A0(name, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v114 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v64)(v61, *(_QWORD *)(v64 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v114, 0LL);
  v71 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B0D964(name, v18->obj.klass->_1.element_class);
    if ( !name )
    {
LABEL_65:
      v113 = sub_B0D99C(name);
      sub_B0D948(v113, 0LL);
    }
  }
  if ( v18->max_length <= 4 )
    goto LABEL_64;
  v18->m_Items[4] = (System_String_o *)v71;
  sub_B0D840((BattleServantConfConponent_o *)&v18->m_Items[4], v71, v65, v66, v67, v68, v69, v70);
  v72 = System_String__Concat_43930028(v18, 0LL);
  UnityEngine_Object__set_name(gameObject, v72, 0LL);
  ClassBoardLine__UpdateLine(this, v73);
  name = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !name )
    goto LABEL_63;
  v74 = (System_Int32_array **)UnityEngine_Object__get_name(name, 0LL);
  v77 = sub_B0D974(ClassBoardEffectPlayer_TypeInfo, v75, v76);
  System_Object___ctor((Il2CppObject *)v77, 0LL);
  *(_QWORD *)(v77 + 16) = v74;
  sub_B0D840((BattleServantConfConponent_o *)(v77 + 16), v74, v78, v79, v80, v81, v82, v83);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v77;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.releaseEffectPlayer,
    (System_Int32_array **)v77,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v93 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v91, v92);
  System_Action___ctor(v93, (Il2CppObject *)this, Method_ClassBoardLine_PlayReleaseEffect__, 0LL);
  if ( !releaseEffectPlayer
    || (releaseEffectPlayer->fields.playCallback = v93,
        sub_B0D840(
          (BattleServantConfConponent_o *)&releaseEffectPlayer->fields.playCallback,
          (System_Int32_array **)v93,
          v94,
          v95,
          v96,
          v97,
          v98,
          v99),
        effectObjects = this->fields.effectObjects,
        v114 = 0,
        !effectObjects) )
  {
LABEL_63:
    sub_B0D97C(name);
  }
  max_length = effectObjects->max_length;
  if ( max_length >= 1 )
  {
    v102 = 0;
    while ( v102 < (unsigned int)max_length )
    {
      v103 = &effectObjects->obj.klass + v102;
      v104 = (UnityEngine_GameObject_o *)v103[4];
      if ( !v104 )
        goto LABEL_63;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v103[4], 0LL);
      lineLength = this->fields.lineLength;
      v107 = transform;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v104, 0LL);
      if ( !name )
        goto LABEL_63;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)name, 0LL);
      y = localScale.fields.y;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v104, 0LL);
      if ( !name )
        goto LABEL_63;
      *(UnityEngine_Vector3_o *)(&v109 - 2) = UnityEngine_Transform__get_localScale(
                                                (UnityEngine_Transform_o *)name,
                                                0LL);
      if ( !v107 )
        goto LABEL_63;
      v110 = lineLength;
      v111 = y;
      UnityEngine_Transform__set_localScale(v107, *(UnityEngine_Vector3_o *)(&v109 - 2), 0LL);
      v102 = v114 + 1;
      v114 = v102;
      max_length = effectObjects->max_length;
      if ( v102 >= max_length )
        return;
    }
LABEL_64:
    v112 = sub_B0D9A8(name);
    sub_B0D948(v112, 0LL);
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
  __int64 v3; // x1
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  ClassBoardLine_c *v9; // x8
  ClassBoardLine_o *v10; // x20
  unsigned __int64 v11; // x10
  int32_t *v12; // x11
  __int64 v13; // x0
  float v14; // s0
  float v15; // s1
  float v16; // s2
  struct IClassBoardLineModel_o *v17; // x20
  IClassBoardLineModel_c *v18; // x8
  float v19; // s11
  float v20; // s10
  float v21; // s12
  unsigned __int64 v22; // x10
  IClassBoardLineModel_c **v23; // x11
  __int64 v24; // x0
  ClassBoardLine_c *v25; // x8
  ClassBoardLine_o *v26; // x20
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  long double v30; // q0 OVERLAPPED
  float v31; // s9
  float v32; // s1
  float v33; // s14
  float v34; // s2
  float v35; // s13
  float v36; // s1
  float v37; // s2
  float v38; // s0
  float v39; // s1
  float v40; // s2
  struct IClassBoardLineModel_o *v41; // x20
  IClassBoardLineModel_c *v42; // x8
  float v43; // s15
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  IClassBoardSquareModel_o *v47; // x0
  const MethodInfo *v48; // x2
  float SquareTypeOffset; // s0
  struct IClassBoardLineModel_o *v50; // x20
  IClassBoardLineModel_c *v51; // x8
  float v52; // s0
  float v53; // s8
  float v54; // s11
  float v55; // s15
  float v56; // s10
  unsigned __int64 v57; // x10
  IClassBoardLineModel_c **v58; // x11
  __int64 v59; // x0
  IClassBoardSquareModel_o *v60; // x0
  const MethodInfo *v61; // x2
  float v62; // s0
  float magnitude; // s8
  const MethodInfo *v64; // x1
  int v65; // w20
  UnityEngine_Component_o **p_connectedSprite; // x22
  UnityEngine_Component_o *v67; // x20
  int32_t v68; // w0
  float v69; // s9
  UnityEngine_Transform_o *transform; // x19
  float v71; // s0
  float v72; // s1
  float v73; // s2
  __int64 v74; // [xsp+0h] [xbp-90h] BYREF
  float v75; // [xsp+8h] [xbp-88h]
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  float v77; // [xsp+68h] [xbp-28h]
  float v78; // [xsp+6Ch] [xbp-24h]
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s3.4,4:s4.4,8:s5.4

  v2 = this;
  if ( (byte_4217B1A & 1) == 0 )
  {
    sub_B0D8A4(&IClassBoardLineModel_TypeInfo, method);
    this = (ClassBoardLine_o *)sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v3);
    byte_4217B1A = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v75 = 0.0;
  v74 = 0LL;
  LineModel_k__BackingField = v2->fields._LineModel_k__BackingField;
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
    p_method = sub_AA67A0(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_61;
  v9 = this->klass;
  v10 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    v12 = &v9->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v12 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v11;
      v12 += 4;
      if ( v11 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v13 = (__int64)(&v9->vtable._3_ToString.method + 2 * *v12);
  }
  else
  {
LABEL_15:
    v13 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
  v17 = v2->fields._LineModel_k__BackingField;
  if ( !v17 )
    goto LABEL_61;
  v18 = v17->klass;
  v19 = v14;
  v20 = v15;
  v21 = v16;
  if ( *(_WORD *)&v17->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = (IClassBoardLineModel_c **)&v18->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v22;
      v23 += 2;
      if ( v22 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v24 = (__int64)&v18->vtable[*(_DWORD *)v23 + 1].method;
  }
  else
  {
LABEL_22:
    v24 = sub_AA67A0(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v24)(
                               v17,
                               *(_QWORD *)(v24 + 8));
  if ( !this )
    goto LABEL_61;
  v25 = this->klass;
  v26 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v25->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v28 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v29 = (__int64)(&v25->vtable._3_ToString.method + 2 * *v28);
  }
  else
  {
LABEL_29:
    v29 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  v30 = ((long double (__fastcall *)(ClassBoardLine_o *, _QWORD))*(_QWORD *)v29)(v26, *(_QWORD *)(v29 + 8));
  v31 = *(float *)&v30;
  v33 = v32;
  v35 = v34;
  *(float *)&v30 = v19;
  v36 = v20;
  v37 = v21;
  v84.fields.x = v31;
  v84.fields.y = v33;
  v84.fields.z = v35;
  UnityEngine_Vector3__Distance(*(UnityEngine_Vector3_o *)&v30, v84, 0LL);
  v79.fields.x = v31 - v19;
  v79.fields.y = v33 - v20;
  v79.fields.z = v35 - v21;
  *(float *)&v74 = v31 - v19;
  *((float *)&v74 + 1) = v33 - v20;
  v75 = v35 - v21;
  *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_normalized(v79, (const MethodInfo *)&v74);
  v77 = v40;
  v78 = v39;
  v41 = v2->fields._LineModel_k__BackingField;
  if ( !v41 )
    goto LABEL_61;
  v42 = v41->klass;
  v43 = v38;
  if ( *(_WORD *)&v41->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    v45 = &v42->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v45 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)&v41->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v46 = (__int64)&v42->vtable[*v45].method;
  }
  else
  {
LABEL_36:
    v46 = sub_AA67A0(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  v47 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v46)(
                                      v41,
                                      *(_QWORD *)(v46 + 8));
  SquareTypeOffset = ClassBoardLine__GetSquareTypeOffset(v2, v47, v48);
  v50 = v2->fields._LineModel_k__BackingField;
  if ( !v50 )
    goto LABEL_61;
  v51 = v50->klass;
  v52 = SquareTypeOffset * 0.5;
  v53 = v43;
  v54 = v19 - (float)(v43 * v52);
  v55 = v20 - (float)(v78 * v52);
  v56 = v21 - (float)(v77 * v52);
  if ( *(_WORD *)&v50->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = (IClassBoardLineModel_c **)&v51->_1.interfaceOffsets->offset;
    while ( *(v58 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v57;
      v58 += 2;
      if ( v57 >= *(unsigned __int16 *)&v50->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v59 = (__int64)&v51->vtable[*(_DWORD *)v58 + 1].method;
  }
  else
  {
LABEL_43:
    v59 = sub_AA67A0(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  v60 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v59)(
                                      v50,
                                      *(_QWORD *)(v59 + 8));
  v62 = ClassBoardLine__GetSquareTypeOffset(v2, v60, v61) * 0.5;
  v80.fields.y = (float)(v31 + (float)(v53 * v62)) - v54;
  v80.fields.z = (float)(v33 + (float)(v78 * v62)) - v55;
  v80.fields.x = (float)(v35 + (float)(v77 * v62)) - v56;
  methoda.methodPointer = *(Il2CppMethodPointer *)&v80.fields.y;
  *(float *)&methoda.invoker_method = v80.fields.x;
  magnitude = UnityEngine_Vector3__get_magnitude(v80, &methoda);
  v2->fields.lineLength = magnitude;
  this = (ClassBoardLine_o *)ClassBoardLine__GetConnectType(v2, v64);
  if ( !v2->fields.notConnectedSprite )
    goto LABEL_61;
  v65 = (int)this;
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
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !v65 )
    goto LABEL_54;
  if ( v65 == 2 )
  {
    p_connectedSprite = (UnityEngine_Component_o **)&v2->fields.connectedOnSprite;
    goto LABEL_56;
  }
  if ( v65 != 1 )
LABEL_54:
    p_connectedSprite = (UnityEngine_Component_o **)&v2->fields.notConnectedSprite;
LABEL_56:
  v67 = *p_connectedSprite;
  if ( !*p_connectedSprite )
    goto LABEL_61;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(*p_connectedSprite, 0LL);
  if ( !this )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v68 = UnityEngine_Mathf__CeilToInt(magnitude, 0LL);
  UIWidget__set_width((UIWidget_o *)v67, v68, 0LL);
  v69 = atan2f(*((float *)&methoda.methodPointer + 1), *(float *)&methoda.methodPointer);
  this = (ClassBoardLine_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_61;
  v81.fields.y = 0.0;
  v81.fields.z = v69 * 57.296;
  v81.fields.x = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v81, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  *(UnityEngine_Vector3_o *)&v71 = UnityEngine_Vector3__get_normalized(v82, &methoda);
  if ( !transform )
    goto LABEL_61;
  v83.fields.x = v54 + (float)((float)(magnitude * 0.5) * v71);
  v83.fields.y = v55 + (float)((float)(magnitude * 0.5) * v72);
  v83.fields.z = v56 + (float)((float)(magnitude * 0.5) * v73);
  UnityEngine_Transform__set_localPosition(transform, v83, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardLine__WaitAnimationFinished(
        ClassBoardLine_o *this,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
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

  if ( (byte_4217B1E & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo, name);
    byte_4217B1E = 1;
  }
  v7 = sub_B0D974(ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo, name, endCallback);
  ClassBoardLine__WaitAnimationFinished_d__37___ctor((ClassBoardLine__WaitAnimationFinished_d__37_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v7 + 40) = name;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)name, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v7 + 48),
    (System_Int32_array **)endCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__33_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v4; // x1

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_B0D97C(simpleAnimation);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, v4);
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__33_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v4; // x1

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_B0D97C(simpleAnimation);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, v4);
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__33_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v4; // x1

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_B0D97C(simpleAnimation);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, v4);
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__33_3(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v4; // x1

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_B0D97C(simpleAnimation);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, v4);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B0D97C(0LL);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B0D97C(0LL);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B0D97C(0LL);
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
  sub_B0D840(
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
  SimpleAnimation_State_o *State; // x0
  struct SimpleAnimation_State_o **p_state_5__2; // x20
  struct SimpleAnimation_State_o *v7; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v9; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct SimpleAnimation_State_o *v12; // x20
  SimpleAnimation_State_c *v13; // x8
  unsigned __int64 v14; // x10
  SimpleAnimation_State_c **v15; // x11
  __int64 v16; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4211E28 & 1) == 0 )
  {
    this = (ClassBoardLine__WaitAnimationFinished_d__37_o *)sub_B0D8A4(&SimpleAnimation_State_TypeInfo, method);
    byte_4211E28 = 1;
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
    State = SimpleAnimation__GetState((SimpleAnimation_o *)this, v2->fields.name, 0LL);
    p_state_5__2 = &v2->fields._state_5__2;
    v2->fields._state_5__2 = State;
    sub_B0D840(&v2->fields._state_5__2, State);
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
    p_method = sub_AA67A0(*p_state_5__2, SimpleAnimation_State_TypeInfo, 13LL);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(v7, *(_QWORD *)(p_method + 8)) <= 0.0 )
    goto LABEL_25;
  v12 = *p_state_5__2;
  if ( !v12 )
LABEL_28:
    sub_B0D97C(this);
  v13 = v12->klass;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    v15 = (SimpleAnimation_State_c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v14;
      v15 += 2;
      if ( v14 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 5].method;
  }
  else
  {
LABEL_22:
    v16 = sub_AA67A0(v12, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) >= 1.0 )
  {
LABEL_25:
    ActionExtensions__Call(v2->fields.endCallback, 0LL);
    return 0;
  }
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_B0D840(p__2__current, 0LL);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_ClassBoardLine__WaitAnimationFinished_d__37_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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