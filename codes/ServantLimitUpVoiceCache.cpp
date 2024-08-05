void __fastcall ServantLimitUpVoiceCache___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__int__o *v4; // x19
  System_Collections_Generic_Dictionary_int__int__o *v5; // x19
  struct ServantLimitUpVoiceCache_StaticFields *static_fields; // x0

  if ( (byte_49F97E0 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v1);
    sub_1B64870(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v2);
    sub_1B64870(&ServantLimitUpVoiceCache_TypeInfo, v3);
    byte_49F97E0 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v4,
    (const MethodInfo_311C7CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  ServantLimitUpVoiceCache_TypeInfo->static_fields->materialLimitUpVoiceFlagDic = v4;
  sub_1B64814(ServantLimitUpVoiceCache_TypeInfo->static_fields);
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_311C7CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  static_fields = ServantLimitUpVoiceCache_TypeInfo->static_fields;
  static_fields->detailLimitUpVoiceFlagDic = v5;
  sub_1B64814(&static_fields->detailLimitUpVoiceFlagDic);
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
  int32_t v16; // w0
  ServantLimitUpVoiceCache_c *v17; // x8

  if ( (byte_49F97DE & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&servantId);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v5);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v6);
    sub_1B64870(&ServantLimitUpVoiceCache_TypeInfo, v7);
    byte_49F97DE = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      Item = 0;
      return Item == 0;
    }
    v8 = ServantLimitUpVoiceCache_TypeInfo;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v8 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v8->static_fields->materialLimitUpVoiceFlagDic;
    if ( !materialLimitUpVoiceFlagDic )
      goto LABEL_25;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           materialLimitUpVoiceFlagDic,
           servantId,
           (const MethodInfo_311D37C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      v10 = ServantLimitUpVoiceCache_TypeInfo;
      if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        v10 = ServantLimitUpVoiceCache_TypeInfo;
      }
      materialLimitUpVoiceFlagDic = v10->static_fields->materialLimitUpVoiceFlagDic;
      if ( !materialLimitUpVoiceFlagDic )
        goto LABEL_25;
      goto LABEL_20;
    }
    v14 = UnityEngine_Random__Range_69095656(0, 2, 0LL);
    v15 = ServantLimitUpVoiceCache_TypeInfo;
    Item = v14;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v15 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v15->static_fields->materialLimitUpVoiceFlagDic;
    if ( !materialLimitUpVoiceFlagDic )
LABEL_25:
      sub_1B64ACC(materialLimitUpVoiceFlagDic, *(_QWORD *)&servantId);
LABEL_29:
    System_Collections_Generic_Dictionary_int__int___Add(
      materialLimitUpVoiceFlagDic,
      servantId,
      Item,
      (const MethodInfo_311D190 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    return Item == 0;
  }
  v11 = ServantLimitUpVoiceCache_TypeInfo;
  if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v11 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v11->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          materialLimitUpVoiceFlagDic,
          servantId,
          (const MethodInfo_311D37C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    v16 = UnityEngine_Random__Range_69095656(0, 2, 0LL);
    v17 = ServantLimitUpVoiceCache_TypeInfo;
    Item = v16;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v17 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v17->static_fields->detailLimitUpVoiceFlagDic;
    if ( !materialLimitUpVoiceFlagDic )
      goto LABEL_25;
    goto LABEL_29;
  }
  v12 = ServantLimitUpVoiceCache_TypeInfo;
  if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v12 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v12->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_25;
LABEL_20:
  Item = System_Collections_Generic_Dictionary_int__int___get_Item(
           materialLimitUpVoiceFlagDic,
           servantId,
           (const MethodInfo_311D0F4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
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
  System_Collections_Generic_Dictionary_int__int__o *detailLimitUpVoiceFlagDic; // x0
  ServantLimitUpVoiceCache_c *v11; // x8
  char v12; // w21
  System_Collections_Generic_Dictionary_int__int__o *materialLimitUpVoiceFlagDic; // x20
  _BOOL4 v14; // w2
  ServantLimitUpVoiceCache_c *v15; // x0
  ServantLimitUpVoiceCache_c *v16; // x8
  char v17; // w21

  if ( (byte_49F97DF & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&servantId);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v5);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v6);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v7);
    sub_1B64870(&ServantLimitUpVoiceCache_TypeInfo, v8);
    byte_49F97DF = 1;
  }
  if ( type == 2 )
  {
    v15 = ServantLimitUpVoiceCache_TypeInfo;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v15 = ServantLimitUpVoiceCache_TypeInfo;
    }
    detailLimitUpVoiceFlagDic = v15->static_fields->detailLimitUpVoiceFlagDic;
    if ( !detailLimitUpVoiceFlagDic )
      goto LABEL_22;
    detailLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                                                       detailLimitUpVoiceFlagDic,
                                                                                       servantId,
                                                                                       (const MethodInfo_311D37C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    v16 = ServantLimitUpVoiceCache_TypeInfo;
    v17 = (char)detailLimitUpVoiceFlagDic;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      detailLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v16 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v16->static_fields->detailLimitUpVoiceFlagDic;
    if ( (v17 & 1) != 0 )
    {
LABEL_11:
      if ( materialLimitUpVoiceFlagDic )
      {
        v14 = System_Collections_Generic_Dictionary_int__int___get_Item(
                materialLimitUpVoiceFlagDic,
                servantId,
                (const MethodInfo_311D0F4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == 0;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          materialLimitUpVoiceFlagDic,
          servantId,
          v14,
          (const MethodInfo_311D17C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        return;
      }
LABEL_22:
      sub_1B64ACC(detailLimitUpVoiceFlagDic, *(_QWORD *)&servantId);
    }
  }
  else
  {
    if ( type != 1 )
      return;
    v9 = ServantLimitUpVoiceCache_TypeInfo;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v9 = ServantLimitUpVoiceCache_TypeInfo;
    }
    detailLimitUpVoiceFlagDic = v9->static_fields->materialLimitUpVoiceFlagDic;
    if ( !detailLimitUpVoiceFlagDic )
      goto LABEL_22;
    detailLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                                                       detailLimitUpVoiceFlagDic,
                                                                                       servantId,
                                                                                       (const MethodInfo_311D37C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    v11 = ServantLimitUpVoiceCache_TypeInfo;
    v12 = (char)detailLimitUpVoiceFlagDic;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      detailLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v11 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v11->static_fields->materialLimitUpVoiceFlagDic;
    if ( (v12 & 1) != 0 )
      goto LABEL_11;
  }
  detailLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Random__Range_69095656(
                                                                                     0,
                                                                                     2,
                                                                                     0LL);
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_int__int___Add(
    materialLimitUpVoiceFlagDic,
    servantId,
    (int32_t)detailLimitUpVoiceFlagDic,
    (const MethodInfo_311D190 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
}