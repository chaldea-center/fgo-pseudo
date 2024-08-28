void __fastcall ServantCommentAddEntity___ctor(ServantCommentAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A20146 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_string___ctor__, method);
    byte_4A20146 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30F85D8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCommentAddEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4A20143 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&id);
    byte_4A20143 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           id,
           priority,
           idx,
           (const MethodInfo_2E59F5C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall ServantCommentAddEntity__CreatePrimaryKey(
        ServantCommentAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return ServantCommentAddEntity__CreatePK(
           this->fields.svtId,
           this->fields.id,
           this->fields.priority,
           this->fields.idx,
           v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentAddEntity__IsOnlyOpenQuestCond(
        ServantCommentAddEntity_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  ServantCommentAddEntity_o *v6; // x20
  __int64 v7; // x1
  struct System_Int32_array *condValues; // x8
  __int64 v9; // x9
  int v10; // w10
  __int64 v11; // x24
  unsigned __int64 v13; // x25
  int32_t v14; // w21
  int64_t UserId; // x0
  int32_t condValue2; // w22
  int64_t v17; // x23

  v6 = this;
  if ( (byte_4A20145 & 1) == 0 )
  {
    sub_1B715CC(&CondType_TypeInfo, *(_QWORD *)&questId);
    this = (ServantCommentAddEntity_o *)sub_1B715CC(&NetworkManager_TypeInfo, v7);
    byte_4A20145 = 1;
  }
  if ( v6->fields.condType != 1 || v6->fields.condValue2 != questPhase )
    return 0;
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    v9 = *(_QWORD *)&condValues->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0;
      v11 = (unsigned int)*(_QWORD *)&condValues->max_length;
      while ( condValues->m_Items[v10 + 1] != questId )
      {
        if ( (_DWORD)v9 == ++v10 )
          return 0;
      }
      v13 = 0LL;
      while ( 1 )
      {
        if ( v13 >= condValues->max_length )
          sub_1B71830(this, *(_QWORD *)&questId);
        v14 = condValues->m_Items[v13 + 1];
        if ( v14 != questId )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v17 = UserId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(v17, v14, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( v11 == ++v13 )
          return 1;
        condValues = v6->fields.condValues;
        if ( !condValues )
          sub_1B71828(this, *(_QWORD *)&questId);
      }
    }
    return 0;
  }
  return v6->fields.condValue == questId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentAddEntity__IsOpen(
        ServantCommentAddEntity_o *this,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  ServantCommentAddEntity_o *v4; // x19
  __int64 v5; // x1
  struct System_Int32_array *condValues; // x8
  unsigned __int64 v7; // x25
  __int64 v8; // x26
  int32_t condType; // w22
  int32_t v10; // w21
  int64_t UserId; // x0
  int32_t condValue2; // w22
  int64_t v13; // x23
  int64_t v14; // x0
  int32_t svtId; // w23
  int64_t v16; // x24
  int32_t v18; // w21
  int64_t v19; // x0
  int32_t condValue; // w20
  int32_t v21; // w19
  int64_t v22; // x21
  int32_t v23; // w22
  int64_t v24; // x0
  int32_t v25; // w19
  int64_t v26; // x20

  v4 = this;
  if ( (byte_4A20144 & 1) == 0 )
  {
    sub_1B715CC(&CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    this = (ServantCommentAddEntity_o *)sub_1B715CC(&NetworkManager_TypeInfo, v5);
    byte_4A20144 = 1;
  }
  condValues = v4->fields.condValues;
  if ( condValues )
  {
    if ( (int)*(_QWORD *)&condValues->max_length < 1 )
      return 0;
    v7 = 0LL;
    v8 = (unsigned int)*(_QWORD *)&condValues->max_length;
    while ( 1 )
    {
      if ( v7 >= condValues->max_length )
        sub_1B71830(this, *(_QWORD *)&oldFriendShipRank);
      condType = v4->fields.condType;
      v10 = condValues->m_Items[v7 + 1];
      if ( condType == 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        UserId = NetworkManager__get_UserId(0LL);
        condValue2 = v4->fields.condValue2;
        v13 = UserId;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(v13, v10, condValue2, -1, 0, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
      else if ( (oldFriendShipRank & 0x80000000) != 0 || condType != 9 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v14 = NetworkManager__get_UserId(0LL);
        svtId = v4->fields.svtId;
        v16 = v14;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (ServantCommentAddEntity_o *)CondType__IsOpen_37433336(condType, v10, v16, svtId, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
      else if ( v10 <= oldFriendShipRank )
      {
        return 1;
      }
      if ( v8 == ++v7 )
        return 0;
      condValues = v4->fields.condValues;
      if ( !condValues )
        sub_1B71828(this, *(_QWORD *)&oldFriendShipRank);
    }
  }
  v18 = v4->fields.condType;
  if ( v18 == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v19 = NetworkManager__get_UserId(0LL);
    condValue = v4->fields.condValue;
    v21 = v4->fields.condValue2;
    v22 = v19;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v22, condValue, v21, -1, 0, 0LL);
  }
  else
  {
    v23 = v4->fields.condValue;
    if ( (oldFriendShipRank & 0x80000000) != 0 || v18 != 9 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v24 = NetworkManager__get_UserId(0LL);
      v25 = v4->fields.svtId;
      v26 = v24;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsOpen_37433336(v18, v23, v26, v25, 0LL);
    }
    else
    {
      return v23 <= oldFriendShipRank;
    }
  }
}