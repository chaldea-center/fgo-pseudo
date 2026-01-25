void ServantLimitUpVoiceCache___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v1; // x19
  System_Collections_Generic_Dictionary_int__int__o *v2; // x19
  struct ServantLimitUpVoiceCache_StaticFields *static_fields; // x0

  if ( (byte_4CE8D9F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C7BAE8(&ServantLimitUpVoiceCache_TypeInfo);
    byte_4CE8D9F = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v1,
    (const MethodInfo_347E294 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  ServantLimitUpVoiceCache_TypeInfo->static_fields->materialLimitUpVoiceFlagDic = v1;
  sub_1C7BA8C(ServantLimitUpVoiceCache_TypeInfo->static_fields, v1);
  v2 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v2,
    (const MethodInfo_347E294 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  static_fields = ServantLimitUpVoiceCache_TypeInfo->static_fields;
  static_fields->detailLimitUpVoiceFlagDic = v2;
  sub_1C7BA8C(&static_fields->detailLimitUpVoiceFlagDic, v2);
}


// local variable allocation has failed, the output may be wrong!
bool ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(int32_t type, int32_t servantId, const MethodInfo *method)
{
  ServantLimitUpVoiceCache_c *v5; // x0
  System_Collections_Generic_Dictionary_int__int__o *materialLimitUpVoiceFlagDic; // x0
  ServantLimitUpVoiceCache_c *v7; // x0
  ServantLimitUpVoiceCache_c *v8; // x0
  ServantLimitUpVoiceCache_c *v9; // x0
  int32_t Item; // w20
  int32_t v11; // w0
  ServantLimitUpVoiceCache_c *v12; // x8
  int32_t v13; // w0
  ServantLimitUpVoiceCache_c *v14; // x8

  if ( (byte_4CE8D9D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C7BAE8(&ServantLimitUpVoiceCache_TypeInfo);
    byte_4CE8D9D = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      Item = 0;
      return Item == 0;
    }
    v5 = ServantLimitUpVoiceCache_TypeInfo;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v5 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v5->static_fields->materialLimitUpVoiceFlagDic;
    if ( !materialLimitUpVoiceFlagDic )
      goto LABEL_25;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           materialLimitUpVoiceFlagDic,
           servantId,
           (const MethodInfo_347EE44 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      v7 = ServantLimitUpVoiceCache_TypeInfo;
      if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        v7 = ServantLimitUpVoiceCache_TypeInfo;
      }
      materialLimitUpVoiceFlagDic = v7->static_fields->materialLimitUpVoiceFlagDic;
      if ( !materialLimitUpVoiceFlagDic )
        goto LABEL_25;
      goto LABEL_20;
    }
    v11 = UnityEngine_Random__Range_71829860(0, 2, 0);
    v12 = ServantLimitUpVoiceCache_TypeInfo;
    Item = v11;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v12 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v12->static_fields->materialLimitUpVoiceFlagDic;
    if ( !materialLimitUpVoiceFlagDic )
LABEL_25:
      sub_1C7BD40(materialLimitUpVoiceFlagDic, *(_QWORD *)&servantId);
LABEL_29:
    System_Collections_Generic_Dictionary_int__int___Add(
      materialLimitUpVoiceFlagDic,
      servantId,
      Item,
      (const MethodInfo_347EC58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    return Item == 0;
  }
  v8 = ServantLimitUpVoiceCache_TypeInfo;
  if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v8 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v8->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          materialLimitUpVoiceFlagDic,
          servantId,
          (const MethodInfo_347EE44 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    v13 = UnityEngine_Random__Range_71829860(0, 2, 0);
    v14 = ServantLimitUpVoiceCache_TypeInfo;
    Item = v13;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v14 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v14->static_fields->detailLimitUpVoiceFlagDic;
    if ( !materialLimitUpVoiceFlagDic )
      goto LABEL_25;
    goto LABEL_29;
  }
  v9 = ServantLimitUpVoiceCache_TypeInfo;
  if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v9 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v9->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_25;
LABEL_20:
  Item = System_Collections_Generic_Dictionary_int__int___get_Item(
           materialLimitUpVoiceFlagDic,
           servantId,
           (const MethodInfo_347EBBC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  return Item == 0;
}


// local variable allocation has failed, the output may be wrong!
void ServantLimitUpVoiceCache__UpdateLimitUpVoice(int32_t type, int32_t servantId, const MethodInfo *method)
{
  ServantLimitUpVoiceCache_c *v5; // x0
  System_Collections_Generic_Dictionary_int__int__o *detailLimitUpVoiceFlagDic; // x0
  ServantLimitUpVoiceCache_c *v7; // x8
  char v8; // w21
  System_Collections_Generic_Dictionary_int__int__o *materialLimitUpVoiceFlagDic; // x20
  int32_t v10; // w2
  ServantLimitUpVoiceCache_c *v11; // x0
  ServantLimitUpVoiceCache_c *v12; // x8
  char v13; // w21

  if ( (byte_4CE8D9E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C7BAE8(&ServantLimitUpVoiceCache_TypeInfo);
    byte_4CE8D9E = 1;
  }
  if ( type == 2 )
  {
    v11 = ServantLimitUpVoiceCache_TypeInfo;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v11 = ServantLimitUpVoiceCache_TypeInfo;
    }
    detailLimitUpVoiceFlagDic = v11->static_fields->detailLimitUpVoiceFlagDic;
    if ( !detailLimitUpVoiceFlagDic )
      goto LABEL_22;
    detailLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                                                       detailLimitUpVoiceFlagDic,
                                                                                       servantId,
                                                                                       (const MethodInfo_347EE44 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    v12 = ServantLimitUpVoiceCache_TypeInfo;
    v13 = (char)detailLimitUpVoiceFlagDic;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v12 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v12->static_fields->detailLimitUpVoiceFlagDic;
    if ( (v13 & 1) != 0 )
    {
LABEL_11:
      if ( materialLimitUpVoiceFlagDic )
      {
        v10 = System_Collections_Generic_Dictionary_int__int___get_Item(
                materialLimitUpVoiceFlagDic,
                servantId,
                (const MethodInfo_347EBBC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == 0;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          materialLimitUpVoiceFlagDic,
          servantId,
          v10,
          (const MethodInfo_347EC44 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        return;
      }
LABEL_22:
      sub_1C7BD40(detailLimitUpVoiceFlagDic, *(_QWORD *)&servantId);
    }
  }
  else
  {
    if ( type != 1 )
      return;
    v5 = ServantLimitUpVoiceCache_TypeInfo;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v5 = ServantLimitUpVoiceCache_TypeInfo;
    }
    detailLimitUpVoiceFlagDic = v5->static_fields->materialLimitUpVoiceFlagDic;
    if ( !detailLimitUpVoiceFlagDic )
      goto LABEL_22;
    detailLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                                                       detailLimitUpVoiceFlagDic,
                                                                                       servantId,
                                                                                       (const MethodInfo_347EE44 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    v7 = ServantLimitUpVoiceCache_TypeInfo;
    v8 = (char)detailLimitUpVoiceFlagDic;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v7 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v7->static_fields->materialLimitUpVoiceFlagDic;
    if ( (v8 & 1) != 0 )
      goto LABEL_11;
  }
  detailLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Random__Range_71829860(
                                                                                     0,
                                                                                     2,
                                                                                     0);
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_int__int___Add(
    materialLimitUpVoiceFlagDic,
    servantId,
    (int32_t)detailLimitUpVoiceFlagDic,
    (const MethodInfo_347EC58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
}