void __fastcall UserCombineExpMaster___ctor(UserCombineExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1492 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
    byte_42B1492 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    304,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__fastcall UserCombineExpMaster__GetUserSvtId(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *retstr,
        UserCombineExpMaster_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *result; // x0
  int32_t Count; // w21
  int32_t v7; // w22
  __int64 v8; // x10
  __int64 v9; // x26
  __int64 v10; // x8
  unsigned __int64 v11; // x27
  _OWORD *v12; // x28
  __int128 v13; // q0
  __int128 v14; // q0
  __int128 v15; // q1
  __int64 v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18[3]; // [xsp+20h] [xbp-B0h] BYREF

  if ( (byte_42B1493 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserCombineExpEntity_TypeInfo);
    byte_42B1493 = 1;
  }
  memset(&v18[1], 0, 64);
  result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
  if ( !result )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v18, 0LL, 0LL);
  v18[2] = v18[0];
  if ( Count >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
      if ( !result )
        break;
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                                                     v7,
                                                                     (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v8 = *(&UserCombineExpEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(result->fields.currentCryptoKey + 300) >= (unsigned int)v8
          && *(UserCombineExpEntity_c **)(*(_QWORD *)(result->fields.currentCryptoKey + 200) + 8 * v8 - 8) == UserCombineExpEntity_TypeInfo )
        {
          v9 = *(_QWORD *)&result->fields.inited;
          if ( !v9 )
            break;
          v10 = *(_QWORD *)(v9 + 24);
          if ( (int)v10 >= 1 )
          {
            v11 = 0LL;
            v12 = (_OWORD *)(v9 + 32);
            do
            {
              if ( v11 >= (unsigned int)v10 )
              {
                v16 = sub_B52A88(result);
                sub_B52A28(v16, 0LL);
              }
              v13 = v12[1];
              *(_OWORD *)&v18[1].fields.currentCryptoKey = *v12;
              *(_OWORD *)&v18[1].fields.fakeValue = v13;
              v14 = v12[1];
              *(_OWORD *)&v18[0].fields.currentCryptoKey = *v12;
              *(_OWORD *)&v18[0].fields.fakeValue = v14;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v17 = v18[0];
              result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                                             &v17,
                                                                             0LL);
              if ( ((unsigned __int64)result & 0x8000000000000000LL) == 0 )
                v18[2] = v18[1];
              LODWORD(v10) = *(_DWORD *)(v9 + 24);
              ++v11;
              v12 += 2;
            }
            while ( (__int64)v11 < (int)v10 );
          }
        }
      }
      if ( ++v7 >= Count )
        goto LABEL_24;
    }
LABEL_26:
    sub_B52A5C(result, method);
  }
LABEL_24:
  v15 = *(_OWORD *)&v18[2].fields.fakeValue;
  *(_OWORD *)&retstr->fields.currentCryptoKey = *(_OWORD *)&v18[2].fields.currentCryptoKey;
  *(_OWORD *)&retstr->fields.fakeValue = v15;
  return result;
}