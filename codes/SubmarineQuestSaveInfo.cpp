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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _BOOL8 IsNullOrEmpty; // x0
  System_Char_array *v13; // x0
  System_String_array *v14; // x0
  __int64 v15; // x1
  System_String_array *v16; // x20
  __int64 v17; // x0
  int v18; // w19
  __int64 v19; // x0
  int v20; // w21
  System_String_o *v21; // x22
  _BOOL8 v22; // x0
  bool v23; // w22
  bool v24; // w20
  __int64 v25; // x23
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x0

  if ( (byte_42E7B9F & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&char___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SubmarineQuestSaveInfo_TypeInfo, v8, v9, v10);
    byte_42E7B9F = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  if ( IsNullOrEmpty )
    return SubmarineQuestSaveInfo__CreateDefault((const MethodInfo *)IsNullOrEmpty);
  v13 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v13 )
    sub_B5D69C(0LL, 0LL);
  if ( !v13->max_length )
  {
    v26 = sub_B5D6C8(v13);
    sub_B5D668(v26, 0LL);
  }
  v13->m_Items[2] = 44;
  if ( !value )
    sub_B5D69C(v13, v13);
  v14 = System_String__Split(value, v13, 0LL);
  v16 = v14;
  if ( !v14 )
    sub_B5D69C(0LL, v15);
  if ( !v14->max_length )
  {
    v27 = sub_B5D6C8(v14);
    sub_B5D668(v27, 0LL);
  }
  v17 = System_Int32__Parse(v14->m_Items[0], 0LL);
  if ( v16->max_length <= 1 )
  {
    v28 = sub_B5D6C8(v17);
    sub_B5D668(v28, 0LL);
  }
  v18 = v17;
  v19 = System_Int32__Parse(v16->m_Items[1], 0LL);
  if ( v16->max_length <= 2 )
  {
    v29 = sub_B5D6C8(v19);
    sub_B5D668(v29, 0LL);
  }
  v20 = v19;
  v21 = v16->m_Items[2];
  if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v22 = System_Boolean__Parse(v21, 0LL);
  if ( v16->max_length <= 3 )
  {
    v30 = sub_B5D6C8(v22);
    sub_B5D668(v30, 0LL);
  }
  v23 = v22;
  v24 = System_Boolean__Parse(v16->m_Items[3], 0LL);
  v25 = sub_B5D694(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  *(_DWORD *)(v25 + 16) = v18;
  *(_DWORD *)(v25 + 20) = v20;
  *(_BYTE *)(v25 + 24) = v23;
  *(_BYTE *)(v25 + 25) = v24;
  return (SubmarineQuestSaveInfo_o *)v25;
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineQuestSaveInfo__CreateDefault(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  __int64 v4; // x19

  if ( (byte_42E7B9E & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineQuestSaveInfo_TypeInfo, v1, v2, v3);
    byte_42E7B9E = 1;
  }
  v4 = sub_B5D694(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_QWORD *)(v4 + 16) = -1LL;
  *(_WORD *)(v4 + 24) = 0;
  return (SubmarineQuestSaveInfo_o *)v4;
}


System_String_o *__fastcall SubmarineQuestSaveInfo__GetSaveValue(
        SubmarineQuestSaveInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array *v8; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  __int64 v68; // x0
  __int64 v69; // x0
  char v70[4]; // [xsp+8h] [xbp-28h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E7B9D & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_707/*","*/, v5, v6, v7);
    byte_42E7B9D = 1;
  }
  v70[0] = 0;
  v8 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 8LL);
  QuestId_k__BackingField = this->fields._QuestId_k__BackingField;
  v9 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  if ( !v8 )
    sub_B5D69C(v9, v10);
  v17 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_B5D684(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_38;
  }
  if ( !v8->max_length )
    goto LABEL_37;
  v8->m_Items[0] = (System_String_o *)v17;
  sub_B5D560((BattleServantConfConponent_o *)v8->m_Items, v17, v11, v12, v13, v14, v15, v16);
  v9 = (System_String_o *)StringLiteral_707/*","*/;
  if ( StringLiteral_707/*","*/ )
  {
    v9 = (System_String_o *)sub_B5D684(StringLiteral_707/*","*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_38;
    v24 = (System_Int32_array **)StringLiteral_707/*","*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_37;
  v8->m_Items[1] = (System_String_o *)v24;
  sub_B5D560((BattleServantConfConponent_o *)&v8->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
  QuestId_k__BackingField = this->fields._PhaseCnt_k__BackingField;
  v9 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
  v31 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_B5D684(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_38;
  }
  if ( v8->max_length <= 2 )
    goto LABEL_37;
  v8->m_Items[2] = (System_String_o *)v31;
  sub_B5D560((BattleServantConfConponent_o *)&v8->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  v9 = (System_String_o *)StringLiteral_707/*","*/;
  if ( StringLiteral_707/*","*/ )
  {
    v9 = (System_String_o *)sub_B5D684(StringLiteral_707/*","*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_38;
    v38 = (System_Int32_array **)StringLiteral_707/*","*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v8->max_length <= 3 )
    goto LABEL_37;
  v8->m_Items[3] = (System_String_o *)v38;
  sub_B5D560((BattleServantConfConponent_o *)&v8->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
  v70[0] = this->fields._IsQuestClear_k__BackingField;
  v9 = System_Boolean__ToString((bool)v70, 0LL);
  v45 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_B5D684(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_38;
  }
  if ( v8->max_length <= 4 )
    goto LABEL_37;
  v8->m_Items[4] = (System_String_o *)v45;
  sub_B5D560((BattleServantConfConponent_o *)&v8->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  v9 = (System_String_o *)StringLiteral_707/*","*/;
  if ( StringLiteral_707/*","*/ )
  {
    v9 = (System_String_o *)sub_B5D684(StringLiteral_707/*","*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_38;
    v52 = (System_Int32_array **)StringLiteral_707/*","*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( v8->max_length <= 5 )
    goto LABEL_37;
  v8->m_Items[5] = (System_String_o *)v52;
  sub_B5D560((BattleServantConfConponent_o *)&v8->m_Items[5], v52, v46, v47, v48, v49, v50, v51);
  v70[0] = this->fields._IsQuestPhaseClear_k__BackingField;
  v9 = System_Boolean__ToString((bool)v70, 0LL);
  v59 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_B5D684(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_38:
      v69 = sub_B5D6BC(v9);
      sub_B5D668(v69, 0LL);
    }
  }
  if ( v8->max_length <= 6 )
    goto LABEL_37;
  v8->m_Items[6] = (System_String_o *)v59;
  sub_B5D560((BattleServantConfConponent_o *)&v8->m_Items[6], v59, v53, v54, v55, v56, v57, v58);
  v9 = (System_String_o *)StringLiteral_707/*","*/;
  if ( StringLiteral_707/*","*/ )
  {
    v9 = (System_String_o *)sub_B5D684(StringLiteral_707/*","*/, v8->obj.klass->_1.element_class);
    if ( v9 )
    {
      v66 = (System_Int32_array **)StringLiteral_707/*","*/;
      goto LABEL_35;
    }
    goto LABEL_38;
  }
  v66 = 0LL;
LABEL_35:
  if ( v8->max_length <= 7 )
  {
LABEL_37:
    v68 = sub_B5D6C8(v9);
    sub_B5D668(v68, 0LL);
  }
  v8->m_Items[7] = (System_String_o *)v66;
  sub_B5D560((BattleServantConfConponent_o *)&v8->m_Items[7], v66, v60, v61, v62, v63, v64, v65);
  return System_String__Concat_44657912(v8, 0LL);
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