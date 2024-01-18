float __fastcall BattleCommand__getCriticalMagnification(BattleCommandData_o *data, const MethodInfo *method)
{
  int32_t type; // w0

  if ( !data )
    sub_B2C434(0LL, method);
  type = BattleCommandData__get_type(data, method);
  return CardMaster__getCritical(type, data->fields.actionIndex, 0LL);
}


float __fastcall BattleCommand__getCriticalMagnification_18346944(
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
    sub_B2C434(0LL, method);
  type = BattleCommandData__get_type(data, method);
  return CardMaster__getAtk(type, data->fields.actionIndex, 0LL);
}


float __fastcall BattleCommand__getMagnification_18346832(int32_t type, int32_t index, const MethodInfo *method)
{
  return CardMaster__getAtk(type, index, 0LL);
}


float __fastcall BattleCommand__getNpMagnification(BattleCommandData_o *command, const MethodInfo *method)
{
  int32_t type; // w0

  if ( !command )
    sub_B2C434(0LL, method);
  type = BattleCommandData__get_type(command, method);
  return CardMaster__getTdGauge(type, command->fields.actionIndex, 0LL);
}


float __fastcall BattleCommand__getNpMagnification_18346888(int32_t type, int32_t index, const MethodInfo *method)
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
  UnityEngine_Behaviour_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8

  v4 = (UnityEngine_Behaviour_o *)sprite;
  if ( (byte_418425A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19318/*"icon_commandcard_quick"*/, *(_QWORD *)&type);
    sub_B2C35C(&StringLiteral_19316/*"icon_commandcard_buster"*/, v5);
    sprite = (UISprite_o *)sub_B2C35C(&StringLiteral_19315/*"icon_commandcard_arts"*/, v6);
    byte_418425A = 1;
  }
  switch ( type )
  {
    case 3:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
        v7 = &StringLiteral_19318/*"icon_commandcard_quick"*/;
        goto LABEL_12;
      }
      goto LABEL_15;
    case 2:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
        v7 = &StringLiteral_19316/*"icon_commandcard_buster"*/;
        goto LABEL_12;
      }
LABEL_15:
      sub_B2C434(sprite, *(_QWORD *)&type);
    case 1:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
        v7 = &StringLiteral_19315/*"icon_commandcard_arts"*/;
LABEL_12:
        UISprite__set_spriteName((UISprite_o *)v4, (System_String_o *)*v7, 0LL);
        return;
      }
      goto LABEL_15;
  }
  if ( !v4 )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled(v4, 0, 0LL);
}