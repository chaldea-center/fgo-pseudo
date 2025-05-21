void __fastcall UserCombineExpMaster___ctor(UserCombineExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B4576F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__, method);
    byte_4B4576F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    311,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__fastcall UserCombineExpMaster__GetUserSvtId(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *retstr,
        UserCombineExpMaster_o *this,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *result; // x0
  int32_t Count; // w21
  int32_t v9; // w22
  __int64 v10; // x2
  __int64 v11; // x25
  __int64 v12; // x8
  unsigned __int64 v13; // x26
  _OWORD *v14; // x27
  __int128 v15; // q0
  __int128 v16; // q0
  __int128 v17; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+60h] [xbp-70h]

  if ( (byte_4B45770 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Item__, v5);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4B45770 = 1;
  }
  result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
  if ( !result )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Count__);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v20, 0LL, 0LL);
  v21 = v20;
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
      if ( !result )
        break;
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)result,
                                                                     v9,
                                                                     (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Item__);
      if ( result )
      {
        v11 = *(_QWORD *)&result->fields.inited;
        if ( !v11 )
          break;
        v12 = *(_QWORD *)(v11 + 24);
        if ( (int)v12 >= 1 )
        {
          v13 = 0LL;
          v14 = (_OWORD *)(v11 + 32);
          do
          {
            if ( v13 >= (unsigned int)v12 )
              sub_1BDBADC(result, method, v10);
            v15 = v14[1];
            *(_OWORD *)&v20.fields.currentCryptoKey = *v14;
            *(_OWORD *)&v20.fields.fakeValue = v15;
            v16 = v14[1];
            *(_OWORD *)&v19.fields.currentCryptoKey = *v14;
            *(_OWORD *)&v19.fields.fakeValue = v16;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v18 = v19;
            result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(
                                                                           &v18,
                                                                           0LL);
            if ( ((unsigned __int64)result & 0x8000000000000000LL) == 0 )
              v21 = v20;
            LODWORD(v12) = *(_DWORD *)(v11 + 24);
            ++v13;
            v14 += 2;
          }
          while ( (__int64)v13 < (int)v12 );
        }
      }
      if ( ++v9 == Count )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BDBAD4(result, method);
  }
LABEL_20:
  v17 = *(_OWORD *)&v21.fields.fakeValue;
  *(_OWORD *)&retstr->fields.currentCryptoKey = *(_OWORD *)&v21.fields.currentCryptoKey;
  *(_OWORD *)&retstr->fields.fakeValue = v17;
  return result;
}