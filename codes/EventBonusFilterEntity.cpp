void __fastcall EventBonusFilterEntity___ctor(EventBonusFilterEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B160AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B160AE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_4B160AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&type, *(_QWORD *)&value);
    byte_4B160AB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           value,
           priority,
           (const MethodInfo_2F11804 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x19
  Il2CppObject *Master_object; // x0
  __int64 value; // x1
  int32_t type; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B160AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    byte_4B160AD = 1;
  }
  entity = 0LL;
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type == 5 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, value);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      this->fields.value,
                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity && v19 )
      {
        System_Collections_Generic_List_int___AddRange(
          v19,
          (System_Collections_Generic_IEnumerable_T__o *)entity[2].monitor,
          (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
        return System_Collections_Generic_List_int___ToArray(
                 v19,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_17:
      sub_1BCAA3C(Master_object, value);
    }
LABEL_16:
    if ( v19 )
      return System_Collections_Generic_List_int___ToArray(
               v19,
               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_17;
  }
  if ( type != 4 )
    goto LABEL_16;
  if ( !v19 )
    goto LABEL_17;
  value = (unsigned int)this->fields.value;
  items = v19->fields._items;
  v24 = Method_System_Collections_Generic_List_int__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_17;
  size = v19->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v19,
      value,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = size + 1;
    items->m_Items[size + 1] = value;
  }
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterEntity__GetEquipIdList(
        EventBonusFilterEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *v15; // x19
  EventBonusFilterGroupMemberEntity_array *MasterData_object; // x0
  __int64 svtId; // x1
  long double v18; // q0
  int32_t type; // w8
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  const MethodInfo *v25; // x2
  int max_length; // w8
  EventBonusFilterGroupMemberEntity_array *v27; // x20
  unsigned int v28; // w21
  EventBonusFilterGroupMemberEntity_o *v29; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10

  if ( (byte_4B160AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13, v14);
    byte_4B160AC = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type != 3 )
  {
    if ( type == 2 )
    {
      v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
        v23 = sub_1C1C6BC(v18);
      v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
      if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
        v24 = sub_1C1C6BC(v18);
      MasterData_object = **(EventBonusFilterGroupMemberEntity_array ***)(v24 + 184);
      if ( !MasterData_object )
        goto LABEL_28;
      MasterData_object = (EventBonusFilterGroupMemberEntity_array *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)MasterData_object,
                                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !MasterData_object )
        goto LABEL_28;
      MasterData_object = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                            (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                            this->fields.value,
                            v25);
      if ( !MasterData_object )
        goto LABEL_28;
      max_length = MasterData_object->max_length;
      v27 = MasterData_object;
      if ( max_length >= 1 )
      {
        v28 = 0;
        do
        {
          if ( v28 >= max_length )
            sub_1BCAA44(MasterData_object, svtId);
          v29 = v27->m_Items[v28];
          if ( !v29 )
            goto LABEL_28;
          if ( !v15 )
            goto LABEL_28;
          svtId = (unsigned int)v29->fields.svtId;
          items = v15->fields._items;
          v31 = Method_System_Collections_Generic_List_int__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v15,
              svtId,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v15->fields._size = size + 1;
            items->m_Items[size + 1] = svtId;
          }
          max_length = v27->max_length;
        }
        while ( (int)++v28 < max_length );
      }
    }
    else if ( type == 1 )
    {
      goto LABEL_6;
    }
    if ( v15 )
      return System_Collections_Generic_List_int___ToArray(
               v15,
               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_28:
    sub_1BCAA3C(MasterData_object, svtId);
  }
LABEL_6:
  if ( !v15 )
    goto LABEL_28;
  svtId = (unsigned int)this->fields.value;
  v20 = v15->fields._items;
  v21 = Method_System_Collections_Generic_List_int__Add__;
  ++v15->fields._version;
  if ( !v20 )
    goto LABEL_28;
  v22 = v15->fields._size;
  if ( (unsigned int)v22 >= v20->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v15,
      svtId,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v15->fields._size = v22 + 1;
    v20->m_Items[v22 + 1] = svtId;
  }
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}