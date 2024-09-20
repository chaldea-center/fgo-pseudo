void __fastcall ServantCommentAddEntity___ctor(ServantCommentAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B7E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B7E6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantCommentAddEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4A5B7E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4A5B7E3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           id,
           priority,
           idx,
           (const MethodInfo_2E7E47C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  struct System_Int32_array *condValues; // x8
  __int64 v8; // x9
  int v9; // w10
  __int64 v10; // x24
  unsigned __int64 v12; // x25
  int32_t v13; // w21
  int64_t UserId; // x0
  int32_t condValue2; // w22
  int64_t v16; // x23

  v6 = this;
  if ( (byte_4A5B7E5 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    this = (ServantCommentAddEntity_o *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B7E5 = 1;
  }
  if ( v6->fields.condType != 1 || v6->fields.condValue2 != questPhase )
    return 0;
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    v8 = *(_QWORD *)&condValues->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0;
      v10 = (unsigned int)*(_QWORD *)&condValues->max_length;
      while ( condValues->m_Items[v9 + 1] != questId )
      {
        if ( (_DWORD)v8 == ++v9 )
          return 0;
      }
      v12 = 0LL;
      while ( 1 )
      {
        if ( v12 >= condValues->max_length )
          sub_1B88814(this, *(_QWORD *)&questId);
        v13 = condValues->m_Items[v12 + 1];
        if ( v13 != questId )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v16 = UserId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(v16, v13, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( v10 == ++v12 )
          return 1;
        condValues = v6->fields.condValues;
        if ( !condValues )
          sub_1B8880C(this, *(_QWORD *)&questId);
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
  struct System_Int32_array *condValues; // x8
  unsigned __int64 v6; // x25
  __int64 v7; // x26
  int32_t condType; // w22
  int32_t v9; // w21
  int64_t UserId; // x0
  int32_t condValue2; // w22
  int64_t v12; // x23
  int64_t v13; // x0
  int32_t svtId; // w23
  int64_t v15; // x24
  int32_t v17; // w21
  int64_t v18; // x0
  int32_t condValue; // w20
  int32_t v20; // w19
  int64_t v21; // x21
  int32_t v22; // w22
  int64_t v23; // x0
  int32_t v24; // w19
  int64_t v25; // x20

  v4 = this;
  if ( (byte_4A5B7E4 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    this = (ServantCommentAddEntity_o *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B7E4 = 1;
  }
  condValues = v4->fields.condValues;
  if ( condValues )
  {
    if ( (int)*(_QWORD *)&condValues->max_length < 1 )
      return 0;
    v6 = 0LL;
    v7 = (unsigned int)*(_QWORD *)&condValues->max_length;
    while ( 1 )
    {
      if ( v6 >= condValues->max_length )
        sub_1B88814(this, *(_QWORD *)&oldFriendShipRank);
      condType = v4->fields.condType;
      v9 = condValues->m_Items[v6 + 1];
      if ( condType == 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        UserId = NetworkManager__get_UserId(0LL);
        condValue2 = v4->fields.condValue2;
        v12 = UserId;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(v12, v9, condValue2, -1, 0, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
      else if ( (oldFriendShipRank & 0x80000000) != 0 || condType != 9 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v13 = NetworkManager__get_UserId(0LL);
        svtId = v4->fields.svtId;
        v15 = v13;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (ServantCommentAddEntity_o *)CondType__IsOpen_37635152(condType, v9, v15, svtId, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
      else if ( v9 <= oldFriendShipRank )
      {
        return 1;
      }
      if ( v7 == ++v6 )
        return 0;
      condValues = v4->fields.condValues;
      if ( !condValues )
        sub_1B8880C(this, *(_QWORD *)&oldFriendShipRank);
    }
  }
  v17 = v4->fields.condType;
  if ( v17 == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v18 = NetworkManager__get_UserId(0LL);
    condValue = v4->fields.condValue;
    v20 = v4->fields.condValue2;
    v21 = v18;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v21, condValue, v20, -1, 0, 0LL);
  }
  else
  {
    v22 = v4->fields.condValue;
    if ( (oldFriendShipRank & 0x80000000) != 0 || v17 != 9 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v23 = NetworkManager__get_UserId(0LL);
      v24 = v4->fields.svtId;
      v25 = v23;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsOpen_37635152(v17, v22, v25, v24, 0LL);
    }
    else
    {
      return v22 <= oldFriendShipRank;
    }
  }
}