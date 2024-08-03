void __fastcall EventBonusFilterEntity___ctor(EventBonusFilterEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC2D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FC2D3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_49FC2D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&type);
    byte_49FC2D0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           value,
           priority,
           (const MethodInfo_2E37F60 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  Il2CppObject *Master_object; // x0
  int32_t type; // w8
  int32_t value; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC2D2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__,
      v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_49FC2D2 = 1;
  }
  entity = 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type == 5 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      this->fields.value,
                                      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity && v11 )
      {
        System_Collections_Generic_List_int___AddRange(
          v11,
          (System_Collections_Generic_IEnumerable_T__o *)entity[2].monitor,
          (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
        return System_Collections_Generic_List_int___ToArray(
                 v11,
                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_17:
      sub_1B64324(Master_object);
    }
LABEL_16:
    if ( v11 )
      return System_Collections_Generic_List_int___ToArray(
               v11,
               (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_17;
  }
  if ( type != 4 )
    goto LABEL_16;
  if ( !v11 )
    goto LABEL_17;
  value = this->fields.value;
  items = v11->fields._items;
  v16 = Method_System_Collections_Generic_List_int__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_17;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v11,
      value,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v11->fields._size = size + 1;
    items->m_Items[size + 1] = value;
  }
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterEntity__GetEquipIdList(
        EventBonusFilterEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x19
  EventBonusFilterGroupMemberEntity_array *MasterData_object; // x0
  int32_t type; // w8
  int32_t value; // w1
  struct System_Int32_array *v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  const MethodInfo *v18; // x2
  __int64 svtId; // x1
  int max_length; // w8
  EventBonusFilterGroupMemberEntity_array *v21; // x20
  unsigned int v22; // w21
  EventBonusFilterGroupMemberEntity_o *v23; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10

  if ( (byte_49FC2D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    byte_49FC2D1 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type != 3 )
  {
    if ( type == 2 )
    {
      v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
        v16 = sub_1BB5FA4(v16);
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
      if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
        v17 = sub_1BB5FA4(v17);
      MasterData_object = **(EventBonusFilterGroupMemberEntity_array ***)(v17 + 184);
      if ( !MasterData_object )
        goto LABEL_28;
      MasterData_object = (EventBonusFilterGroupMemberEntity_array *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)MasterData_object,
                                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !MasterData_object )
        goto LABEL_28;
      MasterData_object = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                            (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                            this->fields.value,
                            v18);
      if ( !MasterData_object )
        goto LABEL_28;
      max_length = MasterData_object->max_length;
      v21 = MasterData_object;
      if ( max_length >= 1 )
      {
        v22 = 0;
        do
        {
          if ( v22 >= max_length )
            sub_1B6432C(MasterData_object, svtId);
          v23 = v21->m_Items[v22];
          if ( !v23 )
            goto LABEL_28;
          if ( !v9 )
            goto LABEL_28;
          svtId = (unsigned int)v23->fields.svtId;
          items = v9->fields._items;
          v25 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              svtId,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size + 1] = svtId;
          }
          max_length = v21->max_length;
        }
        while ( (int)++v22 < max_length );
      }
    }
    else if ( type == 1 )
    {
      goto LABEL_6;
    }
    if ( v9 )
      return System_Collections_Generic_List_int___ToArray(
               v9,
               (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_28:
    sub_1B64324(MasterData_object);
  }
LABEL_6:
  if ( !v9 )
    goto LABEL_28;
  value = this->fields.value;
  v13 = v9->fields._items;
  v14 = Method_System_Collections_Generic_List_int__Add__;
  ++v9->fields._version;
  if ( !v13 )
    goto LABEL_28;
  v15 = v9->fields._size;
  if ( (unsigned int)v15 >= v13->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v9,
      value,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = v15 + 1;
    v13->m_Items[v15 + 1] = value;
  }
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}