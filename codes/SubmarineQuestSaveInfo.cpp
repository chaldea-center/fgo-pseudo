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
  __int64 v8; // x2
  System_String_array *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int v13; // w19
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int v17; // w21
  System_String_o *v18; // x22
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  bool v22; // w22
  bool v23; // w20
  __int64 v24; // x23

  if ( (byte_4C23C6C & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&SubmarineQuestSaveInfo_TypeInfo);
    byte_4C23C6C = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  if ( !value )
    sub_1C2D6EC(IsNullOrEmpty, v4);
  v6 = System_String__Split(value, 0x2Cu, 0, 0);
  v9 = v6;
  if ( !v6 )
    sub_1C2D6EC(0, v7);
  if ( !LODWORD(v6->max_length) )
    sub_1C2D6F4(v6, v7, v8);
  v10 = System_Int32__Parse(v6->m_Items[0], 0);
  if ( LODWORD(v9->max_length) <= 1 )
    sub_1C2D6F4(v10, v11, v12);
  v13 = v10;
  v14 = System_Int32__Parse(v9->m_Items[1], 0);
  if ( LODWORD(v9->max_length) <= 2 )
    sub_1C2D6F4(v14, v15, v16);
  v17 = v14;
  v18 = v9->m_Items[2];
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v19 = System_Boolean__Parse(v18, 0);
  if ( LODWORD(v9->max_length) <= 3 )
    sub_1C2D6F4(v19, v20, v21);
  v22 = v19;
  v23 = System_Boolean__Parse(v9->m_Items[3], 0);
  v24 = sub_1C2D6DC(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0);
  *(_DWORD *)(v24 + 16) = v13;
  *(_DWORD *)(v24 + 20) = v17;
  *(_BYTE *)(v24 + 24) = v22;
  *(_BYTE *)(v24 + 25) = v23;
  return (SubmarineQuestSaveInfo_o *)v24;
}


SubmarineQuestSaveInfo_o *SubmarineQuestSaveInfo__CreateDefault(const MethodInfo *method)
{
  __int64 v1; // x19

  if ( (byte_4C23C6B & 1) == 0 )
  {
    sub_1C2D490(&SubmarineQuestSaveInfo_TypeInfo);
    byte_4C23C6B = 1;
  }
  v1 = sub_1C2D6DC(SubmarineQuestSaveInfo_TypeInfo);
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
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  _BYTE v20[4]; // [xsp+8h] [xbp-28h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C23C6A & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_811/*","*/);
    byte_4C23C6A = 1;
  }
  v20[0] = 0;
  v3 = sub_1C2D538(string___TypeInfo, 8);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v3 + 32) = v4;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v4, v6, v7);
  if ( *(_DWORD *)(v3 + 24) <= 1u )
    goto LABEL_15;
  v9 = StringLiteral_811/*","*/;
  *(_QWORD *)(v3 + 40) = StringLiteral_811/*","*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 40), v9, v6, v8);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0);
  if ( *(_DWORD *)(v3 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v3 + 48) = v4;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 48), (int32_t)v4, v6, v10);
  if ( *(_DWORD *)(v3 + 24) <= 3u )
    goto LABEL_15;
  v12 = StringLiteral_811/*","*/;
  *(_QWORD *)(v3 + 56) = StringLiteral_811/*","*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 56), v12, v6, v11);
  v20[0] = this->fields._IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v4 = System_Boolean__ToString((bool)v20, 0);
  if ( *(_DWORD *)(v3 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v3 + 64) = v4;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 64), (int32_t)v4, v6, v13);
  if ( *(_DWORD *)(v3 + 24) <= 5u
    || (v15 = StringLiteral_811/*","*/,
        *(_QWORD *)(v3 + 72) = StringLiteral_811/*","*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v3 + 72), v15, v6, v14),
        v20[0] = this->fields._IsQuestPhaseClear_k__BackingField,
        v4 = System_Boolean__ToString((bool)v20, 0),
        *(_DWORD *)(v3 + 24) <= 6u)
    || (*(_QWORD *)(v3 + 80) = v4,
        sub_1C2D434((CGThumbnailListItem_o *)(v3 + 80), (int32_t)v4, v6, v16),
        *(_DWORD *)(v3 + 24) <= 7u) )
  {
LABEL_15:
    sub_1C2D6F4(v4, v5, v6);
  }
  v18 = StringLiteral_811/*","*/;
  *(_QWORD *)(v3 + 88) = StringLiteral_811/*","*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 88), v18, v6, v17);
  return System_String__Concat_63498380((System_String_array *)v3, 0);
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