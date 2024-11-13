void __fastcall ClassBoardLine___ctor(ClassBoardLine_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t v21; // x1
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7

  if ( (byte_4B196D1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3368/*"BrightTurnTransition"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_3365/*"BrightTurn"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_3369/*"BrightTurnTransitionRoadOn"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3370/*"BrightTurnUnLock"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3366/*"BrightTurnRoadOn"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3367/*"BrightTurnRoadOnUnLock"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3319/*"BlackOutTransition"*/, v19, v20);
    byte_4B196D1 = 1;
  }
  v21 = StringLiteral_3365/*"BrightTurn"*/;
  this->fields.animNameBrightTurn = (struct System_String_o *)StringLiteral_3365/*"BrightTurn"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animNameBrightTurn, v21, v2, v3, v4, v5, v6, v7);
  v22 = StringLiteral_3366/*"BrightTurnRoadOn"*/;
  this->fields.animNameBrightTurnRoadOn = (struct System_String_o *)StringLiteral_3366/*"BrightTurnRoadOn"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animNameBrightTurnRoadOn, v22, v23, v24, v25, v26, v27, v28);
  v29 = StringLiteral_3370/*"BrightTurnUnLock"*/;
  this->fields.animNameBrightTurnUnlock = (struct System_String_o *)StringLiteral_3370/*"BrightTurnUnLock"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animNameBrightTurnUnlock, v29, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_3367/*"BrightTurnRoadOnUnLock"*/;
  this->fields.animNameBrightTurnRoadOnUnlock = (struct System_String_o *)StringLiteral_3367/*"BrightTurnRoadOnUnLock"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animNameBrightTurnRoadOnUnlock,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = StringLiteral_3368/*"BrightTurnTransition"*/;
  this->fields.animNameBrightTurnTransition = (struct System_String_o *)StringLiteral_3368/*"BrightTurnTransition"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animNameBrightTurnTransition,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = StringLiteral_3369/*"BrightTurnTransitionRoadOn"*/;
  this->fields.animNameBrightTurnTransitionRoadOn = (struct System_String_o *)StringLiteral_3369/*"BrightTurnTransitionRoadOn"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animNameBrightTurnTransitionRoadOn,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v57 = StringLiteral_3319/*"BlackOutTransition"*/;
  this->fields.animNameBlackOutTransition = (struct System_String_o *)StringLiteral_3319/*"BlackOutTransition"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animNameBlackOutTransition, v57, v58, v59, v60, v61, v62, v63);
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
  __int64 v2; // x2
  ClassBoardLine_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  __int64 v22; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  ClassBoardLine_c *v25; // x8
  ClassBoardLine_o *v26; // x20
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  struct IClassBoardLineModel_o *v32; // x20
  IClassBoardLineModel_c *v33; // x8
  __int64 v34; // x9
  IClassBoardLineModel_c **v35; // x10
  __int64 v36; // x0
  ClassBoardLine_c *v37; // x8
  ClassBoardLine_o *v38; // x20
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  System_Collections_Generic_List_object__o *v42; // x20
  struct IClassBoardLineModel_o *v43; // x20
  IClassBoardLineModel_c *v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  struct IClassBoardLineModel_o *v48; // x20
  IClassBoardLineModel_c *v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  ClassBoardLine_c *v53; // x8
  ClassBoardLine_o *v54; // x20
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  struct IClassBoardLineModel_o *v58; // x20
  IClassBoardLineModel_c *v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  ClassBoardLine_c *v63; // x8
  ClassBoardLine_o *v64; // x20
  __int64 v65; // x9
  int32_t *v66; // x10
  __int64 v67; // x0
  struct IClassBoardLineModel_o *v68; // x20
  IClassBoardLineModel_c *v69; // x8
  __int64 v70; // x9
  IClassBoardLineModel_c **v71; // x10
  __int64 v72; // x0
  ClassBoardLine_c *v73; // x8
  ClassBoardLine_o *v74; // x20
  __int64 v75; // x9
  int32_t *v76; // x10
  __int64 v77; // x0
  struct IClassBoardLineModel_o *v78; // x19
  IClassBoardLineModel_c *v79; // x8
  __int64 v80; // x9
  IClassBoardLineModel_c **v81; // x10
  __int64 v82; // x0
  ClassBoardLine_c *v83; // x8
  ClassBoardLine_o *v84; // x19
  __int64 v85; // x9
  int32_t *v86; // x10
  __int64 v87; // x0
  int32_t m_CancellationTokenSource; // w22
  int32_t v89; // w23
  _BOOL8 v90; // x0
  __int64 v91; // x1
  Il2CppObject *current; // x19
  Il2CppClass *v93; // x8
  __int64 v94; // x9
  int32_t *v95; // x10
  __int64 v96; // x0
  Il2CppClass *v97; // x8
  __int64 v98; // x9
  IClassBoardSquareModel_c **v99; // x10
  __int64 v100; // x0
  ClassBoardLine_c *v102; // x8
  ClassBoardLine_o *v103; // x20
  __int64 v104; // x9
  int32_t *v105; // x10
  __int64 v106; // x0
  struct IClassBoardLineModel_o *v107; // x20
  IClassBoardLineModel_c *v108; // x8
  __int64 v109; // x9
  IClassBoardLineModel_c **v110; // x10
  __int64 v111; // x0
  ClassBoardLine_c *v112; // x8
  ClassBoardLine_o *v113; // x20
  __int64 v114; // x9
  int32_t *v115; // x10
  __int64 v116; // x0
  struct IClassBoardLineModel_o *v117; // x20
  IClassBoardLineModel_c *v118; // x8
  __int64 v119; // x9
  int *v120; // x10
  __int64 v121; // x0
  ClassBoardLine_c *v122; // x8
  ClassBoardLine_o *v123; // x20
  __int64 v124; // x9
  int32_t *v125; // x10
  __int64 v126; // x0
  struct IClassBoardLineModel_o *v127; // x19
  IClassBoardLineModel_c *v128; // x8
  __int64 v129; // x9
  IClassBoardLineModel_c **v130; // x10
  __int64 v131; // x0
  ClassBoardLine_c *v132; // x8
  ClassBoardLine_o *v133; // x19
  __int64 v134; // x9
  int32_t *v135; // x10
  __int64 v136; // x0
  System_Collections_Generic_List_Enumerator_object__o v137; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v138; // [xsp+20h] [xbp-60h] BYREF
  ClassBoardLine_o *v139; // [xsp+48h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4B196CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__get_Current__, v6, v7);
    sub_1BCA7E0(&IClassBoardLineModel_TypeInfo, v8, v9);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v16, v17);
    this = (ClassBoardLine_o *)sub_1BCA7E0(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v18, v19);
    byte_4B196CE = 1;
  }
  v139 = 0LL;
  memset(&v138, 0, sizeof(v138));
  LineModel_k__BackingField = v3->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_180;
  klass = LineModel_k__BackingField->klass;
  v22 = *(unsigned __int16 *)(&LineModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&LineModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_180;
  v25 = this->klass;
  v26 = this;
  v27 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v28 = &v25->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v28 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_15;
    }
    v29 = (__int64)(&v25[1]._1.gc_desc + 2 * *v28);
  }
  else
  {
LABEL_15:
    v29 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_33;
  v32 = v3->fields._LineModel_k__BackingField;
  if ( !v32 )
    goto LABEL_180;
  v33 = v32->klass;
  v34 = *(unsigned __int16 *)(&v32->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v32->klass->_2.bitflags2 + 3) )
  {
    v35 = (IClassBoardLineModel_c **)&v33->_1.interfaceOffsets->offset;
    while ( *(v35 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v34;
      v35 += 2;
      if ( !v34 )
        goto LABEL_23;
    }
    v36 = (__int64)&v33->vtable[*(_DWORD *)v35 + 1].method;
  }
  else
  {
LABEL_23:
    v36 = sub_1C1C7C0(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v36)(
                               v32,
                               *(_QWORD *)(v36 + 8));
  if ( !this )
    goto LABEL_180;
  v37 = this->klass;
  v38 = this;
  v39 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v40 = &v37->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v40 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_30;
    }
    v41 = (__int64)(&v37[1]._1.gc_desc + 2 * *v40);
  }
  else
  {
LABEL_30:
    v41 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_33:
    v42 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                         method,
                                                         v30,
                                                         v31);
    System_Collections_Generic_List_object____ctor(
      v42,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    v139 = (ClassBoardLine_o *)v42;
    v43 = v3->fields._LineModel_k__BackingField;
    if ( v43 )
    {
      v44 = v43->klass;
      v45 = *(unsigned __int16 *)(&v43->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v43->klass->_2.bitflags2 + 3) )
      {
        v46 = &v44->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLineModel_c **)v46 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v45;
          v46 += 4;
          if ( !v45 )
            goto LABEL_38;
        }
        v47 = (__int64)&v44->vtable[*v46].method;
      }
      else
      {
LABEL_38:
        v47 = sub_1C1C7C0(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
      }
      this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v47)(
                                   v43,
                                   *(_QWORD *)(v47 + 8));
      if ( this )
      {
        v53 = this->klass;
        v54 = this;
        v55 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          v56 = &v53->_1.interfaceOffsets->offset;
          while ( *((IClassBoardSquareModel_c **)v56 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v55;
            v56 += 4;
            if ( !v55 )
              goto LABEL_51;
          }
          v57 = (__int64)(&v53[1]._1.gc_desc + 2 * *v56);
        }
        else
        {
LABEL_51:
          v57 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 5LL);
        }
        this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v57)(
                                     v54,
                                     *(_QWORD *)(v57 + 8));
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v58 = v3->fields._LineModel_k__BackingField;
          if ( !v58 )
            goto LABEL_180;
          v59 = v58->klass;
          v60 = *(unsigned __int16 *)(&v58->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v58->klass->_2.bitflags2 + 3) )
          {
            v61 = &v59->_1.interfaceOffsets->offset;
            while ( *((IClassBoardLineModel_c **)v61 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v60;
              v61 += 4;
              if ( !v60 )
                goto LABEL_59;
            }
            v62 = (__int64)&v59->vtable[*v61].method;
          }
          else
          {
LABEL_59:
            v62 = sub_1C1C7C0(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
          }
          this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v62)(
                                       v58,
                                       *(_QWORD *)(v62 + 8));
          if ( !this )
            goto LABEL_180;
          v63 = this->klass;
          v64 = this;
          v65 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
          {
            v66 = &v63->_1.interfaceOffsets->offset;
            while ( *((IClassBoardSquareModel_c **)v66 - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v65;
              v66 += 4;
              if ( !v65 )
                goto LABEL_66;
            }
            v67 = (__int64)(&v63[1]._1.implementedInterfaces + 2 * *v66);
          }
          else
          {
LABEL_66:
            v67 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 15LL);
          }
          this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v67)(
                                       v64,
                                       &v139,
                                       *(_QWORD *)(v67 + 8));
        }
        v68 = v3->fields._LineModel_k__BackingField;
        if ( v68 )
        {
          v69 = v68->klass;
          v70 = *(unsigned __int16 *)(&v68->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v68->klass->_2.bitflags2 + 3) )
          {
            v71 = (IClassBoardLineModel_c **)&v69->_1.interfaceOffsets->offset;
            while ( *(v71 - 1) != IClassBoardLineModel_TypeInfo )
            {
              --v70;
              v71 += 2;
              if ( !v70 )
                goto LABEL_74;
            }
            v72 = (__int64)&v69->vtable[*(_DWORD *)v71 + 1].method;
          }
          else
          {
LABEL_74:
            v72 = sub_1C1C7C0(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
          }
          this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v72)(
                                       v68,
                                       *(_QWORD *)(v72 + 8));
          if ( this )
          {
            v73 = this->klass;
            v74 = this;
            v75 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
            {
              v76 = &v73->_1.interfaceOffsets->offset;
              while ( *((IClassBoardSquareModel_c **)v76 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                --v75;
                v76 += 4;
                if ( !v75 )
                  goto LABEL_81;
              }
              v77 = (__int64)(&v73[1]._1.gc_desc + 2 * *v76);
            }
            else
            {
LABEL_81:
              v77 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 5LL);
            }
            this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v77)(
                                         v74,
                                         *(_QWORD *)(v77 + 8));
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v78 = v3->fields._LineModel_k__BackingField;
              if ( !v78 )
                goto LABEL_180;
              v79 = v78->klass;
              v80 = *(unsigned __int16 *)(&v78->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v78->klass->_2.bitflags2 + 3) )
              {
                v81 = (IClassBoardLineModel_c **)&v79->_1.interfaceOffsets->offset;
                while ( *(v81 - 1) != IClassBoardLineModel_TypeInfo )
                {
                  --v80;
                  v81 += 2;
                  if ( !v80 )
                    goto LABEL_89;
                }
                v82 = (__int64)&v79->vtable[*(_DWORD *)v81 + 1].method;
              }
              else
              {
LABEL_89:
                v82 = sub_1C1C7C0(v78, IClassBoardLineModel_TypeInfo, 1LL);
              }
              this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v82)(
                                           v78,
                                           *(_QWORD *)(v82 + 8));
              if ( !this )
                goto LABEL_180;
              v83 = this->klass;
              v84 = this;
              v85 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
              {
                v86 = &v83->_1.interfaceOffsets->offset;
                while ( *((IClassBoardSquareModel_c **)v86 - 1) != IClassBoardSquareModel_TypeInfo )
                {
                  --v85;
                  v86 += 4;
                  if ( !v85 )
                    goto LABEL_96;
                }
                v87 = (__int64)(&v83[1]._1.implementedInterfaces + 2 * *v86);
              }
              else
              {
LABEL_96:
                v87 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 15LL);
              }
              (*(void (__fastcall **)(ClassBoardLine_o *, ClassBoardLine_o **, _QWORD))v87)(
                v84,
                &v139,
                *(_QWORD *)(v87 + 8));
            }
            this = v139;
            if ( v139 )
            {
              m_CancellationTokenSource = (int32_t)v139->fields.m_CancellationTokenSource;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v137,
                (System_Collections_Generic_List_object__o *)v139,
                (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_IClassBoardSquareModel__GetEnumerator__);
              v89 = 0;
              v138 = v137;
              while ( 1 )
              {
                v90 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v138,
                        (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__MoveNext__);
                if ( !v90 )
                  break;
                current = v138.fields._current;
                if ( !v138.fields._current )
                  sub_1BCAA3C(v90, v91);
                v93 = v138.fields._current->klass;
                v94 = *(unsigned __int16 *)(&v138.fields._current->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&v138.fields._current->klass->_2.bitflags2 + 3) )
                {
                  v95 = &v93->_1.interfaceOffsets->offset;
                  while ( *((IClassBoardSquareModel_c **)v95 - 1) != IClassBoardSquareModel_TypeInfo )
                  {
                    --v94;
                    v95 += 4;
                    if ( !v94 )
                      goto LABEL_107;
                  }
                  v96 = (__int64)&v93->vtable[*v95 + 5].method;
                }
                else
                {
LABEL_107:
                  v96 = sub_1C1C7C0(v138.fields._current, IClassBoardSquareModel_TypeInfo, 5LL);
                }
                if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v96)(current, *(_QWORD *)(v96 + 8)) & 1) != 0 )
                {
                  --m_CancellationTokenSource;
                }
                else
                {
                  v97 = current->klass;
                  v98 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
                  {
                    v99 = (IClassBoardSquareModel_c **)&v97->_1.interfaceOffsets->offset;
                    while ( *(v99 - 1) != IClassBoardSquareModel_TypeInfo )
                    {
                      --v98;
                      v99 += 2;
                      if ( !v98 )
                        goto LABEL_114;
                    }
                    v100 = (__int64)&v97->vtable[*(_DWORD *)v99 + 13].method;
                  }
                  else
                  {
LABEL_114:
                    v100 = sub_1C1C7C0(current, IClassBoardSquareModel_TypeInfo, 13LL);
                  }
                  v89 += (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v100)(
                           current,
                           0LL,
                           *(_QWORD *)(v100 + 8)) & 1;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v138,
                (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_IClassBoardSquareModel__Dispose__);
              if ( !v89 )
                return 0;
              if ( v89 < m_CancellationTokenSource )
                return 1;
              return 2;
            }
          }
        }
      }
    }
    goto LABEL_180;
  }
  v48 = v3->fields._LineModel_k__BackingField;
  if ( !v48 )
    goto LABEL_180;
  v49 = v48->klass;
  v50 = *(unsigned __int16 *)(&v48->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v48->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v51 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_44;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_44:
    v52 = sub_1C1C7C0(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v52)(
                               v48,
                               *(_QWORD *)(v52 + 8));
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
        goto LABEL_129;
    }
    v106 = (__int64)(&v102[1]._1.events + 2 * *v105);
  }
  else
  {
LABEL_129:
    v106 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v106)(
                               v103,
                               0LL,
                               *(_QWORD *)(v106 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v107 = v3->fields._LineModel_k__BackingField;
    if ( !v107 )
      goto LABEL_180;
    v108 = v107->klass;
    v109 = *(unsigned __int16 *)(&v107->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v107->klass->_2.bitflags2 + 3) )
    {
      v110 = (IClassBoardLineModel_c **)&v108->_1.interfaceOffsets->offset;
      while ( *(v110 - 1) != IClassBoardLineModel_TypeInfo )
      {
        --v109;
        v110 += 2;
        if ( !v109 )
          goto LABEL_137;
      }
      v111 = (__int64)&v108->vtable[*(_DWORD *)v110 + 1].method;
    }
    else
    {
LABEL_137:
      v111 = sub_1C1C7C0(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
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
          goto LABEL_144;
      }
      v116 = (__int64)(&v112[1]._1.events + 2 * *v115);
    }
    else
    {
LABEL_144:
      v116 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 13LL);
    }
    this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v116)(
                                 v113,
                                 0LL,
                                 *(_QWORD *)(v116 + 8));
    if ( ((unsigned __int8)this & 1) != 0 )
      return 2;
  }
  v117 = v3->fields._LineModel_k__BackingField;
  if ( !v117 )
    goto LABEL_180;
  v118 = v117->klass;
  v119 = *(unsigned __int16 *)(&v117->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v117->klass->_2.bitflags2 + 3) )
  {
    v120 = &v118->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v120 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v119;
      v120 += 4;
      if ( !v119 )
        goto LABEL_152;
    }
    v121 = (__int64)&v118->vtable[*v120].method;
  }
  else
  {
LABEL_152:
    v121 = sub_1C1C7C0(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v121)(
                               v117,
                               *(_QWORD *)(v121 + 8));
  if ( !this )
    goto LABEL_180;
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
        goto LABEL_160;
    }
    v126 = (__int64)(&v122[1]._1.events + 2 * *v125);
  }
  else
  {
LABEL_160:
    v126 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v126)(
                               v123,
                               0LL,
                               *(_QWORD *)(v126 + 8));
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  v127 = v3->fields._LineModel_k__BackingField;
  if ( !v127 )
    goto LABEL_180;
  v128 = v127->klass;
  v129 = *(unsigned __int16 *)(&v127->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v127->klass->_2.bitflags2 + 3) )
  {
    v130 = (IClassBoardLineModel_c **)&v128->_1.interfaceOffsets->offset;
    while ( *(v130 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v129;
      v130 += 2;
      if ( !v129 )
        goto LABEL_168;
    }
    v131 = (__int64)&v128->vtable[*(_DWORD *)v130 + 1].method;
  }
  else
  {
LABEL_168:
    v131 = sub_1C1C7C0(v127, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v131)(
                               v127,
                               *(_QWORD *)(v131 + 8));
  if ( !this )
LABEL_180:
    sub_1BCAA3C(this, method);
  v132 = this->klass;
  v133 = this;
  v134 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v135 = &v132->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v135 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v134;
      v135 += 4;
      if ( !v134 )
        goto LABEL_176;
    }
    v136 = (__int64)(&v132[1]._1.events + 2 * *v135);
  }
  else
  {
LABEL_176:
    v136 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  return (*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD, _QWORD))v136)(v133, 0LL, *(_QWORD *)(v136 + 8)) & 1;
}


float __fastcall ClassBoardLine__GetSquareTypeOffset(
        ClassBoardLine_o *this,
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  ClassBoardLine_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  IClassBoardSquareModel_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  float *p_blankOffsetLength; // x8

  v4 = this;
  if ( (byte_4B196CF & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardLockModel_TypeInfo, squareModel, method);
    this = (ClassBoardLine_o *)sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v5, v6);
    byte_4B196CF = 1;
  }
  if ( !squareModel )
    sub_1BCAA3C(this, squareModel);
  klass = squareModel->klass;
  v8 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(squareModel, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    p_blankOffsetLength = &v4->fields.blankOffsetLength;
  }
  else if ( sub_1BCA91C(squareModel, IClassBoardLockModel_TypeInfo) )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t ConnectType; // w0
  const MethodInfo *v15; // x1
  ClassBoardEffectPlayer_o *releaseEffectPlayer; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_String_o *animNameBrightTurnRoadOnUnlock; // x20
  System_Action_o *v21; // x0
  __int64 *v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x3

  if ( (byte_4B196CD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardEffectPlayer_GetData_bool___, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardLine__PlayReleaseEffect_b__33_0__, v6, v7);
    sub_1BCA7E0(&Method_ClassBoardLine__PlayReleaseEffect_b__33_1__, v8, v9);
    sub_1BCA7E0(&Method_ClassBoardLine__PlayReleaseEffect_b__33_2__, v10, v11);
    sub_1BCA7E0(&Method_ClassBoardLine__PlayReleaseEffect_b__33_3__, v12, v13);
    byte_4B196CD = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      if ( ClassBoardEffectPlayer__GetData_bool_(
             releaseEffectPlayer,
             (const MethodInfo_2F06760 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOnUnlock;
        v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
        v22 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_2__;
      }
      else
      {
        animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnRoadOn;
        v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
        v22 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_3__;
      }
      goto LABEL_15;
    }
LABEL_16:
    sub_1BCAA3C(releaseEffectPlayer, v15);
  }
  if ( ConnectType != 1 )
  {
    releaseEffectPlayer = this->fields.releaseEffectPlayer;
    if ( releaseEffectPlayer )
    {
      ClassBoardEffectPlayer__End(releaseEffectPlayer, v15);
      return;
    }
    goto LABEL_16;
  }
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  if ( !releaseEffectPlayer )
    goto LABEL_16;
  if ( ClassBoardEffectPlayer__GetData_bool_(
         releaseEffectPlayer,
         (const MethodInfo_2F06760 *)Method_ClassBoardEffectPlayer_GetData_bool___) )
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurnUnlock;
    v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
    v22 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_0__;
  }
  else
  {
    animNameBrightTurnRoadOnUnlock = this->fields.animNameBrightTurn;
    v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
    v22 = &Method_ClassBoardLine__PlayReleaseEffect_b__33_1__;
  }
LABEL_15:
  v26 = v21;
  System_Action___ctor(v21, (Il2CppObject *)this, *v22, 0LL);
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
    sub_1BCAA3C(simpleAnimation, name);
  }
  SimpleAnimation__Play_64539336(simpleAnimation, name, 0LL);
  v9 = ClassBoardLine__WaitAnimationFinished(this, name, endCallback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall ClassBoardLine__PlayTransition(ClassBoardLine_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t ConnectType; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_String_o *animNameBrightTurnTransitionRoadOn; // x20
  System_Action_o *v15; // x0
  __int64 *v16; // x8
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x3

  if ( (byte_4B196CB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardLine__PlayTransition_b__28_0__, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardLine__PlayTransition_b__28_1__, v6, v7);
    sub_1BCA7E0(&Method_ClassBoardLine__PlayTransition_b__28_2__, v8, v9);
    byte_4B196CB = 1;
  }
  ConnectType = ClassBoardLine__GetConnectType(this, method);
  if ( ConnectType == 2 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransitionRoadOn;
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    v16 = &Method_ClassBoardLine__PlayTransition_b__28_1__;
  }
  else if ( ConnectType == 1 )
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBrightTurnTransition;
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    v16 = &Method_ClassBoardLine__PlayTransition_b__28_0__;
  }
  else
  {
    animNameBrightTurnTransitionRoadOn = this->fields.animNameBlackOutTransition;
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    v16 = &Method_ClassBoardLine__PlayTransition_b__28_2__;
  }
  v17 = v15;
  System_Action___ctor(v15, (Il2CppObject *)this, *v16, 0LL);
  ClassBoardLine__PlaySimpleAnimation(this, animNameBrightTurnTransitionRoadOn, v17, v18);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *name; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  IClassBoardLineModel_c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_c *v43; // x8
  UnityEngine_Object_o *v44; // x23
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  IClassBoardLineModel_c *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 v64; // x0
  UnityEngine_Object_c *v65; // x8
  UnityEngine_Object_o *v66; // x22
  __int64 v67; // x9
  int32_t *v68; // x10
  __int64 v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_String_o *v76; // x0
  const MethodInfo *v77; // x1
  System_String_o *v78; // x20
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  int64_t v82; // x21
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  struct ClassBoardEffectPlayer_o *releaseEffectPlayer; // x20
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  System_Action_o *v99; // x21
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  struct UnityEngine_GameObject_array *effectObjects; // x22
  int max_length; // w8
  int v108; // w9
  Il2CppClass **v109; // x8
  UnityEngine_GameObject_o *v110; // x21
  UnityEngine_Transform_o *transform; // x0
  float lineLength; // s8
  UnityEngine_Transform_o *v113; // x20
  float y; // s9
  int v115; // s2
  float v116; // s0
  float v117; // s1
  int v118; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B196CA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, setLineModel, method);
    sub_1BCA7E0(&ClassBoardEffectPlayer_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_ClassBoardLine_PlayReleaseEffect__, v12, v13);
    sub_1BCA7E0(&IClassBoardLineModel_TypeInfo, v14, v15);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v16, v17);
    sub_1BCA7E0(&string___TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v20, v21);
    byte_4B196CA = 1;
  }
  v118 = 0;
  this->fields._LineModel_k__BackingField = setLineModel;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._LineModel_k__BackingField,
    (int64_t)setLineModel,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  name = (UnityEngine_Object_o *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !gameObject )
    goto LABEL_49;
  v25 = name;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0LL);
  if ( !v25 )
    goto LABEL_49;
  if ( !LODWORD(v25[1].klass) )
    goto LABEL_50;
  v25[1].monitor = name;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25[1].monitor, (int64_t)name, v26, v27, v28, v29, v30, v31);
  if ( LODWORD(v25[1].klass) <= 1 )
    goto LABEL_50;
  v38 = StringLiteral_16290/*"_"*/;
  *(_QWORD *)&v25[1].fields.m_CachedPtr = StringLiteral_16290/*"_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25[1].fields, v38, v32, v33, v34, v35, v36, v37);
  if ( !setLineModel )
    goto LABEL_49;
  klass = setLineModel->klass;
  v40 = *(unsigned __int16 *)(&setLineModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&setLineModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v40;
      p_offset += 4;
      if ( !v40 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1C1C7C0(setLineModel, IClassBoardLineModel_TypeInfo, 0LL);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))p_method)(
                                   setLineModel,
                                   *(_QWORD *)(p_method + 8));
  if ( !name )
    goto LABEL_49;
  v43 = name->klass;
  v44 = name;
  v45 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
  {
    v46 = &v43->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v46 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_19;
    }
    v47 = (__int64)(&v43->vtable._0_Equals.method + 2 * *v46);
  }
  else
  {
LABEL_19:
    v47 = sub_1C1C7C0(name, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v118 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v47)(v44, *(_QWORD *)(v47 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v118, 0LL);
  if ( LODWORD(v25[1].klass) <= 2
    || (v25[2].klass = (UnityEngine_Object_c *)name,
        sub_1BCA784((PartyOrganizationUtility_o *)&v25[2], (int64_t)name, v48, v49, v50, v51, v52, v53),
        LODWORD(v25[1].klass) <= 3) )
  {
LABEL_50:
    sub_1BCAA44(name, v24);
  }
  v60 = StringLiteral_16290/*"_"*/;
  v25[2].monitor = (void *)StringLiteral_16290/*"_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25[2].monitor, v60, v54, v55, v56, v57, v58, v59);
  v61 = setLineModel->klass;
  v62 = *(unsigned __int16 *)(&setLineModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&setLineModel->klass->_2.bitflags2 + 3) )
  {
    v63 = &v61->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v63 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_27;
    }
    v64 = (__int64)&v61->vtable[*v63 + 1].method;
  }
  else
  {
LABEL_27:
    v64 = sub_1C1C7C0(setLineModel, IClassBoardLineModel_TypeInfo, 1LL);
  }
  name = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(IClassBoardLineModel_o *, _QWORD))v64)(
                                   setLineModel,
                                   *(_QWORD *)(v64 + 8));
  if ( !name )
LABEL_49:
    sub_1BCAA3C(name, v24);
  v65 = name->klass;
  v66 = name;
  v67 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
  {
    v68 = &v65->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v68 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_34;
    }
    v69 = (__int64)(&v65->vtable._0_Equals.method + 2 * *v68);
  }
  else
  {
LABEL_34:
    v69 = sub_1C1C7C0(name, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v118 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v69)(v66, *(_QWORD *)(v69 + 8));
  name = (UnityEngine_Object_o *)System_Int32__ToString((int32_t)&v118, 0LL);
  if ( LODWORD(v25[1].klass) <= 4 )
    goto LABEL_50;
  *(_QWORD *)&v25[2].fields.m_CachedPtr = name;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25[2].fields, (int64_t)name, v70, v71, v72, v73, v74, v75);
  v76 = System_String__Concat_62414748((System_String_array *)v25, 0LL);
  UnityEngine_Object__set_name(gameObject, v76, 0LL);
  ClassBoardLine__UpdateLine(this, v77);
  name = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !name )
    goto LABEL_49;
  v78 = UnityEngine_Object__get_name(name, 0LL);
  v82 = sub_1BCAA2C(ClassBoardEffectPlayer_TypeInfo, v79, v80, v81);
  System_Object___ctor((Il2CppObject *)v82, 0LL);
  *(_QWORD *)(v82 + 16) = v78;
  sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 16), (int64_t)v78, v83, v84, v85, v86, v87, v88);
  this->fields.releaseEffectPlayer = (struct ClassBoardEffectPlayer_o *)v82;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.releaseEffectPlayer, v82, v89, v90, v91, v92, v93, v94);
  releaseEffectPlayer = this->fields.releaseEffectPlayer;
  v99 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v96, v97, v98);
  System_Action___ctor(v99, (Il2CppObject *)this, Method_ClassBoardLine_PlayReleaseEffect__, 0LL);
  if ( !releaseEffectPlayer )
    goto LABEL_49;
  releaseEffectPlayer->fields.playCallback = v99;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&releaseEffectPlayer->fields.playCallback,
    (int64_t)v99,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  effectObjects = this->fields.effectObjects;
  v118 = 0;
  if ( !effectObjects )
    goto LABEL_49;
  max_length = effectObjects->max_length;
  if ( max_length >= 1 )
  {
    v108 = 0;
    while ( v108 < (unsigned int)max_length )
    {
      v109 = &effectObjects->obj.klass + v108;
      v110 = (UnityEngine_GameObject_o *)v109[4];
      if ( !v110 )
        goto LABEL_49;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v109[4], 0LL);
      lineLength = this->fields.lineLength;
      v113 = transform;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v110, 0LL);
      if ( !name )
        goto LABEL_49;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)name, 0LL);
      y = localScale.fields.y;
      name = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v110, 0LL);
      if ( !name )
        goto LABEL_49;
      *(UnityEngine_Vector3_o *)(&v115 - 2) = UnityEngine_Transform__get_localScale(
                                                (UnityEngine_Transform_o *)name,
                                                0LL);
      if ( !v113 )
        goto LABEL_49;
      v116 = lineLength;
      v117 = y;
      UnityEngine_Transform__set_localScale(v113, *(UnityEngine_Vector3_o *)(&v115 - 2), 0LL);
      v108 = v118 + 1;
      v118 = v108;
      max_length = effectObjects->max_length;
      if ( v108 >= max_length )
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
  __int64 v2; // x2
  ClassBoardLine_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct IClassBoardLineModel_o *LineModel_k__BackingField; // x20
  IClassBoardLineModel_c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  ClassBoardLine_c *v11; // x8
  ClassBoardLine_o *v12; // x20
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  unsigned int v16; // s0
  unsigned int v17; // s1
  float v18; // s2
  struct IClassBoardLineModel_o *v19; // x20
  IClassBoardLineModel_c *v20; // x8
  float v21; // s8
  __int64 v22; // x9
  IClassBoardLineModel_c **v23; // x10
  __int64 v24; // x0
  ClassBoardLine_c *v25; // x8
  ClassBoardLine_o *v26; // x20
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x2
  float32x2_t v31; // d0
  unsigned __int32 v32; // s1
  float v33; // s2
  float v34; // s9
  float32x2_t v35; // d1
  float32x2_t v36; // d12
  float v37; // s11
  int32x2_t v38; // d0
  float32x2_t v39; // d13
  float z; // s14
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct IClassBoardLineModel_o *v42; // x20
  IClassBoardLineModel_c *v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  IClassBoardSquareModel_o *v47; // x0
  const MethodInfo *v48; // x2
  float SquareTypeOffset; // s0
  struct IClassBoardLineModel_o *v50; // x20
  IClassBoardLineModel_c *v51; // x8
  float v52; // s0
  __int64 v53; // x9
  float32x2_t v54; // d11
  float v55; // s12
  IClassBoardLineModel_c **v56; // x10
  __int64 v57; // x0
  float v58; // s12
  float32x2_t v59; // d11
  IClassBoardSquareModel_o *v60; // x0
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x1
  __int64 v63; // x2
  float v64; // s0
  float32x2_t v65; // d8
  float v66; // s9
  float32x2_t v67; // d1
  float v68; // s9
  float v69; // s8
  unsigned __int64 v70; // d0
  int v71; // w20
  UnityEngine_Component_o **p_connectedOnSprite; // x25
  UnityEngine_Component_o *v73; // x20
  __int64 v74; // x1
  __int64 v75; // x2
  unsigned int v76; // w9
  int32_t v77; // w1
  ClassBoardLine_o *v78; // x20
  __int64 v79; // x2
  UnityEngine_Transform_o *transform; // x19
  float v81; // s3
  float32x2_t v82; // d0
  float v83; // s1
  struct UnityEngine_Vector3_StaticFields *v84; // x8
  float v85; // s2 OVERLAPPED
  unsigned __int64 v86; // d0 OVERLAPPED
  int v87; // s1
  unsigned __int32 v88; // [xsp+0h] [xbp-C0h]
  unsigned __int32 v89; // [xsp+0h] [xbp-C0h]
  unsigned int v90; // [xsp+10h] [xbp-B0h]
  unsigned __int32 xb; // [xsp+20h] [xbp-A0h]
  unsigned __int32 xc; // [xsp+20h] [xbp-A0h]
  float32x2_t x; // [xsp+20h] [xbp-A0h]
  float32x2_t xa; // [xsp+20h] [xbp-A0h]
  unsigned int v95; // [xsp+30h] [xbp-90h]
  float32x2_t v96; // [xsp+30h] [xbp-90h]
  int32x2_t v97; // [xsp+30h] [xbp-90h]
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B196CC & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardLineModel_TypeInfo, method, v2);
    this = (ClassBoardLine_o *)sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v4, v5);
    byte_4B196CC = 1;
  }
  LineModel_k__BackingField = v3->fields._LineModel_k__BackingField;
  if ( !LineModel_k__BackingField )
    goto LABEL_94;
  klass = LineModel_k__BackingField->klass;
  v8 = *(unsigned __int16 *)(&LineModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&LineModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)p_offset - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))p_method)(
                               LineModel_k__BackingField,
                               *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_94;
  v11 = this->klass;
  v12 = this;
  v13 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_15;
    }
    v15 = (__int64)(&v11->vtable._3_ToString.method + 2 * *v14);
  }
  else
  {
LABEL_15:
    v15 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(ClassBoardLine_o *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8));
  v19 = v3->fields._LineModel_k__BackingField;
  if ( !v19 )
    goto LABEL_94;
  v20 = v19->klass;
  v21 = v18;
  v95 = v16;
  v22 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
  v90 = v17;
  if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
  {
    v23 = (IClassBoardLineModel_c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v22;
      v23 += 2;
      if ( !v22 )
        goto LABEL_22;
    }
    v24 = (__int64)&v20->vtable[*(_DWORD *)v23 + 1].method;
  }
  else
  {
LABEL_22:
    v24 = sub_1C1C7C0(v19, IClassBoardLineModel_TypeInfo, 1LL);
  }
  this = (ClassBoardLine_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v24)(
                               v19,
                               *(_QWORD *)(v24 + 8));
  if ( !this )
    goto LABEL_94;
  v25 = this->klass;
  v26 = this;
  v27 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v28 = &v25->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v28 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)(&v25->vtable._3_ToString.method + 2 * *v28);
  }
  else
  {
LABEL_29:
    v29 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 3LL);
  }
  (*(void (__fastcall **)(ClassBoardLine_o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  v34 = v33;
  if ( !byte_4B109BF )
  {
    xb = v31.n64_u32[0];
    v88 = v32;
    sub_1BCA7E0(&System_Math_TypeInfo, method, v30);
    v32 = v88;
    v31.n64_u32[0] = xb;
    byte_4B109BF = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    xc = v31.n64_u32[0];
    v89 = v32;
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
    v32 = v89;
    v31.n64_u32[0] = xc;
  }
  v31.n64_u32[1] = v32;
  v35.n64_u64[0] = __PAIR64__(v90, v95);
  x.n64_u64[0] = v31.n64_u64[0];
  v96.n64_u64[0] = __PAIR64__(v90, v95);
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v30);
    v31.n64_u64[0] = x.n64_u64[0];
    v35.n64_u64[0] = v96.n64_u64[0];
    byte_4B109C4 = 1;
  }
  this = (ClassBoardLine_o *)System_Math_TypeInfo;
  v36.n64_u64[0] = vsub_f32(v31, v35).n64_u64[0];
  v37 = v34 - v21;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v38.n64_u64[0] = vmul_f32(v36, v36).n64_u64[0];
  v38.n64_f32[0] = sqrtf((float)(v37 * v37) + vaddv_f32(v38));
  if ( v38.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      this = (ClassBoardLine_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v30);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v39.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v39.n64_u64[0] = vdiv_f32(v36, vdup_lane_s32(v38, 0)).n64_u64[0];
    z = v37 / v38.n64_f32[0];
  }
  v42 = v3->fields._LineModel_k__BackingField;
  if ( !v42 )
    goto LABEL_94;
  v43 = v42->klass;
  v44 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLineModel_c **)v45 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_49;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_49:
    v46 = sub_1C1C7C0(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 0LL);
  }
  v47 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v46)(
                                      v42,
                                      *(_QWORD *)(v46 + 8));
  SquareTypeOffset = ClassBoardLine__GetSquareTypeOffset(v3, v47, v48);
  v50 = v3->fields._LineModel_k__BackingField;
  if ( !v50 )
    goto LABEL_94;
  v51 = v50->klass;
  v52 = SquareTypeOffset * 0.5;
  v53 = *(unsigned __int16 *)(&v50->klass->_2.bitflags2 + 3);
  v54.n64_u64[0] = vmul_n_f32(v39, v52).n64_u64[0];
  v55 = z * v52;
  if ( *(_WORD *)(&v50->klass->_2.bitflags2 + 3) )
  {
    v56 = (IClassBoardLineModel_c **)&v51->_1.interfaceOffsets->offset;
    while ( *(v56 - 1) != IClassBoardLineModel_TypeInfo )
    {
      --v53;
      v56 += 2;
      if ( !v53 )
        goto LABEL_56;
    }
    v57 = (__int64)&v51->vtable[*(_DWORD *)v56 + 1].method;
  }
  else
  {
LABEL_56:
    v57 = sub_1C1C7C0(v3->fields._LineModel_k__BackingField, IClassBoardLineModel_TypeInfo, 1LL);
  }
  v58 = v21 - v55;
  v59.n64_u64[0] = vsub_f32(v96, v54).n64_u64[0];
  v60 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(struct IClassBoardLineModel_o *, _QWORD))v57)(
                                      v50,
                                      *(_QWORD *)(v57 + 8));
  v64 = ClassBoardLine__GetSquareTypeOffset(v3, v60, v61) * 0.5;
  v65.n64_u64[0] = vadd_f32(x, vmul_n_f32(v39, v64)).n64_u64[0];
  v66 = v34 + (float)(z * v64);
  if ( !byte_4B109C3 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v62, v63);
    byte_4B109C3 = 1;
  }
  v67.n64_u64[0] = vsub_f32(v65, v59).n64_u64[0];
  v68 = v66 - v58;
  xa.n64_u64[0] = v67.n64_u64[0];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v62);
    v67.n64_u64[0] = xa.n64_u64[0];
  }
  v69 = v67.n64_f32[1];
  v70 = vmul_f32(v67, v67).n64_u64[0];
  *(float *)&v70 = sqrtf((float)(v68 * v68) + (float)(*(float *)&v70 + vmuls_lane_f32(v67.n64_f32[1], v67, 1)));
  v97.n64_u64[0] = v70;
  LODWORD(v3->fields.lineLength) = v70;
  this = (ClassBoardLine_o *)ClassBoardLine__GetConnectType(v3, v62);
  if ( !v3->fields.notConnectedSprite )
    goto LABEL_94;
  v71 = (int)this;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)v3->fields.notConnectedSprite,
                               0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (ClassBoardLine_o *)v3->fields.connectedSprite) == 0LL)
    || (this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        p_connectedOnSprite = (UnityEngine_Component_o **)&v3->fields.connectedOnSprite,
        (this = (ClassBoardLine_o *)v3->fields.connectedOnSprite) == 0LL)
    || (this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_94:
    sub_1BCAA3C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !v71 )
  {
LABEL_71:
    p_connectedOnSprite = (UnityEngine_Component_o **)&v3->fields.notConnectedSprite;
    goto LABEL_73;
  }
  if ( v71 != 1 )
  {
    if ( v71 == 2 )
      goto LABEL_73;
    goto LABEL_71;
  }
  p_connectedOnSprite = (UnityEngine_Component_o **)&v3->fields.connectedSprite;
LABEL_73:
  v73 = *p_connectedOnSprite;
  if ( !*p_connectedOnSprite )
    goto LABEL_94;
  this = (ClassBoardLine_o *)UnityEngine_Component__get_gameObject(*p_connectedOnSprite, 0LL);
  if ( !this )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v74, v75);
    byte_4B1103A = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v74);
  v76 = vcvtps_s32_f32(v97.n64_f32[0]);
  v77 = ceilf(v97.n64_f32[0]) == INFINITY ? 0x80000000 : v76;
  UIWidget__set_width((UIWidget_o *)v73, v77, 0LL);
  this = (ClassBoardLine_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
  if ( !this )
    goto LABEL_94;
  v78 = this;
  v98.fields.z = atan2f(v69, xa.n64_f32[0]) * 57.296;
  v98.fields.x = 0.0;
  v98.fields.y = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)v78, v98, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v79);
    byte_4B109C4 = 1;
  }
  this = (ClassBoardLine_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v81 = v97.n64_f32[0];
  if ( v97.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      this = (ClassBoardLine_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v79);
      v81 = v97.n64_f32[0];
      byte_4B109C1 = 1;
    }
    v84 = UnityEngine_Vector3_TypeInfo->static_fields;
    v82.n64_u64[0] = *(unsigned __int64 *)&v84->zeroVector.fields.x;
    v83 = v84->zeroVector.fields.z;
  }
  else
  {
    v82.n64_u64[0] = vdiv_f32(xa, vdup_lane_s32(v97, 0)).n64_u64[0];
    v83 = v68 / v97.n64_f32[0];
  }
  if ( !transform )
    goto LABEL_94;
  v85 = v58 + (float)((float)(v81 * 0.5) * v83);
  v86 = vadd_f32(v59, vmul_n_f32(v82, v81 * 0.5)).n64_u64[0];
  v87 = HIDWORD(v86);
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v85 - 2), 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardLine__WaitAnimationFinished(
        ClassBoardLine_o *this,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B196D0 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo, name, endCallback);
    byte_4B196D0 = 1;
  }
  v7 = sub_1BCAA2C(ClassBoardLine__WaitAnimationFinished_d__37_TypeInfo, name, endCallback, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)name, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = endCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)endCallback, v20, v21, v22, v23, v24, v25);
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
    sub_1BCAA3C(simpleAnimation, method);
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
    sub_1BCAA3C(simpleAnimation, method);
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
    sub_1BCAA3C(simpleAnimation, method);
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
    sub_1BCAA3C(simpleAnimation, method);
  }
  ClassBoardEffectPlayer__End((ClassBoardEffectPlayer_o *)simpleAnimation, method);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_0(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1BCAA3C(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_1(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1BCAA3C(0LL, method);
  SimpleAnimation__Stop(simpleAnimation, 0LL);
}


void __fastcall ClassBoardLine___PlayTransition_b__28_2(ClassBoardLine_o *this, const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    sub_1BCAA3C(0LL, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._LineModel_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._LineModel_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  __int64 v2; // x2
  ClassBoardLine__WaitAnimationFinished_d__37_o *v3; // x19
  int32_t _1__state; // w8
  struct ClassBoardLine_o *_4__this; // x8
  SimpleAnimation_State_o *State; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct SimpleAnimation_State_o *state_5__2; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  struct SimpleAnimation_State_o *v18; // x20
  SimpleAnimation_State_c *v19; // x8
  __int64 v20; // x9
  SimpleAnimation_State_c **v21; // x10
  __int64 v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_4B196D2 & 1) == 0 )
  {
    this = (ClassBoardLine__WaitAnimationFinished_d__37_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, method, v2);
    byte_4B196D2 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    this = (ClassBoardLine__WaitAnimationFinished_d__37_o *)_4__this->fields.simpleAnimation;
    if ( !this )
      goto LABEL_28;
    State = SimpleAnimation__GetState((SimpleAnimation_o *)this, v3->fields.name, 0LL);
    v3->fields._state_5__2 = State;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._state_5__2, (int64_t)State, v7, v8, v9, v10, v11, v12);
LABEL_9:
    state_5__2 = v3->fields._state_5__2;
    if ( !state_5__2 )
      goto LABEL_26;
    klass = state_5__2->klass;
    v15 = *(unsigned __int16 *)(&state_5__2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&state_5__2->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v15;
        p_offset += 2;
        if ( !v15 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C1C7C0(v3->fields._state_5__2, SimpleAnimation_State_TypeInfo, 13LL);
    }
    if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
           state_5__2,
           *(_QWORD *)(p_method + 8)) <= 0.0 )
    {
LABEL_26:
      ActionExtensions__Call(v3->fields.endCallback, 0LL);
      return 0;
    }
    v18 = v3->fields._state_5__2;
    if ( v18 )
    {
      v19 = v18->klass;
      v20 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
      {
        v21 = (SimpleAnimation_State_c **)&v19->_1.interfaceOffsets->offset;
        while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v20;
          v21 += 2;
          if ( !v20 )
            goto LABEL_22;
        }
        v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 5].method;
      }
      else
      {
LABEL_22:
        v22 = sub_1C1C7C0(v3->fields._state_5__2, SimpleAnimation_State_TypeInfo, 5LL);
      }
      if ( (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) < 1.0 )
      {
        v3->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(p__2__current, 0LL, v23, v24, v25, v26, v27, v28);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      goto LABEL_26;
    }
LABEL_28:
    sub_1BCAA3C(this, method);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ClassBoardLine__WaitAnimationFinished_d__37_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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