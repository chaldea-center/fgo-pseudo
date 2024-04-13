void __fastcall ClassBoardLine___ctor(ClassBoardLine_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Int32_array **v27; // x1
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7

  if ( (byte_42EA805 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2927/*"BrightTurnTransition"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_2924/*"BrightTurn"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2928/*"BrightTurnTransitionRoadOn"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_2929/*"BrightTurnUnLock"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_2925/*"BrightTurnRoadOn"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_2926/*"BrightTurnRoadOnUnLock"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_2880/*"BlackOutTransition"*/, v24, v25, v26);
    byte_42EA805 = 1;
  }
  v27 = (System_Int32_array **)StringLiteral_2924/*"BrightTurn"*/;
  this->fields.animNameBrightTurn = (struct System_String_o *)StringLiteral_2924/*"BrightTurn"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.animNameBrightTurn, v27, v2, v3, v4, v5, v6, v7);
  v28 = (System_Int32_array **)StringLiteral_2925/*"BrightTurnRoadOn"*/;
  this->fields.animNameBrightTurnRoadOn = (struct System_String_o *)StringLiteral_2925/*"BrightTurnRoadOn"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.animNameBrightTurnRoadOn, v28, v29, v30, v31, v32, v33, v34);
  v35 = (System_Int32_array **)StringLiteral_2929/*"BrightTurnUnLock"*/;
  this->fields.animNameBrightTurnUnlock = (struct System_String_o *)StringLiteral_2929/*"BrightTurnUnLock"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.animNameBrightTurnUnlock, v35, v36, v37, v38, v39, v40, v41);
  v42 = (System_Int32_array **)StringLiteral_2926/*"BrightTurnRoadOnUnLock"*/;
  this->fields.animNameBrightTurnRoadOnUnlock = (struct System_String_o *)StringLiteral_2926/*"BrightTurnRoadOnUnLock"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnRoadOnUnlock,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = (System_Int32_array **)StringLiteral_2927/*"BrightTurnTransition"*/;
  this->fields.animNameBrightTurnTransition = (struct System_String_o *)StringLiteral_2927/*"BrightTurnTransition"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnTransition,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = (System_Int32_array **)StringLiteral_2928/*"BrightTurnTransitionRoadOn"*/;
  this->fields.animNameBrightTurnTransitionRoadOn = (struct System_String_o *)StringLiteral_2928/*"BrightTurnTransitionRoadOn"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animNameBrightTurnTransitionRoadOn,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = (System_Int32_array **)StringLiteral_2880/*"BlackOutTransition"*/;
  this->fields.animNameBlackOutTransition = (struct System_String_o *)StringLiteral_2880/*"BlackOutTransition"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animNameBlackOutTransition,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
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
  int v2; // w2
  __int64 v3; // x3
  ClassBoardLine_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v34; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  ClassBoardLine_c *v38; // x8
  ClassBoardLine_o *v39; // x20
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x3
  struct IClassBoardLineModel_o *v44; // x20
  IClassBoardLineModel_c *v45; // x8
  unsigned __int64 v46; // x10
  IClassBoardLineModel_c **v47; // x11
  __int64 v48; // x0
  __int64 v49; // x3
  ClassBoardLine_c *v50; // x8
  ClassBoardLine_o *v51; // x20
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x20
  __int64 v57; // x3
  struct IClassBoardLineModel_o *v58; // x20
  IClassBoardLineModel_c *v59; // x8
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0
  struct IClassBoardLineModel_o *v63; // x20
  IClassBoardLineModel_c *v64; // x8
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  __int64 v68; // x3
  ClassBoardLine_c *v69; // x8
  ClassBoardLine_o *v70; // x20
  unsigned __int64 v71; // x10
  int32_t *v72; // x11
  __int64 v73; // x0
  __int64 v74; // x3
  struct IClassBoardLineModel_o *v75; // x20
  IClassBoardLineModel_c *v76; // x8
  unsigned __int64 v77; // x10
  int *v78; // x11
  __int64 v79; // x0
  __int64 v80; // x3
  ClassBoardLine_c *v81; // x8
  ClassBoardLine_o *v82; // x20
  unsigned __int64 v83; // x10
  int32_t *v84; // x11
  __int64 v85; // x0
  struct IClassBoardLineModel_o *v86; // x20
  IClassBoardLineModel_c *v87; // x8
  unsigned __int64 v88; // x10
  IClassBoardLineModel_c **v89; // x11
  __int64 v90; // x0
  __int64 v91; // x3
  ClassBoardLine_c *v92; // x8
  ClassBoardLine_o *v93; // x20
  unsigned __int64 v94; // x10
  int32_t *v95; // x11
  __int64 v96; // x0
  __int64 v97; // x3
  struct IClassBoardLineModel_o *v98; // x19
  IClassBoardLineModel_c *v99; // x8
  unsigned __int64 v100; // x10
  IClassBoardLineModel_c **v101; // x11
  __int64 v102; // x0
  __int64 v103; // x3
  ClassBoardLine_c *v104; // x8
  ClassBoardLine_o *v105; // x19
  unsigned __int64 v106; // x10
  int32_t *v107; // x11
  __int64 v108; // x0
  int32_t notConnectedSprite; // w20
  int32_t v110; // w22
  Il2CppObject *current; // x19
  Il2CppClass *v112; // x8
  unsigned __int64 v113; // x10
  int32_t *v114; // x11
  __int64 v115; // x0
  __int64 v116; // x3
  Il2CppClass *v117; // x8
  unsigned __int64 v118; // x10
  IClassBoardSquareModel_c **v119; // x11
  __int64 v120; // x0
  System_Enum_o *v121; // x19
  System_Enum_o *v122; // x0
  _BOOL8 v123; // x0
  __int64 v124; // x1
  __int64 v125; // x3
  __int64 v127; // x3
  ClassBoardLine_c *v128; // x8
  ClassBoardLine_o *v129; // x20
  unsigned __int64 v130; // x10
  int32_t *v131; // x11
  __int64 v132; // x0
  System_Enum_o *v133; // x20
  __int64 v134; // x3
  struct IClassBoardLineModel_o *v135; // x20
  IClassBoardLineModel_c *v136; // x8
  unsigned __int64 v137; // x10
  IClassBoardLineModel_c **v138; // x11
  __int64 v139; // x0
  __int64 v140; // x3
  ClassBoardLine_c *v141; // x8
  ClassBoardLine_o *v142; // x20
  unsigned __int64 v143; // x10
  int32_t *v144; // x11
  __int64 v145; // x0
  System_Enum_o *v146; // x20
  struct IClassBoardLineModel_o *v147; // x20
  IClassBoardLineModel_c *v148; // x8
  unsigned __int64 v149; // x10
  int *v150; // x11
  __int64 v151; // x0
  __int64 v152; // x3
  ClassBoardLine_c *v153; // x8
  ClassBoardLine_o *v154; // x20
  unsigned __int64 v155; // x10
  int32_t *v156; // x11
  __int64 v157; // x0
  System_Enum_o *v158; // x20
  __int64 v159; // x3
  struct IClassBoardLineModel_o *v160; // x19
  IClassBoardLineModel_c *v161; // x8
  unsigned __int64 v162; // x10
  IClassBoardLineModel_c **v163; // x11
  __int64 v164; // x0
  __int64 v165; // x3
  ClassBoardLine_c *v166; // x8
  ClassBoardLine_o *v167; // x19
  unsigned __int64 v168; // x10
  int32_t *v169; // x11
  __int64 v170; // x0
  System_Enum_o *v171; // x19
  System_Collections_Generic_List_Enumerator_T__o v172; // [xsp+0h] [xbp-80h] BYREF
  int v173; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v174; // [xsp+20h] [xbp-60h] BYREF
  ClassBoardLine_o *v175; // [xsp+48h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42EA802 & 1) == 0 )
  {
    sub_B5D5C4(&AcquireFlag_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v11, v12, v13);
    sub_B5D5C4(&IClassBoardLineModel_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v26, v27, v28);
    this = (ClassBoardLine_o *)sub_B5D5C4(
                                 &System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                 v29,
                                 v30,
                                 v31);
    byte_42EA802 = 1;
  }
  v175 = 0LL;
  memset(&v174, 0, sizeof(v174));
  LineModel_k__BackingField = v4->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_187;
  klass = LineModel_k__BackingField->klass;
  if ( *(_WORD *)&LineModel_k__BackingField->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v34;
      p_offset += 4;
      if ( v34 >= *(unsigned __int16 *)&LineModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(v4->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_187;
  v38 = this->klass;
  v39 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    v41 = &v38->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v41 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v42 = (__int64)(&v38[1]._1.gc_desc + 2 * *v41);
  }
  else
  {
LABEL_15:
    v42 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 5LL, v37);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v42)(v39, *(_QWORD *)(v42 + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v44 = v4->fields._LineModel_k__BackingField;
    if ( !v44 )
      goto LABEL_187;
    v45 = v44->klass;
    if ( *(_WORD *)&v44->klass->_2.bitflags1 )
    {
      v46 = 0LL;
      v47 = (IClassBoardLineModel_c **)&v45->_1.interfaceOffsets->offset;
      while ( *(v47 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v46;
        v47 += 2;
        if ( v46 >= *(unsigned __int16 *)&v44->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      v48 = (__int64)&v45->vtable[*(_DWORD *)v47 + 1].method;
    }
    else
    {
LABEL_23:
      v48 = sub_AF54C0(v4->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v43);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v48)(
                                 v44,
                                 *(_QWORD *)(v48 + 8));
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
          goto LABEL_30;
      }
      v54 = (__int64)(&v50[1]._1.gc_desc + 2 * *v53);
    }
    else
    {
LABEL_30:
      v54 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 5LL, v49);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v54)(v51, *(_QWORD *)(v54 + 8));
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v63 = v4->fields._LineModel_k__BackingField;
      if ( v63 )
      {
        v64 = v63->klass;
        if ( *(_WORD *)&v63->klass->_2.bitflags1 )
        {
          v65 = 0LL;
          v66 = &v64->_1.interfaceOffsets->offset;
          while ( *((IClassBoardLineModel_c **)v66 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v65;
            v66 += 4;
            if ( v65 >= *(unsigned __int16 *)&v63->klass->_2.bitflags1 )
              goto LABEL_44;
          }
          v67 = (__int64)&v64->vtable[*v66].method;
        }
        else
        {
LABEL_44:
          v67 = sub_AF54C0(v4->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v55);
        }
        this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v67)(
                                     v63,
                                     *(_QWORD *)(v67 + 8));
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
                goto LABEL_130;
            }
            v132 = (__int64)(&v128[1]._1.events + 2 * *v131);
          }
          else
          {
LABEL_130:
            v132 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 13LL, v127);
          }
          LODWORD(v172.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v132)(
                                        v129,
                                        0LL,
                                        *(_QWORD *)(v132 + 8));
          v133 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v172);
          v173 = 1;
          this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v173);
          if ( v133 )
          {
            this = (ClassBoardLine_o *)System_Enum__HasFlag(v133, (System_Enum_o *)this, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v135 = v4->fields._LineModel_k__BackingField;
              if ( !v135 )
                goto LABEL_187;
              v136 = v135->klass;
              if ( *(_WORD *)&v135->klass->_2.bitflags1 )
              {
                v137 = 0LL;
                v138 = (IClassBoardLineModel_c **)&v136->_1.interfaceOffsets->offset;
                while ( *(v138 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  ++v137;
                  v138 += 2;
                  if ( v137 >= *(unsigned __int16 *)&v135->klass->_2.bitflags1 )
                    goto LABEL_139;
                }
                v139 = (__int64)&v136->vtable[*(_DWORD *)v138 + 1].method;
              }
              else
              {
LABEL_139:
                v139 = sub_AF54C0(v4->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v134);
              }
              this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v139)(
                                           v135,
                                           *(_QWORD *)(v139 + 8));
              if ( !this )
                goto LABEL_187;
              v141 = this->klass;
              v142 = this;
              if ( *(_WORD *)&this->klass->_2.bitflags1 )
              {
                v143 = 0LL;
                v144 = &v141->_1.interfaceOffsets->offset;
                while ( *((IClassBoardSquareModel_c **)v144 - 1) != IClassBoardSquareModel_TypeInfo )
                {
                  ++v143;
                  v144 += 4;
                  if ( v143 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                    goto LABEL_146;
                }
                v145 = (__int64)(&v141[1]._1.events + 2 * *v144);
              }
              else
              {
LABEL_146:
                v145 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 13LL, v140);
              }
              LODWORD(v172.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v145)(
                                            v142,
                                            0LL,
                                            *(_QWORD *)(v145 + 8));
              v146 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v172);
              v173 = 1;
              this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v173);
              if ( !v146 )
                goto LABEL_187;
              this = (ClassBoardLine_o *)System_Enum__HasFlag(v146, (System_Enum_o *)this, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                return 2;
            }
            v147 = v4->fields._LineModel_k__BackingField;
            if ( v147 )
            {
              v148 = v147->klass;
              if ( *(_WORD *)&v147->klass->_2.bitflags1 )
              {
                v149 = 0LL;
                v150 = &v148->_1.interfaceOffsets->offset;
                while ( *((IClassBoardLineModel_c **)v150 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  ++v149;
                  v150 += 4;
                  if ( v149 >= *(unsigned __int16 *)&v147->klass->_2.bitflags1 )
                    goto LABEL_156;
                }
                v151 = (__int64)&v148->vtable[*v150].method;
              }
              else
              {
LABEL_156:
                v151 = sub_AF54C0(v4->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v134);
              }
              this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v151)(
                                           v147,
                                           *(_QWORD *)(v151 + 8));
              if ( this )
              {
                v153 = this->klass;
                v154 = this;
                if ( *(_WORD *)&this->klass->_2.bitflags1 )
                {
                  v155 = 0LL;
                  v156 = &v153->_1.interfaceOffsets->offset;
                  while ( *((IClassBoardSquareModel_c **)v156 - 1) != IClassBoardSquareModel_TypeInfo )
                  {
                    ++v155;
                    v156 += 4;
                    if ( v155 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                      goto LABEL_163;
                  }
                  v157 = (__int64)(&v153[1]._1.events + 2 * *v156);
                }
                else
                {
LABEL_163:
                  v157 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 13LL, v152);
                }
                LODWORD(v172.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v157)(
                                              v154,
                                              0LL,
                                              *(_QWORD *)(v157 + 8));
                v158 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v172);
                v173 = 1;
                this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v173);
                if ( v158 )
                {
                  this = (ClassBoardLine_o *)System_Enum__HasFlag(v158, (System_Enum_o *)this, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    return 1;
                  v160 = v4->fields._LineModel_k__BackingField;
                  if ( v160 )
                  {
                    v161 = v160->klass;
                    if ( *(_WORD *)&v160->klass->_2.bitflags1 )
                    {
                      v162 = 0LL;
                      v163 = (IClassBoardLineModel_c **)&v161->_1.interfaceOffsets->offset;
                      while ( *(v163 - 1) != IClassBoardLineModel_TypeInfo )
                      {
                        ++v162;
                        v163 += 2;
                        if ( v162 >= *(unsigned __int16 *)&v160->klass->_2.bitflags1 )
                          goto LABEL_173;
                      }
                      v164 = (__int64)&v161->vtable[*(_DWORD *)v163 + 1].method;
                    }
                    else
                    {
LABEL_173:
                      v164 = sub_AF54C0(v160, IClassBoardLineModel_TypeInfo, 1LL, v159);
                    }
                    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v164)(
                                                 v160,
                                                 *(_QWORD *)(v164 + 8));
                    if ( this )
                    {
                      v166 = this->klass;
                      v167 = this;
                      if ( *(_WORD *)&this->klass->_2.bitflags1 )
                      {
                        v168 = 0LL;
                        v169 = &v166->_1.interfaceOffsets->offset;
                        while ( *((IClassBoardSquareModel_c **)v169 - 1) != IClassBoardSquareModel_TypeInfo )
                        {
                          ++v168;
                          v169 += 4;
                          if ( v168 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
                            goto LABEL_180;
                        }
                        v170 = (__int64)(&v166[1]._1.events + 2 * *v169);
                      }
                      else
                      {
LABEL_180:
                        v170 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 13LL, v165);
                      }
                      LODWORD(v172.fields.list) = (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v170)(
                                                    v167,
                                                    0LL,
                                                    *(_QWORD *)(v170 + 8));
                      v171 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v172);
                      v173 = 1;
                      this = (ClassBoardLine_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v173);
                      if ( v171 )
                        return System_Enum__HasFlag(v171, (System_Enum_o *)this, 0LL);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_187:
      sub_B5D69C(this, method);
    }
  }
  v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v56,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v175 = (ClassBoardLine_o *)v56;
  v58 = v4->fields._LineModel_k__BackingField;
  if ( !v58 )
    goto LABEL_187;
  v59 = v58->klass;
  if ( *(_WORD *)&v58->klass->_2.bitflags1 )
  {
    v60 = 0LL;
    v61 = &v59->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v61 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v60;
      v61 += 4;
      if ( v60 >= *(unsigned __int16 *)&v58->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v62 = (__int64)&v59->vtable[*v61].method;
  }
  else
  {
LABEL_38:
    v62 = sub_AF54C0(v4->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v57);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v62)(
                               v58,
                               *(_QWORD *)(v62 + 8));
  if ( !this )
    goto LABEL_187;
  v69 = this->klass;
  v70 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v71 = 0LL;
    v72 = &v69->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v72 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v71;
      v72 += 4;
      if ( v71 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v73 = (__int64)(&v69[1]._1.gc_desc + 2 * *v72);
  }
  else
  {
LABEL_51:
    v73 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 5LL, v68);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v73)(v70, *(_QWORD *)(v73 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v75 = v4->fields._LineModel_k__BackingField;
    if ( !v75 )
      goto LABEL_187;
    v76 = v75->klass;
    if ( *(_WORD *)&v75->klass->_2.bitflags1 )
    {
      v77 = 0LL;
      v78 = &v76->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLineModel_c **)v78 - 1) != IClassBoardLineModel_TypeInfo )
      {
        ++v77;
        v78 += 4;
        if ( v77 >= *(unsigned __int16 *)&v75->klass->_2.bitflags1 )
          goto LABEL_59;
      }
      v79 = (__int64)&v76->vtable[*v78].method;
    }
    else
    {
LABEL_59:
      v79 = sub_AF54C0(v4->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v74);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v79)(
                                 v75,
                                 *(_QWORD *)(v79 + 8));
    if ( !this )
      goto LABEL_187;
    v81 = this->klass;
    v82 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v83 = 0LL;
      v84 = &v81->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v84 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v83;
        v84 += 4;
        if ( v83 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_66;
      }
      v85 = (__int64)(&v81[1]._1.implementedInterfaces + 2 * *v84);
    }
    else
    {
LABEL_66:
      v85 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 15LL, v80);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v85)(
                                 v82,
                                 &v175,
                                 *(_QWORD *)(v85 + 8));
  }
  v86 = v4->fields._LineModel_k__BackingField;
  if ( !v86 )
    goto LABEL_187;
  v87 = v86->klass;
  if ( *(_WORD *)&v86->klass->_2.bitflags1 )
  {
    v88 = 0LL;
    v89 = (IClassBoardLineModel_c **)&v87->_1.interfaceOffsets->offset;
    while ( *(v89 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v88;
      v89 += 2;
      if ( v88 >= *(unsigned __int16 *)&v86->klass->_2.bitflags1 )
        goto LABEL_74;
    }
    v90 = (__int64)&v87->vtable[*(_DWORD *)v89 + 1].method;
  }
  else
  {
LABEL_74:
    v90 = sub_AF54C0(v4->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v74);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v90)(
                               v86,
                               *(_QWORD *)(v90 + 8));
  if ( !this )
    goto LABEL_187;
  v92 = this->klass;
  v93 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v94 = 0LL;
    v95 = &v92->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v95 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v94;
      v95 += 4;
      if ( v94 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_81;
    }
    v96 = (__int64)(&v92[1]._1.gc_desc + 2 * *v95);
  }
  else
  {
LABEL_81:
    v96 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 5LL, v91);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v96)(v93, *(_QWORD *)(v96 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v98 = v4->fields._LineModel_k__BackingField;
    if ( v98 )
    {
      v99 = v98->klass;
      if ( *(_WORD *)&v98->klass->_2.bitflags1 )
      {
        v100 = 0LL;
        v101 = (IClassBoardLineModel_c **)&v99->_1.interfaceOffsets->offset;
        while ( *(v101 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v100;
          v101 += 2;
          if ( v100 >= *(unsigned __int16 *)&v98->klass->_2.bitflags1 )
            goto LABEL_89;
        }
        v102 = (__int64)&v99->vtable[*(_DWORD *)v101 + 1].method;
      }
      else
      {
LABEL_89:
        v102 = sub_AF54C0(v98, IClassBoardLineModel_TypeInfo, 1LL, v97);
      }
      this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v102)(
                                   v98,
                                   *(_QWORD *)(v102 + 8));
      if ( this )
      {
        v104 = this->klass;
        v105 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v106 = 0LL;
          v107 = &v104->_1.interfaceOffsets->offset;
          while ( *((IClassBoardSquareModel_c **)v107 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v106;
            v107 += 4;
            if ( v106 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_96;
          }
          v108 = (__int64)(&v104[1]._1.implementedInterfaces + 2 * *v107);
        }
        else
        {
LABEL_96:
          v108 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 15LL, v103);
        }
        (*(void (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v108)(
          v105,
          &v175,
          *(_QWORD *)(v108 + 8));
        goto LABEL_99;
      }
    }
    goto LABEL_187;
  }
LABEL_99:
  this = v175;
  if ( !v175 )
    goto LABEL_187;
  notConnectedSprite = (int32_t)v175->fields.notConnectedSprite;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v172,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v175,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
  v110 = 0;
  v174 = v172;
  while ( 1 )
  {
    v123 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v174,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    if ( !v123 )
      break;
    current = v174.fields.current;
    if ( !v174.fields.current )
      sub_B5D69C(v123, v124);
    v112 = v174.fields.current->klass;
    if ( *(_WORD *)&v174.fields.current->klass->_2.bitflags1 )
    {
      v113 = 0LL;
      v114 = &v112->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v114 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v113;
        v114 += 4;
        if ( v113 >= *(unsigned __int16 *)&v174.fields.current->klass->_2.bitflags1 )
          goto LABEL_106;
      }
      v115 = (__int64)&v112->vtable[*v114 + 5].method;
    }
    else
    {
LABEL_106:
      v115 = sub_AF54C0(v174.fields.current, IClassBoardSquareModel_TypeInfo, 5LL, v125);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v115)(current, *(_QWORD *)(v115 + 8)) & 1) != 0 )
    {
      --notConnectedSprite;
    }
    else
    {
      v117 = current->klass;
      if ( *(_WORD *)&current->klass->_2.bitflags1 )
      {
        v118 = 0LL;
        v119 = (IClassBoardSquareModel_c **)&v117->_1.interfaceOffsets->offset;
        while ( *(v119 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v118;
          v119 += 2;
          if ( v118 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
            goto LABEL_113;
        }
        v120 = (__int64)&v117->vtable[*(_DWORD *)v119 + 13].method;
      }
      else
      {
LABEL_113:
        v120 = sub_AF54C0(current, IClassBoardSquareModel_TypeInfo, 13LL, v116);
      }
      LODWORD(v172.fields.list) = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v120)(
                                    current,
                                    0LL,
                                    *(_QWORD *)(v120 + 8));
      v121 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v172);
      v173 = 1;
      v122 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v173);
      if ( !v121 )
        sub_B5D69C(v122, v122);
      v110 += System_Enum__HasFlag(v121, v122, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v174,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
  if ( !v110 )
    return 0;
  if ( v110 < notConnectedSprite )
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  float *p_blankOffsetLength; // x8

  v5 = this;
  if ( (byte_42EA803 & 1) == 0 )
  {
    sub_B5D5C4(&IClassBoardLockModel_TypeInfo, (_DWORD)squareModel, (_DWORD)method, v3);
    this = (ClassBoardLine_o *)sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v6, v7, v8);
    byte_42EA803 = 1;
  }
  if ( !squareModel )
    sub_B5D69C(this, squareModel);
  klass = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(squareModel, IClassBoardSquareModel_TypeInfo, 5LL, v3);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    p_blankOffsetLength = &v5->fields.blankOffsetLength;
  }
  else if ( sub_B5D684(squareModel, IClassBoardLockModel_TypeInfo) )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t ConnectType; // w0
  const MethodInfo *v21; // x1
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0
  System_String_o *animNameBrightTurnRoadOnUnlock; // x20
  System_Action_o *v24; // x0
  __int64 *v25; // x8
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x3

  if ( (byte_42EA801 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardEffectPlayer_GetData_bool___, v5, v6, v7);
    sub_B5D5C4(&Method_ClassBoardLine__PlayReleaseEffect_b__33_0__, v8, v9, v10);
    sub_B5D5C4(&Method_ClassBoardLine__PlayReleaseEffect_b__33_1__, v11, v12, v13);
    sub_B5D5C4(&Method_ClassBoardLine__PlayReleaseEffect_b__33_2__, v14, v15, v16);
    sub_B5D5C4(&Method_ClassBoardLine__PlayReleaseEffect_b__33_3__, v17, v18, v19);
    byte_42EA801 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      if ( ClassBoardEffectPlayer__GetData_bool_(
             releaseEffectPlayer,
             (const MethodInfo_1ADCDB8 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOnUnlock;
        v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        v25 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_2__;
      }
      else
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOn;
        v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        v25 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_3__;
      }
      goto LABEL_15;
    }
LABEL_16:
    sub_B5D69C(releaseEffectPlayer, v21);
  }
  if ( ConnectType != 1 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      ClassBoardEffectPlayer__End(releaseEffectPlayer, v21);
      return;
    }
    goto LABEL_16;
  }
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  if ( !releaseEffectPlayer )
    goto LABEL_16;
  if ( ClassBoardEffectPlayer__GetData_bool_(
         releaseEffectPlayer,
         (const MethodInfo_1ADCDB8 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnUnlock;
    v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v25 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_0__;
  }
  else
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurn;
    v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v25 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_1__;
  }
LABEL_15:
  v26 = v24;
  System_Action___ctor(v24, (Il2CppObject *)this, *v25, 0LL);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnRoadOnUnlock, v26, v27);
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
    sub_B5D69C(simpleAnimation, name);
  }
  SimpleAnimation__Play_16676044(simpleAnimation, name, 0LL);
  v9 = ClassBoardLine__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall ClassBoardLine__PlayTransition(ClassBoardLine_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t ConnectType; // w0
  System_String_o *animNameBrightTurnTransitionRoadOn; // x20
  System_Action_o *v16; // x0
  __int64 *v17; // x8
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x3

  if ( (byte_42EA7FF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardLine__PlayTransition_b__28_0__, v5, v6, v7);
    sub_B5D5C4(&Method_ClassBoardLine__PlayTransition_b__28_1__, v8, v9, v10);
    sub_B5D5C4(&Method_ClassBoardLine__PlayTransition_b__28_2__, v11, v12, v13);
    byte_42EA7FF = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransitionRoadOn;
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v17 = &Method_ClassBoardLine__PlayTransition_b__28_1__;
  }
  else if ( ConnectType == 1 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransition;
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v17 = &Method_ClassBoardLine__PlayTransition_b__28_0__;
  }
  else
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBlackOutTransition;
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v17 = &Method_ClassBoardLine__PlayTransition_b__28_2__;
  }
  v18 = v16;
  System_Action___ctor(v16, (Il2CppObject *)this, *v17, 0LL);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnTransitionRoadOn, v18, v19);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *name; // x0
  __int64 v30; // x1
  System_String_array *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  __int64 v46; // x3
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v48; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v51; // x3
  UnityEngine_Object_c *v52; // x8
  UnityEngine_Object_o *v53; // x23
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x23
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x1
  __int64 v71; // x3
  IClassBoardLineModel_c *v72; // x8
  unsigned __int64 v73; // x10
  int32_t *v74; // x11
  __int64 v75; // x0
  __int64 v76; // x3
  UnityEngine_Object_c *v77; // x8
  UnityEngine_Object_o *v78; // x22
  unsigned __int64 v79; // x10
  int32_t *v80; // x11
  __int64 v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x22
  System_String_o *v89; // x0
  const MethodInfo *v90; // x1
  System_Int32_array **v91; // x20
  __int64 v92; // x21
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  System_Action_o *v106; // x21
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  struct UnityEngine_GameObject_array *effectObjects; // x22
  int max_length; // w8
  int v115; // w9
  Il2CppClass **v116; // x8
  UnityEngine_GameObject_o *v117; // x21
  UnityEngine_Transform_o *transform; // x0
  float lineLength; // s8
  UnityEngine_Transform_o *v120; // x20
  float y; // s9
  int v122; // s2
  float v123; // s0
  float v124; // s1
  __int64 v125; // x0
  __int64 v126; // x0
  int v127; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA7FE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)setLineModel, (_DWORD)method, v3);
    sub_B5D5C4(&ClassBoardEffectPlayer_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_ClassBoardLine_PlayReleaseEffect__, v13, v14, v15);
    sub_B5D5C4(&IClassBoardLineModel_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&string___TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v25, v26, v27);
    byte_42EA7FE = 1;
  }
  v127 = 0;
  this->fields._LineModel_k__BackingField = setLineModel;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._LineModel_k__BackingField,
    (System_Int32_array **)setLineModel,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  name = (UnityEngine_Object_o *)sub_B5D5DC(string___TypeInfo, 5LL);
  if ( !gameObject )
    goto LABEL_63;
  v31 = (System_String_array *)name;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL);
  if ( !v31 )
    goto LABEL_63;
  v38 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B5D684(name, v31->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
  }
  if ( !v31->max_length )
    goto LABEL_64;
  v31->m_Items[0] = (System_String_o *)v38;
  sub_B5D560((BattleServantConfConponent_o *)v31->m_Items, v38, v32, v33, v34, v35, v36, v37);
  name = (UnityEngine_Object_o *)StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    name = (UnityEngine_Object_o *)sub_B5D684(StringLiteral_16096/*"_"*/, v31->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
    v45 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( v31->max_length <= 1 )
    goto LABEL_64;
  v31->m_Items[1] = (System_String_o *)v45;
  sub_B5D560((BattleServantConfConponent_o *)&v31->m_Items[1], v45, v39, v40, v41, v42, v43, v44);
  if ( !setLineModel )
    goto LABEL_63;
  klass = setLineModel->klass;
  if ( *(_WORD *)&setLineModel->klass->_2.bitflags1 )
  {
    v48 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v48;
      p_offset += 4;
      if ( v48 >= *(unsigned __int16 *)&setLineModel->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_18:
    p_method = sub_AF54C0(setLineModel, IClassBoardLineModel_TypeInfo, 0LL, v46);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))p_method)(
                                   setLineModel,
                                   *(_QWORD *)(p_method + 8));
  if ( !name )
    goto LABEL_63;
  v52 = name->klass;
  v53 = name;
  if ( *(_WORD *)&name->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    v55 = &v52->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v55 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)&name->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v56 = (__int64)(&v52->vtable._0_Equals.method + 2 * *v55);
  }
  else
  {
LABEL_25:
    v56 = sub_AF54C0(name, IClassBoardSquareModel_TypeInfo, 0LL, v51);
  }
  v127 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v56)(v53, *(_QWORD *)(v56 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v127, 0LL);
  v63 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B5D684(name, v31->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
  }
  if ( v31->max_length <= 2 )
    goto LABEL_64;
  v31->m_Items[2] = (System_String_o *)v63;
  sub_B5D560((BattleServantConfConponent_o *)&v31->m_Items[2], v63, v57, v58, v59, v60, v61, v62);
  name = (UnityEngine_Object_o *)StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    name = (UnityEngine_Object_o *)sub_B5D684(StringLiteral_16096/*"_"*/, v31->obj.klass->_1.element_class);
    if ( !name )
      goto LABEL_65;
    v70 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v70 = 0LL;
  }
  if ( v31->max_length <= 3 )
    goto LABEL_64;
  v31->m_Items[3] = (System_String_o *)v70;
  sub_B5D560((BattleServantConfConponent_o *)&v31->m_Items[3], v70, v64, v65, v66, v67, v68, v69);
  v72 = setLineModel->klass;
  if ( *(_WORD *)&setLineModel->klass->_2.bitflags1 )
  {
    v73 = 0LL;
    v74 = &v72->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v74 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v73;
      v74 += 4;
      if ( v73 >= *(unsigned __int16 *)&setLineModel->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v75 = (__int64)&v72->vtable[*v74 + 1].method;
  }
  else
  {
LABEL_39:
    v75 = sub_AF54C0(setLineModel, IClassBoardLineModel_TypeInfo, 1LL, v71);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v75)(
                                   setLineModel,
                                   *(_QWORD *)(v75 + 8));
  if ( !name )
    goto LABEL_63;
  v77 = name->klass;
  v78 = name;
  if ( *(_WORD *)&name->klass->_2.bitflags1 )
  {
    v79 = 0LL;
    v80 = &v77->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v80 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v79;
      v80 += 4;
      if ( v79 >= *(unsigned __int16 *)&name->klass->_2.bitflags1 )
        goto LABEL_46;
    }
    v81 = (__int64)(&v77->vtable._0_Equals.method + 2 * *v80);
  }
  else
  {
LABEL_46:
    v81 = sub_AF54C0(name, IClassBoardSquareModel_TypeInfo, 0LL, v76);
  }
  v127 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v81)(v78, *(_QWORD *)(v81 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v127, 0LL);
  v88 = (System_Int32_array **)name;
  if ( name )
  {
    name = (UnityEngine_Object_o *)sub_B5D684(name, v31->obj.klass->_1.element_class);
    if ( !name )
    {
LABEL_65:
      v126 = sub_B5D6BC(name);
      sub_B5D668(v126, 0LL);
    }
  }
  if ( v31->max_length <= 4 )
    goto LABEL_64;
  v31->m_Items[4] = (System_String_o *)v88;
  sub_B5D560((BattleServantConfConponent_o *)&v31->m_Items[4], v88, v82, v83, v84, v85, v86, v87);
  v89 = System_String__Concat_44657912(v31, 0LL);
  UnityEngine_Object__set_name(gameObject, v89, 0LL);
  ClassBoardLine__UpdateLine(this, v90);
  name = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !name )
    goto LABEL_63;
  v91 = (System_Int32_array **)UnityEngine_Object__get_name(name, 0LL);
  v92 = sub_B5D694(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v92, 0LL);
  *(_QWORD *)(v92 + 16) = v91;
  sub_B5D560((BattleServantConfConponent_o *)(v92 + 16), v91, v93, v94, v95, v96, v97, v98);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v92;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.releaseEffectPlayer,
    (System_Int32_array **)v92,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v106 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v106, (Il2CppObject *)this, Method_ClassBoardLine_PlayReleaseEffect__, 0LL);
  if ( !releaseEffectPlayer
    || (releaseEffectPlayer->fields.playCallback = v106,
        sub_B5D560(
          (BattleServantConfConponent_o *)&releaseEffectPlayer->fields.playCallback,
          (System_Int32_array **)v106,
          v107,
          v108,
          v109,
          v110,
          v111,
          v112),
        effectObjects = this->fields.effectObjects,
        v127 = 0,
        !effectObjects) )
  {
LABEL_63:
    sub_B5D69C(name, v30);
  }
  max_length = effectObjects->max_length;
  if ( max_length >= 1 )
  {
    v115 = 0;
    while ( v115 < (unsigned int)max_length )
    {
      v116 = &effectObjects->obj.klass + v115;
      v117 = (UnityEngine_GameObject_o *)v116[4];
      if ( !v117 )
        goto LABEL_63;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v116[4], 0LL);
      lineLength = this->fields.lineLength;
      v120 = transform;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v117, 0LL);
      if ( !name )
        goto LABEL_63;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)name, 0LL);
      y = localScale.fields.y;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v117, 0LL);
      if ( !name )
        goto LABEL_63;
      *(UnityEngine_Vector3_o *)(&v122 - 2) = UnityEngine_Transform__get_localScale(
                                                (UnityEngine_Transform_o *)name,
                                                0LL);
      if ( !v120 )
        goto LABEL_63;
      v123 = lineLength;
      v124 = y;
      UnityEngine_Transform__set_localScale(v120, *(UnityEngine_Vector3_o *)(&v122 - 2), 0LL);
      v115 = v127 + 1;
      v127 = v115;
      max_length = effectObjects->max_length;
      if ( v115 >= max_length )
        return;
    }
LABEL_64:
    v125 = sub_B5D6C8(name);
    sub_B5D668(v125, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ClassBoardLine_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  unsigned __int64 v10; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x3
  ClassBoardLine_c *v14; // x8
  ClassBoardLine_o *v15; // x20
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x3
  float v20; // s0
  float v21; // s1
  float v22; // s2
  struct IClassBoardLineModel_o *v23; // x20
  IClassBoardLineModel_c *v24; // x8
  float v25; // s11
  float v26; // s10
  float v27; // s12
  unsigned __int64 v28; // x10
  IClassBoardLineModel_c **v29; // x11
  __int64 v30; // x0
  __int64 v31; // x3
  ClassBoardLine_c *v32; // x8
  ClassBoardLine_o *v33; // x20
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  long double v37; // q0 OVERLAPPED
  float v38; // s9
  float v39; // s1
  float v40; // s14
  float v41; // s2
  float v42; // s13
  float v43; // s1
  float v44; // s2
  __int64 v45; // x3
  float v46; // s0
  float v47; // s1
  float v48; // s2
  struct IClassBoardLineModel_o *v49; // x20
  IClassBoardLineModel_c *v50; // x8
  float v51; // s15
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  IClassBoardSquareModel_o *v55; // x0
  const MethodInfo *v56; // x2
  __int64 v57; // x3
  float SquareTypeOffset; // s0
  struct IClassBoardLineModel_o *v59; // x20
  IClassBoardLineModel_c *v60; // x8
  float v61; // s0
  float v62; // s8
  float v63; // s11
  float v64; // s15
  float v65; // s10
  unsigned __int64 v66; // x10
  IClassBoardLineModel_c **v67; // x11
  __int64 v68; // x0
  IClassBoardSquareModel_o *v69; // x0
  const MethodInfo *v70; // x2
  float v71; // s0
  float magnitude; // s8
  const MethodInfo *v73; // x1
  int v74; // w20
  UnityEngine_Component_o **p_connectedSprite; // x22
  UnityEngine_Component_o *v76; // x20
  int32_t v77; // w0
  float v78; // s9
  UnityEngine_Transform_o *transform; // x19
  float v80; // s0
  float v81; // s1
  float v82; // s2
  __int64 v83; // [xsp+0h] [xbp-90h] BYREF
  float v84; // [xsp+8h] [xbp-88h]
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  float v86; // [xsp+68h] [xbp-28h]
  float v87; // [xsp+6Ch] [xbp-24h]
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s3.4,4:s4.4,8:s5.4

  v4 = this;
  if ( (byte_42EA800 & 1) == 0 )
  {
    sub_B5D5C4(&IClassBoardLineModel_TypeInfo, (_DWORD)method, v2, v3);
    this = (ClassBoardLine_o *)sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v5, v6, v7);
    byte_42EA800 = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v84 = 0.0;
  v83 = 0LL;
  LineModel_k__BackingField = v4->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_61;
  klass = LineModel_k__BackingField->klass;
  if ( *(_WORD *)&LineModel_k__BackingField->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&LineModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(v4->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_61;
  v14 = this->klass;
  v15 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    v17 = &v14->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v17 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v16;
      v17 += 4;
      if ( v16 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v18 = (__int64)(&v14->vtable._3_ToString.method + 2 * *v17);
  }
  else
  {
LABEL_15:
    v18 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 3LL, v13);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
  v23 = v4->fields._LineModel_k__BackingField;
  if ( !v23 )
    goto LABEL_61;
  v24 = v23->klass;
  v25 = v20;
  v26 = v21;
  v27 = v22;
  if ( *(_WORD *)&v23->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = (IClassBoardLineModel_c **)&v24->_1.interfaceOffsets->offset;
    while ( *(v29 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v28;
      v29 += 2;
      if ( v28 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v30 = (__int64)&v24->vtable[*(_DWORD *)v29 + 1].method;
  }
  else
  {
LABEL_22:
    v30 = sub_AF54C0(v4->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v19);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v30)(
                               v23,
                               *(_QWORD *)(v30 + 8));
  if ( !this )
    goto LABEL_61;
  v32 = this->klass;
  v33 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v32->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v35 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v36 = (__int64)(&v32->vtable._3_ToString.method + 2 * *v35);
  }
  else
  {
LABEL_29:
    v36 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 3LL, v31);
  }
  v37 = ((long double (__fastcall *)(ClassBoardLine_o *, _QWORD))*(_QWORD *)v36)(v33, *(_QWORD *)(v36 + 8));
  v38 = *(float *)&v37;
  v40 = v39;
  v42 = v41;
  *(float *)&v37 = v25;
  v43 = v26;
  v44 = v27;
  v93.fields.x = v38;
  v93.fields.y = v40;
  v93.fields.z = v42;
  UnityEngine_Vector3__Distance(*(UnityEngine_Vector3_o *)&v37, v93, 0LL);
  v88.fields.x = v38 - v25;
  v88.fields.y = v40 - v26;
  v88.fields.z = v42 - v27;
  *(float *)&v83 = v38 - v25;
  *((float *)&v83 + 1) = v40 - v26;
  v84 = v42 - v27;
  *(UnityEngine_Vector3_o *)&v46 = UnityEngine_Vector3__get_normalized(v88, (const MethodInfo *)&v83);
  v86 = v48;
  v87 = v47;
  v49 = v4->fields._LineModel_k__BackingField;
  if ( !v49 )
    goto LABEL_61;
  v50 = v49->klass;
  v51 = v46;
  if ( *(_WORD *)&v49->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v50->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v53 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&v49->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v54 = (__int64)&v50->vtable[*v53].method;
  }
  else
  {
LABEL_36:
    v54 = sub_AF54C0(v4->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL, v45);
  }
  v55 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v54)(
                                      v49,
                                      *(_QWORD *)(v54 + 8));
  SquareTypeOffset = ClassBoardLine__GetSquareTypeOffset(v4, v55, v56);
  v59 = v4->fields._LineModel_k__BackingField;
  if ( !v59 )
    goto LABEL_61;
  v60 = v59->klass;
  v61 = SquareTypeOffset * 0.5;
  v62 = v51;
  v63 = v25 - (float)(v51 * v61);
  v64 = v26 - (float)(v87 * v61);
  v65 = v27 - (float)(v86 * v61);
  if ( *(_WORD *)&v59->klass->_2.bitflags1 )
  {
    v66 = 0LL;
    v67 = (IClassBoardLineModel_c **)&v60->_1.interfaceOffsets->offset;
    while ( *(v67 - 1) != IClassBoardLineModel_TypeInfo )
    {
      ++v66;
      v67 += 2;
      if ( v66 >= *(unsigned __int16 *)&v59->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v68 = (__int64)&v60->vtable[*(_DWORD *)v67 + 1].method;
  }
  else
  {
LABEL_43:
    v68 = sub_AF54C0(v4->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL, v57);
  }
  v69 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v68)(
                                      v59,
                                      *(_QWORD *)(v68 + 8));
  v71 = ClassBoardLine__GetSquareTypeOffset(v4, v69, v70) * 0.5;
  v89.fields.y = (float)(v38 + (float)(v62 * v71)) - v63;
  v89.fields.z = (float)(v40 + (float)(v87 * v71)) - v64;
  v89.fields.x = (float)(v42 + (float)(v86 * v71)) - v65;
  methoda.methodPointer = *(Il2CppMethodPointer *)&v89.fields.y;
  *(float *)&methoda.invoker_method = v89.fields.x;
  magnitude = UnityEngine_Vector3__get_magnitude(v89, &methoda);
  v4->fields.lineLength = magnitude;
  this = (ClassBoardLine_o *)ClassBoardLine__GetConnectType(v4, v73);
  if ( !v4->fields.notConnectedSprite )
    goto LABEL_61;
  v74 = (int)this;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)v4->fields.notConnectedSprite,
                               0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        p_connectedSprite = (UnityEngine_Component_o **)&v4->fields.connectedSprite,
        (this = (ClassBoardLine_o *)v4->fields.connectedSprite) == 0LL)
    || (this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (ClassBoardLine_o *)v4->fields.connectedOnSprite) == 0LL)
    || (this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_61:
    sub_B5D69C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !v74 )
    goto LABEL_54;
  if ( v74 == 2 )
  {
    p_connectedSprite = (UnityEngine_Component_o **)&v4->fields.connectedOnSprite;
    goto LABEL_56;
  }
  if ( v74 != 1 )
LABEL_54:
    p_connectedSprite = (UnityEngine_Component_o **)&v4->fields.notConnectedSprite;
LABEL_56:
  v76 = *p_connectedSprite;
  if ( !*p_connectedSprite )
    goto LABEL_61;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(*p_connectedSprite, 0LL);
  if ( !this )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v77 = UnityEngine_Mathf__CeilToInt(magnitude, 0LL);
  UIWidget__set_width((UIWidget_o *)v76, v77, 0LL);
  v78 = atan2f(*((float *)&methoda.methodPointer + 1), *(float *)&methoda.methodPointer);
  this = (ClassBoardLine_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_61;
  v90.fields.y = 0.0;
  v90.fields.z = v78 * 57.296;
  v90.fields.x = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v90, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  *(UnityEngine_Vector3_o *)&v80 = UnityEngine_Vector3__get_normalized(v91, &methoda);
  if ( !transform )
    goto LABEL_61;
  v92.fields.x = v63 + (float)((float)(magnitude * 0.5) * v80);
  v92.fields.y = v64 + (float)((float)(magnitude * 0.5) * v81);
  v92.fields.z = v65 + (float)((float)(magnitude * 0.5) * v82);
  UnityEngine_Transform__set_localPosition(transform, v92, 0LL);
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

  if ( (byte_42EA804 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo, (_DWORD)name, (_DWORD)endCallback, method);
    byte_42EA804 = 1;
  }
  v7 = sub_B5D694(ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo);
  ClassBoardLine__WaitAnimationFinished_d__37___ctor((ClassBoardLine__WaitAnimationFinished_d__37_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = name;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)name, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_B5D560(
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
    sub_B5D69C(simpleAnimation, method);
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
    sub_B5D69C(simpleAnimation, method);
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
    sub_B5D69C(simpleAnimation, method);
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
    sub_B5D69C(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B5D69C(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B5D69C(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_B5D69C(0LL, method);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  ClassBoardLine__WaitAnimationFinished_d__37_o *v4; // x19
  int32_t _1__state; // w8
  struct ClassBoardLine_o *_4__this; // x8
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

  v4 = this;
  if ( (byte_42E5E81 & 1) == 0 )
  {
    this = (ClassBoardLine__WaitAnimationFinished_d__37_o *)sub_B5D5C4(
                                                              &SimpleAnimation_State_TypeInfo,
                                                              (_DWORD)method,
                                                              v2,
                                                              v3);
    byte_42E5E81 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    p_state_5__2 = &v4->fields._state_5__2;
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    this = (ClassBoardLine__WaitAnimationFinished_d__37_o *)_4__this->fields.simpleAnimation;
    if ( !this )
      goto LABEL_28;
    p_state_5__2 = &v4->fields._state_5__2;
    v4->fields._state_5__2 = SimpleAnimation__GetState((SimpleAnimation_o *)this, v4->fields.name, 0LL);
    sub_B5D560(&v4->fields._state_5__2);
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
    p_method = sub_AF54C0(*p_state_5__2, SimpleAnimation_State_TypeInfo, 13LL, v3);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(v8, *(_QWORD *)(p_method + 8)) <= 0.0 )
    goto LABEL_25;
  v14 = *p_state_5__2;
  if ( !v14 )
LABEL_28:
    sub_B5D69C(this, method);
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
    v18 = sub_AF54C0(v14, SimpleAnimation_State_TypeInfo, 5LL, v13);
  }
  if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) >= 1.0 )
  {
LABEL_25:
    ActionExtensions__Call(v4->fields.endCallback, 0LL);
    return 0;
  }
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ClassBoardLine__WaitAnimationFinished_d__37_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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