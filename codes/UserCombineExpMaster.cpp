void UserCombineExpMaster___ctor(UserCombineExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939468 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
    byte_5939468 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    313,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *UserCombineExpMaster__GetUserSvtId(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__return_ptr retstr,
        UserCombineExpMaster_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *result; // x0
  __int64 v6; // x1
  int32_t Count; // w21
  int32_t v8; // w22
  __int64 v9; // x25
  __int64 v10; // x8
  unsigned __int64 v11; // x26
  _OWORD *v12; // x27
  __int128 v13; // q1
  int v14; // w8
  __int128 v15; // q0
  __int128 v16; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_5939469 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5939469 = 1;
  }
  result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
  memset(&v19, 0, sizeof(v19));
  memset(&v20, 0, sizeof(v20));
  if ( !result )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Count__);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v20, 0, 0);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
      if ( !result )
        break;
      result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)result,
                                                                     v8,
                                                                     (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserCombineExpEntity__get_Item__);
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
              sub_21FFED4(result);
            v13 = v12[1];
            v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v19.fields.currentCryptoKey = *v12;
            *(_OWORD *)&v19.fields.fakeValue = v13;
            v15 = v12[1];
            *(_OWORD *)&v18.fields.currentCryptoKey = *v12;
            *(_OWORD *)&v18.fields.fakeValue = v15;
            if ( !v14 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
            v17 = v18;
            result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                                           &v17,
                                                                           0);
            if ( ((unsigned __int64)result & 0x8000000000000000LL) == 0 )
              v20 = v19;
            LODWORD(v10) = *(_DWORD *)(v9 + 24);
            ++v11;
            v12 += 2;
          }
          while ( (__int64)v11 < (int)v10 );
        }
      }
      if ( ++v8 == Count )
        goto LABEL_20;
    }
LABEL_22:
    sub_21FFECC(result, method);
  }
LABEL_20:
  v16 = *(_OWORD *)&v20.fields.fakeValue;
  *(_OWORD *)&retstr->fields.currentCryptoKey = *(_OWORD *)&v20.fields.currentCryptoKey;
  *(_OWORD *)&retstr->fields.fakeValue = v16;
  return result;
}