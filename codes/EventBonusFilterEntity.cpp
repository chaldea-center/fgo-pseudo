void __fastcall EventBonusFilterEntity___ctor(EventBonusFilterEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC795A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC795A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall EventBonusFilterEntity__CheckBonusFilterType(
        EventBonusFilterEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  return this->fields.type == type;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBonusFilterEntity__CreatePK(
        int32_t eventId,
        int32_t type,
        int32_t value,
        const MethodInfo *method)
{
  if ( (byte_4BC7959 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_4BC7959 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           type,
           value,
           (const MethodInfo_2F9DB44 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventBonusFilterEntity__CreatePrimaryKey(
        EventBonusFilterEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventBonusFilterEntity__CreatePK(this->fields.eventId, this->fields.type, this->fields.value, v2);
}


System_Int32_array *__fastcall EventBonusFilterEntity__GetBonusSkillIdList(
        EventBonusFilterEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x19
  Il2CppObject *Master_object; // x0
  __int64 value; // x1
  int32_t type; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC7957 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__,
      v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4BC7957 = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type == 5 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      this->fields.value,
                                      (const MethodInfo_32486C4 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity && v10 )
      {
        System_Collections_Generic_List_int___AddRange(
          v10,
          (System_Collections_Generic_IEnumerable_T__o *)entity[2].monitor,
          (const MethodInfo_361FA78 *)Method_System_Collections_Generic_List_int__AddRange__);
        return System_Collections_Generic_List_int___ToArray(
                 v10,
                 (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_17:
      sub_1C1AE30(Master_object, value);
    }
LABEL_16:
    if ( v10 )
      return System_Collections_Generic_List_int___ToArray(
               v10,
               (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_17;
  }
  if ( type != 4 )
    goto LABEL_16;
  if ( !v10 )
    goto LABEL_17;
  value = (unsigned int)this->fields.value;
  items = v10->fields._items;
  v15 = Method_System_Collections_Generic_List_int__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_17;
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v10,
      value,
      *(const MethodInfo_361F86C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = size + 1;
    items->m_Items[size + 1] = value;
  }
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterEntity__GetEquipIdList(
        EventBonusFilterEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x19
  EventBonusFilterGroupMemberEntity_array *MasterData_object; // x0
  __int64 svtId; // x1
  long double v11; // q0
  int32_t type; // w8
  struct System_Int32_array *v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  const MethodInfo *v18; // x2
  int max_length; // w8
  EventBonusFilterGroupMemberEntity_array *v20; // x20
  unsigned int v21; // w21
  EventBonusFilterGroupMemberEntity_o *v22; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10

  if ( (byte_4BC7956 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_4BC7956 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type != 3 )
  {
    if ( type == 2 )
    {
      v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
        v16 = sub_1C6CAB0(v11);
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
      if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
        v17 = sub_1C6CAB0(v11);
      MasterData_object = **(EventBonusFilterGroupMemberEntity_array ***)(v17 + 184);
      if ( !MasterData_object )
        goto LABEL_28;
      MasterData_object = (EventBonusFilterGroupMemberEntity_array *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)MasterData_object,
                                                                       (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !MasterData_object )
        goto LABEL_28;
      MasterData_object = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                            (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                            this->fields.value,
                            v18);
      if ( !MasterData_object )
        goto LABEL_28;
      max_length = MasterData_object->max_length;
      v20 = MasterData_object;
      if ( max_length >= 1 )
      {
        v21 = 0;
        do
        {
          if ( v21 >= max_length )
            sub_1C1AE38(MasterData_object, svtId);
          v22 = v20->m_Items[v21];
          if ( !v22 )
            goto LABEL_28;
          if ( !v8 )
            goto LABEL_28;
          svtId = (unsigned int)v22->fields.svtId;
          items = v8->fields._items;
          v24 = Method_System_Collections_Generic_List_int__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v8,
              svtId,
              *(const MethodInfo_361F86C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v8->fields._size = size + 1;
            items->m_Items[size + 1] = svtId;
          }
          max_length = v20->max_length;
        }
        while ( (int)++v21 < max_length );
      }
    }
    else if ( type == 1 )
    {
      goto LABEL_6;
    }
    if ( v8 )
      return System_Collections_Generic_List_int___ToArray(
               v8,
               (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_28:
    sub_1C1AE30(MasterData_object, svtId);
  }
LABEL_6:
  if ( !v8 )
    goto LABEL_28;
  svtId = (unsigned int)this->fields.value;
  v13 = v8->fields._items;
  v14 = Method_System_Collections_Generic_List_int__Add__;
  ++v8->fields._version;
  if ( !v13 )
    goto LABEL_28;
  v15 = v8->fields._size;
  if ( (unsigned int)v15 >= v13->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v8,
      svtId,
      *(const MethodInfo_361F86C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v8->fields._size = v15 + 1;
    v13->m_Items[v15 + 1] = svtId;
  }
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall EventBonusFilterEntity__IsOpen(EventBonusFilterEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4BC7958 & 1) == 0 )
  {
    sub_1C1ABD4(&CondType_TypeInfo, method);
    byte_4BC7958 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0LL, 0LL);
}