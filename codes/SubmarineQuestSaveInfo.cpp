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
  __int64 v4; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x2
  System_Char_array *v8; // x0
  __int64 v9; // x2
  System_String_array *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_array *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int v17; // w19
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  int v21; // w21
  System_String_o *v22; // x22
  _BOOL8 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  bool v26; // w22
  bool v27; // w20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x23

  if ( (byte_40F7CA7 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, method);
    sub_B16FFC(&char___TypeInfo, v3);
    sub_B16FFC(&SubmarineQuestSaveInfo_TypeInfo, v4);
    byte_40F7CA7 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  v8 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v6);
  if ( !v8 )
    sub_B170D4();
  if ( !v8->max_length )
  {
    sub_B17100(v8, v8, v9);
    sub_B170A0();
  }
  v8->m_Items[2] = 44;
  if ( !value )
    sub_B170D4();
  v10 = System_String__Split(value, v8, 0LL);
  v13 = v10;
  if ( !v10 )
    sub_B170D4();
  if ( !v10->max_length )
  {
    sub_B17100(v10, v11, v12);
    sub_B170A0();
  }
  v14 = System_Int32__Parse(v10->m_Items[0], 0LL);
  if ( v13->max_length <= 1 )
  {
    sub_B17100(v14, v15, v16);
    sub_B170A0();
  }
  v17 = v14;
  v18 = System_Int32__Parse(v13->m_Items[1], 0LL);
  if ( v13->max_length <= 2 )
  {
    sub_B17100(v18, v19, v20);
    sub_B170A0();
  }
  v21 = v18;
  v22 = v13->m_Items[2];
  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v23 = System_Boolean__Parse(v22, 0LL);
  if ( v13->max_length <= 3 )
  {
    sub_B17100(v23, v24, v25);
    sub_B170A0();
  }
  v26 = v23;
  v27 = System_Boolean__Parse(v13->m_Items[3], 0LL);
  v32 = sub_B170CC(SubmarineQuestSaveInfo_TypeInfo, v28, v29, v30, v31);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  *(_DWORD *)(v32 + 16) = v17;
  *(_DWORD *)(v32 + 20) = v21;
  *(_BYTE *)(v32 + 24) = v26;
  *(_BYTE *)(v32 + 25) = v27;
  return (SubmarineQuestSaveInfo_o *)v32;
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineQuestSaveInfo__CreateDefault(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x19

  if ( (byte_40F7CA6 & 1) == 0 )
  {
    sub_B16FFC(&SubmarineQuestSaveInfo_TypeInfo, v1);
    byte_40F7CA6 = 1;
  }
  v5 = sub_B170CC(SubmarineQuestSaveInfo_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_QWORD *)(v5 + 16) = -1LL;
  *(_WORD *)(v5 + 24) = 0;
  return (SubmarineQuestSaveInfo_o *)v5;
}


System_String_o *__fastcall SubmarineQuestSaveInfo__GetSaveValue(
        SubmarineQuestSaveInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_String_array *v5; // x19
  System_String_o *v6; // x0
  System_Int32_array **v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x21
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x21
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x21
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x20
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  char v54[4]; // [xsp+8h] [xbp-28h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F7CA5 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    sub_B16FFC(&StringLiteral_698/*","*/, v4);
    byte_40F7CA5 = 1;
  }
  v54[0] = 0;
  v5 = (System_String_array *)sub_B17014(string___TypeInfo, 8LL, v2);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( !v5 )
    sub_B170D4();
  v14 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B170BC(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_38;
  }
  if ( !v5->max_length )
    goto LABEL_37;
  v5->m_Items[0] = (System_String_o *)v14;
  sub_B16F98((BattleServantConfConponent_o *)v5->m_Items, v14, v8, v9, v10, v11, v12, v13);
  v6 = (System_String_o *)StringLiteral_698/*","*/;
  if ( StringLiteral_698/*","*/ )
  {
    v6 = (System_String_o *)sub_B170BC(StringLiteral_698/*","*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_38;
    v7 = (System_Int32_array **)StringLiteral_698/*","*/;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_37;
  v5->m_Items[1] = (System_String_o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[1], v7, v8, v15, v16, v17, v18, v19);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  v25 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B170BC(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_38;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_37;
  v5->m_Items[2] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[2], v25, v8, v20, v21, v22, v23, v24);
  v6 = (System_String_o *)StringLiteral_698/*","*/;
  if ( StringLiteral_698/*","*/ )
  {
    v6 = (System_String_o *)sub_B170BC(StringLiteral_698/*","*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_38;
    v7 = (System_Int32_array **)StringLiteral_698/*","*/;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v5->max_length <= 3 )
    goto LABEL_37;
  v5->m_Items[3] = (System_String_o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[3], v7, v8, v26, v27, v28, v29, v30);
  v54[0] = this->fields._IsQuestClear_k__BackingField;
  v6 = System_Boolean__ToString((bool)v54, 0LL);
  v36 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B170BC(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_38;
  }
  if ( v5->max_length <= 4 )
    goto LABEL_37;
  v5->m_Items[4] = (System_String_o *)v36;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[4], v36, v8, v31, v32, v33, v34, v35);
  v6 = (System_String_o *)StringLiteral_698/*","*/;
  if ( StringLiteral_698/*","*/ )
  {
    v6 = (System_String_o *)sub_B170BC(StringLiteral_698/*","*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_38;
    v7 = (System_Int32_array **)StringLiteral_698/*","*/;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v5->max_length <= 5 )
    goto LABEL_37;
  v5->m_Items[5] = (System_String_o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[5], v7, v8, v37, v38, v39, v40, v41);
  v54[0] = this->fields._IsQuestPhaseClear_k__BackingField;
  v6 = System_Boolean__ToString((bool)v54, 0LL);
  v47 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B170BC(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_38:
      sub_B170F4(v6);
      sub_B170A0();
    }
  }
  if ( v5->max_length <= 6 )
    goto LABEL_37;
  v5->m_Items[6] = (System_String_o *)v47;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[6], v47, v8, v42, v43, v44, v45, v46);
  v6 = (System_String_o *)StringLiteral_698/*","*/;
  if ( StringLiteral_698/*","*/ )
  {
    v6 = (System_String_o *)sub_B170BC(StringLiteral_698/*","*/, v5->obj.klass->_1.element_class);
    if ( v6 )
    {
      v7 = (System_Int32_array **)StringLiteral_698/*","*/;
      goto LABEL_35;
    }
    goto LABEL_38;
  }
  v7 = 0LL;
LABEL_35:
  if ( v5->max_length <= 7 )
  {
LABEL_37:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  v5->m_Items[7] = (System_String_o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[7], v7, v8, v48, v49, v50, v51, v52);
  return System_String__Concat_43823856(v5, 0LL);
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