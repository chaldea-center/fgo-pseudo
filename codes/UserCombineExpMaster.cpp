void __fastcall UserCombineExpMaster___ctor(UserCombineExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E326D & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__, method);
    byte_48E326D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    304,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
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
  __int64 methodPtr_low; // x10
  __int64 v12; // x26
  __int64 v13; // x8
  unsigned __int64 v14; // x27
  _OWORD *v15; // x28
  __int128 v16; // q0
  __int128 v17; // q0
  __int128 v18; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+60h] [xbp-80h]

  if ( (byte_48E326E & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1B00CCC(&UserCombineExpEntity_TypeInfo, v7);
    byte_48E326E = 1;
  }
  result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
  if ( !result )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v21, 0LL, 0LL);
  v22 = v21;
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
                                                                     (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(UserCombineExpEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(result->fields.currentCryptoKey + 304) >= (unsigned int)methodPtr_low
          && *(UserCombineExpEntity_c **)(*(_QWORD *)(result->fields.currentCryptoKey + 200) + 8 * methodPtr_low - 8) == UserCombineExpEntity_TypeInfo )
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
                sub_1B00F30(result, method);
              v16 = v15[1];
              *(_OWORD *)&v21.fields.currentCryptoKey = *v15;
              *(_OWORD *)&v21.fields.fakeValue = v16;
              v17 = v15[1];
              *(_OWORD *)&v20.fields.currentCryptoKey = *v15;
              *(_OWORD *)&v20.fields.fakeValue = v17;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v19 = v20;
              result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(
                                                                             &v19,
                                                                             0LL);
              if ( ((unsigned __int64)result & 0x8000000000000000LL) == 0 )
                v22 = v21;
              LODWORD(v13) = *(_DWORD *)(v12 + 24);
              ++v14;
              v15 += 2;
            }
            while ( (__int64)v14 < (int)v13 );
          }
        }
      }
      if ( ++v10 == Count )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B00F28(result, method);
  }
LABEL_22:
  v18 = *(_OWORD *)&v22.fields.fakeValue;
  *(_OWORD *)&retstr->fields.currentCryptoKey = *(_OWORD *)&v22.fields.currentCryptoKey;
  *(_OWORD *)&retstr->fields.fakeValue = v18;
  return result;
}