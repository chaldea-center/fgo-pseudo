void UserCombineExpMaster___ctor(UserCombineExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2801A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
    byte_4C2801A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    311,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *UserCombineExpMaster__GetUserSvtId(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__return_ptr retstr,
        UserCombineExpMaster_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *result; // x0
  int32_t Count; // w21
  int32_t v7; // w22
  __int64 v8; // x2
  __int64 v9; // x25
  __int64 v10; // x8
  unsigned __int64 v11; // x26
  _OWORD *v12; // x27
  __int128 v13; // q0
  __int128 v14; // q0
  __int128 v15; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+60h] [xbp-70h]

  if ( (byte_4C2801B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2801B = 1;
  }
  result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
  if ( !result )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Count__);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v18, 0, 0);
  v19 = v18;
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
                                                                     (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Item__);
      if ( result )
      {
        v9 = *(_QWORD *)&result->fields.inited;
        if ( !v9 )
          break;
        v10 = *(_QWORD *)(v9 + 24);
        if ( (int)v10 >= 1 )
        {
          v11 = 0;
          v12 = (_OWORD *)(v9 + 32);
          do
          {
            if ( v11 >= (unsigned int)v10 )
              sub_1C2D6F4(result, method, v8);
            v13 = v12[1];
            *(_OWORD *)&v18.fields.currentCryptoKey = *v12;
            *(_OWORD *)&v18.fields.fakeValue = v13;
            v14 = v12[1];
            *(_OWORD *)&v17.fields.currentCryptoKey = *v12;
            *(_OWORD *)&v17.fields.fakeValue = v14;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v16 = v17;
            result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                                           &v16,
                                                                           0);
            if ( ((unsigned __int64)result & 0x8000000000000000LL) == 0 )
              v19 = v18;
            LODWORD(v10) = *(_DWORD *)(v9 + 24);
            ++v11;
            v12 += 2;
          }
          while ( (__int64)v11 < (int)v10 );
        }
      }
      if ( ++v7 == Count )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C2D6EC(result, method);
  }
LABEL_20:
  v15 = *(_OWORD *)&v19.fields.fakeValue;
  *(_OWORD *)&retstr->fields.currentCryptoKey = *(_OWORD *)&v19.fields.currentCryptoKey;
  *(_OWORD *)&retstr->fields.fakeValue = v15;
  return result;
}