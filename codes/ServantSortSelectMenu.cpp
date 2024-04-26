void __fastcall ServantSortSelectMenu___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  ListViewSort_o *v9; // x19
  struct ServantSortSelectMenu_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  ListViewSort_o *v17; // x19
  struct ServantSortSelectMenu_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_434FEDC & 1) == 0 )
  {
    sub_B70694(&ListViewSort_TypeInfo);
    sub_B70694(&ServantSortSelectMenu_TypeInfo);
    sub_B70694(&StringLiteral_12899/*"ServantSortSelect1"*/);
    sub_B70694(&StringLiteral_12900/*"ServantSortSelect2"*/);
    sub_B70694(&StringLiteral_12901/*"ServantSortSelect4"*/);
    byte_434FEDC = 1;
  }
  v1 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
  ListViewSort___ctor_33980040(v1, (System_String_o *)StringLiteral_12899/*"ServantSortSelect1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantSortSelectMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
  ListViewSort___ctor_33980040(v9, (System_String_o *)StringLiteral_12900/*"ServantSortSelect2"*/, 3, 0, 0LL);
  v10 = ServantSortSelectMenu_TypeInfo->static_fields;
  v10->commonServantEquipSortInfo = v9;
  sub_B70630(
    (BattleServantConfConponent_o *)&v10->commonServantEquipSortInfo,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
  ListViewSort___ctor_33980040(v17, (System_String_o *)StringLiteral_12901/*"ServantSortSelect4"*/, 3, 0, 0LL);
  v18 = ServantSortSelectMenu_TypeInfo->static_fields;
  v18->commandCodeSortInfo = v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&v18->commandCodeSortInfo,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void __fastcall ServantSortSelectMenu___ctor(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_VoiceCondType_Type__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7

  if ( (byte_434FEDB & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
    sub_B70694(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
    byte_434FEDB = 1;
  }
  this->fields.ShortDispSortButtonSpace = (struct UnityEngine_Vector2_o)0x40A0000041200000LL;
  v3 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B70764(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v3,
    (const MethodInfo_30B8454 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v3 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    3,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    10,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    4,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    7,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    5,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    6,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    15,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    16,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    2,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    14,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    1,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    8,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantBaseSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.servantBaseSelectList,
    (System_Int32_array **)v3,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B70764(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v12,
    (const MethodInfo_30B8454 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v12 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    3,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    10,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    4,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    7,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    5,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    6,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    15,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    16,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    2,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    14,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    1,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    8,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    25,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.fatigureSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v12;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.fatigureSelectList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B70764(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v19,
    (const MethodInfo_30B8454 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v19 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    3,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    10,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    4,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    7,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    5,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    6,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    15,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    16,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    2,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    14,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    1,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    8,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    28,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.buddySelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v19;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.buddySelectList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B70764(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v26,
    (const MethodInfo_30B8454 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v26 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    3,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    10,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    4,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    7,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    2,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    5,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    6,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    14,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    1,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    8,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v26;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.servantSelectList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B70764(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v33,
    (const MethodInfo_30B8454 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v33 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v33,
    3,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v33,
    5,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v33,
    6,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v33,
    7,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v33,
    2,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v33,
    14,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v33,
    1,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v33,
    24,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantEquipSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v33;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.servantEquipSelectList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B70764(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v40,
    (const MethodInfo_30B8454 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v40 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    8,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    3,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    19,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    20,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    21,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    22,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    23,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    2,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantCostumeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v40;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.servantCostumeSelectList,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B70764(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v47,
    (const MethodInfo_30B8454 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v47 )
LABEL_14:
    sub_B7076C(v4, v5);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v47,
    2,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v47,
    14,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v47,
    1,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.commandCodeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v47;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCodeSelectList,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSortSelectMenu__Callback(ServantSortSelectMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantSortSelectMenu_CallbackFunc_o *callbackFunc; // x19
  BattleServantConfConponent_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B70630(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantSortSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall ServantSortSelectMenu__ChangeButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  switch ( this->fields.kind )
  {
    case 0:
    case 1:
    case 3:
      ServantSortSelectMenu__SetAllButtonSelect(this, method);
      break;
    case 2:
    case 4:
      ServantSortSelectMenu__SetShortButtonSelect(this, method);
      break;
    case 5:
      ServantSortSelectMenu__SetCostumeButtonSelect(this, method);
      break;
    case 6:
      ServantSortSelectMenu__SetCommandCodeButtonSelect(this, method);
      break;
    case 7:
      ServantSortSelectMenu__SetFatigueButtonSelect(this, method);
      break;
    case 8:
      ServantSortSelectMenu__SetBuddyButtonSelect(this, method);
      break;
    default:
      return;
  }
}


void __fastcall ServantSortSelectMenu__Close(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantSortSelectMenu__Close_21867380(this, 0LL, v2);
}


void __fastcall ServantSortSelectMenu__Close_21867380(
        ServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Action_o *v11; // x20

  if ( (byte_434FEAF & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ServantSortSelectMenu_EndClose__);
    byte_434FEAF = 1;
  }
  ServantSortSelectMenu__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall ServantSortSelectMenu__EndClose(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Action_o *closeCallbackFunc; // x19

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall ServantSortSelectMenu__EndOpen(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


ListViewSort_o *__fastcall ServantSortSelectMenu__GetServantEquipSortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantEquipSortInfo; // x0

  if ( (byte_434FEAD & 1) == 0 )
  {
    sub_B70694(&ServantSortSelectMenu_TypeInfo);
    byte_434FEAD = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( (BYTE3(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantEquipSortInfo = v2->static_fields->commonServantEquipSortInfo;
  if ( !commonServantEquipSortInfo )
    sub_B7076C(0LL, v1);
  ListViewSort__Load(commonServantEquipSortInfo, 0LL);
  return ServantSortSelectMenu_TypeInfo->static_fields->commonServantEquipSortInfo;
}


ListViewSort_o *__fastcall ServantSortSelectMenu__GetServantSortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_434FEAC & 1) == 0 )
  {
    sub_B70694(&ServantSortSelectMenu_TypeInfo);
    byte_434FEAC = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( (BYTE3(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_B7076C(0LL, v1);
  ListViewSort__Load(commonServantSortInfo, 0LL);
  return ServantSortSelectMenu_TypeInfo->static_fields->commonServantSortInfo;
}


void __fastcall ServantSortSelectMenu__Init(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSortSelectMenu__InitAllDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *allDispObject; // x0
  struct UILabel_array *allDispSortBtnsLabel; // x8
  __int64 v5; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantBaseSelectList; // x23
  UILabel_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_434FEB1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_434FEB1 = 1;
  }
  allDispObject = this->fields.allDispObject;
  if ( !allDispObject
    || (UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL),
        (allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B7076C(allDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B70798(allDispObject);
      sub_B70738(v9, 0LL);
    }
    servantBaseSelectList = this->fields.servantBaseSelectList;
    if ( servantBaseSelectList )
    {
      v8 = allDispSortBtnsLabel->m_Items[v5];
      if ( servantBaseSelectList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( this->fields.operationSortInfo )
      {
        allDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                      this->fields.operationSortInfo,
                                                      servantBaseSelectList->fields._items->m_Items[v5 + 1],
                                                      0LL);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)allDispObject, 0LL);
          allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel;
          ++v5;
          if ( allDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void __fastcall ServantSortSelectMenu__InitBuddyDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *buddyDispObject; // x0
  struct UILabel_array *buddyDispSortBtnsLabel; // x8
  __int64 v5; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *buddySelectList; // x23
  UILabel_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_434FEB3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_434FEB3 = 1;
  }
  buddyDispObject = this->fields.buddyDispObject;
  if ( !buddyDispObject
    || (UnityEngine_GameObject__SetActive(buddyDispObject, 1, 0LL),
        (buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B7076C(buddyDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B70798(buddyDispObject);
      sub_B70738(v9, 0LL);
    }
    buddySelectList = this->fields.buddySelectList;
    if ( buddySelectList )
    {
      v8 = buddyDispSortBtnsLabel->m_Items[v5];
      if ( buddySelectList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( this->fields.operationSortInfo )
      {
        buddyDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                        this->fields.operationSortInfo,
                                                        buddySelectList->fields._items->m_Items[v5 + 1],
                                                        0LL);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)buddyDispObject, 0LL);
          buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel;
          ++v5;
          if ( buddyDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void __fastcall ServantSortSelectMenu__InitCommandCodeDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandCodeDispObject; // x0
  struct UILabel_array *commandCodeDispSortBtnsLabel; // x8
  __int64 v5; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *commandCodeSelectList; // x23
  UILabel_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_434FEB7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_434FEB7 = 1;
  }
  commandCodeDispObject = this->fields.commandCodeDispObject;
  if ( !commandCodeDispObject
    || (UnityEngine_GameObject__SetActive(commandCodeDispObject, 1, 0LL),
        (commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B7076C(commandCodeDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B70798(commandCodeDispObject);
      sub_B70738(v9, 0LL);
    }
    commandCodeSelectList = this->fields.commandCodeSelectList;
    if ( commandCodeSelectList )
    {
      v8 = commandCodeDispSortBtnsLabel->m_Items[v5];
      if ( commandCodeSelectList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( this->fields.operationSortInfo )
      {
        commandCodeDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                              this->fields.operationSortInfo,
                                                              commandCodeSelectList->fields._items->m_Items[v5 + 1],
                                                              0LL);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)commandCodeDispObject, 0LL);
          commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel;
          ++v5;
          if ( commandCodeDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void __fastcall ServantSortSelectMenu__InitCostumeDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *costumeDispObject; // x0
  struct UILabel_array *costumeDispSortBtnsLabel; // x8
  __int64 v5; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantCostumeSelectList; // x23
  UILabel_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_434FEB6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_434FEB6 = 1;
  }
  costumeDispObject = this->fields.costumeDispObject;
  if ( !costumeDispObject
    || (UnityEngine_GameObject__SetActive(costumeDispObject, 1, 0LL),
        (costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B7076C(costumeDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B70798(costumeDispObject);
      sub_B70738(v9, 0LL);
    }
    servantCostumeSelectList = this->fields.servantCostumeSelectList;
    if ( servantCostumeSelectList )
    {
      v8 = costumeDispSortBtnsLabel->m_Items[v5];
      if ( servantCostumeSelectList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( this->fields.operationSortInfo )
      {
        costumeDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                          this->fields.operationSortInfo,
                                                          servantCostumeSelectList->fields._items->m_Items[v5 + 1],
                                                          0LL);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)costumeDispObject, 0LL);
          costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel;
          ++v5;
          if ( costumeDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void __fastcall ServantSortSelectMenu__InitFatigueDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *fatigueDispObject; // x0
  struct UILabel_array *fatigueDispSortBtnsLabel; // x8
  __int64 v5; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *fatigureSelectList; // x23
  UILabel_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_434FEB2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_434FEB2 = 1;
  }
  fatigueDispObject = this->fields.fatigueDispObject;
  if ( !fatigueDispObject
    || (UnityEngine_GameObject__SetActive(fatigueDispObject, 1, 0LL),
        (fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B7076C(fatigueDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B70798(fatigueDispObject);
      sub_B70738(v9, 0LL);
    }
    fatigureSelectList = this->fields.fatigureSelectList;
    if ( fatigureSelectList )
    {
      v8 = fatigueDispSortBtnsLabel->m_Items[v5];
      if ( fatigureSelectList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( this->fields.operationSortInfo )
      {
        fatigueDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                          this->fields.operationSortInfo,
                                                          fatigureSelectList->fields._items->m_Items[v5 + 1],
                                                          0LL);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)fatigueDispObject, 0LL);
          fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel;
          ++v5;
          if ( fatigueDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void __fastcall ServantSortSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_434FEAB & 1) == 0 )
  {
    sub_B70694(&ServantSortSelectMenu_TypeInfo);
    byte_434FEAB = 1;
  }
  v2 = ServantSortSelectMenu_TypeInfo;
  if ( (BYTE3(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v2 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_B7076C(0LL, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0LL);
}


void __fastcall ServantSortSelectMenu__InitNormalDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *normalDispObject; // x0
  struct UILabel_array *normalSortBtnsLabel; // x8
  __int64 v5; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantSelectList; // x23
  UILabel_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_434FEB0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_434FEB0 = 1;
  }
  normalDispObject = this->fields.normalDispObject;
  if ( !normalDispObject
    || (UnityEngine_GameObject__SetActive(normalDispObject, 1, 0LL),
        (normalSortBtnsLabel = this->fields.normalSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B7076C(normalDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = normalSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B70798(normalDispObject);
      sub_B70738(v9, 0LL);
    }
    servantSelectList = this->fields.servantSelectList;
    if ( servantSelectList )
    {
      v8 = normalSortBtnsLabel->m_Items[v5];
      if ( servantSelectList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( this->fields.operationSortInfo )
      {
        normalDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                         this->fields.operationSortInfo,
                                                         servantSelectList->fields._items->m_Items[v5 + 1],
                                                         0LL);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)normalDispObject, 0LL);
          normalSortBtnsLabel = this->fields.normalSortBtnsLabel;
          ++v5;
          if ( normalSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void __fastcall ServantSortSelectMenu__InitShortDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *shortDispObject; // x0
  const MethodInfo *v4; // x1
  struct UILabel_array *shortDispSortBtnsLabel; // x8
  __int64 v6; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantEquipSelectList; // x23
  UILabel_o *v9; // x20
  __int64 v10; // x0

  if ( (byte_434FEB4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    byte_434FEB4 = 1;
  }
  shortDispObject = this->fields.shortDispObject;
  if ( !shortDispObject
    || (UnityEngine_GameObject__SetActive(shortDispObject, 1, 0LL),
        ServantSortSelectMenu__InitShortDispButtons(this, v4),
        (shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B7076C(shortDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v10 = sub_B70798(shortDispObject);
      sub_B70738(v10, 0LL);
    }
    servantEquipSelectList = this->fields.servantEquipSelectList;
    if ( servantEquipSelectList )
    {
      v9 = shortDispSortBtnsLabel->m_Items[v6];
      if ( servantEquipSelectList->fields._size <= (unsigned int)v6 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( this->fields.operationSortInfo )
      {
        shortDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                        this->fields.operationSortInfo,
                                                        servantEquipSelectList->fields._items->m_Items[v6 + 1],
                                                        0LL);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)shortDispObject, 0LL);
          shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel;
          ++v6;
          if ( shortDispSortBtnsLabel )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void __fastcall ServantSortSelectMenu__InitShortDispButtons(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *servantEquipSelectList; // x0
  int32_t v4; // w0
  unsigned int v5; // w20
  char v6; // w21
  struct UICommonButton_array **p_shortDispSortButtons; // x22
  struct UICommonButton_array *shortDispSortButtons; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  struct UICommonButton_array *v10; // x22
  int max_length; // w8
  unsigned int v12; // w23
  Il2CppClass **v13; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x21
  struct UISprite_array *shortDispSortSprites; // x8
  UISprite_o *v16; // x9
  int size; // w8
  int v18; // w10
  int v19; // w21
  unsigned int v20; // w22
  int v21; // w23
  int v22; // w25
  float mWidth; // s9
  float mHeight; // s10
  float y; // s12
  int v26; // w26
  float v27; // s0
  float v28; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v30; // x0
  __int64 v32; // x0

  if ( (byte_434FEB5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_UICommonButton__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
    sub_B70694(&Method_System_Collections_Generic_List_UICommonButton___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_UICommonButton__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_UICommonButton__get_Item__);
    sub_B70694(&System_Collections_Generic_List_UICommonButton__TypeInfo);
    byte_434FEB5 = 1;
  }
  servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)this->fields.servantEquipSelectList;
  if ( !servantEquipSelectList )
    goto LABEL_45;
  v4 = System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___IndexOf(
         servantEquipSelectList,
         24,
         (const MethodInfo_30BA228 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
  if ( v4 == -1 )
  {
    p_shortDispSortButtons = &this->fields.shortDispSortButtons;
  }
  else
  {
    v5 = v4;
    servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)this->fields.baseSortInfo;
    if ( servantEquipSelectList )
    {
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)ListViewSort__get_IsWareHouseEquipList((ListViewSort_o *)servantEquipSelectList, 0LL);
      v6 = (char)servantEquipSelectList;
    }
    else
    {
      v6 = 0;
    }
    p_shortDispSortButtons = &this->fields.shortDispSortButtons;
    shortDispSortButtons = this->fields.shortDispSortButtons;
    if ( !shortDispSortButtons )
      goto LABEL_45;
    if ( v5 >= shortDispSortButtons->max_length )
      goto LABEL_46;
    servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)shortDispSortButtons->m_Items[v5];
    if ( !servantEquipSelectList )
      goto LABEL_45;
    servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
    if ( !servantEquipSelectList )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipSelectList, v6 & 1, 0LL);
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UICommonButton__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UICommonButton___ctor__);
  v10 = *p_shortDispSortButtons;
  if ( !v10 )
    goto LABEL_45;
  max_length = v10->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( v12 < max_length )
    {
      v13 = &v10->obj.klass + (int)v12;
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)v13[4];
      if ( !v14 )
        goto LABEL_45;
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13[4], 0LL);
      if ( !servantEquipSelectList )
        goto LABEL_45;
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)servantEquipSelectList, 0LL);
      if ( ((unsigned __int8)servantEquipSelectList & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_45;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          v14,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UICommonButton__Add__);
      }
      max_length = v10->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_24;
    }
LABEL_46:
    v32 = sub_B70798(servantEquipSelectList);
    sub_B70738(v32, 0LL);
  }
LABEL_24:
  shortDispSortSprites = this->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
    goto LABEL_45;
  if ( !shortDispSortSprites->max_length )
    goto LABEL_46;
  v16 = shortDispSortSprites->m_Items[0];
  if ( !v16 || !v9 )
LABEL_45:
    sub_B7076C(servantEquipSelectList, method);
  size = v9->fields._size;
  v18 = size + 3;
  if ( size >= 0 )
    v18 = v9->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    v20 = 0;
    v21 = v18 >> 2;
    v22 = (v9->fields._size & 3) - 1;
    mWidth = (float)v16->fields.mWidth;
    mHeight = (float)v16->fields.mHeight;
    while ( 1 )
    {
      y = this->fields.ShortDispSortButtonSpace.fields.y;
      if ( v19 >= v21 )
        v26 = v22;
      else
        v26 = 3;
      if ( size <= v20 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v9->fields._items->m_Items[v20];
      if ( !servantEquipSelectList )
        break;
      v27 = (float)(int)(v20 - 4 * v19) + (float)((float)v26 * -0.5);
      v28 = (float)(v27 * mWidth) + (float)(v27 * this->fields.ShortDispSortButtonSpace.fields.x);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, v28, 0LL);
      if ( v9->fields._size <= v20 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v9->fields._items->m_Items[v20];
      if ( !servantEquipSelectList )
        break;
      v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionY(v30, -(float)((float)(y + mHeight) * (float)v19), 0LL);
      size = v9->fields._size;
      if ( (~v20++ & 3) == 0 )
        ++v19;
      if ( (int)v20 >= size )
        return;
    }
    goto LABEL_45;
  }
}


void __fastcall ServantSortSelectMenu__OnClickCancel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_434FEC2 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FEC2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    ServantSortSelectMenu__Callback(this, 0, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickChoiceSort(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FED9 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FED9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.isChoiceSort ^= 1u;
    ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickDecide(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v5; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  bool v7; // w1
  ServantSortSelectMenu_o *v8; // x0

  if ( (byte_434FEC1 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FEC1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_B7076C(baseSortInfo, v3);
    }
    if ( this->fields.openedKind == operationSortInfo->fields.sortKind
      && !this->fields.openedSmartSort != operationSortInfo->fields.isSmartSort
      && this->fields.openedChoiceSort == operationSortInfo->fields.isChoiceSort )
    {
      v8 = this;
      v7 = 0;
    }
    else
    {
      v7 = 1;
      v8 = this;
    }
    ServantSortSelectMenu__Callback(v8, v7, v5);
  }
}


void __fastcall ServantSortSelectMenu__OnClickEventOrder(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FEC6 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FEC6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 24;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickHelp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *helpButton; // x0
  unsigned int kind; // w8
  System_Action_o *v6; // x20
  int32_t v7; // w1

  if ( (byte_434FEC3 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ServantSortSelectMenu_OnClickHelpClose__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FEC3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton
      || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
    {
      sub_B7076C(helpButton, v3);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    kind = this->fields.kind;
    if ( kind <= 8 )
    {
      if ( ((1 << kind) & 0x158) != 0 )
      {
        v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v7 = 41;
LABEL_12:
        EventTutorialMaster__ShowTutorialWithoutCheck(0, v7, v6, 0LL);
        return;
      }
      if ( kind == 5 )
      {
        v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v7 = 32;
        goto LABEL_12;
      }
    }
    v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
    v7 = 42;
    goto LABEL_12;
  }
}


void __fastcall ServantSortSelectMenu__OnClickHelpClose(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
  {
    sub_B7076C(helpButton, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0LL);
}


void __fastcall ServantSortSelectMenu__OnClickSmartSort(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FED8 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FED8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.isSmartSort ^= 1u;
    ServantSortSelectMenu__SetSmartSortButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAdjustAtk(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FED0 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FED0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 16;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAdjustHp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FECF & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FECF = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 15;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAmount(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FECD & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FECD = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 14;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAttack(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FECB & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FECB = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 6;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortBuddy(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FED7 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FED7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 28;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortClass(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FEC4 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FEC4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 8;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCost(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FECC & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FECC = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 7;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCostume(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FED1 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FED1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 19;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCreate(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FEC5 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FEC5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 1;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortFriendShip(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FECE & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FECE = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 10;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortHavingCostume(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FED2 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FED2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 20;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortHp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FECA & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FECA = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 5;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortLevel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FEC8 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FEC8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 3;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortLimitCount(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FED5 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FED5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 23;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNotHavingCostume(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FED3 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FED3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 21;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNotHavingItem(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FED4 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FED4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 22;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNpLevel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FEC9 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FEC9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 4;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortRarity(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FEC7 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FEC7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 2;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortRecoveryFatigue(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_434FED6 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_434FED6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7076C(v3, v4);
    operationSortInfo->fields.sortKind = 25;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__Open(
        ServantSortSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        bool isChoiceReverse,
        ServantSortSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  bool isChoiceSort; // w8
  ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  UnityEngine_GameObject_o *allDispObject; // x0
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *smartSortLabel; // x21
  UILabel_o *smartSortDetail; // x21
  UILabel_o *costumeSmartSortLabel; // x21
  UILabel_o *costumeSmartSortDetail; // x21
  UILabel_o *smartChoiceLabel; // x21
  UILabel_o *choiceSortLabel; // x21
  UILabel_o *choiceSort2Label; // x21
  UILabel_o *smartChoiceDetail; // x21
  __int64 *v42; // x22
  UILabel_o *choiceSortDetail; // x20
  UILabel_o *choiceSort2Detail; // x20
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  int32_t v49; // w8
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  int32_t v52; // w8
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x1
  int32_t v58; // w1
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x1
  System_Action_o *v65; // x20
  ServantSortSelectMenu_c *v66; // x0
  struct ListViewSort_o **p_commonServantEquipSortInfo; // x8
  struct ListViewSort_o *v68; // x1
  __int64 v69; // x0
  __int64 v70; // x1

  if ( (byte_434FEAE & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ListViewSort_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_ServantSortSelectMenu_EndOpen__);
    sub_B70694(&ServantSortSelectMenu_TypeInfo);
    sub_B70694(&StringLiteral_12442/*"SORT_WINDOW_TITLE"*/);
    sub_B70694(&StringLiteral_12434/*"SMART_SORT_DETAIL"*/);
    sub_B70694(&StringLiteral_12435/*"SMART_SORT_NAME"*/);
    sub_B70694(&StringLiteral_11960/*"SERVANT_SORT_CANCEL"*/);
    sub_B70694(&StringLiteral_3052/*"CHOICE_SORT_NAME"*/);
    sub_B70694(&StringLiteral_11964/*"SERVANT_SORT_DECIDE"*/);
    sub_B70694(&StringLiteral_3051/*"CHOICE_SORT_DETAIL_REVERSE"*/);
    sub_B70694(&StringLiteral_12441/*"SORT_WINDOW_DETAIL"*/);
    sub_B70694(&StringLiteral_3050/*"CHOICE_SORT_DETAIL"*/);
    byte_434FEAE = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)sort,
      (System_String_array **)isChoiceReverse,
      (System_Boolean_array **)callback,
      (System_Int32_array **)method,
      v6,
      v7);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      this->fields.openedKind = sort->fields.sortKind;
      this->fields.openedSmartSort = sort->fields.isSmartSort;
      isChoiceSort = sort->fields.isChoiceSort;
      baseSortInfo = this->fields.baseSortInfo;
      this->fields.openedChoiceSort = isChoiceSort;
      v21 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
      ListViewSort___ctor_33980604(v21, baseSortInfo, 0LL);
      this->fields.operationSortInfo = v21;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
        (System_Int32_array **)v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      allDispObject = this->fields.allDispObject;
      if ( allDispObject )
      {
        UnityEngine_GameObject__SetActive(allDispObject, 0, 0LL);
        allDispObject = this->fields.fatigueDispObject;
        if ( allDispObject )
        {
          UnityEngine_GameObject__SetActive(allDispObject, 0, 0LL);
          allDispObject = this->fields.buddyDispObject;
          if ( allDispObject )
          {
            UnityEngine_GameObject__SetActive(allDispObject, 0, 0LL);
            allDispObject = this->fields.normalDispObject;
            if ( allDispObject )
            {
              UnityEngine_GameObject__SetActive(allDispObject, 0, 0LL);
              allDispObject = this->fields.shortDispObject;
              if ( allDispObject )
              {
                UnityEngine_GameObject__SetActive(allDispObject, 0, 0LL);
                allDispObject = this->fields.smartSortObject;
                if ( allDispObject )
                {
                  UnityEngine_GameObject__SetActive(allDispObject, 0, 0LL);
                  allDispObject = this->fields.choiceSortObject;
                  if ( allDispObject )
                  {
                    UnityEngine_GameObject__SetActive(allDispObject, 0, 0LL);
                    allDispObject = this->fields.choiceSort2Object;
                    if ( allDispObject )
                    {
                      UnityEngine_GameObject__SetActive(allDispObject, 0, 0LL);
                      allDispObject = this->fields.costumeSmartSortObject;
                      if ( allDispObject )
                      {
                        UnityEngine_GameObject__SetActive(allDispObject, 0, 0LL);
                        allDispObject = this->fields.costumeDispObject;
                        if ( allDispObject )
                        {
                          UnityEngine_GameObject__SetActive(allDispObject, 0, 0LL);
                          allDispObject = (UnityEngine_GameObject_o *)this->fields.helpButton;
                          if ( allDispObject )
                          {
                            allDispObject = UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)allDispObject,
                                              0LL);
                            if ( allDispObject )
                            {
                              UnityEngine_GameObject__SetActive(allDispObject, 0, 0LL);
                              allDispObject = UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
                              if ( allDispObject )
                              {
                                UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL);
                                titleLabel = this->fields.titleLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_12442/*"SORT_WINDOW_TITLE"*/,
                                                                              0LL);
                                if ( titleLabel )
                                {
                                  UILabel__set_text(titleLabel, (System_String_o *)allDispObject, 0LL);
                                  explanationLabel = this->fields.explanationLabel;
                                  allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_12441/*"SORT_WINDOW_DETAIL"*/,
                                                                                0LL);
                                  if ( explanationLabel )
                                  {
                                    UILabel__set_text(explanationLabel, (System_String_o *)allDispObject, 0LL);
                                    decideLabel = this->fields.decideLabel;
                                    allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_11964/*"SERVANT_SORT_DECIDE"*/,
                                                                                  0LL);
                                    if ( decideLabel )
                                    {
                                      UILabel__set_text(decideLabel, (System_String_o *)allDispObject, 0LL);
                                      cancelLabel = this->fields.cancelLabel;
                                      allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_11960/*"SERVANT_SORT_CANCEL"*/,
                                                                                    0LL);
                                      if ( cancelLabel )
                                      {
                                        UILabel__set_text(cancelLabel, (System_String_o *)allDispObject, 0LL);
                                        smartSortLabel = this->fields.smartSortLabel;
                                        allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_12435/*"SMART_SORT_NAME"*/,
                                                                                      0LL);
                                        if ( smartSortLabel )
                                        {
                                          UILabel__set_text(smartSortLabel, (System_String_o *)allDispObject, 0LL);
                                          smartSortDetail = this->fields.smartSortDetail;
                                          allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                        (System_String_o *)StringLiteral_12434/*"SMART_SORT_DETAIL"*/,
                                                                                        0LL);
                                          if ( smartSortDetail )
                                          {
                                            UILabel__set_text(smartSortDetail, (System_String_o *)allDispObject, 0LL);
                                            costumeSmartSortLabel = this->fields.costumeSmartSortLabel;
                                            allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_12435/*"SMART_SORT_NAME"*/,
                                                                                          0LL);
                                            if ( costumeSmartSortLabel )
                                            {
                                              UILabel__set_text(
                                                costumeSmartSortLabel,
                                                (System_String_o *)allDispObject,
                                                0LL);
                                              costumeSmartSortDetail = this->fields.costumeSmartSortDetail;
                                              allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                            (System_String_o *)StringLiteral_12434/*"SMART_SORT_DETAIL"*/,
                                                                                            0LL);
                                              if ( costumeSmartSortDetail )
                                              {
                                                UILabel__set_text(
                                                  costumeSmartSortDetail,
                                                  (System_String_o *)allDispObject,
                                                  0LL);
                                                smartChoiceLabel = this->fields.smartChoiceLabel;
                                                allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_3052/*"CHOICE_SORT_NAME"*/,
                                                                                              0LL);
                                                if ( smartChoiceLabel )
                                                {
                                                  UILabel__set_text(
                                                    smartChoiceLabel,
                                                    (System_String_o *)allDispObject,
                                                    0LL);
                                                  choiceSortLabel = this->fields.choiceSortLabel;
                                                  allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                                (System_String_o *)StringLiteral_3052/*"CHOICE_SORT_NAME"*/,
                                                                                                0LL);
                                                  if ( choiceSortLabel )
                                                  {
                                                    UILabel__set_text(
                                                      choiceSortLabel,
                                                      (System_String_o *)allDispObject,
                                                      0LL);
                                                    choiceSort2Label = this->fields.choiceSort2Label;
                                                    allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                                  (System_String_o *)StringLiteral_3052/*"CHOICE_SORT_NAME"*/,
                                                                                                  0LL);
                                                    if ( choiceSort2Label )
                                                    {
                                                      UILabel__set_text(
                                                        choiceSort2Label,
                                                        (System_String_o *)allDispObject,
                                                        0LL);
                                                      smartChoiceDetail = this->fields.smartChoiceDetail;
                                                      if ( isChoiceReverse )
                                                      {
                                                        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                        {
                                                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                        }
                                                        v42 = &StringLiteral_3051/*"CHOICE_SORT_DETAIL_REVERSE"*/;
                                                      }
                                                      else
                                                      {
                                                        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                        {
                                                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                        }
                                                        v42 = &StringLiteral_3050/*"CHOICE_SORT_DETAIL"*/;
                                                      }
                                                      allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                                    (System_String_o *)*v42,
                                                                                                    0LL);
                                                      if ( smartChoiceDetail )
                                                      {
                                                        UILabel__set_text(
                                                          smartChoiceDetail,
                                                          (System_String_o *)allDispObject,
                                                          0LL);
                                                        choiceSortDetail = this->fields.choiceSortDetail;
                                                        allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v42, 0LL);
                                                        if ( choiceSortDetail )
                                                        {
                                                          UILabel__set_text(
                                                            choiceSortDetail,
                                                            (System_String_o *)allDispObject,
                                                            0LL);
                                                          choiceSort2Detail = this->fields.choiceSort2Detail;
                                                          allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v42, 0LL);
                                                          if ( choiceSort2Detail )
                                                          {
                                                            UILabel__set_text(
                                                              choiceSort2Detail,
                                                              (System_String_o *)allDispObject,
                                                              0LL);
                                                            ServantSortSelectMenu__SetEnableButtons(this, 1, v45);
                                                            switch ( this->fields.kind )
                                                            {
                                                              case 0:
                                                                ServantSortSelectMenu__InitAllDisp(this, v46);
                                                                ServantSortSelectMenu__SetAllButtonSelect(this, v54);
                                                                goto LABEL_58;
                                                              case 1:
                                                              case 3:
                                                                ServantSortSelectMenu__InitAllDisp(this, v46);
                                                                ServantSortSelectMenu__SetAllButtonSelect(this, v47);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v48);
                                                                allDispObject = (UnityEngine_GameObject_o *)this->fields.helpButton;
                                                                if ( !allDispObject )
                                                                  break;
                                                                allDispObject = UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)allDispObject,
                                                                                  0LL);
                                                                if ( !allDispObject )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL);
                                                                v49 = this->fields.kind;
                                                                if ( v49 == 3 )
                                                                  goto LABEL_74;
                                                                if ( v49 != 1 )
                                                                  goto LABEL_79;
                                                                goto LABEL_54;
                                                              case 2:
                                                              case 4:
                                                                ServantSortSelectMenu__InitShortDisp(this, v46);
                                                                ServantSortSelectMenu__SetShortButtonSelect(this, v50);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v51);
                                                                allDispObject = (UnityEngine_GameObject_o *)this->fields.helpButton;
                                                                if ( !allDispObject )
                                                                  break;
                                                                allDispObject = UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)allDispObject,
                                                                                  0LL);
                                                                if ( !allDispObject )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL);
                                                                v52 = this->fields.kind;
                                                                if ( v52 == 4 )
                                                                {
                                                                  allDispObject = this->fields.choiceSortObject;
                                                                  if ( allDispObject )
                                                                  {
LABEL_77:
                                                                    UnityEngine_GameObject__SetActive(
                                                                      allDispObject,
                                                                      1,
                                                                      0LL);
                                                                    v58 = 41;
LABEL_78:
                                                                    EventTutorialMaster__CheckTutorial(
                                                                      0,
                                                                      v58,
                                                                      0LL,
                                                                      0,
                                                                      0,
                                                                      0,
                                                                      0,
                                                                      0LL);
                                                                    goto LABEL_79;
                                                                  }
                                                                }
                                                                else
                                                                {
                                                                  if ( v52 != 2 )
                                                                  {
LABEL_79:
                                                                    this->fields.state = 1;
                                                                    v65 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                                                                    System_Action___ctor(
                                                                      v65,
                                                                      (Il2CppObject *)this,
                                                                      Method_ServantSortSelectMenu_EndOpen__,
                                                                      0LL);
                                                                    BaseDialog__Open((BaseDialog_o *)this, v65, 0, 0LL);
                                                                    return;
                                                                  }
LABEL_54:
                                                                  allDispObject = this->fields.smartSortObject;
                                                                  if ( allDispObject )
                                                                  {
                                                                    UnityEngine_GameObject__SetActive(
                                                                      allDispObject,
                                                                      1,
                                                                      0LL);
                                                                    ServantSortSelectMenu__SetSmartSortButtonSelect(
                                                                      this,
                                                                      v53);
LABEL_62:
                                                                    v58 = 42;
                                                                    goto LABEL_78;
                                                                  }
                                                                }
                                                                break;
                                                              case 5:
                                                                ServantSortSelectMenu__InitCostumeDisp(this, v46);
                                                                ServantSortSelectMenu__SetCostumeButtonSelect(this, v59);
                                                                ServantSortSelectMenu__SetSmartSortButtonSelect(
                                                                  this,
                                                                  v60);
                                                                allDispObject = (UnityEngine_GameObject_o *)this->fields.helpButton;
                                                                if ( !allDispObject )
                                                                  break;
                                                                allDispObject = UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)allDispObject,
                                                                                  0LL);
                                                                if ( !allDispObject )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL);
                                                                allDispObject = this->fields.costumeSmartSortObject;
                                                                if ( !allDispObject )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL);
                                                                v58 = 32;
                                                                goto LABEL_78;
                                                              case 6:
                                                                ServantSortSelectMenu__InitCommandCodeDisp(this, v46);
                                                                ServantSortSelectMenu__SetCommandCodeButtonSelect(
                                                                  this,
                                                                  v61);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v62);
                                                                allDispObject = this->fields.choiceSortObject;
                                                                if ( !allDispObject )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL);
                                                                allDispObject = (UnityEngine_GameObject_o *)this->fields.helpButton;
                                                                if ( !allDispObject )
                                                                  break;
                                                                allDispObject = UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)allDispObject,
                                                                                  0LL);
                                                                if ( !allDispObject )
                                                                  break;
                                                                goto LABEL_77;
                                                              case 7:
                                                                ServantSortSelectMenu__InitFatigueDisp(this, v46);
                                                                ServantSortSelectMenu__SetFatigueButtonSelect(this, v55);
LABEL_58:
                                                                allDispObject = (UnityEngine_GameObject_o *)this->fields.helpButton;
                                                                if ( !allDispObject )
                                                                  break;
                                                                allDispObject = UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)allDispObject,
                                                                                  0LL);
                                                                if ( !allDispObject )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL);
                                                                allDispObject = this->fields.smartSortObject;
                                                                if ( !allDispObject )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL);
                                                                ServantSortSelectMenu__SetSmartSortButtonSelect(
                                                                  this,
                                                                  v56);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v57);
                                                                goto LABEL_62;
                                                              case 8:
                                                                ServantSortSelectMenu__InitBuddyDisp(this, v46);
                                                                ServantSortSelectMenu__SetBuddyButtonSelect(this, v63);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v64);
                                                                allDispObject = (UnityEngine_GameObject_o *)this->fields.helpButton;
                                                                if ( !allDispObject )
                                                                  break;
                                                                allDispObject = UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)allDispObject,
                                                                                  0LL);
                                                                if ( !allDispObject )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL);
LABEL_74:
                                                                allDispObject = this->fields.choiceSort2Object;
                                                                if ( !allDispObject )
                                                                  break;
                                                                goto LABEL_77;
                                                              default:
                                                                goto LABEL_79;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v66 = ServantSortSelectMenu_TypeInfo;
      if ( this->fields.kind == 2 )
      {
        if ( (WORD1(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
          v66 = ServantSortSelectMenu_TypeInfo;
        }
        p_commonServantEquipSortInfo = &v66->static_fields->commonServantEquipSortInfo;
      }
      else
      {
        if ( (WORD1(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
          v66 = ServantSortSelectMenu_TypeInfo;
        }
        p_commonServantEquipSortInfo = &v66->static_fields->commonServantSortInfo;
      }
      v68 = *p_commonServantEquipSortInfo;
      this->fields.baseSortInfo = *p_commonServantEquipSortInfo;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)v68,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      allDispObject = (UnityEngine_GameObject_o *)this->fields.baseSortInfo;
      if ( allDispObject )
      {
        ListViewSort__Load((ListViewSort_o *)allDispObject, 0LL);
        sub_B7076C(v69, v70);
      }
    }
    sub_B7076C(allDispObject, v28);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetAllButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *allDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  __int64 v8; // x0

  allDispSortButtons = this->fields.allDispSortButtons;
  if ( !allDispSortButtons )
LABEL_7:
    sub_B7076C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = allDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B70798(this);
      sub_B70738(v8, 0LL);
    }
    this = (ServantSortSelectMenu_o *)allDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0LL);
      allDispSortButtons = v4->fields.allDispSortButtons;
      ++v5;
      if ( allDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetAllButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct UISprite_array *allDispSortSprites; // x8
  __int64 v4; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantBaseSelectList; // x24
  Il2CppClass **v8; // x8
  UISprite_o *v9; // x0
  System_String_o **v10; // x8
  __int64 v11; // x0

  v2 = this;
  if ( (byte_434FEB9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_B70694(&StringLiteral_17213/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_B70694(&StringLiteral_17212/*"btn_bg_03"*/);
    byte_434FEB9 = 1;
  }
  allDispSortSprites = v2->fields.allDispSortSprites;
  if ( !allDispSortSprites )
LABEL_16:
    sub_B7076C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v11 = sub_B70798(this);
      sub_B70738(v11, 0LL);
    }
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      servantBaseSelectList = v2->fields.servantBaseSelectList;
      if ( servantBaseSelectList )
      {
        v8 = &allDispSortSprites->obj.klass + v4;
        if ( servantBaseSelectList->fields._size <= (unsigned int)v4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( v8[4] )
        {
          v9 = (UISprite_o *)v8[4];
          v10 = (System_String_o **)(operationSortInfo->fields.sortKind == servantBaseSelectList->fields._items->m_Items[v4 + 1]
                                   ? &StringLiteral_17212/*"btn_bg_03"*/
                                   : &StringLiteral_17213/*"btn_bg_04"*/);
          UISprite__set_spriteName(v9, *v10, 0LL);
          allDispSortSprites = v2->fields.allDispSortSprites;
          ++v4;
          if ( allDispSortSprites )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetBuddyButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *buddyDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  __int64 v8; // x0

  buddyDispSortButtons = this->fields.buddyDispSortButtons;
  if ( !buddyDispSortButtons )
LABEL_7:
    sub_B7076C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = buddyDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B70798(this);
      sub_B70738(v8, 0LL);
    }
    this = (ServantSortSelectMenu_o *)buddyDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0LL);
      buddyDispSortButtons = v4->fields.buddyDispSortButtons;
      ++v5;
      if ( buddyDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetBuddyButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct UISprite_array *buddyDispSortSprites; // x8
  __int64 v4; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *buddySelectList; // x24
  Il2CppClass **v8; // x8
  UISprite_o *v9; // x0
  System_String_o **v10; // x8
  __int64 v11; // x0

  v2 = this;
  if ( (byte_434FEBB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_B70694(&StringLiteral_17213/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_B70694(&StringLiteral_17212/*"btn_bg_03"*/);
    byte_434FEBB = 1;
  }
  buddyDispSortSprites = v2->fields.buddyDispSortSprites;
  if ( !buddyDispSortSprites )
LABEL_16:
    sub_B7076C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v11 = sub_B70798(this);
      sub_B70738(v11, 0LL);
    }
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      buddySelectList = v2->fields.buddySelectList;
      if ( buddySelectList )
      {
        v8 = &buddyDispSortSprites->obj.klass + v4;
        if ( buddySelectList->fields._size <= (unsigned int)v4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( v8[4] )
        {
          v9 = (UISprite_o *)v8[4];
          v10 = (System_String_o **)(operationSortInfo->fields.sortKind == buddySelectList->fields._items->m_Items[v4 + 1]
                                   ? &StringLiteral_17212/*"btn_bg_03"*/
                                   : &StringLiteral_17213/*"btn_bg_04"*/);
          UISprite__set_spriteName(v9, *v10, 0LL);
          buddyDispSortSprites = v2->fields.buddyDispSortSprites;
          ++v4;
          if ( buddyDispSortSprites )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
}


void __fastcall ServantSortSelectMenu__SetChoiceSortButtonSelect(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_434FEC0 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    this = (ServantSortSelectMenu_o *)sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_434FEC0 = 1;
  }
  switch ( v2->fields.kind )
  {
    case 3:
    case 8:
      operationSortInfo = v2->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_16;
      this = (ServantSortSelectMenu_o *)v2->fields.choiceSort2BtnSprite;
      if ( !this )
        goto LABEL_16;
      goto LABEL_12;
    case 4:
    case 6:
      operationSortInfo = v2->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_16;
      this = (ServantSortSelectMenu_o *)v2->fields.choiceSortBtnSprite;
      if ( !this )
        goto LABEL_16;
      goto LABEL_12;
    default:
      operationSortInfo = v2->fields.operationSortInfo;
      if ( !operationSortInfo || (this = (ServantSortSelectMenu_o *)v2->fields.smartChoiceBtnSprite) == 0LL )
LABEL_16:
        sub_B7076C(this, method);
LABEL_12:
      if ( operationSortInfo->fields.isChoiceSort )
        v4 = &StringLiteral_17262/*"btn_on"*/;
      else
        v4 = &StringLiteral_17261/*"btn_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0LL);
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetCommandCodeButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *commandCodeDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  __int64 v8; // x0

  commandCodeDispSortButtons = this->fields.commandCodeDispSortButtons;
  if ( !commandCodeDispSortButtons )
LABEL_7:
    sub_B7076C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = commandCodeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B70798(this);
      sub_B70738(v8, 0LL);
    }
    this = (ServantSortSelectMenu_o *)commandCodeDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0LL);
      commandCodeDispSortButtons = v4->fields.commandCodeDispSortButtons;
      ++v5;
      if ( commandCodeDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetCommandCodeButtonSelect(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct UISprite_array *commandCodeDispSprites; // x8
  __int64 v4; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *commandCodeSelectList; // x24
  Il2CppClass **v8; // x8
  UISprite_o *v9; // x0
  System_String_o **v10; // x8
  __int64 v11; // x0

  v2 = this;
  if ( (byte_434FEBE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_B70694(&StringLiteral_17213/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_B70694(&StringLiteral_17212/*"btn_bg_03"*/);
    byte_434FEBE = 1;
  }
  commandCodeDispSprites = v2->fields.commandCodeDispSprites;
  if ( !commandCodeDispSprites )
LABEL_16:
    sub_B7076C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v11 = sub_B70798(this);
      sub_B70738(v11, 0LL);
    }
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      commandCodeSelectList = v2->fields.commandCodeSelectList;
      if ( commandCodeSelectList )
      {
        v8 = &commandCodeDispSprites->obj.klass + v4;
        if ( commandCodeSelectList->fields._size <= (unsigned int)v4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( v8[4] )
        {
          v9 = (UISprite_o *)v8[4];
          v10 = (System_String_o **)(operationSortInfo->fields.sortKind == commandCodeSelectList->fields._items->m_Items[v4 + 1]
                                   ? &StringLiteral_17212/*"btn_bg_03"*/
                                   : &StringLiteral_17213/*"btn_bg_04"*/);
          UISprite__set_spriteName(v9, *v10, 0LL);
          commandCodeDispSprites = v2->fields.commandCodeDispSprites;
          ++v4;
          if ( commandCodeDispSprites )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetCostumeButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *costumeDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  __int64 v8; // x0

  costumeDispSortButtons = this->fields.costumeDispSortButtons;
  if ( !costumeDispSortButtons )
LABEL_7:
    sub_B7076C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = costumeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B70798(this);
      sub_B70738(v8, 0LL);
    }
    this = (ServantSortSelectMenu_o *)costumeDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0LL);
      costumeDispSortButtons = v4->fields.costumeDispSortButtons;
      ++v5;
      if ( costumeDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetCostumeButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct UISprite_array *costumeDispSprites; // x8
  __int64 v4; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantCostumeSelectList; // x24
  Il2CppClass **v8; // x8
  UISprite_o *v9; // x0
  System_String_o **v10; // x8
  __int64 v11; // x0

  v2 = this;
  if ( (byte_434FEBD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_B70694(&StringLiteral_17213/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_B70694(&StringLiteral_17212/*"btn_bg_03"*/);
    byte_434FEBD = 1;
  }
  costumeDispSprites = v2->fields.costumeDispSprites;
  if ( !costumeDispSprites )
LABEL_16:
    sub_B7076C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v11 = sub_B70798(this);
      sub_B70738(v11, 0LL);
    }
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      servantCostumeSelectList = v2->fields.servantCostumeSelectList;
      if ( servantCostumeSelectList )
      {
        v8 = &costumeDispSprites->obj.klass + v4;
        if ( servantCostumeSelectList->fields._size <= (unsigned int)v4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( v8[4] )
        {
          v9 = (UISprite_o *)v8[4];
          v10 = (System_String_o **)(operationSortInfo->fields.sortKind == servantCostumeSelectList->fields._items->m_Items[v4 + 1]
                                   ? &StringLiteral_17212/*"btn_bg_03"*/
                                   : &StringLiteral_17213/*"btn_bg_04"*/);
          UISprite__set_spriteName(v9, *v10, 0LL);
          costumeDispSprites = v2->fields.costumeDispSprites;
          ++v4;
          if ( costumeDispSprites )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetEnableButtons(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *decideButton; // x0
  bool v5; // w21
  const MethodInfo *v7; // x2

  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (v5 = isEnable,
        UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL),
        (decideButton = this->fields.cancelButton) == 0LL) )
  {
    sub_B7076C(decideButton, isEnable);
  }
  UICommonButton__SetButtonEnableWithCollider(decideButton, v5, 0LL);
  switch ( this->fields.kind )
  {
    case 0:
    case 1:
    case 3:
      ServantSortSelectMenu__SetAllButtonEnable(this, isEnable, v7);
      break;
    case 2:
    case 4:
      ServantSortSelectMenu__SetShortButtonEnable(this, isEnable, v7);
      break;
    case 5:
      ServantSortSelectMenu__SetCostumeButtonEnable(this, isEnable, v7);
      break;
    case 6:
      ServantSortSelectMenu__SetCommandCodeButtonEnable(this, isEnable, v7);
      break;
    case 7:
      ServantSortSelectMenu__SetFatigueButtonEnable(this, isEnable, v7);
      break;
    case 8:
      ServantSortSelectMenu__SetBuddyButtonEnable(this, isEnable, v7);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetFatigueButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *fatigueDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  __int64 v8; // x0

  fatigueDispSortButtons = this->fields.fatigueDispSortButtons;
  if ( !fatigueDispSortButtons )
LABEL_7:
    sub_B7076C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = fatigueDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B70798(this);
      sub_B70738(v8, 0LL);
    }
    this = (ServantSortSelectMenu_o *)fatigueDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0LL);
      fatigueDispSortButtons = v4->fields.fatigueDispSortButtons;
      ++v5;
      if ( fatigueDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetFatigueButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct UISprite_array *fatigueDispSortSprites; // x8
  __int64 v4; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *fatigureSelectList; // x24
  Il2CppClass **v8; // x8
  UISprite_o *v9; // x0
  System_String_o **v10; // x8
  __int64 v11; // x0

  v2 = this;
  if ( (byte_434FEBA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_B70694(&StringLiteral_17213/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_B70694(&StringLiteral_17212/*"btn_bg_03"*/);
    byte_434FEBA = 1;
  }
  fatigueDispSortSprites = v2->fields.fatigueDispSortSprites;
  if ( !fatigueDispSortSprites )
LABEL_16:
    sub_B7076C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v11 = sub_B70798(this);
      sub_B70738(v11, 0LL);
    }
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      fatigureSelectList = v2->fields.fatigureSelectList;
      if ( fatigureSelectList )
      {
        v8 = &fatigueDispSortSprites->obj.klass + v4;
        if ( fatigureSelectList->fields._size <= (unsigned int)v4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( v8[4] )
        {
          v9 = (UISprite_o *)v8[4];
          v10 = (System_String_o **)(operationSortInfo->fields.sortKind == fatigureSelectList->fields._items->m_Items[v4 + 1]
                                   ? &StringLiteral_17212/*"btn_bg_03"*/
                                   : &StringLiteral_17213/*"btn_bg_04"*/);
          UISprite__set_spriteName(v9, *v10, 0LL);
          fatigueDispSortSprites = v2->fields.fatigueDispSortSprites;
          ++v4;
          if ( fatigueDispSortSprites )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetNormalButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *normalSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  __int64 v8; // x0

  normalSortButtons = this->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_7:
    sub_B7076C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = normalSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B70798(this);
      sub_B70738(v8, 0LL);
    }
    this = (ServantSortSelectMenu_o *)normalSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0LL);
      normalSortButtons = v4->fields.normalSortButtons;
      ++v5;
      if ( normalSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetNormalButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct UICommonButton_array *normalSortButtons; // x8
  __int64 v4; // x21
  struct UISprite_array *normalSortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantSelectList; // x24
  Il2CppClass **v8; // x8
  UISprite_o *v9; // x0
  System_String_o **v10; // x8
  __int64 v11; // x0

  v2 = this;
  if ( (byte_434FEB8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_B70694(&StringLiteral_17213/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_B70694(&StringLiteral_17212/*"btn_bg_03"*/);
    byte_434FEB8 = 1;
  }
  normalSortButtons = v2->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_17:
    sub_B7076C(this, method);
  v4 = 0LL;
  while ( (int)v4 < (signed int)normalSortButtons->max_length )
  {
    normalSortSprites = v2->fields.normalSortSprites;
    if ( normalSortSprites )
    {
      if ( (unsigned int)v4 >= normalSortSprites->max_length )
      {
        v11 = sub_B70798(this);
        sub_B70738(v11, 0LL);
      }
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        servantSelectList = v2->fields.servantSelectList;
        if ( servantSelectList )
        {
          v8 = &normalSortSprites->obj.klass + v4;
          if ( servantSelectList->fields._size <= (unsigned int)v4 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          if ( v8[4] )
          {
            v9 = (UISprite_o *)v8[4];
            v10 = (System_String_o **)(operationSortInfo->fields.sortKind == servantSelectList->fields._items->m_Items[v4 + 1]
                                     ? &StringLiteral_17212/*"btn_bg_03"*/
                                     : &StringLiteral_17213/*"btn_bg_04"*/);
            UISprite__set_spriteName(v9, *v10, 0LL);
            normalSortButtons = v2->fields.normalSortButtons;
            ++v4;
            if ( normalSortButtons )
              continue;
          }
        }
      }
    }
    goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetShortButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *shortDispSortButtons; // x8
  ServantSortSelectMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  __int64 v8; // x0

  shortDispSortButtons = this->fields.shortDispSortButtons;
  if ( !shortDispSortButtons )
LABEL_7:
    sub_B7076C(this, isEnable);
  v4 = this;
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = shortDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B70798(this);
      sub_B70738(v8, 0LL);
    }
    this = (ServantSortSelectMenu_o *)shortDispSortButtons->m_Items[v5];
    if ( this )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v6, 0LL);
      shortDispSortButtons = v4->fields.shortDispSortButtons;
      ++v5;
      if ( shortDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetShortButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct UISprite_array *shortDispSortSprites; // x8
  __int64 v4; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantEquipSelectList; // x24
  Il2CppClass **v8; // x8
  UISprite_o *v9; // x0
  System_String_o **v10; // x8
  __int64 v11; // x0

  v2 = this;
  if ( (byte_434FEBC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_B70694(&StringLiteral_17213/*"btn_bg_04"*/);
    this = (ServantSortSelectMenu_o *)sub_B70694(&StringLiteral_17212/*"btn_bg_03"*/);
    byte_434FEBC = 1;
  }
  shortDispSortSprites = v2->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
LABEL_16:
    sub_B7076C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortSprites->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v11 = sub_B70798(this);
      sub_B70738(v11, 0LL);
    }
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      servantEquipSelectList = v2->fields.servantEquipSelectList;
      if ( servantEquipSelectList )
      {
        v8 = &shortDispSortSprites->obj.klass + v4;
        if ( servantEquipSelectList->fields._size <= (unsigned int)v4 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( v8[4] )
        {
          v9 = (UISprite_o *)v8[4];
          v10 = (System_String_o **)(operationSortInfo->fields.sortKind == servantEquipSelectList->fields._items->m_Items[v4 + 1]
                                   ? &StringLiteral_17212/*"btn_bg_03"*/
                                   : &StringLiteral_17213/*"btn_bg_04"*/);
          UISprite__set_spriteName(v9, *v10, 0LL);
          shortDispSortSprites = v2->fields.shortDispSortSprites;
          ++v4;
          if ( shortDispSortSprites )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
}


void __fastcall ServantSortSelectMenu__SetSmartSortButtonSelect(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantSortSelectMenu_o *v2; // x19
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_434FEBF & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    this = (ServantSortSelectMenu_o *)sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_434FEBF = 1;
  }
  if ( v2->fields.kind == 5 )
  {
    operationSortInfo = v2->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_13;
    this = (ServantSortSelectMenu_o *)v2->fields.costumeSmartSortBtnSprite;
    if ( !this )
      goto LABEL_13;
  }
  else
  {
    operationSortInfo = v2->fields.operationSortInfo;
    if ( !operationSortInfo || (this = (ServantSortSelectMenu_o *)v2->fields.smartSortBtnSprite) == 0LL )
LABEL_13:
      sub_B7076C(this, method);
  }
  if ( operationSortInfo->fields.isSmartSort )
    v4 = &StringLiteral_17262/*"btn_on"*/;
  else
    v4 = &StringLiteral_17261/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0LL);
}


void __fastcall ServantSortSelectMenu__add_callbackFunc(
        ServantSortSelectMenu_o *this,
        ServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantSortSelectMenu_o *v10; // x0
  ServantSortSelectMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_434FEA9 & 1) == 0 )
  {
    sub_B70694(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_434FEA9 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantSortSelectMenu_CallbackFunc_c *)v7->klass != ServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantSortSelectMenu_o *)sub_B70A60(v7);
  ServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantSortSelectMenu__get_closeBtnPath(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_434FEDA & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15698/*"Window/CancelButton"*/);
    byte_434FEDA = 1;
  }
  return (System_String_o *)StringLiteral_15698/*"Window/CancelButton"*/;
}


void __fastcall ServantSortSelectMenu__remove_callbackFunc(
        ServantSortSelectMenu_o *this,
        ServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_434FEAA & 1) == 0 )
  {
    sub_B70694(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_434FEAA = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantSortSelectMenu_CallbackFunc_c *)v7->klass != ServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B70A60(v7);
  ServantSortSelectMenu__InitLoad(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu_CallbackFunc___ctor(
        ServantSortSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B70630(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall ServantSortSelectMenu_CallbackFunc__BeginInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_434F847 & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    byte_434F847 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall ServantSortSelectMenu_CallbackFunc__EndInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu_CallbackFunc__Invoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ServantSortSelectMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  ServantSortSelectMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ServantSortSelectMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ServantSortSelectMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B706C4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B70744(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B08590(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}