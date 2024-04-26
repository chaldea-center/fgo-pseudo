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
  System_Char_array *v5; // x0
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
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_4350EB0 & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&SubmarineQuestSaveInfo_TypeInfo);
    byte_4350EB0 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  v5 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v5 )
    sub_B7076C(0LL, 0LL);
  if ( !v5->max_length )
  {
    v18 = sub_B70798(v5);
    sub_B70738(v18, 0LL);
  }
  v5->m_Items[2] = 44;
  if ( !value )
    sub_B7076C(v5, v5);
  v6 = System_String__Split(value, v5, 0LL);
  v8 = v6;
  if ( !v6 )
    sub_B7076C(0LL, v7);
  if ( !v6->max_length )
  {
    v19 = sub_B70798(v6);
    sub_B70738(v19, 0LL);
  }
  v9 = System_Int32__Parse(v6->m_Items[0], 0LL);
  if ( v8->max_length <= 1 )
  {
    v20 = sub_B70798(v9);
    sub_B70738(v20, 0LL);
  }
  v10 = v9;
  v11 = System_Int32__Parse(v8->m_Items[1], 0LL);
  if ( v8->max_length <= 2 )
  {
    v21 = sub_B70798(v11);
    sub_B70738(v21, 0LL);
  }
  v12 = v11;
  v13 = v8->m_Items[2];
  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v14 = System_Boolean__Parse(v13, 0LL);
  if ( v8->max_length <= 3 )
  {
    v22 = sub_B70798(v14);
    sub_B70738(v22, 0LL);
  }
  v15 = v14;
  v16 = System_Boolean__Parse(v8->m_Items[3], 0LL);
  v17 = sub_B70764(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  *(_DWORD *)(v17 + 16) = v10;
  *(_DWORD *)(v17 + 20) = v12;
  *(_BYTE *)(v17 + 24) = v15;
  *(_BYTE *)(v17 + 25) = v16;
  return (SubmarineQuestSaveInfo_o *)v17;
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineQuestSaveInfo__CreateDefault(const MethodInfo *method)
{
  __int64 v1; // x19

  if ( (byte_4350EAF & 1) == 0 )
  {
    sub_B70694(&SubmarineQuestSaveInfo_TypeInfo);
    byte_4350EAF = 1;
  }
  v1 = sub_B70764(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v1, 0LL);
  *(_QWORD *)(v1 + 16) = -1LL;
  *(_WORD *)(v1 + 24) = 0;
  return (SubmarineQuestSaveInfo_o *)v1;
}


System_String_o *__fastcall SubmarineQuestSaveInfo__GetSaveValue(
        SubmarineQuestSaveInfo_o *this,
        const MethodInfo *method)
{
  System_String_array *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  __int64 v63; // x0
  __int64 v64; // x0
  char v65[4]; // [xsp+8h] [xbp-28h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4350EAE & 1) == 0 )
  {
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_712/*","*/);
    byte_4350EAE = 1;
  }
  v65[0] = 0;
  v3 = (System_String_array *)sub_B706AC(string___TypeInfo, 8LL);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  v12 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_B70754(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_38;
  }
  if ( !v3->max_length )
    goto LABEL_37;
  v3->m_Items[0] = (System_String_o *)v12;
  sub_B70630((BattleServantConfConponent_o *)v3->m_Items, v12, v6, v7, v8, v9, v10, v11);
  v4 = (System_String_o *)StringLiteral_712/*","*/;
  if ( StringLiteral_712/*","*/ )
  {
    v4 = (System_String_o *)sub_B70754(StringLiteral_712/*","*/, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_38;
    v19 = (System_Int32_array **)StringLiteral_712/*","*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v3->max_length <= 1 )
    goto LABEL_37;
  v3->m_Items[1] = (System_String_o *)v19;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[1], v19, v13, v14, v15, v16, v17, v18);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  v26 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_B70754(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_38;
  }
  if ( v3->max_length <= 2 )
    goto LABEL_37;
  v3->m_Items[2] = (System_String_o *)v26;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[2], v26, v20, v21, v22, v23, v24, v25);
  v4 = (System_String_o *)StringLiteral_712/*","*/;
  if ( StringLiteral_712/*","*/ )
  {
    v4 = (System_String_o *)sub_B70754(StringLiteral_712/*","*/, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_38;
    v33 = (System_Int32_array **)StringLiteral_712/*","*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v3->max_length <= 3 )
    goto LABEL_37;
  v3->m_Items[3] = (System_String_o *)v33;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[3], v33, v27, v28, v29, v30, v31, v32);
  v65[0] = this->fields._IsQuestClear_k__BackingField;
  v4 = System_Boolean__ToString((bool)v65, 0LL);
  v40 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_B70754(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_38;
  }
  if ( v3->max_length <= 4 )
    goto LABEL_37;
  v3->m_Items[4] = (System_String_o *)v40;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[4], v40, v34, v35, v36, v37, v38, v39);
  v4 = (System_String_o *)StringLiteral_712/*","*/;
  if ( StringLiteral_712/*","*/ )
  {
    v4 = (System_String_o *)sub_B70754(StringLiteral_712/*","*/, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_38;
    v47 = (System_Int32_array **)StringLiteral_712/*","*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v3->max_length <= 5 )
    goto LABEL_37;
  v3->m_Items[5] = (System_String_o *)v47;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[5], v47, v41, v42, v43, v44, v45, v46);
  v65[0] = this->fields._IsQuestPhaseClear_k__BackingField;
  v4 = System_Boolean__ToString((bool)v65, 0LL);
  v54 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_B70754(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_38:
      v64 = sub_B7078C(v4);
      sub_B70738(v64, 0LL);
    }
  }
  if ( v3->max_length <= 6 )
    goto LABEL_37;
  v3->m_Items[6] = (System_String_o *)v54;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[6], v54, v48, v49, v50, v51, v52, v53);
  v4 = (System_String_o *)StringLiteral_712/*","*/;
  if ( StringLiteral_712/*","*/ )
  {
    v4 = (System_String_o *)sub_B70754(StringLiteral_712/*","*/, v3->obj.klass->_1.element_class);
    if ( v4 )
    {
      v61 = (System_Int32_array **)StringLiteral_712/*","*/;
      goto LABEL_35;
    }
    goto LABEL_38;
  }
  v61 = 0LL;
LABEL_35:
  if ( v3->max_length <= 7 )
  {
LABEL_37:
    v63 = sub_B70798(v4);
    sub_B70738(v63, 0LL);
  }
  v3->m_Items[7] = (System_String_o *)v61;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[7], v61, v55, v56, v57, v58, v59, v60);
  return System_String__Concat_44838292(v3, 0LL);
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