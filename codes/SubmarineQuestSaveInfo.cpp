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

  if ( (byte_4A6CB20 & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, method);
    sub_1B90010(&SubmarineQuestSaveInfo_TypeInfo, v3);
    byte_4A6CB20 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  if ( !value )
    sub_1B9026C(IsNullOrEmpty, v5);
  v7 = System_String__Split(value, 0x2Cu, 0, 0LL);
  v9 = v7;
  if ( !v7 )
    sub_1B9026C(0LL, v8);
  if ( !v7->max_length )
    sub_1B90274(v7, v8);
  v10 = System_Int32__Parse(v7->m_Items[0], 0LL);
  if ( v9->max_length <= 1 )
    sub_1B90274(v10, v11);
  v12 = v10;
  v13 = System_Int32__Parse(v9->m_Items[1], 0LL);
  if ( v9->max_length <= 2 )
    sub_1B90274(v13, v14);
  v15 = v13;
  v16 = v9->m_Items[2];
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v17 = System_Boolean__Parse(v16, 0LL);
  if ( v9->max_length <= 3 )
    sub_1B90274(v17, v18);
  v19 = v17;
  v20 = System_Boolean__Parse(v9->m_Items[3], 0LL);
  v21 = sub_1B9025C(SubmarineQuestSaveInfo_TypeInfo);
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

  if ( (byte_4A6CB1F & 1) == 0 )
  {
    sub_1B90010(&SubmarineQuestSaveInfo_TypeInfo, v1);
    byte_4A6CB1F = 1;
  }
  v2 = sub_1B9025C(SubmarineQuestSaveInfo_TypeInfo);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  char v29[4]; // [xsp+8h] [xbp-28h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A6CB1E & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, method);
    sub_1B90010(&string___TypeInfo, v3);
    sub_1B90010(&StringLiteral_868/*","*/, v4);
    byte_4A6CB1E = 1;
  }
  v29[0] = 0;
  v5 = sub_1B900B8(string___TypeInfo, 8LL);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( !v5 )
    sub_1B9026C(v6, v7);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v6, v8, v9);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_15;
  v12 = (int)StringLiteral_868/*","*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_868/*","*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 40), v12, v10, v11);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v5 + 48) = v6;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)v6, v13, v14);
  if ( *(_DWORD *)(v5 + 24) <= 3u )
    goto LABEL_15;
  v17 = (int)StringLiteral_868/*","*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_868/*","*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 56), v17, v15, v16);
  v29[0] = this->fields._IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v6 = System_Boolean__ToString((bool)v29, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v5 + 64) = v6;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 64), (int32_t)v6, v18, v19);
  if ( *(_DWORD *)(v5 + 24) <= 5u
    || (v22 = (int)StringLiteral_868/*","*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_868/*","*/,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 72), v22, v20, v21),
        v29[0] = this->fields._IsQuestPhaseClear_k__BackingField,
        v6 = System_Boolean__ToString((bool)v29, 0LL),
        *(_DWORD *)(v5 + 24) <= 6u)
    || (*(_QWORD *)(v5 + 80) = v6,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 80), (int32_t)v6, v23, v24),
        *(_DWORD *)(v5 + 24) <= 7u) )
  {
LABEL_15:
    sub_1B90274(v6, v7);
  }
  v27 = (int)StringLiteral_868/*","*/;
  *(_QWORD *)(v5 + 88) = StringLiteral_868/*","*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 88), v27, v25, v26);
  return System_String__Concat_61800620((System_String_array *)v5, 0LL);
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