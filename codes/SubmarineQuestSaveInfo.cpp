void SubmarineQuestSaveInfo___ctor(
        SubmarineQuestSaveInfo_o *this,
        int32_t questId,
        int32_t phaseCnt,
        bool isQuestClear,
        bool isQuestPhaseClear,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._QuestId_k__BackingField = questId;
  this->fields._PhaseCnt_k__BackingField = phaseCnt;
  this->fields._IsQuestClear_k__BackingField = isQuestClear;
  this->fields._IsQuestPhaseClear_k__BackingField = isQuestPhaseClear;
}


SubmarineQuestSaveInfo_o *SubmarineQuestSaveInfo__CreateBySaveValue(System_String_o *value, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1
  System_String_array *v6; // x0
  __int64 v7; // x1
  System_String_array *v8; // x20
  __int64 v9; // x0
  int v10; // w19
  __int64 v11; // x0
  int v12; // w21
  System_String_o *v13; // x22
  _BOOL8 v14; // x0
  bool v15; // w22
  bool v16; // w20
  __int64 v17; // x23

  if ( (byte_4D29072 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    sub_1C94098(&SubmarineQuestSaveInfo_TypeInfo);
    byte_4D29072 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  if ( !value )
    sub_1C942F0(IsNullOrEmpty, v4);
  v6 = System_String__Split(value, 0x2Cu, 0, 0);
  v8 = v6;
  if ( !v6 )
    sub_1C942F0(0, v7);
  if ( !LODWORD(v6->max_length) )
    sub_1C942F8(v6);
  v9 = System_Int32__Parse(v6->m_Items[0], 0);
  if ( LODWORD(v8->max_length) <= 1 )
    sub_1C942F8(v9);
  v10 = v9;
  v11 = System_Int32__Parse(v8->m_Items[1], 0);
  if ( LODWORD(v8->max_length) <= 2 )
    sub_1C942F8(v11);
  v12 = v11;
  v13 = v8->m_Items[2];
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v14 = System_Boolean__Parse(v13, 0);
  if ( LODWORD(v8->max_length) <= 3 )
    sub_1C942F8(v14);
  v15 = v14;
  v16 = System_Boolean__Parse(v8->m_Items[3], 0);
  v17 = sub_1C942E4(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  *(_DWORD *)(v17 + 16) = v10;
  *(_DWORD *)(v17 + 20) = v12;
  *(_BYTE *)(v17 + 24) = v15;
  *(_BYTE *)(v17 + 25) = v16;
  return (SubmarineQuestSaveInfo_o *)v17;
}


SubmarineQuestSaveInfo_o *SubmarineQuestSaveInfo__CreateDefault(const MethodInfo *method)
{
  __int64 v1; // x19

  if ( (byte_4D29071 & 1) == 0 )
  {
    sub_1C94098(&SubmarineQuestSaveInfo_TypeInfo);
    byte_4D29071 = 1;
  }
  v1 = sub_1C942E4(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v1, 0);
  *(_QWORD *)(v1 + 16) = -1;
  *(_WORD *)(v1 + 24) = 0;
  return (SubmarineQuestSaveInfo_o *)v1;
}


System_String_o *SubmarineQuestSaveInfo__GetSaveValue(SubmarineQuestSaveInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w1
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  int32_t v57; // w1
  _BYTE v59[4]; // [xsp+8h] [xbp-28h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D29070 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_808/*","*/);
    byte_4D29070 = 1;
  }
  v59[0] = 0;
  v3 = sub_1C94140(string___TypeInfo, 8);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v3 + 32) = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v4, v6, v7, v8, v9, v10, v11);
  if ( *(_DWORD *)(v3 + 24) <= 1u )
    goto LABEL_15;
  v18 = StringLiteral_808/*","*/;
  *(_QWORD *)(v3 + 40) = StringLiteral_808/*","*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 40), v18, v12, v13, v14, v15, v16, v17);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0);
  if ( *(_DWORD *)(v3 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v3 + 48) = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 48), (int32_t)v4, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v3 + 24) <= 3u )
    goto LABEL_15;
  v31 = StringLiteral_808/*","*/;
  *(_QWORD *)(v3 + 56) = StringLiteral_808/*","*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 56), v31, v25, v26, v27, v28, v29, v30);
  v59[0] = this->fields._IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v4 = System_Boolean__ToString((bool)v59, 0);
  if ( *(_DWORD *)(v3 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v3 + 64) = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 64), (int32_t)v4, v32, v33, v34, v35, v36, v37);
  if ( *(_DWORD *)(v3 + 24) <= 5u
    || (v44 = StringLiteral_808/*","*/,
        *(_QWORD *)(v3 + 72) = StringLiteral_808/*","*/,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 72), v44, v38, v39, v40, v41, v42, v43),
        v59[0] = this->fields._IsQuestPhaseClear_k__BackingField,
        v4 = System_Boolean__ToString((bool)v59, 0),
        *(_DWORD *)(v3 + 24) <= 6u)
    || (*(_QWORD *)(v3 + 80) = v4,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 80), (int32_t)v4, v45, v46, v47, v48, v49, v50),
        *(_DWORD *)(v3 + 24) <= 7u) )
  {
LABEL_15:
    sub_1C942F8(v4);
  }
  v57 = StringLiteral_808/*","*/;
  *(_QWORD *)(v3 + 88) = StringLiteral_808/*","*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 88), v57, v51, v52, v53, v54, v55, v56);
  return System_String__Concat_64458276((System_String_array *)v3, 0);
}


int32_t SubmarineQuestSaveInfo__get_BeforeClearQuestId(SubmarineQuestSaveInfo_o *this, const MethodInfo *method)
{
  if ( this->fields._IsQuestClear_k__BackingField || this->fields._IsQuestPhaseClear_k__BackingField )
    return this->fields._QuestId_k__BackingField;
  else
    return -1;
}


bool SubmarineQuestSaveInfo__get_IsQuestClear(SubmarineQuestSaveInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsQuestClear_k__BackingField;
}


bool SubmarineQuestSaveInfo__get_IsQuestPhaseClear(SubmarineQuestSaveInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsQuestPhaseClear_k__BackingField;
}


int32_t SubmarineQuestSaveInfo__get_PhaseCnt(SubmarineQuestSaveInfo_o *this, const MethodInfo *method)
{
  return this->fields._PhaseCnt_k__BackingField;
}


int32_t SubmarineQuestSaveInfo__get_QuestId(SubmarineQuestSaveInfo_o *this, const MethodInfo *method)
{
  return this->fields._QuestId_k__BackingField;
}


void SubmarineQuestSaveInfo__set_IsQuestClear(SubmarineQuestSaveInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsQuestClear_k__BackingField = value;
}


void SubmarineQuestSaveInfo__set_IsQuestPhaseClear(
        SubmarineQuestSaveInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsQuestPhaseClear_k__BackingField = value;
}


void SubmarineQuestSaveInfo__set_PhaseCnt(SubmarineQuestSaveInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._PhaseCnt_k__BackingField = value;
}


void SubmarineQuestSaveInfo__set_QuestId(SubmarineQuestSaveInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._QuestId_k__BackingField = value;
}