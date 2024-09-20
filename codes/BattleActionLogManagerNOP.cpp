void __fastcall BattleActionLogManagerNOP___ctor(BattleActionLogManagerNOP_o *this, const MethodInfo *method)
{
  struct System_Byte_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5D2D8 & 1) == 0 )
  {
    sub_1B885B0(&byte___TypeInfo);
    byte_4A5D2D8 = 1;
  }
  v3 = (struct System_Byte_array *)sub_1B88658(byte___TypeInfo, 1LL);
  this->fields.dummy = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
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