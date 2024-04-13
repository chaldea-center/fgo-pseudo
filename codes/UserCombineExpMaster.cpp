void __fastcall UserCombineExpMaster___ctor(UserCombineExpMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA16D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA16D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    304,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__fastcall UserCombineExpMaster__GetUserSvtId(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *retstr,
        UserCombineExpMaster_o *this,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *result; // x0
  int32_t Count; // w21
  int32_t v18; // w22
  __int64 v19; // x10
  __int64 v20; // x26
  __int64 v21; // x8
  unsigned __int64 v22; // x27
  _OWORD *v23; // x28
  __int128 v24; // q0
  __int128 v25; // q0
  __int128 v26; // q1
  __int64 v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29[3]; // [xsp+20h] [xbp-B0h] BYREF

  if ( (byte_42EA16E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v3, v4);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UserCombineExpEntity_TypeInfo, v13, v14, v15);
    byte_42EA16E = 1;
  }
  memset(&v29[1], 0, 64);
  result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
  if ( !result )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v29, 0LL, 0LL);
  v29[2] = v29[0];
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
      if ( !result )
        break;
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                                                     v18,
                                                                     (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v19 = *(&UserCombineExpEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(result->fields.currentCryptoKey + 300) >= (unsigned int)v19
          && *(UserCombineExpEntity_c **)(*(_QWORD *)(result->fields.currentCryptoKey + 200) + 8 * v19 - 8) == UserCombineExpEntity_TypeInfo )
        {
          v20 = *(_QWORD *)&result->fields.inited;
          if ( !v20 )
            break;
          v21 = *(_QWORD *)(v20 + 24);
          if ( (int)v21 >= 1 )
          {
            v22 = 0LL;
            v23 = (_OWORD *)(v20 + 32);
            do
            {
              if ( v22 >= (unsigned int)v21 )
              {
                v27 = sub_B5D6C8(result);
                sub_B5D668(v27, 0LL);
              }
              v24 = v23[1];
              *(_OWORD *)&v29[1].fields.currentCryptoKey = *v23;
              *(_OWORD *)&v29[1].fields.fakeValue = v24;
              v25 = v23[1];
              *(_OWORD *)&v29[0].fields.currentCryptoKey = *v23;
              *(_OWORD *)&v29[0].fields.fakeValue = v25;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v28 = v29[0];
              result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                                             &v28,
                                                                             0LL);
              if ( ((unsigned __int64)result & 0x8000000000000000LL) == 0 )
                v29[2] = v29[1];
              LODWORD(v21) = *(_DWORD *)(v20 + 24);
              ++v22;
              v23 += 2;
            }
            while ( (__int64)v22 < (int)v21 );
          }
        }
      }
      if ( ++v18 >= Count )
        goto LABEL_24;
    }
LABEL_26:
    sub_B5D69C(result, method);
  }
LABEL_24:
  v26 = *(_OWORD *)&v29[2].fields.fakeValue;
  *(_OWORD *)&retstr->fields.currentCryptoKey = *(_OWORD *)&v29[2].fields.currentCryptoKey;
  *(_OWORD *)&retstr->fields.fakeValue = v26;
  return result;
}