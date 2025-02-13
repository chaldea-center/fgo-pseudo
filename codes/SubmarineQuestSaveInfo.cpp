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
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1
  System_String_array *v6; // x0
  __int64 v7; // x1
  System_String_array *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int v11; // w19
  __int64 v12; // x0
  __int64 v13; // x1
  int v14; // w21
  System_String_o *v15; // x22
  _BOOL8 v16; // x0
  __int64 v17; // x1
  bool v18; // w22
  bool v19; // w20
  __int64 v20; // x23

  if ( (byte_4BD90A9 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&SubmarineQuestSaveInfo_TypeInfo);
    byte_4BD90A9 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  if ( !value )
    sub_1C22094(IsNullOrEmpty, v4);
  v6 = System_String__Split(value, 0x2Cu, 0, 0LL);
  v8 = v6;
  if ( !v6 )
    sub_1C22094(0LL, v7);
  if ( !v6->max_length )
    sub_1C2209C(v6, v7);
  v9 = System_Int32__Parse(v6->m_Items[0], 0LL);
  if ( v8->max_length <= 1 )
    sub_1C2209C(v9, v10);
  v11 = v9;
  v12 = System_Int32__Parse(v8->m_Items[1], 0LL);
  if ( v8->max_length <= 2 )
    sub_1C2209C(v12, v13);
  v14 = v12;
  v15 = v8->m_Items[2];
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v16 = System_Boolean__Parse(v15, 0LL);
  if ( v8->max_length <= 3 )
    sub_1C2209C(v16, v17);
  v18 = v16;
  v19 = System_Boolean__Parse(v8->m_Items[3], 0LL);
  v20 = sub_1C22084(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  *(_DWORD *)(v20 + 16) = v11;
  *(_DWORD *)(v20 + 20) = v14;
  *(_BYTE *)(v20 + 24) = v18;
  *(_BYTE *)(v20 + 25) = v19;
  return (SubmarineQuestSaveInfo_o *)v20;
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineQuestSaveInfo__CreateDefault(const MethodInfo *method)
{
  __int64 v1; // x19

  if ( (byte_4BD90A8 & 1) == 0 )
  {
    sub_1C21E38(&SubmarineQuestSaveInfo_TypeInfo);
    byte_4BD90A8 = 1;
  }
  v1 = sub_1C22084(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v1, 0LL);
  *(_QWORD *)(v1 + 16) = -1LL;
  *(_WORD *)(v1 + 24) = 0;
  return (SubmarineQuestSaveInfo_o *)v1;
}


System_String_o *__fastcall SubmarineQuestSaveInfo__GetSaveValue(
        SubmarineQuestSaveInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  void *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  void *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  void *v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  void *v57; // x1
  char v59[4]; // [xsp+8h] [xbp-28h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD90A7 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BD90A7 = 1;
  }
  v59[0] = 0;
  v3 = sub_1C21EE0(string___TypeInfo, 8LL);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v3 + 32) = v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)v4, v6, v7, v8, v9, v10, v11);
  if ( *(_DWORD *)(v3 + 24) <= 1u )
    goto LABEL_15;
  v18 = StringLiteral_866/*","*/;
  *(_QWORD *)(v3 + 40) = StringLiteral_866/*","*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 40), (int64_t)v18, v12, v13, v14, v15, v16, v17);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( *(_DWORD *)(v3 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v3 + 48) = v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 48), (int64_t)v4, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v3 + 24) <= 3u )
    goto LABEL_15;
  v31 = StringLiteral_866/*","*/;
  *(_QWORD *)(v3 + 56) = StringLiteral_866/*","*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 56), (int64_t)v31, v25, v26, v27, v28, v29, v30);
  v59[0] = this->fields._IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v4 = System_Boolean__ToString((bool)v59, 0LL);
  if ( *(_DWORD *)(v3 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v3 + 64) = v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 64), (int64_t)v4, v32, v33, v34, v35, v36, v37);
  if ( *(_DWORD *)(v3 + 24) <= 5u
    || (v44 = StringLiteral_866/*","*/,
        *(_QWORD *)(v3 + 72) = StringLiteral_866/*","*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 72), (int64_t)v44, v38, v39, v40, v41, v42, v43),
        v59[0] = this->fields._IsQuestPhaseClear_k__BackingField,
        v4 = System_Boolean__ToString((bool)v59, 0LL),
        *(_DWORD *)(v3 + 24) <= 6u)
    || (*(_QWORD *)(v3 + 80) = v4,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 80), (int64_t)v4, v45, v46, v47, v48, v49, v50),
        *(_DWORD *)(v3 + 24) <= 7u) )
  {
LABEL_15:
    sub_1C2209C(v4, v5);
  }
  v57 = StringLiteral_866/*","*/;
  *(_QWORD *)(v3 + 88) = StringLiteral_866/*","*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 88), (int64_t)v57, v51, v52, v53, v54, v55, v56);
  return System_String__Concat_63129004((System_String_array *)v3, 0LL);
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