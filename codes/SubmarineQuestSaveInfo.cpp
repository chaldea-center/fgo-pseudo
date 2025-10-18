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
  System_String_array *v5; // x0
  System_String_array *v6; // x20
  __int64 v7; // x0
  int v8; // w19
  __int64 v9; // x0
  int v10; // w21
  System_String_o *v11; // x22
  _BOOL8 v12; // x0
  bool v13; // w22
  bool v14; // w20
  __int64 v15; // x23

  if ( (byte_4C3F92A & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&SubmarineQuestSaveInfo_TypeInfo);
    byte_4C3F92A = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  if ( !value )
    sub_1C372B4(IsNullOrEmpty);
  v5 = System_String__Split(value, 0x2Cu, 0, 0);
  v6 = v5;
  if ( !v5 )
    sub_1C372B4(0);
  if ( !LODWORD(v5->max_length) )
    sub_1C372BC(v5);
  v7 = System_Int32__Parse(v5->m_Items[0], 0);
  if ( LODWORD(v6->max_length) <= 1 )
    sub_1C372BC(v7);
  v8 = v7;
  v9 = System_Int32__Parse(v6->m_Items[1], 0);
  if ( LODWORD(v6->max_length) <= 2 )
    sub_1C372BC(v9);
  v10 = v9;
  v11 = v6->m_Items[2];
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v12 = System_Boolean__Parse(v11, 0);
  if ( LODWORD(v6->max_length) <= 3 )
    sub_1C372BC(v12);
  v13 = v12;
  v14 = System_Boolean__Parse(v6->m_Items[3], 0);
  v15 = sub_1C372A4(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  *(_DWORD *)(v15 + 16) = v8;
  *(_DWORD *)(v15 + 20) = v10;
  *(_BYTE *)(v15 + 24) = v13;
  *(_BYTE *)(v15 + 25) = v14;
  return (SubmarineQuestSaveInfo_o *)v15;
}


SubmarineQuestSaveInfo_o *SubmarineQuestSaveInfo__CreateDefault(const MethodInfo *method)
{
  __int64 v1; // x19

  if ( (byte_4C3F929 & 1) == 0 )
  {
    sub_1C37058(&SubmarineQuestSaveInfo_TypeInfo);
    byte_4C3F929 = 1;
  }
  v1 = sub_1C372A4(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v1, 0);
  *(_QWORD *)(v1 + 16) = -1;
  *(_WORD *)(v1 + 24) = 0;
  return (SubmarineQuestSaveInfo_o *)v1;
}


System_String_o *SubmarineQuestSaveInfo__GetSaveValue(SubmarineQuestSaveInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  System_String_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  _BYTE v26[4]; // [xsp+8h] [xbp-28h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3F928 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C3F928 = 1;
  }
  v26[0] = 0;
  v3 = sub_1C37100(string___TypeInfo, 8);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v3 + 32) = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v4, v5, v6);
  if ( *(_DWORD *)(v3 + 24) <= 1u )
    goto LABEL_15;
  v9 = StringLiteral_811/*","*/;
  *(_QWORD *)(v3 + 40) = StringLiteral_811/*","*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 40), v9, v7, v8);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0);
  if ( *(_DWORD *)(v3 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v3 + 48) = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 48), (int32_t)v4, v10, v11);
  if ( *(_DWORD *)(v3 + 24) <= 3u )
    goto LABEL_15;
  v14 = StringLiteral_811/*","*/;
  *(_QWORD *)(v3 + 56) = StringLiteral_811/*","*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 56), v14, v12, v13);
  v26[0] = this->fields._IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v4 = System_Boolean__ToString((bool)v26, 0);
  if ( *(_DWORD *)(v3 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v3 + 64) = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 64), (int32_t)v4, v15, v16);
  if ( *(_DWORD *)(v3 + 24) <= 5u
    || (v19 = StringLiteral_811/*","*/,
        *(_QWORD *)(v3 + 72) = StringLiteral_811/*","*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 72), v19, v17, v18),
        v26[0] = this->fields._IsQuestPhaseClear_k__BackingField,
        v4 = System_Boolean__ToString((bool)v26, 0),
        *(_DWORD *)(v3 + 24) <= 6u)
    || (*(_QWORD *)(v3 + 80) = v4,
        sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 80), (int32_t)v4, v20, v21),
        *(_DWORD *)(v3 + 24) <= 7u) )
  {
LABEL_15:
    sub_1C372BC(v4);
  }
  v24 = StringLiteral_811/*","*/;
  *(_QWORD *)(v3 + 88) = StringLiteral_811/*","*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 88), v24, v22, v23);
  return System_String__Concat_63602172((System_String_array *)v3, 0);
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