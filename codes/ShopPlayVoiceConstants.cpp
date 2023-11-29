int32_t __fastcall ShopPlayVoiceConstants__GetBackVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_3137530[state - 2];
}


System_String_o *__fastcall ShopPlayVoiceConstants__GetBackVoiceMasterKey(int32_t state, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o **v5; // x8

  if ( (byte_40FB778 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12125, method);
    sub_B16FFC(&StringLiteral_12126, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FB778 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v5 = (System_String_o **)&StringLiteral_1;
  else
    v5 = (System_String_o **)*(&off_3D6A760 + state - 2);
  return *v5;
}


int32_t __fastcall ShopPlayVoiceConstants__GetEnterVoiceFlag(int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 2) > 0x13 )
    return 0;
  else
    return dword_3137580[state - 2];
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

  if ( (byte_40FB777 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12137, method);
    sub_B16FFC(&StringLiteral_12141, v3);
    sub_B16FFC(&StringLiteral_12139, v4);
    sub_B16FFC(&StringLiteral_12130, v5);
    sub_B16FFC(&StringLiteral_12133, v6);
    sub_B16FFC(&StringLiteral_12134, v7);
    sub_B16FFC(&StringLiteral_12138, v8);
    sub_B16FFC(&StringLiteral_12131, v9);
    sub_B16FFC(&StringLiteral_12142, v10);
    sub_B16FFC(&StringLiteral_12132, v11);
    sub_B16FFC(&StringLiteral_12140, v12);
    sub_B16FFC(&StringLiteral_12143, v13);
    sub_B16FFC(&StringLiteral_12124, v14);
    sub_B16FFC(&StringLiteral_12136, v15);
    sub_B16FFC(&StringLiteral_12128, v16);
    sub_B16FFC(&StringLiteral_1, v17);
    sub_B16FFC(&StringLiteral_12129, v18);
    sub_B16FFC(&StringLiteral_12135, v19);
    byte_40FB777 = 1;
  }
  if ( (unsigned int)(state - 2) > 0x13 )
    v20 = (System_String_o **)&StringLiteral_1;
  else
    v20 = (System_String_o **)*(&off_3D6A800 + state - 2);
  return *v20;
}