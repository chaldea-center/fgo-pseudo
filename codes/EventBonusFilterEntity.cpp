void __fastcall EventBonusFilterEntity___ctor(EventBonusFilterEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A08B2A & 1) == 0 )
  {
    sub_1B686D4(&Method_DataEntityBase_string___ctor__, method);
    byte_4A08B2A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30E4338 *)Method_DataEntityBase_string___ctor__);
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
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A08B27 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&type);
    byte_4A08B27 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           value,
           priority,
           (const MethodInfo_2E488C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall EventBonusFilterEntity__CreatePrimaryKey(
        EventBonusFilterEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventBonusFilterEntity__CreatePK(
           this->fields.eventId,
           this->fields.type,
           this->fields.value,
           this->fields.priority,
           v2);
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

  if ( (byte_4A08B29 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, method);
    sub_1B686D4(&DataManager_TypeInfo, v3);
    sub_1B686D4(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__,
      v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4A08B29 = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type == 5 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      this->fields.value,
                                      (const MethodInfo_30E4514 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity && v10 )
      {
        System_Collections_Generic_List_int___AddRange(
          v10,
          (System_Collections_Generic_IEnumerable_T__o *)entity[2].monitor,
          (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__);
        return System_Collections_Generic_List_int___ToArray(
                 v10,
                 (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_17:
      sub_1B68930(Master_object, value);
    }
LABEL_16:
    if ( v10 )
      return System_Collections_Generic_List_int___ToArray(
               v10,
               (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
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
      *(const MethodInfo_349F254 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = size + 1;
    items->m_Items[size + 1] = value;
  }
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int32_t type; // w8
  struct System_Int32_array *v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  const MethodInfo *v17; // x2
  int max_length; // w8
  EventBonusFilterGroupMemberEntity_array *v19; // x20
  unsigned int v20; // w21
  EventBonusFilterGroupMemberEntity_o *v21; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10

  if ( (byte_4A08B28 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_4A08B28 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type != 3 )
  {
    if ( type == 2 )
    {
      v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
        v15 = sub_1BBA5B0(v15);
      v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
      if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
        v16 = sub_1BBA5B0(v16);
      MasterData_object = **(EventBonusFilterGroupMemberEntity_array ***)(v16 + 184);
      if ( !MasterData_object )
        goto LABEL_28;
      MasterData_object = (EventBonusFilterGroupMemberEntity_array *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)MasterData_object,
                                                                       (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !MasterData_object )
        goto LABEL_28;
      MasterData_object = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                            (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                            this->fields.value,
                            v17);
      if ( !MasterData_object )
        goto LABEL_28;
      max_length = MasterData_object->max_length;
      v19 = MasterData_object;
      if ( max_length >= 1 )
      {
        v20 = 0;
        do
        {
          if ( v20 >= max_length )
            sub_1B68938(MasterData_object, svtId);
          v21 = v19->m_Items[v20];
          if ( !v21 )
            goto LABEL_28;
          if ( !v8 )
            goto LABEL_28;
          svtId = (unsigned int)v21->fields.svtId;
          items = v8->fields._items;
          v23 = Method_System_Collections_Generic_List_int__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v8,
              svtId,
              *(const MethodInfo_349F254 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v8->fields._size = size + 1;
            items->m_Items[size + 1] = svtId;
          }
          max_length = v19->max_length;
        }
        while ( (int)++v20 < max_length );
      }
    }
    else if ( type == 1 )
    {
      goto LABEL_6;
    }
    if ( v8 )
      return System_Collections_Generic_List_int___ToArray(
               v8,
               (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_28:
    sub_1B68930(MasterData_object, svtId);
  }
LABEL_6:
  if ( !v8 )
    goto LABEL_28;
  svtId = (unsigned int)this->fields.value;
  v12 = v8->fields._items;
  v13 = Method_System_Collections_Generic_List_int__Add__;
  ++v8->fields._version;
  if ( !v12 )
    goto LABEL_28;
  v14 = v8->fields._size;
  if ( (unsigned int)v14 >= v12->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v8,
      svtId,
      *(const MethodInfo_349F254 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v8->fields._size = v14 + 1;
    v12->m_Items[v14 + 1] = svtId;
  }
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
}