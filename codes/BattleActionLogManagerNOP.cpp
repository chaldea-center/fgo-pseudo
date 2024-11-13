void __fastcall BattleActionLogManagerNOP___ctor(BattleActionLogManagerNOP_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Byte_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B183AF & 1) == 0 )
  {
    sub_1BCA7E0(&byte___TypeInfo, method, v2);
    byte_4B183AF = 1;
  }
  v4 = (struct System_Byte_array *)sub_1BCA888(byte___TypeInfo, 1LL);
  this->fields.dummy = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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