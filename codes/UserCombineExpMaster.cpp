void UserCombineExpMaster___ctor(UserCombineExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8163 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
    byte_4CC8163 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    311,
    (const MethodInfo_340B614 *)Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *UserCombineExpMaster__GetUserSvtId(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__return_ptr retstr,
        UserCombineExpMaster_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *result; // x0
  int32_t Count; // w21
  int32_t v7; // w22
  __int64 v8; // x25
  __int64 v9; // x8
  unsigned __int64 v10; // x26
  _OWORD *v11; // x27
  __int128 v12; // q0
  __int128 v13; // q0
  __int128 v14; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+60h] [xbp-70h]

  if ( (byte_4CC8164 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Item__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC8164 = 1;
  }
  result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
  if ( !result )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Count__);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v17, 0, 0);
  v18 = v17;
  if ( Count >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
      if ( !result )
        break;
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)result,
                                                                     v7,
                                                                     (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Item__);
      if ( result )
      {
        v8 = *(_QWORD *)&result->fields.inited;
        if ( !v8 )
          break;
        v9 = *(_QWORD *)(v8 + 24);
        if ( (int)v9 >= 1 )
        {
          v10 = 0;
          v11 = (_OWORD *)(v8 + 32);
          do
          {
            if ( v10 >= (unsigned int)v9 )
              sub_1C71610(result);
            v12 = v11[1];
            *(_OWORD *)&v17.fields.currentCryptoKey = *v11;
            *(_OWORD *)&v17.fields.fakeValue = v12;
            v13 = v11[1];
            *(_OWORD *)&v16.fields.currentCryptoKey = *v11;
            *(_OWORD *)&v16.fields.fakeValue = v13;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v15 = v16;
            result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                                                           &v15,
                                                                           0);
            if ( ((unsigned __int64)result & 0x8000000000000000LL) == 0 )
              v18 = v17;
            LODWORD(v9) = *(_DWORD *)(v8 + 24);
            ++v10;
            v11 += 2;
          }
          while ( (__int64)v10 < (int)v9 );
        }
      }
      if ( ++v7 == Count )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C71608(result, method);
  }
LABEL_20:
  v14 = *(_OWORD *)&v18.fields.fakeValue;
  *(_OWORD *)&retstr->fields.currentCryptoKey = *(_OWORD *)&v18.fields.currentCryptoKey;
  *(_OWORD *)&retstr->fields.fakeValue = v14;
  return result;
}