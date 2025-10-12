void ClassBoardLine___ctor(ClassBoardLine_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C3B41C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3228/*"BrightTurnTransition"*/);
    sub_1C32C20(&StringLiteral_3225/*"BrightTurn"*/);
    sub_1C32C20(&StringLiteral_3229/*"BrightTurnTransitionRoadOn"*/);
    sub_1C32C20(&StringLiteral_7154/*"GrandReturnTransition"*/);
    sub_1C32C20(&StringLiteral_3230/*"BrightTurnUnLock"*/);
    sub_1C32C20(&StringLiteral_3226/*"BrightTurnRoadOn"*/);
    sub_1C32C20(&StringLiteral_3227/*"BrightTurnRoadOnUnLock"*/);
    sub_1C32C20(&StringLiteral_3178/*"BlackOutTransition"*/);
    byte_4C3B41C = 1;
  }
  v5 = StringLiteral_3225/*"BrightTurn"*/;
  this->fields.animNameBrightTurn = (struct System_String_o *)StringLiteral_3225/*"BrightTurn"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animNameBrightTurn, v5, v2, v3);
  v6 = StringLiteral_3226/*"BrightTurnRoadOn"*/;
  this->fields.animNameBrightTurnRoadOn = (struct System_String_o *)StringLiteral_3226/*"BrightTurnRoadOn"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animNameBrightTurnRoadOn, v6, v7, v8);
  v9 = StringLiteral_3230/*"BrightTurnUnLock"*/;
  this->fields.animNameBrightTurnUnlock = (struct System_String_o *)StringLiteral_3230/*"BrightTurnUnLock"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animNameBrightTurnUnlock, v9, v10, v11);
  v12 = StringLiteral_3227/*"BrightTurnRoadOnUnLock"*/;
  this->fields.animNameBrightTurnRoadOnUnlock = (struct System_String_o *)StringLiteral_3227/*"BrightTurnRoadOnUnLock"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animNameBrightTurnRoadOnUnlock, v12, v13, v14);
  v15 = StringLiteral_3228/*"BrightTurnTransition"*/;
  this->fields.animNameBrightTurnTransition = (struct System_String_o *)StringLiteral_3228/*"BrightTurnTransition"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animNameBrightTurnTransition, v15, v16, v17);
  v18 = StringLiteral_3229/*"BrightTurnTransitionRoadOn"*/;
  this->fields.animNameBrightTurnTransitionRoadOn = (struct System_String_o *)StringLiteral_3229/*"BrightTurnTransitionRoadOn"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animNameBrightTurnTransitionRoadOn, v18, v19, v20);
  v21 = StringLiteral_3178/*"BlackOutTransition"*/;
  this->fields.animNameBlackOutTransition = (struct System_String_o *)StringLiteral_3178/*"BlackOutTransition"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animNameBlackOutTransition, v21, v22, v23);
  v24 = StringLiteral_7154/*"GrandReturnTransition"*/;
  this->fields.animNameGrandReturnTransition = (struct System_String_o *)StringLiteral_7154/*"GrandReturnTransition"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animNameGrandReturnTransition, v24, v25, v26);
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
  Il2CppObject *current; // x19
  Il2CppClass *v73; // x8
  __int64 v74; // x9
  int32_t *v75; // x10
  __int64 v76; // x0
  Il2CppClass *v77; // x8
  __int64 v78; // x9
  IClassBoardSquareModel_c **v79; // x10
  __int64 v80; // x0
  ClassBoardLine_c *v82; // x8
  ClassBoardLine_o *v83; // x20
  __int64 v84; // x9
  int32_t *v85; // x10
  __int64 v86; // x0
  struct IClassBoardLineModel_o *v87; // x20
  IClassBoardLineModel_c *v88; // x8
  __int64 v89; // x9
  IClassBoardLineModel_c **v90; // x10
  __int64 v91; // x0
  ClassBoardLine_c *v92; // x8
  ClassBoardLine_o *v93; // x20
  __int64 v94; // x9
  int32_t *v95; // x10
  __int64 v96; // x0
  struct IClassBoardLineModel_o *v97; // x20
  IClassBoardLineModel_c *v98; // x8
  __int64 v99; // x9
  int *v100; // x10
  __int64 v101; // x0
  ClassBoardLine_c *v102; // x8
  ClassBoardLine_o *v103; // x20
  __int64 v104; // x9
  int32_t *v105; // x10
  __int64 v106; // x0
  struct IClassBoardLineModel_o *v107; // x19
  IClassBoardLineModel_c *v108; // x8
  __int64 v109; // x9
  IClassBoardLineModel_c **v110; // x10
  __int64 v111; // x0
  ClassBoardLine_c *v112; // x8
  ClassBoardLine_o *v113; // x19
  __int64 v114; // x9
  int32_t *v115; // x10
  __int64 v116; // x0
  System_Collections_Generic_List_Enumerator_object__o v117; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v118; // [xsp+20h] [xbp-60h] BYREF
  ClassBoardLine_o *v119; // [xsp+48h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4C3B418 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__);
    sub_1C32C20(&IClassBoardLineModel_TypeInfo);
    sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__);
    this = (ClassBoardLine_o *)sub_1C32C20(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    byte_4C3B418 = 1;
  }
  v119 = 0;
  memset(&v118, 0, sizeof(v118));
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
    v7 = sub_1C83438(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0);
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
    v12 = sub_1C83438(this, IClassBoardSquareModel_TypeInfo, 5);
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
    v17 = sub_1C83438(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1);
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
    v22 = sub_1C83438(this, IClassBoardSquareModel_TypeInfo, 5);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_33:
    v23 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    v119 = (ClassBoardLine_o *)v23;
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
        v28 = sub_1C83438(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0);
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
          v38 = sub_1C83438(this, IClassBoardSquareModel_TypeInfo, 5);
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
            v43 = sub_1C83438(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0);
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
            v48 = sub_1C83438(this, IClassBoardSquareModel_TypeInfo, 17);
          }
          this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v48)(
                                       v45,
                                       &v119,
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
            v53 = sub_1C83438(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1);
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
              v58 = sub_1C83438(this, IClassBoardSquareModel_TypeInfo, 5);
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
                v63 = sub_1C83438(v59, IClassBoardLineModel_TypeInfo, 1);
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
                v68 = sub_1C83438(this, IClassBoardSquareModel_TypeInfo, 17);
              }
              (*(void (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v68)(
                v65,
                &v119,
                *(_QWORD *)(v68 + 8));
            }
            this = v119;
            if ( v119 )
            {
              m_CancellationTokenSource = (int32_t)v119->fields.m_CancellationTokenSource;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v117,
                (System_Collections_Generic_List_object__o *)v119,
                (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
              v70 = 0;
              v118 = v117;
              while ( 1 )
              {
                v71 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v118,
                        (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
                if ( !v71 )
                  break;
                current = v118.fields._current;
                if ( !v118.fields._current )
                  sub_1C32E7C(v71);
                v73 = v118.fields._current->klass;
                v74 = *(unsigned __int16 *)&v118.fields._current->klass->_2.rank;
                if ( *(_WORD *)&v118.fields._current->klass->_2.rank )
                {
                  v75 = &v73->_1.interfaceOffsets->offset;
                  while ( *((IClassBoardSquareModel_c **)v75 - 1) != IClassBoardSquareModel_TypeInfo )
                  {
                    --v74;
                    v75 += 4;
                    if ( !v74 )
                      goto LABEL_107;
                  }
                  v76 = (__int64)&v73->vtable[*v75 + 5];
                }
                else
                {
LABEL_107:
                  v76 = sub_1C83438(v118.fields._current, IClassBoardSquareModel_TypeInfo, 5);
                }
                if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v76)(current, *(_QWORD *)(v76 + 8)) & 1) != 0 )
                {
                  --m_CancellationTokenSource;
                }
                else
                {
                  v77 = current->klass;
                  v78 = *(unsigned __int16 *)&current->klass->_2.rank;
                  if ( *(_WORD *)&current->klass->_2.rank )
                  {
                    v79 = (IClassBoardSquareModel_c **)&v77->_1.interfaceOffsets->offset;
                    while ( *(v79 - 1) != IClassBoardSquareModel_TypeInfo )
                    {
                      --v78;
                      v79 += 2;
                      if ( !v78 )
                        goto LABEL_114;
                    }
                    v80 = (__int64)&v77->vtable[*(_DWORD *)v79 + 15];
                  }
                  else
                  {
LABEL_114:
                    v80 = sub_1C83438(current, IClassBoardSquareModel_TypeInfo, 15);
                  }
                  v70 += (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v80)(
                           current,
                           0,
                           *(_QWORD *)(v80 + 8))
                       & 1;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v118,
                (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
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
    v33 = sub_1C83438(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v33)(
                               v29,
                               *(_QWORD *)(v33 + 8));
  if ( !this )
    goto LABEL_180;
  v82 = this->klass;
  v83 = this;
  v84 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v85 = &v82->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v85 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v84;
      v85 += 4;
      if ( !v84 )
        goto LABEL_129;
    }
    v86 = (__int64)(&v82[1]._1.nestedTypes + 2 * *v85);
  }
  else
  {
LABEL_129:
    v86 = sub_1C83438(this, IClassBoardSquareModel_TypeInfo, 15);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v86)(
                               v83,
                               0,
                               *(_QWORD *)(v86 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v87 = v2->fields._LineModel_k__BackingField;
    if ( !v87 )
      goto LABEL_180;
    v88 = v87->klass;
    v89 = *(unsigned __int16 *)&v87->klass->_2.rank;
    if ( *(_WORD *)&v87->klass->_2.rank )
    {
      v90 = (IClassBoardLineModel_c **)&v88->_1.interfaceOffsets->offset;
      while ( *(v90 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v89;
        v90 += 2;
        if ( !v89 )
          goto LABEL_137;
      }
      v91 = (__int64)&v88->vtable[*(_DWORD *)v90 + 1];
    }
    else
    {
LABEL_137:
      v91 = sub_1C83438(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v91)(
                                 v87,
                                 *(_QWORD *)(v91 + 8));
    if ( !this )
      goto LABEL_180;
    v92 = this->klass;
    v93 = this;
    v94 = *(unsigned __int16 *)&this->klass->_2.rank;
    if ( *(_WORD *)&this->klass->_2.rank )
    {
      v95 = &v92->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v95 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v94;
        v95 += 4;
        if ( !v94 )
          goto LABEL_144;
      }
      v96 = (__int64)(&v92[1]._1.nestedTypes + 2 * *v95);
    }
    else
    {
LABEL_144:
      v96 = sub_1C83438(this, IClassBoardSquareModel_TypeInfo, 15);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v96)(
                                 v93,
                                 0,
                                 *(_QWORD *)(v96 + 8));
    if ( ((unsigned __int8)this & 1) != 0 )
      return 2;
  }
  v97 = v2->fields._LineModel_k__BackingField;
  if ( !v97 )
    goto LABEL_180;
  v98 = v97->klass;
  v99 = *(unsigned __int16 *)&v97->klass->_2.rank;
  if ( *(_WORD *)&v97->klass->_2.rank )
  {
    v100 = &v98->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v100 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v99;
      v100 += 4;
      if ( !v99 )
        goto LABEL_152;
    }
    v101 = (__int64)&v98->vtable[*v100];
  }
  else
  {
LABEL_152:
    v101 = sub_1C83438(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v101)(
                               v97,
                               *(_QWORD *)(v101 + 8));
  if ( !this )
    goto LABEL_180;
  v102 = this->klass;
  v103 = this;
  v104 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v105 = &v102->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v105 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v104;
      v105 += 4;
      if ( !v104 )
        goto LABEL_160;
    }
    v106 = (__int64)(&v102[1]._1.nestedTypes + 2 * *v105);
  }
  else
  {
LABEL_160:
    v106 = sub_1C83438(this, IClassBoardSquareModel_TypeInfo, 15);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v106)(
                               v103,
                               0,
                               *(_QWORD *)(v106 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  v107 = v2->fields._LineModel_k__BackingField;
  if ( !v107 )
    goto LABEL_180;
  v108 = v107->klass;
  v109 = *(unsigned __int16 *)&v107->klass->_2.rank;
  if ( *(_WORD *)&v107->klass->_2.rank )
  {
    v110 = (IClassBoardLineModel_c **)&v108->_1.interfaceOffsets->offset;
    while ( *(v110 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v109;
      v110 += 2;
      if ( !v109 )
        goto LABEL_168;
    }
    v111 = (__int64)&v108->vtable[*(_DWORD *)v110 + 1];
  }
  else
  {
LABEL_168:
    v111 = sub_1C83438(v107, IClassBoardLineModel_TypeInfo, 1);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v111)(
                               v107,
                               *(_QWORD *)(v111 + 8));
  if ( !this )
LABEL_180:
    sub_1C32E7C(this);
  v112 = this->klass;
  v113 = this;
  v114 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v115 = &v112->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v115 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v114;
      v115 += 4;
      if ( !v114 )
        goto LABEL_176;
    }
    v116 = (__int64)(&v112[1]._1.nestedTypes + 2 * *v115);
  }
  else
  {
LABEL_176:
    v116 = sub_1C83438(this, IClassBoardSquareModel_TypeInfo, 15);
  }
  return (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v116)(v113, 0, *(_QWORD *)(v116 + 8)) & 1;
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
  if ( (byte_4C3B419 & 1) == 0 )
  {
    sub_1C32C20(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardLine_o *)sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    byte_4C3B419 = 1;
  }
  if ( !squareModel )
    sub_1C32E7C(this);
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
    v8 = sub_1C83438(squareModel, IClassBoardSquareModel_TypeInfo, 5);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v8)(squareModel, *(_QWORD *)(v8 + 8)) & 1) != 0 )
  {
    p_blankOffsetLength = &v4->fields.blankOffsetLength;
  }
  else if ( sub_1C32D5C(squareModel, IClassBoardLockModel_TypeInfo) )
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

  if ( (byte_4C3B41A & 1) == 0 )
  {
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C3B41A = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (simpleAnimation = (SimpleAnimation_o *)SimpleAnimation__Play_66464300(simpleAnimation, name, 0),
        (v8 = this->fields.simpleAnimation) == 0)
    || (simpleAnimation = (SimpleAnimation_o *)v8->fields.m_Clip) == 0
    || (v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)simpleAnimation, 0),
        (simpleAnimation = (SimpleAnimation_o *)SimpleAnimation__get_Item(v8, v9, 0)) == 0) )
  {
    sub_1C32E7C(simpleAnimation);
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
    v14 = sub_1C83438(simpleAnimation, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 1.0);
  v16 = ClassBoardLine__WaitAnimationFinished(this, name, endCallback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v16, 0);
}


void ClassBoardLine__PlayGrandToClassTransition(ClassBoardLine_o *this, bool isQuick, const MethodInfo *method)
{
  System_String_o *animNameGrandReturnTransition; // x21
  System_Action_o *v6; // x22
  const MethodInfo *v7; // x4

  if ( (byte_4C3B415 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ClassBoardLine__PlayGrandToClassTransition_b__30_0__);
    byte_4C3B415 = 1;
  }
  animNameGrandReturnTransition = this->fields.animNameGrandReturnTransition;
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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

  if ( (byte_4C3B417 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ClassBoardEffectPlayer_GetData_bool___);
    sub_1C32C20(&Method_ClassBoardLine__PlayReleaseEffect_b__35_0__);
    sub_1C32C20(&Method_ClassBoardLine__PlayReleaseEffect_b__35_1__);
    sub_1C32C20(&Method_ClassBoardLine__PlayReleaseEffect_b__35_2__);
    sub_1C32C20(&Method_ClassBoardLine__PlayReleaseEffect_b__35_3__);
    byte_4C3B417 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      if ( ClassBoardEffectPlayer__GetData_bool_(
             releaseEffectPlayer,
             (const MethodInfo_30D0BC4 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOnUnlock;
        v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        v8 = &Method_ClassBoardLine__PlayReleaseEffect_b__35_2__;
      }
      else
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOn;
        v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        v8 = &Method_ClassBoardLine__PlayReleaseEffect_b__35_3__;
      }
      goto LABEL_15;
    }
LABEL_16:
    sub_1C32E7C(releaseEffectPlayer);
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
         (const MethodInfo_30D0BC4 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnUnlock;
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    v8 = &Method_ClassBoardLine__PlayReleaseEffect_b__35_0__;
  }
  else
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurn;
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
      sub_1C32E7C(simpleAnimation);
    }
    SimpleAnimation__Play_66464300(simpleAnimation, name, 0);
    v10 = ClassBoardLine__WaitAnimationFinished(this, name, endCallback, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v10, 0);
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

  if ( (byte_4C3B414 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ClassBoardLine__PlayTransition_b__29_0__);
    sub_1C32C20(&Method_ClassBoardLine__PlayTransition_b__29_1__);
    sub_1C32C20(&Method_ClassBoardLine__PlayTransition_b__29_2__);
    byte_4C3B414 = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, (const MethodInfo *)isQuick);
  if ( ConnectType == 2 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransitionRoadOn;
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    v8 = &Method_ClassBoardLine__PlayTransition_b__29_1__;
  }
  else if ( ConnectType == 1 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransition;
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    v8 = &Method_ClassBoardLine__PlayTransition_b__29_0__;
  }
  else
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBlackOutTransition;
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
  const MethodInfo *v3; // x3
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *name; // x0
  UnityEngine_Object_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  IClassBoardLineModel_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  UnityEngine_Object_c *v18; // x8
  UnityEngine_Object_o *v19; // x23
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  IClassBoardLineModel_c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  UnityEngine_Object_c *v32; // x8
  UnityEngine_Object_o *v33; // x23
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w1
  IClassBoardLineModel_c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  UnityEngine_Object_c *v46; // x8
  UnityEngine_Object_o *v47; // x22
  __int64 v48; // x9
  IClassBoardSquareModel_c **v49; // x10
  __int64 v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_String_o *v53; // x0
  const MethodInfo *v54; // x1
  System_String_o *v55; // x20
  __int64 v56; // x21
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  System_Action_o *v62; // x21
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct UnityEngine_GameObject_array *effectObjects; // x22
  int max_length; // w8
  int v67; // w9
  Il2CppClass **v68; // x8
  UnityEngine_GameObject_o *v69; // x21
  UnityEngine_Transform_o *transform; // x0
  float lineLength; // s8
  UnityEngine_Transform_o *v72; // x20
  float y; // s9
  float v74; // s0
  float v75; // s1
  int v76; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3B413 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&ClassBoardEffectPlayer_TypeInfo);
    sub_1C32C20(&Method_ClassBoardLine_PlayReleaseEffect__);
    sub_1C32C20(&IClassBoardLineModel_TypeInfo);
    sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C3B413 = 1;
  }
  v76 = 0;
  this->fields._LineModel_k__BackingField = setLineModel;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._LineModel_k__BackingField,
    (int32_t)setLineModel,
    (int32_t)method,
    v3);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  name = (UnityEngine_Object_o *)sub_1C32CC8(string___TypeInfo, 7);
  if ( !gameObject )
    goto LABEL_64;
  v8 = name;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0);
  if ( !v8 )
    goto LABEL_64;
  if ( !LODWORD(v8[1].klass) )
    goto LABEL_65;
  v8[1].monitor = name;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8[1].monitor, (int32_t)name, v9, v10);
  if ( LODWORD(v8[1].klass) <= 1 )
    goto LABEL_65;
  v13 = StringLiteral_16107/*"_"*/;
  v8[1].fields.m_CachedPtr = StringLiteral_16107/*"_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8[1].fields, v13, v11, v12);
  if ( !setLineModel )
    goto LABEL_64;
  klass = setLineModel->klass;
  v15 = *(unsigned __int16 *)&setLineModel->klass->_2.rank;
  if ( *(_WORD *)&setLineModel->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_12;
    }
    v17 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_12:
    v17 = sub_1C83438(setLineModel, IClassBoardLineModel_TypeInfo, 0);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v17)(
                                   setLineModel,
                                   *(_QWORD *)(v17 + 8));
  if ( !name )
    goto LABEL_64;
  v18 = name->klass;
  v19 = name;
  v20 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v21 = &v18->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_19;
    }
    v22 = (__int64)&v18->vtable + 16 * *v21;
  }
  else
  {
LABEL_19:
    v22 = sub_1C83438(name, IClassBoardSquareModel_TypeInfo, 0);
  }
  v76 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v76, 0);
  if ( LODWORD(v8[1].klass) <= 2
    || (v8[2].klass = (UnityEngine_Object_c *)name,
        sub_1C32BC4((CGThumbnailListItem_o *)&v8[2], (int32_t)name, v23, v24),
        LODWORD(v8[1].klass) <= 3) )
  {
LABEL_65:
    sub_1C32E84(name);
  }
  v27 = StringLiteral_16107/*"_"*/;
  v8[2].monitor = (void *)StringLiteral_16107/*"_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8[2].monitor, v27, v25, v26);
  v28 = setLineModel->klass;
  v29 = *(unsigned __int16 *)&setLineModel->klass->_2.rank;
  if ( *(_WORD *)&setLineModel->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v30 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_27;
    }
    v31 = (__int64)&v28->vtable[*v30 + 1];
  }
  else
  {
LABEL_27:
    v31 = sub_1C83438(setLineModel, IClassBoardLineModel_TypeInfo, 1);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v31)(
                                   setLineModel,
                                   *(_QWORD *)(v31 + 8));
  if ( !name )
LABEL_64:
    sub_1C32E7C(name);
  v32 = name->klass;
  v33 = name;
  v34 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v35 = &v32->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v35 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_34;
    }
    v36 = (__int64)&v32->vtable + 16 * *v35;
  }
  else
  {
LABEL_34:
    v36 = sub_1C83438(name, IClassBoardSquareModel_TypeInfo, 0);
  }
  v76 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v76, 0);
  if ( LODWORD(v8[1].klass) <= 4 )
    goto LABEL_65;
  v8[2].fields.m_CachedPtr = (intptr_t)name;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8[2].fields, (int32_t)name, v37, v38);
  if ( LODWORD(v8[1].klass) <= 5 )
    goto LABEL_65;
  v41 = StringLiteral_16107/*"_"*/;
  v8[3].klass = (UnityEngine_Object_c *)StringLiteral_16107/*"_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8[3], v41, v39, v40);
  v42 = setLineModel->klass;
  v43 = *(unsigned __int16 *)&setLineModel->klass->_2.rank;
  if ( *(_WORD *)&setLineModel->klass->_2.rank )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v44 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_42;
    }
    v45 = (__int64)&v42->vtable[*v44];
  }
  else
  {
LABEL_42:
    v45 = sub_1C83438(setLineModel, IClassBoardLineModel_TypeInfo, 0);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v45)(
                                   setLineModel,
                                   *(_QWORD *)(v45 + 8));
  if ( !name )
    goto LABEL_64;
  v46 = name->klass;
  v47 = name;
  v48 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v49 = (IClassBoardSquareModel_c **)&v46->_1.interfaceOffsets->offset;
    while ( *(v49 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v48;
      v49 += 2;
      if ( !v48 )
        goto LABEL_49;
    }
    v50 = (__int64)(&v46->vtable._1_Finalize + *(_DWORD *)v49);
  }
  else
  {
LABEL_49:
    v50 = sub_1C83438(name, IClassBoardSquareModel_TypeInfo, 1);
  }
  v76 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v50)(v47, *(_QWORD *)(v50 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v76, 0);
  if ( LODWORD(v8[1].klass) <= 6 )
    goto LABEL_65;
  v8[3].monitor = name;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8[3].monitor, (int32_t)name, v51, v52);
  v53 = System_String__Concat_63559060((System_String_array *)v8, 0);
  UnityEngine_Object__set_name(gameObject, v53, 0);
  ClassBoardLine__UpdateLine(this, v54);
  name = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !name )
    goto LABEL_64;
  v55 = UnityEngine_Object__get_name(name, 0);
  v56 = sub_1C32E6C(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v56, 0);
  *(_QWORD *)(v56 + 16) = v55;
  sub_1C32BC4((CGThumbnailListItem_o *)(v56 + 16), (int32_t)v55, v57, v58);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v56;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.releaseEffectPlayer, v56, v59, v60);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v62 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v62, (Il2CppObject *)this, Method_ClassBoardLine_PlayReleaseEffect__, 0);
  if ( !releaseEffectPlayer )
    goto LABEL_64;
  releaseEffectPlayer->fields.playCallback = v62;
  sub_1C32BC4((CGThumbnailListItem_o *)&releaseEffectPlayer->fields.playCallback, (int32_t)v62, v63, v64);
  effectObjects = this->fields.effectObjects;
  v76 = 0;
  if ( !effectObjects )
    goto LABEL_64;
  max_length = effectObjects->max_length;
  if ( max_length >= 1 )
  {
    v67 = 0;
    while ( v67 < (unsigned int)max_length )
    {
      v68 = &effectObjects->obj.klass + v67;
      v69 = (UnityEngine_GameObject_o *)v68[4];
      if ( !v69 )
        goto LABEL_64;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v68[4], 0);
      lineLength = this->fields.lineLength;
      v72 = transform;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v69, 0);
      if ( !name )
        goto LABEL_64;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)name, 0);
      y = localScale.fields.y;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v69, 0);
      if ( !name )
        goto LABEL_64;
      v78 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)name, 0);
      if ( !v72 )
        goto LABEL_64;
      v74 = lineLength;
      v75 = y;
      UnityEngine_Transform__set_localScale(v72, v78, 0);
      v67 = v76 + 1;
      v76 = v67;
      max_length = effectObjects->max_length;
      if ( v67 >= max_length )
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
  if ( (byte_4C3B416 & 1) == 0 )
  {
    sub_1C32C20(&IClassBoardLineModel_TypeInfo);
    this = (ClassBoardLine_o *)sub_1C32C20(&IClassBoardSquareModel_TypeInfo);
    byte_4C3B416 = 1;
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
    v7 = sub_1C83438(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0);
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
    v12 = sub_1C83438(this, IClassBoardSquareModel_TypeInfo, 3);
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
    v21 = sub_1C83438(v16, IClassBoardLineModel_TypeInfo, 1);
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
    v26 = sub_1C83438(this, IClassBoardSquareModel_TypeInfo, 3);
  }
  (*(void (__fastcall **)(ClassBoardLine_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  v30 = v29;
  if ( !byte_4C313CF )
  {
    xb = v27.n64_u32[0];
    v80 = v28;
    sub_1C32C20(&System_Math_TypeInfo);
    v28 = v80;
    v27.n64_u32[0] = xb;
    byte_4C313CF = 1;
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
  if ( !byte_4C313D4 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    v27.n64_u64[0] = x.n64_u64[0];
    v31.n64_u64[0] = v88.n64_u64[0];
    byte_4C313D4 = 1;
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
    if ( !byte_4C313D1 )
    {
      this = (ClassBoardLine_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
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
    v42 = sub_1C83438(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0);
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
    v53 = sub_1C83438(v2->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1);
  }
  v54 = v18 - v51;
  v55.n64_u64[0] = vsub_f32(v88, v50).n64_u64[0];
  v56 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v53)(
                                      v46,
                                      *(_QWORD *)(v53 + 8));
  v59 = ClassBoardLine__GetSquareTypeOffset(v2, v56, v57) * 0.5;
  v60.n64_u64[0] = vadd_f32(x, vmul_n_f32(v35, v59)).n64_u64[0];
  v61 = v30 + (float)(z * v59);
  if ( !byte_4C313D3 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D3 = 1;
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
    sub_1C32E7C(this);
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
  if ( !byte_4C31A98 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C31A98 = 1;
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
  if ( !byte_4C313D4 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D4 = 1;
  }
  this = (ClassBoardLine_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v73 = v89.n64_f32[0];
  if ( v89.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4C313D1 )
    {
      this = (ClassBoardLine_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      v73 = v89.n64_f32[0];
      byte_4C313D1 = 1;
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C3B41B & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardLine__WaitAnimationFinished_d__40_TypeInfo);
    byte_4C3B41B = 1;
  }
  v7 = sub_1C32E6C(ClassBoardLine__WaitAnimationFinished_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = name;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 40), (int32_t)name, v10, v11);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 48), (int32_t)endCallback, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


void ClassBoardLine___PlayGrandToClassTransition_b__30_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1C32E7C(0);
  SimpleAnimation__Stop(simpleAnimation, 0);
}


void ClassBoardLine___PlayReleaseEffect_b__35_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v4; // x1

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0) )
  {
    sub_1C32E7C(simpleAnimation);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, v4);
}


void ClassBoardLine___PlayReleaseEffect_b__35_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v4; // x1

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0) )
  {
    sub_1C32E7C(simpleAnimation);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, v4);
}


void ClassBoardLine___PlayReleaseEffect_b__35_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v4; // x1

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0) )
  {
    sub_1C32E7C(simpleAnimation);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, v4);
}


void ClassBoardLine___PlayReleaseEffect_b__35_3(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v4; // x1

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation
    || (SimpleAnimation__Stop(simpleAnimation, 0),
        (simpleAnimation = (SimpleAnimation_o *)this->fields.releaseEffectPlayer) == 0) )
  {
    sub_1C32E7C(simpleAnimation);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, v4);
}


void ClassBoardLine___PlayTransition_b__29_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1C32E7C(0);
  SimpleAnimation__Stop(simpleAnimation, 0);
}


void ClassBoardLine___PlayTransition_b__29_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1C32E7C(0);
  SimpleAnimation__Stop(simpleAnimation, 0);
}


void ClassBoardLine___PlayTransition_b__29_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1C32E7C(0);
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
  const MethodInfo *v3; // x3

  this->fields._LineModel_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._LineModel_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  const MethodInfo *v7; // x3
  struct SimpleAnimation_State_o *state_5__2; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v10; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v12; // x0
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
  if ( (byte_4C3B41D & 1) == 0 )
  {
    this = (ClassBoardLine__WaitAnimationFinished_d__40_o *)sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C3B41D = 1;
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
    sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._state_5__2, (int32_t)State, v6, v7);
LABEL_9:
    state_5__2 = v2->fields._state_5__2;
    if ( !state_5__2 )
      goto LABEL_26;
    klass = state_5__2->klass;
    v10 = *(unsigned __int16 *)&state_5__2->klass->_2.rank;
    if ( *(_WORD *)&state_5__2->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v10;
        p_offset += 2;
        if ( !v10 )
          goto LABEL_14;
      }
      v12 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13];
    }
    else
    {
LABEL_14:
      v12 = sub_1C83438(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 13);
    }
    if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v12)(state_5__2, *(_QWORD *)(v12 + 8)) <= 0.0 )
    {
LABEL_26:
      ActionExtensions__Call(v2->fields.endCallback, 0);
      return 0;
    }
    v13 = v2->fields._state_5__2;
    if ( v13 )
    {
      v14 = v13->klass;
      v15 = *(unsigned __int16 *)&v13->klass->_2.rank;
      if ( *(_WORD *)&v13->klass->_2.rank )
      {
        v16 = (SimpleAnimation_State_c **)&v14->_1.interfaceOffsets->offset;
        while ( *(v16 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v15;
          v16 += 2;
          if ( !v15 )
            goto LABEL_22;
        }
        v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 5];
      }
      else
      {
LABEL_22:
        v17 = sub_1C83438(v2->fields._state_5__2, SimpleAnimation_State_TypeInfo, 5);
      }
      if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) < 1.0 )
      {
        v2->fields.__2__current = 0;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C32BC4(p__2__current, 0, v18, v19);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_26;
    }
LABEL_28:
    sub_1C32E7C(this);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_ClassBoardLine__WaitAnimationFinished_d__40_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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