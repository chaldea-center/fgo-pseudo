void __fastcall ServantLimitUpVoiceCache___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_Dictionary_int__int__o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_Dictionary_int__int__o *v18; // x19
  struct ServantLimitUpVoiceCache_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42EAE57 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v1, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4, v5, v6);
    sub_B5D5C4(&ServantLimitUpVoiceCache_TypeInfo, v7, v8, v9);
    byte_42EAE57 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  static_fields = (BattleServantConfConponent_o *)ServantLimitUpVoiceCache_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v18,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v19 = ServantLimitUpVoiceCache_TypeInfo->static_fields;
  v19->detailLimitUpVoiceFlagDic = v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v19->detailLimitUpVoiceFlagDic,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(
        int32_t type,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  ServantLimitUpVoiceCache_c *v15; // x0
  System_Collections_Generic_Dictionary_int__int__o *materialLimitUpVoiceFlagDic; // x0
  ServantLimitUpVoiceCache_c *v17; // x0
  ServantLimitUpVoiceCache_c *v18; // x0
  ServantLimitUpVoiceCache_c *v19; // x0
  int32_t Item; // w20
  int32_t v21; // w0
  ServantLimitUpVoiceCache_c *v22; // x8
  int32_t v24; // w0
  ServantLimitUpVoiceCache_c *v25; // x8

  if ( (byte_42EAE55 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, servantId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9, v10, v11);
    sub_B5D5C4(&ServantLimitUpVoiceCache_TypeInfo, v12, v13, v14);
    byte_42EAE55 = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      Item = 0;
      return Item == 0;
    }
    v15 = ServantLimitUpVoiceCache_TypeInfo;
    if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v15 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v15->static_fields->materialLimitUpVoiceFlagDic;
    if ( materialLimitUpVoiceFlagDic )
    {
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             materialLimitUpVoiceFlagDic,
             servantId,
             (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v17 = ServantLimitUpVoiceCache_TypeInfo;
        if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
          v17 = ServantLimitUpVoiceCache_TypeInfo;
        }
        materialLimitUpVoiceFlagDic = v17->static_fields->materialLimitUpVoiceFlagDic;
        if ( !materialLimitUpVoiceFlagDic )
          goto LABEL_36;
        goto LABEL_24;
      }
      v21 = UnityEngine_Random__Range_35654020(0, 2, 0LL);
      v22 = ServantLimitUpVoiceCache_TypeInfo;
      Item = v21;
      if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        v22 = ServantLimitUpVoiceCache_TypeInfo;
      }
      materialLimitUpVoiceFlagDic = v22->static_fields->materialLimitUpVoiceFlagDic;
      if ( materialLimitUpVoiceFlagDic )
      {
LABEL_30:
        System_Collections_Generic_Dictionary_int__int___Add(
          materialLimitUpVoiceFlagDic,
          servantId,
          Item,
          (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        return Item == 0;
      }
    }
LABEL_36:
    sub_B5D69C(materialLimitUpVoiceFlagDic, *(_QWORD *)&servantId);
  }
  v18 = ServantLimitUpVoiceCache_TypeInfo;
  if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v18 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v18->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_36;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          materialLimitUpVoiceFlagDic,
          servantId,
          (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    v24 = UnityEngine_Random__Range_35654020(0, 2, 0LL);
    v25 = ServantLimitUpVoiceCache_TypeInfo;
    Item = v24;
    if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v25 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v25->static_fields->detailLimitUpVoiceFlagDic;
    if ( materialLimitUpVoiceFlagDic )
      goto LABEL_30;
    goto LABEL_36;
  }
  v19 = ServantLimitUpVoiceCache_TypeInfo;
  if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v19 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v19->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_36;
LABEL_24:
  Item = System_Collections_Generic_Dictionary_int__int___get_Item(
           materialLimitUpVoiceFlagDic,
           servantId,
           (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  return Item == 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLimitUpVoiceCache__UpdateLimitUpVoice(int32_t type, int32_t servantId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  ServantLimitUpVoiceCache_c *v18; // x0
  System_Collections_Generic_Dictionary_int__int__o *materialLimitUpVoiceFlagDic; // x0
  ServantLimitUpVoiceCache_c *v20; // x8
  System_Collections_Generic_Dictionary_int__int__o *detailLimitUpVoiceFlagDic; // x20
  ServantLimitUpVoiceCache_c *v22; // x0
  ServantLimitUpVoiceCache_c *v23; // x8
  _BOOL4 v24; // w2
  System_Collections_Generic_Dictionary_int__int__o *v25; // x20

  if ( (byte_42EAE56 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, servantId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v12, v13, v14);
    sub_B5D5C4(&ServantLimitUpVoiceCache_TypeInfo, v15, v16, v17);
    byte_42EAE56 = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
      return;
    v18 = ServantLimitUpVoiceCache_TypeInfo;
    if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v18 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v18->static_fields->materialLimitUpVoiceFlagDic;
    if ( materialLimitUpVoiceFlagDic )
    {
      materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                                                           materialLimitUpVoiceFlagDic,
                                                                                           servantId,
                                                                                           (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
      v20 = ServantLimitUpVoiceCache_TypeInfo;
      if ( ((unsigned __int8)materialLimitUpVoiceFlagDic & 1) != 0 )
      {
        if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
          v20 = ServantLimitUpVoiceCache_TypeInfo;
        }
        detailLimitUpVoiceFlagDic = v20->static_fields->materialLimitUpVoiceFlagDic;
        if ( !detailLimitUpVoiceFlagDic )
          goto LABEL_36;
        goto LABEL_24;
      }
      if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        v20 = ServantLimitUpVoiceCache_TypeInfo;
      }
      v25 = v20->static_fields->materialLimitUpVoiceFlagDic;
      goto LABEL_34;
    }
LABEL_36:
    sub_B5D69C(materialLimitUpVoiceFlagDic, *(_QWORD *)&servantId);
  }
  v22 = ServantLimitUpVoiceCache_TypeInfo;
  if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v22 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v22->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_36;
  materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                                                       materialLimitUpVoiceFlagDic,
                                                                                       servantId,
                                                                                       (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
  v23 = ServantLimitUpVoiceCache_TypeInfo;
  if ( ((unsigned __int8)materialLimitUpVoiceFlagDic & 1) != 0 )
  {
    if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      v23 = ServantLimitUpVoiceCache_TypeInfo;
    }
    detailLimitUpVoiceFlagDic = v23->static_fields->detailLimitUpVoiceFlagDic;
    if ( detailLimitUpVoiceFlagDic )
    {
LABEL_24:
      v24 = System_Collections_Generic_Dictionary_int__int___get_Item(
              detailLimitUpVoiceFlagDic,
              servantId,
              (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == 0;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        detailLimitUpVoiceFlagDic,
        servantId,
        v24,
        (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      return;
    }
    goto LABEL_36;
  }
  if ( (WORD1(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
    v23 = ServantLimitUpVoiceCache_TypeInfo;
  }
  v25 = v23->static_fields->detailLimitUpVoiceFlagDic;
LABEL_34:
  materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Random__Range_35654020(
                                                                                       0,
                                                                                       2,
                                                                                       0LL);
  if ( !v25 )
    goto LABEL_36;
  System_Collections_Generic_Dictionary_int__int___Add(
    v25,
    servantId,
    (int32_t)materialLimitUpVoiceFlagDic,
    (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
}