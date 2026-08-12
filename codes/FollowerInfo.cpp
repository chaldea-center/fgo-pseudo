void FollowerInfo___ctor(FollowerInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void FollowerInfo__GetAppendSkillInfo(
        FollowerInfo_o *this,
        SkillInfo_array **skillInfoList,
        int32_t index,
        int32_t returnSupportServantType,
        bool isNpc,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v10; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v10);
  ServantLeaderInfo__GetAppendPassiveSkillInfo_50601788(
    (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
    skillInfoList,
    isNpc,
    0);
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__GetAtkBoostValue(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v6);
  return ServantLeaderInfo__get_AtkBoostValue((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, 0);
}


System_Collections_Generic_List_int__o *FollowerInfo__GetEquipSvtIds(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x20
  const MethodInfo *v8; // x2
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x21
  ServantLeaderInfo_o *IsNullOrEmpty; // x0
  __int64 v11; // x1
  Il2CppClass **v12; // x25
  void **v13; // x25
  Il2CppClass *v14; // t1
  int v15; // w8
  int *v16; // x8
  int v17; // w26
  int32_t i; // w22
  __int64 v19; // x23
  __int64 v20; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8
  System_Collections_Generic_List_int__o *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_5970398 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5970398 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(this, returnSupportServantType, v8);
  IsNullOrEmpty = (ServantLeaderInfo_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)ServantLeaderInfoByReturnType,
                                           0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !ServantLeaderInfoByReturnType )
LABEL_34:
      sub_2213CDC(IsNullOrEmpty, v11);
    if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
LABEL_35:
      sub_2213CE4(IsNullOrEmpty);
    v12 = &ServantLeaderInfoByReturnType->obj.klass + index;
    v14 = v12[4];
    v13 = (void **)(v12 + 4);
    if ( v14 )
    {
      IsNullOrEmpty = (ServantLeaderInfo_o *)BalanceConfig_TypeInfo;
      v15 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
      if ( returnSupportServantType == 2 )
      {
        if ( !v15 )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11);
          IsNullOrEmpty = (ServantLeaderInfo_o *)BalanceConfig_TypeInfo;
        }
        v16 = (int *)(*(_QWORD *)&IsNullOrEmpty->fields.commandCardLimitCount + 52LL);
      }
      else
      {
        if ( !v15 )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11);
          IsNullOrEmpty = (ServantLeaderInfo_o *)BalanceConfig_TypeInfo;
        }
        v16 = (int *)(*(_QWORD *)&IsNullOrEmpty->fields.commandCardLimitCount + 48LL);
      }
      v17 = *v16;
      if ( *v16 >= 1 )
      {
        for ( i = 0; v17 != i; ++i )
        {
          if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
            goto LABEL_35;
          IsNullOrEmpty = (ServantLeaderInfo_o *)*v13;
          if ( !*v13 )
            goto LABEL_34;
          IsNullOrEmpty = (ServantLeaderInfo_o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(IsNullOrEmpty, i, 0);
          if ( IsNullOrEmpty )
          {
            v19 = *(_QWORD *)&IsNullOrEmpty->fields.svtId.fields.fakeValue;
            v20 = *(_QWORD *)&IsNullOrEmpty->fields.limitCount;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
            *(_QWORD *)&v30.fields.currentCryptoKey = v19;
            *(_QWORD *)&v30.fields.fakeValue = v20;
            IsNullOrEmpty = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                     v30,
                                                     0);
            if ( !v7 )
              goto LABEL_34;
            items = v7->fields._items;
            v22 = Method_System_Collections_Generic_List_int__Add__;
            ++v7->fields._version;
            if ( !items )
              goto LABEL_34;
            size = v7->fields._size;
            v11 = (unsigned int)IsNullOrEmpty;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v27 = v22[4];
              v28 = v7;
LABEL_31:
              System_Collections_Generic_List_int___AddWithResize(
                v28,
                v11,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v27 + 192) + 112LL));
              continue;
            }
            v7->fields._size = size + 1;
            items->m_Items[size] = (int)IsNullOrEmpty;
          }
          else
          {
            if ( !v7 )
              goto LABEL_34;
            v24 = v7->fields._items;
            v25 = Method_System_Collections_Generic_List_int__Add__;
            ++v7->fields._version;
            if ( !v24 )
              goto LABEL_34;
            v26 = v7->fields._size;
            if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
            {
              v27 = v25[4];
              v28 = v7;
              LODWORD(v11) = 0;
              goto LABEL_31;
            }
            v7->fields._size = v26 + 1;
            v24->m_Items[v26] = 0;
          }
        }
      }
    }
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
EquipTargetInfo_o *FollowerInfo__GetEquipTargetByEquipIdx(
        FollowerInfo_o *this,
        int32_t servantLeaderIndex,
        int32_t returnSupportServantType,
        int32_t equipIndex,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_o *v8; // x0

  if ( (servantLeaderIndex & 0x80000000) == 0
    && (ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                          this,
                                          returnSupportServantType,
                                          *(const MethodInfo **)&returnSupportServantType)) != 0
    && SLODWORD(ServantLeaderInfoByReturnType->max_length) > servantLeaderIndex
    && (v8 = ServantLeaderInfoByReturnType->m_Items[servantLeaderIndex]) != 0 )
  {
    return ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(v8, equipIndex, 0);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *FollowerInfo__GetFriendPointUpTypeVals(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v6);
  return ServantLeaderInfo__GetFriendPointUpTypeVals((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, 0);
}


// local variable allocation has failed, the output may be wrong!
UserServantGrandInfo_o *FollowerInfo__GetGrandServantInfo(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  System_Object_array *ServantLeaderInfoByReturnType; // x0
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  UserServantGrandInfo_o *result; // x0
  UserServantGrandInfo_c *v11; // x0

  if ( (byte_5970395 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_ServantLeaderInfo___);
    sub_2213A60(&UserServantGrandInfo_TypeInfo);
    byte_5970395 = 1;
  }
  ServantLeaderInfoByReturnType = (System_Object_array *)FollowerInfo__GetServantLeaderInfoByReturnType(
                                                           this,
                                                           returnSupportServantType,
                                                           *(const MethodInfo **)&returnSupportServantType);
  v8 = BasicHelper__IndexValue_object_(
         ServantLeaderInfoByReturnType,
         index,
         0,
         (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_ServantLeaderInfo___);
  if ( !v8 || (result = ServantLeaderInfo__get_GrandInfo((ServantLeaderInfo_o *)v8, 0)) == 0 )
  {
    v11 = UserServantGrandInfo_TypeInfo;
    if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, v9);
      v11 = UserServantGrandInfo_TypeInfo;
    }
    return v11->static_fields->Empty;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__GetHpBoostValue(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v6);
  return ServantLeaderInfo__get_HpBoostValue((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, 0);
}


System_Int32_array *FollowerInfo__GetNpcServantIndividuality(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x24
  __int64 v10; // x1
  Il2CppObject *v11; // x23
  const MethodInfo *v12; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  __int64 v14; // x25
  __int64 v15; // x26
  __int64 v16; // x27
  int32_t v17; // w0
  int32_t v18; // w26
  int32_t v19; // w27
  int32_t DispLimitCountStage; // w0
  System_Int32_array *LimitAddIndividuality; // x24
  System_Int32_array *Individuality; // x23
  FollowerInfo_o *v23; // x0
  const MethodInfo *v24; // x3
  FollowerInfo_o *UnionIndividuality; // x0
  const MethodInfo *v26; // x3
  System_Int32_array *v27; // x23
  const MethodInfo *v28; // x3
  FollowerInfo_o *ServantBaseIndividuality; // x0
  const MethodInfo *v30; // x3
  System_Int32_array *v31; // x20
  FollowerInfo_o *AddIndividuality; // x0
  const MethodInfo *v33; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_5970393 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantIndividualityMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970393 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v11 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantIndividualityMaster___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
  if ( index < 0 )
    goto LABEL_22;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)FollowerInfo__GetServantLeaderInfoByReturnType(this, returnSupportServantType, v12);
  if ( !Instance )
    goto LABEL_22;
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) <= index )
    goto LABEL_22;
  v14 = *((_QWORD *)&Instance->fields._DispLog + (unsigned int)index);
  if ( !v14 )
    goto LABEL_22;
  v15 = *(_QWORD *)(v14 + 48);
  v16 = *(_QWORD *)(v14 + 56);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v36.fields.currentCryptoKey = v15;
  *(_QWORD *)&v36.fields.fakeValue = v16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v36, 0);
  v18 = *(_DWORD *)(v14 + 64);
  v19 = v17;
  DispLimitCountStage = ServantLeaderInfo__get_DispLimitCountStage((ServantLeaderInfo_o *)v14, 0);
  Instance = (DataManager_o *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  if ( !MasterData_object )
    goto LABEL_22;
  LimitAddIndividuality = ServantLimitAddMaster__GetLimitAddIndividuality(
                            (ServantLimitAddMaster_o *)MasterData_object,
                            v19,
                            v18,
                            (int32_t)Instance,
                            0);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v14 + 48),
                                0);
  if ( !v11 )
    goto LABEL_22;
  Individuality = ServantIndividualityMaster__GetIndividuality(
                    (ServantIndividualityMaster_o *)v11,
                    (int32_t)Instance,
                    *(_DWORD *)(v14 + 64),
                    0);
  v23 = (FollowerInfo_o *)sub_2213B20(int___TypeInfo, 0);
  UnionIndividuality = (FollowerInfo_o *)FollowerInfo__GetUnionIndividuality(
                                           v23,
                                           (System_Int32_array *)v23,
                                           LimitAddIndividuality,
                                           v24);
  v27 = FollowerInfo__GetUnionIndividuality(
          UnionIndividuality,
          (System_Int32_array *)UnionIndividuality,
          Individuality,
          v26);
  ServantBaseIndividuality = (FollowerInfo_o *)FollowerInfo__GetServantBaseIndividuality(
                                                 this,
                                                 index,
                                                 returnSupportServantType,
                                                 v28);
  Instance = (DataManager_o *)FollowerInfo__GetUnionIndividuality(
                                ServantBaseIndividuality,
                                v27,
                                (System_Int32_array *)ServantBaseIndividuality,
                                v30);
  if ( !v13 )
    goto LABEL_22;
  v31 = (System_Int32_array *)Instance;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         v13,
         &entity,
         this->fields.npcFollowerSvtId,
         (const MethodInfo_3F131DC *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      AddIndividuality = (FollowerInfo_o *)NpcServantFollowerIndividualityEntity__GetAddIndividuality(
                                             (NpcServantFollowerIndividualityEntity_o *)entity,
                                             0);
      Instance = (DataManager_o *)FollowerInfo__GetUnionIndividuality(
                                    AddIndividuality,
                                    v31,
                                    (System_Int32_array *)AddIndividuality,
                                    v33);
      if ( entity )
        return NpcServantFollowerIndividualityEntity__GetExcludedIndividuality(
                 (NpcServantFollowerIndividualityEntity_o *)entity,
                 (System_Int32_array *)Instance,
                 0);
    }
LABEL_22:
    sub_2213CDC(Instance, v8);
  }
  return v31;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *FollowerInfo__GetNpcServantIndividualityFull(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  int v7; // w8
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  const MethodInfo *v13; // x2
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_o *v15; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  Il2CppObject *v19; // x0
  int32_t limitCount; // w20
  ServantEntity_o *v21; // x21
  int32_t DispLimitCountStage; // w0
  Il2CppObject *v23; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_5970394 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5970394 = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v23 = 0;
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&index);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !Master_object )
    goto LABEL_30;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v23,
         this->fields.npcFollowerSvtId,
         (const MethodInfo_3F131DC *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    return FollowerInfo__GetNpcServantIndividuality(this, index, returnSupportServantType, v11);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !Master_object )
    goto LABEL_30;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         this->fields.npcFollowerSvtId,
         (const MethodInfo_3F131DC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
  {
    Master_object = entity;
    if ( !entity )
      goto LABEL_30;
    if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)entity, 0) )
    {
      Master_object = entity;
      if ( entity )
        return NpcServantFollowerEntity__GetOverwriteIndividuality((NpcServantFollowerEntity_o *)entity, 0);
LABEL_30:
      sub_2213CDC(Master_object, v9);
    }
  }
  if ( index < 0
    || (ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                          this,
                                          returnSupportServantType,
                                          v13)) == 0
    || SLODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
  {
    v15 = 0;
  }
  else
  {
    v15 = ServantLeaderInfoByReturnType->m_Items[index];
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !v15 )
    goto LABEL_30;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v17 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v25.fields.currentCryptoKey = v17;
  *(_QWORD *)&v25.fields.fakeValue = v18;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v25, 0);
  if ( !v16 )
    goto LABEL_30;
  v19 = DataMasterBase_object__object__int___GetEntity(
          v16,
          (int32_t)Master_object,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  limitCount = v15->fields.limitCount;
  v21 = (ServantEntity_o *)v19;
  DispLimitCountStage = ServantLeaderInfo__get_DispLimitCountStage(v15, 0);
  Master_object = (Il2CppObject *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  if ( !v21 )
    goto LABEL_30;
  return ServantEntity__getIndividuality(v21, limitCount, (int32_t)Master_object, 0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__GetQuestRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_o *v10; // x23
  void *IsNpc; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_Int32_array *v14; // x20
  bool isWhole; // [xsp+Ch] [xbp-34h] BYREF

  isWhole = 0;
  if ( !questRestrictionInfo )
    return 0;
  if ( index < 0
    || (ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                          this,
                                          returnSupportServantType,
                                          *(const MethodInfo **)&index)) == 0
    || SLODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
  {
    v10 = 0;
  }
  else
  {
    v10 = ServantLeaderInfoByReturnType->m_Items[index];
  }
  IsNpc = (void *)Follower__IsNpc(this->fields.type, 0);
  if ( ((unsigned __int8)IsNpc & 1) != 0 )
  {
    IsNpc = FollowerInfo__GetNpcServantIndividualityFull(this, index, returnSupportServantType, v13);
    if ( v10 )
    {
      v14 = (System_Int32_array *)IsNpc;
      IsNpc = ServantLeaderInfo__GetOverwriteStatus(v10, 0);
      if ( IsNpc )
        return QuestRestrictionInfo__IsRestriction_50436644(
                 questRestrictionInfo,
                 &isWhole,
                 v14,
                 *((_DWORD *)IsNpc + 6),
                 v10->fields.lv,
                 3,
                 0);
    }
LABEL_15:
    sub_2213CDC(IsNpc, v12);
  }
  if ( !v10 )
    goto LABEL_15;
  return ServantLeaderInfo__getQuestRestriction(v10, questRestrictionInfo, 0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__GetQuestRestriction_48752332(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        int32_t initPos,
        bool *isWhole,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_o *v14; // x22
  void *IsNpc; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  System_Int32_array *v18; // x23
  int32_t ServantId; // w0
  int32_t limitCount; // w23
  int32_t v22; // w24
  int32_t DispLimitCountStageSealAfterIndexZero; // w25

  if ( questRestrictionInfo )
  {
    if ( index < 0
      || (ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                            this,
                                            returnSupportServantType,
                                            *(const MethodInfo **)&index)) == 0
      || SLODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    {
      v14 = 0;
    }
    else
    {
      v14 = ServantLeaderInfoByReturnType->m_Items[index];
    }
    IsNpc = (void *)Follower__IsNpc(this->fields.type, 0);
    if ( ((unsigned __int8)IsNpc & 1) != 0 )
    {
      IsNpc = FollowerInfo__GetNpcServantIndividualityFull(this, index, returnSupportServantType, v17);
      if ( v14 )
      {
        v18 = (System_Int32_array *)IsNpc;
        IsNpc = ServantLeaderInfo__GetOverwriteStatus(v14, 0);
        if ( IsNpc )
          return QuestRestrictionInfo__IsRestriction_50437900(
                   questRestrictionInfo,
                   isWhole,
                   v18,
                   *((_DWORD *)IsNpc + 6),
                   v14->fields.lv,
                   initPos,
                   3,
                   0);
      }
LABEL_15:
      sub_2213CDC(IsNpc, v16);
    }
    if ( !v14 )
      goto LABEL_15;
    ServantId = ServantLeaderInfo__GetServantId(v14, -1, 0);
    limitCount = v14->fields.limitCount;
    v22 = ServantId;
    DispLimitCountStageSealAfterIndexZero = ServantLeaderInfo__GetDispLimitCountStageSealAfterIndexZero(v14, -1, 0);
    IsNpc = ServantLeaderInfo__GetOverwriteStatus(v14, 0);
    if ( !IsNpc )
      goto LABEL_15;
    return QuestRestrictionInfo__IsRestriction_50437612(
             questRestrictionInfo,
             isWhole,
             v22,
             limitCount,
             DispLimitCountStageSealAfterIndexZero,
             *((_DWORD *)IsNpc + 6),
             v14->fields.lv,
             initPos,
             2,
             0);
  }
  else
  {
    *isWhole = 0;
    return 0;
  }
}


int32_t FollowerInfo__GetReturnTypeByQuestId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_597038F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597038F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  return Entity && QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, 0);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *FollowerInfo__GetServantBaseIndividuality(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  System_Int32_array *v8; // x21
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  __int64 v13; // x19
  __int64 v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_5970391 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970391 = 1;
  }
  if ( index < 0 )
    return 0;
  result = (System_Int32_array *)FollowerInfo__GetServantLeaderInfoByReturnType(
                                   this,
                                   returnSupportServantType,
                                   *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
    return result;
  v8 = result;
  if ( SLODWORD(result->max_length) <= index )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( LODWORD(v8->max_length) <= index )
    sub_2213CE4(Instance);
  v11 = *(_QWORD *)&v8->m_Items[2 * index];
  if ( !v11 )
    goto LABEL_16;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v13 = *(_QWORD *)(v11 + 48);
  v14 = *(_QWORD *)(v11 + 56);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v15.fields.currentCryptoKey = v13;
  *(_QWORD *)&v15.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
  if ( !v12
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v12,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_16:
    sub_2213CDC(Instance, v10);
  }
  return (System_Int32_array *)Instance[11].klass;
}


ServantLeaderInfo_array *FollowerInfo__GetServantLeaderInfoByReturnType(
        FollowerInfo_o *this,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array **p_userSvtGrandHash; // x8
  __int64 v5; // x0
  System_ArgumentOutOfRangeException_o *v6; // x19
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  __int64 v9; // x0

  if ( returnSupportServantType == 2 )
  {
    p_userSvtGrandHash = &this->fields.userSvtGrandHash;
  }
  else if ( returnSupportServantType == 1 )
  {
    p_userSvtGrandHash = &this->fields.eventUserSvtLeaderHash;
  }
  else
  {
    if ( returnSupportServantType )
    {
      v5 = sub_2213A74(&System_ArgumentOutOfRangeException_TypeInfo);
      v6 = (System_ArgumentOutOfRangeException_o *)sub_2213CCC(v5);
      v7 = (System_String_o *)sub_2213A74(&StringLiteral_24300/*"returnSupportServantType"*/);
      v8 = (System_String_o *)sub_2213A74(&StringLiteral_26855/*"予期されないReturnSupportServantTypeです。"*/);
      System_ArgumentOutOfRangeException___ctor_76629788(v6, v7, v8, 0);
      v9 = sub_2213A74(&Method_FollowerInfo_GetServantLeaderInfoByReturnType__);
      sub_2213BA0(v6, v9);
    }
    p_userSvtGrandHash = &this->fields.userSvtLeaderHash;
  }
  return *p_userSvtGrandHash;
}


System_Int32_array *FollowerInfo__GetUnionIndividuality(
        FollowerInfo_o *this,
        System_Int32_array *targetIndividualities,
        System_Int32_array *addIndividualities,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_5970392 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Union_int___);
    byte_5970392 = 1;
  }
  if ( !addIndividualities || !addIndividualities->max_length )
    return targetIndividualities;
  v6 = System_Linq_Enumerable__Union_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)targetIndividualities,
         (System_Collections_Generic_IEnumerable_TSource__o *)addIndividualities,
         (const MethodInfo_38A1344 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v6,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t FollowerInfo__GetUseStatus(FollowerInfo_o *this, const MethodInfo *method)
{
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  il2cpp_array_size_t max_length; // x9
  UserRecommendSupportInfo_o *v4; // x8

  userRecommendSupportHash = this->fields.userRecommendSupportHash;
  if ( !userRecommendSupportHash )
    return 0;
  max_length = userRecommendSupportHash->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_2213CE4(this);
  v4 = userRecommendSupportHash->m_Items[0];
  if ( v4 )
    return v4->fields.useStatus;
  else
    return 0;
}


bool FollowerInfo__IsClassRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_o *v13; // x22
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  Il2CppObject *Entity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_597039B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597039B = 1;
  }
  if ( !questRestrictionInfo || Follower__IsNpc(this->fields.type, 0) )
    return 0;
  if ( index < 0
    || (ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                          this,
                                          returnSupportServantType,
                                          v10)) == 0
    || SLODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
  {
    v13 = 0;
  }
  else
  {
    v13 = ServantLeaderInfoByReturnType->m_Items[index];
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !v13 )
    goto LABEL_21;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v17 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
  *(_QWORD *)&v20.fields.currentCryptoKey = v17;
  *(_QWORD *)&v20.fields.fakeValue = v18;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
  if ( !v16
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v16,
                   (int32_t)Master_object,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___),
        !Entity)
    || !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          (int32_t)Entity[5].klass,
                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0 )
  {
LABEL_21:
    sub_2213CDC(Master_object, v15);
  }
  return QuestRestrictionInfo__IsClassRestriction(questRestrictionInfo, (int32_t)Master_object[2].klass, 0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__IsGrandServant(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_o *v6; // x0

  return (index & 0x80000000) == 0
      && (ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                            this,
                                            returnSupportServantType,
                                            *(const MethodInfo **)&returnSupportServantType)) != 0
      && SLODWORD(ServantLeaderInfoByReturnType->max_length) > index
      && (v6 = ServantLeaderInfoByReturnType->m_Items[index]) != 0
      && ServantLeaderInfo__get_IsGrandSvt(v6, 0);
}


bool FollowerInfo__IsSlotClassRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_o *v13; // x22
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  Il2CppObject *Entity; // x20
  Il2CppObject *v20; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_597039C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_597039C = 1;
  }
  if ( !questRestrictionInfo || Follower__IsNpc(this->fields.type, 0) )
    return 0;
  if ( index < 0
    || (ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                          this,
                                          returnSupportServantType,
                                          v10)) == 0
    || SLODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
  {
    v13 = 0;
  }
  else
  {
    v13 = ServantLeaderInfoByReturnType->m_Items[index];
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !v13 )
    goto LABEL_22;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v17 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v18;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0);
  if ( !v16
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v16,
                   (int32_t)Master_object,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___),
        !Entity)
    || !Master_object
    || (v20 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)Entity[5].klass,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__),
        (Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || !v20 )
  {
LABEL_22:
    sub_2213CDC(Master_object, v15);
  }
  return QuestRestrictionInfo__IsMySvtOrSupportSlotClassRestriction(
           questRestrictionInfo,
           HIDWORD(Master_object[5].klass),
           (int32_t)v20[2].klass,
           0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__IsSlotRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__IsSlotRestriction(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           questRestrictionInfo,
           0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__IsUniqueIndividualityRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v9; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v9);
  return ServantLeaderInfo__IsUniqueIndividualityRestriction(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           questRestrictionInfo,
           this,
           0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__IsUniqueIndividualityRestriction_48752968(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v13; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v13);
  return ServantLeaderInfo__IsUniqueIndividualityRestriction_50595084(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           questRestrictionInfo,
           partyItem,
           num,
           this,
           0);
}


void FollowerInfo__SetEquipInfoForNpc(
        FollowerInfo_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  FollowerInfo_o *v9; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x8

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_8;
  if ( !LODWORD(userSvtLeaderHash->max_length) )
    goto LABEL_9;
  v9 = this;
  this = (FollowerInfo_o *)userSvtLeaderHash->m_Items[0];
  if ( !this
    || (this->fields.userSvtGrandHash = (struct ServantLeaderInfo_array *)equipTargetInfo,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtGrandHash,
          (int32_t)equipTargetInfo,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash) == 0) )
  {
LABEL_8:
    sub_2213CDC(this, equipTargetInfo);
  }
  if ( !LODWORD(eventUserSvtLeaderHash->max_length) )
LABEL_9:
    sub_2213CE4(this);
  this = (FollowerInfo_o *)eventUserSvtLeaderHash->m_Items[0];
  if ( !this )
    goto LABEL_8;
  this->fields.userSvtGrandHash = (struct ServantLeaderInfo_array *)equipTargetInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtGrandHash,
    (int32_t)equipTargetInfo,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void FollowerInfo__SetOverwriteTreasureDeviceName(
        FollowerInfo_o *this,
        System_String_o *overwriteName,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OverwriteTreasureDeviceName_k__BackingField = overwriteName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OverwriteTreasureDeviceName_k__BackingField,
    (int32_t)overwriteName,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getAdjustAtk(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  ServantLeaderInfo_o *v7; // x8

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  v7 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v7 )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v6);
  return v7->fields.adjustAtk;
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getAdjustHp(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1
  ServantLeaderInfo_o *v7; // x8

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  v7 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v7 )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v6);
  return v7->fields.adjustHp;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *FollowerInfo__getCommandCodeIdList(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_o *v6; // x0

  if ( (index & 0x80000000) == 0
    && (ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                          this,
                                          returnSupportServantType,
                                          *(const MethodInfo **)&returnSupportServantType)) != 0
    && SLODWORD(ServantLeaderInfoByReturnType->max_length) > index
    && (v6 = ServantLeaderInfoByReturnType->m_Items[index]) != 0 )
  {
    return ServantLeaderInfo__getCommandCodeIdList(v6, 0);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getEquipAtk(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_o *v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x19
  FollowerInfo___c_c *v11; // x8
  struct FollowerInfo___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__59_0; // x20
  Il2CppObject *v14; // x21
  struct FollowerInfo___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_597039A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
    sub_2213A60(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_2213A60(&Method_FollowerInfo___c__getEquipAtk_b__59_0__);
    sub_2213A60(&FollowerInfo___c_TypeInfo);
    byte_597039A = 1;
  }
  if ( index < 0 )
    return 0;
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    return 0;
  if ( SLODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    return 0;
  v8 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v8 )
    return 0;
  EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(v8, 0);
  v11 = FollowerInfo___c_TypeInfo;
  if ( !*(&FollowerInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerInfo___c_TypeInfo, v9);
    v11 = FollowerInfo___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__59_0 = (System_Func_object__int__o *)static_fields->__9__59_0;
  if ( !_9__59_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v9);
      static_fields = FollowerInfo___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__59_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EquipTargetInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__59_0, v14, Method_FollowerInfo___c__getEquipAtk_b__59_0__, 0);
    v15 = FollowerInfo___c_TypeInfo->static_fields;
    v15->__9__59_0 = (struct System_Func_EquipTargetInfo__int__o *)_9__59_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__59_0, (int32_t)_9__59_0, v16, v17, v18, v19, v20, v21);
  }
  return System_Linq_Enumerable__Sum_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList,
           (System_Func_TSource__int__o *)_9__59_0,
           (const MethodInfo_3899FA8 *)Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getEquipHp(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_o *v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x19
  FollowerInfo___c_c *v11; // x8
  struct FollowerInfo___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__58_0; // x20
  Il2CppObject *v14; // x21
  struct FollowerInfo___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5970399 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
    sub_2213A60(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_2213A60(&Method_FollowerInfo___c__getEquipHp_b__58_0__);
    sub_2213A60(&FollowerInfo___c_TypeInfo);
    byte_5970399 = 1;
  }
  if ( index < 0 )
    return 0;
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    return 0;
  if ( SLODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    return 0;
  v8 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v8 )
    return 0;
  EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(v8, 0);
  v11 = FollowerInfo___c_TypeInfo;
  if ( !*(&FollowerInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerInfo___c_TypeInfo, v9);
    v11 = FollowerInfo___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__58_0 = (System_Func_object__int__o *)static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v9);
      static_fields = FollowerInfo___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__58_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EquipTargetInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__58_0, v14, Method_FollowerInfo___c__getEquipHp_b__58_0__, 0);
    v15 = FollowerInfo___c_TypeInfo->static_fields;
    v15->__9__58_0 = (struct System_Func_EquipTargetInfo__int__o *)_9__58_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__58_0, (int32_t)_9__58_0, v16, v17, v18, v19, v20, v21);
  }
  return System_Linq_Enumerable__Sum_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList,
           (System_Func_TSource__int__o *)_9__58_0,
           (const MethodInfo_3899FA8 *)Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getEquipLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t equipIndex,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&equipIndex);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__GetEquipLimitCount((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, equipIndex, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getEquipSvtId(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1
  ServantLeaderInfo_o *v9; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v11; // x19
  __int64 v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_5970397 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5970397 = 1;
  }
  if ( index < 0 )
    return 0;
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    return 0;
  if ( SLODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    return 0;
  v9 = ServantLeaderInfoByReturnType->m_Items[index];
  if ( !v9 )
    return 0;
  equipTarget1 = v9->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v11 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v14, 0);
}


// local variable allocation has failed, the output may be wrong!
EquipTargetInfo_o *FollowerInfo__getEquipTarget1(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  EquipTargetInfo_o *result; // x0
  __int64 v6; // x8

  if ( index < 0 )
    return 0;
  result = (EquipTargetInfo_o *)FollowerInfo__GetServantLeaderInfoByReturnType(
                                  this,
                                  returnSupportServantType,
                                  *(const MethodInfo **)&returnSupportServantType);
  if ( result )
  {
    if ( SLODWORD(result->fields.userSvtId.fields.currentCryptoKey) > index
      && (v6 = *(&result->fields.userSvtId.fields.hiddenValue + (unsigned int)index)) != 0 )
    {
      return *(EquipTargetInfo_o **)(v6 + 144);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int64_t FollowerInfo__getEquipUserSvtId(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  __int64 v10; // x8
  __int128 v11; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-50h]

  if ( (byte_5970396 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5970396 = 1;
  }
  if ( index < 0 )
    return 0;
  result = (int64_t)FollowerInfo__GetServantLeaderInfoByReturnType(
                      this,
                      returnSupportServantType,
                      *(const MethodInfo **)&returnSupportServantType);
  if ( !result )
    return result;
  if ( *(_DWORD *)(result + 24) <= index )
    return 0;
  v9 = *(_QWORD *)(result + 8LL * (unsigned int)index + 32);
  if ( !v9 )
    return 0;
  v10 = *(_QWORD *)(v9 + 144);
  if ( !v10 )
    return 0;
  v11 = *(_OWORD *)(v10 + 40);
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)(v10 + 24);
  *(_OWORD *)&v13.fields.fakeValue = v11;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
  v12 = v13;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v12, 0);
}


bool FollowerInfo__getEventUpVal(
        FollowerInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v10; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    (const MethodInfo *)setupInfo);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v10);
  return ServantLeaderInfo__getEventUpVal(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           eventUpVallInfo,
           setupInfo,
           0,
           0);
}


bool FollowerInfo__getEventUpVal_48751972(
        FollowerInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool *isServantEventUpVal,
        bool *isEquipEventUpVal,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v14; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    (const MethodInfo *)isServantEventUpVal);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v14);
  return ServantLeaderInfo__getEventUpVal_50594096(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           eventUpVallInfo,
           isServantEventUpVal,
           isEquipEventUpVal,
           setupInfo,
           0);
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getExceedCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_o *v6; // x8

  if ( index < 0 )
  {
    LODWORD(ServantLeaderInfoByReturnType) = 0;
  }
  else
  {
    ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                      this,
                                      returnSupportServantType,
                                      *(const MethodInfo **)&returnSupportServantType);
    if ( ServantLeaderInfoByReturnType )
    {
      if ( SLODWORD(ServantLeaderInfoByReturnType->max_length) > index
        && (v6 = ServantLeaderInfoByReturnType->m_Items[index]) != 0 )
      {
        LODWORD(ServantLeaderInfoByReturnType) = v6->fields.exceedCount;
      }
      else
      {
        LODWORD(ServantLeaderInfoByReturnType) = 0;
      }
    }
  }
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getIndex(
        FollowerInfo_o *this,
        int32_t classId,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_array *v12; // x23
  __int64 IsNpc; // x0
  __int64 v14; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x24
  __int64 v17; // x28
  ServantLeaderInfo_o *v18; // x8
  __int64 v19; // x25
  __int64 v20; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_5970390 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5970390 = 1;
  }
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_23;
  v12 = ServantLeaderInfoByReturnType;
  IsNpc = Follower__IsNpc(this->fields.type, 0);
  max_length = v12->max_length;
  if ( (IsNpc & 1) == 0 )
  {
    if ( (int)max_length >= 1 )
    {
      v16 = 0;
      v17 = (unsigned int)v12->max_length;
      while ( 1 )
      {
        if ( v16 >= LODWORD(v12->max_length) )
          sub_2213CE4(IsNpc);
        v18 = v12->m_Items[v16];
        if ( supportDeckId < 1 )
          goto LABEL_13;
        if ( !v18 )
          goto LABEL_25;
        if ( v18->fields.supportDeckId == supportDeckId )
        {
LABEL_13:
          if ( returnSupportServantType == 2 )
          {
            if ( !v18 )
              goto LABEL_25;
            if ( v18->fields.grandGraphId == grandGraphId )
              return v16;
          }
          else
          {
            if ( !v18 )
LABEL_25:
              sub_2213CDC(IsNpc, v14);
            if ( v18->fields.classId == classId )
            {
              v19 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
              v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
              *(_QWORD *)&v22.fields.currentCryptoKey = v19;
              *(_QWORD *)&v22.fields.fakeValue = v20;
              IsNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v22, 0);
              if ( (int)IsNpc > 0 )
                return v16;
            }
          }
        }
        if ( v17 == ++v16 )
          goto LABEL_23;
      }
    }
    goto LABEL_23;
  }
  if ( !max_length )
  {
LABEL_23:
    LODWORD(v16) = -1;
    return v16;
  }
  LODWORD(v16) = 0;
  return v16;
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getIndexForSupport(
        FollowerInfo_o *this,
        int32_t classId,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v11; // x1
  il2cpp_array_size_t max_length; // x9
  ServantLeaderInfo_array *v13; // x8
  __int64 v14; // x0
  ServantLeaderInfo_o **m_Items; // x8
  ServantLeaderInfo_o *v16; // x10

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( ServantLeaderInfoByReturnType )
  {
    max_length = ServantLeaderInfoByReturnType->max_length;
    v13 = ServantLeaderInfoByReturnType;
    if ( (int)max_length >= 1 )
    {
      v14 = 0;
      m_Items = v13->m_Items;
      do
      {
        v16 = m_Items[v14];
        if ( supportDeckId < 1 )
          goto LABEL_7;
        if ( !v16 )
          goto LABEL_16;
        if ( v16->fields.supportDeckId == supportDeckId )
        {
LABEL_7:
          if ( returnSupportServantType == 2 )
          {
            if ( !v16 )
              goto LABEL_16;
            if ( v16->fields.grandGraphId == grandGraphId )
              return v14;
          }
          else
          {
            if ( !v16 )
LABEL_16:
              sub_2213CDC(v14, v11);
            if ( v16->fields.classId == classId )
              return v14;
          }
        }
        ++v14;
      }
      while ( (unsigned int)max_length != v14 );
    }
  }
  LODWORD(v14) = -1;
  return v14;
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_o *v6; // x8

  if ( index < 0 )
  {
    LODWORD(ServantLeaderInfoByReturnType) = 0;
  }
  else
  {
    ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                      this,
                                      returnSupportServantType,
                                      *(const MethodInfo **)&returnSupportServantType);
    if ( ServantLeaderInfoByReturnType )
    {
      if ( SLODWORD(ServantLeaderInfoByReturnType->max_length) > index
        && (v6 = ServantLeaderInfoByReturnType->m_Items[index]) != 0 )
      {
        LODWORD(ServantLeaderInfoByReturnType) = v6->fields.limitCount;
      }
      else
      {
        LODWORD(ServantLeaderInfoByReturnType) = 0;
      }
    }
  }
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getLv(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_o *v6; // x8

  if ( index < 0 )
  {
    LODWORD(ServantLeaderInfoByReturnType) = 0;
  }
  else
  {
    ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                      this,
                                      returnSupportServantType,
                                      *(const MethodInfo **)&returnSupportServantType);
    if ( ServantLeaderInfoByReturnType )
    {
      if ( SLODWORD(ServantLeaderInfoByReturnType->max_length) > index
        && (v6 = ServantLeaderInfoByReturnType->m_Items[index]) != 0 )
      {
        LODWORD(ServantLeaderInfoByReturnType) = v6->fields.lv;
      }
      else
      {
        LODWORD(ServantLeaderInfoByReturnType) = 0;
      }
    }
  }
  return (int)ServantLeaderInfoByReturnType;
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getMaxLv(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_array *v7; // x20
  Il2CppClass **v8; // x22
  ServantLeaderInfo_o **v9; // x22
  Il2CppClass *v10; // t1
  _BOOL8 IsNpc; // x0
  __int64 v12; // x1

  if ( index < 0 )
    return 0;
  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    return 0;
  v7 = ServantLeaderInfoByReturnType;
  if ( SLODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    return 0;
  v8 = &ServantLeaderInfoByReturnType->obj.klass + (unsigned int)index;
  v10 = v8[4];
  v9 = (ServantLeaderInfo_o **)(v8 + 4);
  if ( !v10 )
    return 0;
  IsNpc = Follower__IsNpc(this->fields.type, 0);
  if ( IsNpc )
    return 0;
  if ( LODWORD(v7->max_length) <= index )
    sub_2213CE4(IsNpc);
  if ( !*v9 )
    sub_2213CDC(0, v12);
  return ServantLeaderInfo__getLevelMax(*v9, 0);
}


// local variable allocation has failed, the output may be wrong!
ServantLeaderInfo_o *FollowerInfo__getServantLeaderInfo(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *result; // x0

  if ( index < 0 )
    return 0;
  result = (ServantLeaderInfo_o *)FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( result )
  {
    if ( SLODWORD(result->fields.userId) <= index )
      return 0;
    else
      return (ServantLeaderInfo_o *)*((_QWORD *)&result->fields.classId + (unsigned int)index);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void FollowerInfo__getSkillInfo(
        FollowerInfo_o *this,
        SkillInfo_array **skillInfoList,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v8);
  ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, skillInfoList, -1, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getSvtId(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  ServantLeaderInfo_o *v6; // x0

  if ( (index & 0x80000000) == 0
    && (ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                          this,
                                          returnSupportServantType,
                                          *(const MethodInfo **)&returnSupportServantType)) != 0
    && SLODWORD(ServantLeaderInfoByReturnType->max_length) > index
    && (v6 = ServantLeaderInfoByReturnType->m_Items[index]) != 0 )
  {
    return ServantLeaderInfo__GetServantId(v6, -1, 0);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t FollowerInfo__getTreasureDeviceLevelIcon(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v6; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&returnSupportServantType);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v6);
  return ServantLeaderInfo__getTreasureDeviceLevelIcon((ServantLeaderInfo_o *)ServantLeaderInfoByReturnType, 0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__getUniqueSvtRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v8; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v8);
  return ServantLeaderInfo__getUniqueSvtRestriction(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           questRestrictionInfo,
           0);
}


// local variable allocation has failed, the output may be wrong!
bool FollowerInfo__getUniqueSvtRestriction_48752776(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_array *ServantLeaderInfoByReturnType; // x0
  __int64 v12; // x1

  ServantLeaderInfoByReturnType = FollowerInfo__GetServantLeaderInfoByReturnType(
                                    this,
                                    returnSupportServantType,
                                    *(const MethodInfo **)&index);
  if ( !ServantLeaderInfoByReturnType )
    goto LABEL_5;
  if ( LODWORD(ServantLeaderInfoByReturnType->max_length) <= index )
    sub_2213CE4(ServantLeaderInfoByReturnType);
  ServantLeaderInfoByReturnType = (ServantLeaderInfo_array *)ServantLeaderInfoByReturnType->m_Items[index];
  if ( !ServantLeaderInfoByReturnType )
LABEL_5:
    sub_2213CDC(ServantLeaderInfoByReturnType, v12);
  return ServantLeaderInfo__getUniqueSvtRestriction_50594804(
           (ServantLeaderInfo_o *)ServantLeaderInfoByReturnType,
           questRestrictionInfo,
           partyItem,
           num,
           0);
}


int64_t FollowerInfo__getUpdatedAt(FollowerInfo_o *this, const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v4; // x1
  bool IsNullOrEmpty; // w8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x8
  ServantLeaderInfo_o *v7; // x8

  result = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.userSvtLeaderHash, 0);
  if ( (result & 1) != 0 )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                      (System_Collections_ICollection_o *)this->fields.eventUserSvtLeaderHash,
                      0);
    result = 0;
    if ( IsNullOrEmpty )
      return result;
    eventUserSvtLeaderHash = this->fields.eventUserSvtLeaderHash;
    if ( !eventUserSvtLeaderHash )
      goto LABEL_4;
  }
  else
  {
    eventUserSvtLeaderHash = this->fields.userSvtLeaderHash;
    if ( !eventUserSvtLeaderHash )
LABEL_4:
      sub_2213CDC(result, v4);
  }
  if ( !LODWORD(eventUserSvtLeaderHash->max_length) )
    sub_2213CE4(result);
  v7 = eventUserSvtLeaderHash->m_Items[0];
  if ( v7 )
    return v7->fields.updatedAt;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
int64_t FollowerInfo__getUserSvtId(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v6; // x8

  if ( index < 0 )
    return 0;
  result = (int64_t)FollowerInfo__GetServantLeaderInfoByReturnType(
                      this,
                      returnSupportServantType,
                      *(const MethodInfo **)&returnSupportServantType);
  if ( result )
  {
    if ( *(_DWORD *)(result + 24) > index && (v6 = *(_QWORD *)(result + 8LL * (unsigned int)index + 32)) != 0 )
      return *(_QWORD *)(v6 + 40);
    else
      return 0;
  }
  return result;
}


int32_t FollowerInfo__get_FollowerType(FollowerInfo_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


bool FollowerInfo__get_IsNpc(FollowerInfo_o *this, const MethodInfo *method)
{
  return Follower__IsNpc(this->fields.type, 0);
}


System_String_o *FollowerInfo__get_OverwriteTreasureDeviceName(FollowerInfo_o *this, const MethodInfo *method)
{
  return this->fields._OverwriteTreasureDeviceName_k__BackingField;
}


void FollowerInfo__set_OverwriteTreasureDeviceName(
        FollowerInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OverwriteTreasureDeviceName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OverwriteTreasureDeviceName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FollowerInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597039D & 1) == 0 )
  {
    sub_2213A60(&FollowerInfo___c_TypeInfo);
    byte_597039D = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(FollowerInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerInfo___c_TypeInfo->static_fields->__9 = (struct FollowerInfo___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)FollowerInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FollowerInfo___c___ctor(FollowerInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t FollowerInfo___c___getEquipAtk_b__59_0(
        FollowerInfo___c_o *this,
        EquipTargetInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.atk;
}


int32_t FollowerInfo___c___getEquipHp_b__58_0(FollowerInfo___c_o *this, EquipTargetInfo_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.hp;
}