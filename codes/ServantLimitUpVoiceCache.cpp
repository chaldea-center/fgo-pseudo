void __fastcall ServantLimitUpVoiceCache___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__int__o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_Dictionary_int__int__o *v12; // x19
  struct ServantLimitUpVoiceCache_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418A03F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v2);
    sub_B2C35C(&ServantLimitUpVoiceCache_TypeInfo, v3);
    byte_418A03F = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v4,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  static_fields = (BattleServantConfConponent_o *)ServantLimitUpVoiceCache_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v12,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v13 = ServantLimitUpVoiceCache_TypeInfo->static_fields;
  v13->detailLimitUpVoiceFlagDic = v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v13->detailLimitUpVoiceFlagDic,
    (System_Int32_array **)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(
        int32_t type,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantLimitUpVoiceCache_c *v8; // x0
  System_Collections_Generic_Dictionary_int__int__o *materialLimitUpVoiceFlagDic; // x0
  ServantLimitUpVoiceCache_c *v10; // x0
  ServantLimitUpVoiceCache_c *v11; // x0
  ServantLimitUpVoiceCache_c *v12; // x0
  int32_t Item; // w20
  int32_t v14; // w0
  ServantLimitUpVoiceCache_c *v15; // x8
  int32_t v17; // w0
  ServantLimitUpVoiceCache_c *v18; // x8

  if ( (byte_418A03D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&servantId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v6);
    sub_B2C35C(&ServantLimitUpVoiceCache_TypeInfo, v7);
    byte_418A03D = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      Item = 0;
      return Item == 0;
    }
    v8 = ServantLimitUpVoiceCache_TypeInfo;
    if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v8 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v8->static_fields->materialLimitUpVoiceFlagDic;
    if ( materialLimitUpVoiceFlagDic )
    {
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             materialLimitUpVoiceFlagDic,
             servantId,
             (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v10 = ServantLimitUpVoiceCache_TypeInfo;
        if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
          v10 = ServantLimitUpVoiceCache_TypeInfo;
        }
        materialLimitUpVoiceFlagDic = v10->static_fields->materialLimitUpVoiceFlagDic;
        if ( !materialLimitUpVoiceFlagDic )
          goto LABEL_36;
        goto LABEL_24;
      }
      v14 = UnityEngine_Random__Range_35348680(0, 2, 0LL);
      v15 = ServantLimitUpVoiceCache_TypeInfo;
      Item = v14;
      if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        v15 = ServantLimitUpVoiceCache_TypeInfo;
      }
      materialLimitUpVoiceFlagDic = v15->static_fields->materialLimitUpVoiceFlagDic;
      if ( materialLimitUpVoiceFlagDic )
      {
LABEL_30:
        System_Collections_Generic_Dictionary_int__int___Add(
          materialLimitUpVoiceFlagDic,
          servantId,
          Item,
          (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        return Item == 0;
      }
    }
LABEL_36:
    sub_B2C434(materialLimitUpVoiceFlagDic, *(_QWORD *)&servantId);
  }
  v11 = ServantLimitUpVoiceCache_TypeInfo;
  if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v11 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v11->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_36;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          materialLimitUpVoiceFlagDic,
          servantId,
          (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    v17 = UnityEngine_Random__Range_35348680(0, 2, 0LL);
    v18 = ServantLimitUpVoiceCache_TypeInfo;
    Item = v17;
    if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v18 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v18->static_fields->detailLimitUpVoiceFlagDic;
    if ( materialLimitUpVoiceFlagDic )
      goto LABEL_30;
    goto LABEL_36;
  }
  v12 = ServantLimitUpVoiceCache_TypeInfo;
  if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v12 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v12->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_36;
LABEL_24:
  Item = System_Collections_Generic_Dictionary_int__int___get_Item(
           materialLimitUpVoiceFlagDic,
           servantId,
           (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  return Item == 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLimitUpVoiceCache__UpdateLimitUpVoice(int32_t type, int32_t servantId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantLimitUpVoiceCache_c *v9; // x0
  System_Collections_Generic_Dictionary_int__int__o *materialLimitUpVoiceFlagDic; // x0
  ServantLimitUpVoiceCache_c *v11; // x8
  System_Collections_Generic_Dictionary_int__int__o *detailLimitUpVoiceFlagDic; // x20
  ServantLimitUpVoiceCache_c *v13; // x0
  ServantLimitUpVoiceCache_c *v14; // x8
  _BOOL4 v15; // w2
  System_Collections_Generic_Dictionary_int__int__o *v16; // x20

  if ( (byte_418A03E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&servantId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v7);
    sub_B2C35C(&ServantLimitUpVoiceCache_TypeInfo, v8);
    byte_418A03E = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
      return;
    v9 = ServantLimitUpVoiceCache_TypeInfo;
    if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v9 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v9->static_fields->materialLimitUpVoiceFlagDic;
    if ( materialLimitUpVoiceFlagDic )
    {
      materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                                                           materialLimitUpVoiceFlagDic,
                                                                                           servantId,
                                                                                           (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
      v11 = ServantLimitUpVoiceCache_TypeInfo;
      if ( ((unsigned __int8)materialLimitUpVoiceFlagDic & 1) != 0 )
      {
        if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
          v11 = ServantLimitUpVoiceCache_TypeInfo;
        }
        detailLimitUpVoiceFlagDic = v11->static_fields->materialLimitUpVoiceFlagDic;
        if ( !detailLimitUpVoiceFlagDic )
          goto LABEL_36;
        goto LABEL_24;
      }
      if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        v11 = ServantLimitUpVoiceCache_TypeInfo;
      }
      v16 = v11->static_fields->materialLimitUpVoiceFlagDic;
      goto LABEL_34;
    }
LABEL_36:
    sub_B2C434(materialLimitUpVoiceFlagDic, *(_QWORD *)&servantId);
  }
  v13 = ServantLimitUpVoiceCache_TypeInfo;
  if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v13 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v13->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_36;
  materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                                                       materialLimitUpVoiceFlagDic,
                                                                                       servantId,
                                                                                       (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
  v14 = ServantLimitUpVoiceCache_TypeInfo;
  if ( ((unsigned __int8)materialLimitUpVoiceFlagDic & 1) != 0 )
  {
    if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v14 = ServantLimitUpVoiceCache_TypeInfo;
    }
    detailLimitUpVoiceFlagDic = v14->static_fields->detailLimitUpVoiceFlagDic;
    if ( detailLimitUpVoiceFlagDic )
    {
LABEL_24:
      v15 = System_Collections_Generic_Dictionary_int__int___get_Item(
              detailLimitUpVoiceFlagDic,
              servantId,
              (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == 0;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        detailLimitUpVoiceFlagDic,
        servantId,
        v15,
        (const MethodInfo_2E24518 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      return;
    }
    goto LABEL_36;
  }
  if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v14 = ServantLimitUpVoiceCache_TypeInfo;
  }
  v16 = v14->static_fields->detailLimitUpVoiceFlagDic;
LABEL_34:
  materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Random__Range_35348680(
                                                                                       0,
                                                                                       2,
                                                                                       0LL);
  if ( !v16 )
    goto LABEL_36;
  System_Collections_Generic_Dictionary_int__int___Add(
    v16,
    servantId,
    (int32_t)materialLimitUpVoiceFlagDic,
    (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
}