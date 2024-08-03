void __fastcall UserCombineExpMaster___ctor(UserCombineExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCED0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__, method);
    byte_49FCED0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    305,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
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
  __int64 v11; // x1
  __int64 methodPtr_low; // x10
  __int64 v13; // x26
  __int64 v14; // x8
  unsigned __int64 v15; // x27
  _OWORD *v16; // x28
  __int128 v17; // q0
  __int128 v18; // q0
  __int128 v19; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+60h] [xbp-80h]

  if ( (byte_49FCED1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1B640C8(&UserCombineExpEntity_TypeInfo, v7);
    byte_49FCED1 = 1;
  }
  result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
  if ( !result )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v22, 0LL, 0LL);
  v23 = v22;
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
      if ( !result )
        break;
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)result,
                                                                     v10,
                                                                     (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(UserCombineExpEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(result->fields.currentCryptoKey + 304) >= (unsigned int)methodPtr_low
          && *(UserCombineExpEntity_c **)(*(_QWORD *)(result->fields.currentCryptoKey + 200) + 8 * methodPtr_low - 8) == UserCombineExpEntity_TypeInfo )
        {
          v13 = *(_QWORD *)&result->fields.inited;
          if ( !v13 )
            break;
          v14 = *(_QWORD *)(v13 + 24);
          if ( (int)v14 >= 1 )
          {
            v15 = 0LL;
            v16 = (_OWORD *)(v13 + 32);
            do
            {
              if ( v15 >= (unsigned int)v14 )
                sub_1B6432C(result, v11);
              v17 = v16[1];
              *(_OWORD *)&v22.fields.currentCryptoKey = *v16;
              *(_OWORD *)&v22.fields.fakeValue = v17;
              v18 = v16[1];
              *(_OWORD *)&v21.fields.currentCryptoKey = *v16;
              *(_OWORD *)&v21.fields.fakeValue = v18;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v20 = v21;
              result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                                             &v20,
                                                                             0LL);
              if ( ((unsigned __int64)result & 0x8000000000000000LL) == 0 )
                v23 = v22;
              LODWORD(v14) = *(_DWORD *)(v13 + 24);
              ++v15;
              v16 += 2;
            }
            while ( (__int64)v15 < (int)v14 );
          }
        }
      }
      if ( ++v10 == Count )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B64324(result);
  }
LABEL_22:
  v19 = *(_OWORD *)&v23.fields.fakeValue;
  *(_OWORD *)&retstr->fields.currentCryptoKey = *(_OWORD *)&v23.fields.currentCryptoKey;
  *(_OWORD *)&retstr->fields.fakeValue = v19;
  return result;
}