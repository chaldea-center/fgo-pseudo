void __fastcall ServantCommentAddEntity___ctor(ServantCommentAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4352FDC & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    byte_4352FDC = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantCommentAddEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4352FD9 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4352FD9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           id,
           priority,
           idx,
           (const MethodInfo_1CA2C2C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v9; // x10
  unsigned __int64 v11; // x24
  signed __int64 v12; // x25
  int32_t v13; // w21
  int64_t UserId; // x0
  int32_t condValue2; // w22
  int64_t v16; // x23
  __int64 v17; // x0

  v6 = this;
  if ( (byte_4352FDB & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    this = (ServantCommentAddEntity_o *)sub_B70694(&NetworkManager_TypeInfo);
    byte_4352FDB = 1;
  }
  if ( v6->fields.condType == 1 && v6->fields.condValue2 == questPhase )
  {
    condValues = v6->fields.condValues;
    if ( !condValues )
      return v6->fields.condValue == questId;
    v8 = *(_QWORD *)&condValues->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 8LL;
      while ( *((_DWORD *)&condValues->obj.klass + v9) != questId )
      {
        if ( (int)++v9 - 8 >= (int)v8 )
          return 0;
      }
      v11 = 0LL;
      v12 = (int)v8;
      while ( 1 )
      {
        if ( v11 >= condValues->max_length )
        {
          v17 = sub_B70798(this);
          sub_B70738(v17, 0LL);
        }
        v13 = condValues->m_Items[v11 + 1];
        if ( v13 != questId )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v16 = UserId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(v16, v13, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( (__int64)++v11 >= v12 )
          return 1;
        condValues = v6->fields.condValues;
        if ( !condValues )
          sub_B7076C(this, *(_QWORD *)&questId);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentAddEntity__IsOpen(
        ServantCommentAddEntity_o *this,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  ServantCommentAddEntity_o *v4; // x19
  struct System_Int32_array *condValues; // x8
  __int64 v6; // x9
  unsigned __int64 v7; // x25
  signed __int64 v8; // x26
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
  __int64 v27; // x0

  v4 = this;
  if ( (byte_4352FDA & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    this = (ServantCommentAddEntity_o *)sub_B70694(&NetworkManager_TypeInfo);
    byte_4352FDA = 1;
  }
  condValues = v4->fields.condValues;
  if ( condValues )
  {
    v6 = *(_QWORD *)&condValues->max_length;
    if ( (int)v6 < 1 )
      return 0;
    v7 = 0LL;
    v8 = (int)v6;
    while ( 1 )
    {
      if ( v7 >= condValues->max_length )
      {
        v27 = sub_B70798(this);
        sub_B70738(v27, 0LL);
      }
      condType = v4->fields.condType;
      v10 = condValues->m_Items[v7 + 1];
      if ( condType == 1 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        condValue2 = v4->fields.condValue2;
        v13 = UserId;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(v13, v10, condValue2, -1, 0, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
      else if ( (oldFriendShipRank & 0x80000000) != 0 || condType != 9 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v14 = NetworkManager__get_UserId(0LL);
        svtId = v4->fields.svtId;
        v16 = v14;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (ServantCommentAddEntity_o *)CondType__IsOpen_24337312(condType, v10, v16, svtId, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
      else if ( v10 <= oldFriendShipRank )
      {
        return 1;
      }
      if ( (__int64)++v7 >= v8 )
        return 0;
      condValues = v4->fields.condValues;
      if ( !condValues )
        sub_B7076C(this, *(_QWORD *)&oldFriendShipRank);
    }
  }
  v18 = v4->fields.condType;
  if ( v18 == 1 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v19 = NetworkManager__get_UserId(0LL);
    condValue = v4->fields.condValue;
    v21 = v4->fields.condValue2;
    v22 = v19;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v22, condValue, v21, -1, 0, 0LL);
  }
  else
  {
    v23 = v4->fields.condValue;
    if ( (oldFriendShipRank & 0x80000000) != 0 || v18 != 9 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v24 = NetworkManager__get_UserId(0LL);
      v25 = v4->fields.svtId;
      v26 = v24;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsOpen_24337312(v18, v23, v26, v25, 0LL);
    }
    else
    {
      return v23 <= oldFriendShipRank;
    }
  }
}