void __fastcall ServantSortSelectMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  ListViewSort_o *v14; // x19
  struct ServantSortSelectMenu_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  ListViewSort_o *v22; // x19
  struct ServantSortSelectMenu_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4185F7A & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&ServantSortSelectMenu_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_12722/*"ServantSortSelect1"*/, v3);
    sub_B2C35C(&StringLiteral_12723/*"ServantSortSelect2"*/, v4);
    sub_B2C35C(&StringLiteral_12724/*"ServantSortSelect4"*/, v5);
    byte_4185F7A = 1;
  }
  v6 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v6, (System_String_o *)StringLiteral_12722/*"ServantSortSelect1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantSortSelectMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  v14 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v14, (System_String_o *)StringLiteral_12723/*"ServantSortSelect2"*/, 3, 0, 0LL);
  v15 = ServantSortSelectMenu_TypeInfo->static_fields;
  v15->commonServantEquipSortInfo = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v15->commonServantEquipSortInfo,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v22, (System_String_o *)StringLiteral_12724/*"ServantSortSelect4"*/, 3, 0, 0LL);
  v23 = ServantSortSelectMenu_TypeInfo->static_fields;
  v23->commandCodeSortInfo = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v23->commandCodeSortInfo,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void __fastcall ServantSortSelectMenu___ctor(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v50; // x20
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_4185F79 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo, v5);
    byte_4185F79 = 1;
  }
  this->fields.ShortDispSortButtonSpace = (struct UnityEngine_Vector2_o)0x40A0000041200000LL;
  v6 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v6,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v6 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    10,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    4,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    7,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    5,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    6,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    15,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    16,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    14,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    1,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    8,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantBaseSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantBaseSelectList,
    (System_Int32_array **)v6,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v15,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v15 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v15,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v15,
    10,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v15,
    4,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v15,
    7,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v15,
    5,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v15,
    6,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v15,
    15,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v15,
    16,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v15,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v15,
    14,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v15,
    1,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v15,
    8,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v15,
    25,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.fatigureSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fatigureSelectList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v22,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v22 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    10,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    4,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    7,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    5,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    6,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    15,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    16,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    14,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    1,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    8,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    28,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.buddySelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.buddySelectList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v29,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v29 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v29,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v29,
    10,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v29,
    4,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v29,
    7,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v29,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v29,
    5,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v29,
    6,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v29,
    14,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v29,
    1,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v29,
    8,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v29;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantSelectList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v36,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v36 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v36,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v36,
    5,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v36,
    6,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v36,
    7,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v36,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v36,
    14,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v36,
    1,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v36,
    24,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantEquipSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v36;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEquipSelectList,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v43,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v43 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v43,
    8,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v43,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v43,
    19,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v43,
    20,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v43,
    21,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v43,
    22,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v43,
    23,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v43,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantCostumeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v43;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantCostumeSelectList,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v50,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v50 )
LABEL_14:
    sub_B2C434(v7, v8);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v50,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v50,
    14,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v50,
    1,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.commandCodeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v50;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeSelectList,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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

  ServantSortSelectMenu__Close_21705316(this, 0LL, v2);
}


void __fastcall ServantSortSelectMenu__Close_21705316(
        ServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *v12; // x20

  if ( (byte_4185F4D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ServantSortSelectMenu_EndClose__, v5);
    byte_4185F4D = 1;
  }
  ServantSortSelectMenu__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4185F4B & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_TypeInfo, v1);
    byte_4185F4B = 1;
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
    sub_B2C434(0LL, v1);
  ListViewSort__Load(commonServantEquipSortInfo, 0LL);
  return ServantSortSelectMenu_TypeInfo->static_fields->commonServantEquipSortInfo;
}


ListViewSort_o *__fastcall ServantSortSelectMenu__GetServantSortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4185F4A & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_TypeInfo, v1);
    byte_4185F4A = 1;
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
    sub_B2C434(0LL, v1);
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

  if ( (byte_4185F4F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4185F4F = 1;
  }
  allDispObject = this->fields.allDispObject;
  if ( !allDispObject
    || (UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL),
        (allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B2C434(allDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B2C460(allDispObject);
      sub_B2C400(v9, 0LL);
    }
    servantBaseSelectList = this->fields.servantBaseSelectList;
    if ( servantBaseSelectList )
    {
      v8 = allDispSortBtnsLabel->m_Items[v5];
      if ( servantBaseSelectList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_4185F51 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4185F51 = 1;
  }
  buddyDispObject = this->fields.buddyDispObject;
  if ( !buddyDispObject
    || (UnityEngine_GameObject__SetActive(buddyDispObject, 1, 0LL),
        (buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B2C434(buddyDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B2C460(buddyDispObject);
      sub_B2C400(v9, 0LL);
    }
    buddySelectList = this->fields.buddySelectList;
    if ( buddySelectList )
    {
      v8 = buddyDispSortBtnsLabel->m_Items[v5];
      if ( buddySelectList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_4185F55 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4185F55 = 1;
  }
  commandCodeDispObject = this->fields.commandCodeDispObject;
  if ( !commandCodeDispObject
    || (UnityEngine_GameObject__SetActive(commandCodeDispObject, 1, 0LL),
        (commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B2C434(commandCodeDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B2C460(commandCodeDispObject);
      sub_B2C400(v9, 0LL);
    }
    commandCodeSelectList = this->fields.commandCodeSelectList;
    if ( commandCodeSelectList )
    {
      v8 = commandCodeDispSortBtnsLabel->m_Items[v5];
      if ( commandCodeSelectList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_4185F54 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4185F54 = 1;
  }
  costumeDispObject = this->fields.costumeDispObject;
  if ( !costumeDispObject
    || (UnityEngine_GameObject__SetActive(costumeDispObject, 1, 0LL),
        (costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B2C434(costumeDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B2C460(costumeDispObject);
      sub_B2C400(v9, 0LL);
    }
    servantCostumeSelectList = this->fields.servantCostumeSelectList;
    if ( servantCostumeSelectList )
    {
      v8 = costumeDispSortBtnsLabel->m_Items[v5];
      if ( servantCostumeSelectList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_4185F50 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4185F50 = 1;
  }
  fatigueDispObject = this->fields.fatigueDispObject;
  if ( !fatigueDispObject
    || (UnityEngine_GameObject__SetActive(fatigueDispObject, 1, 0LL),
        (fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B2C434(fatigueDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B2C460(fatigueDispObject);
      sub_B2C400(v9, 0LL);
    }
    fatigureSelectList = this->fields.fatigureSelectList;
    if ( fatigureSelectList )
    {
      v8 = fatigueDispSortBtnsLabel->m_Items[v5];
      if ( fatigureSelectList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_4185F49 & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_TypeInfo, v1);
    byte_4185F49 = 1;
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
    sub_B2C434(0LL, v1);
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

  if ( (byte_4185F4E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4185F4E = 1;
  }
  normalDispObject = this->fields.normalDispObject;
  if ( !normalDispObject
    || (UnityEngine_GameObject__SetActive(normalDispObject, 1, 0LL),
        (normalSortBtnsLabel = this->fields.normalSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B2C434(normalDispObject, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = normalSortBtnsLabel->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B2C460(normalDispObject);
      sub_B2C400(v9, 0LL);
    }
    servantSelectList = this->fields.servantSelectList;
    if ( servantSelectList )
    {
      v8 = normalSortBtnsLabel->m_Items[v5];
      if ( servantSelectList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_4185F52 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_4185F52 = 1;
  }
  shortDispObject = this->fields.shortDispObject;
  if ( !shortDispObject
    || (UnityEngine_GameObject__SetActive(shortDispObject, 1, 0LL),
        ServantSortSelectMenu__InitShortDispButtons(this, v4),
        (shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B2C434(shortDispObject, method);
  }
  v6 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortBtnsLabel->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v10 = sub_B2C460(shortDispObject);
      sub_B2C400(v10, 0LL);
    }
    servantEquipSelectList = this->fields.servantEquipSelectList;
    if ( servantEquipSelectList )
    {
      v9 = shortDispSortBtnsLabel->m_Items[v6];
      if ( servantEquipSelectList->fields._size <= (unsigned int)v6 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *servantEquipSelectList; // x0
  int32_t v9; // w0
  unsigned int v10; // w20
  char v11; // w21
  struct UICommonButton_array **p_shortDispSortButtons; // x22
  struct UICommonButton_array *shortDispSortButtons; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  struct UICommonButton_array *v15; // x22
  int max_length; // w8
  unsigned int v17; // w23
  Il2CppClass **v18; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  struct UISprite_array *shortDispSortSprites; // x8
  UISprite_o *v21; // x9
  int size; // w8
  int v23; // w10
  int v24; // w21
  unsigned int v25; // w22
  int v26; // w23
  int v27; // w25
  float mWidth; // s9
  float mHeight; // s10
  float y; // s12
  int v31; // w26
  float v32; // s0
  float v33; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v35; // x0
  __int64 v37; // x0

  if ( (byte_4185F53 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UICommonButton__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UICommonButton___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UICommonButton__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_UICommonButton__TypeInfo, v7);
    byte_4185F53 = 1;
  }
  servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)this->fields.servantEquipSelectList;
  if ( !servantEquipSelectList )
    goto LABEL_45;
  v9 = System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___IndexOf(
         servantEquipSelectList,
         24,
         (const MethodInfo_2F6B048 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
  if ( v9 == -1 )
  {
    p_shortDispSortButtons = &this->fields.shortDispSortButtons;
  }
  else
  {
    v10 = v9;
    servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)this->fields.baseSortInfo;
    if ( servantEquipSelectList )
    {
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)ListViewSort__get_IsWareHouseEquipList((ListViewSort_o *)servantEquipSelectList, 0LL);
      v11 = (char)servantEquipSelectList;
    }
    else
    {
      v11 = 0;
    }
    p_shortDispSortButtons = &this->fields.shortDispSortButtons;
    shortDispSortButtons = this->fields.shortDispSortButtons;
    if ( !shortDispSortButtons )
      goto LABEL_45;
    if ( v10 >= shortDispSortButtons->max_length )
      goto LABEL_46;
    servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)shortDispSortButtons->m_Items[v10];
    if ( !servantEquipSelectList )
      goto LABEL_45;
    servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
    if ( !servantEquipSelectList )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipSelectList, v11 & 1, 0LL);
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UICommonButton__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UICommonButton___ctor__);
  v15 = *p_shortDispSortButtons;
  if ( !v15 )
    goto LABEL_45;
  max_length = v15->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( v17 < max_length )
    {
      v18 = &v15->obj.klass + (int)v17;
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)v18[4];
      if ( !v19 )
        goto LABEL_45;
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18[4], 0LL);
      if ( !servantEquipSelectList )
        goto LABEL_45;
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)servantEquipSelectList, 0LL);
      if ( ((unsigned __int8)servantEquipSelectList & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_45;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UICommonButton__Add__);
      }
      max_length = v15->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_24;
    }
LABEL_46:
    v37 = sub_B2C460(servantEquipSelectList);
    sub_B2C400(v37, 0LL);
  }
LABEL_24:
  shortDispSortSprites = this->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
    goto LABEL_45;
  if ( !shortDispSortSprites->max_length )
    goto LABEL_46;
  v21 = shortDispSortSprites->m_Items[0];
  if ( !v21 || !v14 )
LABEL_45:
    sub_B2C434(servantEquipSelectList, method);
  size = v14->fields._size;
  v23 = size + 3;
  if ( size >= 0 )
    v23 = v14->fields._size;
  if ( size >= 1 )
  {
    v24 = 0;
    v25 = 0;
    v26 = v23 >> 2;
    v27 = (v14->fields._size & 3) - 1;
    mWidth = (float)v21->fields.mWidth;
    mHeight = (float)v21->fields.mHeight;
    while ( 1 )
    {
      y = this->fields.ShortDispSortButtonSpace.fields.y;
      if ( v24 >= v26 )
        v31 = v27;
      else
        v31 = 3;
      if ( size <= v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v14->fields._items->m_Items[v25];
      if ( !servantEquipSelectList )
        break;
      v32 = (float)(int)(v25 - 4 * v24) + (float)((float)v31 * -0.5);
      v33 = (float)(v32 * mWidth) + (float)(v32 * this->fields.ShortDispSortButtonSpace.fields.x);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, v33, 0LL);
      if ( v14->fields._size <= v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v14->fields._items->m_Items[v25];
      if ( !servantEquipSelectList )
        break;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionY(v35, -(float)((float)(y + mHeight) * (float)v24), 0LL);
      size = v14->fields._size;
      if ( (~v25++ & 3) == 0 )
        ++v24;
      if ( (int)v25 >= size )
        return;
    }
    goto LABEL_45;
  }
}


void __fastcall ServantSortSelectMenu__OnClickCancel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4185F60 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F60 = 1;
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

  if ( (byte_4185F77 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F77 = 1;
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
      sub_B2C434(v3, v4);
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

  if ( (byte_4185F5F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F5F = 1;
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
      sub_B2C434(baseSortInfo, v3);
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

  if ( (byte_4185F64 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F64 = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 24;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickHelp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *helpButton; // x0
  unsigned int kind; // w8
  System_Action_o *v8; // x20
  int32_t v9; // w1

  if ( (byte_4185F61 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ServantSortSelectMenu_OnClickHelpClose__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4185F61 = 1;
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
      sub_B2C434(helpButton, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    kind = this->fields.kind;
    if ( kind <= 8 )
    {
      if ( ((1 << kind) & 0x158) != 0 )
      {
        v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v9 = 41;
LABEL_12:
        EventTutorialMaster__ShowTutorialWithoutCheck(0, v9, v8, 0LL);
        return;
      }
      if ( kind == 5 )
      {
        v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v9 = 32;
        goto LABEL_12;
      }
    }
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
    v9 = 42;
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
    sub_B2C434(helpButton, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0LL);
}


void __fastcall ServantSortSelectMenu__OnClickSmartSort(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F76 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F76 = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.isSmartSort ^= 1u;
    ServantSortSelectMenu__SetSmartSortButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAdjustAtk(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F6E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F6E = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 16;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAdjustHp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F6D & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F6D = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 15;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAmount(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F6B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F6B = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 14;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAttack(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F69 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F69 = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 6;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortBuddy(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F75 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F75 = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 28;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortClass(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F62 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F62 = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 8;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCost(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F6A & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F6A = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 7;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCostume(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F6F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F6F = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 19;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCreate(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F63 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F63 = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 1;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortFriendShip(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F6C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F6C = 1;
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
      sub_B2C434(v3, v4);
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

  if ( (byte_4185F70 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F70 = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 20;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortHp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F68 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F68 = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 5;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortLevel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F66 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F66 = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 3;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortLimitCount(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F73 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F73 = 1;
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
      sub_B2C434(v3, v4);
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

  if ( (byte_4185F71 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F71 = 1;
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
      sub_B2C434(v3, v4);
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

  if ( (byte_4185F72 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F72 = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 22;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNpLevel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F67 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F67 = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 4;
    ServantSortSelectMenu__ChangeButtonSelect(this, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortRarity(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4185F65 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F65 = 1;
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
      sub_B2C434(v3, v4);
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

  if ( (byte_4185F74 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185F74 = 1;
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
      sub_B2C434(v3, v4);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  bool isChoiceSort; // w8
  ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
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
  __int64 *v55; // x22
  UILabel_o *choiceSortDetail; // x20
  UILabel_o *choiceSort2Detail; // x20
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x1
  int32_t v62; // w8
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x1
  int32_t v65; // w8
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x1
  int32_t v71; // w1
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x1
  const MethodInfo *v75; // x1
  const MethodInfo *v76; // x1
  const MethodInfo *v77; // x1
  System_Action_o *v78; // x20
  ServantSortSelectMenu_c *v79; // x0
  struct ListViewSort_o **p_commonServantEquipSortInfo; // x8
  struct ListViewSort_o *v81; // x1
  __int64 v82; // x0
  __int64 v83; // x1

  if ( (byte_4185F4C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&ListViewSort_TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&Method_ServantSortSelectMenu_EndOpen__, v15);
    sub_B2C35C(&ServantSortSelectMenu_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_12274/*"SORT_WINDOW_TITLE"*/, v17);
    sub_B2C35C(&StringLiteral_12266/*"SMART_SORT_DETAIL"*/, v18);
    sub_B2C35C(&StringLiteral_12267/*"SMART_SORT_NAME"*/, v19);
    sub_B2C35C(&StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/, v20);
    sub_B2C35C(&StringLiteral_2984/*"CHOICE_SORT_NAME"*/, v21);
    sub_B2C35C(&StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/, v22);
    sub_B2C35C(&StringLiteral_2983/*"CHOICE_SORT_DETAIL_REVERSE"*/, v23);
    sub_B2C35C(&StringLiteral_12273/*"SORT_WINDOW_DETAIL"*/, v24);
    sub_B2C35C(&StringLiteral_2982/*"CHOICE_SORT_DETAIL"*/, v25);
    byte_4185F4C = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      this->fields.openedKind = sort->fields.sortKind;
      this->fields.openedSmartSort = sort->fields.isSmartSort;
      isChoiceSort = sort->fields.isChoiceSort;
      baseSortInfo = this->fields.baseSortInfo;
      this->fields.openedChoiceSort = isChoiceSort;
      v34 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
      ListViewSort___ctor_33914748(v34, baseSortInfo, 0LL);
      this->fields.operationSortInfo = v34;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
        (System_Int32_array **)v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
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
                                                                              (System_String_o *)StringLiteral_12274/*"SORT_WINDOW_TITLE"*/,
                                                                              0LL);
                                if ( titleLabel )
                                {
                                  UILabel__set_text(titleLabel, (System_String_o *)allDispObject, 0LL);
                                  explanationLabel = this->fields.explanationLabel;
                                  allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_12273/*"SORT_WINDOW_DETAIL"*/,
                                                                                0LL);
                                  if ( explanationLabel )
                                  {
                                    UILabel__set_text(explanationLabel, (System_String_o *)allDispObject, 0LL);
                                    decideLabel = this->fields.decideLabel;
                                    allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/,
                                                                                  0LL);
                                    if ( decideLabel )
                                    {
                                      UILabel__set_text(decideLabel, (System_String_o *)allDispObject, 0LL);
                                      cancelLabel = this->fields.cancelLabel;
                                      allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/,
                                                                                    0LL);
                                      if ( cancelLabel )
                                      {
                                        UILabel__set_text(cancelLabel, (System_String_o *)allDispObject, 0LL);
                                        smartSortLabel = this->fields.smartSortLabel;
                                        allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_12267/*"SMART_SORT_NAME"*/,
                                                                                      0LL);
                                        if ( smartSortLabel )
                                        {
                                          UILabel__set_text(smartSortLabel, (System_String_o *)allDispObject, 0LL);
                                          smartSortDetail = this->fields.smartSortDetail;
                                          allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                        (System_String_o *)StringLiteral_12266/*"SMART_SORT_DETAIL"*/,
                                                                                        0LL);
                                          if ( smartSortDetail )
                                          {
                                            UILabel__set_text(smartSortDetail, (System_String_o *)allDispObject, 0LL);
                                            costumeSmartSortLabel = this->fields.costumeSmartSortLabel;
                                            allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_12267/*"SMART_SORT_NAME"*/,
                                                                                          0LL);
                                            if ( costumeSmartSortLabel )
                                            {
                                              UILabel__set_text(
                                                costumeSmartSortLabel,
                                                (System_String_o *)allDispObject,
                                                0LL);
                                              costumeSmartSortDetail = this->fields.costumeSmartSortDetail;
                                              allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                            (System_String_o *)StringLiteral_12266/*"SMART_SORT_DETAIL"*/,
                                                                                            0LL);
                                              if ( costumeSmartSortDetail )
                                              {
                                                UILabel__set_text(
                                                  costumeSmartSortDetail,
                                                  (System_String_o *)allDispObject,
                                                  0LL);
                                                smartChoiceLabel = this->fields.smartChoiceLabel;
                                                allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_2984/*"CHOICE_SORT_NAME"*/,
                                                                                              0LL);
                                                if ( smartChoiceLabel )
                                                {
                                                  UILabel__set_text(
                                                    smartChoiceLabel,
                                                    (System_String_o *)allDispObject,
                                                    0LL);
                                                  choiceSortLabel = this->fields.choiceSortLabel;
                                                  allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                                (System_String_o *)StringLiteral_2984/*"CHOICE_SORT_NAME"*/,
                                                                                                0LL);
                                                  if ( choiceSortLabel )
                                                  {
                                                    UILabel__set_text(
                                                      choiceSortLabel,
                                                      (System_String_o *)allDispObject,
                                                      0LL);
                                                    choiceSort2Label = this->fields.choiceSort2Label;
                                                    allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                                  (System_String_o *)StringLiteral_2984/*"CHOICE_SORT_NAME"*/,
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
                                                        v55 = &StringLiteral_2983/*"CHOICE_SORT_DETAIL_REVERSE"*/;
                                                      }
                                                      else
                                                      {
                                                        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                        {
                                                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                        }
                                                        v55 = &StringLiteral_2982/*"CHOICE_SORT_DETAIL"*/;
                                                      }
                                                      allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                                    (System_String_o *)*v55,
                                                                                                    0LL);
                                                      if ( smartChoiceDetail )
                                                      {
                                                        UILabel__set_text(
                                                          smartChoiceDetail,
                                                          (System_String_o *)allDispObject,
                                                          0LL);
                                                        choiceSortDetail = this->fields.choiceSortDetail;
                                                        allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v55, 0LL);
                                                        if ( choiceSortDetail )
                                                        {
                                                          UILabel__set_text(
                                                            choiceSortDetail,
                                                            (System_String_o *)allDispObject,
                                                            0LL);
                                                          choiceSort2Detail = this->fields.choiceSort2Detail;
                                                          allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v55, 0LL);
                                                          if ( choiceSort2Detail )
                                                          {
                                                            UILabel__set_text(
                                                              choiceSort2Detail,
                                                              (System_String_o *)allDispObject,
                                                              0LL);
                                                            ServantSortSelectMenu__SetEnableButtons(this, 1, v58);
                                                            switch ( this->fields.kind )
                                                            {
                                                              case 0:
                                                                ServantSortSelectMenu__InitAllDisp(this, v59);
                                                                ServantSortSelectMenu__SetAllButtonSelect(this, v67);
                                                                goto LABEL_58;
                                                              case 1:
                                                              case 3:
                                                                ServantSortSelectMenu__InitAllDisp(this, v59);
                                                                ServantSortSelectMenu__SetAllButtonSelect(this, v60);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v61);
                                                                allDispObject = (UnityEngine_GameObject_o *)this->fields.helpButton;
                                                                if ( !allDispObject )
                                                                  break;
                                                                allDispObject = UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)allDispObject,
                                                                                  0LL);
                                                                if ( !allDispObject )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL);
                                                                v62 = this->fields.kind;
                                                                if ( v62 == 3 )
                                                                  goto LABEL_74;
                                                                if ( v62 != 1 )
                                                                  goto LABEL_79;
                                                                goto LABEL_54;
                                                              case 2:
                                                              case 4:
                                                                ServantSortSelectMenu__InitShortDisp(this, v59);
                                                                ServantSortSelectMenu__SetShortButtonSelect(this, v63);
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
                                                                v65 = this->fields.kind;
                                                                if ( v65 == 4 )
                                                                {
                                                                  allDispObject = this->fields.choiceSortObject;
                                                                  if ( allDispObject )
                                                                  {
LABEL_77:
                                                                    UnityEngine_GameObject__SetActive(
                                                                      allDispObject,
                                                                      1,
                                                                      0LL);
                                                                    v71 = 41;
LABEL_78:
                                                                    EventTutorialMaster__CheckTutorial(
                                                                      0,
                                                                      v71,
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
                                                                  if ( v65 != 2 )
                                                                  {
LABEL_79:
                                                                    this->fields.state = 1;
                                                                    v78 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                                                                    System_Action___ctor(
                                                                      v78,
                                                                      (Il2CppObject *)this,
                                                                      Method_ServantSortSelectMenu_EndOpen__,
                                                                      0LL);
                                                                    BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
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
                                                                      v66);
LABEL_62:
                                                                    v71 = 42;
                                                                    goto LABEL_78;
                                                                  }
                                                                }
                                                                break;
                                                              case 5:
                                                                ServantSortSelectMenu__InitCostumeDisp(this, v59);
                                                                ServantSortSelectMenu__SetCostumeButtonSelect(this, v72);
                                                                ServantSortSelectMenu__SetSmartSortButtonSelect(
                                                                  this,
                                                                  v73);
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
                                                                v71 = 32;
                                                                goto LABEL_78;
                                                              case 6:
                                                                ServantSortSelectMenu__InitCommandCodeDisp(this, v59);
                                                                ServantSortSelectMenu__SetCommandCodeButtonSelect(
                                                                  this,
                                                                  v74);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v75);
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
                                                                ServantSortSelectMenu__InitFatigueDisp(this, v59);
                                                                ServantSortSelectMenu__SetFatigueButtonSelect(this, v68);
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
                                                                  v69);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v70);
                                                                goto LABEL_62;
                                                              case 8:
                                                                ServantSortSelectMenu__InitBuddyDisp(this, v59);
                                                                ServantSortSelectMenu__SetBuddyButtonSelect(this, v76);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v77);
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
      v79 = ServantSortSelectMenu_TypeInfo;
      if ( this->fields.kind == 2 )
      {
        if ( (WORD1(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
          v79 = ServantSortSelectMenu_TypeInfo;
        }
        p_commonServantEquipSortInfo = &v79->static_fields->commonServantEquipSortInfo;
      }
      else
      {
        if ( (WORD1(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
          v79 = ServantSortSelectMenu_TypeInfo;
        }
        p_commonServantEquipSortInfo = &v79->static_fields->commonServantSortInfo;
      }
      v81 = *p_commonServantEquipSortInfo;
      this->fields.baseSortInfo = *p_commonServantEquipSortInfo;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)v81,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      allDispObject = (UnityEngine_GameObject_o *)this->fields.baseSortInfo;
      if ( allDispObject )
      {
        ListViewSort__Load((ListViewSort_o *)allDispObject, 0LL);
        sub_B2C434(v82, v83);
      }
    }
    sub_B2C434(allDispObject, v41);
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
    sub_B2C434(this, isEnable);
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
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISprite_array *allDispSortSprites; // x8
  __int64 v6; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantBaseSelectList; // x24
  Il2CppClass **v10; // x8
  UISprite_o *v11; // x0
  System_String_o **v12; // x8
  __int64 v13; // x0

  v2 = this;
  if ( (byte_4185F57 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v4);
    byte_4185F57 = 1;
  }
  allDispSortSprites = v2->fields.allDispSortSprites;
  if ( !allDispSortSprites )
LABEL_16:
    sub_B2C434(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v13 = sub_B2C460(this);
      sub_B2C400(v13, 0LL);
    }
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      servantBaseSelectList = v2->fields.servantBaseSelectList;
      if ( servantBaseSelectList )
      {
        v10 = &allDispSortSprites->obj.klass + v6;
        if ( servantBaseSelectList->fields._size <= (unsigned int)v6 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( v10[4] )
        {
          v11 = (UISprite_o *)v10[4];
          v12 = (System_String_o **)(operationSortInfo->fields.sortKind == servantBaseSelectList->fields._items->m_Items[v6 + 1]
                                   ? &StringLiteral_16956/*"btn_bg_03"*/
                                   : &StringLiteral_16957/*"btn_bg_04"*/);
          UISprite__set_spriteName(v11, *v12, 0LL);
          allDispSortSprites = v2->fields.allDispSortSprites;
          ++v6;
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
    sub_B2C434(this, isEnable);
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
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISprite_array *buddyDispSortSprites; // x8
  __int64 v6; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *buddySelectList; // x24
  Il2CppClass **v10; // x8
  UISprite_o *v11; // x0
  System_String_o **v12; // x8
  __int64 v13; // x0

  v2 = this;
  if ( (byte_4185F59 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v4);
    byte_4185F59 = 1;
  }
  buddyDispSortSprites = v2->fields.buddyDispSortSprites;
  if ( !buddyDispSortSprites )
LABEL_16:
    sub_B2C434(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v13 = sub_B2C460(this);
      sub_B2C400(v13, 0LL);
    }
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      buddySelectList = v2->fields.buddySelectList;
      if ( buddySelectList )
      {
        v10 = &buddyDispSortSprites->obj.klass + v6;
        if ( buddySelectList->fields._size <= (unsigned int)v6 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( v10[4] )
        {
          v11 = (UISprite_o *)v10[4];
          v12 = (System_String_o **)(operationSortInfo->fields.sortKind == buddySelectList->fields._items->m_Items[v6 + 1]
                                   ? &StringLiteral_16956/*"btn_bg_03"*/
                                   : &StringLiteral_16957/*"btn_bg_04"*/);
          UISprite__set_spriteName(v11, *v12, 0LL);
          buddyDispSortSprites = v2->fields.buddyDispSortSprites;
          ++v6;
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
  __int64 v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_4185F5E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, method);
    this = (ServantSortSelectMenu_o *)sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v3);
    byte_4185F5E = 1;
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
        sub_B2C434(this, method);
LABEL_12:
      if ( operationSortInfo->fields.isChoiceSort )
        v5 = &StringLiteral_17006/*"btn_on"*/;
      else
        v5 = &StringLiteral_17005/*"btn_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v5, 0LL);
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
    sub_B2C434(this, isEnable);
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
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISprite_array *commandCodeDispSprites; // x8
  __int64 v6; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *commandCodeSelectList; // x24
  Il2CppClass **v10; // x8
  UISprite_o *v11; // x0
  System_String_o **v12; // x8
  __int64 v13; // x0

  v2 = this;
  if ( (byte_4185F5C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v4);
    byte_4185F5C = 1;
  }
  commandCodeDispSprites = v2->fields.commandCodeDispSprites;
  if ( !commandCodeDispSprites )
LABEL_16:
    sub_B2C434(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v13 = sub_B2C460(this);
      sub_B2C400(v13, 0LL);
    }
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      commandCodeSelectList = v2->fields.commandCodeSelectList;
      if ( commandCodeSelectList )
      {
        v10 = &commandCodeDispSprites->obj.klass + v6;
        if ( commandCodeSelectList->fields._size <= (unsigned int)v6 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( v10[4] )
        {
          v11 = (UISprite_o *)v10[4];
          v12 = (System_String_o **)(operationSortInfo->fields.sortKind == commandCodeSelectList->fields._items->m_Items[v6 + 1]
                                   ? &StringLiteral_16956/*"btn_bg_03"*/
                                   : &StringLiteral_16957/*"btn_bg_04"*/);
          UISprite__set_spriteName(v11, *v12, 0LL);
          commandCodeDispSprites = v2->fields.commandCodeDispSprites;
          ++v6;
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
    sub_B2C434(this, isEnable);
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
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISprite_array *costumeDispSprites; // x8
  __int64 v6; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantCostumeSelectList; // x24
  Il2CppClass **v10; // x8
  UISprite_o *v11; // x0
  System_String_o **v12; // x8
  __int64 v13; // x0

  v2 = this;
  if ( (byte_4185F5B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v4);
    byte_4185F5B = 1;
  }
  costumeDispSprites = v2->fields.costumeDispSprites;
  if ( !costumeDispSprites )
LABEL_16:
    sub_B2C434(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v13 = sub_B2C460(this);
      sub_B2C400(v13, 0LL);
    }
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      servantCostumeSelectList = v2->fields.servantCostumeSelectList;
      if ( servantCostumeSelectList )
      {
        v10 = &costumeDispSprites->obj.klass + v6;
        if ( servantCostumeSelectList->fields._size <= (unsigned int)v6 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( v10[4] )
        {
          v11 = (UISprite_o *)v10[4];
          v12 = (System_String_o **)(operationSortInfo->fields.sortKind == servantCostumeSelectList->fields._items->m_Items[v6 + 1]
                                   ? &StringLiteral_16956/*"btn_bg_03"*/
                                   : &StringLiteral_16957/*"btn_bg_04"*/);
          UISprite__set_spriteName(v11, *v12, 0LL);
          costumeDispSprites = v2->fields.costumeDispSprites;
          ++v6;
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
    sub_B2C434(decideButton, isEnable);
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
    sub_B2C434(this, isEnable);
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
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISprite_array *fatigueDispSortSprites; // x8
  __int64 v6; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *fatigureSelectList; // x24
  Il2CppClass **v10; // x8
  UISprite_o *v11; // x0
  System_String_o **v12; // x8
  __int64 v13; // x0

  v2 = this;
  if ( (byte_4185F58 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v4);
    byte_4185F58 = 1;
  }
  fatigueDispSortSprites = v2->fields.fatigueDispSortSprites;
  if ( !fatigueDispSortSprites )
LABEL_16:
    sub_B2C434(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v13 = sub_B2C460(this);
      sub_B2C400(v13, 0LL);
    }
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      fatigureSelectList = v2->fields.fatigureSelectList;
      if ( fatigureSelectList )
      {
        v10 = &fatigueDispSortSprites->obj.klass + v6;
        if ( fatigureSelectList->fields._size <= (unsigned int)v6 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( v10[4] )
        {
          v11 = (UISprite_o *)v10[4];
          v12 = (System_String_o **)(operationSortInfo->fields.sortKind == fatigureSelectList->fields._items->m_Items[v6 + 1]
                                   ? &StringLiteral_16956/*"btn_bg_03"*/
                                   : &StringLiteral_16957/*"btn_bg_04"*/);
          UISprite__set_spriteName(v11, *v12, 0LL);
          fatigueDispSortSprites = v2->fields.fatigueDispSortSprites;
          ++v6;
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
    sub_B2C434(this, isEnable);
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
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct UICommonButton_array *normalSortButtons; // x8
  __int64 v6; // x21
  struct UISprite_array *normalSortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantSelectList; // x24
  Il2CppClass **v10; // x8
  UISprite_o *v11; // x0
  System_String_o **v12; // x8
  __int64 v13; // x0

  v2 = this;
  if ( (byte_4185F56 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v4);
    byte_4185F56 = 1;
  }
  normalSortButtons = v2->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_17:
    sub_B2C434(this, method);
  v6 = 0LL;
  while ( (int)v6 < (signed int)normalSortButtons->max_length )
  {
    normalSortSprites = v2->fields.normalSortSprites;
    if ( normalSortSprites )
    {
      if ( (unsigned int)v6 >= normalSortSprites->max_length )
      {
        v13 = sub_B2C460(this);
        sub_B2C400(v13, 0LL);
      }
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        servantSelectList = v2->fields.servantSelectList;
        if ( servantSelectList )
        {
          v10 = &normalSortSprites->obj.klass + v6;
          if ( servantSelectList->fields._size <= (unsigned int)v6 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( v10[4] )
          {
            v11 = (UISprite_o *)v10[4];
            v12 = (System_String_o **)(operationSortInfo->fields.sortKind == servantSelectList->fields._items->m_Items[v6 + 1]
                                     ? &StringLiteral_16956/*"btn_bg_03"*/
                                     : &StringLiteral_16957/*"btn_bg_04"*/);
            UISprite__set_spriteName(v11, *v12, 0LL);
            normalSortButtons = v2->fields.normalSortButtons;
            ++v6;
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
    sub_B2C434(this, isEnable);
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
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISprite_array *shortDispSortSprites; // x8
  __int64 v6; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantEquipSelectList; // x24
  Il2CppClass **v10; // x8
  UISprite_o *v11; // x0
  System_String_o **v12; // x8
  __int64 v13; // x0

  v2 = this;
  if ( (byte_4185F5A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v3);
    this = (ServantSortSelectMenu_o *)sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v4);
    byte_4185F5A = 1;
  }
  shortDispSortSprites = v2->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
LABEL_16:
    sub_B2C434(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortSprites->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v13 = sub_B2C460(this);
      sub_B2C400(v13, 0LL);
    }
    operationSortInfo = v2->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      servantEquipSelectList = v2->fields.servantEquipSelectList;
      if ( servantEquipSelectList )
      {
        v10 = &shortDispSortSprites->obj.klass + v6;
        if ( servantEquipSelectList->fields._size <= (unsigned int)v6 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( v10[4] )
        {
          v11 = (UISprite_o *)v10[4];
          v12 = (System_String_o **)(operationSortInfo->fields.sortKind == servantEquipSelectList->fields._items->m_Items[v6 + 1]
                                   ? &StringLiteral_16956/*"btn_bg_03"*/
                                   : &StringLiteral_16957/*"btn_bg_04"*/);
          UISprite__set_spriteName(v11, *v12, 0LL);
          shortDispSortSprites = v2->fields.shortDispSortSprites;
          ++v6;
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
  __int64 v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_4185F5D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, method);
    this = (ServantSortSelectMenu_o *)sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v3);
    byte_4185F5D = 1;
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
      sub_B2C434(this, method);
  }
  if ( operationSortInfo->fields.isSmartSort )
    v5 = &StringLiteral_17006/*"btn_on"*/;
  else
    v5 = &StringLiteral_17005/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v5, 0LL);
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

  if ( (byte_4185F47 & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4185F47 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantSortSelectMenu_o *)sub_B2C728(v7);
  ServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantSortSelectMenu__get_closeBtnPath(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4185F78 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15477/*"Window/CancelButton"*/, method);
    byte_4185F78 = 1;
  }
  return (System_String_o *)StringLiteral_15477/*"Window/CancelButton"*/;
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

  if ( (byte_4185F48 & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4185F48 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B2C728(v7);
  ServantSortSelectMenu__InitLoad(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu_CallbackFunc___ctor(
        ServantSortSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4185418 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_4185418 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ServantSortSelectMenu_CallbackFunc__EndInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu_CallbackFunc__Invoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ServantSortSelectMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  ServantSortSelectMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ServantSortSelectMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantSortSelectMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}