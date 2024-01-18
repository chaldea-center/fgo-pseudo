void __fastcall BattleActionLogManagerNOP___ctor(BattleActionLogManagerNOP_o *this, const MethodInfo *method)
{
  struct System_Byte_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418B859 & 1) == 0 )
  {
    sub_B2C35C(&byte___TypeInfo, method);
    byte_418B859 = 1;
  }
  v3 = (struct System_Byte_array *)sub_B2C374(byte___TypeInfo, 1LL);
  this->fields.dummy = v3;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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