void __fastcall ServantSortSelectMenu___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  ListViewSort_o *v16; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  ListViewSort_o *v24; // x19
  struct ServantSortSelectMenu_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  ListViewSort_o *v32; // x19
  struct ServantSortSelectMenu_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42E6DE0 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ServantSortSelectMenu_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_12878/*"ServantSortSelect1"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_12879/*"ServantSortSelect2"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_12880/*"ServantSortSelect4"*/, v13, v14, v15);
    byte_42E6DE0 = 1;
  }
  v16 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v16, (System_String_o *)StringLiteral_12878/*"ServantSortSelect1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantSortSelectMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v16;
  sub_B5D560(static_fields, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
  v24 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v24, (System_String_o *)StringLiteral_12879/*"ServantSortSelect2"*/, 3, 0, 0LL);
  v25 = ServantSortSelectMenu_TypeInfo->static_fields;
  v25->commonServantEquipSortInfo = v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v25->commonServantEquipSortInfo,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v32, (System_String_o *)StringLiteral_12880/*"ServantSortSelect4"*/, 3, 0, 0LL);
  v33 = ServantSortSelectMenu_TypeInfo->static_fields;
  v33->commandCodeSortInfo = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v33->commandCodeSortInfo,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


void __fastcall ServantSortSelectMenu___ctor(ServantSortSelectMenu_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_VoiceCondType_Type__o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v44; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v51; // x20
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v58; // x20
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_42E6DDF & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo, v11, v12, v13);
    byte_42E6DDF = 1;
  }
  this->fields.ShortDispSortButtonSpace = (struct UnityEngine_Vector2_o)0x40A0000041200000LL;
  v14 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v14,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v14 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    10,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    4,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    7,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    5,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    6,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    15,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    16,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    14,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    8,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantBaseSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantBaseSelectList,
    (System_Int32_array **)v14,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v23,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v23 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    10,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    4,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    7,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    5,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    6,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    15,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    16,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    14,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    8,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    25,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.fatigureSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fatigureSelectList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v30,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v30 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v30,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v30,
    10,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v30,
    4,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v30,
    7,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v30,
    5,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v30,
    6,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v30,
    15,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v30,
    16,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v30,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v30,
    14,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v30,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v30,
    8,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v30,
    28,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.buddySelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v30;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.buddySelectList,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v37,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v37 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    10,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    4,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    7,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    5,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    6,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    14,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    8,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v37;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantSelectList,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v44,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v44 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v44,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v44,
    5,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v44,
    6,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v44,
    7,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v44,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v44,
    14,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v44,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v44,
    24,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantEquipSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v44;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEquipSelectList,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v51,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v51 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v51,
    8,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v51,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v51,
    19,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v51,
    20,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v51,
    21,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v51,
    22,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v51,
    23,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v51,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantCostumeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v51;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantCostumeSelectList,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v58,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v58 )
LABEL_14:
    sub_B5D69C(v15, v16);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v58,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v58,
    14,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v58,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.commandCodeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v58;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeSelectList,
    (System_Int32_array **)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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

  ServantSortSelectMenu__Close_22114116(this, 0LL, v2);
}


void __fastcall ServantSortSelectMenu__Close_22114116(
        ServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Action_o *v15; // x20

  if ( (byte_42E6DB3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantSortSelectMenu_EndClose__, v6, v7, v8);
    byte_42E6DB3 = 1;
  }
  ServantSortSelectMenu__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  int v2; // w2
  __int64 v3; // x3
  ServantSortSelectMenu_c *v4; // x0
  ListViewSort_o *commonServantEquipSortInfo; // x0

  if ( (byte_42E6DB1 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_TypeInfo, v1, v2, v3);
    byte_42E6DB1 = 1;
  }
  v4 = ServantSortSelectMenu_TypeInfo;
  if ( (BYTE3(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v4 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantEquipSortInfo = v4->static_fields->commonServantEquipSortInfo;
  if ( !commonServantEquipSortInfo )
    sub_B5D69C(0LL, v1);
  ListViewSort__Load(commonServantEquipSortInfo, 0LL);
  return ServantSortSelectMenu_TypeInfo->static_fields->commonServantEquipSortInfo;
}


ListViewSort_o *__fastcall ServantSortSelectMenu__GetServantSortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  ServantSortSelectMenu_c *v4; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_42E6DB0 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_TypeInfo, v1, v2, v3);
    byte_42E6DB0 = 1;
  }
  v4 = ServantSortSelectMenu_TypeInfo;
  if ( (BYTE3(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v4 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v4->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_B5D69C(0LL, v1);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *allDispObject; // x0
  struct UILabel_array *allDispSortBtnsLabel; // x8
  __int64 v7; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantBaseSelectList; // x23
  UILabel_o *v10; // x20
  __int64 v11; // x0

  if ( (byte_42E6DB5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    byte_42E6DB5 = 1;
  }
  allDispObject = this->fields.allDispObject;
  if ( !allDispObject
    || (UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL),
        (allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(allDispObject, method);
  }
  v7 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortBtnsLabel->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v11 = sub_B5D6C8(allDispObject);
      sub_B5D668(v11, 0LL);
    }
    servantBaseSelectList = this->fields.servantBaseSelectList;
    if ( servantBaseSelectList )
    {
      v10 = allDispSortBtnsLabel->m_Items[v7];
      if ( servantBaseSelectList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( this->fields.operationSortInfo )
      {
        allDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                      this->fields.operationSortInfo,
                                                      servantBaseSelectList->fields._items->m_Items[v7 + 1],
                                                      0LL);
        if ( v10 )
        {
          UILabel__set_text(v10, (System_String_o *)allDispObject, 0LL);
          allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel;
          ++v7;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *buddyDispObject; // x0
  struct UILabel_array *buddyDispSortBtnsLabel; // x8
  __int64 v7; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *buddySelectList; // x23
  UILabel_o *v10; // x20
  __int64 v11; // x0

  if ( (byte_42E6DB7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    byte_42E6DB7 = 1;
  }
  buddyDispObject = this->fields.buddyDispObject;
  if ( !buddyDispObject
    || (UnityEngine_GameObject__SetActive(buddyDispObject, 1, 0LL),
        (buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(buddyDispObject, method);
  }
  v7 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortBtnsLabel->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v11 = sub_B5D6C8(buddyDispObject);
      sub_B5D668(v11, 0LL);
    }
    buddySelectList = this->fields.buddySelectList;
    if ( buddySelectList )
    {
      v10 = buddyDispSortBtnsLabel->m_Items[v7];
      if ( buddySelectList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( this->fields.operationSortInfo )
      {
        buddyDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                        this->fields.operationSortInfo,
                                                        buddySelectList->fields._items->m_Items[v7 + 1],
                                                        0LL);
        if ( v10 )
        {
          UILabel__set_text(v10, (System_String_o *)buddyDispObject, 0LL);
          buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel;
          ++v7;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *commandCodeDispObject; // x0
  struct UILabel_array *commandCodeDispSortBtnsLabel; // x8
  __int64 v7; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *commandCodeSelectList; // x23
  UILabel_o *v10; // x20
  __int64 v11; // x0

  if ( (byte_42E6DBB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    byte_42E6DBB = 1;
  }
  commandCodeDispObject = this->fields.commandCodeDispObject;
  if ( !commandCodeDispObject
    || (UnityEngine_GameObject__SetActive(commandCodeDispObject, 1, 0LL),
        (commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(commandCodeDispObject, method);
  }
  v7 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSortBtnsLabel->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v11 = sub_B5D6C8(commandCodeDispObject);
      sub_B5D668(v11, 0LL);
    }
    commandCodeSelectList = this->fields.commandCodeSelectList;
    if ( commandCodeSelectList )
    {
      v10 = commandCodeDispSortBtnsLabel->m_Items[v7];
      if ( commandCodeSelectList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( this->fields.operationSortInfo )
      {
        commandCodeDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                              this->fields.operationSortInfo,
                                                              commandCodeSelectList->fields._items->m_Items[v7 + 1],
                                                              0LL);
        if ( v10 )
        {
          UILabel__set_text(v10, (System_String_o *)commandCodeDispObject, 0LL);
          commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel;
          ++v7;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *costumeDispObject; // x0
  struct UILabel_array *costumeDispSortBtnsLabel; // x8
  __int64 v7; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantCostumeSelectList; // x23
  UILabel_o *v10; // x20
  __int64 v11; // x0

  if ( (byte_42E6DBA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    byte_42E6DBA = 1;
  }
  costumeDispObject = this->fields.costumeDispObject;
  if ( !costumeDispObject
    || (UnityEngine_GameObject__SetActive(costumeDispObject, 1, 0LL),
        (costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(costumeDispObject, method);
  }
  v7 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSortBtnsLabel->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v11 = sub_B5D6C8(costumeDispObject);
      sub_B5D668(v11, 0LL);
    }
    servantCostumeSelectList = this->fields.servantCostumeSelectList;
    if ( servantCostumeSelectList )
    {
      v10 = costumeDispSortBtnsLabel->m_Items[v7];
      if ( servantCostumeSelectList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( this->fields.operationSortInfo )
      {
        costumeDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                          this->fields.operationSortInfo,
                                                          servantCostumeSelectList->fields._items->m_Items[v7 + 1],
                                                          0LL);
        if ( v10 )
        {
          UILabel__set_text(v10, (System_String_o *)costumeDispObject, 0LL);
          costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel;
          ++v7;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *fatigueDispObject; // x0
  struct UILabel_array *fatigueDispSortBtnsLabel; // x8
  __int64 v7; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *fatigureSelectList; // x23
  UILabel_o *v10; // x20
  __int64 v11; // x0

  if ( (byte_42E6DB6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    byte_42E6DB6 = 1;
  }
  fatigueDispObject = this->fields.fatigueDispObject;
  if ( !fatigueDispObject
    || (UnityEngine_GameObject__SetActive(fatigueDispObject, 1, 0LL),
        (fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(fatigueDispObject, method);
  }
  v7 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortBtnsLabel->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v11 = sub_B5D6C8(fatigueDispObject);
      sub_B5D668(v11, 0LL);
    }
    fatigureSelectList = this->fields.fatigureSelectList;
    if ( fatigureSelectList )
    {
      v10 = fatigueDispSortBtnsLabel->m_Items[v7];
      if ( fatigureSelectList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( this->fields.operationSortInfo )
      {
        fatigueDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                          this->fields.operationSortInfo,
                                                          fatigureSelectList->fields._items->m_Items[v7 + 1],
                                                          0LL);
        if ( v10 )
        {
          UILabel__set_text(v10, (System_String_o *)fatigueDispObject, 0LL);
          fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel;
          ++v7;
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
  int v2; // w2
  __int64 v3; // x3
  ServantSortSelectMenu_c *v4; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_42E6DAF & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_TypeInfo, v1, v2, v3);
    byte_42E6DAF = 1;
  }
  v4 = ServantSortSelectMenu_TypeInfo;
  if ( (BYTE3(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
    v4 = ServantSortSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v4->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_B5D69C(0LL, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0LL);
}


void __fastcall ServantSortSelectMenu__InitNormalDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *normalDispObject; // x0
  struct UILabel_array *normalSortBtnsLabel; // x8
  __int64 v7; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantSelectList; // x23
  UILabel_o *v10; // x20
  __int64 v11; // x0

  if ( (byte_42E6DB4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    byte_42E6DB4 = 1;
  }
  normalDispObject = this->fields.normalDispObject;
  if ( !normalDispObject
    || (UnityEngine_GameObject__SetActive(normalDispObject, 1, 0LL),
        (normalSortBtnsLabel = this->fields.normalSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(normalDispObject, method);
  }
  v7 = 0LL;
  while ( 1 )
  {
    max_length = normalSortBtnsLabel->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v11 = sub_B5D6C8(normalDispObject);
      sub_B5D668(v11, 0LL);
    }
    servantSelectList = this->fields.servantSelectList;
    if ( servantSelectList )
    {
      v10 = normalSortBtnsLabel->m_Items[v7];
      if ( servantSelectList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( this->fields.operationSortInfo )
      {
        normalDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                         this->fields.operationSortInfo,
                                                         servantSelectList->fields._items->m_Items[v7 + 1],
                                                         0LL);
        if ( v10 )
        {
          UILabel__set_text(v10, (System_String_o *)normalDispObject, 0LL);
          normalSortBtnsLabel = this->fields.normalSortBtnsLabel;
          ++v7;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *shortDispObject; // x0
  const MethodInfo *v6; // x1
  struct UILabel_array *shortDispSortBtnsLabel; // x8
  __int64 v8; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantEquipSelectList; // x23
  UILabel_o *v11; // x20
  __int64 v12; // x0

  if ( (byte_42E6DB8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    byte_42E6DB8 = 1;
  }
  shortDispObject = this->fields.shortDispObject;
  if ( !shortDispObject
    || (UnityEngine_GameObject__SetActive(shortDispObject, 1, 0LL),
        ServantSortSelectMenu__InitShortDispButtons(this, v6),
        (shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(shortDispObject, method);
  }
  v8 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortBtnsLabel->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
    {
      v12 = sub_B5D6C8(shortDispObject);
      sub_B5D668(v12, 0LL);
    }
    servantEquipSelectList = this->fields.servantEquipSelectList;
    if ( servantEquipSelectList )
    {
      v11 = shortDispSortBtnsLabel->m_Items[v8];
      if ( servantEquipSelectList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( this->fields.operationSortInfo )
      {
        shortDispObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                        this->fields.operationSortInfo,
                                                        servantEquipSelectList->fields._items->m_Items[v8 + 1],
                                                        0LL);
        if ( v11 )
        {
          UILabel__set_text(v11, (System_String_o *)shortDispObject, 0LL);
          shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel;
          ++v8;
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
  System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *servantEquipSelectList; // x0
  int32_t v21; // w0
  unsigned int v22; // w20
  char v23; // w21
  struct UICommonButton_array **p_shortDispSortButtons; // x22
  struct UICommonButton_array *shortDispSortButtons; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  struct UICommonButton_array *v27; // x22
  int max_length; // w8
  unsigned int v29; // w23
  Il2CppClass **v30; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x21
  struct UISprite_array *shortDispSortSprites; // x8
  UISprite_o *v33; // x9
  int size; // w8
  int v35; // w10
  int v36; // w21
  unsigned int v37; // w22
  int v38; // w23
  int v39; // w25
  float mWidth; // s9
  float mHeight; // s10
  float y; // s12
  int v43; // w26
  float v44; // s0
  float v45; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v47; // x0
  __int64 v49; // x0

  if ( (byte_42E6DB9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UICommonButton__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UICommonButton___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UICommonButton__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_UICommonButton__TypeInfo, v17, v18, v19);
    byte_42E6DB9 = 1;
  }
  servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)this->fields.servantEquipSelectList;
  if ( !servantEquipSelectList )
    goto LABEL_45;
  v21 = System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___IndexOf(
          servantEquipSelectList,
          24,
          (const MethodInfo_3045828 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
  if ( v21 == -1 )
  {
    p_shortDispSortButtons = &this->fields.shortDispSortButtons;
  }
  else
  {
    v22 = v21;
    servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)this->fields.baseSortInfo;
    if ( servantEquipSelectList )
    {
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)ListViewSort__get_IsWareHouseEquipList((ListViewSort_o *)servantEquipSelectList, 0LL);
      v23 = (char)servantEquipSelectList;
    }
    else
    {
      v23 = 0;
    }
    p_shortDispSortButtons = &this->fields.shortDispSortButtons;
    shortDispSortButtons = this->fields.shortDispSortButtons;
    if ( !shortDispSortButtons )
      goto LABEL_45;
    if ( v22 >= shortDispSortButtons->max_length )
      goto LABEL_46;
    servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)shortDispSortButtons->m_Items[v22];
    if ( !servantEquipSelectList )
      goto LABEL_45;
    servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
    if ( !servantEquipSelectList )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipSelectList, v23 & 1, 0LL);
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UICommonButton__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UICommonButton___ctor__);
  v27 = *p_shortDispSortButtons;
  if ( !v27 )
    goto LABEL_45;
  max_length = v27->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( v29 < max_length )
    {
      v30 = &v27->obj.klass + (int)v29;
      v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)v30[4];
      if ( !v31 )
        goto LABEL_45;
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30[4], 0LL);
      if ( !servantEquipSelectList )
        goto LABEL_45;
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)servantEquipSelectList, 0LL);
      if ( ((unsigned __int8)servantEquipSelectList & 1) != 0 )
      {
        if ( !v26 )
          goto LABEL_45;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v26,
          v31,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UICommonButton__Add__);
      }
      max_length = v27->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_24;
    }
LABEL_46:
    v49 = sub_B5D6C8(servantEquipSelectList);
    sub_B5D668(v49, 0LL);
  }
LABEL_24:
  shortDispSortSprites = this->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
    goto LABEL_45;
  if ( !shortDispSortSprites->max_length )
    goto LABEL_46;
  v33 = shortDispSortSprites->m_Items[0];
  if ( !v33 || !v26 )
LABEL_45:
    sub_B5D69C(servantEquipSelectList, method);
  size = v26->fields._size;
  v35 = size + 3;
  if ( size >= 0 )
    v35 = v26->fields._size;
  if ( size >= 1 )
  {
    v36 = 0;
    v37 = 0;
    v38 = v35 >> 2;
    v39 = (v26->fields._size & 3) - 1;
    mWidth = (float)v33->fields.mWidth;
    mHeight = (float)v33->fields.mHeight;
    while ( 1 )
    {
      y = this->fields.ShortDispSortButtonSpace.fields.y;
      if ( v36 >= v38 )
        v43 = v39;
      else
        v43 = 3;
      if ( size <= v37 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v26->fields._items->m_Items[v37];
      if ( !servantEquipSelectList )
        break;
      v44 = (float)(int)(v37 - 4 * v36) + (float)((float)v43 * -0.5);
      v45 = (float)(v44 * mWidth) + (float)(v44 * this->fields.ShortDispSortButtonSpace.fields.x);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, v45, 0LL);
      if ( v26->fields._size <= v37 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      servantEquipSelectList = (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v26->fields._items->m_Items[v37];
      if ( !servantEquipSelectList )
        break;
      v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipSelectList, 0LL);
      GameObjectExtensions__SetLocalPositionY(v47, -(float)((float)(y + mHeight) * (float)v36), 0LL);
      size = v26->fields._size;
      if ( (~v37++ & 3) == 0 )
        ++v36;
      if ( (int)v37 >= size )
        return;
    }
    goto LABEL_45;
  }
}


void __fastcall ServantSortSelectMenu__OnClickCancel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E6DC6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DC6 = 1;
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
    ServantSortSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall ServantSortSelectMenu__OnClickChoiceSort(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DDD & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DDD = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.isChoiceSort ^= 1u;
    ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickDecide(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v7; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  bool v9; // w1
  ServantSortSelectMenu_o *v10; // x0

  if ( (byte_42E6DC5 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DC5 = 1;
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
      sub_B5D69C(baseSortInfo, v5);
    }
    if ( this->fields.openedKind == operationSortInfo->fields.sortKind
      && !this->fields.openedSmartSort != operationSortInfo->fields.isSmartSort
      && this->fields.openedChoiceSort == operationSortInfo->fields.isChoiceSort )
    {
      v10 = this;
      v9 = 0;
    }
    else
    {
      v9 = 1;
      v10 = this;
    }
    ServantSortSelectMenu__Callback(v10, v9, v7);
  }
}


void __fastcall ServantSortSelectMenu__OnClickEventOrder(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DCA & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DCA = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 24;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickHelp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  UnityEngine_Component_o *helpButton; // x0
  unsigned int kind; // w8
  System_Action_o *v14; // x20
  int32_t v15; // w1

  if ( (byte_42E6DC7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantSortSelectMenu_OnClickHelpClose__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E6DC7 = 1;
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
      sub_B5D69C(helpButton, v11);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    kind = this->fields.kind;
    if ( kind <= 8 )
    {
      if ( ((1 << kind) & 0x158) != 0 )
      {
        v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v15 = 41;
LABEL_12:
        EventTutorialMaster__ShowTutorialWithoutCheck(0, v15, v14, 0LL);
        return;
      }
      if ( kind == 5 )
      {
        v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v15 = 32;
        goto LABEL_12;
      }
    }
    v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
    v15 = 42;
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
    sub_B5D69C(helpButton, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0LL);
}


void __fastcall ServantSortSelectMenu__OnClickSmartSort(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DDC & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DDC = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.isSmartSort ^= 1u;
    ServantSortSelectMenu__SetSmartSortButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAdjustAtk(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DD4 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DD4 = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 16;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAdjustHp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DD3 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DD3 = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 15;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAmount(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DD1 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DD1 = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 14;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAttack(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DCF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DCF = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 6;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortBuddy(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DDB & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DDB = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 28;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortClass(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DC8 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DC8 = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 8;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCost(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DD0 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DD0 = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 7;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCostume(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DD5 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DD5 = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 19;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCreate(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DC9 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DC9 = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 1;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortFriendShip(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DD2 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DD2 = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 10;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortHavingCostume(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DD6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DD6 = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 20;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortHp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DCE & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DCE = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 5;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortLevel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DCC & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DCC = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 3;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortLimitCount(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DD9 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DD9 = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 23;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNotHavingCostume(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DD7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DD7 = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 21;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNotHavingItem(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DD8 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DD8 = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 22;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNpLevel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DCD & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DCD = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 4;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortRarity(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DCB & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DCB = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 2;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortRecoveryFatigue(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6DDA & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6DDA = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 25;
    ServantSortSelectMenu__ChangeButtonSelect(this, v6);
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  bool isChoiceSort; // w8
  ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v60; // x22
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x1
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
  __int64 *v81; // x22
  UILabel_o *choiceSortDetail; // x20
  UILabel_o *choiceSort2Detail; // x20
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x1
  const MethodInfo *v86; // x1
  const MethodInfo *v87; // x1
  int32_t v88; // w8
  const MethodInfo *v89; // x1
  const MethodInfo *v90; // x1
  int32_t v91; // w8
  const MethodInfo *v92; // x1
  const MethodInfo *v93; // x1
  const MethodInfo *v94; // x1
  const MethodInfo *v95; // x1
  const MethodInfo *v96; // x1
  int32_t v97; // w1
  const MethodInfo *v98; // x1
  const MethodInfo *v99; // x1
  const MethodInfo *v100; // x1
  const MethodInfo *v101; // x1
  const MethodInfo *v102; // x1
  const MethodInfo *v103; // x1
  System_Action_o *v104; // x20
  ServantSortSelectMenu_c *v105; // x0
  struct ListViewSort_o **p_commonServantEquipSortInfo; // x8
  struct ListViewSort_o *v107; // x1
  __int64 v108; // x0
  __int64 v109; // x1

  if ( (byte_42E6DB2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)sort, isChoiceReverse);
    sub_B5D5C4(&ListViewSort_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_ServantSortSelectMenu_EndOpen__, v19, v20, v21);
    sub_B5D5C4(&ServantSortSelectMenu_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_12421/*"SORT_WINDOW_TITLE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_12413/*"SMART_SORT_DETAIL"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_12414/*"SMART_SORT_NAME"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_3043/*"CHOICE_SORT_NAME"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_3042/*"CHOICE_SORT_DETAIL_REVERSE"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_12420/*"SORT_WINDOW_DETAIL"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_3041/*"CHOICE_SORT_DETAIL"*/, v49, v50, v51);
    byte_42E6DB2 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B5D560(
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      this->fields.openedKind = sort->fields.sortKind;
      this->fields.openedSmartSort = sort->fields.isSmartSort;
      isChoiceSort = sort->fields.isChoiceSort;
      baseSortInfo = this->fields.baseSortInfo;
      this->fields.openedChoiceSort = isChoiceSort;
      v60 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
      ListViewSort___ctor_34029496(v60, baseSortInfo, 0LL);
      this->fields.operationSortInfo = v60;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
        (System_Int32_array **)v60,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
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
                                                                              (System_String_o *)StringLiteral_12421/*"SORT_WINDOW_TITLE"*/,
                                                                              0LL);
                                if ( titleLabel )
                                {
                                  UILabel__set_text(titleLabel, (System_String_o *)allDispObject, 0LL);
                                  explanationLabel = this->fields.explanationLabel;
                                  allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_12420/*"SORT_WINDOW_DETAIL"*/,
                                                                                0LL);
                                  if ( explanationLabel )
                                  {
                                    UILabel__set_text(explanationLabel, (System_String_o *)allDispObject, 0LL);
                                    decideLabel = this->fields.decideLabel;
                                    allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/,
                                                                                  0LL);
                                    if ( decideLabel )
                                    {
                                      UILabel__set_text(decideLabel, (System_String_o *)allDispObject, 0LL);
                                      cancelLabel = this->fields.cancelLabel;
                                      allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/,
                                                                                    0LL);
                                      if ( cancelLabel )
                                      {
                                        UILabel__set_text(cancelLabel, (System_String_o *)allDispObject, 0LL);
                                        smartSortLabel = this->fields.smartSortLabel;
                                        allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_12414/*"SMART_SORT_NAME"*/,
                                                                                      0LL);
                                        if ( smartSortLabel )
                                        {
                                          UILabel__set_text(smartSortLabel, (System_String_o *)allDispObject, 0LL);
                                          smartSortDetail = this->fields.smartSortDetail;
                                          allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                        (System_String_o *)StringLiteral_12413/*"SMART_SORT_DETAIL"*/,
                                                                                        0LL);
                                          if ( smartSortDetail )
                                          {
                                            UILabel__set_text(smartSortDetail, (System_String_o *)allDispObject, 0LL);
                                            costumeSmartSortLabel = this->fields.costumeSmartSortLabel;
                                            allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_12414/*"SMART_SORT_NAME"*/,
                                                                                          0LL);
                                            if ( costumeSmartSortLabel )
                                            {
                                              UILabel__set_text(
                                                costumeSmartSortLabel,
                                                (System_String_o *)allDispObject,
                                                0LL);
                                              costumeSmartSortDetail = this->fields.costumeSmartSortDetail;
                                              allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                            (System_String_o *)StringLiteral_12413/*"SMART_SORT_DETAIL"*/,
                                                                                            0LL);
                                              if ( costumeSmartSortDetail )
                                              {
                                                UILabel__set_text(
                                                  costumeSmartSortDetail,
                                                  (System_String_o *)allDispObject,
                                                  0LL);
                                                smartChoiceLabel = this->fields.smartChoiceLabel;
                                                allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_3043/*"CHOICE_SORT_NAME"*/,
                                                                                              0LL);
                                                if ( smartChoiceLabel )
                                                {
                                                  UILabel__set_text(
                                                    smartChoiceLabel,
                                                    (System_String_o *)allDispObject,
                                                    0LL);
                                                  choiceSortLabel = this->fields.choiceSortLabel;
                                                  allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                                (System_String_o *)StringLiteral_3043/*"CHOICE_SORT_NAME"*/,
                                                                                                0LL);
                                                  if ( choiceSortLabel )
                                                  {
                                                    UILabel__set_text(
                                                      choiceSortLabel,
                                                      (System_String_o *)allDispObject,
                                                      0LL);
                                                    choiceSort2Label = this->fields.choiceSort2Label;
                                                    allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                                  (System_String_o *)StringLiteral_3043/*"CHOICE_SORT_NAME"*/,
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
                                                        v81 = &StringLiteral_3042/*"CHOICE_SORT_DETAIL_REVERSE"*/;
                                                      }
                                                      else
                                                      {
                                                        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                        {
                                                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                        }
                                                        v81 = &StringLiteral_3041/*"CHOICE_SORT_DETAIL"*/;
                                                      }
                                                      allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                                    (System_String_o *)*v81,
                                                                                                    0LL);
                                                      if ( smartChoiceDetail )
                                                      {
                                                        UILabel__set_text(
                                                          smartChoiceDetail,
                                                          (System_String_o *)allDispObject,
                                                          0LL);
                                                        choiceSortDetail = this->fields.choiceSortDetail;
                                                        allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v81, 0LL);
                                                        if ( choiceSortDetail )
                                                        {
                                                          UILabel__set_text(
                                                            choiceSortDetail,
                                                            (System_String_o *)allDispObject,
                                                            0LL);
                                                          choiceSort2Detail = this->fields.choiceSort2Detail;
                                                          allDispObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v81, 0LL);
                                                          if ( choiceSort2Detail )
                                                          {
                                                            UILabel__set_text(
                                                              choiceSort2Detail,
                                                              (System_String_o *)allDispObject,
                                                              0LL);
                                                            ServantSortSelectMenu__SetEnableButtons(this, 1, v84);
                                                            switch ( this->fields.kind )
                                                            {
                                                              case 0:
                                                                ServantSortSelectMenu__InitAllDisp(this, v85);
                                                                ServantSortSelectMenu__SetAllButtonSelect(this, v93);
                                                                goto LABEL_58;
                                                              case 1:
                                                              case 3:
                                                                ServantSortSelectMenu__InitAllDisp(this, v85);
                                                                ServantSortSelectMenu__SetAllButtonSelect(this, v86);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v87);
                                                                allDispObject = (UnityEngine_GameObject_o *)this->fields.helpButton;
                                                                if ( !allDispObject )
                                                                  break;
                                                                allDispObject = UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)allDispObject,
                                                                                  0LL);
                                                                if ( !allDispObject )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL);
                                                                v88 = this->fields.kind;
                                                                if ( v88 == 3 )
                                                                  goto LABEL_74;
                                                                if ( v88 != 1 )
                                                                  goto LABEL_79;
                                                                goto LABEL_54;
                                                              case 2:
                                                              case 4:
                                                                ServantSortSelectMenu__InitShortDisp(this, v85);
                                                                ServantSortSelectMenu__SetShortButtonSelect(this, v89);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v90);
                                                                allDispObject = (UnityEngine_GameObject_o *)this->fields.helpButton;
                                                                if ( !allDispObject )
                                                                  break;
                                                                allDispObject = UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)allDispObject,
                                                                                  0LL);
                                                                if ( !allDispObject )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL);
                                                                v91 = this->fields.kind;
                                                                if ( v91 == 4 )
                                                                {
                                                                  allDispObject = this->fields.choiceSortObject;
                                                                  if ( allDispObject )
                                                                  {
LABEL_77:
                                                                    UnityEngine_GameObject__SetActive(
                                                                      allDispObject,
                                                                      1,
                                                                      0LL);
                                                                    v97 = 41;
LABEL_78:
                                                                    EventTutorialMaster__CheckTutorial(
                                                                      0,
                                                                      v97,
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
                                                                  if ( v91 != 2 )
                                                                  {
LABEL_79:
                                                                    this->fields.state = 1;
                                                                    v104 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                                                    System_Action___ctor(
                                                                      v104,
                                                                      (Il2CppObject *)this,
                                                                      Method_ServantSortSelectMenu_EndOpen__,
                                                                      0LL);
                                                                    BaseDialog__Open((BaseDialog_o *)this, v104, 0, 0LL);
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
                                                                      v92);
LABEL_62:
                                                                    v97 = 42;
                                                                    goto LABEL_78;
                                                                  }
                                                                }
                                                                break;
                                                              case 5:
                                                                ServantSortSelectMenu__InitCostumeDisp(this, v85);
                                                                ServantSortSelectMenu__SetCostumeButtonSelect(this, v98);
                                                                ServantSortSelectMenu__SetSmartSortButtonSelect(
                                                                  this,
                                                                  v99);
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
                                                                v97 = 32;
                                                                goto LABEL_78;
                                                              case 6:
                                                                ServantSortSelectMenu__InitCommandCodeDisp(this, v85);
                                                                ServantSortSelectMenu__SetCommandCodeButtonSelect(
                                                                  this,
                                                                  v100);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v101);
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
                                                                ServantSortSelectMenu__InitFatigueDisp(this, v85);
                                                                ServantSortSelectMenu__SetFatigueButtonSelect(this, v94);
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
                                                                  v95);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v96);
                                                                goto LABEL_62;
                                                              case 8:
                                                                ServantSortSelectMenu__InitBuddyDisp(this, v85);
                                                                ServantSortSelectMenu__SetBuddyButtonSelect(this, v102);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v103);
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
      v105 = ServantSortSelectMenu_TypeInfo;
      if ( this->fields.kind == 2 )
      {
        if ( (WORD1(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
          v105 = ServantSortSelectMenu_TypeInfo;
        }
        p_commonServantEquipSortInfo = &v105->static_fields->commonServantEquipSortInfo;
      }
      else
      {
        if ( (WORD1(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
          v105 = ServantSortSelectMenu_TypeInfo;
        }
        p_commonServantEquipSortInfo = &v105->static_fields->commonServantSortInfo;
      }
      v107 = *p_commonServantEquipSortInfo;
      this->fields.baseSortInfo = *p_commonServantEquipSortInfo;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)v107,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      allDispObject = (UnityEngine_GameObject_o *)this->fields.baseSortInfo;
      if ( allDispObject )
      {
        ListViewSort__Load((ListViewSort_o *)allDispObject, 0LL);
        sub_B5D69C(v108, v109);
      }
    }
    sub_B5D69C(allDispObject, v67);
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
    sub_B5D69C(this, isEnable);
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
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ServantSortSelectMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UISprite_array *allDispSortSprites; // x8
  __int64 v12; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantBaseSelectList; // x24
  Il2CppClass **v16; // x8
  UISprite_o *v17; // x0
  System_String_o **v18; // x8
  __int64 v19; // x0

  v4 = this;
  if ( (byte_42E6DBD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v5, v6, v7);
    this = (ServantSortSelectMenu_o *)sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v8, v9, v10);
    byte_42E6DBD = 1;
  }
  allDispSortSprites = v4->fields.allDispSortSprites;
  if ( !allDispSortSprites )
LABEL_16:
    sub_B5D69C(this, method);
  v12 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortSprites->max_length;
    if ( (int)v12 >= max_length )
      break;
    if ( (unsigned int)v12 >= max_length )
    {
      v19 = sub_B5D6C8(this);
      sub_B5D668(v19, 0LL);
    }
    operationSortInfo = v4->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      servantBaseSelectList = v4->fields.servantBaseSelectList;
      if ( servantBaseSelectList )
      {
        v16 = &allDispSortSprites->obj.klass + v12;
        if ( servantBaseSelectList->fields._size <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( v16[4] )
        {
          v17 = (UISprite_o *)v16[4];
          v18 = (System_String_o **)(operationSortInfo->fields.sortKind == servantBaseSelectList->fields._items->m_Items[v12 + 1]
                                   ? &StringLiteral_17165/*"btn_bg_03"*/
                                   : &StringLiteral_17166/*"btn_bg_04"*/);
          UISprite__set_spriteName(v17, *v18, 0LL);
          allDispSortSprites = v4->fields.allDispSortSprites;
          ++v12;
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
    sub_B5D69C(this, isEnable);
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
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ServantSortSelectMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UISprite_array *buddyDispSortSprites; // x8
  __int64 v12; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *buddySelectList; // x24
  Il2CppClass **v16; // x8
  UISprite_o *v17; // x0
  System_String_o **v18; // x8
  __int64 v19; // x0

  v4 = this;
  if ( (byte_42E6DBF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v5, v6, v7);
    this = (ServantSortSelectMenu_o *)sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v8, v9, v10);
    byte_42E6DBF = 1;
  }
  buddyDispSortSprites = v4->fields.buddyDispSortSprites;
  if ( !buddyDispSortSprites )
LABEL_16:
    sub_B5D69C(this, method);
  v12 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortSprites->max_length;
    if ( (int)v12 >= max_length )
      break;
    if ( (unsigned int)v12 >= max_length )
    {
      v19 = sub_B5D6C8(this);
      sub_B5D668(v19, 0LL);
    }
    operationSortInfo = v4->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      buddySelectList = v4->fields.buddySelectList;
      if ( buddySelectList )
      {
        v16 = &buddyDispSortSprites->obj.klass + v12;
        if ( buddySelectList->fields._size <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( v16[4] )
        {
          v17 = (UISprite_o *)v16[4];
          v18 = (System_String_o **)(operationSortInfo->fields.sortKind == buddySelectList->fields._items->m_Items[v12 + 1]
                                   ? &StringLiteral_17165/*"btn_bg_03"*/
                                   : &StringLiteral_17166/*"btn_bg_04"*/);
          UISprite__set_spriteName(v17, *v18, 0LL);
          buddyDispSortSprites = v4->fields.buddyDispSortSprites;
          ++v12;
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
  int v2; // w2
  __int64 v3; // x3
  ServantSortSelectMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v9; // x8

  v4 = this;
  if ( (byte_42E6DC4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    this = (ServantSortSelectMenu_o *)sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42E6DC4 = 1;
  }
  switch ( v4->fields.kind )
  {
    case 3:
    case 8:
      operationSortInfo = v4->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_16;
      this = (ServantSortSelectMenu_o *)v4->fields.choiceSort2BtnSprite;
      if ( !this )
        goto LABEL_16;
      goto LABEL_12;
    case 4:
    case 6:
      operationSortInfo = v4->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_16;
      this = (ServantSortSelectMenu_o *)v4->fields.choiceSortBtnSprite;
      if ( !this )
        goto LABEL_16;
      goto LABEL_12;
    default:
      operationSortInfo = v4->fields.operationSortInfo;
      if ( !operationSortInfo || (this = (ServantSortSelectMenu_o *)v4->fields.smartChoiceBtnSprite) == 0LL )
LABEL_16:
        sub_B5D69C(this, method);
LABEL_12:
      if ( operationSortInfo->fields.isChoiceSort )
        v9 = &StringLiteral_17215/*"btn_on"*/;
      else
        v9 = &StringLiteral_17214/*"btn_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v9, 0LL);
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
    sub_B5D69C(this, isEnable);
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
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ServantSortSelectMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UISprite_array *commandCodeDispSprites; // x8
  __int64 v12; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *commandCodeSelectList; // x24
  Il2CppClass **v16; // x8
  UISprite_o *v17; // x0
  System_String_o **v18; // x8
  __int64 v19; // x0

  v4 = this;
  if ( (byte_42E6DC2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v5, v6, v7);
    this = (ServantSortSelectMenu_o *)sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v8, v9, v10);
    byte_42E6DC2 = 1;
  }
  commandCodeDispSprites = v4->fields.commandCodeDispSprites;
  if ( !commandCodeDispSprites )
LABEL_16:
    sub_B5D69C(this, method);
  v12 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSprites->max_length;
    if ( (int)v12 >= max_length )
      break;
    if ( (unsigned int)v12 >= max_length )
    {
      v19 = sub_B5D6C8(this);
      sub_B5D668(v19, 0LL);
    }
    operationSortInfo = v4->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      commandCodeSelectList = v4->fields.commandCodeSelectList;
      if ( commandCodeSelectList )
      {
        v16 = &commandCodeDispSprites->obj.klass + v12;
        if ( commandCodeSelectList->fields._size <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( v16[4] )
        {
          v17 = (UISprite_o *)v16[4];
          v18 = (System_String_o **)(operationSortInfo->fields.sortKind == commandCodeSelectList->fields._items->m_Items[v12 + 1]
                                   ? &StringLiteral_17165/*"btn_bg_03"*/
                                   : &StringLiteral_17166/*"btn_bg_04"*/);
          UISprite__set_spriteName(v17, *v18, 0LL);
          commandCodeDispSprites = v4->fields.commandCodeDispSprites;
          ++v12;
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
    sub_B5D69C(this, isEnable);
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
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ServantSortSelectMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UISprite_array *costumeDispSprites; // x8
  __int64 v12; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantCostumeSelectList; // x24
  Il2CppClass **v16; // x8
  UISprite_o *v17; // x0
  System_String_o **v18; // x8
  __int64 v19; // x0

  v4 = this;
  if ( (byte_42E6DC1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v5, v6, v7);
    this = (ServantSortSelectMenu_o *)sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v8, v9, v10);
    byte_42E6DC1 = 1;
  }
  costumeDispSprites = v4->fields.costumeDispSprites;
  if ( !costumeDispSprites )
LABEL_16:
    sub_B5D69C(this, method);
  v12 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSprites->max_length;
    if ( (int)v12 >= max_length )
      break;
    if ( (unsigned int)v12 >= max_length )
    {
      v19 = sub_B5D6C8(this);
      sub_B5D668(v19, 0LL);
    }
    operationSortInfo = v4->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      servantCostumeSelectList = v4->fields.servantCostumeSelectList;
      if ( servantCostumeSelectList )
      {
        v16 = &costumeDispSprites->obj.klass + v12;
        if ( servantCostumeSelectList->fields._size <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( v16[4] )
        {
          v17 = (UISprite_o *)v16[4];
          v18 = (System_String_o **)(operationSortInfo->fields.sortKind == servantCostumeSelectList->fields._items->m_Items[v12 + 1]
                                   ? &StringLiteral_17165/*"btn_bg_03"*/
                                   : &StringLiteral_17166/*"btn_bg_04"*/);
          UISprite__set_spriteName(v17, *v18, 0LL);
          costumeDispSprites = v4->fields.costumeDispSprites;
          ++v12;
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
    sub_B5D69C(decideButton, isEnable);
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
    sub_B5D69C(this, isEnable);
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
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ServantSortSelectMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UISprite_array *fatigueDispSortSprites; // x8
  __int64 v12; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *fatigureSelectList; // x24
  Il2CppClass **v16; // x8
  UISprite_o *v17; // x0
  System_String_o **v18; // x8
  __int64 v19; // x0

  v4 = this;
  if ( (byte_42E6DBE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v5, v6, v7);
    this = (ServantSortSelectMenu_o *)sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v8, v9, v10);
    byte_42E6DBE = 1;
  }
  fatigueDispSortSprites = v4->fields.fatigueDispSortSprites;
  if ( !fatigueDispSortSprites )
LABEL_16:
    sub_B5D69C(this, method);
  v12 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortSprites->max_length;
    if ( (int)v12 >= max_length )
      break;
    if ( (unsigned int)v12 >= max_length )
    {
      v19 = sub_B5D6C8(this);
      sub_B5D668(v19, 0LL);
    }
    operationSortInfo = v4->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      fatigureSelectList = v4->fields.fatigureSelectList;
      if ( fatigureSelectList )
      {
        v16 = &fatigueDispSortSprites->obj.klass + v12;
        if ( fatigureSelectList->fields._size <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( v16[4] )
        {
          v17 = (UISprite_o *)v16[4];
          v18 = (System_String_o **)(operationSortInfo->fields.sortKind == fatigureSelectList->fields._items->m_Items[v12 + 1]
                                   ? &StringLiteral_17165/*"btn_bg_03"*/
                                   : &StringLiteral_17166/*"btn_bg_04"*/);
          UISprite__set_spriteName(v17, *v18, 0LL);
          fatigueDispSortSprites = v4->fields.fatigueDispSortSprites;
          ++v12;
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
    sub_B5D69C(this, isEnable);
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
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ServantSortSelectMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UICommonButton_array *normalSortButtons; // x8
  __int64 v12; // x21
  struct UISprite_array *normalSortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantSelectList; // x24
  Il2CppClass **v16; // x8
  UISprite_o *v17; // x0
  System_String_o **v18; // x8
  __int64 v19; // x0

  v4 = this;
  if ( (byte_42E6DBC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v5, v6, v7);
    this = (ServantSortSelectMenu_o *)sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v8, v9, v10);
    byte_42E6DBC = 1;
  }
  normalSortButtons = v4->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_17:
    sub_B5D69C(this, method);
  v12 = 0LL;
  while ( (int)v12 < (signed int)normalSortButtons->max_length )
  {
    normalSortSprites = v4->fields.normalSortSprites;
    if ( normalSortSprites )
    {
      if ( (unsigned int)v12 >= normalSortSprites->max_length )
      {
        v19 = sub_B5D6C8(this);
        sub_B5D668(v19, 0LL);
      }
      operationSortInfo = v4->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        servantSelectList = v4->fields.servantSelectList;
        if ( servantSelectList )
        {
          v16 = &normalSortSprites->obj.klass + v12;
          if ( servantSelectList->fields._size <= (unsigned int)v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( v16[4] )
          {
            v17 = (UISprite_o *)v16[4];
            v18 = (System_String_o **)(operationSortInfo->fields.sortKind == servantSelectList->fields._items->m_Items[v12 + 1]
                                     ? &StringLiteral_17165/*"btn_bg_03"*/
                                     : &StringLiteral_17166/*"btn_bg_04"*/);
            UISprite__set_spriteName(v17, *v18, 0LL);
            normalSortButtons = v4->fields.normalSortButtons;
            ++v12;
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
    sub_B5D69C(this, isEnable);
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
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ServantSortSelectMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UISprite_array *shortDispSortSprites; // x8
  __int64 v12; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantEquipSelectList; // x24
  Il2CppClass **v16; // x8
  UISprite_o *v17; // x0
  System_String_o **v18; // x8
  __int64 v19; // x0

  v4 = this;
  if ( (byte_42E6DC0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v5, v6, v7);
    this = (ServantSortSelectMenu_o *)sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v8, v9, v10);
    byte_42E6DC0 = 1;
  }
  shortDispSortSprites = v4->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
LABEL_16:
    sub_B5D69C(this, method);
  v12 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortSprites->max_length;
    if ( (int)v12 >= max_length )
      break;
    if ( (unsigned int)v12 >= max_length )
    {
      v19 = sub_B5D6C8(this);
      sub_B5D668(v19, 0LL);
    }
    operationSortInfo = v4->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      servantEquipSelectList = v4->fields.servantEquipSelectList;
      if ( servantEquipSelectList )
      {
        v16 = &shortDispSortSprites->obj.klass + v12;
        if ( servantEquipSelectList->fields._size <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( v16[4] )
        {
          v17 = (UISprite_o *)v16[4];
          v18 = (System_String_o **)(operationSortInfo->fields.sortKind == servantEquipSelectList->fields._items->m_Items[v12 + 1]
                                   ? &StringLiteral_17165/*"btn_bg_03"*/
                                   : &StringLiteral_17166/*"btn_bg_04"*/);
          UISprite__set_spriteName(v17, *v18, 0LL);
          shortDispSortSprites = v4->fields.shortDispSortSprites;
          ++v12;
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
  int v2; // w2
  __int64 v3; // x3
  ServantSortSelectMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewSort_o *operationSortInfo; // x8
  __int64 *v9; // x8

  v4 = this;
  if ( (byte_42E6DC3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    this = (ServantSortSelectMenu_o *)sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42E6DC3 = 1;
  }
  if ( v4->fields.kind == 5 )
  {
    operationSortInfo = v4->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_13;
    this = (ServantSortSelectMenu_o *)v4->fields.costumeSmartSortBtnSprite;
    if ( !this )
      goto LABEL_13;
  }
  else
  {
    operationSortInfo = v4->fields.operationSortInfo;
    if ( !operationSortInfo || (this = (ServantSortSelectMenu_o *)v4->fields.smartSortBtnSprite) == 0LL )
LABEL_13:
      sub_B5D69C(this, method);
  }
  if ( operationSortInfo->fields.isSmartSort )
    v9 = &StringLiteral_17215/*"btn_on"*/;
  else
    v9 = &StringLiteral_17214/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v9, 0LL);
}


void __fastcall ServantSortSelectMenu__add_callbackFunc(
        ServantSortSelectMenu_o *this,
        ServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct ServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantSortSelectMenu_o *v11; // x0
  ServantSortSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E6DAD & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6DAD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantSortSelectMenu_CallbackFunc_c *)v8->klass != ServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantSortSelectMenu_o *)sub_B5D990(v8);
  ServantSortSelectMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ServantSortSelectMenu__get_closeBtnPath(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6DDE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15667/*"Window/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42E6DDE = 1;
  }
  return (System_String_o *)StringLiteral_15667/*"Window/CancelButton"*/;
}


void __fastcall ServantSortSelectMenu__remove_callbackFunc(
        ServantSortSelectMenu_o *this,
        ServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct ServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42E6DAE & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6DAE = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantSortSelectMenu_CallbackFunc_c *)v8->klass != ServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_B5D990(v8);
  ServantSortSelectMenu__InitLoad(v11);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5D91 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5D91 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ServantSortSelectMenu_CallbackFunc__EndInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  ServantSortSelectMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ServantSortSelectMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}