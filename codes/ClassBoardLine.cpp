void __fastcall ClassBoardLine___ctor(ClassBoardLine_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w1
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_49FF7BC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3322/*"BrightTurnTransition"*/, method);
    sub_1B640C8(&StringLiteral_3319/*"BrightTurn"*/, v5);
    sub_1B640C8(&StringLiteral_3323/*"BrightTurnTransitionRoadOn"*/, v6);
    sub_1B640C8(&StringLiteral_3324/*"BrightTurnUnLock"*/, v7);
    sub_1B640C8(&StringLiteral_3320/*"BrightTurnRoadOn"*/, v8);
    sub_1B640C8(&StringLiteral_3321/*"BrightTurnRoadOnUnLock"*/, v9);
    sub_1B640C8(&StringLiteral_3273/*"BlackOutTransition"*/, v10);
    byte_49FF7BC = 1;
  }
  v11 = StringLiteral_3319/*"BrightTurn"*/;
  this->fields.animNameBrightTurn = (struct System_String_o *)StringLiteral_3319/*"BrightTurn"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animNameBrightTurn, v11, v2, v3);
  v12 = StringLiteral_3320/*"BrightTurnRoadOn"*/;
  this->fields.animNameBrightTurnRoadOn = (struct System_String_o *)StringLiteral_3320/*"BrightTurnRoadOn"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animNameBrightTurnRoadOn, v12, v13, v14);
  v15 = StringLiteral_3324/*"BrightTurnUnLock"*/;
  this->fields.animNameBrightTurnUnlock = (struct System_String_o *)StringLiteral_3324/*"BrightTurnUnLock"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animNameBrightTurnUnlock, v15, v16, v17);
  v18 = StringLiteral_3321/*"BrightTurnRoadOnUnLock"*/;
  this->fields.animNameBrightTurnRoadOnUnlock = (struct System_String_o *)StringLiteral_3321/*"BrightTurnRoadOnUnLock"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animNameBrightTurnRoadOnUnlock, v18, v19, v20);
  v21 = StringLiteral_3322/*"BrightTurnTransition"*/;
  this->fields.animNameBrightTurnTransition = (struct System_String_o *)StringLiteral_3322/*"BrightTurnTransition"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animNameBrightTurnTransition, v21, v22, v23);
  v24 = StringLiteral_3323/*"BrightTurnTransitionRoadOn"*/;
  this->fields.animNameBrightTurnTransitionRoadOn = (struct System_String_o *)StringLiteral_3323/*"BrightTurnTransitionRoadOn"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animNameBrightTurnTransitionRoadOn, v24, v25, v26);
  v27 = StringLiteral_3273/*"BlackOutTransition"*/;
  this->fields.animNameBlackOutTransition = (struct System_String_o *)StringLiteral_3273/*"BlackOutTransition"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animNameBlackOutTransition, v27, v28, v29);
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
  __int64 v21; // x1
  __int64 v22; // x2
  struct IClassBoardLineModel_o *v23; // x20
  IClassBoardLineModel_c *v24; // x8
  __int64 v25; // x9
  IClassBoardLineModel_c **v26; // x10
  __int64 v27; // x0
  ClassBoardLine_c *v28; // x8
  ClassBoardLine_o *v29; // x20
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  System_Collections_Generic_List_object__o *v33; // x20
  struct IClassBoardLineModel_o *v34; // x20
  IClassBoardLineModel_c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
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
  int *v52; // x10
  __int64 v53; // x0
  ClassBoardLine_c *v54; // x8
  ClassBoardLine_o *v55; // x20
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  struct IClassBoardLineModel_o *v59; // x20
  IClassBoardLineModel_c *v60; // x8
  __int64 v61; // x9
  IClassBoardLineModel_c **v62; // x10
  __int64 v63; // x0
  ClassBoardLine_c *v64; // x8
  ClassBoardLine_o *v65; // x20
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  struct IClassBoardLineModel_o *v69; // x19
  IClassBoardLineModel_c *v70; // x8
  __int64 v71; // x9
  IClassBoardLineModel_c **v72; // x10
  __int64 v73; // x0
  ClassBoardLine_c *v74; // x8
  ClassBoardLine_o *v75; // x19
  __int64 v76; // x9
  int32_t *v77; // x10
  __int64 v78; // x0
  int32_t m_CancellationTokenSource; // w22
  int32_t v80; // w23
  _BOOL8 v81; // x0
  Il2CppObject *current; // x19
  Il2CppClass *v83; // x8
  __int64 v84; // x9
  int32_t *v85; // x10
  __int64 v86; // x0
  Il2CppClass *v87; // x8
  __int64 v88; // x9
  IClassBoardSquareModel_c **v89; // x10
  __int64 v90; // x0
  ClassBoardLine_c *v92; // x8
  ClassBoardLine_o *v93; // x20
  __int64 v94; // x9
  int32_t *v95; // x10
  __int64 v96; // x0
  struct IClassBoardLineModel_o *v97; // x20
  IClassBoardLineModel_c *v98; // x8
  __int64 v99; // x9
  IClassBoardLineModel_c **v100; // x10
  __int64 v101; // x0
  ClassBoardLine_c *v102; // x8
  ClassBoardLine_o *v103; // x20
  __int64 v104; // x9
  int32_t *v105; // x10
  __int64 v106; // x0
  struct IClassBoardLineModel_o *v107; // x20
  IClassBoardLineModel_c *v108; // x8
  __int64 v109; // x9
  int *v110; // x10
  __int64 v111; // x0
  ClassBoardLine_c *v112; // x8
  ClassBoardLine_o *v113; // x20
  __int64 v114; // x9
  int32_t *v115; // x10
  __int64 v116; // x0
  struct IClassBoardLineModel_o *v117; // x19
  IClassBoardLineModel_c *v118; // x8
  __int64 v119; // x9
  IClassBoardLineModel_c **v120; // x10
  __int64 v121; // x0
  ClassBoardLine_c *v122; // x8
  ClassBoardLine_o *v123; // x19
  __int64 v124; // x9
  int32_t *v125; // x10
  __int64 v126; // x0
  System_Collections_Generic_List_Enumerator_object__o v127; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v128; // [xsp+20h] [xbp-60h] BYREF
  ClassBoardLine_o *v129; // [xsp+48h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_49FF7B9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v4);
    sub_1B640C8(&IClassBoardLineModel_TypeInfo, v5);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v9);
    this = (ClassBoardLine_o *)sub_1B640C8(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v10);
    byte_49FF7B9 = 1;
  }
  v129 = 0LL;
  memset(&v128, 0, sizeof(v128));
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
    p_method = sub_1BB60A8(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
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
    v20 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v20)(v17, *(_QWORD *)(v20 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_33;
  v23 = v2->fields._LineModel_k__BackingField;
  if ( !v23 )
    goto LABEL_180;
  v24 = v23->klass;
  v25 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
  {
    v26 = (IClassBoardLineModel_c **)&v24->_1.interfaceOffsets->offset;
    while ( *(v26 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v25;
      v26 += 2;
      if ( !v25 )
        goto LABEL_23;
    }
    v27 = (__int64)&v24->vtable[*(_DWORD *)v26 + 1].method;
  }
  else
  {
LABEL_23:
    v27 = sub_1BB60A8(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v27)(
                               v23,
                               *(_QWORD *)(v27 + 8));
  if ( !this )
    goto LABEL_180;
  v28 = this->klass;
  v29 = this;
  v30 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v31 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_30;
    }
    v32 = (__int64)(&v28[1]._1.gc_desc + 2 * *v31);
  }
  else
  {
LABEL_30:
    v32 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_33:
    v33 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                         v21,
                                                         v22);
    System_Collections_Generic_List_object____ctor(
      v33,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    v129 = (ClassBoardLine_o *)v33;
    v34 = v2->fields._LineModel_k__BackingField;
    if ( v34 )
    {
      v35 = v34->klass;
      v36 = *(unsigned __int16 *)(&v34->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v34->klass->_2.bitflags2 + 3) )
      {
        v37 = &v35->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v37 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v36;
          v37 += 4;
          if ( !v36 )
            goto LABEL_38;
        }
        v38 = (__int64)&v35->vtable[*v37].method;
      }
      else
      {
LABEL_38:
        v38 = sub_1BB60A8(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
      }
      this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v38)(
                                   v34,
                                   *(_QWORD *)(v38 + 8));
      if ( this )
      {
        v44 = this->klass;
        v45 = this;
        v46 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          v47 = &v44->_1.interfaceOffsets->offset;
          while ( *((IClassBoardSquareModel_c **)v47 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v46;
            v47 += 4;
            if ( !v46 )
              goto LABEL_51;
          }
          v48 = (__int64)(&v44[1]._1.gc_desc + 2 * *v47);
        }
        else
        {
LABEL_51:
          v48 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 5LL);
        }
        this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v48)(
                                     v45,
                                     *(_QWORD *)(v48 + 8));
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v49 = v2->fields._LineModel_k__BackingField;
          if ( !v49 )
            goto LABEL_180;
          v50 = v49->klass;
          v51 = *(unsigned __int16 *)(&v49->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v49->klass->_2.bitflags2 + 3) )
          {
            v52 = &v50->_1.interfaceOffsets->offset;
            while ( *((IClassBoardLineModel_c **)v52 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v51;
              v52 += 4;
              if ( !v51 )
                goto LABEL_59;
            }
            v53 = (__int64)&v50->vtable[*v52].method;
          }
          else
          {
LABEL_59:
            v53 = sub_1BB60A8(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
          }
          this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v53)(
                                       v49,
                                       *(_QWORD *)(v53 + 8));
          if ( !this )
            goto LABEL_180;
          v54 = this->klass;
          v55 = this;
          v56 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
          {
            v57 = &v54->_1.interfaceOffsets->offset;
            while ( *((IClassBoardSquareModel_c **)v57 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v56;
              v57 += 4;
              if ( !v56 )
                goto LABEL_66;
            }
            v58 = (__int64)(&v54[1]._1.implementedInterfaces + 2 * *v57);
          }
          else
          {
LABEL_66:
            v58 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 15LL);
          }
          this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v58)(
                                       v55,
                                       &v129,
                                       *(_QWORD *)(v58 + 8));
        }
        v59 = v2->fields._LineModel_k__BackingField;
        if ( v59 )
        {
          v60 = v59->klass;
          v61 = *(unsigned __int16 *)(&v59->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v59->klass->_2.bitflags2 + 3) )
          {
            v62 = (IClassBoardLineModel_c **)&v60->_1.interfaceOffsets->offset;
            while ( *(v62 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v61;
              v62 += 2;
              if ( !v61 )
                goto LABEL_74;
            }
            v63 = (__int64)&v60->vtable[*(_DWORD *)v62 + 1].method;
          }
          else
          {
LABEL_74:
            v63 = sub_1BB60A8(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
          }
          this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v63)(
                                       v59,
                                       *(_QWORD *)(v63 + 8));
          if ( this )
          {
            v64 = this->klass;
            v65 = this;
            v66 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
            {
              v67 = &v64->_1.interfaceOffsets->offset;
              while ( *((IClassBoardSquareModel_c **)v67 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                --v66;
                v67 += 4;
                if ( !v66 )
                  goto LABEL_81;
              }
              v68 = (__int64)(&v64[1]._1.gc_desc + 2 * *v67);
            }
            else
            {
LABEL_81:
              v68 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 5LL);
            }
            this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v68)(
                                         v65,
                                         *(_QWORD *)(v68 + 8));
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v69 = v2->fields._LineModel_k__BackingField;
              if ( !v69 )
                goto LABEL_180;
              v70 = v69->klass;
              v71 = *(unsigned __int16 *)(&v69->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v69->klass->_2.bitflags2 + 3) )
              {
                v72 = (IClassBoardLineModel_c **)&v70->_1.interfaceOffsets->offset;
                while ( *(v72 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  --v71;
                  v72 += 2;
                  if ( !v71 )
                    goto LABEL_89;
                }
                v73 = (__int64)&v70->vtable[*(_DWORD *)v72 + 1].method;
              }
              else
              {
LABEL_89:
                v73 = sub_1BB60A8(v69, IClassBoardLineModel_TypeInfo, 1LL);
              }
              this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v73)(
                                           v69,
                                           *(_QWORD *)(v73 + 8));
              if ( !this )
                goto LABEL_180;
              v74 = this->klass;
              v75 = this;
              v76 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
              {
                v77 = &v74->_1.interfaceOffsets->offset;
                while ( *((IClassBoardSquareModel_c **)v77 - 1) != IClassBoardSquareModel_TypeInfo )
                {
                  --v76;
                  v77 += 4;
                  if ( !v76 )
                    goto LABEL_96;
                }
                v78 = (__int64)(&v74[1]._1.implementedInterfaces + 2 * *v77);
              }
              else
              {
LABEL_96:
                v78 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 15LL);
              }
              (*(void (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v78)(
                v75,
                &v129,
                *(_QWORD *)(v78 + 8));
            }
            this = v129;
            if ( v129 )
            {
              m_CancellationTokenSource = (int32_t)v129->fields.m_CancellationTokenSource;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v127,
                (System_Collections_Generic_List_object__o *)v129,
                (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
              v80 = 0;
              v128 = v127;
              while ( 1 )
              {
                v81 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v128,
                        (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
                if ( !v81 )
                  break;
                current = v128.fields._current;
                if ( !v128.fields._current )
                  sub_1B64324(v81);
                v83 = v128.fields._current->klass;
                v84 = *(unsigned __int16 *)(&v128.fields._current->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&v128.fields._current->klass->_2.bitflags2 + 3) )
                {
                  v85 = &v83->_1.interfaceOffsets->offset;
                  while ( *((IClassBoardSquareModel_c **)v85 - 1) != IClassBoardSquareModel_TypeInfo )
                  {
                    --v84;
                    v85 += 4;
                    if ( !v84 )
                      goto LABEL_107;
                  }
                  v86 = (__int64)&v83->vtable[*v85 + 5].method;
                }
                else
                {
LABEL_107:
                  v86 = sub_1BB60A8(v128.fields._current, IClassBoardSquareModel_TypeInfo, 5LL);
                }
                if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v86)(current, *(_QWORD *)(v86 + 8)) & 1) != 0 )
                {
                  --m_CancellationTokenSource;
                }
                else
                {
                  v87 = current->klass;
                  v88 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
                  {
                    v89 = (IClassBoardSquareModel_c **)&v87->_1.interfaceOffsets->offset;
                    while ( *(v89 - 1) != IClassBoardSquareModel_TypeInfo )
                    {
                      --v88;
                      v89 += 2;
                      if ( !v88 )
                        goto LABEL_114;
                    }
                    v90 = (__int64)&v87->vtable[*(_DWORD *)v89 + 13].method;
                  }
                  else
                  {
LABEL_114:
                    v90 = sub_1BB60A8(current, IClassBoardSquareModel_TypeInfo, 13LL);
                  }
                  v80 += (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v90)(
                           current,
                           0LL,
                           *(_QWORD *)(v90 + 8)) & 1;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v128,
                (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
              if ( !v80 )
                return 0;
              if ( v80 < m_CancellationTokenSource )
                return 1;
              return 2;
            }
          }
        }
      }
    }
    goto LABEL_180;
  }
  v39 = v2->fields._LineModel_k__BackingField;
  if ( !v39 )
    goto LABEL_180;
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
        goto LABEL_44;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_44:
    v43 = sub_1BB60A8(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v43)(
                               v39,
                               *(_QWORD *)(v43 + 8));
  if ( !this )
    goto LABEL_180;
  v92 = this->klass;
  v93 = this;
  v94 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v95 = &v92->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v95 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v94;
      v95 += 4;
      if ( !v94 )
        goto LABEL_129;
    }
    v96 = (__int64)(&v92[1]._1.events + 2 * *v95);
  }
  else
  {
LABEL_129:
    v96 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v96)(
                               v93,
                               0LL,
                               *(_QWORD *)(v96 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v97 = v2->fields._LineModel_k__BackingField;
    if ( !v97 )
      goto LABEL_180;
    v98 = v97->klass;
    v99 = *(unsigned __int16 *)(&v97->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v97->klass->_2.bitflags2 + 3) )
    {
      v100 = (IClassBoardLineModel_c **)&v98->_1.interfaceOffsets->offset;
      while ( *(v100 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v99;
        v100 += 2;
        if ( !v99 )
          goto LABEL_137;
      }
      v101 = (__int64)&v98->vtable[*(_DWORD *)v100 + 1].method;
    }
    else
    {
LABEL_137:
      v101 = sub_1BB60A8(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v101)(
                                 v97,
                                 *(_QWORD *)(v101 + 8));
    if ( !this )
      goto LABEL_180;
    v102 = this->klass;
    v103 = this;
    v104 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      v105 = &v102->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v105 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v104;
        v105 += 4;
        if ( !v104 )
          goto LABEL_144;
      }
      v106 = (__int64)(&v102[1]._1.events + 2 * *v105);
    }
    else
    {
LABEL_144:
      v106 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v106)(
                                 v103,
                                 0LL,
                                 *(_QWORD *)(v106 + 8));
    if ( ((unsigned __int8)this & 1) != 0 )
      return 2;
  }
  v107 = v2->fields._LineModel_k__BackingField;
  if ( !v107 )
    goto LABEL_180;
  v108 = v107->klass;
  v109 = *(unsigned __int16 *)(&v107->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v107->klass->_2.bitflags2 + 3) )
  {
    v110 = &v108->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v110 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v109;
      v110 += 4;
      if ( !v109 )
        goto LABEL_152;
    }
    v111 = (__int64)&v108->vtable[*v110].method;
  }
  else
  {
LABEL_152:
    v111 = sub_1BB60A8(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v111)(
                               v107,
                               *(_QWORD *)(v111 + 8));
  if ( !this )
    goto LABEL_180;
  v112 = this->klass;
  v113 = this;
  v114 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v115 = &v112->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v115 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v114;
      v115 += 4;
      if ( !v114 )
        goto LABEL_160;
    }
    v116 = (__int64)(&v112[1]._1.events + 2 * *v115);
  }
  else
  {
LABEL_160:
    v116 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v116)(
                               v113,
                               0LL,
                               *(_QWORD *)(v116 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  v117 = v2->fields._LineModel_k__BackingField;
  if ( !v117 )
    goto LABEL_180;
  v118 = v117->klass;
  v119 = *(unsigned __int16 *)(&v117->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v117->klass->_2.bitflags2 + 3) )
  {
    v120 = (IClassBoardLineModel_c **)&v118->_1.interfaceOffsets->offset;
    while ( *(v120 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v119;
      v120 += 2;
      if ( !v119 )
        goto LABEL_168;
    }
    v121 = (__int64)&v118->vtable[*(_DWORD *)v120 + 1].method;
  }
  else
  {
LABEL_168:
    v121 = sub_1BB60A8(v117, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v121)(
                               v117,
                               *(_QWORD *)(v121 + 8));
  if ( !this )
LABEL_180:
    sub_1B64324(this);
  v122 = this->klass;
  v123 = this;
  v124 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v125 = &v122->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v125 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v124;
      v125 += 4;
      if ( !v124 )
        goto LABEL_176;
    }
    v126 = (__int64)(&v122[1]._1.events + 2 * *v125);
  }
  else
  {
LABEL_176:
    v126 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  return (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v126)(v123, 0LL, *(_QWORD *)(v126 + 8)) & 1;
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
  if ( (byte_49FF7BA & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardLockModel_TypeInfo, squareModel);
    this = (ClassBoardLine_o *)sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v5);
    byte_49FF7BA = 1;
  }
  if ( !squareModel )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(squareModel, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    p_blankOffsetLength = &v4->fields.blankOffsetLength;
  }
  else if ( sub_1B64204(squareModel, IClassBoardLockModel_TypeInfo) )
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

  if ( (byte_49FF7B8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardEffectPlayer_GetData_bool___, v3);
    sub_1B640C8(&Method_ClassBoardLine__PlayReleaseEffect_b__33_0__, v4);
    sub_1B640C8(&Method_ClassBoardLine__PlayReleaseEffect_b__33_1__, v5);
    sub_1B640C8(&Method_ClassBoardLine__PlayReleaseEffect_b__33_2__, v6);
    sub_1B640C8(&Method_ClassBoardLine__PlayReleaseEffect_b__33_3__, v7);
    byte_49FF7B8 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      if ( ClassBoardEffectPlayer__GetData_bool_(
             releaseEffectPlayer,
             (const MethodInfo_2E2D140 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOnUnlock;
        v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
        v15 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_2__;
      }
      else
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOn;
        v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
        v15 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_3__;
      }
      goto LABEL_15;
    }
LABEL_16:
    sub_1B64324(releaseEffectPlayer);
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
         (const MethodInfo_2E2D140 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnUnlock;
    v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
    v15 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_0__;
  }
  else
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurn;
    v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
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
    sub_1B64324(simpleAnimation);
  }
  SimpleAnimation__Play_63513060(simpleAnimation, name, 0LL);
  v9 = ClassBoardLine__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
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

  if ( (byte_49FF7B6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardLine__PlayTransition_b__28_0__, v3);
    sub_1B640C8(&Method_ClassBoardLine__PlayTransition_b__28_1__, v4);
    sub_1B640C8(&Method_ClassBoardLine__PlayTransition_b__28_2__, v5);
    byte_49FF7B6 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransitionRoadOn;
    v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    v11 = &Method_ClassBoardLine__PlayTransition_b__28_1__;
  }
  else if ( ConnectType == 1 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransition;
    v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    v11 = &Method_ClassBoardLine__PlayTransition_b__28_0__;
  }
  else
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBlackOutTransition;
    v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
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
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *name; // x0
  UnityEngine_Object_o *v14; // x21
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  IClassBoardLineModel_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_c *v25; // x8
  UnityEngine_Object_o *v26; // x23
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  IClassBoardLineModel_c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  UnityEngine_Object_c *v39; // x8
  UnityEngine_Object_o *v40; // x22
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x0
  const MethodInfo *v47; // x1
  System_String_o *v48; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x21
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w2
  int32_t v55; // w3
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  System_Action_o *v59; // x21
  int32_t v60; // w2
  int32_t v61; // w3
  struct UnityEngine_GameObject_array *effectObjects; // x22
  int max_length; // w8
  int v64; // w9
  Il2CppClass **v65; // x8
  UnityEngine_GameObject_o *v66; // x21
  UnityEngine_Transform_o *transform; // x0
  float lineLength; // s8
  UnityEngine_Transform_o *v69; // x20
  float y; // s9
  int v71; // s2
  float v72; // s0
  float v73; // s1
  int v74; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF7B5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, setLineModel);
    sub_1B640C8(&ClassBoardEffectPlayer_TypeInfo, v6);
    sub_1B640C8(&Method_ClassBoardLine_PlayReleaseEffect__, v7);
    sub_1B640C8(&IClassBoardLineModel_TypeInfo, v8);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v9);
    sub_1B640C8(&string___TypeInfo, v10);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v11);
    byte_49FF7B5 = 1;
  }
  v74 = 0;
  this->fields._LineModel_k__BackingField = setLineModel;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._LineModel_k__BackingField,
    (int32_t)setLineModel,
    (int32_t)method,
    v3);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  name = (UnityEngine_Object_o *)sub_1B64170(string___TypeInfo, 5LL);
  if ( !gameObject )
    goto LABEL_49;
  v14 = name;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL);
  if ( !v14 )
    goto LABEL_49;
  if ( !LODWORD(v14[1].klass) )
    goto LABEL_50;
  v14[1].monitor = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14[1].monitor, (int32_t)name, v16, v17);
  if ( LODWORD(v14[1].klass) <= 1 )
    goto LABEL_50;
  v20 = StringLiteral_16054/*"_"*/;
  *(_QWORD *)&v14[1].fields.m_CachedPtr = StringLiteral_16054/*"_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14[1].fields, v20, v18, v19);
  if ( !setLineModel )
    goto LABEL_49;
  klass = setLineModel->klass;
  v22 = *(unsigned __int16 *)(&setLineModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&setLineModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1BB60A8(setLineModel, IClassBoardLineModel_TypeInfo, 0LL);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))p_method)(
                                   setLineModel,
                                   *(_QWORD *)(p_method + 8));
  if ( !name )
    goto LABEL_49;
  v25 = name->klass;
  v26 = name;
  v27 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
  {
    v28 = &v25->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v28 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_19;
    }
    v29 = (__int64)(&v25->vtable._0_Equals.method + 2 * *v28);
  }
  else
  {
LABEL_19:
    v29 = sub_1BB60A8(name, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v74 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v74, 0LL);
  if ( LODWORD(v14[1].klass) <= 2
    || (v14[2].klass = (UnityEngine_Object_c *)name,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14[2], (int32_t)name, v30, v31),
        LODWORD(v14[1].klass) <= 3) )
  {
LABEL_50:
    sub_1B6432C(name, v15);
  }
  v34 = StringLiteral_16054/*"_"*/;
  v14[2].monitor = (void *)StringLiteral_16054/*"_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14[2].monitor, v34, v32, v33);
  v35 = setLineModel->klass;
  v36 = *(unsigned __int16 *)(&setLineModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&setLineModel->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v37 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_27;
    }
    v38 = (__int64)&v35->vtable[*v37 + 1].method;
  }
  else
  {
LABEL_27:
    v38 = sub_1BB60A8(setLineModel, IClassBoardLineModel_TypeInfo, 1LL);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v38)(
                                   setLineModel,
                                   *(_QWORD *)(v38 + 8));
  if ( !name )
LABEL_49:
    sub_1B64324(name);
  v39 = name->klass;
  v40 = name;
  v41 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
  {
    v42 = &v39->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v42 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_34;
    }
    v43 = (__int64)(&v39->vtable._0_Equals.method + 2 * *v42);
  }
  else
  {
LABEL_34:
    v43 = sub_1BB60A8(name, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v74 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v74, 0LL);
  if ( LODWORD(v14[1].klass) <= 4 )
    goto LABEL_50;
  *(_QWORD *)&v14[2].fields.m_CachedPtr = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14[2].fields, (int32_t)name, v44, v45);
  v46 = System_String__Concat_61388924((System_String_array *)v14, 0LL);
  UnityEngine_Object__set_name(gameObject, v46, 0LL);
  ClassBoardLine__UpdateLine(this, v47);
  name = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !name )
    goto LABEL_49;
  v48 = UnityEngine_Object__get_name(name, 0LL);
  v51 = sub_1B64314(ClassBoardEffectPlayer_TypeInfo, v49, v50);
  System_Object___ctor((Il2CppObject *)v51, 0LL);
  *(_QWORD *)(v51 + 16) = v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 16), (int32_t)v48, v52, v53);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v51;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.releaseEffectPlayer, v51, v54, v55);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v59 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v57, v58);
  System_Action___ctor(v59, (Il2CppObject *)this, Method_ClassBoardLine_PlayReleaseEffect__, 0LL);
  if ( !releaseEffectPlayer )
    goto LABEL_49;
  releaseEffectPlayer->fields.playCallback = v59;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&releaseEffectPlayer->fields.playCallback, (int32_t)v59, v60, v61);
  effectObjects = this->fields.effectObjects;
  v74 = 0;
  if ( !effectObjects )
    goto LABEL_49;
  max_length = effectObjects->max_length;
  if ( max_length >= 1 )
  {
    v64 = 0;
    while ( v64 < (unsigned int)max_length )
    {
      v65 = &effectObjects->obj.klass + v64;
      v66 = (UnityEngine_GameObject_o *)v65[4];
      if ( !v66 )
        goto LABEL_49;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v65[4], 0LL);
      lineLength = this->fields.lineLength;
      v69 = transform;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v66, 0LL);
      if ( !name )
        goto LABEL_49;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)name, 0LL);
      y = localScale.fields.y;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v66, 0LL);
      if ( !name )
        goto LABEL_49;
      *(UnityEngine_Vector3_o *)(&v71 - 2) = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)name, 0LL);
      if ( !v69 )
        goto LABEL_49;
      v72 = lineLength;
      v73 = y;
      UnityEngine_Transform__set_localScale(v69, *(UnityEngine_Vector3_o *)(&v71 - 2), 0LL);
      v64 = v74 + 1;
      v74 = v64;
      max_length = effectObjects->max_length;
      if ( v64 >= max_length )
        return;
    }
    goto LABEL_50;
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
  __int64 v28; // x1
  float32x2_t v29; // d0
  unsigned __int32 v30; // s1
  float v31; // s2
  float v32; // s9
  float32x2_t v33; // d1
  float32x2_t v34; // d12
  float v35; // s11
  int32x2_t v36; // d0
  float32x2_t v37; // d13
  float z; // s14
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct IClassBoardLineModel_o *v40; // x20
  IClassBoardLineModel_c *v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  IClassBoardSquareModel_o *v45; // x0
  const MethodInfo *v46; // x2
  float SquareTypeOffset; // s0
  struct IClassBoardLineModel_o *v48; // x20
  IClassBoardLineModel_c *v49; // x8
  float v50; // s0
  __int64 v51; // x9
  float32x2_t v52; // d11
  float v53; // s12
  IClassBoardLineModel_c **v54; // x10
  __int64 v55; // x0
  float v56; // s12
  float32x2_t v57; // d11
  IClassBoardSquareModel_o *v58; // x0
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x1
  float v61; // s0
  float32x2_t v62; // d8
  float v63; // s9
  float32x2_t v64; // d1
  float v65; // s9
  float v66; // s8
  unsigned __int64 v67; // d0
  int v68; // w20
  UnityEngine_Component_o **p_connectedOnSprite; // x25
  UnityEngine_Component_o *v70; // x20
  __int64 v71; // x1
  unsigned int v72; // w9
  int32_t v73; // w1
  ClassBoardLine_o *v74; // x20
  __int64 v75; // x1
  UnityEngine_Transform_o *transform; // x19
  float v77; // s3
  float32x2_t v78; // d0
  float v79; // s1
  struct UnityEngine_Vector3_StaticFields *v80; // x8
  float v81; // s2 OVERLAPPED
  unsigned __int64 v82; // d0 OVERLAPPED
  int v83; // s1
  unsigned __int32 v84; // [xsp+0h] [xbp-C0h]
  unsigned __int32 v85; // [xsp+0h] [xbp-C0h]
  unsigned int v86; // [xsp+10h] [xbp-B0h]
  unsigned __int32 xb; // [xsp+20h] [xbp-A0h]
  unsigned __int32 xc; // [xsp+20h] [xbp-A0h]
  float32x2_t x; // [xsp+20h] [xbp-A0h]
  float32x2_t xa; // [xsp+20h] [xbp-A0h]
  unsigned int v91; // [xsp+30h] [xbp-90h]
  float32x2_t v92; // [xsp+30h] [xbp-90h]
  int32x2_t v93; // [xsp+30h] [xbp-90h]
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_49FF7B7 & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardLineModel_TypeInfo, method);
    this = (ClassBoardLine_o *)sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v3);
    byte_49FF7B7 = 1;
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
    p_method = sub_1BB60A8(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
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
    v13 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
  v17 = v2->fields._LineModel_k__BackingField;
  if ( !v17 )
    goto LABEL_94;
  v18 = v17->klass;
  v19 = v16;
  v91 = v14;
  v20 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
  v86 = v15;
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
    v22 = sub_1BB60A8(v17, IClassBoardLineModel_TypeInfo, 1LL);
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
    v27 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  (*(void (__fastcall **)(ClassBoardLine_o *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  v32 = v31;
  if ( !byte_49F710F )
  {
    xb = v29.n64_u32[0];
    v84 = v30;
    sub_1B640C8(&System_Math_TypeInfo, v28);
    v30 = v84;
    v29.n64_u32[0] = xb;
    byte_49F710F = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    xc = v29.n64_u32[0];
    v85 = v30;
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v30 = v85;
    v29.n64_u32[0] = xc;
  }
  v29.n64_u32[1] = v30;
  v33.n64_u64[0] = __PAIR64__(v86, v91);
  x.n64_u64[0] = v29.n64_u64[0];
  v92.n64_u64[0] = __PAIR64__(v86, v91);
  if ( !byte_49F7114 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v28);
    v29.n64_u64[0] = x.n64_u64[0];
    v33.n64_u64[0] = v92.n64_u64[0];
    byte_49F7114 = 1;
  }
  this = (ClassBoardLine_o *)System_Math_TypeInfo;
  v34.n64_u64[0] = vsub_f32(v29, v33).n64_u64[0];
  v35 = v32 - v19;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v36.n64_u64[0] = vmul_f32(v34, v34).n64_u64[0];
  v36.n64_f32[0] = sqrtf((float)(v35 * v35) + vaddv_f32(v36));
  if ( v36.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_49F7111 )
    {
      this = (ClassBoardLine_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v28);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v37.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v37.n64_u64[0] = vdiv_f32(v34, vdup_lane_s32(v36, 0)).n64_u64[0];
    z = v35 / v36.n64_f32[0];
  }
  v40 = v2->fields._LineModel_k__BackingField;
  if ( !v40 )
    goto LABEL_94;
  v41 = v40->klass;
  v42 = *(unsigned __int16 *)(&v40->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v40->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v43 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_49;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_49:
    v44 = sub_1BB60A8(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  v45 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v44)(
                                      v40,
                                      *(_QWORD *)(v44 + 8));
  SquareTypeOffset = ClassBoardLine__GetSquareTypeOffset(v2, v45, v46);
  v48 = v2->fields._LineModel_k__BackingField;
  if ( !v48 )
    goto LABEL_94;
  v49 = v48->klass;
  v50 = SquareTypeOffset * 0.5;
  v51 = *(unsigned __int16 *)(&v48->klass->_2.bitflags2 + 3);
  v52.n64_u64[0] = vmul_n_f32(v37, v50).n64_u64[0];
  v53 = z * v50;
  if ( *(_WORD *)(&v48->klass->_2.bitflags2 + 3) )
  {
    v54 = (IClassBoardLineModel_c **)&v49->_1.interfaceOffsets->offset;
    while ( *(v54 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v51;
      v54 += 2;
      if ( !v51 )
        goto LABEL_56;
    }
    v55 = (__int64)&v49->vtable[*(_DWORD *)v54 + 1].method;
  }
  else
  {
LABEL_56:
    v55 = sub_1BB60A8(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  v56 = v19 - v53;
  v57.n64_u64[0] = vsub_f32(v92, v52).n64_u64[0];
  v58 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v55)(
                                      v48,
                                      *(_QWORD *)(v55 + 8));
  v61 = ClassBoardLine__GetSquareTypeOffset(v2, v58, v59) * 0.5;
  v62.n64_u64[0] = vadd_f32(x, vmul_n_f32(v37, v61)).n64_u64[0];
  v63 = v32 + (float)(z * v61);
  if ( !byte_49F7113 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v60);
    byte_49F7113 = 1;
  }
  v64.n64_u64[0] = vsub_f32(v62, v57).n64_u64[0];
  v65 = v63 - v56;
  xa.n64_u64[0] = v64.n64_u64[0];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v64.n64_u64[0] = xa.n64_u64[0];
  }
  v66 = v64.n64_f32[1];
  v67 = vmul_f32(v64, v64).n64_u64[0];
  *(float *)&v67 = sqrtf((float)(v65 * v65) + (float)(*(float *)&v67 + vmuls_lane_f32(v64.n64_f32[1], v64, 1)));
  v93.n64_u64[0] = v67;
  LODWORD(v2->fields.lineLength) = v67;
  this = (ClassBoardLine_o *)ClassBoardLine__GetConnectType(v2, v60);
  if ( !v2->fields.notConnectedSprite )
    goto LABEL_94;
  v68 = (int)this;
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
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !v68 )
  {
LABEL_71:
    p_connectedOnSprite = (UnityEngine_Component_o **)&v2->fields.notConnectedSprite;
    goto LABEL_73;
  }
  if ( v68 != 1 )
  {
    if ( v68 == 2 )
      goto LABEL_73;
    goto LABEL_71;
  }
  p_connectedOnSprite = (UnityEngine_Component_o **)&v2->fields.connectedSprite;
LABEL_73:
  v70 = *p_connectedOnSprite;
  if ( !*p_connectedOnSprite )
    goto LABEL_94;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(*p_connectedOnSprite, 0LL);
  if ( !this )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !byte_49F779D )
  {
    sub_1B640C8(&System_Math_TypeInfo, v71);
    byte_49F779D = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v72 = vcvtps_s32_f32(v93.n64_f32[0]);
  v73 = ceilf(v93.n64_f32[0]) == INFINITY ? 0x80000000 : v72;
  UIWidget__set_width((UIWidget_o *)v70, v73, 0LL);
  this = (ClassBoardLine_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_94;
  v74 = this;
  v94.fields.z = atan2f(v66, xa.n64_f32[0]) * 57.296;
  v94.fields.x = 0.0;
  v94.fields.y = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)v74, v94, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !byte_49F7114 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v75);
    byte_49F7114 = 1;
  }
  this = (ClassBoardLine_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v77 = v93.n64_f32[0];
  if ( v93.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_49F7111 )
    {
      this = (ClassBoardLine_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v75);
      v77 = v93.n64_f32[0];
      byte_49F7111 = 1;
    }
    v80 = UnityEngine_Vector3_TypeInfo->static_fields;
    v78.n64_u64[0] = *(unsigned __int64 *)&v80->zeroVector.fields.x;
    v79 = v80->zeroVector.fields.z;
  }
  else
  {
    v78.n64_u64[0] = vdiv_f32(xa, vdup_lane_s32(v93, 0)).n64_u64[0];
    v79 = v65 / v93.n64_f32[0];
  }
  if ( !transform )
    goto LABEL_94;
  v81 = v56 + (float)((float)(v77 * 0.5) * v79);
  v82 = vadd_f32(v57, vmul_n_f32(v78, v77 * 0.5)).n64_u64[0];
  v83 = HIDWORD(v82);
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v81 - 2), 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardLine__WaitAnimationFinished(
        ClassBoardLine_o *this,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FF7BB & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo, name);
    byte_49FF7BB = 1;
  }
  v7 = sub_1B64314(ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo, name, endCallback);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)name, v10, v11);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)endCallback, v12, v13);
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
    sub_1B64324(simpleAnimation);
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
    sub_1B64324(simpleAnimation);
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
    sub_1B64324(simpleAnimation);
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
    sub_1B64324(simpleAnimation);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, v4);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1B64324(0LL);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1B64324(0LL);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1B64324(0LL);
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
  int32_t v3; // w3

  this->fields._LineModel_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._LineModel_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v6; // w2
  int32_t v7; // w3
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
  int32_t v19; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_49FF7BD & 1) == 0 )
  {
    this = (ClassBoardLine__WaitAnimationFinished_d__37_o *)sub_1B640C8(&SimpleAnimation_State_TypeInfo, method);
    byte_49FF7BD = 1;
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
    this = (ClassBoardLine__WaitAnimationFinished_d__37_o *)_4__this->fields.simpleAnimation;
    if ( !this )
      goto LABEL_28;
    State = SimpleAnimation__GetState((SimpleAnimation_o *)this, v2->fields.name, 0LL);
    v2->fields._state_5__2 = State;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._state_5__2, (int32_t)State, v6, v7);
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
      p_method = sub_1BB60A8(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 13LL);
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
        v17 = sub_1BB60A8(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 5LL);
      }
      if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) < 1.0 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B6406C(p__2__current, 0, v18, v19);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      goto LABEL_26;
    }
LABEL_28:
    sub_1B64324(this);
  }
  return 0;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ClassBoardLine__WaitAnimationFinished_d__37_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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