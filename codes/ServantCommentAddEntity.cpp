void __fastcall ServantCommentAddEntity___ctor(ServantCommentAddEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16899 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16899 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCommentAddEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4B16896 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&id, *(_QWORD *)&priority);
    byte_4B16896 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           id,
           priority,
           idx,
           (const MethodInfo_2F11804 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v8; // x2
  struct System_Int32_array *condValues; // x8
  __int64 v10; // x9
  int v11; // w10
  __int64 v12; // x24
  unsigned __int64 v14; // x25
  int32_t v15; // w21
  int64_t UserId; // x0
  __int64 v17; // x1
  int32_t condValue2; // w22
  int64_t v19; // x23

  v6 = this;
  if ( (byte_4B16898 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    this = (ServantCommentAddEntity_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B16898 = 1;
  }
  if ( v6->fields.condType != 1 || v6->fields.condValue2 != questPhase )
    return 0;
  condValues = v6->fields.condValues;
  if ( condValues )
  {
    v10 = *(_QWORD *)&condValues->max_length;
    if ( (int)v10 >= 1 )
    {
      v11 = 0;
      v12 = (unsigned int)*(_QWORD *)&condValues->max_length;
      while ( condValues->m_Items[v11 + 1] != questId )
      {
        if ( (_DWORD)v10 == ++v11 )
          return 0;
      }
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= condValues->max_length )
          sub_1BCAA44(this, *(_QWORD *)&questId);
        v15 = condValues->m_Items[v14 + 1];
        if ( v15 != questId )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&questId);
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v19 = UserId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17);
          this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(v19, v15, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( v12 == ++v14 )
          return 1;
        condValues = v6->fields.condValues;
        if ( !condValues )
          sub_1BCAA3C(this, *(_QWORD *)&questId);
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
  __int64 v6; // x2
  struct System_Int32_array *condValues; // x8
  unsigned __int64 v8; // x25
  __int64 v9; // x26
  int32_t condType; // w22
  int32_t v11; // w21
  int64_t UserId; // x0
  __int64 v13; // x1
  int32_t condValue2; // w22
  int64_t v15; // x23
  int64_t v16; // x0
  __int64 v17; // x1
  int32_t svtId; // w23
  int64_t v19; // x24
  int32_t v21; // w21
  int64_t v22; // x0
  __int64 v23; // x1
  int32_t condValue; // w20
  int32_t v25; // w19
  int64_t v26; // x21
  int32_t v27; // w22
  int64_t v28; // x0
  __int64 v29; // x1
  int32_t v30; // w19
  int64_t v31; // x20

  v4 = this;
  if ( (byte_4B16897 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank, method);
    this = (ServantCommentAddEntity_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    byte_4B16897 = 1;
  }
  condValues = v4->fields.condValues;
  if ( condValues )
  {
    if ( (int)*(_QWORD *)&condValues->max_length < 1 )
      return 0;
    v8 = 0LL;
    v9 = (unsigned int)*(_QWORD *)&condValues->max_length;
    while ( 1 )
    {
      if ( v8 >= condValues->max_length )
        sub_1BCAA44(this, *(_QWORD *)&oldFriendShipRank);
      condType = v4->fields.condType;
      v11 = condValues->m_Items[v8 + 1];
      if ( condType == 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
        UserId = NetworkManager__get_UserId(0LL);
        condValue2 = v4->fields.condValue2;
        v15 = UserId;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v13);
        this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(v15, v11, condValue2, -1, 0, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
      else if ( (oldFriendShipRank & 0x80000000) != 0 || condType != 9 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
        v16 = NetworkManager__get_UserId(0LL);
        svtId = v4->fields.svtId;
        v19 = v16;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17);
        this = (ServantCommentAddEntity_o *)CondType__IsOpen_38348640(condType, v11, v19, svtId, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
      else if ( v11 <= oldFriendShipRank )
      {
        return 1;
      }
      if ( v9 == ++v8 )
        return 0;
      condValues = v4->fields.condValues;
      if ( !condValues )
        sub_1BCAA3C(this, *(_QWORD *)&oldFriendShipRank);
    }
  }
  v21 = v4->fields.condType;
  if ( v21 == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    v22 = NetworkManager__get_UserId(0LL);
    condValue = v4->fields.condValue;
    v25 = v4->fields.condValue2;
    v26 = v22;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v23);
    return CondType__IsQuestPhaseClear(v26, condValue, v25, -1, 0, 0LL);
  }
  else
  {
    v27 = v4->fields.condValue;
    if ( (oldFriendShipRank & 0x80000000) != 0 || v21 != 9 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&oldFriendShipRank);
      v28 = NetworkManager__get_UserId(0LL);
      v30 = v4->fields.svtId;
      v31 = v28;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v29);
      return CondType__IsOpen_38348640(v21, v27, v31, v30, 0LL);
    }
    else
    {
      return v27 <= oldFriendShipRank;
    }
  }
}