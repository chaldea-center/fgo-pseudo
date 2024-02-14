void __fastcall UserCombineExpMaster___ctor(UserCombineExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215B66 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__, method);
    byte_4215B66 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    303,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__fastcall UserCombineExpMaster__GetUserSvtId(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *retstr,
        UserCombineExpMaster_o *this,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *result; // x0
  int32_t Count; // w21
  int32_t v10; // w22
  __int64 v11; // x10
  __int64 v12; // x26
  __int64 v13; // x8
  unsigned __int64 v14; // x27
  _OWORD *v15; // x28
  __int128 v16; // q0
  __int128 v17; // q0
  __int128 v18; // q1
  __int64 v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21[3]; // [xsp+20h] [xbp-B0h] BYREF

  if ( (byte_4215B67 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B0D8A4(&UserCombineExpEntity_TypeInfo, v7);
    byte_4215B67 = 1;
  }
  memset(&v21[1], 0, 64);
  result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
  if ( !result )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v21, 0LL, 0LL);
  v21[2] = v21[0];
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
      if ( !result )
        break;
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                                                     v10,
                                                                     (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v11 = *(&UserCombineExpEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(result->fields.currentCryptoKey + 300) >= (unsigned int)v11
          && *(UserCombineExpEntity_c **)(*(_QWORD *)(result->fields.currentCryptoKey + 200) + 8 * v11 - 8) == UserCombineExpEntity_TypeInfo )
        {
          v12 = *(_QWORD *)&result->fields.inited;
          if ( !v12 )
            break;
          v13 = *(_QWORD *)(v12 + 24);
          if ( (int)v13 >= 1 )
          {
            v14 = 0LL;
            v15 = (_OWORD *)(v12 + 32);
            do
            {
              if ( v14 >= (unsigned int)v13 )
              {
                v19 = sub_B0D9A8(result);
                sub_B0D948(v19, 0LL);
              }
              v16 = v15[1];
              *(_OWORD *)&v21[1].fields.currentCryptoKey = *v15;
              *(_OWORD *)&v21[1].fields.fakeValue = v16;
              v17 = v15[1];
              *(_OWORD *)&v21[0].fields.currentCryptoKey = *v15;
              *(_OWORD *)&v21[0].fields.fakeValue = v17;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v20 = v21[0];
              result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                                             &v20,
                                                                             0LL);
              if ( ((unsigned __int64)result & 0x8000000000000000LL) == 0 )
                v21[2] = v21[1];
              LODWORD(v13) = *(_DWORD *)(v12 + 24);
              ++v14;
              v15 += 2;
            }
            while ( (__int64)v14 < (int)v13 );
          }
        }
      }
      if ( ++v10 >= Count )
        goto LABEL_24;
    }
LABEL_26:
    sub_B0D97C(result);
  }
LABEL_24:
  v18 = *(_OWORD *)&v21[2].fields.fakeValue;
  *(_OWORD *)&retstr->fields.currentCryptoKey = *(_OWORD *)&v21[2].fields.currentCryptoKey;
  *(_OWORD *)&retstr->fields.fakeValue = v18;
  return result;
}