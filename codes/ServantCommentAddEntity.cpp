void ServantCommentAddEntity___ctor(ServantCommentAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971139 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971139 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantCommentAddEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_5971136 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_5971136 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           id,
           priority,
           idx,
           (const MethodInfo_3854D88 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *ServantCommentAddEntity__CreatePrimaryKey(ServantCommentAddEntity_o *this, const MethodInfo *method)
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
bool ServantCommentAddEntity__IsOnlyOpenQuestCond(
        ServantCommentAddEntity_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  ServantCommentAddEntity_o *v6; // x20
  struct System_Int32_array *condValues; // x9
  il2cpp_array_size_t max_length; // x8
  __int64 v9; // x25
  int32_t *m_Items; // x9
  int v11; // t1
  unsigned __int64 v13; // x26
  struct System_Int32_array *v14; // x8
  int32_t v15; // w22
  NetworkManager_c *v16; // x0
  int32_t condValue2; // w23
  int64_t userIdNumber; // x24

  v6 = this;
  if ( (byte_5971138 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    this = (ServantCommentAddEntity_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_5971138 = 1;
  }
  if ( v6->fields.condType != 1 || v6->fields.condValue2 != questPhase )
    return 0;
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    max_length = condValues->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = (unsigned int)condValues->max_length;
      m_Items = condValues->m_Items;
      while ( 1 )
      {
        v11 = *m_Items++;
        if ( v11 == questId )
          break;
        LODWORD(max_length) = max_length - 1;
        if ( !(_DWORD)max_length )
          return 0;
      }
      v13 = 0;
      while ( 1 )
      {
        v14 = v6->fields.condValues;
        if ( !v14 )
          sub_2213CDC(this, *(_QWORD *)&questId);
        if ( v13 >= LODWORD(v14->max_length) )
          sub_2213CE4(this);
        v15 = v14->m_Items[v13];
        if ( v15 != questId )
        {
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&questId);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          v16 = NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&questId);
            v16 = NetworkManager_TypeInfo;
          }
          condValue2 = v6->fields.condValue2;
          userIdNumber = v16->static_fields->userIdNumber;
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&questId);
          this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(userIdNumber, v15, condValue2, -1, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( v9 == ++v13 )
          return 1;
      }
    }
    return 0;
  }
  return v6->fields.condValue == questId;
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentAddEntity__IsOpen(
        ServantCommentAddEntity_o *this,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  ServantCommentAddEntity_o *v4; // x19
  struct System_Int32_array *condValues; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x26
  __int64 v8; // x28
  struct System_Int32_array *v9; // x8
  int32_t condType; // w23
  int32_t v11; // w22
  NetworkManager_c *v12; // x0
  int32_t condValue2; // w23
  int64_t userIdNumber; // x24
  NetworkManager_c *v15; // x0
  int32_t svtId; // w25
  int64_t v17; // x24
  int32_t v19; // w21
  NetworkManager_c *v20; // x0
  int32_t condValue; // w21
  int32_t v22; // w19
  int64_t v23; // x20
  int32_t v24; // w22
  NetworkManager_c *v25; // x0
  int32_t v26; // w19
  int64_t v27; // x20

  v4 = this;
  if ( (byte_5971137 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    this = (ServantCommentAddEntity_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_5971137 = 1;
  }
  condValues = v4->fields.condValues;
  if ( condValues )
  {
    max_length = condValues->max_length;
    if ( (int)max_length < 1 )
      return 0;
    v7 = 0;
    v8 = (unsigned int)max_length;
    while ( 1 )
    {
      v9 = v4->fields.condValues;
      if ( !v9 )
        sub_2213CDC(this, *(_QWORD *)&oldFriendShipRank);
      if ( v7 >= LODWORD(v9->max_length) )
        sub_2213CE4(this);
      condType = v4->fields.condType;
      v11 = v9->m_Items[v7];
      if ( condType == 1 )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        v12 = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
          v12 = NetworkManager_TypeInfo;
        }
        condValue2 = v4->fields.condValue2;
        userIdNumber = v12->static_fields->userIdNumber;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank);
        this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(userIdNumber, v11, condValue2, -1, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
      else if ( oldFriendShipRank < 0 || condType != 9 )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        v15 = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
          v15 = NetworkManager_TypeInfo;
        }
        svtId = v4->fields.svtId;
        v17 = v15->static_fields->userIdNumber;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank);
        this = (ServantCommentAddEntity_o *)CondType__IsOpen_47329936(condType, v11, v17, svtId, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
      else if ( v11 <= oldFriendShipRank )
      {
        return 1;
      }
      if ( v8 == ++v7 )
        return 0;
    }
  }
  v19 = v4->fields.condType;
  if ( v19 == 1 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    v20 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
      v20 = NetworkManager_TypeInfo;
    }
    condValue = v4->fields.condValue;
    v22 = v4->fields.condValue2;
    v23 = v20->static_fields->userIdNumber;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    return CondType__IsQuestPhaseClear(v23, condValue, v22, -1, 0, 0);
  }
  else
  {
    v24 = v4->fields.condValue;
    if ( oldFriendShipRank < 0 || v19 != 9 )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v25 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
        v25 = NetworkManager_TypeInfo;
      }
      v26 = v4->fields.svtId;
      v27 = v25->static_fields->userIdNumber;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank);
      return CondType__IsOpen_47329936(v19, v24, v27, v26, 0);
    }
    else
    {
      return v24 <= oldFriendShipRank;
    }
  }
}