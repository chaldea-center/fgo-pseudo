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
  __int64 v9; // x2
  System_String_array *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int v14; // w19
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  int v18; // w21
  System_String_o *v19; // x22
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  bool v23; // w22
  bool v24; // w20
  __int64 v25; // x23

  if ( (byte_4AFEA20 & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, method);
    sub_1BC3008(&SubmarineQuestSaveInfo_TypeInfo, v3);
    byte_4AFEA20 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  if ( !value )
    sub_1BC3264(IsNullOrEmpty, v5);
  v7 = System_String__Split(value, 0x2Cu, 0, 0LL);
  v10 = v7;
  if ( !v7 )
    sub_1BC3264(0LL, v8);
  if ( !v7->max_length )
    sub_1BC326C(v7, v8, v9);
  v11 = System_Int32__Parse(v7->m_Items[0], 0LL);
  if ( v10->max_length <= 1 )
    sub_1BC326C(v11, v12, v13);
  v14 = v11;
  v15 = System_Int32__Parse(v10->m_Items[1], 0LL);
  if ( v10->max_length <= 2 )
    sub_1BC326C(v15, v16, v17);
  v18 = v15;
  v19 = v10->m_Items[2];
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v20 = System_Boolean__Parse(v19, 0LL);
  if ( v10->max_length <= 3 )
    sub_1BC326C(v20, v21, v22);
  v23 = v20;
  v24 = System_Boolean__Parse(v10->m_Items[3], 0LL);
  v25 = sub_1BC3254(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  *(_DWORD *)(v25 + 16) = v14;
  *(_DWORD *)(v25 + 20) = v18;
  *(_BYTE *)(v25 + 24) = v23;
  *(_BYTE *)(v25 + 25) = v24;
  return (SubmarineQuestSaveInfo_o *)v25;
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineQuestSaveInfo__CreateDefault(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x19

  if ( (byte_4AFEA1F & 1) == 0 )
  {
    sub_1BC3008(&SubmarineQuestSaveInfo_TypeInfo, v1);
    byte_4AFEA1F = 1;
  }
  v2 = sub_1BC3254(SubmarineQuestSaveInfo_TypeInfo);
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
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  char v22[4]; // [xsp+8h] [xbp-28h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AFEA1E & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, method);
    sub_1BC3008(&string___TypeInfo, v3);
    sub_1BC3008(&StringLiteral_806/*","*/, v4);
    byte_4AFEA1E = 1;
  }
  v22[0] = 0;
  v5 = sub_1BC30B0(string___TypeInfo, 8LL);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( !v5 )
    sub_1BC3264(v6, v7);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v6, v8, v9);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_15;
  v11 = (int)StringLiteral_806/*","*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_806/*","*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 40), v11, v8, v10);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v5 + 48) = v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 48), (int32_t)v6, v8, v12);
  if ( *(_DWORD *)(v5 + 24) <= 3u )
    goto LABEL_15;
  v14 = (int)StringLiteral_806/*","*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_806/*","*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 56), v14, v8, v13);
  v22[0] = this->fields._IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v6 = System_Boolean__ToString((bool)v22, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v5 + 64) = v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 64), (int32_t)v6, v8, v15);
  if ( *(_DWORD *)(v5 + 24) <= 5u
    || (v17 = (int)StringLiteral_806/*","*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_806/*","*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 72), v17, v8, v16),
        v22[0] = this->fields._IsQuestPhaseClear_k__BackingField,
        v6 = System_Boolean__ToString((bool)v22, 0LL),
        *(_DWORD *)(v5 + 24) <= 6u)
    || (*(_QWORD *)(v5 + 80) = v6,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 80), (int32_t)v6, v8, v18),
        *(_DWORD *)(v5 + 24) <= 7u) )
  {
LABEL_15:
    sub_1BC326C(v6, v7, v8);
  }
  v20 = (int)StringLiteral_806/*","*/;
  *(_QWORD *)(v5 + 88) = StringLiteral_806/*","*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 88), v20, v8, v19);
  return System_String__Concat_62389164((System_String_array *)v5, 0LL);
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