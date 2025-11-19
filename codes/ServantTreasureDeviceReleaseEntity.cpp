void ServantTreasureDeviceReleaseEntity___ctor(ServantTreasureDeviceReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6D69 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB6D69 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantTreasureDeviceReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4CB6D67 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4CB6D67 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           num,
           priority,
           idx,
           (const MethodInfo_3139E40 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *ServantTreasureDeviceReleaseEntity__CreatePrimaryKey(
        ServantTreasureDeviceReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return ServantTreasureDeviceReleaseEntity__CreatePK(
           this->fields.svtId,
           this->fields.num,
           this->fields.priority,
           this->fields.idx,
           v2);
}


bool ServantTreasureDeviceReleaseEntity__IsUseInternal(
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        int32_t currentCondType,
        int32_t currentCondTargetId,
        int32_t currentCondNum,
        const MethodInfo *method)
{
  int32_t v11; // w8
  bool v12; // w0
  NetworkManager_c *v13; // x0
  int64_t userIdNumber; // x20
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  CommonReleaseEntity_array *List; // x22
  System_Collections_Generic_Dictionary_int__bool__o *v18; // x21
  int max_length; // w8
  unsigned int v20; // w24
  int32_t *v21; // x27
  const MethodInfo *v22; // x5
  int32_t v23; // w23
  bool IsUseInternal; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x19
  ServantTreasureDeviceReleaseEntity___c_c *v26; // x8
  System_Func_bool__bool__o *_9__12_0; // x20
  Il2CppObject *v28; // x21
  struct ServantTreasureDeviceReleaseEntity___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  bool value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CB6D68 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_bool____78608160);
    sub_1C6BA08(&System_Func_bool__bool__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_ServantTreasureDeviceReleaseEntity___c__IsUseInternal_b__12_0__);
    sub_1C6BA08(&ServantTreasureDeviceReleaseEntity___c_TypeInfo);
    byte_4CB6D68 = 1;
  }
  value = 0;
  switch ( currentCondType )
  {
    case 1:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
      }
      v13 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v13 = NetworkManager_TypeInfo;
      }
      userIdNumber = v13->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestPhaseClear(userIdNumber, currentCondTargetId, currentCondNum, beforeClearQuestId, 0, 0);
    case 113:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !Master_object
        || (List = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Master_object, currentCondTargetId, 0),
            v18 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__bool__TypeInfo),
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v18,
              (const MethodInfo_34432BC *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__),
            !List) )
      {
LABEL_43:
        sub_1C6BC60(Master_object, v16);
      }
      max_length = List->max_length;
      if ( max_length >= 1 )
      {
        v20 = 0;
        do
        {
          if ( v20 >= max_length )
            sub_1C6BC68(Master_object);
          v21 = (int32_t *)List->m_Items[v20];
          if ( !v21 || !v18 )
            goto LABEL_43;
          Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__bool___TryGetValue(
                                            v18,
                                            v21[6],
                                            &value,
                                            (const MethodInfo_3445348 *)Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
          if ( value || ((unsigned __int8)Master_object & 1) == 0 )
          {
            v23 = v21[6];
            IsUseInternal = ServantTreasureDeviceReleaseEntity__IsUseInternal(
                              dispLimitCount,
                              beforeClearQuestId,
                              v21[7],
                              v21[8],
                              v21[9],
                              v22);
            System_Collections_Generic_Dictionary_int__bool___set_Item(
              v18,
              v23,
              IsUseInternal,
              (const MethodInfo_3443C7C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          }
          max_length = List->max_length;
        }
        while ( (int)++v20 < max_length );
      }
      if ( !v18 )
        goto LABEL_43;
      Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
                 v18,
                 (const MethodInfo_3443A9C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
      v26 = ServantTreasureDeviceReleaseEntity___c_TypeInfo;
      if ( !ServantTreasureDeviceReleaseEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantTreasureDeviceReleaseEntity___c_TypeInfo);
        v26 = ServantTreasureDeviceReleaseEntity___c_TypeInfo;
      }
      _9__12_0 = v26->static_fields->__9__12_0;
      if ( !_9__12_0 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = ServantTreasureDeviceReleaseEntity___c_TypeInfo;
        }
        v28 = (Il2CppObject *)v26->static_fields->__9;
        _9__12_0 = (System_Func_bool__bool__o *)sub_1C6BC54(System_Func_bool__bool__TypeInfo);
        System_Func_bool__bool____ctor(
          _9__12_0,
          v28,
          Method_ServantTreasureDeviceReleaseEntity___c__IsUseInternal_b__12_0__,
          0);
        static_fields = ServantTreasureDeviceReleaseEntity___c_TypeInfo->static_fields;
        static_fields->__9__12_0 = _9__12_0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v30, v31);
      }
      v12 = System_Linq_Enumerable__Any_bool__51676192(
              (System_Collections_Generic_IEnumerable_TSource__o *)Values,
              (System_Func_TSource__bool__o *)_9__12_0,
              (const MethodInfo_3148420 *)Method_System_Linq_Enumerable_Any_bool____78608160);
      break;
    case 70:
      if ( dispLimitCount >= 11 )
        v11 = dispLimitCount;
      else
        v11 = dispLimitCount + 1;
      return v11 == currentCondNum;
    default:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsOpen(currentCondType, currentCondTargetId, currentCondNum, 0, 0, 0);
  }
  return v12;
}


System_String_o *ServantTreasureDeviceReleaseEntity__getCreatePrimarykey(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v26; // [xsp+0h] [xbp-30h] BYREF
  int32_t v27; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v28; // [xsp+8h] [xbp-28h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-24h] BYREF

  v28 = num;
  v29 = svtId;
  v26 = idx;
  v27 = priority;
  if ( (byte_4CB6D66 & 1) == 0 )
  {
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_1449/*":"*/);
    byte_4CB6D66 = 1;
  }
  v5 = sub_1C6BAB0(string___TypeInfo, 7);
  v6 = System_Int32__ToString((int32_t)&v29, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v6, v8, v9);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_12;
  v12 = StringLiteral_1449/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1449/*":"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 40), v12, v10, v11);
  v6 = System_Int32__ToString((int32_t)&v28, 0);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_12;
  *(_QWORD *)(v5 + 48) = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 48), (int32_t)v6, v13, v14);
  if ( *(_DWORD *)(v5 + 24) <= 3u )
    goto LABEL_12;
  v17 = StringLiteral_1449/*":"*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_1449/*":"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 56), v17, v15, v16);
  v6 = System_Int32__ToString((int32_t)&v27, 0);
  if ( *(_DWORD *)(v5 + 24) <= 4u
    || (*(_QWORD *)(v5 + 64) = v6,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 64), (int32_t)v6, v18, v19),
        *(_DWORD *)(v5 + 24) <= 5u)
    || (v22 = StringLiteral_1449/*":"*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_1449/*":"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 72), v22, v20, v21),
        v6 = System_Int32__ToString((int32_t)&v26, 0),
        *(_DWORD *)(v5 + 24) <= 6u) )
  {
LABEL_12:
    sub_1C6BC68(v6);
  }
  *(_QWORD *)(v5 + 80) = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 80), (int32_t)v6, v23, v24);
  return System_String__Concat_64007324((System_String_array *)v5, 0);
}


bool ServantTreasureDeviceReleaseEntity__isUse(
        ServantTreasureDeviceReleaseEntity_o *this,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return ServantTreasureDeviceReleaseEntity__IsUseInternal(
           dispLimitCount,
           beforeClearQuestId,
           this->fields.condType,
           this->fields.condTargetId,
           this->fields.condNum,
           v4);
}


void ServantTreasureDeviceReleaseEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6D6A & 1) == 0 )
  {
    sub_1C6BA08(&ServantTreasureDeviceReleaseEntity___c_TypeInfo);
    byte_4CB6D6A = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ServantTreasureDeviceReleaseEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantTreasureDeviceReleaseEntity___c_TypeInfo->static_fields->__9 = (struct ServantTreasureDeviceReleaseEntity___c_o *)v1;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)ServantTreasureDeviceReleaseEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void ServantTreasureDeviceReleaseEntity___c___ctor(
        ServantTreasureDeviceReleaseEntity___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantTreasureDeviceReleaseEntity___c___IsUseInternal_b__12_0(
        ServantTreasureDeviceReleaseEntity___c_o *this,
        bool val,
        const MethodInfo *method)
{
  return val;
}