void __fastcall ClassBoardLine___ctor(ClassBoardLine_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w1
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4B058BD & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3201/*"BrightTurnTransition"*/, method);
    sub_1BC3008(&StringLiteral_3198/*"BrightTurn"*/, v5);
    sub_1BC3008(&StringLiteral_3202/*"BrightTurnTransitionRoadOn"*/, v6);
    sub_1BC3008(&StringLiteral_7083/*"GrandReturnTransition"*/, v7);
    sub_1BC3008(&StringLiteral_3203/*"BrightTurnUnLock"*/, v8);
    sub_1BC3008(&StringLiteral_3199/*"BrightTurnRoadOn"*/, v9);
    sub_1BC3008(&StringLiteral_3200/*"BrightTurnRoadOnUnLock"*/, v10);
    sub_1BC3008(&StringLiteral_3153/*"BlackOutTransition"*/, v11);
    byte_4B058BD = 1;
  }
  v12 = StringLiteral_3198/*"BrightTurn"*/;
  this->fields.animNameBrightTurn = (struct System_String_o *)StringLiteral_3198/*"BrightTurn"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.animNameBrightTurn, v12, v2, v3);
  v13 = StringLiteral_3199/*"BrightTurnRoadOn"*/;
  this->fields.animNameBrightTurnRoadOn = (struct System_String_o *)StringLiteral_3199/*"BrightTurnRoadOn"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.animNameBrightTurnRoadOn, v13, v14, v15);
  v16 = StringLiteral_3203/*"BrightTurnUnLock"*/;
  this->fields.animNameBrightTurnUnlock = (struct System_String_o *)StringLiteral_3203/*"BrightTurnUnLock"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.animNameBrightTurnUnlock, v16, v17, v18);
  v19 = StringLiteral_3200/*"BrightTurnRoadOnUnLock"*/;
  this->fields.animNameBrightTurnRoadOnUnlock = (struct System_String_o *)StringLiteral_3200/*"BrightTurnRoadOnUnLock"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.animNameBrightTurnRoadOnUnlock, v19, v20, v21);
  v22 = StringLiteral_3201/*"BrightTurnTransition"*/;
  this->fields.animNameBrightTurnTransition = (struct System_String_o *)StringLiteral_3201/*"BrightTurnTransition"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.animNameBrightTurnTransition, v22, v23, v24);
  v25 = StringLiteral_3202/*"BrightTurnTransitionRoadOn"*/;
  this->fields.animNameBrightTurnTransitionRoadOn = (struct System_String_o *)StringLiteral_3202/*"BrightTurnTransitionRoadOn"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.animNameBrightTurnTransitionRoadOn, v25, v26, v27);
  v28 = StringLiteral_3153/*"BlackOutTransition"*/;
  this->fields.animNameBlackOutTransition = (struct System_String_o *)StringLiteral_3153/*"BlackOutTransition"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.animNameBlackOutTransition, v28, v29, v30);
  v31 = StringLiteral_7083/*"GrandReturnTransition"*/;
  this->fields.animNameGrandReturnTransition = (struct System_String_o *)StringLiteral_7083/*"GrandReturnTransition"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.animNameGrandReturnTransition, v31, v32, v33);
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
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  ClassBoardLine_c *v16; // x8
  ClassBoardLine_o *v17; // x20
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  struct IClassBoardLineModel_o *v21; // x20
  IClassBoardLineModel_c *v22; // x8
  __int64 v23; // x9
  IClassBoardLineModel_c **v24; // x10
  __int64 v25; // x0
  ClassBoardLine_c *v26; // x8
  ClassBoardLine_o *v27; // x20
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  System_Collections_Generic_List_object__o *v31; // x20
  struct IClassBoardLineModel_o *v32; // x20
  IClassBoardLineModel_c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  struct IClassBoardLineModel_o *v37; // x20
  IClassBoardLineModel_c *v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  ClassBoardLine_c *v42; // x8
  ClassBoardLine_o *v43; // x20
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  struct IClassBoardLineModel_o *v47; // x20
  IClassBoardLineModel_c *v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  ClassBoardLine_c *v52; // x8
  ClassBoardLine_o *v53; // x20
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  struct IClassBoardLineModel_o *v57; // x20
  IClassBoardLineModel_c *v58; // x8
  __int64 v59; // x9
  IClassBoardLineModel_c **v60; // x10
  __int64 v61; // x0
  ClassBoardLine_c *v62; // x8
  ClassBoardLine_o *v63; // x20
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 v66; // x0
  struct IClassBoardLineModel_o *v67; // x19
  IClassBoardLineModel_c *v68; // x8
  __int64 v69; // x9
  IClassBoardLineModel_c **v70; // x10
  __int64 v71; // x0
  ClassBoardLine_c *v72; // x8
  ClassBoardLine_o *v73; // x19
  __int64 v74; // x9
  int32_t *v75; // x10
  __int64 v76; // x0
  int32_t m_CancellationTokenSource; // w22
  int32_t v78; // w23
  _BOOL8 v79; // x0
  __int64 v80; // x1
  Il2CppObject *current; // x19
  Il2CppClass *v82; // x8
  __int64 v83; // x9
  int32_t *v84; // x10
  __int64 v85; // x0
  Il2CppClass *v86; // x8
  __int64 v87; // x9
  IClassBoardSquareModel_c **v88; // x10
  __int64 v89; // x0
  ClassBoardLine_c *v91; // x8
  ClassBoardLine_o *v92; // x20
  __int64 v93; // x9
  int32_t *v94; // x10
  __int64 v95; // x0
  struct IClassBoardLineModel_o *v96; // x20
  IClassBoardLineModel_c *v97; // x8
  __int64 v98; // x9
  IClassBoardLineModel_c **v99; // x10
  __int64 v100; // x0
  ClassBoardLine_c *v101; // x8
  ClassBoardLine_o *v102; // x20
  __int64 v103; // x9
  int32_t *v104; // x10
  __int64 v105; // x0
  struct IClassBoardLineModel_o *v106; // x20
  IClassBoardLineModel_c *v107; // x8
  __int64 v108; // x9
  int *v109; // x10
  __int64 v110; // x0
  ClassBoardLine_c *v111; // x8
  ClassBoardLine_o *v112; // x20
  __int64 v113; // x9
  int32_t *v114; // x10
  __int64 v115; // x0
  struct IClassBoardLineModel_o *v116; // x19
  IClassBoardLineModel_c *v117; // x8
  __int64 v118; // x9
  IClassBoardLineModel_c **v119; // x10
  __int64 v120; // x0
  ClassBoardLine_c *v121; // x8
  ClassBoardLine_o *v122; // x19
  __int64 v123; // x9
  int32_t *v124; // x10
  __int64 v125; // x0
  System_Collections_Generic_List_Enumerator_object__o v126; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v127; // [xsp+20h] [xbp-60h] BYREF
  ClassBoardLine_o *v128; // [xsp+48h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4B058B9 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v4);
    sub_1BC3008(&IClassBoardLineModel_TypeInfo, v5);
    sub_1BC3008(&IClassBoardSquareModel_TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v9);
    this = (ClassBoardLine_o *)sub_1BC3008(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v10);
    byte_4B058B9 = 1;
  }
  v128 = 0LL;
  memset(&v127, 0, sizeof(v127));
  LineModel_k__BackingField = v2->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_180;
  klass = LineModel_k__BackingField->klass;
  v13 = *(unsigned __int16 *)(&LineModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&LineModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C13570(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_180;
  v16 = this->klass;
  v17 = this;
  v18 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v19 = &v16->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_15;
    }
    v20 = (__int64)(&v16[1]._1.gc_desc + 2 * *v19);
  }
  else
  {
LABEL_15:
    v20 = sub_1C13570(this, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v20)(v17, *(_QWORD *)(v20 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_33;
  v21 = v2->fields._LineModel_k__BackingField;
  if ( !v21 )
    goto LABEL_180;
  v22 = v21->klass;
  v23 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
  {
    v24 = (IClassBoardLineModel_c **)&v22->_1.interfaceOffsets->offset;
    while ( *(v24 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v23;
      v24 += 2;
      if ( !v23 )
        goto LABEL_23;
    }
    v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 1].method;
  }
  else
  {
LABEL_23:
    v25 = sub_1C13570(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v25)(
                               v21,
                               *(_QWORD *)(v25 + 8));
  if ( !this )
    goto LABEL_180;
  v26 = this->klass;
  v27 = this;
  v28 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v29 = &v26->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v29 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_30;
    }
    v30 = (__int64)(&v26[1]._1.gc_desc + 2 * *v29);
  }
  else
  {
LABEL_30:
    v30 = sub_1C13570(this, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_33:
    v31 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v31,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    v128 = (ClassBoardLine_o *)v31;
    v32 = v2->fields._LineModel_k__BackingField;
    if ( v32 )
    {
      v33 = v32->klass;
      v34 = *(unsigned __int16 *)(&v32->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v32->klass->_2.bitflags2 + 3) )
      {
        v35 = &v33->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v35 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v34;
          v35 += 4;
          if ( !v34 )
            goto LABEL_38;
        }
        v36 = (__int64)&v33->vtable[*v35].method;
      }
      else
      {
LABEL_38:
        v36 = sub_1C13570(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
      }
      this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v36)(
                                   v32,
                                   *(_QWORD *)(v36 + 8));
      if ( this )
      {
        v42 = this->klass;
        v43 = this;
        v44 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          v45 = &v42->_1.interfaceOffsets->offset;
          while ( *((IClassBoardSquareModel_c **)v45 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v44;
            v45 += 4;
            if ( !v44 )
              goto LABEL_51;
          }
          v46 = (__int64)(&v42[1]._1.gc_desc + 2 * *v45);
        }
        else
        {
LABEL_51:
          v46 = sub_1C13570(this, IClassBoardSquareModel_TypeInfo, 5LL);
        }
        this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v46)(
                                     v43,
                                     *(_QWORD *)(v46 + 8));
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v47 = v2->fields._LineModel_k__BackingField;
          if ( !v47 )
            goto LABEL_180;
          v48 = v47->klass;
          v49 = *(unsigned __int16 *)(&v47->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v47->klass->_2.bitflags2 + 3) )
          {
            v50 = &v48->_1.interfaceOffsets->offset;
            while ( *((IClassBoardLineModel_c **)v50 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v49;
              v50 += 4;
              if ( !v49 )
                goto LABEL_59;
            }
            v51 = (__int64)&v48->vtable[*v50].method;
          }
          else
          {
LABEL_59:
            v51 = sub_1C13570(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
          }
          this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v51)(
                                       v47,
                                       *(_QWORD *)(v51 + 8));
          if ( !this )
            goto LABEL_180;
          v52 = this->klass;
          v53 = this;
          v54 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
          {
            v55 = &v52->_1.interfaceOffsets->offset;
            while ( *((IClassBoardSquareModel_c **)v55 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v54;
              v55 += 4;
              if ( !v54 )
                goto LABEL_66;
            }
            v56 = (__int64)&v52[1]._2 + 16 * *v55;
          }
          else
          {
LABEL_66:
            v56 = sub_1C13570(this, IClassBoardSquareModel_TypeInfo, 17LL);
          }
          this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v56)(
                                       v53,
                                       &v128,
                                       *(_QWORD *)(v56 + 8));
        }
        v57 = v2->fields._LineModel_k__BackingField;
        if ( v57 )
        {
          v58 = v57->klass;
          v59 = *(unsigned __int16 *)(&v57->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v57->klass->_2.bitflags2 + 3) )
          {
            v60 = (IClassBoardLineModel_c **)&v58->_1.interfaceOffsets->offset;
            while ( *(v60 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v59;
              v60 += 2;
              if ( !v59 )
                goto LABEL_74;
            }
            v61 = (__int64)&v58->vtable[*(_DWORD *)v60 + 1].method;
          }
          else
          {
LABEL_74:
            v61 = sub_1C13570(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
          }
          this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v61)(
                                       v57,
                                       *(_QWORD *)(v61 + 8));
          if ( this )
          {
            v62 = this->klass;
            v63 = this;
            v64 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
            {
              v65 = &v62->_1.interfaceOffsets->offset;
              while ( *((IClassBoardSquareModel_c **)v65 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                --v64;
                v65 += 4;
                if ( !v64 )
                  goto LABEL_81;
              }
              v66 = (__int64)(&v62[1]._1.gc_desc + 2 * *v65);
            }
            else
            {
LABEL_81:
              v66 = sub_1C13570(this, IClassBoardSquareModel_TypeInfo, 5LL);
            }
            this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v66)(
                                         v63,
                                         *(_QWORD *)(v66 + 8));
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v67 = v2->fields._LineModel_k__BackingField;
              if ( !v67 )
                goto LABEL_180;
              v68 = v67->klass;
              v69 = *(unsigned __int16 *)(&v67->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v67->klass->_2.bitflags2 + 3) )
              {
                v70 = (IClassBoardLineModel_c **)&v68->_1.interfaceOffsets->offset;
                while ( *(v70 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  --v69;
                  v70 += 2;
                  if ( !v69 )
                    goto LABEL_89;
                }
                v71 = (__int64)&v68->vtable[*(_DWORD *)v70 + 1].method;
              }
              else
              {
LABEL_89:
                v71 = sub_1C13570(v67, IClassBoardLineModel_TypeInfo, 1LL);
              }
              this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v71)(
                                           v67,
                                           *(_QWORD *)(v71 + 8));
              if ( !this )
                goto LABEL_180;
              v72 = this->klass;
              v73 = this;
              v74 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
              {
                v75 = &v72->_1.interfaceOffsets->offset;
                while ( *((IClassBoardSquareModel_c **)v75 - 1) != IClassBoardSquareModel_TypeInfo )
                {
                  --v74;
                  v75 += 4;
                  if ( !v74 )
                    goto LABEL_96;
                }
                v76 = (__int64)&v72[1]._2 + 16 * *v75;
              }
              else
              {
LABEL_96:
                v76 = sub_1C13570(this, IClassBoardSquareModel_TypeInfo, 17LL);
              }
              (*(void (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v76)(
                v73,
                &v128,
                *(_QWORD *)(v76 + 8));
            }
            this = v128;
            if ( v128 )
            {
              m_CancellationTokenSource = (int32_t)v128->fields.m_CancellationTokenSource;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v126,
                (System_Collections_Generic_List_object__o *)v128,
                (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
              v78 = 0;
              v127 = v126;
              while ( 1 )
              {
                v79 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v127,
                        (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
                if ( !v79 )
                  break;
                current = v127.fields._current;
                if ( !v127.fields._current )
                  sub_1BC3264(v79, v80);
                v82 = v127.fields._current->klass;
                v83 = *(unsigned __int16 *)(&v127.fields._current->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&v127.fields._current->klass->_2.bitflags2 + 3) )
                {
                  v84 = &v82->_1.interfaceOffsets->offset;
                  while ( *((IClassBoardSquareModel_c **)v84 - 1) != IClassBoardSquareModel_TypeInfo )
                  {
                    --v83;
                    v84 += 4;
                    if ( !v83 )
                      goto LABEL_107;
                  }
                  v85 = (__int64)&v82->vtable[*v84 + 5].method;
                }
                else
                {
LABEL_107:
                  v85 = sub_1C13570(v127.fields._current, IClassBoardSquareModel_TypeInfo, 5LL);
                }
                if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v85)(current, *(_QWORD *)(v85 + 8)) & 1) != 0 )
                {
                  --m_CancellationTokenSource;
                }
                else
                {
                  v86 = current->klass;
                  v87 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
                  {
                    v88 = (IClassBoardSquareModel_c **)&v86->_1.interfaceOffsets->offset;
                    while ( *(v88 - 1) != IClassBoardSquareModel_TypeInfo )
                    {
                      --v87;
                      v88 += 2;
                      if ( !v87 )
                        goto LABEL_114;
                    }
                    v89 = (__int64)&v86->vtable[*(_DWORD *)v88 + 15].method;
                  }
                  else
                  {
LABEL_114:
                    v89 = sub_1C13570(current, IClassBoardSquareModel_TypeInfo, 15LL);
                  }
                  v78 += (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v89)(
                           current,
                           0LL,
                           *(_QWORD *)(v89 + 8)) & 1;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v127,
                (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
              if ( !v78 )
                return 0;
              if ( v78 < m_CancellationTokenSource )
                return 1;
              return 2;
            }
          }
        }
      }
    }
    goto LABEL_180;
  }
  v37 = v2->fields._LineModel_k__BackingField;
  if ( !v37 )
    goto LABEL_180;
  v38 = v37->klass;
  v39 = *(unsigned __int16 *)(&v37->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v37->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v40 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_44;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_44:
    v41 = sub_1C13570(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v41)(
                               v37,
                               *(_QWORD *)(v41 + 8));
  if ( !this )
    goto LABEL_180;
  v91 = this->klass;
  v92 = this;
  v93 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v94 = &v91->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v94 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v93;
      v94 += 4;
      if ( !v93 )
        goto LABEL_129;
    }
    v95 = (__int64)(&v91[1]._1.implementedInterfaces + 2 * *v94);
  }
  else
  {
LABEL_129:
    v95 = sub_1C13570(this, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v95)(
                               v92,
                               0LL,
                               *(_QWORD *)(v95 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v96 = v2->fields._LineModel_k__BackingField;
    if ( !v96 )
      goto LABEL_180;
    v97 = v96->klass;
    v98 = *(unsigned __int16 *)(&v96->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v96->klass->_2.bitflags2 + 3) )
    {
      v99 = (IClassBoardLineModel_c **)&v97->_1.interfaceOffsets->offset;
      while ( *(v99 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v98;
        v99 += 2;
        if ( !v98 )
          goto LABEL_137;
      }
      v100 = (__int64)&v97->vtable[*(_DWORD *)v99 + 1].method;
    }
    else
    {
LABEL_137:
      v100 = sub_1C13570(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v100)(
                                 v96,
                                 *(_QWORD *)(v100 + 8));
    if ( !this )
      goto LABEL_180;
    v101 = this->klass;
    v102 = this;
    v103 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      v104 = &v101->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v104 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v103;
        v104 += 4;
        if ( !v103 )
          goto LABEL_144;
      }
      v105 = (__int64)(&v101[1]._1.implementedInterfaces + 2 * *v104);
    }
    else
    {
LABEL_144:
      v105 = sub_1C13570(this, IClassBoardSquareModel_TypeInfo, 15LL);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v105)(
                                 v102,
                                 0LL,
                                 *(_QWORD *)(v105 + 8));
    if ( ((unsigned __int8)this & 1) != 0 )
      return 2;
  }
  v106 = v2->fields._LineModel_k__BackingField;
  if ( !v106 )
    goto LABEL_180;
  v107 = v106->klass;
  v108 = *(unsigned __int16 *)(&v106->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v106->klass->_2.bitflags2 + 3) )
  {
    v109 = &v107->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v109 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v108;
      v109 += 4;
      if ( !v108 )
        goto LABEL_152;
    }
    v110 = (__int64)&v107->vtable[*v109].method;
  }
  else
  {
LABEL_152:
    v110 = sub_1C13570(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v110)(
                               v106,
                               *(_QWORD *)(v110 + 8));
  if ( !this )
    goto LABEL_180;
  v111 = this->klass;
  v112 = this;
  v113 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v114 = &v111->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v114 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v113;
      v114 += 4;
      if ( !v113 )
        goto LABEL_160;
    }
    v115 = (__int64)(&v111[1]._1.implementedInterfaces + 2 * *v114);
  }
  else
  {
LABEL_160:
    v115 = sub_1C13570(this, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v115)(
                               v112,
                               0LL,
                               *(_QWORD *)(v115 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  v116 = v2->fields._LineModel_k__BackingField;
  if ( !v116 )
    goto LABEL_180;
  v117 = v116->klass;
  v118 = *(unsigned __int16 *)(&v116->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v116->klass->_2.bitflags2 + 3) )
  {
    v119 = (IClassBoardLineModel_c **)&v117->_1.interfaceOffsets->offset;
    while ( *(v119 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v118;
      v119 += 2;
      if ( !v118 )
        goto LABEL_168;
    }
    v120 = (__int64)&v117->vtable[*(_DWORD *)v119 + 1].method;
  }
  else
  {
LABEL_168:
    v120 = sub_1C13570(v116, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v120)(
                               v116,
                               *(_QWORD *)(v120 + 8));
  if ( !this )
LABEL_180:
    sub_1BC3264(this, method);
  v121 = this->klass;
  v122 = this;
  v123 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v124 = &v121->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v124 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v123;
      v124 += 4;
      if ( !v123 )
        goto LABEL_176;
    }
    v125 = (__int64)(&v121[1]._1.implementedInterfaces + 2 * *v124);
  }
  else
  {
LABEL_176:
    v125 = sub_1C13570(this, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  return (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v125)(v122, 0LL, *(_QWORD *)(v125 + 8)) & 1;
}


float __fastcall ClassBoardLine__GetSquareTypeOffset(
        ClassBoardLine_o *this,
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  ClassBoardLine_o *v4; // x19
  __int64 v5; // x1
  IClassBoardSquareModel_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  float *p_blankOffsetLength; // x8

  v4 = this;
  if ( (byte_4B058BA & 1) == 0 )
  {
    sub_1BC3008(&IClassBoardLockModel_TypeInfo, squareModel);
    this = (ClassBoardLine_o *)sub_1BC3008(&IClassBoardSquareModel_TypeInfo, v5);
    byte_4B058BA = 1;
  }
  if ( !squareModel )
    sub_1BC3264(this, squareModel);
  klass = squareModel->klass;
  v7 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C13570(squareModel, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    p_blankOffsetLength = &v4->fields.blankOffsetLength;
  }
  else if ( sub_1BC3144(squareModel, IClassBoardLockModel_TypeInfo) )
  {
    p_blankOffsetLength = &v4->fields.lockOffsetLength;
  }
  else
  {
    p_blankOffsetLength = &v4->fields.squareOffsetLength;
  }
  return *p_blankOffsetLength;
}


void __fastcall ClassBoardLine__PlayForceEndSimpleAnimation(
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

  if ( (byte_4B058BB & 1) == 0 )
  {
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, name);
    byte_4B058BB = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (simpleAnimation = (SimpleAnimation_o *)SimpleAnimation__Play_65293968(simpleAnimation, name, 0LL),
        (v8 = this->fields.simpleAnimation) == 0LL)
    || (simpleAnimation = (SimpleAnimation_o *)v8[1].monitor) == 0LL
    || (v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)SimpleAnimation__get_Item(v8, v9, 0LL)) == 0LL) )
  {
    sub_1BC3264(simpleAnimation, name);
  }
  klass = simpleAnimation->klass;
  v11 = simpleAnimation;
  v12 = *(unsigned __int16 *)(&simpleAnimation->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&simpleAnimation->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_11;
    }
    v14 = (__int64)(&klass->vtable._6_Awake.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_11:
    v14 = sub_1C13570(simpleAnimation, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 1.0);
  v16 = ClassBoardLine__WaitAnimationFinished(this, name, endCallback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardLine__PlayGrandToClassTransition(
        ClassBoardLine_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *animNameGrandReturnTransition; // x21
  System_Action_o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4B058B6 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isQuick);
    sub_1BC3008(&Method_ClassBoardLine__PlayGrandToClassTransition_b__30_0__, v5);
    byte_4B058B6 = 1;
  }
  animNameGrandReturnTransition = this->fields.animNameGrandReturnTransition;
  v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ClassBoardLine__PlayGrandToClassTransition_b__30_0__, 0LL);
  ClassBoardLine__PlaySimpleAnimation(this, animNameGrandReturnTransition, isQuick, v7, v8);
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
  const MethodInfo *v15; // x4

  if ( (byte_4B058B8 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_ClassBoardEffectPlayer_GetData_bool___, v3);
    sub_1BC3008(&Method_ClassBoardLine__PlayReleaseEffect_b__35_0__, v4);
    sub_1BC3008(&Method_ClassBoardLine__PlayReleaseEffect_b__35_1__, v5);
    sub_1BC3008(&Method_ClassBoardLine__PlayReleaseEffect_b__35_2__, v6);
    sub_1BC3008(&Method_ClassBoardLine__PlayReleaseEffect_b__35_3__, v7);
    byte_4B058B8 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      if ( ClassBoardEffectPlayer__GetData_bool_(
             releaseEffectPlayer,
             (const MethodInfo_2FF5638 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOnUnlock;
        v12 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        v13 = &Method_ClassBoardLine__PlayReleaseEffect_b__35_2__;
      }
      else
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOn;
        v12 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        v13 = &Method_ClassBoardLine__PlayReleaseEffect_b__35_3__;
      }
      goto LABEL_15;
    }
LABEL_16:
    sub_1BC3264(releaseEffectPlayer, v9);
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
         (const MethodInfo_2FF5638 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnUnlock;
    v12 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    v13 = &Method_ClassBoardLine__PlayReleaseEffect_b__35_0__;
  }
  else
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurn;
    v12 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    v13 = &Method_ClassBoardLine__PlayReleaseEffect_b__35_1__;
  }
LABEL_15:
  v14 = v12;
  System_Action___ctor(v12, (Il2CppObject *)this, *v13, 0LL);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnRoadOnUnlock, 0, v14, v15);
}


void __fastcall ClassBoardLine__PlaySimpleAnimation(
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
      || (SimpleAnimation__Rewind(simpleAnimation, 0LL), (simpleAnimation = this->fields.simpleAnimation) == 0LL) )
    {
      sub_1BC3264(simpleAnimation, name);
    }
    SimpleAnimation__Play_65293968(simpleAnimation, name, 0LL);
    v10 = ClassBoardLine__WaitAnimationFinished(this, name, endCallback, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardLine__PlayTransition(ClassBoardLine_o *this, bool isQuick, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t ConnectType; // w0
  System_String_o *animNameBrightTurnTransitionRoadOn; // x21
  System_Action_o *v10; // x0
  __int64 *v11; // x8
  System_Action_o *v12; // x22
  const MethodInfo *v13; // x4

  if ( (byte_4B058B5 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isQuick);
    sub_1BC3008(&Method_ClassBoardLine__PlayTransition_b__29_0__, v5);
    sub_1BC3008(&Method_ClassBoardLine__PlayTransition_b__29_1__, v6);
    sub_1BC3008(&Method_ClassBoardLine__PlayTransition_b__29_2__, v7);
    byte_4B058B5 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, (const MethodInfo *)isQuick);
  if ( ConnectType == 2 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransitionRoadOn;
    v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    v11 = &Method_ClassBoardLine__PlayTransition_b__29_1__;
  }
  else if ( ConnectType == 1 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransition;
    v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    v11 = &Method_ClassBoardLine__PlayTransition_b__29_0__;
  }
  else
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBlackOutTransition;
    v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    v11 = &Method_ClassBoardLine__PlayTransition_b__29_2__;
  }
  v12 = v10;
  System_Action___ctor(v10, (Il2CppObject *)this, *v11, 0LL);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnTransitionRoadOn, isQuick, v12, v13);
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *name; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x21
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  IClassBoardLineModel_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_c *v24; // x8
  UnityEngine_Object_o *v25; // x23
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  IClassBoardLineModel_c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  UnityEngine_Object_c *v36; // x8
  UnityEngine_Object_o *v37; // x23
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  IClassBoardLineModel_c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  UnityEngine_Object_c *v48; // x8
  UnityEngine_Object_o *v49; // x22
  __int64 v50; // x9
  IClassBoardSquareModel_c **v51; // x10
  __int64 v52; // x0
  const MethodInfo *v53; // x3
  System_String_o *v54; // x0
  const MethodInfo *v55; // x1
  System_String_o *v56; // x20
  __int64 v57; // x21
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  System_Action_o *v63; // x21
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct UnityEngine_GameObject_array *effectObjects; // x22
  int max_length; // w8
  int v68; // w9
  Il2CppClass **v69; // x8
  UnityEngine_GameObject_o *v70; // x21
  UnityEngine_Transform_o *transform; // x0
  float lineLength; // s8
  UnityEngine_Transform_o *v73; // x20
  float y; // s9
  int v75; // s2
  float v76; // s0
  float v77; // s1
  int v78; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B058B4 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, setLineModel);
    sub_1BC3008(&ClassBoardEffectPlayer_TypeInfo, v6);
    sub_1BC3008(&Method_ClassBoardLine_PlayReleaseEffect__, v7);
    sub_1BC3008(&IClassBoardLineModel_TypeInfo, v8);
    sub_1BC3008(&IClassBoardSquareModel_TypeInfo, v9);
    sub_1BC3008(&string___TypeInfo, v10);
    sub_1BC3008(&StringLiteral_15961/*"_"*/, v11);
    byte_4B058B4 = 1;
  }
  v78 = 0;
  this->fields._LineModel_k__BackingField = setLineModel;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._LineModel_k__BackingField,
    (int32_t)setLineModel,
    (int32_t)method,
    v3);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  name = (UnityEngine_Object_o *)sub_1BC30B0(string___TypeInfo, 7LL);
  if ( !gameObject )
    goto LABEL_64;
  v15 = name;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL);
  if ( !v15 )
    goto LABEL_64;
  if ( !LODWORD(v15[1].klass) )
    goto LABEL_65;
  v15[1].monitor = name;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v15[1].monitor, (int32_t)name, v16, v17);
  if ( LODWORD(v15[1].klass) <= 1 )
    goto LABEL_65;
  v19 = StringLiteral_15961/*"_"*/;
  *(_QWORD *)&v15[1].fields.m_CachedPtr = StringLiteral_15961/*"_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v15[1].fields, v19, v16, v18);
  if ( !setLineModel )
    goto LABEL_64;
  klass = setLineModel->klass;
  v21 = *(unsigned __int16 *)(&setLineModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&setLineModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1C13570(setLineModel, IClassBoardLineModel_TypeInfo, 0LL);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))p_method)(
                                   setLineModel,
                                   *(_QWORD *)(p_method + 8));
  if ( !name )
    goto LABEL_64;
  v24 = name->klass;
  v25 = name;
  v26 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
  {
    v27 = &v24->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v27 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_19;
    }
    v28 = (__int64)(&v24->vtable._0_Equals.method + 2 * *v27);
  }
  else
  {
LABEL_19:
    v28 = sub_1C13570(name, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v78 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v78, 0LL);
  if ( LODWORD(v15[1].klass) <= 2
    || (v15[2].klass = (UnityEngine_Object_c *)name,
        sub_1BC2FAC((CGThumbnailListItem_o *)&v15[2], (int32_t)name, v16, v29),
        LODWORD(v15[1].klass) <= 3) )
  {
LABEL_65:
    sub_1BC326C(name, v14, v16);
  }
  v31 = StringLiteral_15961/*"_"*/;
  v15[2].monitor = (void *)StringLiteral_15961/*"_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v15[2].monitor, v31, v16, v30);
  v32 = setLineModel->klass;
  v33 = *(unsigned __int16 *)(&setLineModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&setLineModel->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v34 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_27;
    }
    v35 = (__int64)&v32->vtable[*v34 + 1].method;
  }
  else
  {
LABEL_27:
    v35 = sub_1C13570(setLineModel, IClassBoardLineModel_TypeInfo, 1LL);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v35)(
                                   setLineModel,
                                   *(_QWORD *)(v35 + 8));
  if ( !name )
LABEL_64:
    sub_1BC3264(name, v14);
  v36 = name->klass;
  v37 = name;
  v38 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
  {
    v39 = &v36->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v39 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_34;
    }
    v40 = (__int64)(&v36->vtable._0_Equals.method + 2 * *v39);
  }
  else
  {
LABEL_34:
    v40 = sub_1C13570(name, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v78 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v78, 0LL);
  if ( LODWORD(v15[1].klass) <= 4 )
    goto LABEL_65;
  *(_QWORD *)&v15[2].fields.m_CachedPtr = name;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v15[2].fields, (int32_t)name, v16, v41);
  if ( LODWORD(v15[1].klass) <= 5 )
    goto LABEL_65;
  v43 = StringLiteral_15961/*"_"*/;
  v15[3].klass = (UnityEngine_Object_c *)StringLiteral_15961/*"_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v15[3], v43, v16, v42);
  v44 = setLineModel->klass;
  v45 = *(unsigned __int16 *)(&setLineModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&setLineModel->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v46 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_42;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_42:
    v47 = sub_1C13570(setLineModel, IClassBoardLineModel_TypeInfo, 0LL);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v47)(
                                   setLineModel,
                                   *(_QWORD *)(v47 + 8));
  if ( !name )
    goto LABEL_64;
  v48 = name->klass;
  v49 = name;
  v50 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
  {
    v51 = (IClassBoardSquareModel_c **)&v48->_1.interfaceOffsets->offset;
    while ( *(v51 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v50;
      v51 += 2;
      if ( !v50 )
        goto LABEL_49;
    }
    v52 = (__int64)(&v48->vtable._1_Finalize.method + 2 * *(_DWORD *)v51);
  }
  else
  {
LABEL_49:
    v52 = sub_1C13570(name, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v78 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v52)(v49, *(_QWORD *)(v52 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v78, 0LL);
  if ( LODWORD(v15[1].klass) <= 6 )
    goto LABEL_65;
  v15[3].monitor = name;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v15[3].monitor, (int32_t)name, v16, v53);
  v54 = System_String__Concat_62389164((System_String_array *)v15, 0LL);
  UnityEngine_Object__set_name(gameObject, v54, 0LL);
  ClassBoardLine__UpdateLine(this, v55);
  name = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !name )
    goto LABEL_64;
  v56 = UnityEngine_Object__get_name(name, 0LL);
  v57 = sub_1BC3254(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v57, 0LL);
  *(_QWORD *)(v57 + 16) = v56;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v57 + 16), (int32_t)v56, v58, v59);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v57;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.releaseEffectPlayer, v57, v60, v61);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v63 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v63, (Il2CppObject *)this, Method_ClassBoardLine_PlayReleaseEffect__, 0LL);
  if ( !releaseEffectPlayer )
    goto LABEL_64;
  releaseEffectPlayer->fields.playCallback = v63;
  sub_1BC2FAC((CGThumbnailListItem_o *)&releaseEffectPlayer->fields.playCallback, (int32_t)v63, v64, v65);
  effectObjects = this->fields.effectObjects;
  v78 = 0;
  if ( !effectObjects )
    goto LABEL_64;
  max_length = effectObjects->max_length;
  if ( max_length >= 1 )
  {
    v68 = 0;
    while ( v68 < (unsigned int)max_length )
    {
      v69 = &effectObjects->obj.klass + v68;
      v70 = (UnityEngine_GameObject_o *)v69[4];
      if ( !v70 )
        goto LABEL_64;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v69[4], 0LL);
      lineLength = this->fields.lineLength;
      v73 = transform;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v70, 0LL);
      if ( !name )
        goto LABEL_64;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)name, 0LL);
      y = localScale.fields.y;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v70, 0LL);
      if ( !name )
        goto LABEL_64;
      *(UnityEngine_Vector3_o *)(&v75 - 2) = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)name, 0LL);
      if ( !v73 )
        goto LABEL_64;
      v76 = lineLength;
      v77 = y;
      UnityEngine_Transform__set_localScale(v73, *(UnityEngine_Vector3_o *)(&v75 - 2), 0LL);
      v68 = v78 + 1;
      v78 = v68;
      max_length = effectObjects->max_length;
      if ( v68 >= max_length )
        return;
    }
    goto LABEL_65;
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
  __int64 v6; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  ClassBoardLine_c *v9; // x8
  ClassBoardLine_o *v10; // x20
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  unsigned int v14; // s0
  unsigned int v15; // s1
  float v16; // s2
  struct IClassBoardLineModel_o *v17; // x20
  IClassBoardLineModel_c *v18; // x8
  float v19; // s8
  __int64 v20; // x9
  IClassBoardLineModel_c **v21; // x10
  __int64 v22; // x0
  ClassBoardLine_c *v23; // x8
  ClassBoardLine_o *v24; // x20
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  float32x2_t v28; // d0
  unsigned __int32 v29; // s1
  float v30; // s2
  float v31; // s9
  float32x2_t v32; // d1
  float32x2_t v33; // d12
  float v34; // s11
  int32x2_t v35; // d0
  float32x2_t v36; // d13
  float z; // s14
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct IClassBoardLineModel_o *v39; // x20
  IClassBoardLineModel_c *v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  IClassBoardSquareModel_o *v44; // x0
  const MethodInfo *v45; // x2
  float SquareTypeOffset; // s0
  struct IClassBoardLineModel_o *v47; // x20
  IClassBoardLineModel_c *v48; // x8
  float v49; // s0
  __int64 v50; // x9
  float32x2_t v51; // d11
  float v52; // s12
  IClassBoardLineModel_c **v53; // x10
  __int64 v54; // x0
  float v55; // s12
  float32x2_t v56; // d11
  IClassBoardSquareModel_o *v57; // x0
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x1
  float v60; // s0
  float32x2_t v61; // d8
  float v62; // s9
  float32x2_t v63; // d1
  float v64; // s9
  float v65; // s8
  unsigned __int64 v66; // d0
  int v67; // w20
  UnityEngine_Component_o **p_connectedOnSprite; // x25
  UnityEngine_Component_o *v69; // x20
  __int64 v70; // x1
  unsigned int v71; // w9
  int32_t v72; // w1
  ClassBoardLine_o *v73; // x20
  UnityEngine_Transform_o *transform; // x19
  float v75; // s3
  float32x2_t v76; // d0
  float v77; // s1
  struct UnityEngine_Vector3_StaticFields *v78; // x8
  float v79; // s2 OVERLAPPED
  unsigned __int64 v80; // d0 OVERLAPPED
  int v81; // s1
  unsigned __int32 v82; // [xsp+0h] [xbp-C0h]
  unsigned __int32 v83; // [xsp+0h] [xbp-C0h]
  unsigned int v84; // [xsp+10h] [xbp-B0h]
  unsigned __int32 xb; // [xsp+20h] [xbp-A0h]
  unsigned __int32 xc; // [xsp+20h] [xbp-A0h]
  float32x2_t x; // [xsp+20h] [xbp-A0h]
  float32x2_t xa; // [xsp+20h] [xbp-A0h]
  unsigned int v89; // [xsp+30h] [xbp-90h]
  float32x2_t v90; // [xsp+30h] [xbp-90h]
  int32x2_t v91; // [xsp+30h] [xbp-90h]
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B058B7 & 1) == 0 )
  {
    sub_1BC3008(&IClassBoardLineModel_TypeInfo, method);
    this = (ClassBoardLine_o *)sub_1BC3008(&IClassBoardSquareModel_TypeInfo, v3);
    byte_4B058B7 = 1;
  }
  LineModel_k__BackingField = v2->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_94;
  klass = LineModel_k__BackingField->klass;
  v6 = *(unsigned __int16 *)(&LineModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&LineModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C13570(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_94;
  v9 = this->klass;
  v10 = this;
  v11 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v12 = &v9->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v12 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v11;
      v12 += 4;
      if ( !v11 )
        goto LABEL_15;
    }
    v13 = (__int64)(&v9->vtable._3_ToString.method + 2 * *v12);
  }
  else
  {
LABEL_15:
    v13 = sub_1C13570(this, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
  v17 = v2->fields._LineModel_k__BackingField;
  if ( !v17 )
    goto LABEL_94;
  v18 = v17->klass;
  v19 = v16;
  v89 = v14;
  v20 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
  v84 = v15;
  if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
  {
    v21 = (IClassBoardLineModel_c **)&v18->_1.interfaceOffsets->offset;
    while ( *(v21 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v20;
      v21 += 2;
      if ( !v20 )
        goto LABEL_22;
    }
    v22 = (__int64)&v18->vtable[*(_DWORD *)v21 + 1].method;
  }
  else
  {
LABEL_22:
    v22 = sub_1C13570(v17, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v22)(
                               v17,
                               *(_QWORD *)(v22 + 8));
  if ( !this )
    goto LABEL_94;
  v23 = this->klass;
  v24 = this;
  v25 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v26 = &v23->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v26 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_29;
    }
    v27 = (__int64)(&v23->vtable._3_ToString.method + 2 * *v26);
  }
  else
  {
LABEL_29:
    v27 = sub_1C13570(this, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  (*(void (__fastcall **)(ClassBoardLine_o *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  v31 = v30;
  if ( !byte_4AFBDAF )
  {
    xb = v28.n64_u32[0];
    v82 = v29;
    sub_1BC3008(&System_Math_TypeInfo, method);
    v29 = v82;
    v28.n64_u32[0] = xb;
    byte_4AFBDAF = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    xc = v28.n64_u32[0];
    v83 = v29;
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v29 = v83;
    v28.n64_u32[0] = xc;
  }
  v28.n64_u32[1] = v29;
  v32.n64_u64[0] = __PAIR64__(v84, v89);
  x.n64_u64[0] = v28.n64_u64[0];
  v90.n64_u64[0] = __PAIR64__(v84, v89);
  if ( !byte_4AFBDB4 )
  {
    sub_1BC3008(&System_Math_TypeInfo, method);
    v28.n64_u64[0] = x.n64_u64[0];
    v32.n64_u64[0] = v90.n64_u64[0];
    byte_4AFBDB4 = 1;
  }
  this = (ClassBoardLine_o *)System_Math_TypeInfo;
  v33.n64_u64[0] = vsub_f32(v28, v32).n64_u64[0];
  v34 = v31 - v19;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v35.n64_u64[0] = vmul_f32(v33, v33).n64_u64[0];
  v35.n64_f32[0] = sqrtf((float)(v34 * v34) + vaddv_f32(v35));
  if ( v35.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4AFBDB1 )
    {
      this = (ClassBoardLine_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
      byte_4AFBDB1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v36.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v36.n64_u64[0] = vdiv_f32(v33, vdup_lane_s32(v35, 0)).n64_u64[0];
    z = v34 / v35.n64_f32[0];
  }
  v39 = v2->fields._LineModel_k__BackingField;
  if ( !v39 )
    goto LABEL_94;
  v40 = v39->klass;
  v41 = *(unsigned __int16 *)(&v39->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v39->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v42 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_49;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_49:
    v43 = sub_1C13570(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  v44 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v43)(
                                      v39,
                                      *(_QWORD *)(v43 + 8));
  SquareTypeOffset = ClassBoardLine__GetSquareTypeOffset(v2, v44, v45);
  v47 = v2->fields._LineModel_k__BackingField;
  if ( !v47 )
    goto LABEL_94;
  v48 = v47->klass;
  v49 = SquareTypeOffset * 0.5;
  v50 = *(unsigned __int16 *)(&v47->klass->_2.bitflags2 + 3);
  v51.n64_u64[0] = vmul_n_f32(v36, v49).n64_u64[0];
  v52 = z * v49;
  if ( *(_WORD *)(&v47->klass->_2.bitflags2 + 3) )
  {
    v53 = (IClassBoardLineModel_c **)&v48->_1.interfaceOffsets->offset;
    while ( *(v53 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v50;
      v53 += 2;
      if ( !v50 )
        goto LABEL_56;
    }
    v54 = (__int64)&v48->vtable[*(_DWORD *)v53 + 1].method;
  }
  else
  {
LABEL_56:
    v54 = sub_1C13570(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  v55 = v19 - v52;
  v56.n64_u64[0] = vsub_f32(v90, v51).n64_u64[0];
  v57 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v54)(
                                      v47,
                                      *(_QWORD *)(v54 + 8));
  v60 = ClassBoardLine__GetSquareTypeOffset(v2, v57, v58) * 0.5;
  v61.n64_u64[0] = vadd_f32(x, vmul_n_f32(v36, v60)).n64_u64[0];
  v62 = v31 + (float)(z * v60);
  if ( !byte_4AFBDB3 )
  {
    sub_1BC3008(&System_Math_TypeInfo, v59);
    byte_4AFBDB3 = 1;
  }
  v63.n64_u64[0] = vsub_f32(v61, v56).n64_u64[0];
  v64 = v62 - v55;
  xa.n64_u64[0] = v63.n64_u64[0];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v63.n64_u64[0] = xa.n64_u64[0];
  }
  v65 = v63.n64_f32[1];
  v66 = vmul_f32(v63, v63).n64_u64[0];
  *(float *)&v66 = sqrtf((float)(v64 * v64) + (float)(*(float *)&v66 + vmuls_lane_f32(v63.n64_f32[1], v63, 1)));
  v91.n64_u64[0] = v66;
  LODWORD(v2->fields.lineLength) = v66;
  this = (ClassBoardLine_o *)ClassBoardLine__GetConnectType(v2, v59);
  if ( !v2->fields.notConnectedSprite )
    goto LABEL_94;
  v67 = (int)this;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)v2->fields.notConnectedSprite,
                               0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (ClassBoardLine_o *)v2->fields.connectedSprite) == 0LL)
    || (this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        p_connectedOnSprite = (UnityEngine_Component_o **)&v2->fields.connectedOnSprite,
        (this = (ClassBoardLine_o *)v2->fields.connectedOnSprite) == 0LL)
    || (this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_94:
    sub_1BC3264(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !v67 )
  {
LABEL_71:
    p_connectedOnSprite = (UnityEngine_Component_o **)&v2->fields.notConnectedSprite;
    goto LABEL_73;
  }
  if ( v67 != 1 )
  {
    if ( v67 == 2 )
      goto LABEL_73;
    goto LABEL_71;
  }
  p_connectedOnSprite = (UnityEngine_Component_o **)&v2->fields.connectedSprite;
LABEL_73:
  v69 = *p_connectedOnSprite;
  if ( !*p_connectedOnSprite )
    goto LABEL_94;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(*p_connectedOnSprite, 0LL);
  if ( !this )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !byte_4AFC46F )
  {
    sub_1BC3008(&System_Math_TypeInfo, v70);
    byte_4AFC46F = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v71 = vcvtps_s32_f32(v91.n64_f32[0]);
  v72 = ceilf(v91.n64_f32[0]) == INFINITY ? 0x80000000 : v71;
  UIWidget__set_width((UIWidget_o *)v69, v72, 0LL);
  this = (ClassBoardLine_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_94;
  v73 = this;
  v92.fields.z = atan2f(v65, xa.n64_f32[0]) * 57.296;
  v92.fields.x = 0.0;
  v92.fields.y = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)v73, v92, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !byte_4AFBDB4 )
  {
    sub_1BC3008(&System_Math_TypeInfo, method);
    byte_4AFBDB4 = 1;
  }
  this = (ClassBoardLine_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v75 = v91.n64_f32[0];
  if ( v91.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4AFBDB1 )
    {
      this = (ClassBoardLine_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
      v75 = v91.n64_f32[0];
      byte_4AFBDB1 = 1;
    }
    v78 = UnityEngine_Vector3_TypeInfo->static_fields;
    v76.n64_u64[0] = *(unsigned __int64 *)&v78->zeroVector.fields.x;
    v77 = v78->zeroVector.fields.z;
  }
  else
  {
    v76.n64_u64[0] = vdiv_f32(xa, vdup_lane_s32(v91, 0)).n64_u64[0];
    v77 = v64 / v91.n64_f32[0];
  }
  if ( !transform )
    goto LABEL_94;
  v79 = v55 + (float)((float)(v75 * 0.5) * v77);
  v80 = vadd_f32(v56, vmul_n_f32(v76, v75 * 0.5)).n64_u64[0];
  v81 = HIDWORD(v80);
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v79 - 2), 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardLine__WaitAnimationFinished(
        ClassBoardLine_o *this,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B058BC & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardLine__WaitAnimationFinished_d__40_TypeInfo, name);
    byte_4B058BC = 1;
  }
  v7 = sub_1BC3254(ClassBoardLine__WaitAnimationFinished_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = name;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)name, v10, v11);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)endCallback, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ClassBoardLine___PlayGrandToClassTransition_b__30_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1BC3264(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__35_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_1BC3264(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__35_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_1BC3264(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__35_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_1BC3264(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardLine___PlayReleaseEffect_b__35_3(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0LL),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0LL) )
  {
    sub_1BC3264(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardLine___PlayTransition_b__29_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1BC3264(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__29_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1BC3264(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__29_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1BC3264(0LL, method);
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
  const MethodInfo *v3; // x3

  this->fields._LineModel_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._LineModel_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ClassBoardLine__WaitAnimationFinished_d__40___ctor(
        ClassBoardLine__WaitAnimationFinished_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardLine__WaitAnimationFinished_d__40__MoveNext(
        ClassBoardLine__WaitAnimationFinished_d__40_o *this,
        const MethodInfo *method)
{
  ClassBoardLine__WaitAnimationFinished_d__40_o *v2; // x19
  int32_t _1__state; // w8
  struct ClassBoardLine_o *_4__this; // x8
  SimpleAnimation_State_o *State; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct SimpleAnimation_State_o *state_5__2; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v10; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  struct SimpleAnimation_State_o *v13; // x20
  SimpleAnimation_State_c *v14; // x8
  __int64 v15; // x9
  SimpleAnimation_State_c **v16; // x10
  __int64 v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4B058BE & 1) == 0 )
  {
    this = (ClassBoardLine__WaitAnimationFinished_d__40_o *)sub_1BC3008(&SimpleAnimation_State_TypeInfo, method);
    byte_4B058BE = 1;
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
    State = SimpleAnimation__GetState((SimpleAnimation_o *)this, v2->fields.name, 0LL);
    v2->fields._state_5__2 = State;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields._state_5__2, (int32_t)State, v6, v7);
LABEL_9:
    state_5__2 = v2->fields._state_5__2;
    if ( !state_5__2 )
      goto LABEL_26;
    klass = state_5__2->klass;
    v10 = *(unsigned __int16 *)(&state_5__2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&state_5__2->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v10;
        p_offset += 2;
        if ( !v10 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C13570(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 13LL);
    }
    if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
           state_5__2,
           *(_QWORD *)(p_method + 8)) <= 0.0 )
    {
LABEL_26:
      ActionExtensions__Call(v2->fields.endCallback, 0LL);
      return 0;
    }
    v13 = v2->fields._state_5__2;
    if ( v13 )
    {
      v14 = v13->klass;
      v15 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
      {
        v16 = (SimpleAnimation_State_c **)&v14->_1.interfaceOffsets->offset;
        while ( *(v16 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v15;
          v16 += 2;
          if ( !v15 )
            goto LABEL_22;
        }
        v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 5].method;
      }
      else
      {
LABEL_22:
        v17 = sub_1C13570(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 5LL);
      }
      if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) < 1.0 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BC2FAC(p__2__current, 0, v18, v19);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_26;
    }
LABEL_28:
    sub_1BC3264(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall ClassBoardLine__WaitAnimationFinished_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardLine__WaitAnimationFinished_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardLine__WaitAnimationFinished_d__40__System_Collections_IEnumerator_Reset(
        ClassBoardLine__WaitAnimationFinished_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ClassBoardLine__WaitAnimationFinished_d__40_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall ClassBoardLine__WaitAnimationFinished_d__40__System_Collections_IEnumerator_get_Current(
        ClassBoardLine__WaitAnimationFinished_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardLine__WaitAnimationFinished_d__40__System_IDisposable_Dispose(
        ClassBoardLine__WaitAnimationFinished_d__40_o *this,
        const MethodInfo *method)
{
  ;
}