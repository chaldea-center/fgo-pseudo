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
  System_Char_array *v7; // x0
  System_String_array *v8; // x0
  __int64 v9; // x1
  System_String_array *v10; // x20
  __int64 v11; // x0
  int v12; // w19
  __int64 v13; // x0
  int v14; // w21
  System_String_o *v15; // x22
  _BOOL8 v16; // x0
  bool v17; // w22
  bool v18; // w20
  __int64 v19; // x23
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0

  if ( (byte_4185813 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, method);
    sub_B2C35C(&char___TypeInfo, v3);
    sub_B2C35C(&SubmarineQuestSaveInfo_TypeInfo, v4);
    byte_4185813 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  v7 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v7 )
    sub_B2C434(0LL, 0LL);
  if ( !v7->max_length )
  {
    v20 = sub_B2C460(v7);
    sub_B2C400(v20, 0LL);
  }
  v7->m_Items[2] = 44;
  if ( !value )
    sub_B2C434(v7, v7);
  v8 = System_String__Split(value, v7, 0LL);
  v10 = v8;
  if ( !v8 )
    sub_B2C434(0LL, v9);
  if ( !v8->max_length )
  {
    v21 = sub_B2C460(v8);
    sub_B2C400(v21, 0LL);
  }
  v11 = System_Int32__Parse(v8->m_Items[0], 0LL);
  if ( v10->max_length <= 1 )
  {
    v22 = sub_B2C460(v11);
    sub_B2C400(v22, 0LL);
  }
  v12 = v11;
  v13 = System_Int32__Parse(v10->m_Items[1], 0LL);
  if ( v10->max_length <= 2 )
  {
    v23 = sub_B2C460(v13);
    sub_B2C400(v23, 0LL);
  }
  v14 = v13;
  v15 = v10->m_Items[2];
  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v16 = System_Boolean__Parse(v15, 0LL);
  if ( v10->max_length <= 3 )
  {
    v24 = sub_B2C460(v16);
    sub_B2C400(v24, 0LL);
  }
  v17 = v16;
  v18 = System_Boolean__Parse(v10->m_Items[3], 0LL);
  v19 = sub_B2C42C(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  *(_DWORD *)(v19 + 16) = v12;
  *(_DWORD *)(v19 + 20) = v14;
  *(_BYTE *)(v19 + 24) = v17;
  *(_BYTE *)(v19 + 25) = v18;
  return (SubmarineQuestSaveInfo_o *)v19;
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineQuestSaveInfo__CreateDefault(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x19

  if ( (byte_4185812 & 1) == 0 )
  {
    sub_B2C35C(&SubmarineQuestSaveInfo_TypeInfo, v1);
    byte_4185812 = 1;
  }
  v2 = sub_B2C42C(SubmarineQuestSaveInfo_TypeInfo);
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
  System_String_array *v4; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  __int64 v8; // x1
  System_String_o *v9; // x21
  __int64 v10; // x1
  System_String_o *v11; // x21
  __int64 v12; // x1
  System_String_o *v13; // x20
  __int64 v14; // x1
  __int64 v16; // x0
  __int64 v17; // x0
  char v18[4]; // [xsp+8h] [xbp-28h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4185811 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, method);
    sub_B2C35C(&StringLiteral_699/*","*/, v3);
    byte_4185811 = 1;
  }
  v18[0] = 0;
  v4 = (System_String_array *)sub_B2C374(string___TypeInfo, 8LL);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v5 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( !v4 )
    sub_B2C434(v5, v6);
  v7 = v5;
  if ( v5 )
  {
    v5 = (System_String_o *)sub_B2C41C(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_38;
  }
  if ( !v4->max_length )
    goto LABEL_37;
  v4->m_Items[0] = v7;
  sub_B2C2F8(v4->m_Items, v7);
  v5 = (System_String_o *)StringLiteral_699/*","*/;
  if ( StringLiteral_699/*","*/ )
  {
    v5 = (System_String_o *)sub_B2C41C(StringLiteral_699/*","*/, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_38;
    v8 = StringLiteral_699/*","*/;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v4->max_length <= 1 )
    goto LABEL_37;
  v4->m_Items[1] = (System_String_o *)v8;
  sub_B2C2F8(&v4->m_Items[1], v8);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v5 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  v9 = v5;
  if ( v5 )
  {
    v5 = (System_String_o *)sub_B2C41C(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_38;
  }
  if ( v4->max_length <= 2 )
    goto LABEL_37;
  v4->m_Items[2] = v9;
  sub_B2C2F8(&v4->m_Items[2], v9);
  v5 = (System_String_o *)StringLiteral_699/*","*/;
  if ( StringLiteral_699/*","*/ )
  {
    v5 = (System_String_o *)sub_B2C41C(StringLiteral_699/*","*/, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_38;
    v10 = StringLiteral_699/*","*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v4->max_length <= 3 )
    goto LABEL_37;
  v4->m_Items[3] = (System_String_o *)v10;
  sub_B2C2F8(&v4->m_Items[3], v10);
  v18[0] = this->fields._IsQuestClear_k__BackingField;
  v5 = System_Boolean__ToString((bool)v18, 0LL);
  v11 = v5;
  if ( v5 )
  {
    v5 = (System_String_o *)sub_B2C41C(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_38;
  }
  if ( v4->max_length <= 4 )
    goto LABEL_37;
  v4->m_Items[4] = v11;
  sub_B2C2F8(&v4->m_Items[4], v11);
  v5 = (System_String_o *)StringLiteral_699/*","*/;
  if ( StringLiteral_699/*","*/ )
  {
    v5 = (System_String_o *)sub_B2C41C(StringLiteral_699/*","*/, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_38;
    v12 = StringLiteral_699/*","*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v4->max_length <= 5 )
    goto LABEL_37;
  v4->m_Items[5] = (System_String_o *)v12;
  sub_B2C2F8(&v4->m_Items[5], v12);
  v18[0] = this->fields._IsQuestPhaseClear_k__BackingField;
  v5 = System_Boolean__ToString((bool)v18, 0LL);
  v13 = v5;
  if ( v5 )
  {
    v5 = (System_String_o *)sub_B2C41C(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
    {
LABEL_38:
      v17 = sub_B2C454();
      sub_B2C400(v17, 0LL);
    }
  }
  if ( v4->max_length <= 6 )
    goto LABEL_37;
  v4->m_Items[6] = v13;
  sub_B2C2F8(&v4->m_Items[6], v13);
  v5 = (System_String_o *)StringLiteral_699/*","*/;
  if ( StringLiteral_699/*","*/ )
  {
    v5 = (System_String_o *)sub_B2C41C(StringLiteral_699/*","*/, v4->obj.klass->_1.element_class);
    if ( v5 )
    {
      v14 = StringLiteral_699/*","*/;
      goto LABEL_35;
    }
    goto LABEL_38;
  }
  v14 = 0LL;
LABEL_35:
  if ( v4->max_length <= 7 )
  {
LABEL_37:
    v16 = sub_B2C460(v5);
    sub_B2C400(v16, 0LL);
  }
  v4->m_Items[7] = (System_String_o *)v14;
  sub_B2C2F8(&v4->m_Items[7], v14);
  return System_String__Concat_44385656(v4, 0LL);
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