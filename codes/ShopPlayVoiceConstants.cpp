int32_t __fastcall ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_C47654[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o **v5; // x8

  if ( (byte_4C1E420 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_12342/*"SelectAddInfo"*/, method);
    sub_1C3B764(&StringLiteral_12343/*"SelectAll"*/, v3);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C1E420 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v5 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v5 = (System_String_o **)*(&off_4647AD0 + state - 2);
  return *v5;
}


int32_t __fastcall ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_C476A4[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetEnterVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_o **v20; // x8

  if ( (byte_4C1E41F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_12354/*"Selector cannot appear twice in one identity constraint."*/, method);
    sub_1C3B764(&StringLiteral_12358/*"SellServant"*/, v3);
    sub_1C3B764(&StringLiteral_12356/*"Self"*/, v4);
    sub_1C3B764(&StringLiteral_12347/*"SelectCore"*/, v5);
    sub_1C3B764(&StringLiteral_12350/*"Select_NoStone"*/, v6);
    sub_1C3B764(&StringLiteral_12351/*"Select_Stone"*/, v7);
    sub_1C3B764(&StringLiteral_12355/*"Selector must be present."*/, v8);
    sub_1C3B764(&StringLiteral_12348/*"SelectIndex"*/, v9);
    sub_1C3B764(&StringLiteral_12359/*"SendMessage is bugged when you try to pass 'null' in the parameter field. It behaves as if no parameter was specified."*/, v10);
    sub_1C3B764(&StringLiteral_12349/*"SelectMove"*/, v11);
    sub_1C3B764(&StringLiteral_12357/*"Self referencing loop detected"*/, v12);
    sub_1C3B764(&StringLiteral_12360/*"SendPlayMarkerEventForChange"*/, v13);
    sub_1C3B764(&StringLiteral_12341/*"Select Response"*/, v14);
    sub_1C3B764(&StringLiteral_12353/*"Selection is out of range."*/, v15);
    sub_1C3B764(&StringLiteral_12345/*"SelectBonus"*/, v16);
    sub_1C3B764(&StringLiteral_1/*""*/, v17);
    sub_1C3B764(&StringLiteral_12346/*"SelectBonusGetDialog"*/, v18);
    sub_1C3B764(&StringLiteral_12352/*"Selected"*/, v19);
    byte_4C1E41F = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v20 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v20 = (System_String_o **)*(&off_4647B70 + state - 2);
  return *v20;
}