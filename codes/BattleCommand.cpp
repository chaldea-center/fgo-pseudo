float __fastcall BattleCommand__getCriticalMagnification(BattleCommandData_o *data, const MethodInfo *method)
{
  int32_t type; // w0

  if ( !data )
    sub_B5D69C(0LL, method);
  type = BattleCommandData__get_type(data, method);
  return CardMaster__getCritical(type, data->fields.actionIndex, 0LL);
}


float __fastcall BattleCommand__getCriticalMagnification_18864512(
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  return CardMaster__getCritical(type, index, 0LL);
}


System_Int32_array *__fastcall BattleCommand__getIndividuality(int32_t type, int32_t num, const MethodInfo *method)
{
  return CardMaster__getIndividualities(type, num, 0LL);
}


float __fastcall BattleCommand__getMagnification(BattleCommandData_o *data, const MethodInfo *method)
{
  int32_t type; // w0

  if ( !data )
    sub_B5D69C(0LL, method);
  type = BattleCommandData__get_type(data, method);
  return CardMaster__getAtk(type, data->fields.actionIndex, 0LL);
}


float __fastcall BattleCommand__getMagnification_18864400(int32_t type, int32_t index, const MethodInfo *method)
{
  return CardMaster__getAtk(type, index, 0LL);
}


float __fastcall BattleCommand__getNpMagnification(BattleCommandData_o *command, const MethodInfo *method)
{
  int32_t type; // w0

  if ( !command )
    sub_B5D69C(0LL, method);
  type = BattleCommandData__get_type(command, method);
  return CardMaster__getTdGauge(type, command->fields.actionIndex, 0LL);
}


float __fastcall BattleCommand__getNpMagnification_18864456(int32_t type, int32_t index, const MethodInfo *method)
{
  return CardMaster__getTdGauge(type, index, 0LL);
}


int32_t __fastcall BattleCommand__getType(int32_t type, const MethodInfo *method)
{
  return type;
}


bool __fastcall BattleCommand__isADDATTACK(int32_t type, const MethodInfo *method)
{
  return type == 4;
}


bool __fastcall BattleCommand__isARTS(int32_t type, const MethodInfo *method)
{
  return type == 1;
}


bool __fastcall BattleCommand__isBLANK(int32_t type, const MethodInfo *method)
{
  return type == 5;
}


bool __fastcall BattleCommand__isBUSTER(int32_t type, const MethodInfo *method)
{
  return type == 2;
}


bool __fastcall BattleCommand__isNomalCommand(int32_t type, const MethodInfo *method)
{
  if ( type != 1 )
    LOBYTE(type) = (type | 1) == 3;
  return type;
}


bool __fastcall BattleCommand__isQUICK(int32_t type, const MethodInfo *method)
{
  return type == 3;
}


bool __fastcall BattleCommand__isShowCommandAction(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 1) < 4 || (type | 1) == 11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommand__setSprite(UISprite_o *sprite, int32_t type, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Behaviour_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 *v12; // x8

  v5 = (UnityEngine_Behaviour_o *)sprite;
  if ( (byte_42E537A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19562/*"icon_commandcard_quick"*/, type, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_19560/*"icon_commandcard_buster"*/, v6, v7, v8);
    sprite = (UISprite_o *)sub_B5D5C4(&StringLiteral_19559/*"icon_commandcard_arts"*/, v9, v10, v11);
    byte_42E537A = 1;
  }
  switch ( type )
  {
    case 3:
      if ( v5 )
      {
        UnityEngine_Behaviour__set_enabled(v5, 1, 0LL);
        v12 = &StringLiteral_19562/*"icon_commandcard_quick"*/;
        goto LABEL_12;
      }
      goto LABEL_15;
    case 2:
      if ( v5 )
      {
        UnityEngine_Behaviour__set_enabled(v5, 1, 0LL);
        v12 = &StringLiteral_19560/*"icon_commandcard_buster"*/;
        goto LABEL_12;
      }
LABEL_15:
      sub_B5D69C(sprite, *(_QWORD *)&type);
    case 1:
      if ( v5 )
      {
        UnityEngine_Behaviour__set_enabled(v5, 1, 0LL);
        v12 = &StringLiteral_19559/*"icon_commandcard_arts"*/;
LABEL_12:
        UISprite__set_spriteName((UISprite_o *)v5, (System_String_o *)*v12, 0LL);
        return;
      }
      goto LABEL_15;
  }
  if ( !v5 )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled(v5, 0, 0LL);
}