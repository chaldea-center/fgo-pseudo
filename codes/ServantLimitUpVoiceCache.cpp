void ServantLimitUpVoiceCache___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_Dictionary_int__int__o *v8; // x19
  struct ServantLimitUpVoiceCache_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596B175 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&ServantLimitUpVoiceCache_TypeInfo);
    byte_596B175 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v1,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  ServantLimitUpVoiceCache_TypeInfo->static_fields->materialLimitUpVoiceFlagDic = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantLimitUpVoiceCache_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v8,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  static_fields = ServantLimitUpVoiceCache_TypeInfo->static_fields;
  static_fields->detailLimitUpVoiceFlagDic = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->detailLimitUpVoiceFlagDic,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


// local variable allocation has failed, the output may be wrong!
bool ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(int32_t type, int32_t servantId, const MethodInfo *method)
{
  ServantLimitUpVoiceCache_c *v5; // x0
  System_Collections_Generic_Dictionary_int__int__o *materialLimitUpVoiceFlagDic; // x0
  __int64 v7; // x2
  ServantLimitUpVoiceCache_c *v8; // x0
  ServantLimitUpVoiceCache_c *v9; // x0
  __int64 v10; // x2
  ServantLimitUpVoiceCache_c *v11; // x0
  int32_t Item; // w20
  int32_t v13; // w0
  __int64 v14; // x2
  ServantLimitUpVoiceCache_c *v15; // x8
  int32_t v17; // w0
  __int64 v18; // x2
  ServantLimitUpVoiceCache_c *v19; // x8

  if ( (byte_596B173 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_2213A60(&ServantLimitUpVoiceCache_TypeInfo);
    byte_596B173 = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      Item = 0;
      return Item == 0;
    }
    v5 = ServantLimitUpVoiceCache_TypeInfo;
    if ( !*(&ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId, method);
      v5 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v5->static_fields->materialLimitUpVoiceFlagDic;
    if ( materialLimitUpVoiceFlagDic )
    {
      if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
             materialLimitUpVoiceFlagDic,
             servantId,
             (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        v8 = ServantLimitUpVoiceCache_TypeInfo;
        if ( !*(&ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId, v7);
          v8 = ServantLimitUpVoiceCache_TypeInfo;
        }
        materialLimitUpVoiceFlagDic = v8->static_fields->materialLimitUpVoiceFlagDic;
        if ( !materialLimitUpVoiceFlagDic )
          goto LABEL_30;
        goto LABEL_20;
      }
      v13 = UnityEngine_Random__Range_83400680(0, 2, 0);
      v15 = ServantLimitUpVoiceCache_TypeInfo;
      Item = v13;
      if ( !*(&ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId, v14);
        v15 = ServantLimitUpVoiceCache_TypeInfo;
      }
      materialLimitUpVoiceFlagDic = v15->static_fields->materialLimitUpVoiceFlagDic;
      if ( materialLimitUpVoiceFlagDic )
      {
LABEL_25:
        System_Collections_Generic_Dictionary_int__int___Add(
          materialLimitUpVoiceFlagDic,
          servantId,
          Item,
          (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        return Item == 0;
      }
    }
LABEL_30:
    sub_2213CDC(materialLimitUpVoiceFlagDic, *(_QWORD *)&servantId);
  }
  v9 = ServantLimitUpVoiceCache_TypeInfo;
  if ( !*(&ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId, method);
    v9 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v9->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          materialLimitUpVoiceFlagDic,
          servantId,
          (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    v17 = UnityEngine_Random__Range_83400680(0, 2, 0);
    v19 = ServantLimitUpVoiceCache_TypeInfo;
    Item = v17;
    if ( !*(&ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId, v18);
      v19 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v19->static_fields->detailLimitUpVoiceFlagDic;
    if ( materialLimitUpVoiceFlagDic )
      goto LABEL_25;
    goto LABEL_30;
  }
  v11 = ServantLimitUpVoiceCache_TypeInfo;
  if ( !*(&ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId, v10);
    v11 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v11->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_30;
LABEL_20:
  Item = System_Collections_Generic_Dictionary_int__int___get_Item(
           materialLimitUpVoiceFlagDic,
           servantId,
           (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  return Item == 0;
}


// local variable allocation has failed, the output may be wrong!
void ServantLimitUpVoiceCache__UpdateLimitUpVoice(int32_t type, int32_t servantId, const MethodInfo *method)
{
  ServantLimitUpVoiceCache_c *v5; // x0
  System_Collections_Generic_Dictionary_int__int__o *materialLimitUpVoiceFlagDic; // x0
  __int64 v7; // x2
  bool v8; // w8
  int v9; // w9
  System_Collections_Generic_Dictionary_int__int__o *klass; // x20
  ServantLimitUpVoiceCache_c *v11; // x0
  __int64 v12; // x2
  bool v13; // w8
  int v14; // w9
  int32_t v15; // w2
  System_Collections_Generic_Dictionary_int__int__o *monitor; // x20

  if ( (byte_596B174 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&ServantLimitUpVoiceCache_TypeInfo);
    byte_596B174 = 1;
  }
  if ( type != 2 )
  {
    if ( type != 1 )
      return;
    v5 = ServantLimitUpVoiceCache_TypeInfo;
    if ( !*(&ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId, method);
      v5 = ServantLimitUpVoiceCache_TypeInfo;
    }
    materialLimitUpVoiceFlagDic = v5->static_fields->materialLimitUpVoiceFlagDic;
    if ( materialLimitUpVoiceFlagDic )
    {
      v8 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
             materialLimitUpVoiceFlagDic,
             servantId,
             (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
      materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)ServantLimitUpVoiceCache_TypeInfo;
      v9 = *(&ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished + 1);
      if ( v8 )
      {
        if ( !v9 )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId, v7);
          materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)ServantLimitUpVoiceCache_TypeInfo;
        }
        klass = (System_Collections_Generic_Dictionary_int__int__o *)materialLimitUpVoiceFlagDic[2].fields._entries->obj.klass;
        if ( !klass )
          goto LABEL_30;
        goto LABEL_20;
      }
      if ( !v9 )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId, v7);
        materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)ServantLimitUpVoiceCache_TypeInfo;
      }
      monitor = (System_Collections_Generic_Dictionary_int__int__o *)materialLimitUpVoiceFlagDic[2].fields._entries->obj.klass;
      goto LABEL_28;
    }
LABEL_30:
    sub_2213CDC(materialLimitUpVoiceFlagDic, *(_QWORD *)&servantId);
  }
  v11 = ServantLimitUpVoiceCache_TypeInfo;
  if ( !*(&ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId, method);
    v11 = ServantLimitUpVoiceCache_TypeInfo;
  }
  materialLimitUpVoiceFlagDic = v11->static_fields->detailLimitUpVoiceFlagDic;
  if ( !materialLimitUpVoiceFlagDic )
    goto LABEL_30;
  v13 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
          materialLimitUpVoiceFlagDic,
          servantId,
          (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
  materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)ServantLimitUpVoiceCache_TypeInfo;
  v14 = *(&ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished + 1);
  if ( v13 )
  {
    if ( !v14 )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId, v12);
      materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)ServantLimitUpVoiceCache_TypeInfo;
    }
    klass = (System_Collections_Generic_Dictionary_int__int__o *)materialLimitUpVoiceFlagDic[2].fields._entries->obj.monitor;
    if ( klass )
    {
LABEL_20:
      v15 = System_Collections_Generic_Dictionary_int__int___get_Item(
              klass,
              servantId,
              (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == 0;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        klass,
        servantId,
        v15,
        (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      return;
    }
    goto LABEL_30;
  }
  if ( !v14 )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, *(_QWORD *)&servantId, v12);
    materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)ServantLimitUpVoiceCache_TypeInfo;
  }
  monitor = (System_Collections_Generic_Dictionary_int__int__o *)materialLimitUpVoiceFlagDic[2].fields._entries->obj.monitor;
LABEL_28:
  materialLimitUpVoiceFlagDic = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Random__Range_83400680(
                                                                                       0,
                                                                                       2,
                                                                                       0);
  if ( !monitor )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_int__int___Add(
    monitor,
    servantId,
    (int32_t)materialLimitUpVoiceFlagDic,
    (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
}