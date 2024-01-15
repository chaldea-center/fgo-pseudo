void __fastcall ServantSortSelectMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ListViewSort_o *v9; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  ListViewSort_o *v21; // x19
  struct ServantSortSelectMenu_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  ListViewSort_o *v33; // x19
  struct ServantSortSelectMenu_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40F86F5 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, v1);
    sub_B16FFC(&ServantSortSelectMenu_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_12666/*"ServantSortSelect1"*/, v6);
    sub_B16FFC(&StringLiteral_12667/*"ServantSortSelect2"*/, v7);
    sub_B16FFC(&StringLiteral_12668/*"ServantSortSelect4"*/, v8);
    byte_40F86F5 = 1;
  }
  v9 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v9, (System_String_o *)StringLiteral_12666/*"ServantSortSelect1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantSortSelectMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B16F98(static_fields, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  v21 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v17, v18, v19, v20);
  ListViewSort___ctor_30208480(v21, (System_String_o *)StringLiteral_12667/*"ServantSortSelect2"*/, 3, 0, 0LL);
  v22 = ServantSortSelectMenu_TypeInfo->static_fields;
  v22->commonServantEquipSortInfo = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v22->commonServantEquipSortInfo,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v33 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v29, v30, v31, v32);
  ListViewSort___ctor_30208480(v33, (System_String_o *)StringLiteral_12668/*"ServantSortSelect4"*/, 3, 0, 0LL);
  v34 = ServantSortSelectMenu_TypeInfo->static_fields;
  v34->commandCodeSortInfo = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v34->commandCodeSortInfo,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
}


void __fastcall ServantSortSelectMenu___ctor(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v64; // x20
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v75; // x20
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7

  if ( (byte_40F86F4 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo, v8);
    byte_40F86F4 = 1;
  }
  this->fields.ShortDispSortButtonSpace = (struct UnityEngine_Vector2_o)0x40A0000041200000LL;
  v9 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                  System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3,
                                                                  v4);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v9,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v9 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    10,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    4,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    7,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    5,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    6,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    15,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    16,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    14,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    8,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantBaseSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantBaseSelectList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                                   v16,
                                                                   v17,
                                                                   v18,
                                                                   v19);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v20,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v20 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    10,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    4,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    7,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    5,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    6,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    15,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    16,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    14,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    8,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v20,
    25,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.fatigureSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fatigureSelectList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v31 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                                   v27,
                                                                   v28,
                                                                   v29,
                                                                   v30);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v31,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v31 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v31,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v31,
    10,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v31,
    4,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v31,
    7,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v31,
    5,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v31,
    6,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v31,
    15,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v31,
    16,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v31,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v31,
    14,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v31,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v31,
    8,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v31,
    28,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.buddySelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.buddySelectList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v42 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                                   v38,
                                                                   v39,
                                                                   v40,
                                                                   v41);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v42,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v42 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v42,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v42,
    10,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v42,
    4,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v42,
    7,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v42,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v42,
    5,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v42,
    6,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v42,
    14,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v42,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v42,
    8,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v42;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantSelectList,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v53 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                                   v49,
                                                                   v50,
                                                                   v51,
                                                                   v52);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v53,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v53 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v53,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v53,
    5,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v53,
    6,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v53,
    7,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v53,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v53,
    14,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v53,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v53,
    24,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantEquipSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v53;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEquipSelectList,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v64 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                                   v60,
                                                                   v61,
                                                                   v62,
                                                                   v63);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v64,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v64 )
    goto LABEL_14;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v64,
    8,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v64,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v64,
    19,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v64,
    20,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v64,
    21,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v64,
    22,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v64,
    23,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v64,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.servantCostumeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v64;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantCostumeSelectList,
    (System_Int32_array **)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v75 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                                   v71,
                                                                   v72,
                                                                   v73,
                                                                   v74);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v75,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v75 )
LABEL_14:
    sub_B170D4();
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v75,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v75,
    14,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v75,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.commandCodeSelectList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v75;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeSelectList,
    (System_Int32_array **)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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

  ServantSortSelectMenu__Close_22333100(this, 0LL, v2);
}


void __fastcall ServantSortSelectMenu__Close_22333100(
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x20

  if ( (byte_40F86C8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ServantSortSelectMenu_EndClose__, v5);
    byte_40F86C8 = 1;
  }
  ServantSortSelectMenu__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_40F86C6 & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_TypeInfo, v1);
    byte_40F86C6 = 1;
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
    sub_B170D4();
  ListViewSort__Load(commonServantEquipSortInfo, 0LL);
  return ServantSortSelectMenu_TypeInfo->static_fields->commonServantEquipSortInfo;
}


ListViewSort_o *__fastcall ServantSortSelectMenu__GetServantSortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantSortSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_40F86C5 & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_TypeInfo, v1);
    byte_40F86C5 = 1;
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
    sub_B170D4();
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
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UILabel_array *allDispSortBtnsLabel; // x8
  __int64 v8; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantBaseSelectList; // x23
  UILabel_o *v11; // x20
  System_String_o *SortKindText; // x0

  if ( (byte_40F86CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_40F86CA = 1;
  }
  allDispObject = this->fields.allDispObject;
  if ( !allDispObject
    || (UnityEngine_GameObject__SetActive(allDispObject, 1, 0LL),
        (allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  v8 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortBtnsLabel->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
    {
      sub_B17100(v4, v5, v6);
      sub_B170A0();
    }
    servantBaseSelectList = this->fields.servantBaseSelectList;
    if ( servantBaseSelectList )
    {
      v11 = allDispSortBtnsLabel->m_Items[v8];
      if ( servantBaseSelectList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( this->fields.operationSortInfo )
      {
        SortKindText = ListViewSort__GetSortKindText(
                         this->fields.operationSortInfo,
                         servantBaseSelectList->fields._items->m_Items[v8 + 1],
                         0LL);
        if ( v11 )
        {
          UILabel__set_text(v11, SortKindText, 0LL);
          allDispSortBtnsLabel = this->fields.allDispSortBtnsLabel;
          ++v8;
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
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UILabel_array *buddyDispSortBtnsLabel; // x8
  __int64 v8; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *buddySelectList; // x23
  UILabel_o *v11; // x20
  System_String_o *SortKindText; // x0

  if ( (byte_40F86CC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_40F86CC = 1;
  }
  buddyDispObject = this->fields.buddyDispObject;
  if ( !buddyDispObject
    || (UnityEngine_GameObject__SetActive(buddyDispObject, 1, 0LL),
        (buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  v8 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortBtnsLabel->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
    {
      sub_B17100(v4, v5, v6);
      sub_B170A0();
    }
    buddySelectList = this->fields.buddySelectList;
    if ( buddySelectList )
    {
      v11 = buddyDispSortBtnsLabel->m_Items[v8];
      if ( buddySelectList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( this->fields.operationSortInfo )
      {
        SortKindText = ListViewSort__GetSortKindText(
                         this->fields.operationSortInfo,
                         buddySelectList->fields._items->m_Items[v8 + 1],
                         0LL);
        if ( v11 )
        {
          UILabel__set_text(v11, SortKindText, 0LL);
          buddyDispSortBtnsLabel = this->fields.buddyDispSortBtnsLabel;
          ++v8;
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
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UILabel_array *commandCodeDispSortBtnsLabel; // x8
  __int64 v8; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *commandCodeSelectList; // x23
  UILabel_o *v11; // x20
  System_String_o *SortKindText; // x0

  if ( (byte_40F86D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_40F86D0 = 1;
  }
  commandCodeDispObject = this->fields.commandCodeDispObject;
  if ( !commandCodeDispObject
    || (UnityEngine_GameObject__SetActive(commandCodeDispObject, 1, 0LL),
        (commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  v8 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSortBtnsLabel->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
    {
      sub_B17100(v4, v5, v6);
      sub_B170A0();
    }
    commandCodeSelectList = this->fields.commandCodeSelectList;
    if ( commandCodeSelectList )
    {
      v11 = commandCodeDispSortBtnsLabel->m_Items[v8];
      if ( commandCodeSelectList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( this->fields.operationSortInfo )
      {
        SortKindText = ListViewSort__GetSortKindText(
                         this->fields.operationSortInfo,
                         commandCodeSelectList->fields._items->m_Items[v8 + 1],
                         0LL);
        if ( v11 )
        {
          UILabel__set_text(v11, SortKindText, 0LL);
          commandCodeDispSortBtnsLabel = this->fields.commandCodeDispSortBtnsLabel;
          ++v8;
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
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UILabel_array *costumeDispSortBtnsLabel; // x8
  __int64 v8; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantCostumeSelectList; // x23
  UILabel_o *v11; // x20
  System_String_o *SortKindText; // x0

  if ( (byte_40F86CF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_40F86CF = 1;
  }
  costumeDispObject = this->fields.costumeDispObject;
  if ( !costumeDispObject
    || (UnityEngine_GameObject__SetActive(costumeDispObject, 1, 0LL),
        (costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  v8 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSortBtnsLabel->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
    {
      sub_B17100(v4, v5, v6);
      sub_B170A0();
    }
    servantCostumeSelectList = this->fields.servantCostumeSelectList;
    if ( servantCostumeSelectList )
    {
      v11 = costumeDispSortBtnsLabel->m_Items[v8];
      if ( servantCostumeSelectList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( this->fields.operationSortInfo )
      {
        SortKindText = ListViewSort__GetSortKindText(
                         this->fields.operationSortInfo,
                         servantCostumeSelectList->fields._items->m_Items[v8 + 1],
                         0LL);
        if ( v11 )
        {
          UILabel__set_text(v11, SortKindText, 0LL);
          costumeDispSortBtnsLabel = this->fields.costumeDispSortBtnsLabel;
          ++v8;
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
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UILabel_array *fatigueDispSortBtnsLabel; // x8
  __int64 v8; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *fatigureSelectList; // x23
  UILabel_o *v11; // x20
  System_String_o *SortKindText; // x0

  if ( (byte_40F86CB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_40F86CB = 1;
  }
  fatigueDispObject = this->fields.fatigueDispObject;
  if ( !fatigueDispObject
    || (UnityEngine_GameObject__SetActive(fatigueDispObject, 1, 0LL),
        (fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  v8 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortBtnsLabel->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
    {
      sub_B17100(v4, v5, v6);
      sub_B170A0();
    }
    fatigureSelectList = this->fields.fatigureSelectList;
    if ( fatigureSelectList )
    {
      v11 = fatigueDispSortBtnsLabel->m_Items[v8];
      if ( fatigureSelectList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( this->fields.operationSortInfo )
      {
        SortKindText = ListViewSort__GetSortKindText(
                         this->fields.operationSortInfo,
                         fatigureSelectList->fields._items->m_Items[v8 + 1],
                         0LL);
        if ( v11 )
        {
          UILabel__set_text(v11, SortKindText, 0LL);
          fatigueDispSortBtnsLabel = this->fields.fatigueDispSortBtnsLabel;
          ++v8;
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

  if ( (byte_40F86C4 & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_TypeInfo, v1);
    byte_40F86C4 = 1;
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
    sub_B170D4();
  ListViewSort__InitLoad(commonServantSortInfo, 0LL);
}


void __fastcall ServantSortSelectMenu__InitNormalDisp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *normalDispObject; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UILabel_array *normalSortBtnsLabel; // x8
  __int64 v8; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantSelectList; // x23
  UILabel_o *v11; // x20
  System_String_o *SortKindText; // x0

  if ( (byte_40F86C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_40F86C9 = 1;
  }
  normalDispObject = this->fields.normalDispObject;
  if ( !normalDispObject
    || (UnityEngine_GameObject__SetActive(normalDispObject, 1, 0LL),
        (normalSortBtnsLabel = this->fields.normalSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  v8 = 0LL;
  while ( 1 )
  {
    max_length = normalSortBtnsLabel->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
    {
      sub_B17100(v4, v5, v6);
      sub_B170A0();
    }
    servantSelectList = this->fields.servantSelectList;
    if ( servantSelectList )
    {
      v11 = normalSortBtnsLabel->m_Items[v8];
      if ( servantSelectList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( this->fields.operationSortInfo )
      {
        SortKindText = ListViewSort__GetSortKindText(
                         this->fields.operationSortInfo,
                         servantSelectList->fields._items->m_Items[v8 + 1],
                         0LL);
        if ( v11 )
        {
          UILabel__set_text(v11, SortKindText, 0LL);
          normalSortBtnsLabel = this->fields.normalSortBtnsLabel;
          ++v8;
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
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UILabel_array *shortDispSortBtnsLabel; // x8
  __int64 v9; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantEquipSelectList; // x23
  UILabel_o *v12; // x20
  System_String_o *SortKindText; // x0

  if ( (byte_40F86CD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    byte_40F86CD = 1;
  }
  shortDispObject = this->fields.shortDispObject;
  if ( !shortDispObject
    || (UnityEngine_GameObject__SetActive(shortDispObject, 1, 0LL),
        ServantSortSelectMenu__InitShortDispButtons(this, v4),
        (shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  v9 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortBtnsLabel->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
    {
      sub_B17100(v5, v6, v7);
      sub_B170A0();
    }
    servantEquipSelectList = this->fields.servantEquipSelectList;
    if ( servantEquipSelectList )
    {
      v12 = shortDispSortBtnsLabel->m_Items[v9];
      if ( servantEquipSelectList->fields._size <= (unsigned int)v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( this->fields.operationSortInfo )
      {
        SortKindText = ListViewSort__GetSortKindText(
                         this->fields.operationSortInfo,
                         servantEquipSelectList->fields._items->m_Items[v9 + 1],
                         0LL);
        if ( v12 )
        {
          UILabel__set_text(v12, SortKindText, 0LL);
          shortDispSortBtnsLabel = this->fields.shortDispSortBtnsLabel;
          ++v9;
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
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantEquipSelectList; // x0
  int32_t v9; // w0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  unsigned int v14; // w20
  ListViewSort_o *baseSortInfo; // x0
  char v16; // w21
  struct UICommonButton_array **p_shortDispSortButtons; // x22
  struct UICommonButton_array *shortDispSortButtons; // x8
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  struct UICommonButton_array *v22; // x22
  int max_length; // w8
  unsigned int v24; // w23
  Il2CppClass **v25; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x21
  UnityEngine_GameObject_o *v27; // x0
  struct UISprite_array *shortDispSortSprites; // x8
  UISprite_o *v29; // x9
  int size; // w8
  int v31; // w10
  int v32; // w21
  unsigned int v33; // w22
  int v34; // w23
  int v35; // w25
  float mWidth; // s9
  float mHeight; // s10
  float y; // s12
  int v39; // w26
  UnityEngine_Component_o *v40; // x0
  float v41; // s0
  float v42; // s8
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Component_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0

  if ( (byte_40F86CE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UICommonButton__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_UICommonButton___ctor__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UICommonButton__get_Item__, v6);
    sub_B16FFC(&System_Collections_Generic_List_UICommonButton__TypeInfo, v7);
    byte_40F86CE = 1;
  }
  servantEquipSelectList = this->fields.servantEquipSelectList;
  if ( !servantEquipSelectList )
    goto LABEL_45;
  v9 = System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___IndexOf(
         (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)servantEquipSelectList,
         24,
         (const MethodInfo_2F14540 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__IndexOf__);
  if ( v9 == -1 )
  {
    p_shortDispSortButtons = &this->fields.shortDispSortButtons;
  }
  else
  {
    v14 = v9;
    baseSortInfo = this->fields.baseSortInfo;
    if ( baseSortInfo )
    {
      baseSortInfo = (ListViewSort_o *)ListViewSort__get_IsWareHouseEquipList(baseSortInfo, 0LL);
      v16 = (char)baseSortInfo;
    }
    else
    {
      v16 = 0;
    }
    p_shortDispSortButtons = &this->fields.shortDispSortButtons;
    shortDispSortButtons = this->fields.shortDispSortButtons;
    if ( !shortDispSortButtons )
      goto LABEL_45;
    if ( v14 >= shortDispSortButtons->max_length )
      goto LABEL_46;
    v19 = (UnityEngine_Component_o *)shortDispSortButtons->m_Items[v14];
    if ( !v19 )
      goto LABEL_45;
    gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
    if ( !gameObject )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(gameObject, v16 & 1, 0LL);
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UICommonButton__TypeInfo,
                                                                                                  v10,
                                                                                                  v11,
                                                                                                  v12,
                                                                                                  v13);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UICommonButton___ctor__);
  v22 = *p_shortDispSortButtons;
  if ( !v22 )
    goto LABEL_45;
  max_length = v22->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( v24 < max_length )
    {
      v25 = &v22->obj.klass + (int)v24;
      v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)v25[4];
      if ( !v26 )
        goto LABEL_45;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25[4], 0LL);
      if ( !v27 )
        goto LABEL_45;
      baseSortInfo = (ListViewSort_o *)UnityEngine_GameObject__get_activeSelf(v27, 0LL);
      if ( ((unsigned __int8)baseSortInfo & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_45;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          v26,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UICommonButton__Add__);
      }
      max_length = v22->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_24;
    }
LABEL_46:
    sub_B17100(baseSortInfo, v10, v11);
    sub_B170A0();
  }
LABEL_24:
  shortDispSortSprites = this->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
    goto LABEL_45;
  if ( !shortDispSortSprites->max_length )
    goto LABEL_46;
  v29 = shortDispSortSprites->m_Items[0];
  if ( !v29 || !v21 )
LABEL_45:
    sub_B170D4();
  size = v21->fields._size;
  v31 = size + 3;
  if ( size >= 0 )
    v31 = v21->fields._size;
  if ( size >= 1 )
  {
    v32 = 0;
    v33 = 0;
    v34 = v31 >> 2;
    v35 = (v21->fields._size & 3) - 1;
    mWidth = (float)v29->fields.mWidth;
    mHeight = (float)v29->fields.mHeight;
    while ( 1 )
    {
      y = this->fields.ShortDispSortButtonSpace.fields.y;
      if ( v32 >= v34 )
        v39 = v35;
      else
        v39 = 3;
      if ( size <= v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v40 = (UnityEngine_Component_o *)v21->fields._items->m_Items[v33];
      if ( !v40 )
        break;
      v41 = (float)(int)(v33 - 4 * v32) + (float)((float)v39 * -0.5);
      v42 = (float)(v41 * mWidth) + (float)(v41 * this->fields.ShortDispSortButtonSpace.fields.x);
      v43 = UnityEngine_Component__get_gameObject(v40, 0LL);
      GameObjectExtensions__SetLocalPositionX(v43, v42, 0LL);
      if ( v21->fields._size <= v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v44 = (UnityEngine_Component_o *)v21->fields._items->m_Items[v33];
      if ( !v44 )
        break;
      v45 = UnityEngine_Component__get_gameObject(v44, 0LL);
      GameObjectExtensions__SetLocalPositionY(v45, -(float)((float)(y + mHeight) * (float)v32), 0LL);
      size = v21->fields._size;
      if ( (~v33++ & 3) == 0 )
        ++v32;
      if ( (int)v33 >= size )
        return;
    }
    goto LABEL_45;
  }
}


void __fastcall ServantSortSelectMenu__OnClickCancel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F86DB & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86DB = 1;
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
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86F2 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86F2 = 1;
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
      sub_B170D4();
    operationSortInfo->fields.isChoiceSort ^= 1u;
    ServantSortSelectMenu__SetChoiceSortButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickDecide(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v4; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  bool v6; // w1
  ServantSortSelectMenu_o *v7; // x0

  if ( (byte_40F86DA & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86DA = 1;
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
      sub_B170D4();
    }
    if ( this->fields.openedKind == operationSortInfo->fields.sortKind
      && !this->fields.openedSmartSort != operationSortInfo->fields.isSmartSort
      && this->fields.openedChoiceSort == operationSortInfo->fields.isChoiceSort )
    {
      v7 = this;
      v6 = 0;
    }
    else
    {
      v6 = 1;
      v7 = this;
    }
    ServantSortSelectMenu__Callback(v7, v6, v4);
  }
}


void __fastcall ServantSortSelectMenu__OnClickEventOrder(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86DF & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86DF = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 24;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickHelp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *helpButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  unsigned int kind; // w8
  System_Action_o *v12; // x20
  int32_t v13; // w1

  if ( (byte_40F86DC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ServantSortSelectMenu_OnClickHelpClose__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F86DC = 1;
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
    if ( !helpButton || (gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    kind = this->fields.kind;
    if ( kind <= 8 )
    {
      if ( ((1 << kind) & 0x158) != 0 )
      {
        v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v13 = 41;
LABEL_12:
        EventTutorialMaster__ShowTutorialWithoutCheck(0, v13, v12, 0LL);
        return;
      }
      if ( kind == 5 )
      {
        v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
        v13 = 32;
        goto LABEL_12;
      }
    }
    v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSortSelectMenu_OnClickHelpClose__, 0LL);
    v13 = 42;
    goto LABEL_12;
  }
}


void __fastcall ServantSortSelectMenu__OnClickHelpClose(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton || (gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall ServantSortSelectMenu__OnClickSmartSort(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86F1 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86F1 = 1;
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
      sub_B170D4();
    operationSortInfo->fields.isSmartSort ^= 1u;
    ServantSortSelectMenu__SetSmartSortButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAdjustAtk(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86E9 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86E9 = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 16;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAdjustHp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86E8 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86E8 = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 15;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAmount(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86E6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86E6 = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 14;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortAttack(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86E4 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86E4 = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 6;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortBuddy(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86F0 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86F0 = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 28;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortClass(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86DD & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86DD = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 8;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCost(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86E5 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86E5 = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 7;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCostume(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86EA & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86EA = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 19;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortCreate(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86DE & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86DE = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 1;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortFriendShip(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86E7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86E7 = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 10;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortHavingCostume(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86EB & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86EB = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 20;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortHp(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86E3 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86E3 = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 5;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortLevel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86E1 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86E1 = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 3;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortLimitCount(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86EE & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86EE = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 23;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNotHavingCostume(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86EC & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86EC = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 21;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNotHavingItem(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86ED & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86ED = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 22;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortNpLevel(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86E2 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86E2 = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 4;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortRarity(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86E0 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86E0 = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 2;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
  }
}


void __fastcall ServantSortSelectMenu__OnClickSortRecoveryFatigue(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F86EF & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F86EF = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 25;
    ServantSortSelectMenu__ChangeButtonSelect(this, v3);
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
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  ListViewSort_o *v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_GameObject_o *allDispObject; // x0
  UnityEngine_GameObject_o *fatigueDispObject; // x0
  UnityEngine_GameObject_o *buddyDispObject; // x0
  UnityEngine_GameObject_o *normalDispObject; // x0
  UnityEngine_GameObject_o *shortDispObject; // x0
  UnityEngine_GameObject_o *smartSortObject; // x0
  UnityEngine_GameObject_o *choiceSortObject; // x0
  UnityEngine_GameObject_o *choiceSort2Object; // x0
  UnityEngine_GameObject_o *costumeSmartSortObject; // x0
  UnityEngine_GameObject_o *costumeDispObject; // x0
  UnityEngine_Component_o *helpButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v57; // x0
  UILabel_o *titleLabel; // x21
  System_String_o *v59; // x0
  UILabel_o *explanationLabel; // x21
  System_String_o *v61; // x0
  UILabel_o *decideLabel; // x21
  System_String_o *v63; // x0
  UILabel_o *cancelLabel; // x21
  System_String_o *v65; // x0
  UILabel_o *smartSortLabel; // x21
  System_String_o *v67; // x0
  UILabel_o *smartSortDetail; // x21
  System_String_o *v69; // x0
  UILabel_o *costumeSmartSortLabel; // x21
  System_String_o *v71; // x0
  UILabel_o *costumeSmartSortDetail; // x21
  System_String_o *v73; // x0
  UILabel_o *smartChoiceLabel; // x21
  System_String_o *v75; // x0
  UILabel_o *choiceSortLabel; // x21
  System_String_o *v77; // x0
  UILabel_o *choiceSort2Label; // x21
  System_String_o *v79; // x0
  UILabel_o *smartChoiceDetail; // x21
  __int64 *v81; // x22
  System_String_o *v82; // x0
  UILabel_o *choiceSortDetail; // x20
  System_String_o *v84; // x0
  UILabel_o *choiceSort2Detail; // x20
  System_String_o *v86; // x0
  const MethodInfo *v87; // x2
  const MethodInfo *v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  const MethodInfo *v92; // x1
  const MethodInfo *v93; // x1
  UnityEngine_Component_o *v94; // x0
  UnityEngine_GameObject_o *v95; // x0
  int32_t v96; // w8
  const MethodInfo *v97; // x1
  const MethodInfo *v98; // x1
  UnityEngine_Component_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x0
  int32_t v101; // w8
  UnityEngine_GameObject_o *v102; // x0
  const MethodInfo *v103; // x1
  const MethodInfo *v104; // x1
  const MethodInfo *v105; // x1
  UnityEngine_Component_o *v106; // x0
  UnityEngine_GameObject_o *v107; // x0
  UnityEngine_GameObject_o *v108; // x0
  const MethodInfo *v109; // x1
  const MethodInfo *v110; // x1
  int32_t v111; // w1
  const MethodInfo *v112; // x1
  const MethodInfo *v113; // x1
  UnityEngine_Component_o *v114; // x0
  UnityEngine_GameObject_o *v115; // x0
  UnityEngine_GameObject_o *v116; // x0
  const MethodInfo *v117; // x1
  const MethodInfo *v118; // x1
  UnityEngine_GameObject_o *v119; // x0
  UnityEngine_Component_o *v120; // x0
  UnityEngine_GameObject_o *v121; // x0
  const MethodInfo *v122; // x1
  const MethodInfo *v123; // x1
  UnityEngine_Component_o *v124; // x0
  UnityEngine_GameObject_o *v125; // x0
  System_Action_o *v126; // x20
  ServantSortSelectMenu_c *v127; // x0
  struct ListViewSort_o **p_commonServantEquipSortInfo; // x8
  struct ListViewSort_o *v129; // x1
  ListViewSort_o *v130; // x0

  if ( (byte_40F86C7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&ListViewSort_TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_ServantSortSelectMenu_EndOpen__, v15);
    sub_B16FFC(&ServantSortSelectMenu_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_12221/*"SORT_WINDOW_TITLE"*/, v17);
    sub_B16FFC(&StringLiteral_12213/*"SMART_SORT_DETAIL"*/, v18);
    sub_B16FFC(&StringLiteral_12214/*"SMART_SORT_NAME"*/, v19);
    sub_B16FFC(&StringLiteral_11759/*"SERVANT_SORT_CANCEL"*/, v20);
    sub_B16FFC(&StringLiteral_2975/*"CHOICE_SORT_NAME"*/, v21);
    sub_B16FFC(&StringLiteral_11763/*"SERVANT_SORT_DECIDE"*/, v22);
    sub_B16FFC(&StringLiteral_2974/*"CHOICE_SORT_DETAIL_REVERSE"*/, v23);
    sub_B16FFC(&StringLiteral_12220/*"SORT_WINDOW_DETAIL"*/, v24);
    sub_B16FFC(&StringLiteral_2973/*"CHOICE_SORT_DETAIL"*/, v25);
    byte_40F86C7 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B16F98(
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
      sub_B16F98(
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
      v38 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v34, v35, v36, v37);
      ListViewSort___ctor_30209040(v38, baseSortInfo, 0LL);
      this->fields.operationSortInfo = v38;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
        (System_Int32_array **)v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      allDispObject = this->fields.allDispObject;
      if ( allDispObject )
      {
        UnityEngine_GameObject__SetActive(allDispObject, 0, 0LL);
        fatigueDispObject = this->fields.fatigueDispObject;
        if ( fatigueDispObject )
        {
          UnityEngine_GameObject__SetActive(fatigueDispObject, 0, 0LL);
          buddyDispObject = this->fields.buddyDispObject;
          if ( buddyDispObject )
          {
            UnityEngine_GameObject__SetActive(buddyDispObject, 0, 0LL);
            normalDispObject = this->fields.normalDispObject;
            if ( normalDispObject )
            {
              UnityEngine_GameObject__SetActive(normalDispObject, 0, 0LL);
              shortDispObject = this->fields.shortDispObject;
              if ( shortDispObject )
              {
                UnityEngine_GameObject__SetActive(shortDispObject, 0, 0LL);
                smartSortObject = this->fields.smartSortObject;
                if ( smartSortObject )
                {
                  UnityEngine_GameObject__SetActive(smartSortObject, 0, 0LL);
                  choiceSortObject = this->fields.choiceSortObject;
                  if ( choiceSortObject )
                  {
                    UnityEngine_GameObject__SetActive(choiceSortObject, 0, 0LL);
                    choiceSort2Object = this->fields.choiceSort2Object;
                    if ( choiceSort2Object )
                    {
                      UnityEngine_GameObject__SetActive(choiceSort2Object, 0, 0LL);
                      costumeSmartSortObject = this->fields.costumeSmartSortObject;
                      if ( costumeSmartSortObject )
                      {
                        UnityEngine_GameObject__SetActive(costumeSmartSortObject, 0, 0LL);
                        costumeDispObject = this->fields.costumeDispObject;
                        if ( costumeDispObject )
                        {
                          UnityEngine_GameObject__SetActive(costumeDispObject, 0, 0LL);
                          helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
                          if ( helpButton )
                          {
                            gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL);
                            if ( gameObject )
                            {
                              UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                              v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                              if ( v57 )
                              {
                                UnityEngine_GameObject__SetActive(v57, 1, 0LL);
                                titleLabel = this->fields.titleLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12221/*"SORT_WINDOW_TITLE"*/, 0LL);
                                if ( titleLabel )
                                {
                                  UILabel__set_text(titleLabel, v59, 0LL);
                                  explanationLabel = this->fields.explanationLabel;
                                  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12220/*"SORT_WINDOW_DETAIL"*/, 0LL);
                                  if ( explanationLabel )
                                  {
                                    UILabel__set_text(explanationLabel, v61, 0LL);
                                    decideLabel = this->fields.decideLabel;
                                    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_11763/*"SERVANT_SORT_DECIDE"*/, 0LL);
                                    if ( decideLabel )
                                    {
                                      UILabel__set_text(decideLabel, v63, 0LL);
                                      cancelLabel = this->fields.cancelLabel;
                                      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_11759/*"SERVANT_SORT_CANCEL"*/, 0LL);
                                      if ( cancelLabel )
                                      {
                                        UILabel__set_text(cancelLabel, v65, 0LL);
                                        smartSortLabel = this->fields.smartSortLabel;
                                        v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12214/*"SMART_SORT_NAME"*/, 0LL);
                                        if ( smartSortLabel )
                                        {
                                          UILabel__set_text(smartSortLabel, v67, 0LL);
                                          smartSortDetail = this->fields.smartSortDetail;
                                          v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12213/*"SMART_SORT_DETAIL"*/, 0LL);
                                          if ( smartSortDetail )
                                          {
                                            UILabel__set_text(smartSortDetail, v69, 0LL);
                                            costumeSmartSortLabel = this->fields.costumeSmartSortLabel;
                                            v71 = LocalizationManager__Get((System_String_o *)StringLiteral_12214/*"SMART_SORT_NAME"*/, 0LL);
                                            if ( costumeSmartSortLabel )
                                            {
                                              UILabel__set_text(costumeSmartSortLabel, v71, 0LL);
                                              costumeSmartSortDetail = this->fields.costumeSmartSortDetail;
                                              v73 = LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_12213/*"SMART_SORT_DETAIL"*/,
                                                      0LL);
                                              if ( costumeSmartSortDetail )
                                              {
                                                UILabel__set_text(costumeSmartSortDetail, v73, 0LL);
                                                smartChoiceLabel = this->fields.smartChoiceLabel;
                                                v75 = LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_2975/*"CHOICE_SORT_NAME"*/,
                                                        0LL);
                                                if ( smartChoiceLabel )
                                                {
                                                  UILabel__set_text(smartChoiceLabel, v75, 0LL);
                                                  choiceSortLabel = this->fields.choiceSortLabel;
                                                  v77 = LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_2975/*"CHOICE_SORT_NAME"*/,
                                                          0LL);
                                                  if ( choiceSortLabel )
                                                  {
                                                    UILabel__set_text(choiceSortLabel, v77, 0LL);
                                                    choiceSort2Label = this->fields.choiceSort2Label;
                                                    v79 = LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_2975/*"CHOICE_SORT_NAME"*/,
                                                            0LL);
                                                    if ( choiceSort2Label )
                                                    {
                                                      UILabel__set_text(choiceSort2Label, v79, 0LL);
                                                      smartChoiceDetail = this->fields.smartChoiceDetail;
                                                      if ( isChoiceReverse )
                                                      {
                                                        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                        {
                                                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                        }
                                                        v81 = &StringLiteral_2974/*"CHOICE_SORT_DETAIL_REVERSE"*/;
                                                      }
                                                      else
                                                      {
                                                        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                        {
                                                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                        }
                                                        v81 = &StringLiteral_2973/*"CHOICE_SORT_DETAIL"*/;
                                                      }
                                                      v82 = LocalizationManager__Get((System_String_o *)*v81, 0LL);
                                                      if ( smartChoiceDetail )
                                                      {
                                                        UILabel__set_text(smartChoiceDetail, v82, 0LL);
                                                        choiceSortDetail = this->fields.choiceSortDetail;
                                                        v84 = LocalizationManager__Get((System_String_o *)*v81, 0LL);
                                                        if ( choiceSortDetail )
                                                        {
                                                          UILabel__set_text(choiceSortDetail, v84, 0LL);
                                                          choiceSort2Detail = this->fields.choiceSort2Detail;
                                                          v86 = LocalizationManager__Get((System_String_o *)*v81, 0LL);
                                                          if ( choiceSort2Detail )
                                                          {
                                                            UILabel__set_text(choiceSort2Detail, v86, 0LL);
                                                            ServantSortSelectMenu__SetEnableButtons(this, 1, v87);
                                                            switch ( this->fields.kind )
                                                            {
                                                              case 0:
                                                                ServantSortSelectMenu__InitAllDisp(this, v88);
                                                                ServantSortSelectMenu__SetAllButtonSelect(this, v104);
                                                                goto LABEL_58;
                                                              case 1:
                                                              case 3:
                                                                ServantSortSelectMenu__InitAllDisp(this, v88);
                                                                ServantSortSelectMenu__SetAllButtonSelect(this, v92);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v93);
                                                                v94 = (UnityEngine_Component_o *)this->fields.helpButton;
                                                                if ( !v94 )
                                                                  break;
                                                                v95 = UnityEngine_Component__get_gameObject(v94, 0LL);
                                                                if ( !v95 )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(v95, 1, 0LL);
                                                                v96 = this->fields.kind;
                                                                if ( v96 == 3 )
                                                                  goto LABEL_74;
                                                                if ( v96 != 1 )
                                                                  goto LABEL_79;
                                                                goto LABEL_54;
                                                              case 2:
                                                              case 4:
                                                                ServantSortSelectMenu__InitShortDisp(this, v88);
                                                                ServantSortSelectMenu__SetShortButtonSelect(this, v97);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v98);
                                                                v99 = (UnityEngine_Component_o *)this->fields.helpButton;
                                                                if ( !v99 )
                                                                  break;
                                                                v100 = UnityEngine_Component__get_gameObject(v99, 0LL);
                                                                if ( !v100 )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(v100, 1, 0LL);
                                                                v101 = this->fields.kind;
                                                                if ( v101 == 4 )
                                                                {
                                                                  v121 = this->fields.choiceSortObject;
                                                                  if ( v121 )
                                                                  {
LABEL_77:
                                                                    UnityEngine_GameObject__SetActive(v121, 1, 0LL);
                                                                    v111 = 41;
LABEL_78:
                                                                    EventTutorialMaster__CheckTutorial(
                                                                      0,
                                                                      v111,
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
                                                                  if ( v101 != 2 )
                                                                  {
LABEL_79:
                                                                    this->fields.state = 1;
                                                                    v126 = (System_Action_o *)sub_B170CC(
                                                                                                System_Action_TypeInfo,
                                                                                                v88,
                                                                                                v89,
                                                                                                v90,
                                                                                                v91);
                                                                    System_Action___ctor(
                                                                      v126,
                                                                      (Il2CppObject *)this,
                                                                      Method_ServantSortSelectMenu_EndOpen__,
                                                                      0LL);
                                                                    BaseDialog__Open((BaseDialog_o *)this, v126, 0, 0LL);
                                                                    return;
                                                                  }
LABEL_54:
                                                                  v102 = this->fields.smartSortObject;
                                                                  if ( v102 )
                                                                  {
                                                                    UnityEngine_GameObject__SetActive(v102, 1, 0LL);
                                                                    ServantSortSelectMenu__SetSmartSortButtonSelect(
                                                                      this,
                                                                      v103);
LABEL_62:
                                                                    v111 = 42;
                                                                    goto LABEL_78;
                                                                  }
                                                                }
                                                                break;
                                                              case 5:
                                                                ServantSortSelectMenu__InitCostumeDisp(this, v88);
                                                                ServantSortSelectMenu__SetCostumeButtonSelect(
                                                                  this,
                                                                  v112);
                                                                ServantSortSelectMenu__SetSmartSortButtonSelect(
                                                                  this,
                                                                  v113);
                                                                v114 = (UnityEngine_Component_o *)this->fields.helpButton;
                                                                if ( !v114 )
                                                                  break;
                                                                v115 = UnityEngine_Component__get_gameObject(v114, 0LL);
                                                                if ( !v115 )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(v115, 1, 0LL);
                                                                v116 = this->fields.costumeSmartSortObject;
                                                                if ( !v116 )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(v116, 1, 0LL);
                                                                v111 = 32;
                                                                goto LABEL_78;
                                                              case 6:
                                                                ServantSortSelectMenu__InitCommandCodeDisp(this, v88);
                                                                ServantSortSelectMenu__SetCommandCodeButtonSelect(
                                                                  this,
                                                                  v117);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v118);
                                                                v119 = this->fields.choiceSortObject;
                                                                if ( !v119 )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(v119, 1, 0LL);
                                                                v120 = (UnityEngine_Component_o *)this->fields.helpButton;
                                                                if ( !v120 )
                                                                  break;
                                                                v121 = UnityEngine_Component__get_gameObject(v120, 0LL);
                                                                if ( !v121 )
                                                                  break;
                                                                goto LABEL_77;
                                                              case 7:
                                                                ServantSortSelectMenu__InitFatigueDisp(this, v88);
                                                                ServantSortSelectMenu__SetFatigueButtonSelect(
                                                                  this,
                                                                  v105);
LABEL_58:
                                                                v106 = (UnityEngine_Component_o *)this->fields.helpButton;
                                                                if ( !v106 )
                                                                  break;
                                                                v107 = UnityEngine_Component__get_gameObject(v106, 0LL);
                                                                if ( !v107 )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(v107, 1, 0LL);
                                                                v108 = this->fields.smartSortObject;
                                                                if ( !v108 )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(v108, 1, 0LL);
                                                                ServantSortSelectMenu__SetSmartSortButtonSelect(
                                                                  this,
                                                                  v109);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v110);
                                                                goto LABEL_62;
                                                              case 8:
                                                                ServantSortSelectMenu__InitBuddyDisp(this, v88);
                                                                ServantSortSelectMenu__SetBuddyButtonSelect(this, v122);
                                                                ServantSortSelectMenu__SetChoiceSortButtonSelect(
                                                                  this,
                                                                  v123);
                                                                v124 = (UnityEngine_Component_o *)this->fields.helpButton;
                                                                if ( !v124 )
                                                                  break;
                                                                v125 = UnityEngine_Component__get_gameObject(v124, 0LL);
                                                                if ( !v125 )
                                                                  break;
                                                                UnityEngine_GameObject__SetActive(v125, 1, 0LL);
LABEL_74:
                                                                v121 = this->fields.choiceSort2Object;
                                                                if ( !v121 )
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
      v127 = ServantSortSelectMenu_TypeInfo;
      if ( this->fields.kind == 2 )
      {
        if ( (WORD1(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
          v127 = ServantSortSelectMenu_TypeInfo;
        }
        p_commonServantEquipSortInfo = &v127->static_fields->commonServantEquipSortInfo;
      }
      else
      {
        if ( (WORD1(ServantSortSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantSortSelectMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSortSelectMenu_TypeInfo);
          v127 = ServantSortSelectMenu_TypeInfo;
        }
        p_commonServantEquipSortInfo = &v127->static_fields->commonServantSortInfo;
      }
      v129 = *p_commonServantEquipSortInfo;
      this->fields.baseSortInfo = *p_commonServantEquipSortInfo;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)v129,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      v130 = this->fields.baseSortInfo;
      if ( v130 )
      {
        ListViewSort__Load(v130, 0LL);
        sub_B170D4();
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSortSelectMenu__SetAllButtonEnable(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *allDispSortButtons; // x8
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  UICommonButton_o *v8; // x0

  allDispSortButtons = this->fields.allDispSortButtons;
  if ( !allDispSortButtons )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = allDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, isEnable, method);
      sub_B170A0();
    }
    v8 = allDispSortButtons->m_Items[v5];
    if ( v8 )
    {
      UICommonButton__SetButtonEnableWithCollider(v8, v6, 0LL);
      allDispSortButtons = this->fields.allDispSortButtons;
      ++v5;
      if ( allDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetAllButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISprite_array *allDispSortSprites; // x8
  __int64 v7; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantBaseSelectList; // x24
  Il2CppClass **v11; // x8
  UISprite_o *v12; // x0
  System_String_o **v13; // x8

  v3 = this;
  if ( (byte_40F86D2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B16FFC(&StringLiteral_16891/*"btn_bg_04"*/, v4);
    this = (ServantSortSelectMenu_o *)sub_B16FFC(&StringLiteral_16890/*"btn_bg_03"*/, v5);
    byte_40F86D2 = 1;
  }
  allDispSortSprites = v3->fields.allDispSortSprites;
  if ( !allDispSortSprites )
LABEL_16:
    sub_B170D4();
  v7 = 0LL;
  while ( 1 )
  {
    max_length = allDispSortSprites->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      servantBaseSelectList = v3->fields.servantBaseSelectList;
      if ( servantBaseSelectList )
      {
        v11 = &allDispSortSprites->obj.klass + v7;
        if ( servantBaseSelectList->fields._size <= (unsigned int)v7 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( v11[4] )
        {
          v12 = (UISprite_o *)v11[4];
          v13 = (System_String_o **)(operationSortInfo->fields.sortKind == servantBaseSelectList->fields._items->m_Items[v7 + 1]
                                   ? &StringLiteral_16890/*"btn_bg_03"*/
                                   : &StringLiteral_16891/*"btn_bg_04"*/);
          UISprite__set_spriteName(v12, *v13, 0LL);
          allDispSortSprites = v3->fields.allDispSortSprites;
          ++v7;
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
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  UICommonButton_o *v8; // x0

  buddyDispSortButtons = this->fields.buddyDispSortButtons;
  if ( !buddyDispSortButtons )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = buddyDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, isEnable, method);
      sub_B170A0();
    }
    v8 = buddyDispSortButtons->m_Items[v5];
    if ( v8 )
    {
      UICommonButton__SetButtonEnableWithCollider(v8, v6, 0LL);
      buddyDispSortButtons = this->fields.buddyDispSortButtons;
      ++v5;
      if ( buddyDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetBuddyButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISprite_array *buddyDispSortSprites; // x8
  __int64 v7; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *buddySelectList; // x24
  Il2CppClass **v11; // x8
  UISprite_o *v12; // x0
  System_String_o **v13; // x8

  v3 = this;
  if ( (byte_40F86D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B16FFC(&StringLiteral_16891/*"btn_bg_04"*/, v4);
    this = (ServantSortSelectMenu_o *)sub_B16FFC(&StringLiteral_16890/*"btn_bg_03"*/, v5);
    byte_40F86D4 = 1;
  }
  buddyDispSortSprites = v3->fields.buddyDispSortSprites;
  if ( !buddyDispSortSprites )
LABEL_16:
    sub_B170D4();
  v7 = 0LL;
  while ( 1 )
  {
    max_length = buddyDispSortSprites->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      buddySelectList = v3->fields.buddySelectList;
      if ( buddySelectList )
      {
        v11 = &buddyDispSortSprites->obj.klass + v7;
        if ( buddySelectList->fields._size <= (unsigned int)v7 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( v11[4] )
        {
          v12 = (UISprite_o *)v11[4];
          v13 = (System_String_o **)(operationSortInfo->fields.sortKind == buddySelectList->fields._items->m_Items[v7 + 1]
                                   ? &StringLiteral_16890/*"btn_bg_03"*/
                                   : &StringLiteral_16891/*"btn_bg_04"*/);
          UISprite__set_spriteName(v12, *v13, 0LL);
          buddyDispSortSprites = v3->fields.buddyDispSortSprites;
          ++v7;
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
  __int64 v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8
  UISprite_o *choiceSort2BtnSprite; // x0
  __int64 *v6; // x8

  if ( (byte_40F86D9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940/*"btn_on"*/, method);
    sub_B16FFC(&StringLiteral_16939/*"btn_off"*/, v3);
    byte_40F86D9 = 1;
  }
  switch ( this->fields.kind )
  {
    case 3:
    case 8:
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_16;
      choiceSort2BtnSprite = this->fields.choiceSort2BtnSprite;
      if ( !choiceSort2BtnSprite )
        goto LABEL_16;
      goto LABEL_12;
    case 4:
    case 6:
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_16;
      choiceSort2BtnSprite = this->fields.choiceSortBtnSprite;
      if ( !choiceSort2BtnSprite )
        goto LABEL_16;
      goto LABEL_12;
    default:
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo || (choiceSort2BtnSprite = this->fields.smartChoiceBtnSprite) == 0LL )
LABEL_16:
        sub_B170D4();
LABEL_12:
      if ( operationSortInfo->fields.isChoiceSort )
        v6 = &StringLiteral_16940/*"btn_on"*/;
      else
        v6 = &StringLiteral_16939/*"btn_off"*/;
      UISprite__set_spriteName(choiceSort2BtnSprite, (System_String_o *)*v6, 0LL);
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
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  UICommonButton_o *v8; // x0

  commandCodeDispSortButtons = this->fields.commandCodeDispSortButtons;
  if ( !commandCodeDispSortButtons )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = commandCodeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, isEnable, method);
      sub_B170A0();
    }
    v8 = commandCodeDispSortButtons->m_Items[v5];
    if ( v8 )
    {
      UICommonButton__SetButtonEnableWithCollider(v8, v6, 0LL);
      commandCodeDispSortButtons = this->fields.commandCodeDispSortButtons;
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
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISprite_array *commandCodeDispSprites; // x8
  __int64 v7; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *commandCodeSelectList; // x24
  Il2CppClass **v11; // x8
  UISprite_o *v12; // x0
  System_String_o **v13; // x8

  v3 = this;
  if ( (byte_40F86D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B16FFC(&StringLiteral_16891/*"btn_bg_04"*/, v4);
    this = (ServantSortSelectMenu_o *)sub_B16FFC(&StringLiteral_16890/*"btn_bg_03"*/, v5);
    byte_40F86D7 = 1;
  }
  commandCodeDispSprites = v3->fields.commandCodeDispSprites;
  if ( !commandCodeDispSprites )
LABEL_16:
    sub_B170D4();
  v7 = 0LL;
  while ( 1 )
  {
    max_length = commandCodeDispSprites->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      commandCodeSelectList = v3->fields.commandCodeSelectList;
      if ( commandCodeSelectList )
      {
        v11 = &commandCodeDispSprites->obj.klass + v7;
        if ( commandCodeSelectList->fields._size <= (unsigned int)v7 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( v11[4] )
        {
          v12 = (UISprite_o *)v11[4];
          v13 = (System_String_o **)(operationSortInfo->fields.sortKind == commandCodeSelectList->fields._items->m_Items[v7 + 1]
                                   ? &StringLiteral_16890/*"btn_bg_03"*/
                                   : &StringLiteral_16891/*"btn_bg_04"*/);
          UISprite__set_spriteName(v12, *v13, 0LL);
          commandCodeDispSprites = v3->fields.commandCodeDispSprites;
          ++v7;
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
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  UICommonButton_o *v8; // x0

  costumeDispSortButtons = this->fields.costumeDispSortButtons;
  if ( !costumeDispSortButtons )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = costumeDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, isEnable, method);
      sub_B170A0();
    }
    v8 = costumeDispSortButtons->m_Items[v5];
    if ( v8 )
    {
      UICommonButton__SetButtonEnableWithCollider(v8, v6, 0LL);
      costumeDispSortButtons = this->fields.costumeDispSortButtons;
      ++v5;
      if ( costumeDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetCostumeButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISprite_array *costumeDispSprites; // x8
  __int64 v7; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantCostumeSelectList; // x24
  Il2CppClass **v11; // x8
  UISprite_o *v12; // x0
  System_String_o **v13; // x8

  v3 = this;
  if ( (byte_40F86D6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B16FFC(&StringLiteral_16891/*"btn_bg_04"*/, v4);
    this = (ServantSortSelectMenu_o *)sub_B16FFC(&StringLiteral_16890/*"btn_bg_03"*/, v5);
    byte_40F86D6 = 1;
  }
  costumeDispSprites = v3->fields.costumeDispSprites;
  if ( !costumeDispSprites )
LABEL_16:
    sub_B170D4();
  v7 = 0LL;
  while ( 1 )
  {
    max_length = costumeDispSprites->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      servantCostumeSelectList = v3->fields.servantCostumeSelectList;
      if ( servantCostumeSelectList )
      {
        v11 = &costumeDispSprites->obj.klass + v7;
        if ( servantCostumeSelectList->fields._size <= (unsigned int)v7 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( v11[4] )
        {
          v12 = (UISprite_o *)v11[4];
          v13 = (System_String_o **)(operationSortInfo->fields.sortKind == servantCostumeSelectList->fields._items->m_Items[v7 + 1]
                                   ? &StringLiteral_16890/*"btn_bg_03"*/
                                   : &StringLiteral_16891/*"btn_bg_04"*/);
          UISprite__set_spriteName(v12, *v13, 0LL);
          costumeDispSprites = v3->fields.costumeDispSprites;
          ++v7;
          if ( costumeDispSprites )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
}


void __fastcall ServantSortSelectMenu__SetEnableButtons(
        ServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *decideButton; // x0
  bool v5; // w21
  UICommonButton_o *cancelButton; // x0
  const MethodInfo *v8; // x2

  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (v5 = isEnable,
        UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL),
        (cancelButton = this->fields.cancelButton) == 0LL) )
  {
    sub_B170D4();
  }
  UICommonButton__SetButtonEnableWithCollider(cancelButton, v5, 0LL);
  switch ( this->fields.kind )
  {
    case 0:
    case 1:
    case 3:
      ServantSortSelectMenu__SetAllButtonEnable(this, isEnable, v8);
      break;
    case 2:
    case 4:
      ServantSortSelectMenu__SetShortButtonEnable(this, isEnable, v8);
      break;
    case 5:
      ServantSortSelectMenu__SetCostumeButtonEnable(this, isEnable, v8);
      break;
    case 6:
      ServantSortSelectMenu__SetCommandCodeButtonEnable(this, isEnable, v8);
      break;
    case 7:
      ServantSortSelectMenu__SetFatigueButtonEnable(this, isEnable, v8);
      break;
    case 8:
      ServantSortSelectMenu__SetBuddyButtonEnable(this, isEnable, v8);
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
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  UICommonButton_o *v8; // x0

  fatigueDispSortButtons = this->fields.fatigueDispSortButtons;
  if ( !fatigueDispSortButtons )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = fatigueDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, isEnable, method);
      sub_B170A0();
    }
    v8 = fatigueDispSortButtons->m_Items[v5];
    if ( v8 )
    {
      UICommonButton__SetButtonEnableWithCollider(v8, v6, 0LL);
      fatigueDispSortButtons = this->fields.fatigueDispSortButtons;
      ++v5;
      if ( fatigueDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetFatigueButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISprite_array *fatigueDispSortSprites; // x8
  __int64 v7; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *fatigureSelectList; // x24
  Il2CppClass **v11; // x8
  UISprite_o *v12; // x0
  System_String_o **v13; // x8

  v3 = this;
  if ( (byte_40F86D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B16FFC(&StringLiteral_16891/*"btn_bg_04"*/, v4);
    this = (ServantSortSelectMenu_o *)sub_B16FFC(&StringLiteral_16890/*"btn_bg_03"*/, v5);
    byte_40F86D3 = 1;
  }
  fatigueDispSortSprites = v3->fields.fatigueDispSortSprites;
  if ( !fatigueDispSortSprites )
LABEL_16:
    sub_B170D4();
  v7 = 0LL;
  while ( 1 )
  {
    max_length = fatigueDispSortSprites->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      fatigureSelectList = v3->fields.fatigureSelectList;
      if ( fatigureSelectList )
      {
        v11 = &fatigueDispSortSprites->obj.klass + v7;
        if ( fatigureSelectList->fields._size <= (unsigned int)v7 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( v11[4] )
        {
          v12 = (UISprite_o *)v11[4];
          v13 = (System_String_o **)(operationSortInfo->fields.sortKind == fatigureSelectList->fields._items->m_Items[v7 + 1]
                                   ? &StringLiteral_16890/*"btn_bg_03"*/
                                   : &StringLiteral_16891/*"btn_bg_04"*/);
          UISprite__set_spriteName(v12, *v13, 0LL);
          fatigueDispSortSprites = v3->fields.fatigueDispSortSprites;
          ++v7;
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
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  UICommonButton_o *v8; // x0

  normalSortButtons = this->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = normalSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, isEnable, method);
      sub_B170A0();
    }
    v8 = normalSortButtons->m_Items[v5];
    if ( v8 )
    {
      UICommonButton__SetButtonEnableWithCollider(v8, v6, 0LL);
      normalSortButtons = this->fields.normalSortButtons;
      ++v5;
      if ( normalSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetNormalButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UICommonButton_array *normalSortButtons; // x8
  __int64 v7; // x21
  struct UISprite_array *normalSortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantSelectList; // x24
  Il2CppClass **v11; // x8
  UISprite_o *v12; // x0
  System_String_o **v13; // x8

  v3 = this;
  if ( (byte_40F86D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B16FFC(&StringLiteral_16891/*"btn_bg_04"*/, v4);
    this = (ServantSortSelectMenu_o *)sub_B16FFC(&StringLiteral_16890/*"btn_bg_03"*/, v5);
    byte_40F86D1 = 1;
  }
  normalSortButtons = v3->fields.normalSortButtons;
  if ( !normalSortButtons )
LABEL_17:
    sub_B170D4();
  v7 = 0LL;
  while ( (int)v7 < (signed int)normalSortButtons->max_length )
  {
    normalSortSprites = v3->fields.normalSortSprites;
    if ( normalSortSprites )
    {
      if ( (unsigned int)v7 >= normalSortSprites->max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      operationSortInfo = v3->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        servantSelectList = v3->fields.servantSelectList;
        if ( servantSelectList )
        {
          v11 = &normalSortSprites->obj.klass + v7;
          if ( servantSelectList->fields._size <= (unsigned int)v7 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( v11[4] )
          {
            v12 = (UISprite_o *)v11[4];
            v13 = (System_String_o **)(operationSortInfo->fields.sortKind == servantSelectList->fields._items->m_Items[v7 + 1]
                                     ? &StringLiteral_16890/*"btn_bg_03"*/
                                     : &StringLiteral_16891/*"btn_bg_04"*/);
            UISprite__set_spriteName(v12, *v13, 0LL);
            normalSortButtons = v3->fields.normalSortButtons;
            ++v7;
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
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  UICommonButton_o *v8; // x0

  shortDispSortButtons = this->fields.shortDispSortButtons;
  if ( !shortDispSortButtons )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  v6 = isEnable;
  while ( 1 )
  {
    max_length = shortDispSortButtons->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, isEnable, method);
      sub_B170A0();
    }
    v8 = shortDispSortButtons->m_Items[v5];
    if ( v8 )
    {
      UICommonButton__SetButtonEnableWithCollider(v8, v6, 0LL);
      shortDispSortButtons = this->fields.shortDispSortButtons;
      ++v5;
      if ( shortDispSortButtons )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantSortSelectMenu__SetShortButtonSelect(ServantSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISprite_array *shortDispSortSprites; // x8
  __int64 v7; // x21
  int max_length; // w9
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *servantEquipSelectList; // x24
  Il2CppClass **v11; // x8
  UISprite_o *v12; // x0
  System_String_o **v13; // x8

  v3 = this;
  if ( (byte_40F86D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B16FFC(&StringLiteral_16891/*"btn_bg_04"*/, v4);
    this = (ServantSortSelectMenu_o *)sub_B16FFC(&StringLiteral_16890/*"btn_bg_03"*/, v5);
    byte_40F86D5 = 1;
  }
  shortDispSortSprites = v3->fields.shortDispSortSprites;
  if ( !shortDispSortSprites )
LABEL_16:
    sub_B170D4();
  v7 = 0LL;
  while ( 1 )
  {
    max_length = shortDispSortSprites->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    operationSortInfo = v3->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      servantEquipSelectList = v3->fields.servantEquipSelectList;
      if ( servantEquipSelectList )
      {
        v11 = &shortDispSortSprites->obj.klass + v7;
        if ( servantEquipSelectList->fields._size <= (unsigned int)v7 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( v11[4] )
        {
          v12 = (UISprite_o *)v11[4];
          v13 = (System_String_o **)(operationSortInfo->fields.sortKind == servantEquipSelectList->fields._items->m_Items[v7 + 1]
                                   ? &StringLiteral_16890/*"btn_bg_03"*/
                                   : &StringLiteral_16891/*"btn_bg_04"*/);
          UISprite__set_spriteName(v12, *v13, 0LL);
          shortDispSortSprites = v3->fields.shortDispSortSprites;
          ++v7;
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
  __int64 v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8
  UISprite_o *costumeSmartSortBtnSprite; // x0
  __int64 *v6; // x8

  if ( (byte_40F86D8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940/*"btn_on"*/, method);
    sub_B16FFC(&StringLiteral_16939/*"btn_off"*/, v3);
    byte_40F86D8 = 1;
  }
  if ( this->fields.kind == 5 )
  {
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_13;
    costumeSmartSortBtnSprite = this->fields.costumeSmartSortBtnSprite;
    if ( !costumeSmartSortBtnSprite )
      goto LABEL_13;
  }
  else
  {
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo || (costumeSmartSortBtnSprite = this->fields.smartSortBtnSprite) == 0LL )
LABEL_13:
      sub_B170D4();
  }
  if ( operationSortInfo->fields.isSmartSort )
    v6 = &StringLiteral_16940/*"btn_on"*/;
  else
    v6 = &StringLiteral_16939/*"btn_off"*/;
  UISprite__set_spriteName(costumeSmartSortBtnSprite, (System_String_o *)*v6, 0LL);
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

  if ( (byte_40F86C2 & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40F86C2 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantSortSelectMenu_o *)sub_B173C8(v7);
  ServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantSortSelectMenu__get_closeBtnPath(
        ServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F86F3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15414/*"Window/CancelButton"*/, method);
    byte_40F86F3 = 1;
  }
  return (System_String_o *)StringLiteral_15414/*"Window/CancelButton"*/;
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

  if ( (byte_40F86C3 & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40F86C3 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B173C8(v7);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F765C & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F765C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ServantSortSelectMenu_CallbackFunc__EndInvoke(
        ServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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