void __fastcall ServantLimitUpVoiceCache___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Dictionary_int__int__o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Collections_Generic_Dictionary_int__int__o *v12; // x19
  struct ServantLimitUpVoiceCache_StaticFields *static_fields; // x0

  if ( (byte_4B11013 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4, v5);
    sub_1BCA7E0(&ServantLimitUpVoiceCache_TypeInfo, v6, v7);
    byte_4B11013 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                              System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                              v1,
                                                              v2,
                                                              v3);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v8,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  ServantLimitUpVoiceCache_TypeInfo->static_fields->materialLimitUpVoiceFlagDic = v8;
  sub_1BCA784(ServantLimitUpVoiceCache_TypeInfo->static_fields, v8);
  v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v12,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  static_fields = ServantLimitUpVoiceCache_TypeInfo->static_fields;
  static_fields->detailLimitUpVoiceFlagDic = v12;
  sub_1BCA784(&static_fields->detailLimitUpVoiceFlagDic, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(
        int32_t type,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ServantLimitUpVoiceCache_c *v11; // x0
  System_Collections_Generic_Dictionary_int__int__o *materialLimitUpVoiceFlagDic; // x0
  ServantLimitUpVoiceCache_c *v13; // x0
  ServantLimitUpVoiceCache_c *v14; // x0
  ServantLimitUpVoiceCache_c *v15; // x0
  int32_t Item; // w20
  int32_t v17; // w0
  ServantLimitUpVoiceCache_c *v18; // x8
  int32_t v19; // w0
  ServantLimitUpVoiceCache_c *v20; // x8

  if ( (byte_4B11011 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&servantId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7, v8);
    sub_1BCA7E0(&ServantLimitUpVoiceCache_TypeInfo, v9, v10);
    byte_4B11011 = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      Item = 0;
      return Item == 0;
    }
    v11 = ServantLimitUpVoiceCache_TypeInfo;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId);
      v11 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v11->static_fields->materialLimitUpVoiceFlagDic;
    if ( !materialLimitUpVoiceFlagDic )
      goto LABEL_25;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           materialLimitUpVoiceFlagDic,
           servantId,
           (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      v13 = ServantLimitUpVoiceCache_TypeInfo;
      if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId);
        v13 = ServantLimitUpVoiceCache_TypeInfo;
      }
      materialLimitUpVoiceFlagDic = v13->static_fields->materialLimitUpVoiceFlagDic;
      if ( !materialLimitUpVoiceFlagDic )
        goto LABEL_25;
      goto LABEL_20;
    }
    v17 = UnityEngine_Random__Range_70113984(0, 2, 0LL);
    v18 = ServantLimitUpVoiceCache_TypeInfo;
    Item = v17;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId);
      v18 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v18->static_fields->materialLimitUpVoiceFlagDic;
    if ( !materialLimitUpVoiceFlagDic )
LABEL_25:
      sub_1BCAA3C(materialLimitUpVoiceFlagDic, *(_QWORD *)&servantId);
LABEL_29:
    System_Collections_Generic_Dictionary_int__int___Add(
      materialLimitUpVoiceFlagDic,
      servantId,
      Item,
      (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    return Item == 0;
  }
  v14 = ServantLimitUpVoiceCache_TypeInfo;
  if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId);
    v14 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v14->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          materialLimitUpVoiceFlagDic,
          servantId,
          (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    v19 = UnityEngine_Random__Range_70113984(0, 2, 0LL);
    v20 = ServantLimitUpVoiceCache_TypeInfo;
    Item = v19;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId);
      v20 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v20->static_fields->detailLimitUpVoiceFlagDic;
    if ( !materialLimitUpVoiceFlagDic )
      goto LABEL_25;
    goto LABEL_29;
  }
  v15 = ServantLimitUpVoiceCache_TypeInfo;
  if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId);
    v15 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v15->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_25;
LABEL_20:
  Item = System_Collections_Generic_Dictionary_int__int___get_Item(
           materialLimitUpVoiceFlagDic,
           servantId,
           (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  return Item == 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLimitUpVoiceCache__UpdateLimitUpVoice(int32_t type, int32_t servantId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ServantLimitUpVoiceCache_c *v13; // x0
  System_Collections_Generic_Dictionary_int__int__o *detailLimitUpVoiceFlagDic; // x0
  ServantLimitUpVoiceCache_c *v15; // x8
  char v16; // w21
  System_Collections_Generic_Dictionary_int__int__o *materialLimitUpVoiceFlagDic; // x20
  _BOOL4 v18; // w2
  ServantLimitUpVoiceCache_c *v19; // x0
  ServantLimitUpVoiceCache_c *v20; // x8
  char v21; // w21

  if ( (byte_4B11012 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&servantId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v9, v10);
    sub_1BCA7E0(&ServantLimitUpVoiceCache_TypeInfo, v11, v12);
    byte_4B11012 = 1;
  }
  if ( type == 2 )
  {
    v19 = ServantLimitUpVoiceCache_TypeInfo;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId);
      v19 = ServantLimitUpVoiceCache_TypeInfo;
    }
    detailLimitUpVoiceFlagDic = v19->static_fields->detailLimitUpVoiceFlagDic;
    if ( !detailLimitUpVoiceFlagDic )
      goto LABEL_22;
    detailLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                                                       detailLimitUpVoiceFlagDic,
                                                                                       servantId,
                                                                                       (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    v20 = ServantLimitUpVoiceCache_TypeInfo;
    v21 = (char)detailLimitUpVoiceFlagDic;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      detailLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)j_il2cpp_runtime_class_init_0(
                                                                                         ServantLimitUpVoiceCache_TypeInfo,
                                                                                         *(_QWORD *)&servantId);
      v20 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v20->static_fields->detailLimitUpVoiceFlagDic;
    if ( (v21 & 1) != 0 )
    {
LABEL_11:
      if ( materialLimitUpVoiceFlagDic )
      {
        v18 = System_Collections_Generic_Dictionary_int__int___get_Item(
                materialLimitUpVoiceFlagDic,
                servantId,
                (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == 0;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          materialLimitUpVoiceFlagDic,
          servantId,
          v18,
          (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        return;
      }
LABEL_22:
      sub_1BCAA3C(detailLimitUpVoiceFlagDic, *(_QWORD *)&servantId);
    }
  }
  else
  {
    if ( type != 1 )
      return;
    v13 = ServantLimitUpVoiceCache_TypeInfo;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId);
      v13 = ServantLimitUpVoiceCache_TypeInfo;
    }
    detailLimitUpVoiceFlagDic = v13->static_fields->materialLimitUpVoiceFlagDic;
    if ( !detailLimitUpVoiceFlagDic )
      goto LABEL_22;
    detailLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                                                       detailLimitUpVoiceFlagDic,
                                                                                       servantId,
                                                                                       (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    v15 = ServantLimitUpVoiceCache_TypeInfo;
    v16 = (char)detailLimitUpVoiceFlagDic;
    if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      detailLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)j_il2cpp_runtime_class_init_0(
                                                                                         ServantLimitUpVoiceCache_TypeInfo,
                                                                                         *(_QWORD *)&servantId);
      v15 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v15->static_fields->materialLimitUpVoiceFlagDic;
    if ( (v16 & 1) != 0 )
      goto LABEL_11;
  }
  detailLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Random__Range_70113984(
                                                                                     0,
                                                                                     2,
                                                                                     0LL);
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_int__int___Add(
    materialLimitUpVoiceFlagDic,
    servantId,
    (int32_t)detailLimitUpVoiceFlagDic,
    (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
}