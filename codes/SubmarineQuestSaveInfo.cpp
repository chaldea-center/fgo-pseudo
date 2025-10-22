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

  if ( (byte_4C536C5 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&SubmarineQuestSaveInfo_TypeInfo);
    byte_4C536C5 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  if ( !value )
    sub_1C3E7C0(IsNullOrEmpty, v4);
  v6 = System_String__Split(value, 0x2Cu, 0, 0);
  v8 = v6;
  if ( !v6 )
    sub_1C3E7C0(0, v7);
  if ( !LODWORD(v6->max_length) )
    sub_1C3E7C8(v6, v7);
  v9 = System_Int32__Parse(v6->m_Items[0], 0);
  if ( LODWORD(v8->max_length) <= 1 )
    sub_1C3E7C8(v9, v10);
  v11 = v9;
  v12 = System_Int32__Parse(v8->m_Items[1], 0);
  if ( LODWORD(v8->max_length) <= 2 )
    sub_1C3E7C8(v12, v13);
  v14 = v12;
  v15 = v8->m_Items[2];
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v16 = System_Boolean__Parse(v15, 0);
  if ( LODWORD(v8->max_length) <= 3 )
    sub_1C3E7C8(v16, v17);
  v18 = v16;
  v19 = System_Boolean__Parse(v8->m_Items[3], 0);
  v20 = sub_1C3E7B0(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0);
  *(_DWORD *)(v20 + 16) = v11;
  *(_DWORD *)(v20 + 20) = v14;
  *(_BYTE *)(v20 + 24) = v18;
  *(_BYTE *)(v20 + 25) = v19;
  return (SubmarineQuestSaveInfo_o *)v20;
}


SubmarineQuestSaveInfo_o *SubmarineQuestSaveInfo__CreateDefault(const MethodInfo *method)
{
  __int64 v1; // x19

  if ( (byte_4C536C4 & 1) == 0 )
  {
    sub_1C3E564(&SubmarineQuestSaveInfo_TypeInfo);
    byte_4C536C4 = 1;
  }
  v1 = sub_1C3E7B0(SubmarineQuestSaveInfo_TypeInfo);
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
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  _BYTE v27[4]; // [xsp+8h] [xbp-28h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C536C3 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_811/*","*/);
    byte_4C536C3 = 1;
  }
  v27[0] = 0;
  v3 = sub_1C3E60C(string___TypeInfo, 8);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0);
  if ( !v3 )
    sub_1C3E7C0(v4, v5);
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v3 + 32) = v4;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v4, v6, v7);
  if ( *(_DWORD *)(v3 + 24) <= 1u )
    goto LABEL_15;
  v10 = StringLiteral_811/*","*/;
  *(_QWORD *)(v3 + 40) = StringLiteral_811/*","*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 40), v10, v8, v9);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0);
  if ( *(_DWORD *)(v3 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v3 + 48) = v4;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 48), (int32_t)v4, v11, v12);
  if ( *(_DWORD *)(v3 + 24) <= 3u )
    goto LABEL_15;
  v15 = StringLiteral_811/*","*/;
  *(_QWORD *)(v3 + 56) = StringLiteral_811/*","*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 56), v15, v13, v14);
  v27[0] = this->fields._IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v4 = System_Boolean__ToString((bool)v27, 0);
  if ( *(_DWORD *)(v3 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v3 + 64) = v4;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 64), (int32_t)v4, v16, v17);
  if ( *(_DWORD *)(v3 + 24) <= 5u
    || (v20 = StringLiteral_811/*","*/,
        *(_QWORD *)(v3 + 72) = StringLiteral_811/*","*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v3 + 72), v20, v18, v19),
        v27[0] = this->fields._IsQuestPhaseClear_k__BackingField,
        v4 = System_Boolean__ToString((bool)v27, 0),
        *(_DWORD *)(v3 + 24) <= 6u)
    || (*(_QWORD *)(v3 + 80) = v4,
        sub_1C3E508((CGThumbnailListItem_o *)(v3 + 80), (int32_t)v4, v21, v22),
        *(_DWORD *)(v3 + 24) <= 7u) )
  {
LABEL_15:
    sub_1C3E7C8(v4, v5);
  }
  v25 = StringLiteral_811/*","*/;
  *(_QWORD *)(v3 + 88) = StringLiteral_811/*","*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 88), v25, v23, v24);
  return System_String__Concat_63676984((System_String_array *)v3, 0);
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