void __fastcall EventBonusFilterEntity___ctor(EventBonusFilterEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B021 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B021 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall EventBonusFilterEntity__CheckBonusFilterType(
        EventBonusFilterEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  return this->fields.type == type;
}


System_String_o *__fastcall EventBonusFilterEntity__CreatePK(
        int32_t eventId,
        int32_t type,
        int32_t value,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A5B01E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4A5B01E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           value,
           priority,
           (const MethodInfo_2E7E47C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  System_Collections_Generic_List_int__o *v3; // x19
  Il2CppObject *Master_object; // x0
  __int64 value; // x1
  int32_t type; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B020 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5B020 = 1;
  }
  entity = 0LL;
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type == 5 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      this->fields.value,
                                      (const MethodInfo_311D988 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity && v3 )
      {
        System_Collections_Generic_List_int___AddRange(
          v3,
          (System_Collections_Generic_IEnumerable_T__o *)entity[2].monitor,
          (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
        return System_Collections_Generic_List_int___ToArray(
                 v3,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_17:
      sub_1B8880C(Master_object, value);
    }
LABEL_16:
    if ( v3 )
      return System_Collections_Generic_List_int___ToArray(
               v3,
               (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_17;
  }
  if ( type != 4 )
    goto LABEL_16;
  if ( !v3 )
    goto LABEL_17;
  value = (unsigned int)this->fields.value;
  items = v3->fields._items;
  v8 = Method_System_Collections_Generic_List_int__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_17;
  size = v3->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v3,
      value,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = size + 1;
    items->m_Items[size + 1] = value;
  }
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterEntity__GetEquipIdList(
        EventBonusFilterEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  EventBonusFilterGroupMemberEntity_array *MasterData_object; // x0
  __int64 svtId; // x1
  int32_t type; // w8
  struct System_Int32_array *v7; // x8
  _QWORD *v8; // x9
  __int64 v9; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  const MethodInfo *v12; // x2
  int max_length; // w8
  EventBonusFilterGroupMemberEntity_array *v14; // x20
  unsigned int v15; // w21
  EventBonusFilterGroupMemberEntity_o *v16; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10

  if ( (byte_4A5B01F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5B01F = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type != 3 )
  {
    if ( type == 2 )
    {
      v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1BDA48C(v10);
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1BDA48C(v11);
      MasterData_object = **(EventBonusFilterGroupMemberEntity_array ***)(v11 + 184);
      if ( !MasterData_object )
        goto LABEL_28;
      MasterData_object = (EventBonusFilterGroupMemberEntity_array *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)MasterData_object,
                                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !MasterData_object )
        goto LABEL_28;
      MasterData_object = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                            (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                            this->fields.value,
                            v12);
      if ( !MasterData_object )
        goto LABEL_28;
      max_length = MasterData_object->max_length;
      v14 = MasterData_object;
      if ( max_length >= 1 )
      {
        v15 = 0;
        do
        {
          if ( v15 >= max_length )
            sub_1B88814(MasterData_object, svtId);
          v16 = v14->m_Items[v15];
          if ( !v16 )
            goto LABEL_28;
          if ( !v3 )
            goto LABEL_28;
          svtId = (unsigned int)v16->fields.svtId;
          items = v3->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v3->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              svtId,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size + 1] = svtId;
          }
          max_length = v14->max_length;
        }
        while ( (int)++v15 < max_length );
      }
    }
    else if ( type == 1 )
    {
      goto LABEL_6;
    }
    if ( v3 )
      return System_Collections_Generic_List_int___ToArray(
               v3,
               (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_28:
    sub_1B8880C(MasterData_object, svtId);
  }
LABEL_6:
  if ( !v3 )
    goto LABEL_28;
  svtId = (unsigned int)this->fields.value;
  v7 = v3->fields._items;
  v8 = Method_System_Collections_Generic_List_int__Add__;
  ++v3->fields._version;
  if ( !v7 )
    goto LABEL_28;
  v9 = v3->fields._size;
  if ( (unsigned int)v9 >= v7->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v3,
      svtId,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v9 + 1;
    v7->m_Items[v9 + 1] = svtId;
  }
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}