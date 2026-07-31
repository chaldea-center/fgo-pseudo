void ServantSkillReleaseEntity___ctor(ServantSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939151 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939151 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantSkillReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_593914F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_593914F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           num,
           priority,
           idx,
           (const MethodInfo_38218C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *ServantSkillReleaseEntity__CreatePrimaryKey(
        ServantSkillReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return ServantSkillReleaseEntity__CreatePK(
           this->fields.svtId,
           this->fields.num,
           this->fields.priority,
           this->fields.idx,
           v2);
}


// local variable allocation has failed, the output may be wrong!
bool ServantSkillReleaseEntity__IsUseInternal(
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        int32_t specificLimitCount,
        int64_t userSvtId,
        int32_t currentCondType,
        int32_t currentCondTargetId,
        int32_t currentCondNum,
        const MethodInfo *method)
{
  int32_t v15; // w8
  NetworkManager_c *v17; // x0
  int64_t userIdNumber; // x20
  bool IsLimitCountCondType; // w0
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  CommonReleaseEntity_array *List; // x23
  System_Collections_Generic_Dictionary_int__bool__o *v24; // x24
  int max_length; // w8
  unsigned int v26; // w26
  int32_t *v27; // x28
  const MethodInfo *v28; // x7
  int32_t v29; // w25
  bool IsUseInternal; // w0
  __int64 v31; // x1
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x19
  ServantSkillReleaseEntity___c_c *v33; // x8
  struct ServantSkillReleaseEntity___c_StaticFields *static_fields; // x9
  System_Func_bool__bool__o *_9__12_0; // x20
  Il2CppObject *v36; // x21
  struct ServantSkillReleaseEntity___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  bool value; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5939150 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_bool____91523696);
    sub_21FFC50(&System_Func_bool__bool__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_ServantSkillReleaseEntity___c__IsUseInternal_b__12_0__);
    sub_21FFC50(&ServantSkillReleaseEntity___c_TypeInfo);
    byte_5939150 = 1;
  }
  value = 0;
  if ( currentCondType == 1 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v17 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&beforeClearQuestId);
      v17 = NetworkManager_TypeInfo;
    }
    userIdNumber = v17->static_fields->userIdNumber;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    return CondType__IsQuestPhaseClear(userIdNumber, currentCondTargetId, currentCondNum, beforeClearQuestId, 0, 0);
  }
  else
  {
    if ( currentCondType == 70 )
    {
      if ( dispLimitCount >= 11 )
        v15 = dispLimitCount;
      else
        v15 = dispLimitCount + 1;
      return v15 == currentCondNum;
    }
    if ( specificLimitCount >= 1 && currentCondType == 7 )
      return currentCondNum <= specificLimitCount;
    if ( currentCondType == 7 )
    {
      if ( userSvtId < 1 )
      {
LABEL_52:
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
        return CondType__IsOpen(currentCondType, currentCondTargetId, currentCondNum, 0, 0, 0);
      }
    }
    else
    {
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
      IsLimitCountCondType = CondType__IsLimitCountCondType(currentCondType, 0);
      if ( userSvtId < 1 || !IsLimitCountCondType )
      {
        if ( currentCondType == 113 )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&beforeClearQuestId);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
          if ( Master_object )
          {
            List = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Master_object, currentCondTargetId, 0);
            v24 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v24,
              (const MethodInfo_3F551E8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( List )
            {
              max_length = List->max_length;
              if ( max_length < 1 )
              {
LABEL_40:
                if ( v24 )
                {
                  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
                             v24,
                             (const MethodInfo_3F5599C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
                  v33 = ServantSkillReleaseEntity___c_TypeInfo;
                  if ( !*(&ServantSkillReleaseEntity___c_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(ServantSkillReleaseEntity___c_TypeInfo, v31);
                    v33 = ServantSkillReleaseEntity___c_TypeInfo;
                  }
                  static_fields = v33->static_fields;
                  _9__12_0 = static_fields->__9__12_0;
                  if ( !_9__12_0 )
                  {
                    if ( !*(&v33->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(v33, v31);
                      static_fields = ServantSkillReleaseEntity___c_TypeInfo->static_fields;
                    }
                    v36 = (Il2CppObject *)static_fields->__9;
                    _9__12_0 = (System_Func_bool__bool__o *)sub_21FFEBC(System_Func_bool__bool__TypeInfo);
                    System_Func_bool__bool____ctor(
                      _9__12_0,
                      v36,
                      Method_ServantSkillReleaseEntity___c__IsUseInternal_b__12_0__,
                      0);
                    v37 = ServantSkillReleaseEntity___c_TypeInfo->static_fields;
                    v37->__9__12_0 = _9__12_0;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)&v37->__9__12_0,
                      (int32_t)_9__12_0,
                      v38,
                      v39,
                      v40,
                      v41,
                      v42,
                      v43);
                  }
                  return System_Linq_Enumerable__Any_bool__58933140(
                           (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                           (System_Func_TSource__bool__o *)_9__12_0,
                           (const MethodInfo_3833F94 *)Method_System_Linq_Enumerable_Any_bool____91523696);
                }
              }
              else
              {
                v26 = 0;
                while ( 1 )
                {
                  if ( v26 >= max_length )
                    sub_21FFED4(Master_object);
                  v27 = (int32_t *)List->m_Items[v26];
                  if ( !v27 || !v24 )
                    break;
                  Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__bool___TryGetValue(
                                                    v24,
                                                    v27[6],
                                                    &value,
                                                    (const MethodInfo_3F5751C *)Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
                  if ( value || ((unsigned __int8)Master_object & 1) == 0 )
                  {
                    v29 = v27[6];
                    IsUseInternal = ServantSkillReleaseEntity__IsUseInternal(
                                      dispLimitCount,
                                      beforeClearQuestId,
                                      specificLimitCount,
                                      userSvtId,
                                      v27[7],
                                      v27[8],
                                      v27[9],
                                      v28);
                    System_Collections_Generic_Dictionary_int__bool___set_Item(
                      v24,
                      v29,
                      IsUseInternal,
                      (const MethodInfo_3F55B88 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
                  }
                  max_length = List->max_length;
                  if ( (int)++v26 >= max_length )
                    goto LABEL_40;
                }
              }
            }
          }
          sub_21FFECC(Master_object, v22);
        }
        goto LABEL_52;
      }
    }
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    return CondType__IsOpenForUsrSvt(currentCondType, currentCondNum, userSvtId, 0);
  }
}


System_String_o *ServantSkillReleaseEntity__getCreatePrimarykey(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  int32_t v46; // w1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  int32_t v54; // [xsp+0h] [xbp-30h] BYREF
  int32_t v55; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v56; // [xsp+8h] [xbp-28h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-24h] BYREF

  v56 = num;
  v57 = svtId;
  v55 = priority;
  v54 = idx;
  if ( (byte_593914E & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_1532/*":"*/);
    byte_593914E = 1;
  }
  v5 = sub_21FFD10(string___TypeInfo, 7);
  v6 = System_Int32__ToString((int32_t)&v57, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v5 + 32) = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v6, v8, v9, v10, v11, v12, v13);
  if ( (*(_DWORD *)(v5 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_12;
  v20 = StringLiteral_1532/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1532/*":"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), v20, v14, v15, v16, v17, v18, v19);
  v6 = System_Int32__ToString((int32_t)&v56, 0);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_12;
  *(_QWORD *)(v5 + 48) = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 48), (int32_t)v6, v21, v22, v23, v24, v25, v26);
  if ( (*(_DWORD *)(v5 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_12;
  v33 = StringLiteral_1532/*":"*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_1532/*":"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 56), v33, v27, v28, v29, v30, v31, v32);
  v6 = System_Int32__ToString((int32_t)&v55, 0);
  if ( *(_DWORD *)(v5 + 24) <= 4u
    || (*(_QWORD *)(v5 + 64) = v6,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 64), (int32_t)v6, v34, v35, v36, v37, v38, v39),
        *(_DWORD *)(v5 + 24) <= 5u)
    || (v46 = StringLiteral_1532/*":"*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_1532/*":"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 72), v46, v40, v41, v42, v43, v44, v45),
        v6 = System_Int32__ToString((int32_t)&v54, 0),
        *(_DWORD *)(v5 + 24) <= 6u) )
  {
LABEL_12:
    sub_21FFED4(v6);
  }
  *(_QWORD *)(v5 + 80) = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 80), (int32_t)v6, v47, v48, v49, v50, v51, v52);
  return System_String__Concat_75483816((System_String_array *)v5, 0);
}


bool ServantSkillReleaseEntity__isUse(
        ServantSkillReleaseEntity_o *this,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        int32_t specificLimitCount,
        int64_t userSvtId,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x7

  return ServantSkillReleaseEntity__IsUseInternal(
           dispLimitCount,
           beforeClearQuestId,
           specificLimitCount,
           userSvtId,
           this->fields.condType,
           this->fields.condTargetId,
           this->fields.condNum,
           v6);
}


void ServantSkillReleaseEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5939152 & 1) == 0 )
  {
    sub_21FFC50(&ServantSkillReleaseEntity___c_TypeInfo);
    byte_5939152 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantSkillReleaseEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantSkillReleaseEntity___c_TypeInfo->static_fields->__9 = (struct ServantSkillReleaseEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantSkillReleaseEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantSkillReleaseEntity___c___ctor(ServantSkillReleaseEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantSkillReleaseEntity___c___IsUseInternal_b__12_0(
        ServantSkillReleaseEntity___c_o *this,
        bool val,
        const MethodInfo *method)
{
  return val;
}