System_String_o *SoundWithChannelActionUtility__GetBgmNameByBgmId(int32_t bgmId, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5972275 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BgmMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_5972275 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    bgmId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_2213CDC(Master_object, v5);
  }
  return 0;
}


bool SoundWithChannelActionUtility__IsPlayBgmByBgmIds(System_Int32_array *bgmIds, const MethodInfo *method)
{
  System_String_o *BgmName; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // x8
  System_String_o *v6; // x20
  unsigned __int64 v7; // x22
  int32_t v8; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5972272 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BgmMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_5972272 = 1;
  }
  entity = 0;
  if ( !bgmIds || !bgmIds->max_length )
    return 0;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmName = BgmManager__GetBgmName(0);
  max_length = bgmIds->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v6 = BgmName;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)max_length )
      sub_2213CE4(BgmName);
    v8 = bgmIds->m_Items[v7];
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
    BgmName = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !BgmName )
LABEL_19:
      sub_2213CDC(BgmName, v4);
    BgmName = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)BgmName,
                                   &entity,
                                   v8,
                                   (const MethodInfo_3F10B80 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)BgmName & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_19;
      BgmName = (System_String_o *)System_String__op_Equality((System_String_o *)entity[1].monitor, v6, 0);
      if ( ((unsigned __int8)BgmName & 1) != 0 )
        return 1;
    }
    LODWORD(max_length) = bgmIds->max_length;
    if ( (__int64)++v7 >= (int)max_length )
      return 0;
  }
}


bool SoundWithChannelActionUtility__TryConvertObjectArrayToIntArray(
        System_Object_array *values,
        System_String_o *ownerName,
        System_String_o *callerName,
        System_String_o *fieldName,
        System_Int32_array **result,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_int__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w8
  __int64 v15; // x22
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  int32_t version; // w10
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Int32_array *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t resulta; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5972276 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653488);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5972276 = 1;
  }
  resulta = 0;
  *result = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)result,
    0,
    callerName,
    fieldName,
    (int32_t)result,
    (int32_t)method,
    v6,
    v7);
  if ( values && values->max_length )
  {
    v10 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_71723608(
      v10,
      values->max_length,
      (const MethodInfo_4466A58 *)Method_System_Collections_Generic_List_int___ctor___91653488);
    max_length = values->max_length;
    if ( max_length < 1 )
    {
      if ( !v10 )
LABEL_25:
        sub_2213CDC(v11, v12);
LABEL_23:
      v22 = System_Collections_Generic_List_int___ToArray(
              v10,
              (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
      *result = v22;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)result, (int32_t)v22, v23, v24, v25, v26, v27, v28);
      LOBYTE(v16) = 1;
    }
    else
    {
      v15 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
          sub_2213CE4(v11);
        v16 = values->m_Items[v15];
        if ( !v16 )
          break;
        if ( v16->klass == (Il2CppClass *)qword_5984348 )
        {
          v11 = j_il2cpp_object_unbox_0(v16, v12, v13);
          if ( !v10 )
            goto LABEL_25;
          version = v10->fields._version;
          items = v10->fields._items;
          v12 = *(unsigned int *)v11;
        }
        else
        {
          v17 = (System_String_o *)((__int64 (*)(void))v16->klass->vtable[3].methodPtr)();
          v11 = System_Int32__TryParse(v17, &resulta, 0);
          if ( (v11 & 1) == 0 )
            goto LABEL_21;
          if ( !v10 )
            goto LABEL_25;
          version = v10->fields._version;
          items = v10->fields._items;
          v12 = (unsigned int)resulta;
        }
        v20 = Method_System_Collections_Generic_List_int__Add__;
        v10->fields._version = version + 1;
        if ( !items )
          goto LABEL_25;
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            v12,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size] = v12;
        }
        max_length = values->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_23;
      }
    }
  }
  else
  {
LABEL_21:
    LOBYTE(v16) = 0;
  }
  return (char)v16;
}


bool SoundWithChannelActionUtility__TryParseBgmId(
        System_String_o *value,
        System_String_o *ownerName,
        System_String_o *callerName,
        int32_t *bgmId,
        const MethodInfo *method)
{
  return System_Int32__TryParse(value, bgmId, 0);
}


bool SoundWithChannelActionUtility__TryParseChannelId(
        System_String_o *value,
        System_String_o *ownerName,
        System_String_o *callerName,
        int32_t *channelId,
        const MethodInfo *method)
{
  return System_Int32__TryParse(value, channelId, 0) && (*channelId & 0x80000000) == 0;
}


bool SoundWithChannelActionUtility__TryParseFloat(
        System_String_o *value,
        System_String_o *ownerName,
        System_String_o *callerName,
        System_String_o *fieldName,
        float *parsedValue,
        const MethodInfo *method)
{
  System_IFormatProvider_o *InvariantCulture; // x0
  __int64 v9; // x1
  System_IFormatProvider_o *CurrentCulture; // x2

  if ( (byte_5972274 & 1) == 0 )
  {
    sub_2213A60(&System_Globalization_CultureInfo_TypeInfo);
    byte_5972274 = 1;
  }
  if ( !*(&System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo, ownerName);
  InvariantCulture = (System_IFormatProvider_o *)System_Globalization_CultureInfo__get_InvariantCulture(0);
  if ( System_Single__TryParse_77228088(value, 167, InvariantCulture, parsedValue, 0) )
    return 1;
  if ( !*(&System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo, v9);
  CurrentCulture = (System_IFormatProvider_o *)System_Globalization_CultureInfo__get_CurrentCulture(0);
  return System_Single__TryParse_77228088(value, 167, CurrentCulture, parsedValue, 0);
}


bool SoundWithChannelActionUtility__TryParseMainBgmIdList(
        System_String_o *json,
        System_String_o *ownerName,
        System_String_o *callerName,
        System_Int32_array **bgmIds,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  System_Int32_array *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5972273 & 1) == 0 )
  {
    sub_2213A60(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject_int_____);
    sub_2213A60(&Newtonsoft_Json_JsonConvert_TypeInfo);
    byte_5972273 = 1;
  }
  *bgmIds = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)bgmIds,
    0,
    callerName,
    (System_String_o *)bgmIds,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !*(&Newtonsoft_Json_JsonConvert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Newtonsoft_Json_JsonConvert_TypeInfo, v10);
  v11 = (System_Int32_array *)Newtonsoft_Json_JsonConvert__DeserializeObject_object_(
                                json,
                                (const MethodInfo_38C2BC8 *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject_int_____);
  *bgmIds = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)bgmIds, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  return *bgmIds && (*bgmIds)->max_length != 0;
}