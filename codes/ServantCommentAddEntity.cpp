void __fastcall ServantCommentAddEntity___ctor(ServantCommentAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FCE71 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FCE71 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCommentAddEntity__CreatePK(
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_40FCE6E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&id);
    byte_40FCE6E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           id,
           priority,
           idx,
           (const MethodInfo_18C2910 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v10; // x10
  unsigned __int64 v12; // x24
  signed __int64 v13; // x25
  int32_t v14; // w21
  int64_t UserId; // x0
  int32_t condValue2; // w22
  int64_t v17; // x23

  v6 = this;
  if ( (byte_40FCE70 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&questId);
    this = (ServantCommentAddEntity_o *)sub_B16FFC(&NetworkManager_TypeInfo, v7);
    byte_40FCE70 = 1;
  }
  if ( v6->fields.condType == 1 && v6->fields.condValue2 == questPhase )
  {
    condValues = v6->fields.condValues;
    if ( !condValues )
      return v6->fields.condValue == questId;
    v9 = *(_QWORD *)&condValues->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 8LL;
      while ( *((_DWORD *)&condValues->obj.klass + v10) != questId )
      {
        if ( (int)++v10 - 8 >= (int)v9 )
          return 0;
      }
      v12 = 0LL;
      v13 = (int)v9;
      while ( 1 )
      {
        if ( v12 >= condValues->max_length )
        {
          sub_B17100(this, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
          sub_B170A0();
        }
        v14 = condValues->m_Items[v12 + 1];
        if ( v14 != questId )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          condValue2 = v6->fields.condValue2;
          v17 = UserId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(v17, v14, condValue2, -1, 0, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        if ( (__int64)++v12 >= v13 )
          return 1;
        condValues = v6->fields.condValues;
        if ( !condValues )
          sub_B170D4();
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
  __int64 v5; // x1
  struct System_Int32_array *condValues; // x8
  __int64 v7; // x9
  unsigned __int64 v8; // x25
  signed __int64 v9; // x26
  int32_t condType; // w22
  int32_t v11; // w21
  int64_t UserId; // x0
  int32_t condValue2; // w22
  int64_t v14; // x23
  int64_t v15; // x0
  int32_t svtId; // w23
  int64_t v17; // x24
  int32_t v19; // w21
  int64_t v20; // x0
  int32_t condValue; // w20
  int32_t v22; // w19
  int64_t v23; // x21
  int32_t v24; // w22
  int64_t v25; // x0
  int32_t v26; // w19
  int64_t v27; // x20

  v4 = this;
  if ( (byte_40FCE6F & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&oldFriendShipRank);
    this = (ServantCommentAddEntity_o *)sub_B16FFC(&NetworkManager_TypeInfo, v5);
    byte_40FCE6F = 1;
  }
  condValues = v4->fields.condValues;
  if ( condValues )
  {
    v7 = *(_QWORD *)&condValues->max_length;
    if ( (int)v7 < 1 )
      return 0;
    v8 = 0LL;
    v9 = (int)v7;
    while ( 1 )
    {
      if ( v8 >= condValues->max_length )
      {
        sub_B17100(this, *(_QWORD *)&oldFriendShipRank, method);
        sub_B170A0();
      }
      condType = v4->fields.condType;
      v11 = condValues->m_Items[v8 + 1];
      if ( condType == 1 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        condValue2 = v4->fields.condValue2;
        v14 = UserId;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (ServantCommentAddEntity_o *)CondType__IsQuestPhaseClear(v14, v11, condValue2, -1, 0, 0LL);
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
        v15 = NetworkManager__get_UserId(0LL);
        svtId = v4->fields.svtId;
        v17 = v15;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        this = (ServantCommentAddEntity_o *)CondType__IsOpen_25474480(condType, v11, v17, svtId, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
      else if ( v11 <= oldFriendShipRank )
      {
        return 1;
      }
      if ( (__int64)++v8 >= v9 )
        return 0;
      condValues = v4->fields.condValues;
      if ( !condValues )
        sub_B170D4();
    }
  }
  v19 = v4->fields.condType;
  if ( v19 == 1 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v20 = NetworkManager__get_UserId(0LL);
    condValue = v4->fields.condValue;
    v22 = v4->fields.condValue2;
    v23 = v20;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v23, condValue, v22, -1, 0, 0LL);
  }
  else
  {
    v24 = v4->fields.condValue;
    if ( (oldFriendShipRank & 0x80000000) != 0 || v19 != 9 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v25 = NetworkManager__get_UserId(0LL);
      v26 = v4->fields.svtId;
      v27 = v25;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsOpen_25474480(v19, v24, v27, v26, 0LL);
    }
    else
    {
      return v24 <= oldFriendShipRank;
    }
  }
}