void __fastcall UserCombineExpMaster___ctor(UserCombineExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD23 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
    byte_4A5BD23 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    305,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserCombineExpMaster__UserCombineExpEntity__string___ctor__);
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__fastcall UserCombineExpMaster__GetUserSvtId(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *retstr,
        UserCombineExpMaster_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *result; // x0
  int32_t Count; // w21
  int32_t v7; // w22
  __int64 methodPtr_low; // x10
  __int64 v9; // x26
  __int64 v10; // x8
  unsigned __int64 v11; // x27
  _OWORD *v12; // x28
  __int128 v13; // q0
  __int128 v14; // q0
  __int128 v15; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-C0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+60h] [xbp-80h]

  if ( (byte_4A5BD24 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserCombineExpEntity_TypeInfo);
    byte_4A5BD24 = 1;
  }
  result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this->fields.list;
  if ( !result )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  result = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v18, 0LL, 0LL);
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
                                                                     (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(UserCombineExpEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(result->fields.currentCryptoKey + 304) >= (unsigned int)methodPtr_low
          && *(UserCombineExpEntity_c **)(*(_QWORD *)(result->fields.currentCryptoKey + 200) + 8 * methodPtr_low - 8) == UserCombineExpEntity_TypeInfo )
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
                sub_1B88814(result, method);
              v13 = v12[1];
              *(_OWORD *)&v18.fields.currentCryptoKey = *v12;
              *(_OWORD *)&v18.fields.fakeValue = v13;
              v14 = v12[1];
              *(_OWORD *)&v17.fields.currentCryptoKey = *v12;
              *(_OWORD *)&v17.fields.fakeValue = v14;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v16 = v17;
              result = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                                             &v16,
                                                                             0LL);
              if ( ((unsigned __int64)result & 0x8000000000000000LL) == 0 )
                v19 = v18;
              LODWORD(v10) = *(_DWORD *)(v9 + 24);
              ++v11;
              v12 += 2;
            }
            while ( (__int64)v11 < (int)v10 );
          }
        }
      }
      if ( ++v7 == Count )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B8880C(result, method);
  }
LABEL_22:
  v15 = *(_OWORD *)&v19.fields.fakeValue;
  *(_OWORD *)&retstr->fields.currentCryptoKey = *(_OWORD *)&v19.fields.currentCryptoKey;
  *(_OWORD *)&retstr->fields.fakeValue = v15;
  return result;
}