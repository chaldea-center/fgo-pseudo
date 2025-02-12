int32_t __fastcall ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_C30648[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o **v5; // x8

  if ( (byte_4BB0BEB & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_12288/*"SHOP_RESET_DIALOG_BEFORE_NUM_TITLE"*/, method);
    sub_1C13D24(&StringLiteral_12289/*"SHOP_RESET_DIALOG_CANCEL"*/, v3);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB0BEB = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v5 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v5 = (System_String_o **)*(&off_45E5EB0 + state - 2);
  return *v5;
}


int32_t __fastcall ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_C30698[state - 2];
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

  if ( (byte_4BB0BEA & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_12300/*"SHOP_SCENE_VOICE_BACK1"*/, method);
    sub_1C13D24(&StringLiteral_12304/*"SHOP_SCENE_VOICE_EVENT"*/, v3);
    sub_1C13D24(&StringLiteral_12302/*"SHOP_SCENE_VOICE_CANCEL"*/, v4);
    sub_1C13D24(&StringLiteral_12293/*"SHOP_RESET_DIALOG_NUM"*/, v5);
    sub_1C13D24(&StringLiteral_12296/*"SHOP_RESET_DIALOG_WARNING_MESSAGE"*/, v6);
    sub_1C13D24(&StringLiteral_12297/*"SHOP_RESET_NEED_INFO"*/, v7);
    sub_1C13D24(&StringLiteral_12301/*"SHOP_SCENE_VOICE_BACK2"*/, v8);
    sub_1C13D24(&StringLiteral_12294/*"SHOP_RESET_DIALOG_RESULT_MESSAGE"*/, v9);
    sub_1C13D24(&StringLiteral_12305/*"SHOP_SCENE_VOICE_EVENT_SVT_EQUIP"*/, v10);
    sub_1C13D24(&StringLiteral_12295/*"SHOP_RESET_DIALOG_TITLE"*/, v11);
    sub_1C13D24(&StringLiteral_12303/*"SHOP_SCENE_VOICE_EQSTORAGE"*/, v12);
    sub_1C13D24(&StringLiteral_12306/*"SHOP_SCENE_VOICE_FRAGMENT"*/, v13);
    sub_1C13D24(&StringLiteral_12287/*"SHOP_RESET_DIALOG_AFTER_NUM_TITLE"*/, v14);
    sub_1C13D24(&StringLiteral_12299/*"SHOP_SCENE_VOICE_ANONYMOUS"*/, v15);
    sub_1C13D24(&StringLiteral_12291/*"SHOP_RESET_DIALOG_DECIDE"*/, v16);
    sub_1C13D24(&StringLiteral_1/*""*/, v17);
    sub_1C13D24(&StringLiteral_12292/*"SHOP_RESET_DIALOG_MESSAGE"*/, v18);
    sub_1C13D24(&StringLiteral_12298/*"SHOP_RETURN_EXCHANGE_ITEM"*/, v19);
    byte_4BB0BEA = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v20 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v20 = (System_String_o **)*(&off_45E5F50 + state - 2);
  return *v20;
}