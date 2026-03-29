void ServantPassiveSkillReleaseEntity___ctor(ServantPassiveSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D313D9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D313D9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantPassiveSkillReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4D313D7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4D313D7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           num,
           priority,
           idx,
           (const MethodInfo_31A3514 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *ServantPassiveSkillReleaseEntity__CreatePrimaryKey(
        ServantPassiveSkillReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return ServantPassiveSkillReleaseEntity__CreatePK(
           this->fields.svtId,
           this->fields.num,
           this->fields.priority,
           this->fields.idx,
           v2);
}


bool ServantPassiveSkillReleaseEntity__IsUseInternal(
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        int32_t currentCondType,
        int32_t currentCondTargetId,
        int32_t currentCondNum,
        const MethodInfo *method)
{
  bool v11; // w0
  NetworkManager_c *v12; // x0
  int64_t userIdNumber; // x20
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  CommonReleaseEntity_array *List; // x22
  System_Collections_Generic_Dictionary_int__bool__o *v17; // x21
  int max_length; // w8
  unsigned int v19; // w24
  int32_t *v20; // x27
  const MethodInfo *v21; // x5
  int32_t v22; // w23
  bool IsUseInternal; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x19
  ServantPassiveSkillReleaseEntity___c_c *v25; // x8
  System_Func_bool__bool__o *_9__12_0; // x20
  Il2CppObject *v27; // x21
  struct ServantPassiveSkillReleaseEntity___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  bool value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D313D8 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_bool____79098080);
    sub_1C93AD4(&System_Func_bool__bool__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_ServantPassiveSkillReleaseEntity___c__IsUseInternal_b__12_0__);
    sub_1C93AD4(&ServantPassiveSkillReleaseEntity___c_TypeInfo);
    byte_4D313D8 = 1;
  }
  value = 0;
  switch ( currentCondType )
  {
    case 1:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      v12 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v12 = NetworkManager_TypeInfo;
      }
      userIdNumber = v12->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestPhaseClear(userIdNumber, currentCondTargetId, currentCondNum, beforeClearQuestId, 0, 0);
    case 113:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !Master_object
        || (List = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Master_object, currentCondTargetId, 0),
            v17 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__bool__TypeInfo),
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v17,
              (const MethodInfo_34ADB50 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__),
            !List) )
      {
LABEL_40:
        sub_1C93D2C(Master_object, v15);
      }
      max_length = List->max_length;
      if ( max_length >= 1 )
      {
        v19 = 0;
        do
        {
          if ( v19 >= max_length )
            sub_1C93D34(Master_object);
          v20 = (int32_t *)List->m_Items[v19];
          if ( !v20 || !v17 )
            goto LABEL_40;
          Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__bool___TryGetValue(
                                            v17,
                                            v20[6],
                                            &value,
                                            (const MethodInfo_34AFBDC *)Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
          if ( value || ((unsigned __int8)Master_object & 1) == 0 )
          {
            v22 = v20[6];
            IsUseInternal = ServantPassiveSkillReleaseEntity__IsUseInternal(
                              dispLimitCount,
                              beforeClearQuestId,
                              v20[7],
                              v20[8],
                              v20[9],
                              v21);
            System_Collections_Generic_Dictionary_int__bool___set_Item(
              v17,
              v22,
              IsUseInternal,
              (const MethodInfo_34AE510 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          }
          max_length = List->max_length;
        }
        while ( (int)++v19 < max_length );
      }
      if ( !v17 )
        goto LABEL_40;
      Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
                 v17,
                 (const MethodInfo_34AE330 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
      v25 = ServantPassiveSkillReleaseEntity___c_TypeInfo;
      if ( !ServantPassiveSkillReleaseEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantPassiveSkillReleaseEntity___c_TypeInfo);
        v25 = ServantPassiveSkillReleaseEntity___c_TypeInfo;
      }
      _9__12_0 = v25->static_fields->__9__12_0;
      if ( !_9__12_0 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = ServantPassiveSkillReleaseEntity___c_TypeInfo;
        }
        v27 = (Il2CppObject *)v25->static_fields->__9;
        _9__12_0 = (System_Func_bool__bool__o *)sub_1C93D20(System_Func_bool__bool__TypeInfo);
        System_Func_bool__bool____ctor(
          _9__12_0,
          v27,
          Method_ServantPassiveSkillReleaseEntity___c__IsUseInternal_b__12_0__,
          0);
        static_fields = ServantPassiveSkillReleaseEntity___c_TypeInfo->static_fields;
        static_fields->__9__12_0 = _9__12_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0,
          (int32_t)_9__12_0,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
      v11 = System_Linq_Enumerable__Any_bool__52108372(
              (System_Collections_Generic_IEnumerable_TSource__o *)Values,
              (System_Func_TSource__bool__o *)_9__12_0,
              (const MethodInfo_31B1C54 *)Method_System_Linq_Enumerable_Any_bool____79098080);
      break;
    case 70:
      return currentCondNum == dispLimitCount;
    default:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsOpen(currentCondType, currentCondTargetId, currentCondNum, 0, 0, 0);
  }
  return v11;
}


System_String_o *ServantPassiveSkillReleaseEntity__getCreatePrimarykey(
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t v54; // [xsp+0h] [xbp-30h] BYREF
  int32_t v55; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v56; // [xsp+8h] [xbp-28h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-24h] BYREF

  v56 = num;
  v57 = svtId;
  v54 = idx;
  v55 = priority;
  if ( (byte_4D313D6 & 1) == 0 )
  {
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    byte_4D313D6 = 1;
  }
  v5 = sub_1C93B7C(string___TypeInfo, 7);
  v6 = System_Int32__ToString((int32_t)&v57, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v6, v8, v9, v10, v11, v12, v13);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_12;
  v20 = StringLiteral_1451/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1451/*":"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 40), v20, v14, v15, v16, v17, v18, v19);
  v6 = System_Int32__ToString((int32_t)&v56, 0);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_12;
  *(_QWORD *)(v5 + 48) = v6;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)v6, v21, v22, v23, v24, v25, v26);
  if ( *(_DWORD *)(v5 + 24) <= 3u )
    goto LABEL_12;
  v33 = StringLiteral_1451/*":"*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_1451/*":"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 56), v33, v27, v28, v29, v30, v31, v32);
  v6 = System_Int32__ToString((int32_t)&v55, 0);
  if ( *(_DWORD *)(v5 + 24) <= 4u
    || (*(_QWORD *)(v5 + 64) = v6,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 64), (int32_t)v6, v34, v35, v36, v37, v38, v39),
        *(_DWORD *)(v5 + 24) <= 5u)
    || (v46 = StringLiteral_1451/*":"*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_1451/*":"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 72), v46, v40, v41, v42, v43, v44, v45),
        v6 = System_Int32__ToString((int32_t)&v54, 0),
        *(_DWORD *)(v5 + 24) <= 6u) )
  {
LABEL_12:
    sub_1C93D34(v6);
  }
  *(_QWORD *)(v5 + 80) = v6;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 80), (int32_t)v6, v47, v48, v49, v50, v51, v52);
  return System_String__Concat_64466256((System_String_array *)v5, 0);
}


bool ServantPassiveSkillReleaseEntity__isUse(
        ServantPassiveSkillReleaseEntity_o *this,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return ServantPassiveSkillReleaseEntity__IsUseInternal(
           dispLimitCount,
           beforeClearQuestId,
           this->fields.condType,
           this->fields.condTargetId,
           this->fields.condNum,
           v4);
}


void ServantPassiveSkillReleaseEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D313DA & 1) == 0 )
  {
    sub_1C93AD4(&ServantPassiveSkillReleaseEntity___c_TypeInfo);
    byte_4D313DA = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantPassiveSkillReleaseEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantPassiveSkillReleaseEntity___c_TypeInfo->static_fields->__9 = (struct ServantPassiveSkillReleaseEntity___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantPassiveSkillReleaseEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantPassiveSkillReleaseEntity___c___ctor(
        ServantPassiveSkillReleaseEntity___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantPassiveSkillReleaseEntity___c___IsUseInternal_b__12_0(
        ServantPassiveSkillReleaseEntity___c_o *this,
        bool val,
        const MethodInfo *method)
{
  return val;
}