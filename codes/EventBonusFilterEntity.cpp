void EventBonusFilterEntity___ctor(EventBonusFilterEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE537 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE537 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


bool EventBonusFilterEntity__CheckBonusFilterType(
        EventBonusFilterEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  return this->fields.type == type;
}


System_String_o *EventBonusFilterEntity__CreatePK(
        int32_t eventId,
        int32_t type,
        int32_t value,
        const MethodInfo *method)
{
  if ( (byte_4CEE536 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEE536 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           type,
           value,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventBonusFilterEntity__CreatePrimaryKey(EventBonusFilterEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventBonusFilterEntity__CreatePK(this->fields.eventId, this->fields.type, this->fields.value, v2);
}


System_Int32_array *EventBonusFilterEntity__GetEquipIdList(EventBonusFilterEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  EventBonusFilterGroupMemberEntity_array *MasterData_object; // x0
  __int64 svtId; // x1
  long double v6; // q0
  int32_t type; // w8
  struct System_Int32_array *v8; // x8
  _QWORD *v9; // x9
  __int64 v10; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  const MethodInfo *v13; // x2
  int max_length; // w8
  EventBonusFilterGroupMemberEntity_array *v15; // x20
  unsigned int v16; // w21
  EventBonusFilterGroupMemberEntity_o *v17; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_4CEE534 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CEE534 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type != 3 )
  {
    if ( type == 2 )
    {
      v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C51B7C(v6);
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
      if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
        v12 = sub_1C51B7C(v6);
      MasterData_object = **(EventBonusFilterGroupMemberEntity_array ***)(v12 + 184);
      if ( !MasterData_object )
        goto LABEL_28;
      MasterData_object = (EventBonusFilterGroupMemberEntity_array *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)MasterData_object,
                                                                       (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !MasterData_object )
        goto LABEL_28;
      MasterData_object = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                            (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                            this->fields.value,
                            v13);
      if ( !MasterData_object )
        goto LABEL_28;
      max_length = MasterData_object->max_length;
      v15 = MasterData_object;
      if ( max_length >= 1 )
      {
        v16 = 0;
        do
        {
          if ( v16 >= max_length )
            sub_1C7BD48(MasterData_object);
          v17 = v15->m_Items[v16];
          if ( !v17 )
            goto LABEL_28;
          if ( !v3 )
            goto LABEL_28;
          svtId = (unsigned int)v17->fields.svtId;
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              svtId,
              *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = svtId;
          }
          max_length = v15->max_length;
        }
        while ( (int)++v16 < max_length );
      }
    }
    else if ( type == 1 )
    {
      goto LABEL_6;
    }
    if ( v3 )
      return System_Collections_Generic_List_int___ToArray(
               v3,
               (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_28:
    sub_1C7BD40(MasterData_object, svtId);
  }
LABEL_6:
  if ( !v3 )
    goto LABEL_28;
  svtId = (unsigned int)this->fields.value;
  v8 = v3->fields._items;
  v9 = Method_System_Collections_Generic_List_int__Add__;
  ++v3->fields._version;
  if ( !v8 )
    goto LABEL_28;
  v10 = v3->fields._size;
  if ( (unsigned int)v10 >= LODWORD(v8->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v3,
      svtId,
      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v10 + 1;
    v8->m_Items[v10] = svtId;
  }
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool EventBonusFilterEntity__IsOpen(EventBonusFilterEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4CEE535 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEE535 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
}