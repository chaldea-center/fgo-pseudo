void __fastcall UserCombineExpMaster___ctor(UserCombineExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC86D8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__, method);
    byte_4BC86D8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    309,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
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
  __int64 v10; // x25
  __int64 v11; // x8
  unsigned __int64 v12; // x26
  _OWORD *v13; // x27
  __int128 v14; // q0
  __int128 v15; // q0
  __int128 v16; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+60h] [xbp-70h]

  if ( (byte_4BC86D9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Item__, v5);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4BC86D9 = 1;
  }
  result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
  if ( !result )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Count__);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v19, 0LL, 0LL);
  v20 = v19;
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
                                                                     (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Item__);
      if ( result )
      {
        v10 = *(_QWORD *)&result->fields.inited;
        if ( !v10 )
          break;
        v11 = *(_QWORD *)(v10 + 24);
        if ( (int)v11 >= 1 )
        {
          v12 = 0LL;
          v13 = (_OWORD *)(v10 + 32);
          do
          {
            if ( v12 >= (unsigned int)v11 )
              sub_1C1AE38(result, method);
            v14 = v13[1];
            *(_OWORD *)&v19.fields.currentCryptoKey = *v13;
            *(_OWORD *)&v19.fields.fakeValue = v14;
            v15 = v13[1];
            *(_OWORD *)&v18.fields.currentCryptoKey = *v13;
            *(_OWORD *)&v18.fields.fakeValue = v15;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v17 = v18;
            result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                                                           &v17,
                                                                           0LL);
            if ( ((unsigned __int64)result & 0x8000000000000000LL) == 0 )
              v20 = v19;
            LODWORD(v11) = *(_DWORD *)(v10 + 24);
            ++v12;
            v13 += 2;
          }
          while ( (__int64)v12 < (int)v11 );
        }
      }
      if ( ++v9 == Count )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C1AE30(result, method);
  }
LABEL_20:
  v16 = *(_OWORD *)&v20.fields.fakeValue;
  *(_OWORD *)&retstr->fields.currentCryptoKey = *(_OWORD *)&v20.fields.currentCryptoKey;
  *(_OWORD *)&retstr->fields.fakeValue = v16;
  return result;
}