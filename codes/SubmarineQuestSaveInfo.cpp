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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x23

  if ( (byte_49F90E6 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, method);
    sub_1B640C8(&SubmarineQuestSaveInfo_TypeInfo, v3);
    byte_49F90E6 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  if ( !value )
    sub_1B64324(IsNullOrEmpty);
  v6 = System_String__Split(value, 0x2Cu, 0, 0LL);
  v8 = v6;
  if ( !v6 )
    sub_1B64324(0LL);
  if ( !v6->max_length )
    sub_1B6432C(v6, v7);
  v9 = System_Int32__Parse(v6->m_Items[0], 0LL);
  if ( v8->max_length <= 1 )
    sub_1B6432C(v9, v10);
  v11 = v9;
  v12 = System_Int32__Parse(v8->m_Items[1], 0LL);
  if ( v8->max_length <= 2 )
    sub_1B6432C(v12, v13);
  v14 = v12;
  v15 = v8->m_Items[2];
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v16 = System_Boolean__Parse(v15, 0LL);
  if ( v8->max_length <= 3 )
    sub_1B6432C(v16, v17);
  v18 = v16;
  v19 = System_Boolean__Parse(v8->m_Items[3], 0LL);
  v22 = sub_1B64314(SubmarineQuestSaveInfo_TypeInfo, v20, v21);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  *(_DWORD *)(v22 + 16) = v11;
  *(_DWORD *)(v22 + 20) = v14;
  *(_BYTE *)(v22 + 24) = v18;
  *(_BYTE *)(v22 + 25) = v19;
  return (SubmarineQuestSaveInfo_o *)v22;
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineQuestSaveInfo__CreateDefault(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x19

  if ( (byte_49F90E5 & 1) == 0 )
  {
    sub_1B640C8(&SubmarineQuestSaveInfo_TypeInfo, v1);
    byte_49F90E5 = 1;
  }
  v3 = sub_1B64314(SubmarineQuestSaveInfo_TypeInfo, v1, v2);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_QWORD *)(v3 + 16) = -1LL;
  *(_WORD *)(v3 + 24) = 0;
  return (SubmarineQuestSaveInfo_o *)v3;
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

  if ( (byte_49F90E4 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, method);
    sub_1B640C8(&string___TypeInfo, v3);
    sub_1B640C8(&StringLiteral_869/*","*/, v4);
    byte_49F90E4 = 1;
  }
  v29[0] = 0;
  v5 = sub_1B64170(string___TypeInfo, 8LL);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( !v5 )
    sub_1B64324(v6);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v6, v8, v9);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_15;
  v12 = (int)StringLiteral_869/*","*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_869/*","*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), v12, v10, v11);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v5 + 48) = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)v6, v13, v14);
  if ( *(_DWORD *)(v5 + 24) <= 3u )
    goto LABEL_15;
  v17 = (int)StringLiteral_869/*","*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_869/*","*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 56), v17, v15, v16);
  v29[0] = this->fields._IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v6 = System_Boolean__ToString((bool)v29, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v5 + 64) = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 64), (int32_t)v6, v18, v19);
  if ( *(_DWORD *)(v5 + 24) <= 5u
    || (v22 = (int)StringLiteral_869/*","*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_869/*","*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 72), v22, v20, v21),
        v29[0] = this->fields._IsQuestPhaseClear_k__BackingField,
        v6 = System_Boolean__ToString((bool)v29, 0LL),
        *(_DWORD *)(v5 + 24) <= 6u)
    || (*(_QWORD *)(v5 + 80) = v6,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 80), (int32_t)v6, v23, v24),
        *(_DWORD *)(v5 + 24) <= 7u) )
  {
LABEL_15:
    sub_1B6432C(v6, v7);
  }
  v27 = (int)StringLiteral_869/*","*/;
  *(_QWORD *)(v5 + 88) = StringLiteral_869/*","*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 88), v27, v25, v26);
  return System_String__Concat_61388924((System_String_array *)v5, 0LL);
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