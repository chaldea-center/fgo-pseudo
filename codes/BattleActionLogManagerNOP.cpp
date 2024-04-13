void __fastcall BattleActionLogManagerNOP___ctor(BattleActionLogManagerNOP_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Byte_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7FE5 & 1) == 0 )
  {
    sub_B5D5C4(&byte___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FE5 = 1;
  }
  v5 = (struct System_Byte_array *)sub_B5D5DC(byte___TypeInfo, 1LL);
  this->fields.dummy = v5;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionLogManagerNOP__addLogContinue(BattleActionLogManagerNOP_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionLogManagerNOP__addLogSelectCommand(
        BattleActionLogManagerNOP_o *this,
        int32_t selectIndex1,
        int32_t selectIndex2,
        int32_t selectIndex3,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionLogManagerNOP__addLogSelectTarget(
        BattleActionLogManagerNOP_o *this,
        int32_t selectIndex,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionLogManagerNOP__addLogUseCommandSpell(
        BattleActionLogManagerNOP_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionLogManagerNOP__addLogUseSkill(
        BattleActionLogManagerNOP_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionLogManagerNOP__close(BattleActionLogManagerNOP_o *this, const MethodInfo *method)
{
  ;
}


System_Byte_array *__fastcall BattleActionLogManagerNOP__getDataRaw(
        BattleActionLogManagerNOP_o *this,
        const MethodInfo *method)
{
  return this->fields.dummy;
}


System_Byte_array *__fastcall BattleActionLogManagerNOP__getHeaderRaw(
        BattleActionLogManagerNOP_o *this,
        const MethodInfo *method)
{
  return this->fields.dummy;
}


void __fastcall BattleActionLogManagerNOP__setData(
        BattleActionLogManagerNOP_o *this,
        System_Byte_array *buffer,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionLogManagerNOP__setHeader(
        BattleActionLogManagerNOP_o *this,
        System_Byte_array *buffer,
        const MethodInfo *method)
{
  ;
}