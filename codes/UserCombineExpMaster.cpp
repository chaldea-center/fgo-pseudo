void __fastcall UserCombineExpMaster___ctor(UserCombineExpMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16DD8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__, method, v2);
    byte_4B16DD8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    305,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__fastcall UserCombineExpMaster__GetUserSvtId(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *retstr,
        UserCombineExpMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *result; // x0
  __int64 v13; // x1
  int32_t Count; // w21
  int32_t v15; // w22
  __int64 methodPtr_low; // x10
  __int64 v17; // x26
  __int64 v18; // x8
  unsigned __int64 v19; // x27
  _OWORD *v20; // x28
  __int128 v21; // q0
  __int128 v22; // q0
  __int128 v23; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+60h] [xbp-80h]

  if ( (byte_4B16DD9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v3);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
    sub_1BCA7E0(&UserCombineExpEntity_TypeInfo, v10, v11);
    byte_4B16DD9 = 1;
  }
  result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
  if ( !result )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v26, 0LL, 0LL);
  v27 = v26;
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
      if ( !result )
        break;
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)result,
                                                                     v15,
                                                                     (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(UserCombineExpEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(result->fields.currentCryptoKey + 304) >= (unsigned int)methodPtr_low
          && *(UserCombineExpEntity_c **)(*(_QWORD *)(result->fields.currentCryptoKey + 200) + 8 * methodPtr_low - 8) == UserCombineExpEntity_TypeInfo )
        {
          v17 = *(_QWORD *)&result->fields.inited;
          if ( !v17 )
            break;
          v18 = *(_QWORD *)(v17 + 24);
          if ( (int)v18 >= 1 )
          {
            v19 = 0LL;
            v20 = (_OWORD *)(v17 + 32);
            do
            {
              if ( v19 >= (unsigned int)v18 )
                sub_1BCAA44(result, method);
              v21 = v20[1];
              *(_OWORD *)&v26.fields.currentCryptoKey = *v20;
              *(_OWORD *)&v26.fields.fakeValue = v21;
              v22 = v20[1];
              *(_OWORD *)&v25.fields.currentCryptoKey = *v20;
              *(_OWORD *)&v25.fields.fakeValue = v22;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
              v24 = v25;
              result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                                             &v24,
                                                                             0LL);
              if ( ((unsigned __int64)result & 0x8000000000000000LL) == 0 )
                v27 = v26;
              LODWORD(v18) = *(_DWORD *)(v17 + 24);
              ++v19;
              v20 += 2;
            }
            while ( (__int64)v19 < (int)v18 );
          }
        }
      }
      if ( ++v15 == Count )
        goto LABEL_22;
    }
LABEL_24:
    sub_1BCAA3C(result, method);
  }
LABEL_22:
  v23 = *(_OWORD *)&v27.fields.fakeValue;
  *(_OWORD *)&retstr->fields.currentCryptoKey = *(_OWORD *)&v27.fields.currentCryptoKey;
  *(_OWORD *)&retstr->fields.fakeValue = v23;
  return result;
}