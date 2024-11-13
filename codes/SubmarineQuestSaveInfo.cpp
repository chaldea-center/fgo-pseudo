void __fastcall SubmarineQuestSaveInfo___ctor(
        SubmarineQuestSaveInfo_o *this,
        int32_t questId,
        int32_t phaseCnt,
        bool isQuestClear,
        bool isQuestPhaseClear,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._QuestId_k__BackingField = questId;
  this->fields._PhaseCnt_k__BackingField = phaseCnt;
  this->fields._IsQuestClear_k__BackingField = isQuestClear;
  this->fields._IsQuestPhaseClear_k__BackingField = isQuestPhaseClear;
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineQuestSaveInfo__CreateBySaveValue(
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  System_String_array *v9; // x0
  __int64 v10; // x1
  System_String_array *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int v14; // w19
  __int64 v15; // x0
  __int64 v16; // x1
  int v17; // w21
  System_String_o *v18; // x22
  _BOOL8 v19; // x0
  __int64 v20; // x1
  bool v21; // w22
  bool v22; // w20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x23

  if ( (byte_4B12DD7 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, method, v2);
    sub_1BCA7E0(&SubmarineQuestSaveInfo_TypeInfo, v4, v5);
    byte_4B12DD7 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  if ( !value )
    sub_1BCAA3C(IsNullOrEmpty, v7);
  v9 = System_String__Split(value, 0x2Cu, 0, 0LL);
  v11 = v9;
  if ( !v9 )
    sub_1BCAA3C(0LL, v10);
  if ( !v9->max_length )
    sub_1BCAA44(v9, v10);
  v12 = System_Int32__Parse(v9->m_Items[0], 0LL);
  if ( v11->max_length <= 1 )
    sub_1BCAA44(v12, v13);
  v14 = v12;
  v15 = System_Int32__Parse(v11->m_Items[1], 0LL);
  if ( v11->max_length <= 2 )
    sub_1BCAA44(v15, v16);
  v17 = v15;
  v18 = v11->m_Items[2];
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo, v16);
  v19 = System_Boolean__Parse(v18, 0LL);
  if ( v11->max_length <= 3 )
    sub_1BCAA44(v19, v20);
  v21 = v19;
  v22 = System_Boolean__Parse(v11->m_Items[3], 0LL);
  v26 = sub_1BCAA2C(SubmarineQuestSaveInfo_TypeInfo, v23, v24, v25);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  *(_DWORD *)(v26 + 16) = v14;
  *(_DWORD *)(v26 + 20) = v17;
  *(_BYTE *)(v26 + 24) = v21;
  *(_BYTE *)(v26 + 25) = v22;
  return (SubmarineQuestSaveInfo_o *)v26;
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineQuestSaveInfo__CreateDefault(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x19

  if ( (byte_4B12DD6 & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineQuestSaveInfo_TypeInfo, v1, v2);
    byte_4B12DD6 = 1;
  }
  v4 = sub_1BCAA2C(SubmarineQuestSaveInfo_TypeInfo, v1, v2, v3);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_QWORD *)(v4 + 16) = -1LL;
  *(_WORD *)(v4 + 24) = 0;
  return (SubmarineQuestSaveInfo_o *)v4;
}


System_String_o *__fastcall SubmarineQuestSaveInfo__GetSaveValue(
        SubmarineQuestSaveInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  void *v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  void *v36; // x1
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  void *v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  void *v63; // x1
  char v65[4]; // [xsp+8h] [xbp-28h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B12DD5 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, method, v2);
    sub_1BCA7E0(&string___TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v6, v7);
    byte_4B12DD5 = 1;
  }
  v65[0] = 0;
  v8 = sub_1BCA888(string___TypeInfo, 8LL);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v9 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( !v8 )
    sub_1BCAA3C(v9, v10);
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v8 + 32) = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)v9, v11, v12, v13, v14, v15, v16);
  if ( *(_DWORD *)(v8 + 24) <= 1u )
    goto LABEL_15;
  v23 = StringLiteral_863/*","*/;
  *(_QWORD *)(v8 + 40) = StringLiteral_863/*","*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)v23, v17, v18, v19, v20, v21, v22);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v9 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( *(_DWORD *)(v8 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v8 + 48) = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 48), (int64_t)v9, v24, v25, v26, v27, v28, v29);
  if ( *(_DWORD *)(v8 + 24) <= 3u )
    goto LABEL_15;
  v36 = StringLiteral_863/*","*/;
  *(_QWORD *)(v8 + 56) = StringLiteral_863/*","*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 56), (int64_t)v36, v30, v31, v32, v33, v34, v35);
  v65[0] = this->fields._IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo, v37);
  v9 = System_Boolean__ToString((bool)v65, 0LL);
  if ( *(_DWORD *)(v8 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v8 + 64) = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 64), (int64_t)v9, v38, v39, v40, v41, v42, v43);
  if ( *(_DWORD *)(v8 + 24) <= 5u
    || (v50 = StringLiteral_863/*","*/,
        *(_QWORD *)(v8 + 72) = StringLiteral_863/*","*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 72), (int64_t)v50, v44, v45, v46, v47, v48, v49),
        v65[0] = this->fields._IsQuestPhaseClear_k__BackingField,
        v9 = System_Boolean__ToString((bool)v65, 0LL),
        *(_DWORD *)(v8 + 24) <= 6u)
    || (*(_QWORD *)(v8 + 80) = v9,
        sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 80), (int64_t)v9, v51, v52, v53, v54, v55, v56),
        *(_DWORD *)(v8 + 24) <= 7u) )
  {
LABEL_15:
    sub_1BCAA44(v9, v10);
  }
  v63 = StringLiteral_863/*","*/;
  *(_QWORD *)(v8 + 88) = StringLiteral_863/*","*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 88), (int64_t)v63, v57, v58, v59, v60, v61, v62);
  return System_String__Concat_62414748((System_String_array *)v8, 0LL);
}


int32_t __fastcall SubmarineQuestSaveInfo__get_BeforeClearQuestId(
        SubmarineQuestSaveInfo_o *this,
        const MethodInfo *method)
{
  if ( this->fields._IsQuestClear_k__BackingField || this->fields._IsQuestPhaseClear_k__BackingField )
    return this->fields._QuestId_k__BackingField;
  else
    return -1;
}


bool __fastcall SubmarineQuestSaveInfo__get_IsQuestClear(SubmarineQuestSaveInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsQuestClear_k__BackingField;
}


bool __fastcall SubmarineQuestSaveInfo__get_IsQuestPhaseClear(SubmarineQuestSaveInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsQuestPhaseClear_k__BackingField;
}


int32_t __fastcall SubmarineQuestSaveInfo__get_PhaseCnt(SubmarineQuestSaveInfo_o *this, const MethodInfo *method)
{
  return this->fields._PhaseCnt_k__BackingField;
}


int32_t __fastcall SubmarineQuestSaveInfo__get_QuestId(SubmarineQuestSaveInfo_o *this, const MethodInfo *method)
{
  return this->fields._QuestId_k__BackingField;
}


void __fastcall SubmarineQuestSaveInfo__set_IsQuestClear(
        SubmarineQuestSaveInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsQuestClear_k__BackingField = value;
}


void __fastcall SubmarineQuestSaveInfo__set_IsQuestPhaseClear(
        SubmarineQuestSaveInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsQuestPhaseClear_k__BackingField = value;
}


void __fastcall SubmarineQuestSaveInfo__set_PhaseCnt(
        SubmarineQuestSaveInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PhaseCnt_k__BackingField = value;
}


void __fastcall SubmarineQuestSaveInfo__set_QuestId(
        SubmarineQuestSaveInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._QuestId_k__BackingField = value;
}