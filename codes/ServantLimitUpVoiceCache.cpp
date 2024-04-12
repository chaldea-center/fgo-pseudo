void __fastcall ServantLimitUpVoiceCache___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Collections_Generic_Dictionary_int__int__o *v9; // x19
  struct ServantLimitUpVoiceCache_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B24FA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&ServantLimitUpVoiceCache_TypeInfo);
    byte_42B24FA = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v1,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  static_fields = (BattleServantConfConponent_o *)ServantLimitUpVoiceCache_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v9,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v10 = ServantLimitUpVoiceCache_TypeInfo->static_fields;
  v10->detailLimitUpVoiceFlagDic = v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&v10->detailLimitUpVoiceFlagDic,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(
        int32_t type,
        int32_t servantId,
        const MethodInfo *method)
{
  ServantLimitUpVoiceCache_c *v5; // x0
  System_Collections_Generic_Dictionary_int__int__o *materialLimitUpVoiceFlagDic; // x0
  ServantLimitUpVoiceCache_c *v7; // x0
  ServantLimitUpVoiceCache_c *v8; // x0
  ServantLimitUpVoiceCache_c *v9; // x0
  int32_t Item; // w20
  int32_t v11; // w0
  ServantLimitUpVoiceCache_c *v12; // x8
  int32_t v14; // w0
  ServantLimitUpVoiceCache_c *v15; // x8

  if ( (byte_42B24F8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B52984(&ServantLimitUpVoiceCache_TypeInfo);
    byte_42B24F8 = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      Item = 0;
      return Item == 0;
    }
    v5 = ServantLimitUpVoiceCache_TypeInfo;
    if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v5 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v5->static_fields->materialLimitUpVoiceFlagDic;
    if ( materialLimitUpVoiceFlagDic )
    {
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             materialLimitUpVoiceFlagDic,
             servantId,
             (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v7 = ServantLimitUpVoiceCache_TypeInfo;
        if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
          v7 = ServantLimitUpVoiceCache_TypeInfo;
        }
        materialLimitUpVoiceFlagDic = v7->static_fields->materialLimitUpVoiceFlagDic;
        if ( !materialLimitUpVoiceFlagDic )
          goto LABEL_36;
        goto LABEL_24;
      }
      v11 = UnityEngine_Random__Range_35650740(0, 2, 0LL);
      v12 = ServantLimitUpVoiceCache_TypeInfo;
      Item = v11;
      if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        v12 = ServantLimitUpVoiceCache_TypeInfo;
      }
      materialLimitUpVoiceFlagDic = v12->static_fields->materialLimitUpVoiceFlagDic;
      if ( materialLimitUpVoiceFlagDic )
      {
LABEL_30:
        System_Collections_Generic_Dictionary_int__int___Add(
          materialLimitUpVoiceFlagDic,
          servantId,
          Item,
          (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        return Item == 0;
      }
    }
LABEL_36:
    sub_B52A5C(materialLimitUpVoiceFlagDic, *(_QWORD *)&servantId);
  }
  v8 = ServantLimitUpVoiceCache_TypeInfo;
  if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v8 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v8->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_36;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          materialLimitUpVoiceFlagDic,
          servantId,
          (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    v14 = UnityEngine_Random__Range_35650740(0, 2, 0LL);
    v15 = ServantLimitUpVoiceCache_TypeInfo;
    Item = v14;
    if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v15 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v15->static_fields->detailLimitUpVoiceFlagDic;
    if ( materialLimitUpVoiceFlagDic )
      goto LABEL_30;
    goto LABEL_36;
  }
  v9 = ServantLimitUpVoiceCache_TypeInfo;
  if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v9 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v9->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_36;
LABEL_24:
  Item = System_Collections_Generic_Dictionary_int__int___get_Item(
           materialLimitUpVoiceFlagDic,
           servantId,
           (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  return Item == 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLimitUpVoiceCache__UpdateLimitUpVoice(int32_t type, int32_t servantId, const MethodInfo *method)
{
  ServantLimitUpVoiceCache_c *v5; // x0
  System_Collections_Generic_Dictionary_int__int__o *materialLimitUpVoiceFlagDic; // x0
  ServantLimitUpVoiceCache_c *v7; // x8
  System_Collections_Generic_Dictionary_int__int__o *detailLimitUpVoiceFlagDic; // x20
  ServantLimitUpVoiceCache_c *v9; // x0
  ServantLimitUpVoiceCache_c *v10; // x8
  _BOOL4 v11; // w2
  System_Collections_Generic_Dictionary_int__int__o *v12; // x20

  if ( (byte_42B24F9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_B52984(&ServantLimitUpVoiceCache_TypeInfo);
    byte_42B24F9 = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
      return;
    v5 = ServantLimitUpVoiceCache_TypeInfo;
    if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v5 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v5->static_fields->materialLimitUpVoiceFlagDic;
    if ( materialLimitUpVoiceFlagDic )
    {
      materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                                                           materialLimitUpVoiceFlagDic,
                                                                                           servantId,
                                                                                           (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
      v7 = ServantLimitUpVoiceCache_TypeInfo;
      if ( ((unsigned __int8)materialLimitUpVoiceFlagDic & 1) != 0 )
      {
        if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
          v7 = ServantLimitUpVoiceCache_TypeInfo;
        }
        detailLimitUpVoiceFlagDic = v7->static_fields->materialLimitUpVoiceFlagDic;
        if ( !detailLimitUpVoiceFlagDic )
          goto LABEL_36;
        goto LABEL_24;
      }
      if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        v7 = ServantLimitUpVoiceCache_TypeInfo;
      }
      v12 = v7->static_fields->materialLimitUpVoiceFlagDic;
      goto LABEL_34;
    }
LABEL_36:
    sub_B52A5C(materialLimitUpVoiceFlagDic, *(_QWORD *)&servantId);
  }
  v9 = ServantLimitUpVoiceCache_TypeInfo;
  if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v9 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v9->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_36;
  materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                                                       materialLimitUpVoiceFlagDic,
                                                                                       servantId,
                                                                                       (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
  v10 = ServantLimitUpVoiceCache_TypeInfo;
  if ( ((unsigned __int8)materialLimitUpVoiceFlagDic & 1) != 0 )
  {
    if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v10 = ServantLimitUpVoiceCache_TypeInfo;
    }
    detailLimitUpVoiceFlagDic = v10->static_fields->detailLimitUpVoiceFlagDic;
    if ( detailLimitUpVoiceFlagDic )
    {
LABEL_24:
      v11 = System_Collections_Generic_Dictionary_int__int___get_Item(
              detailLimitUpVoiceFlagDic,
              servantId,
              (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == 0;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        detailLimitUpVoiceFlagDic,
        servantId,
        v11,
        (const MethodInfo_2EFFA74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      return;
    }
    goto LABEL_36;
  }
  if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v10 = ServantLimitUpVoiceCache_TypeInfo;
  }
  v12 = v10->static_fields->detailLimitUpVoiceFlagDic;
LABEL_34:
  materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Random__Range_35650740(
                                                                                       0,
                                                                                       2,
                                                                                       0LL);
  if ( !v12 )
    goto LABEL_36;
  System_Collections_Generic_Dictionary_int__int___Add(
    v12,
    servantId,
    (int32_t)materialLimitUpVoiceFlagDic,
    (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
}