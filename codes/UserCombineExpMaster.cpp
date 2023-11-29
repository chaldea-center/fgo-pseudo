void __fastcall UserCombineExpMaster___ctor(UserCombineExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FAAC7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__, method);
    byte_40FAAC7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    303,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__fastcall UserCombineExpMaster__GetUserSvtId(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *retstr,
        UserCombineExpMaster_o *this,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *result; // x0
  int32_t v11; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x10
  __int64 v16; // x26
  __int64 v17; // x8
  unsigned __int64 v18; // x27
  _OWORD *v19; // x28
  __int128 v20; // q0
  __int128 v21; // q0
  __int128 v22; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24[3]; // [xsp+20h] [xbp-B0h] BYREF

  if ( (byte_40FAAC8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B16FFC(&UserCombineExpEntity_TypeInfo, v7);
    byte_40FAAC8 = 1;
  }
  memset(&v24[1], 0, 64);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v24, 0LL, 0LL);
  v24[2] = v24[0];
  if ( Count >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v12 )
        break;
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                     v12,
                                                                     v11,
                                                                     (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v15 = *(&UserCombineExpEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(result->fields.currentCryptoKey + 300) >= (unsigned int)v15
          && *(UserCombineExpEntity_c **)(*(_QWORD *)(result->fields.currentCryptoKey + 200) + 8 * v15 - 8) == UserCombineExpEntity_TypeInfo )
        {
          v16 = *(_QWORD *)&result->fields.inited;
          if ( !v16 )
            break;
          v17 = *(_QWORD *)(v16 + 24);
          if ( (int)v17 >= 1 )
          {
            v18 = 0LL;
            v19 = (_OWORD *)(v16 + 32);
            do
            {
              if ( v18 >= (unsigned int)v17 )
              {
                sub_B17100(result, v13, v14);
                sub_B170A0();
              }
              v20 = v19[1];
              *(_OWORD *)&v24[1].fields.currentCryptoKey = *v19;
              *(_OWORD *)&v24[1].fields.fakeValue = v20;
              v21 = v19[1];
              *(_OWORD *)&v24[0].fields.currentCryptoKey = *v19;
              *(_OWORD *)&v24[0].fields.fakeValue = v21;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v23 = v24[0];
              result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
                                                                             &v23,
                                                                             0LL);
              if ( ((unsigned __int64)result & 0x8000000000000000LL) == 0 )
                v24[2] = v24[1];
              LODWORD(v17) = *(_DWORD *)(v16 + 24);
              ++v18;
              v19 += 2;
            }
            while ( (__int64)v18 < (int)v17 );
          }
        }
      }
      if ( ++v11 >= Count )
        goto LABEL_24;
    }
LABEL_26:
    sub_B170D4();
  }
LABEL_24:
  v22 = *(_OWORD *)&v24[2].fields.fakeValue;
  *(_OWORD *)&retstr->fields.currentCryptoKey = *(_OWORD *)&v24[2].fields.currentCryptoKey;
  *(_OWORD *)&retstr->fields.fakeValue = v22;
  return result;
}