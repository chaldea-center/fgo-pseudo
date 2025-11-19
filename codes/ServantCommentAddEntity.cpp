void ServantCommentAddEntity___ctor(ServantCommentAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6B5C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB6B5C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantCommentAddEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4CB6B59 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4CB6B59 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           id,
           priority,
           idx,
           (const MethodInfo_3139E40 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  struct System_Int32_array *condValues; // x8
  il2cpp_array_size_t max_length; // x9
  int v9; // w10
  __int64 v10; // x25
  unsigned __int64 v12; // x26
  int32_t v13; // w22
  NetworkManager_c *v14; // x0
  int32_t condValue2; // w24
  int64_t userIdNumber; // x23

  v6 = this;
  if ( (byte_4CB6B5B & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    this = (ServantCommentAddEntity_o *)sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB6B5B = 1;
  }
  if ( v6->fields.condType != 1 || v6->fields.condValue2 != questPhase )
    return 0;
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    max_length = condValues->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      v10 = (unsigned int)condValues->max_length;
      while ( condValues->m_Items[v9] != questId )
      {
        if ( (_DWORD)max_length == ++v9 )
          return 0;
      }
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= LODWORD(condValues->max_length) )
          sub_1C6BC68(this);
        v13 = condValues->m_Items[v12];
        if ( v13 != questId )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4CB002A )
          {
            sub_1C6BA08(&NetworkManager_TypeInfo);
            byte_4CB002A = 1;
          }
          v14 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v14 = NetworkManager_TypeInfo;
          }
          condValue2 = v6->fields.condValue2;
          userIdNumber = v14->static_fields->userIdNumber;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(userIdNumber, v13, condValue2, -1, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( v10 == ++v12 )
          return 1;
        condValues = v6->fields.condValues;
        if ( !condValues )
          sub_1C6BC60(this, *(_QWORD *)&questId);
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
  unsigned __int64 v6; // x26
  __int64 max_length; // x27
  int32_t condType; // w23
  int32_t v9; // w22
  NetworkManager_c *v10; // x0
  int32_t condValue2; // w24
  int64_t userIdNumber; // x23
  NetworkManager_c *v13; // x0
  int32_t svtId; // w25
  int64_t v15; // x24
  int32_t v17; // w21
  NetworkManager_c *v18; // x0
  int32_t condValue; // w20
  int32_t v20; // w19
  int64_t v21; // x21
  int32_t v22; // w22
  NetworkManager_c *v23; // x0
  int32_t v24; // w19
  int64_t v25; // x20

  v4 = this;
  if ( (byte_4CB6B5A & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    this = (ServantCommentAddEntity_o *)sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB6B5A = 1;
  }
  condValues = v4->fields.condValues;
  if ( condValues )
  {
    if ( (int)condValues->max_length < 1 )
      return 0;
    v6 = 0;
    max_length = (unsigned int)condValues->max_length;
    while ( 1 )
    {
      if ( v6 >= LODWORD(condValues->max_length) )
        sub_1C6BC68(this);
      condType = v4->fields.condType;
      v9 = condValues->m_Items[v6];
      if ( condType == 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
        }
        v10 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v10 = NetworkManager_TypeInfo;
        }
        condValue2 = v4->fields.condValue2;
        userIdNumber = v10->static_fields->userIdNumber;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(userIdNumber, v9, condValue2, -1, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
      else if ( oldFriendShipRank < 0 || condType != 9 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
        }
        v13 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v13 = NetworkManager_TypeInfo;
        }
        svtId = v4->fields.svtId;
        v15 = v13->static_fields->userIdNumber;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (ServantCommentAddEntity_o *)CondType__IsOpen_40597736(condType, v9, v15, svtId, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
      else if ( v9 <= oldFriendShipRank )
      {
        return 1;
      }
      if ( max_length == ++v6 )
        return 0;
      condValues = v4->fields.condValues;
      if ( !condValues )
        sub_1C6BC60(this, *(_QWORD *)&oldFriendShipRank);
    }
  }
  v17 = v4->fields.condType;
  if ( v17 == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    v18 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v18 = NetworkManager_TypeInfo;
    }
    condValue = v4->fields.condValue;
    v20 = v4->fields.condValue2;
    v21 = v18->static_fields->userIdNumber;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v21, condValue, v20, -1, 0, 0);
  }
  else
  {
    v22 = v4->fields.condValue;
    if ( oldFriendShipRank < 0 || v17 != 9 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
      }
      v23 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v23 = NetworkManager_TypeInfo;
      }
      v24 = v4->fields.svtId;
      v25 = v23->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsOpen_40597736(v17, v22, v25, v24, 0);
    }
    else
    {
      return v22 <= oldFriendShipRank;
    }
  }
}