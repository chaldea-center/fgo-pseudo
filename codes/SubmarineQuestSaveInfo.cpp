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
  SubmarineQuestSaveInfo_o *result; // x0
  System_String_array *v6; // x0
  __int64 v7; // x1
  System_String_array *v8; // x20
  __int64 v9; // x0
  int v10; // w19
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int v14; // w21
  System_String_o *v15; // x22
  _BOOL8 v16; // x0
  bool v17; // w22
  bool v18; // w20
  __int64 v19; // x23

  if ( (byte_5934E18 & 1) == 0 )
  {
    sub_21FFC50(&SubmarineQuestSaveInfo_TypeInfo);
    byte_5934E18 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  if ( !value )
    sub_21FFECC(IsNullOrEmpty, v4);
  v6 = System_String__Split(value, 0x2Cu, 0, 0);
  v8 = v6;
  if ( !v6 )
    sub_21FFECC(0, v7);
  if ( !LODWORD(v6->max_length) )
    sub_21FFED4(v6);
  v9 = System_Int32__Parse(v6->m_Items[0], 0);
  if ( (v8->max_length & 0xFFFFFFFE) == 0 )
    sub_21FFED4(v9);
  v10 = v9;
  v11 = System_Int32__Parse(v8->m_Items[1], 0);
  if ( LODWORD(v8->max_length) <= 2 )
    sub_21FFED4(v11);
  v14 = v11;
  v15 = v8->m_Items[2];
  if ( !*(_DWORD *)(qword_594C050 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C050, v12, v13);
  v16 = System_Boolean__Parse(v15, 0);
  if ( (v8->max_length & 0xFFFFFFFC) == 0 )
    sub_21FFED4(v16);
  v17 = v16;
  v18 = System_Boolean__Parse(v8->m_Items[3], 0);
  v19 = sub_21FFEBC(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  *(_DWORD *)(v19 + 16) = v10;
  *(_DWORD *)(v19 + 20) = v14;
  result = (SubmarineQuestSaveInfo_o *)v19;
  *(_BYTE *)(v19 + 24) = v17;
  *(_BYTE *)(v19 + 25) = v18;
  return result;
}


SubmarineQuestSaveInfo_o *SubmarineQuestSaveInfo__CreateDefault(const MethodInfo *method)
{
  __int64 v1; // x19
  SubmarineQuestSaveInfo_o *result; // x0

  if ( (byte_5934E17 & 1) == 0 )
  {
    sub_21FFC50(&SubmarineQuestSaveInfo_TypeInfo);
    byte_5934E17 = 1;
  }
  v1 = sub_21FFEBC(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v1, 0);
  result = (SubmarineQuestSaveInfo_o *)v1;
  *(_WORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 16) = -1;
  return result;
}


System_String_o *SubmarineQuestSaveInfo__GetSaveValue(SubmarineQuestSaveInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  __int64 v32; // x1
  __int64 v33; // x2
  int v34; // w9
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int32_t v47; // w1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  int32_t v60; // w1
  _BYTE v62[4]; // [xsp+8h] [xbp-28h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5934E16 & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_869/*","*/);
    byte_5934E16 = 1;
  }
  QuestId_k__BackingField = 0;
  v62[0] = 0;
  v3 = sub_21FFD10(string___TypeInfo, 8);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v3 + 32) = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v4, v6, v7, v8, v9, v10, v11);
  if ( (*(_DWORD *)(v3 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_15;
  v18 = StringLiteral_869/*","*/;
  *(_QWORD *)(v3 + 40) = StringLiteral_869/*","*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 40), v18, v12, v13, v14, v15, v16, v17);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0);
  if ( *(_DWORD *)(v3 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v3 + 48) = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 48), (int32_t)v4, v19, v20, v21, v22, v23, v24);
  if ( (*(_DWORD *)(v3 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_15;
  v31 = StringLiteral_869/*","*/;
  *(_QWORD *)(v3 + 56) = StringLiteral_869/*","*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 56), v31, v25, v26, v27, v28, v29, v30);
  v34 = *(_DWORD *)(qword_594C050 + 228);
  v62[0] = this->fields._IsQuestClear_k__BackingField;
  if ( !v34 )
    j_il2cpp_runtime_class_init_0(qword_594C050, v32, v33);
  v4 = System_Boolean__ToString((bool)v62, 0);
  if ( *(_DWORD *)(v3 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v3 + 64) = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 64), (int32_t)v4, v35, v36, v37, v38, v39, v40);
  if ( *(_DWORD *)(v3 + 24) <= 5u
    || (v47 = StringLiteral_869/*","*/,
        *(_QWORD *)(v3 + 72) = StringLiteral_869/*","*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 72), v47, v41, v42, v43, v44, v45, v46),
        v62[0] = this->fields._IsQuestPhaseClear_k__BackingField,
        v4 = System_Boolean__ToString((bool)v62, 0),
        *(_DWORD *)(v3 + 24) <= 6u)
    || (*(_QWORD *)(v3 + 80) = v4,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 80), (int32_t)v4, v48, v49, v50, v51, v52, v53),
        (*(_DWORD *)(v3 + 24) & 0xFFFFFFF8) == 0) )
  {
LABEL_15:
    sub_21FFED4(v4);
  }
  v60 = StringLiteral_869/*","*/;
  *(_QWORD *)(v3 + 88) = StringLiteral_869/*","*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 88), v60, v54, v55, v56, v57, v58, v59);
  return System_String__Concat_75483816((System_String_array *)v3, 0);
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