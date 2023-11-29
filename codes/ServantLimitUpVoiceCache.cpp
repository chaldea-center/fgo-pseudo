void __fastcall ServantLimitUpVoiceCache___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__int__o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_Dictionary_int__int__o *v19; // x19
  struct ServantLimitUpVoiceCache_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FC81B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5);
    sub_B16FFC(&ServantLimitUpVoiceCache_TypeInfo, v6);
    byte_40FC81B = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                              System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                              v1,
                                                              v2,
                                                              v3,
                                                              v4);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  static_fields = (BattleServantConfConponent_o *)ServantLimitUpVoiceCache_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  v19 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v15,
                                                               v16,
                                                               v17,
                                                               v18);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v19,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v20 = ServantLimitUpVoiceCache_TypeInfo->static_fields;
  v20->detailLimitUpVoiceFlagDic = v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v20->detailLimitUpVoiceFlagDic,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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
  System_Collections_Generic_Dictionary_int__int__o *v11; // x0
  ServantLimitUpVoiceCache_c *v12; // x0
  System_Collections_Generic_Dictionary_int__int__o *detailLimitUpVoiceFlagDic; // x0
  ServantLimitUpVoiceCache_c *v14; // x0
  int32_t Item; // w20
  int32_t v16; // w0
  ServantLimitUpVoiceCache_c *v17; // x8
  System_Collections_Generic_Dictionary_int__int__o *v18; // x0
  int32_t v20; // w0
  ServantLimitUpVoiceCache_c *v21; // x8

  if ( (byte_40FC819 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&servantId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v6);
    sub_B16FFC(&ServantLimitUpVoiceCache_TypeInfo, v7);
    byte_40FC819 = 1;
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
             (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v10 = ServantLimitUpVoiceCache_TypeInfo;
        if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
          v10 = ServantLimitUpVoiceCache_TypeInfo;
        }
        v11 = v10->static_fields->materialLimitUpVoiceFlagDic;
        if ( !v11 )
          goto LABEL_36;
        goto LABEL_24;
      }
      v16 = UnityEngine_Random__Range_34843248(0, 2, 0LL);
      v17 = ServantLimitUpVoiceCache_TypeInfo;
      Item = v16;
      if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        v17 = ServantLimitUpVoiceCache_TypeInfo;
      }
      v18 = v17->static_fields->materialLimitUpVoiceFlagDic;
      if ( v18 )
      {
LABEL_30:
        System_Collections_Generic_Dictionary_int__int___Add(
          v18,
          servantId,
          Item,
          (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        return Item == 0;
      }
    }
LABEL_36:
    sub_B170D4();
  }
  v12 = ServantLimitUpVoiceCache_TypeInfo;
  if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v12 = ServantLimitUpVoiceCache_TypeInfo;
  }
  detailLimitUpVoiceFlagDic = v12->static_fields->detailLimitUpVoiceFlagDic;
  if ( !detailLimitUpVoiceFlagDic )
    goto LABEL_36;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          detailLimitUpVoiceFlagDic,
          servantId,
          (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    v20 = UnityEngine_Random__Range_34843248(0, 2, 0LL);
    v21 = ServantLimitUpVoiceCache_TypeInfo;
    Item = v20;
    if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v21 = ServantLimitUpVoiceCache_TypeInfo;
    }
    v18 = v21->static_fields->detailLimitUpVoiceFlagDic;
    if ( v18 )
      goto LABEL_30;
    goto LABEL_36;
  }
  v14 = ServantLimitUpVoiceCache_TypeInfo;
  if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v14 = ServantLimitUpVoiceCache_TypeInfo;
  }
  v11 = v14->static_fields->detailLimitUpVoiceFlagDic;
  if ( !v11 )
    goto LABEL_36;
LABEL_24:
  Item = System_Collections_Generic_Dictionary_int__int___get_Item(
           v11,
           servantId,
           (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
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
  bool v11; // w0
  ServantLimitUpVoiceCache_c *v12; // x8
  System_Collections_Generic_Dictionary_int__int__o *v13; // x20
  ServantLimitUpVoiceCache_c *v14; // x0
  System_Collections_Generic_Dictionary_int__int__o *detailLimitUpVoiceFlagDic; // x0
  bool v16; // w0
  ServantLimitUpVoiceCache_c *v17; // x8
  _BOOL4 v18; // w2
  System_Collections_Generic_Dictionary_int__int__o *v19; // x20
  int32_t v20; // w0

  if ( (byte_40FC81A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&servantId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v7);
    sub_B16FFC(&ServantLimitUpVoiceCache_TypeInfo, v8);
    byte_40FC81A = 1;
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
      v11 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
              materialLimitUpVoiceFlagDic,
              servantId,
              (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
      v12 = ServantLimitUpVoiceCache_TypeInfo;
      if ( v11 )
      {
        if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
          v12 = ServantLimitUpVoiceCache_TypeInfo;
        }
        v13 = v12->static_fields->materialLimitUpVoiceFlagDic;
        if ( !v13 )
          goto LABEL_36;
        goto LABEL_24;
      }
      if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        v12 = ServantLimitUpVoiceCache_TypeInfo;
      }
      v19 = v12->static_fields->materialLimitUpVoiceFlagDic;
      goto LABEL_34;
    }
LABEL_36:
    sub_B170D4();
  }
  v14 = ServantLimitUpVoiceCache_TypeInfo;
  if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v14 = ServantLimitUpVoiceCache_TypeInfo;
  }
  detailLimitUpVoiceFlagDic = v14->static_fields->detailLimitUpVoiceFlagDic;
  if ( !detailLimitUpVoiceFlagDic )
    goto LABEL_36;
  v16 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
          detailLimitUpVoiceFlagDic,
          servantId,
          (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
  v17 = ServantLimitUpVoiceCache_TypeInfo;
  if ( v16 )
  {
    if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v17 = ServantLimitUpVoiceCache_TypeInfo;
    }
    v13 = v17->static_fields->detailLimitUpVoiceFlagDic;
    if ( v13 )
    {
LABEL_24:
      v18 = System_Collections_Generic_Dictionary_int__int___get_Item(
              v13,
              servantId,
              (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == 0;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v13,
        servantId,
        v18,
        (const MethodInfo_2DDCF8C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      return;
    }
    goto LABEL_36;
  }
  if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v17 = ServantLimitUpVoiceCache_TypeInfo;
  }
  v19 = v17->static_fields->detailLimitUpVoiceFlagDic;
LABEL_34:
  v20 = UnityEngine_Random__Range_34843248(0, 2, 0LL);
  if ( !v19 )
    goto LABEL_36;
  System_Collections_Generic_Dictionary_int__int___Add(
    v19,
    servantId,
    v20,
    (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
}