void __fastcall ServantCommentAddEntity___ctor(ServantCommentAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9CEC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E9CEC = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCommentAddEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_42E9CE9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, id, priority, *(_QWORD *)&idx);
    byte_42E9CE9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           id,
           priority,
           idx,
           (const MethodInfo_1AE38D8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Int32_array *condValues; // x8
  __int64 v11; // x9
  __int64 v12; // x10
  unsigned __int64 v14; // x24
  signed __int64 v15; // x25
  int32_t v16; // w21
  int64_t UserId; // x0
  int32_t condValue2; // w22
  int64_t v19; // x23
  __int64 v20; // x0

  v6 = this;
  if ( (byte_42E9CEB & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, questId, questPhase, method);
    this = (ServantCommentAddEntity_o *)sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    byte_42E9CEB = 1;
  }
  if ( v6->fields.condType == 1 && v6->fields.condValue2 == questPhase )
  {
    condValues = v6->fields.condValues;
    if ( !condValues )
      return v6->fields.condValue == questId;
    v11 = *(_QWORD *)&condValues->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = 8LL;
      while ( *((_DWORD *)&condValues->obj.klass + v12) != questId )
      {
        if ( (int)++v12 - 8 >= (int)v11 )
          return 0;
      }
      v14 = 0LL;
      v15 = (int)v11;
      while ( 1 )
      {
        if ( v14 >= condValues->max_length )
        {
          v20 = sub_B5D6C8(this);
          sub_B5D668(v20, 0LL);
        }
        v16 = condValues->m_Items[v14 + 1];
        if ( v16 != questId )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v19 = UserId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(v19, v16, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( (__int64)++v14 >= v15 )
          return 1;
        condValues = v6->fields.condValues;
        if ( !condValues )
          sub_B5D69C(this, *(_QWORD *)&questId);
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
  __int64 v3; // x3
  ServantCommentAddEntity_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Int32_array *condValues; // x8
  __int64 v10; // x9
  unsigned __int64 v11; // x25
  signed __int64 v12; // x26
  int32_t condType; // w22
  int32_t v14; // w21
  int64_t UserId; // x0
  int32_t condValue2; // w22
  int64_t v17; // x23
  int64_t v18; // x0
  int32_t svtId; // w23
  int64_t v20; // x24
  int32_t v22; // w21
  int64_t v23; // x0
  int32_t condValue; // w20
  int32_t v25; // w19
  int64_t v26; // x21
  int32_t v27; // w22
  int64_t v28; // x0
  int32_t v29; // w19
  int64_t v30; // x20
  __int64 v31; // x0

  v5 = this;
  if ( (byte_42E9CEA & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, oldFriendShipRank, (_DWORD)method, v3);
    this = (ServantCommentAddEntity_o *)sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    byte_42E9CEA = 1;
  }
  condValues = v5->fields.condValues;
  if ( condValues )
  {
    v10 = *(_QWORD *)&condValues->max_length;
    if ( (int)v10 < 1 )
      return 0;
    v11 = 0LL;
    v12 = (int)v10;
    while ( 1 )
    {
      if ( v11 >= condValues->max_length )
      {
        v31 = sub_B5D6C8(this);
        sub_B5D668(v31, 0LL);
      }
      condType = v5->fields.condType;
      v14 = condValues->m_Items[v11 + 1];
      if ( condType == 1 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        condValue2 = v5->fields.condValue2;
        v17 = UserId;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(v17, v14, condValue2, -1, 0, 0LL);
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
        v18 = NetworkManager__get_UserId(0LL);
        svtId = v5->fields.svtId;
        v20 = v18;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (ServantCommentAddEntity_o *)CondType__IsOpen_25916820(condType, v14, v20, svtId, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
      else if ( v14 <= oldFriendShipRank )
      {
        return 1;
      }
      if ( (__int64)++v11 >= v12 )
        return 0;
      condValues = v5->fields.condValues;
      if ( !condValues )
        sub_B5D69C(this, *(_QWORD *)&oldFriendShipRank);
    }
  }
  v22 = v5->fields.condType;
  if ( v22 == 1 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v23 = NetworkManager__get_UserId(0LL);
    condValue = v5->fields.condValue;
    v25 = v5->fields.condValue2;
    v26 = v23;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v26, condValue, v25, -1, 0, 0LL);
  }
  else
  {
    v27 = v5->fields.condValue;
    if ( (oldFriendShipRank & 0x80000000) != 0 || v22 != 9 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v28 = NetworkManager__get_UserId(0LL);
      v29 = v5->fields.svtId;
      v30 = v28;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsOpen_25916820(v22, v27, v30, v29, 0LL);
    }
    else
    {
      return v27 <= oldFriendShipRank;
    }
  }
}