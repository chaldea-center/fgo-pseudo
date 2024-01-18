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

  if ( (byte_41894F0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2872/*"BrightTurnTransition"*/, method);
    sub_B2C35C(&StringLiteral_2869/*"BrightTurn"*/, v9);
    sub_B2C35C(&StringLiteral_2873/*"BrightTurnTransitionRoadOn"*/, v10);
    sub_B2C35C(&StringLiteral_2874/*"BrightTurnUnLock"*/, v11);
    sub_B2C35C(&StringLiteral_2870/*"BrightTurnRoadOn"*/, v12);
    sub_B2C35C(&StringLiteral_2871/*"BrightTurnRoadOnUnLock"*/, v13);
    sub_B2C35C(&StringLiteral_2825/*"BlackOutTransition"*/, v14);
    byte_41894F0 = 1;
  }
  v15 = (System_Int32_array **)StringLiteral_2869/*"BrightTurn"*/;
  this->fields.animNameBrightTurn = (struct System_String_o *)StringLiteral_2869/*"BrightTurn"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.animNameBrightTurn, v15, v2, v3, v4, v5, v6, v7);
  v16 = (System_Int32_array **)StringLiteral_2870/*"BrightTurnRoadOn"*/;
  this->fields.animNameBrightTurnRoadOn = (struct System_String_o *)StringLiteral_2870/*"BrightTurnRoadOn"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.animNameBrightTurnRoadOn, v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_2874/*"BrightTurnUnLock"*/;
  this->fields.animNameBrightTurnUnlock = (struct System_String_o *)StringLiteral_2874/*"BrightTurnUnLock"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.animNameBrightTurnUnlock, v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_Int32_array **)StringLiteral_2871/*"BrightTurnRoadOnUnLock"*/;
  this->fields.animNameBrightTurnRoadOnUnlock = (struct System_String_o *)StringLiteral_2871/*"BrightTurnRoadOnUnLock"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnRoadOnUnlock,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Int32_array **)StringLiteral_2872/*"BrightTurnTransition"*/;
  this->fields.animNameBrightTurnTransition = (struct System_String_o *)StringLiteral_2872/*"BrightTurnTransition"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnTransition,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (System_Int32_array **)StringLiteral_2873/*"BrightTurnTransitionRoadOn"*/;
  this->fields.animNameBrightTurnTransitionRoadOn = (struct System_String_o *)StringLiteral_2873/*"BrightTurnTransitionRoadOn"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnTransitionRoadOn,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (System_Int32_array **)StringLiteral_2825/*"BlackOutTransition"*/;
  this->fields.animNameBlackOutTransition = (struct System_String_o *)StringLiteral_2825/*"BlackOutTransition"*/;
  sub_B2C2F8(
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
  __int64 v2; // x3
  ClassBoardLine_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v15; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x3
  ClassBoardLine_c *v19; // x8
  ClassBoardLine_o *v20; // x20
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x3
  struct IClassBoardLineModel_o *v25; // x20
  IClassBoardLineModel_c *v26; // x8
  unsigned __int64 v27; // x10
  IClassBoardLineModel_c **v28; // x11
  __int64 v29; // x0
  __int64 v30; // x3
  ClassBoardLine_c *v31; // x8
  ClassBoardLine_o *v32; // x20
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x20
  __int64 v38; // x3
  struct IClassBoardLineModel_o *v39; // x20
  IClassBoardLineModel_c *v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  struct IClassBoardLineModel_o *v44; // x20
  IClassBoardLineModel_c *v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x3
  ClassBoardLine_c *v50; // x8
  ClassBoardLine_o *v51; // x20
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x3
  struct IClassBoardLineModel_o *v56; // x20
  IClassBoardLineModel_c *v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  __int64 v61; // x3
  ClassBoardLine_c *v62; // x8
  ClassBoardLine_o *v63; // x20
  unsigned __int64 v64; // x10
  int32_t *v65; // x11
  __int64 v66; // x0
  struct IClassBoardLineModel_o *v67; // x20
  IClassBoardLineModel_c *v68; // x8
  unsigned __int64 v69; // x10
  IClassBoardLineModel_c **v70; // x11
  __int64 v71; // x0
  __int64 v72; // x3
  ClassBoardLine_c *v73; // x8
  ClassBoardLine_o *v74; // x20
  unsigned __int64 v75; // x10
  int32_t *v76; // x11
  __int64 v77; // x0
  __int64 v78; // x3
  struct IClassBoardLineModel_o *v79; // x19
  IClassBoardLineModel_c *v80; // x8
  unsigned __int64 v81; // x10
  IClassBoardLineModel_c **v82; // x11
  __int64 v83; // x0
  __int64 v84; // x3
  ClassBoardLine_c *v85; // x8
  ClassBoardLine_o *v86; // x19
  unsigned __int64 v87; // x10
  int32_t *v88; // x11
  __int64 v89; // x0
  int32_t notConnectedSprite; // w20
  int32_t v91; // w22
  Il2CppObject *current; // x19
  Il2CppClass *v93; // x8
  unsigned __int64 v94; // x10
  int32_t *v95; // x11
  __int64 v96; // x0
  __int64 v97; // x3
  Il2CppClass *v98; // x8
  unsigned __int64 v99; // x10
  IClassBoardSquareModel_c **v100; // x11
  __int64 v101; // x0
  System_Enum_o *v102; // x19
  System_Enum_o *v103; // x0
  _BOOL8 v104; // x0
  __int64 v105; // x1
  __int64 v106; // x3
  __int64 v108; // x3
  ClassBoardLine_c *v109; // x8
  ClassBoardLine_o *v110; // x20
  unsigned __int64 v111; // x10
  int32_t *v112; // x11
  __int64 v113; // x0
  System_Enum_o *v114; // x20
  __int64 v115; // x3
  struct IClassBoardLineModel_o *v116; // x20
  IClassBoardLineModel_c *v117; // x8
  unsigned __int64 v118; // x10
  IClassBoardLineModel_c **v119; // x11
  __int64 v120; // x0
  __int64 v121; // x3
  ClassBoardLine_c *v122; // x8
  ClassBoardLine_o *v123; // x20
  unsigned __int64 v124; // x10
  int32_t *v125; // x11
  __int64 v126; // x0
  System_Enum_o *v127; // x20
  struct IClassBoardLineModel_o *v128; // x20
  IClassBoardLineModel_c *v129; // x8
  unsigned __int64 v130; // x10
  int *v131; // x11
  __int64 v132; // x0
  __int64 v133; // x3
  ClassBoardLine_c *v134; // x8
  ClassBoardLine_o *v135; // x20
  unsigned __int64 v136; // x10
  int32_t *v137; // x11
  __int64 v138; // x0
  System_Enum_o *v139; // x20
  __int64 v140; // x3
  struct IClassBoardLineModel_o *v141; // x19
  IClassBoardLineModel_c *v142; // x8
  unsigned __int64 v143; // x10
  IClassBoardLineModel_c **v144; // x11
  __int64 v145; // x0
  __int64 v146; // x3
  ClassBoardLine_c *v147; // x8
  ClassBoardLine_o *v148; // x19
  unsigned __int64 v149; // x10
  int32_t *v150; // x11
  __int64 v151; // x0
  System_Enum_o *v152; // x19
  System_Collections_Generic_List_Enumerator_T__o v153; // [xsp+0h] [xbp-80h] BYREF
  int v154; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v155; // [xsp+20h] [xbp-60h] BYREF
  ClassBoardLine_o *v156; // [xsp+48h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_41894ED & 1) == 0 )
  {
    sub_B2C35C(&AcquireFlag_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v6);
    sub_B2C35C(&IClassBoardLineModel_TypeInfo, v7);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v11);
    this = (ClassBoardLine_o *)sub_B2C35C(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v12);
    byte_41894ED = 1;
  }
  v156 = 0LL;
  memset(&v155, 0, sizeof(v155));
  LineModel_k__BackingField = v3->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_187;
  klass = LineModel_k__BackingField->klass;
  if ( *(_WORD *)&LineModel_k__BackingField->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&LineModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v2);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_187;
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
        goto LABEL_15;
    }
    v23 = (__int64)(&v19[1]._1.gc_desc + 2 * *v22);
  }
  else
  {
LABEL_15:
    v23 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 5LL, v18);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v25 = v3->fields._LineModel_k__BackingField;
    if ( !v25 )
      goto LABEL_187;
    v26 = v25->klass;
    if ( *(_WORD *)&v25->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = (IClassBoardLineModel_c **)&v26->_1.interfaceOffsets->offset;
      while ( *(v28 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v27;
        v28 += 2;
        if ( v27 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      v29 = (__int64)&v26->vtable[*(_DWORD *)v28 + 1].method;
    }
    else
    {
LABEL_23:
      v29 = sub_AC5258(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v24);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v29)(
                                 v25,
                                 *(_QWORD *)(v29 + 8));
    if ( !this )
      goto LABEL_187;
    v31 = this->klass;
    v32 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      v34 = &v31->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v34 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_30;
      }
      v35 = (__int64)(&v31[1]._1.gc_desc + 2 * *v34);
    }
    else
    {
LABEL_30:
      v35 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 5LL, v30);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v44 = v3->fields._LineModel_k__BackingField;
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
          v48 = sub_AC5258(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v36);
        }
        this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v48)(
                                     v44,
                                     *(_QWORD *)(v48 + 8));
        if ( this )
        {
          v109 = this->klass;
          v110 = this;
          if ( *(_WORD *)&this->klass->_2.bitflags1 )
          {
            v111 = 0LL;
            v112 = &v109->_1.interfaceOffsets->offset;
            while ( *((IClassBoardSquareModel_c **)v112 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              ++v111;
              v112 += 4;
              if ( v111 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                goto LABEL_130;
            }
            v113 = (__int64)(&v109[1]._1.events + 2 * *v112);
          }
          else
          {
LABEL_130:
            v113 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 13LL, v108);
          }
          LODWORD(v153.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v113)(
                                        v110,
                                        0LL,
                                        *(_QWORD *)(v113 + 8));
          v114 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v153);
          v154 = 1;
          this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v154);
          if ( v114 )
          {
            this = (ClassBoardLine_o *)System_Enum__HasFlag(v114, (System_Enum_o *)this, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v116 = v3->fields._LineModel_k__BackingField;
              if ( !v116 )
                goto LABEL_187;
              v117 = v116->klass;
              if ( *(_WORD *)&v116->klass->_2.bitflags1 )
              {
                v118 = 0LL;
                v119 = (IClassBoardLineModel_c **)&v117->_1.interfaceOffsets->offset;
                while ( *(v119 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  ++v118;
                  v119 += 2;
                  if ( v118 >= *(unsigned __int16 *)&v116->klass->_2.bitflags1 )
                    goto LABEL_139;
                }
                v120 = (__int64)&v117->vtable[*(_DWORD *)v119 + 1].method;
              }
              else
              {
LABEL_139:
                v120 = sub_AC5258(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v115);
              }
              this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v120)(
                                           v116,
                                           *(_QWORD *)(v120 + 8));
              if ( !this )
                goto LABEL_187;
              v122 = this->klass;
              v123 = this;
              if ( *(_WORD *)&this->klass->_2.bitflags1 )
              {
                v124 = 0LL;
                v125 = &v122->_1.interfaceOffsets->offset;
                while ( *((IClassBoardSquareModel_c **)v125 - 1) != IClassBoardSquareModel_TypeInfo )
                {
                  ++v124;
                  v125 += 4;
                  if ( v124 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                    goto LABEL_146;
                }
                v126 = (__int64)(&v122[1]._1.events + 2 * *v125);
              }
              else
              {
LABEL_146:
                v126 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 13LL, v121);
              }
              LODWORD(v153.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v126)(
                                            v123,
                                            0LL,
                                            *(_QWORD *)(v126 + 8));
              v127 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v153);
              v154 = 1;
              this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v154);
              if ( !v127 )
                goto LABEL_187;
              this = (ClassBoardLine_o *)System_Enum__HasFlag(v127, (System_Enum_o *)this, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                return 2;
            }
            v128 = v3->fields._LineModel_k__BackingField;
            if ( v128 )
            {
              v129 = v128->klass;
              if ( *(_WORD *)&v128->klass->_2.bitflags1 )
              {
                v130 = 0LL;
                v131 = &v129->_1.interfaceOffsets->offset;
                while ( *((IClassBoardLineModel_c **)v131 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  ++v130;
                  v131 += 4;
                  if ( v130 >= *(unsigned __int16 *)&v128->klass->_2.bitflags1 )
                    goto LABEL_156;
                }
                v132 = (__int64)&v129->vtable[*v131].method;
              }
              else
              {
LABEL_156:
                v132 = sub_AC5258(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v115);
              }
              this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v132)(
                                           v128,
                                           *(_QWORD *)(v132 + 8));
              if ( this )
              {
                v134 = this->klass;
                v135 = this;
                if ( *(_WORD *)&this->klass->_2.bitflags1 )
                {
                  v136 = 0LL;
                  v137 = &v134->_1.interfaceOffsets->offset;
                  while ( *((IClassBoardSquareModel_c **)v137 - 1) != IClassBoardSquareModel_TypeInfo )
                  {
                    ++v136;
                    v137 += 4;
                    if ( v136 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                      goto LABEL_163;
                  }
                  v138 = (__int64)(&v134[1]._1.events + 2 * *v137);
                }
                else
                {
LABEL_163:
                  v138 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 13LL, v133);
                }
                LODWORD(v153.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v138)(
                                              v135,
                                              0LL,
                                              *(_QWORD *)(v138 + 8));
                v139 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v153);
                v154 = 1;
                this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v154);
                if ( v139 )
                {
                  this = (ClassBoardLine_o *)System_Enum__HasFlag(v139, (System_Enum_o *)this, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    return 1;
                  v141 = v3->fields._LineModel_k__BackingField;
                  if ( v141 )
                  {
                    v142 = v141->klass;
                    if ( *(_WORD *)&v141->klass->_2.bitflags1 )
                    {
                      v143 = 0LL;
                      v144 = (IClassBoardLineModel_c **)&v142->_1.interfaceOffsets->offset;
                      while ( *(v144 - 1) != IClassBoardLineModel_TypeInfo )
                      {
                        ++v143;
                        v144 += 2;
                        if ( v143 >= *(unsigned __int16 *)&v141->klass->_2.bitflags1 )
                          goto LABEL_173;
                      }
                      v145 = (__int64)&v142->vtable[*(_DWORD *)v144 + 1].method;
                    }
                    else
                    {
LABEL_173:
                      v145 = sub_AC5258(v141, IClassBoardLineModel_TypeInfo, 1LL, v140);
                    }
                    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v145)(
                                                 v141,
                                                 *(_QWORD *)(v145 + 8));
                    if ( this )
                    {
                      v147 = this->klass;
                      v148 = this;
                      if ( *(_WORD *)&this->klass->_2.bitflags1 )
                      {
                        v149 = 0LL;
                        v150 = &v147->_1.interfaceOffsets->offset;
                        while ( *((IClassBoardSquareModel_c **)v150 - 1) != IClassBoardSquareModel_TypeInfo )
                        {
                          ++v149;
                          v150 += 4;
                          if ( v149 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                            goto LABEL_180;
                        }
                        v151 = (__int64)(&v147[1]._1.events + 2 * *v150);
                      }
                      else
                      {
LABEL_180:
                        v151 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 13LL, v146);
                      }
                      LODWORD(v153.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v151)(
                                                    v148,
                                                    0LL,
                                                    *(_QWORD *)(v151 + 8));
                      v152 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v153);
                      v154 = 1;
                      this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v154);
                      if ( v152 )
                        return System_Enum__HasFlag(v152, (System_Enum_o *)this, 0LL);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_187:
      sub_B2C434(this, method);
    }
  }
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v156 = (ClassBoardLine_o *)v37;
  v39 = v3->fields._LineModel_k__BackingField;
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
    v43 = sub_AC5258(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v38);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v43)(
                               v39,
                               *(_QWORD *)(v43 + 8));
  if ( !this )
    goto LABEL_187;
  v50 = this->klass;
  v51 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v50->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v53 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v54 = (__int64)(&v50[1]._1.gc_desc + 2 * *v53);
  }
  else
  {
LABEL_51:
    v54 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 5LL, v49);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v54)(v51, *(_QWORD *)(v54 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v56 = v3->fields._LineModel_k__BackingField;
    if ( !v56 )
      goto LABEL_187;
    v57 = v56->klass;
    if ( *(_WORD *)&v56->klass->_2.bitflags1 )
    {
      v58 = 0LL;
      v59 = &v57->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v59 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)&v56->klass->_2.bitflags1 )
          goto LABEL_59;
      }
      v60 = (__int64)&v57->vtable[*v59].method;
    }
    else
    {
LABEL_59:
      v60 = sub_AC5258(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v55);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v60)(
                                 v56,
                                 *(_QWORD *)(v60 + 8));
    if ( !this )
      goto LABEL_187;
    v62 = this->klass;
    v63 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v64 = 0LL;
      v65 = &v62->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v65 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v64;
        v65 += 4;
        if ( v64 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_66;
      }
      v66 = (__int64)(&v62[1]._1.implementedInterfaces + 2 * *v65);
    }
    else
    {
LABEL_66:
      v66 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 15LL, v61);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v66)(
                                 v63,
                                 &v156,
                                 *(_QWORD *)(v66 + 8));
  }
  v67 = v3->fields._LineModel_k__BackingField;
  if ( !v67 )
    goto LABEL_187;
  v68 = v67->klass;
  if ( *(_WORD *)&v67->klass->_2.bitflags1 )
  {
    v69 = 0LL;
    v70 = (IClassBoardLineModel_c **)&v68->_1.interfaceOffsets->offset;
    while ( *(v70 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v69;
      v70 += 2;
      if ( v69 >= *(unsigned __int16 *)&v67->klass->_2.bitflags1 )
        goto LABEL_74;
    }
    v71 = (__int64)&v68->vtable[*(_DWORD *)v70 + 1].method;
  }
  else
  {
LABEL_74:
    v71 = sub_AC5258(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v55);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v71)(
                               v67,
                               *(_QWORD *)(v71 + 8));
  if ( !this )
    goto LABEL_187;
  v73 = this->klass;
  v74 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v75 = 0LL;
    v76 = &v73->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v76 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v75;
      v76 += 4;
      if ( v75 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_81;
    }
    v77 = (__int64)(&v73[1]._1.gc_desc + 2 * *v76);
  }
  else
  {
LABEL_81:
    v77 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 5LL, v72);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v77)(v74, *(_QWORD *)(v77 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v79 = v3->fields._LineModel_k__BackingField;
    if ( v79 )
    {
      v80 = v79->klass;
      if ( *(_WORD *)&v79->klass->_2.bitflags1 )
      {
        v81 = 0LL;
        v82 = (IClassBoardLineModel_c **)&v80->_1.interfaceOffsets->offset;
        while ( *(v82 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v81;
          v82 += 2;
          if ( v81 >= *(unsigned __int16 *)&v79->klass->_2.bitflags1 )
            goto LABEL_89;
        }
        v83 = (__int64)&v80->vtable[*(_DWORD *)v82 + 1].method;
      }
      else
      {
LABEL_89:
        v83 = sub_AC5258(v79, IClassBoardLineModel_TypeInfo, 1LL, v78);
      }
      this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v83)(
                                   v79,
                                   *(_QWORD *)(v83 + 8));
      if ( this )
      {
        v85 = this->klass;
        v86 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v87 = 0LL;
          v88 = &v85->_1.interfaceOffsets->offset;
          while ( *((IClassBoardSquareModel_c **)v88 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v87;
            v88 += 4;
            if ( v87 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_96;
          }
          v89 = (__int64)(&v85[1]._1.implementedInterfaces + 2 * *v88);
        }
        else
        {
LABEL_96:
          v89 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 15LL, v84);
        }
        (*(void (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v89)(v86, &v156, *(_QWORD *)(v89 + 8));
        goto LABEL_99;
      }
    }
    goto LABEL_187;
  }
LABEL_99:
  this = v156;
  if ( !v156 )
    goto LABEL_187;
  notConnectedSprite = (int32_t)v156->fields.notConnectedSprite;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v153,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v156,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v91 = 0;
  v155 = v153;
  while ( 1 )
  {
    v104 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v155,
             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    if ( !v104 )
      break;
    current = v155.fields.current;
    if ( !v155.fields.current )
      sub_B2C434(v104, v105);
    v93 = v155.fields.current->klass;
    if ( *(_WORD *)&v155.fields.current->klass->_2.bitflags1 )
    {
      v94 = 0LL;
      v95 = &v93->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v95 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v94;
        v95 += 4;
        if ( v94 >= *(unsigned __int16 *)&v155.fields.current->klass->_2.bitflags1 )
          goto LABEL_106;
      }
      v96 = (__int64)&v93->vtable[*v95 + 5].method;
    }
    else
    {
LABEL_106:
      v96 = sub_AC5258(v155.fields.current, IClassBoardSquareModel_TypeInfo, 5LL, v106);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v96)(current, *(_QWORD *)(v96 + 8)) & 1) != 0 )
    {
      --notConnectedSprite;
    }
    else
    {
      v98 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v99 = 0LL;
        v100 = (IClassBoardSquareModel_c **)&v98->_1.interfaceOffsets->offset;
        while ( *(v100 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v99;
          v100 += 2;
          if ( v99 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_113;
        }
        v101 = (__int64)&v98->vtable[*(_DWORD *)v100 + 13].method;
      }
      else
      {
LABEL_113:
        v101 = sub_AC5258(current, IClassBoardSquareModel_TypeInfo, 13LL, v97);
      }
      LODWORD(v153.fields.list) = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v101)(
                                    current,
                                    0LL,
                                    *(_QWORD *)(v101 + 8));
      v102 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v153);
      v154 = 1;
      v103 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v154);
      if ( !v102 )
        sub_B2C434(v103, v103);
      v91 += System_Enum__HasFlag(v102, v103, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v155,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  if ( !v91 )
    return 0;
  if ( v91 < notConnectedSprite )
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
  __int64 v6; // x1
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  float *p_blankOffsetLength; // x8

  v5 = this;
  if ( (byte_41894EE & 1) == 0 )
  {
    sub_B2C35C(&IClassBoardLockModel_TypeInfo, squareModel);
    this = (ClassBoardLine_o *)sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v6);
    byte_41894EE = 1;
  }
  if ( !squareModel )
    sub_B2C434(this, squareModel);
  klass = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(squareModel, IClassBoardSquareModel_TypeInfo, 5LL, v3);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    p_blankOffsetLength = &v5->fields.blankOffsetLength;
  }
  else if ( sub_B2C41C(squareModel, IClassBoardLockModel_TypeInfo) )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t ConnectType; // w0
  const MethodInfo *v9; // x1
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0
  System_String_o *animNameBrightTurnRoadOnUnlock; // x20
  System_Action_o *v12; // x0
  __int64 *v13; // x8
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x3

  if ( (byte_41894EC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardEffectPlayer_GetData_bool___, v3);
    sub_B2C35C(&Method_ClassBoardLine__PlayReleaseEffect_b__33_0__, v4);
    sub_B2C35C(&Method_ClassBoardLine__PlayReleaseEffect_b__33_1__, v5);
    sub_B2C35C(&Method_ClassBoardLine__PlayReleaseEffect_b__33_2__, v6);
    sub_B2C35C(&Method_ClassBoardLine__PlayReleaseEffect_b__33_3__, v7);
    byte_41894EC = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      if ( ClassBoardEffectPlayer__GetData_bool_(
             releaseEffectPlayer,
             (const MethodInfo_172C6A8 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOnUnlock;
        v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        v13 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_2__;
      }
      else
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOn;
        v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        v13 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_3__;
      }
      goto LABEL_15;
    }
LABEL_16:
    sub_B2C434(releaseEffectPlayer, v9);
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
         (const MethodInfo_172C6A8 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnUnlock;
    v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v13 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_0__;
  }
  else
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurn;
    v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v13 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_1__;
  }
LABEL_15:
  v14 = v12;
  System_Action___ctor(v12, (Il2CppObject *)this, *v13, 0LL);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnRoadOnUnlock, v14, v15);
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
    sub_B2C434(simpleAnimation, name);
  }
  SimpleAnimation__Play_16486620(simpleAnimation, name, 0LL);
  v9 = ClassBoardLine__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall ClassBoardLine__PlayTransition(ClassBoardLine_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t ConnectType; // w0
  System_String_o *animNameBrightTurnTransitionRoadOn; // x20
  System_Action_o *v8; // x0
  __int64 *v9; // x8
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x3

  if ( (byte_41894EA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardLine__PlayTransition_b__28_0__, v3);
    sub_B2C35C(&Method_ClassBoardLine__PlayTransition_b__28_1__, v4);
    sub_B2C35C(&Method_ClassBoardLine__PlayTransition_b__28_2__, v5);
    byte_41894EA = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransitionRoadOn;
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v9 = &Method_ClassBoardLine__PlayTransition_b__28_1__;
  }
  else if ( ConnectType == 1 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransition;
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v9 = &Method_ClassBoardLine__PlayTransition_b__28_0__;
  }
  else
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBlackOutTransition;
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v9 = &Method_ClassBoardLine__PlayTransition_b__28_2__;
  }
  v10 = v8;
  System_Action___ctor(v8, (Il2CppObject *)this, *v9, 0LL);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnTransitionRoadOn, v10, v11);
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
  __int64 v18; // x1
  System_String_array *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  __int64 v34; // x3
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x3
  UnityEngine_Object_c *v40; // x8
  UnityEngine_Object_o *v41; // x23
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x23
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  __int64 v59; // x3
  IClassBoardLineModel_c *v60; // x8
  unsigned __int64 v61; // x10
  int32_t *v62; // x11
  __int64 v63; // x0
  __int64 v64; // x3
  UnityEngine_Object_c *v65; // x8
  UnityEngine_Object_o *v66; // x22
  unsigned __int64 v67; // x10
  int32_t *v68; // x11
  __int64 v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x22
  System_String_o *v77; // x0
  const MethodInfo *v78; // x1
  System_Int32_array **v79; // x20
  __int64 v80; // x21
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  System_Action_o *v94; // x21
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct UnityEngine_GameObject_array *effectObjects; // x22
  int max_length; // w8
  int v103; // w9
  Il2CppClass **v104; // x8
  UnityEngine_GameObject_o *v105; // x21
  UnityEngine_Transform_o *transform; // x0
  float lineLength; // s8
  UnityEngine_Transform_o *v108; // x20
  float y; // s9
  int v110; // s2
  float v111; // s0
  float v112; // s1
  __int64 v113; // x0
  __int64 v114; // x0
  int v115; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41894E9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, setLineModel);
    sub_B2C35C(&ClassBoardEffectPlayer_TypeInfo, v10);
    sub_B2C35C(&Method_ClassBoardLine_PlayReleaseEffect__, v11);
    sub_B2C35C(&IClassBoardLineModel_TypeInfo, v12);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v13);
    sub_B2C35C(&string___TypeInfo, v14);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v15);
    byte_41894E9 = 1;
  }
  v115 = 0;
  this->fields._LineModel_k__BackingField = setLineModel;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._LineModel_k__BackingField,
    (System_Int32_array **)setLineModel,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  name = (UnityEngine_Object_o *)sub_B2C374(string___TypeInfo, 5LL);
  if ( !gameObject )
    goto LABEL_63;
  v19 = (System_String_array *)name;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL);
  if ( !v19 )
    goto LABEL_63;
  v26 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B2C41C(name, v19->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
  }
  if ( !v19->max_length )
    goto LABEL_64;
  v19->m_Items[0] = (System_String_o *)v26;
  sub_B2C2F8((BattleServantConfConponent_o *)v19->m_Items, v26, v20, v21, v22, v23, v24, v25);
  name = (UnityEngine_Object_o *)StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    name = (UnityEngine_Object_o *)sub_B2C41C(StringLiteral_15905/*"_"*/, v19->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
    v33 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_64;
  v19->m_Items[1] = (System_String_o *)v33;
  sub_B2C2F8((BattleServantConfConponent_o *)&v19->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
  if ( !setLineModel )
    goto LABEL_63;
  klass = setLineModel->klass;
  if ( *(_WORD *)&setLineModel->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v36;
      p_offset += 4;
      if ( v36 >= *(unsigned __int16 *)&setLineModel->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_18:
    p_method = sub_AC5258(setLineModel, IClassBoardLineModel_TypeInfo, 0LL, v34);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))p_method)(
                                   setLineModel,
                                   *(_QWORD *)(p_method + 8));
  if ( !name )
    goto LABEL_63;
  v40 = name->klass;
  v41 = name;
  if ( *(_WORD *)&name->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    v43 = &v40->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v43 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)&name->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v44 = (__int64)(&v40->vtable._0_Equals.method + 2 * *v43);
  }
  else
  {
LABEL_25:
    v44 = sub_AC5258(name, IClassBoardSquareModel_TypeInfo, 0LL, v39);
  }
  v115 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v115, 0LL);
  v51 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B2C41C(name, v19->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
  }
  if ( v19->max_length <= 2 )
    goto LABEL_64;
  v19->m_Items[2] = (System_String_o *)v51;
  sub_B2C2F8((BattleServantConfConponent_o *)&v19->m_Items[2], v51, v45, v46, v47, v48, v49, v50);
  name = (UnityEngine_Object_o *)StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    name = (UnityEngine_Object_o *)sub_B2C41C(StringLiteral_15905/*"_"*/, v19->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
    v58 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v19->max_length <= 3 )
    goto LABEL_64;
  v19->m_Items[3] = (System_String_o *)v58;
  sub_B2C2F8((BattleServantConfConponent_o *)&v19->m_Items[3], v58, v52, v53, v54, v55, v56, v57);
  v60 = setLineModel->klass;
  if ( *(_WORD *)&setLineModel->klass->_2.bitflags1 )
  {
    v61 = 0LL;
    v62 = &v60->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v62 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v61;
      v62 += 4;
      if ( v61 >= *(unsigned __int16 *)&setLineModel->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v63 = (__int64)&v60->vtable[*v62 + 1].method;
  }
  else
  {
LABEL_39:
    v63 = sub_AC5258(setLineModel, IClassBoardLineModel_TypeInfo, 1LL, v59);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v63)(
                                   setLineModel,
                                   *(_QWORD *)(v63 + 8));
  if ( !name )
    goto LABEL_63;
  v65 = name->klass;
  v66 = name;
  if ( *(_WORD *)&name->klass->_2.bitflags1 )
  {
    v67 = 0LL;
    v68 = &v65->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v68 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v67;
      v68 += 4;
      if ( v67 >= *(unsigned __int16 *)&name->klass->_2.bitflags1 )
        goto LABEL_46;
    }
    v69 = (__int64)(&v65->vtable._0_Equals.method + 2 * *v68);
  }
  else
  {
LABEL_46:
    v69 = sub_AC5258(name, IClassBoardSquareModel_TypeInfo, 0LL, v64);
  }
  v115 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v69)(v66, *(_QWORD *)(v69 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v115, 0LL);
  v76 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B2C41C(name, v19->obj.klass->_1.element_class);
    if ( !name )
    {
LABEL_65:
      v114 = sub_B2C454(name);
      sub_B2C400(v114, 0LL);
    }
  }
  if ( v19->max_length <= 4 )
    goto LABEL_64;
  v19->m_Items[4] = (System_String_o *)v76;
  sub_B2C2F8((BattleServantConfConponent_o *)&v19->m_Items[4], v76, v70, v71, v72, v73, v74, v75);
  v77 = System_String__Concat_44385656(v19, 0LL);
  UnityEngine_Object__set_name(gameObject, v77, 0LL);
  ClassBoardLine__UpdateLine(this, v78);
  name = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !name )
    goto LABEL_63;
  v79 = (System_Int32_array **)UnityEngine_Object__get_name(name, 0LL);
  v80 = sub_B2C42C(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v80, 0LL);
  *(_QWORD *)(v80 + 16) = v79;
  sub_B2C2F8((BattleServantConfConponent_o *)(v80 + 16), v79, v81, v82, v83, v84, v85, v86);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v80;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.releaseEffectPlayer,
    (System_Int32_array **)v80,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v94 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v94, (Il2CppObject *)this, Method_ClassBoardLine_PlayReleaseEffect__, 0LL);
  if ( !releaseEffectPlayer
    || (releaseEffectPlayer->fields.playCallback = v94,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&releaseEffectPlayer->fields.playCallback,
          (System_Int32_array **)v94,
          v95,
          v96,
          v97,
          v98,
          v99,
          v100),
        effectObjects = this->fields.effectObjects,
        v115 = 0,
        !effectObjects) )
  {
LABEL_63:
    sub_B2C434(name, v18);
  }
  max_length = effectObjects->max_length;
  if ( max_length >= 1 )
  {
    v103 = 0;
    while ( v103 < (unsigned int)max_length )
    {
      v104 = &effectObjects->obj.klass + v103;
      v105 = (UnityEngine_GameObject_o *)v104[4];
      if ( !v105 )
        goto LABEL_63;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v104[4], 0LL);
      lineLength = this->fields.lineLength;
      v108 = transform;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v105, 0LL);
      if ( !name )
        goto LABEL_63;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)name, 0LL);
      y = localScale.fields.y;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v105, 0LL);
      if ( !name )
        goto LABEL_63;
      *(UnityEngine_Vector3_o *)(&v110 - 2) = UnityEngine_Transform__get_localScale(
                                                (UnityEngine_Transform_o *)name,
                                                0LL);
      if ( !v108 )
        goto LABEL_63;
      v111 = lineLength;
      v112 = y;
      UnityEngine_Transform__set_localScale(v108, *(UnityEngine_Vector3_o *)(&v110 - 2), 0LL);
      v103 = v115 + 1;
      v115 = v103;
      max_length = effectObjects->max_length;
      if ( v103 >= max_length )
        return;
    }
LABEL_64:
    v113 = sub_B2C460(name);
    sub_B2C400(v113, 0LL);
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
  __int64 v4; // x1
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v10; // x3
  ClassBoardLine_c *v11; // x8
  ClassBoardLine_o *v12; // x20
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x3
  float v17; // s0
  float v18; // s1
  float v19; // s2
  struct IClassBoardLineModel_o *v20; // x20
  IClassBoardLineModel_c *v21; // x8
  float v22; // s11
  float v23; // s10
  float v24; // s12
  unsigned __int64 v25; // x10
  IClassBoardLineModel_c **v26; // x11
  __int64 v27; // x0
  __int64 v28; // x3
  ClassBoardLine_c *v29; // x8
  ClassBoardLine_o *v30; // x20
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  long double v34; // q0 OVERLAPPED
  float v35; // s9
  float v36; // s1
  float v37; // s14
  float v38; // s2
  float v39; // s13
  float v40; // s1
  float v41; // s2
  __int64 v42; // x3
  float v43; // s0
  float v44; // s1
  float v45; // s2
  struct IClassBoardLineModel_o *v46; // x20
  IClassBoardLineModel_c *v47; // x8
  float v48; // s15
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  IClassBoardSquareModel_o *v52; // x0
  const MethodInfo *v53; // x2
  __int64 v54; // x3
  float SquareTypeOffset; // s0
  struct IClassBoardLineModel_o *v56; // x20
  IClassBoardLineModel_c *v57; // x8
  float v58; // s0
  float v59; // s8
  float v60; // s11
  float v61; // s15
  float v62; // s10
  unsigned __int64 v63; // x10
  IClassBoardLineModel_c **v64; // x11
  __int64 v65; // x0
  IClassBoardSquareModel_o *v66; // x0
  const MethodInfo *v67; // x2
  float v68; // s0
  float magnitude; // s8
  const MethodInfo *v70; // x1
  int v71; // w20
  UnityEngine_Component_o **p_connectedSprite; // x22
  UnityEngine_Component_o *v73; // x20
  int32_t v74; // w0
  float v75; // s9
  UnityEngine_Transform_o *transform; // x19
  float v77; // s0
  float v78; // s1
  float v79; // s2
  __int64 v80; // [xsp+0h] [xbp-90h] BYREF
  float v81; // [xsp+8h] [xbp-88h]
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  float v83; // [xsp+68h] [xbp-28h]
  float v84; // [xsp+6Ch] [xbp-24h]
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s3.4,4:s4.4,8:s5.4

  v3 = this;
  if ( (byte_41894EB & 1) == 0 )
  {
    sub_B2C35C(&IClassBoardLineModel_TypeInfo, method);
    this = (ClassBoardLine_o *)sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v4);
    byte_41894EB = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v81 = 0.0;
  v80 = 0LL;
  LineModel_k__BackingField = v3->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_61;
  klass = LineModel_k__BackingField->klass;
  if ( *(_WORD *)&LineModel_k__BackingField->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&LineModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v2);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_61;
  v11 = this->klass;
  v12 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v13;
      v14 += 4;
      if ( v13 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v15 = (__int64)(&v11->vtable._3_ToString.method + 2 * *v14);
  }
  else
  {
LABEL_15:
    v15 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 3LL, v10);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8));
  v20 = v3->fields._LineModel_k__BackingField;
  if ( !v20 )
    goto LABEL_61;
  v21 = v20->klass;
  v22 = v17;
  v23 = v18;
  v24 = v19;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = (IClassBoardLineModel_c **)&v21->_1.interfaceOffsets->offset;
    while ( *(v26 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v25;
      v26 += 2;
      if ( v25 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v27 = (__int64)&v21->vtable[*(_DWORD *)v26 + 1].method;
  }
  else
  {
LABEL_22:
    v27 = sub_AC5258(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v16);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v27)(
                               v20,
                               *(_QWORD *)(v27 + 8));
  if ( !this )
    goto LABEL_61;
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
        goto LABEL_29;
    }
    v33 = (__int64)(&v29->vtable._3_ToString.method + 2 * *v32);
  }
  else
  {
LABEL_29:
    v33 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 3LL, v28);
  }
  v34 = ((long double (__fastcall *)(ClassBoardLine_o *, _QWORD))*(_QWORD *)v33)(v30, *(_QWORD *)(v33 + 8));
  v35 = *(float *)&v34;
  v37 = v36;
  v39 = v38;
  *(float *)&v34 = v22;
  v40 = v23;
  v41 = v24;
  v90.fields.x = v35;
  v90.fields.y = v37;
  v90.fields.z = v39;
  UnityEngine_Vector3__Distance(*(UnityEngine_Vector3_o *)&v34, v90, 0LL);
  v85.fields.x = v35 - v22;
  v85.fields.y = v37 - v23;
  v85.fields.z = v39 - v24;
  *(float *)&v80 = v35 - v22;
  *((float *)&v80 + 1) = v37 - v23;
  v81 = v39 - v24;
  *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_normalized(v85, (const MethodInfo *)&v80);
  v83 = v45;
  v84 = v44;
  v46 = v3->fields._LineModel_k__BackingField;
  if ( !v46 )
    goto LABEL_61;
  v47 = v46->klass;
  v48 = v43;
  if ( *(_WORD *)&v46->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v47->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v50 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&v46->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v51 = (__int64)&v47->vtable[*v50].method;
  }
  else
  {
LABEL_36:
    v51 = sub_AC5258(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v42);
  }
  v52 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v51)(
                                      v46,
                                      *(_QWORD *)(v51 + 8));
  SquareTypeOffset = ClassBoardLine__GetSquareTypeOffset(v3, v52, v53);
  v56 = v3->fields._LineModel_k__BackingField;
  if ( !v56 )
    goto LABEL_61;
  v57 = v56->klass;
  v58 = SquareTypeOffset * 0.5;
  v59 = v48;
  v60 = v22 - (float)(v48 * v58);
  v61 = v23 - (float)(v84 * v58);
  v62 = v24 - (float)(v83 * v58);
  if ( *(_WORD *)&v56->klass->_2.bitflags1 )
  {
    v63 = 0LL;
    v64 = (IClassBoardLineModel_c **)&v57->_1.interfaceOffsets->offset;
    while ( *(v64 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v63;
      v64 += 2;
      if ( v63 >= *(unsigned __int16 *)&v56->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v65 = (__int64)&v57->vtable[*(_DWORD *)v64 + 1].method;
  }
  else
  {
LABEL_43:
    v65 = sub_AC5258(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v54);
  }
  v66 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v65)(
                                      v56,
                                      *(_QWORD *)(v65 + 8));
  v68 = ClassBoardLine__GetSquareTypeOffset(v3, v66, v67) * 0.5;
  v86.fields.y = (float)(v35 + (float)(v59 * v68)) - v60;
  v86.fields.z = (float)(v37 + (float)(v84 * v68)) - v61;
  v86.fields.x = (float)(v39 + (float)(v83 * v68)) - v62;
  methoda.methodPointer = *(Il2CppMethodPointer *)&v86.fields.y;
  *(float *)&methoda.invoker_method = v86.fields.x;
  magnitude = UnityEngine_Vector3__get_magnitude(v86, &methoda);
  v3->fields.lineLength = magnitude;
  this = (ClassBoardLine_o *)ClassBoardLine__GetConnectType(v3, v70);
  if ( !v3->fields.notConnectedSprite )
    goto LABEL_61;
  v71 = (int)this;
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
    sub_B2C434(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !v71 )
    goto LABEL_54;
  if ( v71 == 2 )
  {
    p_connectedSprite = (UnityEngine_Component_o **)&v3->fields.connectedOnSprite;
    goto LABEL_56;
  }
  if ( v71 != 1 )
LABEL_54:
    p_connectedSprite = (UnityEngine_Component_o **)&v3->fields.notConnectedSprite;
LABEL_56:
  v73 = *p_connectedSprite;
  if ( !*p_connectedSprite )
    goto LABEL_61;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(*p_connectedSprite, 0LL);
  if ( !this )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v74 = UnityEngine_Mathf__CeilToInt(magnitude, 0LL);
  UIWidget__set_width((UIWidget_o *)v73, v74, 0LL);
  v75 = atan2f(*((float *)&methoda.methodPointer + 1), *(float *)&methoda.methodPointer);
  this = (ClassBoardLine_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
  if ( !this )
    goto LABEL_61;
  v87.fields.y = 0.0;
  v87.fields.z = v75 * 57.296;
  v87.fields.x = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v87, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
  *(UnityEngine_Vector3_o *)&v77 = UnityEngine_Vector3__get_normalized(v88, &methoda);
  if ( !transform )
    goto LABEL_61;
  v89.fields.x = v60 + (float)((float)(magnitude * 0.5) * v77);
  v89.fields.y = v61 + (float)((float)(magnitude * 0.5) * v78);
  v89.fields.z = v62 + (float)((float)(magnitude * 0.5) * v79);
  UnityEngine_Transform__set_localPosition(transform, v89, 0LL);
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

  if ( (byte_41894EF & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo, name);
    byte_41894EF = 1;
  }
  v7 = sub_B2C42C(ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo);
  ClassBoardLine__WaitAnimationFinished_d__37___ctor((ClassBoardLine__WaitAnimationFinished_d__37_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = name;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)name, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_B2C2F8(
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
    sub_B2C434(simpleAnimation, method);
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
    sub_B2C434(simpleAnimation, method);
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
    sub_B2C434(simpleAnimation, method);
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
    sub_B2C434(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B2C434(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B2C434(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B2C434(0LL, method);
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
  sub_B2C2F8(
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
  SimpleAnimation_State_o *State; // x0
  struct SimpleAnimation_State_o **p_state_5__2; // x20
  struct SimpleAnimation_State_o *v8; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v10; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x3
  struct SimpleAnimation_State_o *v14; // x20
  SimpleAnimation_State_c *v15; // x8
  unsigned __int64 v16; // x10
  SimpleAnimation_State_c **v17; // x11
  __int64 v18; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  v3 = this;
  if ( (byte_4184EEB & 1) == 0 )
  {
    this = (ClassBoardLine__WaitAnimationFinished_d__37_o *)sub_B2C35C(&SimpleAnimation_State_TypeInfo, method);
    byte_4184EEB = 1;
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
    State = SimpleAnimation__GetState((SimpleAnimation_o *)this, v3->fields.name, 0LL);
    p_state_5__2 = &v3->fields._state_5__2;
    v3->fields._state_5__2 = State;
    sub_B2C2F8(&v3->fields._state_5__2, State);
  }
  v8 = *p_state_5__2;
  if ( !*p_state_5__2 )
    goto LABEL_25;
  klass = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v10;
      p_offset += 2;
      if ( v10 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
  }
  else
  {
LABEL_14:
    p_method = sub_AC5258(*p_state_5__2, SimpleAnimation_State_TypeInfo, 13LL, v2);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(v8, *(_QWORD *)(p_method + 8)) <= 0.0 )
    goto LABEL_25;
  v14 = *p_state_5__2;
  if ( !v14 )
LABEL_28:
    sub_B2C434(this, method);
  v15 = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    v17 = (SimpleAnimation_State_c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v17 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v16;
      v17 += 2;
      if ( v16 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 5].method;
  }
  else
  {
LABEL_22:
    v18 = sub_AC5258(v14, SimpleAnimation_State_TypeInfo, 5LL, v13);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) >= 1.0 )
  {
LABEL_25:
    ActionExtensions__Call(v3->fields.endCallback, 0LL);
    return 0;
  }
  v3->fields.__2__current = 0LL;
  p__2__current = &v3->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ClassBoardLine__WaitAnimationFinished_d__37_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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