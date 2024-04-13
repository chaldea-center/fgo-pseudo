void __fastcall ExcludeMotionEntity___ctor(ExcludeMotionEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7A00 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E7A00 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ExcludeMotionEntity__CreatePK(
        int32_t idx,
        System_String_o *stateName,
        int32_t weaponGroup,
        const MethodInfo *method)
{
  if ( (byte_42E79FE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__string__int___, (_DWORD)stateName, weaponGroup, method);
    byte_42E79FE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__string__int_(
           idx,
           stateName,
           weaponGroup,
           (const MethodInfo_1AE3638 *)Method_DataEntityBase_CreateMultiplePK_int__string__int___);
}


System_String_o *__fastcall ExcludeMotionEntity__CreatePrimaryKey(
        ExcludeMotionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ExcludeMotionEntity__CreatePK(this->fields.idx, this->fields.stateName, this->fields.weaponGroup, v2);
}


bool __fastcall ExcludeMotionEntity__IsSatisfyExcludeCond(ExcludeMotionEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ExcludeMotionEntity_o *v4; // x19
  struct ExcludeMotionCond_array *excludeCondJson; // x20
  int max_length; // w8
  unsigned int v7; // w21
  ExcludeMotionCond_o *v8; // x26
  int32_t warId; // w27
  int32_t questId; // w27
  int32_t questPhase; // w26
  __int64 v13; // x0

  v4 = this;
  if ( (byte_42E79FF & 1) == 0 )
  {
    this = (ExcludeMotionEntity_o *)sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E79FF = 1;
  }
  excludeCondJson = v4->fields.excludeCondJson;
  if ( !excludeCondJson )
LABEL_42:
    sub_B5D69C(this, method);
  max_length = excludeCondJson->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
      v13 = sub_B5D6C8(this);
      sub_B5D668(v13, 0LL);
    }
    v8 = excludeCondJson->m_Items[v7];
    if ( !v8 )
      goto LABEL_42;
    warId = v8->fields.warId;
    if ( warId )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B20 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
        byte_42E4B20 = 1;
      }
      this = (ExcludeMotionEntity_o *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        this = (ExcludeMotionEntity_o *)TerminalPramsManager_TypeInfo;
      }
      if ( warId == HIDWORD(this[3].fields.excludeCondJson->obj.klass) )
        return 1;
    }
    questId = v8->fields.questId;
    if ( questId )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B33 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
        byte_42E4B33 = 1;
      }
      this = (ExcludeMotionEntity_o *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        this = (ExcludeMotionEntity_o *)TerminalPramsManager_TypeInfo;
      }
      if ( questId == LODWORD(this[3].fields.excludeCondJson->bounds) )
      {
        questPhase = v8->fields.questPhase;
        if ( !questPhase )
          return 1;
        if ( (this[6].fields.idx & 0x4000000) != 0 && !this[4].fields.weaponGroup )
          j_il2cpp_runtime_class_init_0(this);
        if ( !byte_42E4B34 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
          byte_42E4B34 = 1;
        }
        this = (ExcludeMotionEntity_o *)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          this = (ExcludeMotionEntity_o *)TerminalPramsManager_TypeInfo;
        }
        if ( questPhase == HIDWORD(this[3].fields.excludeCondJson->bounds) + 1 )
          return 1;
      }
    }
    max_length = excludeCondJson->max_length;
    if ( (int)++v7 >= max_length )
      return 0;
  }
}


bool __fastcall ExcludeMotionEntity__IsSatisfyTargetSvtType(
        ExcludeMotionEntity_o *this,
        bool isEnemy,
        bool isNpc,
        const MethodInfo *method)
{
  int v4; // w8
  int v5; // w10
  int v6; // w11

  if ( isEnemy )
    v4 = 2;
  else
    v4 = 0;
  v5 = v4 | 4;
  v6 = v4 | 8;
  if ( isNpc )
    v4 |= 4u;
  if ( !isNpc )
    v5 = v6;
  if ( !isEnemy )
    v4 = v5;
  return (this->fields.targetSvtType & v4) != 0;
}