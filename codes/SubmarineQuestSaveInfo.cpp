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
  __int64 v3; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  System_String_array *v7; // x0
  __int64 v8; // x1
  System_String_array *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int v12; // w19
  __int64 v13; // x0
  __int64 v14; // x1
  int v15; // w21
  System_String_o *v16; // x22
  _BOOL8 v17; // x0
  __int64 v18; // x1
  bool v19; // w22
  bool v20; // w20
  __int64 v21; // x23

  if ( (byte_4B33D61 & 1) == 0 )
  {
    sub_1BD3458(&bool_TypeInfo, method);
    sub_1BD3458(&SubmarineQuestSaveInfo_TypeInfo, v3);
    byte_4B33D61 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  if ( !value )
    sub_1BD36B4(IsNullOrEmpty, v5);
  v7 = System_String__Split(value, 0x2Cu, 0, 0LL);
  v9 = v7;
  if ( !v7 )
    sub_1BD36B4(0LL, v8);
  if ( !v7->max_length )
    sub_1BD36BC(v7, v8);
  v10 = System_Int32__Parse(v7->m_Items[0], 0LL);
  if ( v9->max_length <= 1 )
    sub_1BD36BC(v10, v11);
  v12 = v10;
  v13 = System_Int32__Parse(v9->m_Items[1], 0LL);
  if ( v9->max_length <= 2 )
    sub_1BD36BC(v13, v14);
  v15 = v13;
  v16 = v9->m_Items[2];
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v17 = System_Boolean__Parse(v16, 0LL);
  if ( v9->max_length <= 3 )
    sub_1BD36BC(v17, v18);
  v19 = v17;
  v20 = System_Boolean__Parse(v9->m_Items[3], 0LL);
  v21 = sub_1BD36A4(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  *(_DWORD *)(v21 + 16) = v12;
  *(_DWORD *)(v21 + 20) = v15;
  *(_BYTE *)(v21 + 24) = v19;
  *(_BYTE *)(v21 + 25) = v20;
  return (SubmarineQuestSaveInfo_o *)v21;
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineQuestSaveInfo__CreateDefault(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x19

  if ( (byte_4B33D60 & 1) == 0 )
  {
    sub_1BD3458(&SubmarineQuestSaveInfo_TypeInfo, v1);
    byte_4B33D60 = 1;
  }
  v2 = sub_1BD36A4(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_QWORD *)(v2 + 16) = -1LL;
  *(_WORD *)(v2 + 24) = 0;
  return (SubmarineQuestSaveInfo_o *)v2;
}


System_String_o *__fastcall SubmarineQuestSaveInfo__GetSaveValue(
        SubmarineQuestSaveInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
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
  void *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  void *v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  void *v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  void *v59; // x1
  char v61[4]; // [xsp+8h] [xbp-28h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B33D5F & 1) == 0 )
  {
    sub_1BD3458(&bool_TypeInfo, method);
    sub_1BD3458(&string___TypeInfo, v3);
    sub_1BD3458(&StringLiteral_863/*","*/, v4);
    byte_4B33D5F = 1;
  }
  v61[0] = 0;
  v5 = sub_1BD3500(string___TypeInfo, 8LL);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( !v5 )
    sub_1BD36B4(v6, v7);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)v6, v8, v9, v10, v11, v12, v13);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_15;
  v20 = StringLiteral_863/*","*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_863/*","*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)v20, v14, v15, v16, v17, v18, v19);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v5 + 48) = v6;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)v6, v21, v22, v23, v24, v25, v26);
  if ( *(_DWORD *)(v5 + 24) <= 3u )
    goto LABEL_15;
  v33 = StringLiteral_863/*","*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_863/*","*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 56), (int64_t)v33, v27, v28, v29, v30, v31, v32);
  v61[0] = this->fields._IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v6 = System_Boolean__ToString((bool)v61, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v5 + 64) = v6;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 64), (int64_t)v6, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v5 + 24) <= 5u
    || (v46 = StringLiteral_863/*","*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_863/*","*/,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 72), (int64_t)v46, v40, v41, v42, v43, v44, v45),
        v61[0] = this->fields._IsQuestPhaseClear_k__BackingField,
        v6 = System_Boolean__ToString((bool)v61, 0LL),
        *(_DWORD *)(v5 + 24) <= 6u)
    || (*(_QWORD *)(v5 + 80) = v6,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 80), (int64_t)v6, v47, v48, v49, v50, v51, v52),
        *(_DWORD *)(v5 + 24) <= 7u) )
  {
LABEL_15:
    sub_1BD36BC(v6, v7);
  }
  v59 = StringLiteral_863/*","*/;
  *(_QWORD *)(v5 + 88) = StringLiteral_863/*","*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 88), (int64_t)v59, v53, v54, v55, v56, v57, v58);
  return System_String__Concat_62538776((System_String_array *)v5, 0LL);
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